#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <cstring>

// DCS Lua 5.1 C API (resolved at runtime from the host process).
struct lua_State;

typedef int (*lua_CFunction)(lua_State*);

static const int LUA_GLOBALSINDEX = -10002;

typedef int         (*PFN_lua_gettop)(lua_State*);
typedef void        (*PFN_lua_settop)(lua_State*, int);
typedef void        (*PFN_lua_pushnumber)(lua_State*, double);
typedef void        (*PFN_lua_pushboolean)(lua_State*, int);
typedef void        (*PFN_lua_pushstring)(lua_State*, const char*);
typedef void        (*PFN_lua_pushcclosure)(lua_State*, lua_CFunction, int);
typedef double      (*PFN_lua_tonumber)(lua_State*, int);
typedef int         (*PFN_lua_toboolean)(lua_State*, int);
typedef void        (*PFN_lua_createtable)(lua_State*, int, int);
typedef void        (*PFN_lua_setfield)(lua_State*, int, const char*);
typedef void        (*PFN_lua_settable)(lua_State*, int);

static PFN_lua_gettop        p_lua_gettop        = nullptr;
static PFN_lua_settop        p_lua_settop        = nullptr;
static PFN_lua_pushnumber    p_lua_pushnumber    = nullptr;
static PFN_lua_pushboolean   p_lua_pushboolean   = nullptr;
static PFN_lua_pushstring    p_lua_pushstring    = nullptr;
static PFN_lua_pushcclosure  p_lua_pushcclosure  = nullptr;
static PFN_lua_tonumber      p_lua_tonumber      = nullptr;
static PFN_lua_toboolean     p_lua_toboolean     = nullptr;
static PFN_lua_createtable   p_lua_createtable   = nullptr;
static PFN_lua_setfield      p_lua_setfield      = nullptr;

// CockpitBase.dll — MSVC x64: first argument in RCX.
typedef int  (__cdecl *PFN_GET_FLIR)();
typedef void (__cdecl *PFN_SET_FLIR)(int condition);
typedef void (__cdecl *PFN_SET_IR_EFFECT)(int effect);
typedef void*(__cdecl *PFN_AVTV_CTOR)(void* self);

static HMODULE              g_cockpit         = nullptr;
static PFN_GET_FLIR         g_get_flir        = nullptr;
static PFN_SET_FLIR         g_set_flir        = nullptr;
static PFN_SET_IR_EFFECT    g_set_ir_effect   = nullptr;
static PFN_AVTV_CTOR        g_avtv_ctor       = nullptr;
static int                  g_mode            = 2; // 1 = FLIR / IR, 2 = TV / CCD
static int                  g_ir_effect       = 0;

// ED names this enum TVScreenCondition. Values used by stock TV/FLIR indicators:
// 1 = IR (FLIR), 2 = CCD (day TV). Other values are left for experimentation.
enum TVScreenCondition
{
    TVC_NONE = 0,
    TVC_IR   = 1,
    TVC_CCD  = 2
};

static FARPROC find_proc(HMODULE module, const char* name)
{
    if (!module || !name)
    {
        return nullptr;
    }
    return GetProcAddress(module, name);
}

static bool resolve_lua_from(HMODULE module)
{
    if (!module)
    {
        return false;
    }

    auto push_number = reinterpret_cast<PFN_lua_pushnumber>(
        GetProcAddress(module, "lua_pushnumber"));
    auto push_cclosure = reinterpret_cast<PFN_lua_pushcclosure>(
        GetProcAddress(module, "lua_pushcclosure"));
    auto set_field = reinterpret_cast<PFN_lua_setfield>(
        GetProcAddress(module, "lua_setfield"));

    if (!push_number || !push_cclosure || !set_field)
    {
        return false;
    }

    p_lua_pushnumber   = push_number;
    p_lua_pushcclosure = push_cclosure;
    p_lua_setfield     = set_field;
    p_lua_gettop       = reinterpret_cast<PFN_lua_gettop>(GetProcAddress(module, "lua_gettop"));
    p_lua_settop       = reinterpret_cast<PFN_lua_settop>(GetProcAddress(module, "lua_settop"));
    p_lua_pushboolean  = reinterpret_cast<PFN_lua_pushboolean>(GetProcAddress(module, "lua_pushboolean"));
    p_lua_pushstring   = reinterpret_cast<PFN_lua_pushstring>(GetProcAddress(module, "lua_pushstring"));
    p_lua_tonumber     = reinterpret_cast<PFN_lua_tonumber>(GetProcAddress(module, "lua_tonumber"));
    p_lua_toboolean    = reinterpret_cast<PFN_lua_toboolean>(GetProcAddress(module, "lua_toboolean"));
    p_lua_createtable  = reinterpret_cast<PFN_lua_createtable>(GetProcAddress(module, "lua_createtable"));
    return p_lua_createtable != nullptr;
}

static bool resolve_lua()
{
    if (p_lua_pushnumber && p_lua_createtable)
    {
        return true;
    }

    const char* named[] = {
        "lua.dll",
        "lua51.dll",
        "lua5.1.dll",
        "luaJIT.dll",
        nullptr
    };

    for (int i = 0; named[i]; ++i)
    {
        HMODULE m = GetModuleHandleA(named[i]);
        if (!m)
        {
            m = LoadLibraryA(named[i]);
        }
        if (resolve_lua_from(m))
        {
            return true;
        }
    }

    if (resolve_lua_from(GetModuleHandleA(nullptr)))
    {
        return true;
    }

    HMODULE modules[512];
    DWORD   needed = 0;
    HANDLE  process = GetCurrentProcess();
    using PFN_EnumProcessModules = BOOL (WINAPI*)(HANDLE, HMODULE*, DWORD, LPDWORD);
    HMODULE psapi = GetModuleHandleA("psapi.dll");
    if (!psapi)
    {
        psapi = LoadLibraryA("psapi.dll");
    }
    auto enum_modules = reinterpret_cast<PFN_EnumProcessModules>(
        psapi ? GetProcAddress(psapi, "EnumProcessModules") : nullptr);
    if (!enum_modules)
    {
        return false;
    }
    if (!enum_modules(process, modules, sizeof(modules), &needed))
    {
        return false;
    }
    const unsigned count = needed / sizeof(HMODULE);
    for (unsigned i = 0; i < count; ++i)
    {
        if (resolve_lua_from(modules[i]))
        {
            return true;
        }
    }
    return false;
}

static bool resolve_cockpit()
{
    if (g_get_flir && g_set_flir)
    {
        return true;
    }

    g_cockpit = GetModuleHandleA("CockpitBase.dll");
    if (!g_cockpit)
    {
        g_cockpit = LoadLibraryA("CockpitBase.dll");
    }
    if (!g_cockpit)
    {
        return false;
    }

    g_get_flir = reinterpret_cast<PFN_GET_FLIR>(
        find_proc(g_cockpit, "?GET_FLIR_TECHNIQUE@cockpit@@YA?AW4TVScreenCondition@@XZ"));
    g_set_flir = reinterpret_cast<PFN_SET_FLIR>(
        find_proc(g_cockpit, "?SET_FLIR_TECHINIQE_DEFAULT@cockpit@@YAXW4TVScreenCondition@@@Z"));
    g_set_ir_effect = reinterpret_cast<PFN_SET_IR_EFFECT>(
        find_proc(g_cockpit, "?set_preffered_IR_effect@avTVSensor@cockpit@@SAXH@Z"));
    g_avtv_ctor = reinterpret_cast<PFN_AVTV_CTOR>(
        find_proc(g_cockpit, "??0avTVSensor@cockpit@@QEAA@XZ"));

    return g_set_flir != nullptr;
}

static void apply_mode(int mode)
{
    if (mode != TVC_IR && mode != TVC_CCD)
    {
        mode = TVC_CCD;
    }
    g_mode = mode;

    if (!resolve_cockpit())
    {
        return;
    }

    if (g_set_flir)
    {
        g_set_flir(g_mode);
    }

    if (g_set_ir_effect)
    {
        g_ir_effect = (g_mode == TVC_IR) ? 1 : 0;
        g_set_ir_effect(g_ir_effect);
    }
}

static void lua_set_cfunction(lua_State* L, const char* name, lua_CFunction fn)
{
    p_lua_pushcclosure(L, fn, 0);
    p_lua_setfield(L, -2, name);
}

static int l_available(lua_State* L)
{
    p_lua_pushboolean(L, resolve_cockpit() ? 1 : 0);
    return 1;
}

static int l_tv_ctor_resolved(lua_State* L)
{
    resolve_cockpit();
    p_lua_pushboolean(L, g_avtv_ctor ? 1 : 0);
    return 1;
}

static int l_get_mode(lua_State* L)
{
    int mode = g_mode;
    if (g_get_flir)
    {
        mode = g_get_flir();
        if (mode == TVC_IR || mode == TVC_CCD)
        {
            g_mode = mode;
        }
    }
    p_lua_pushnumber(L, static_cast<double>(g_mode));
    return 1;
}

static int l_set_mode(lua_State* L)
{
    const int mode = (p_lua_gettop && p_lua_tonumber && p_lua_gettop(L) >= 1)
        ? static_cast<int>(p_lua_tonumber(L, 1))
        : TVC_CCD;
    apply_mode(mode);
    p_lua_pushboolean(L, resolve_cockpit() ? 1 : 0);
    return 1;
}

static int l_set_tv(lua_State* L)
{
    apply_mode(TVC_CCD);
    p_lua_pushboolean(L, 1);
    return 1;
}

static int l_set_flir(lua_State* L)
{
    apply_mode(TVC_IR);
    p_lua_pushboolean(L, 1);
    return 1;
}

static int l_set_ir_effect(lua_State* L)
{
    resolve_cockpit();
    const int effect = (p_lua_gettop && p_lua_tonumber && p_lua_gettop(L) >= 1)
        ? static_cast<int>(p_lua_tonumber(L, 1))
        : 0;
    g_ir_effect = effect;
    if (g_set_ir_effect)
    {
        g_set_ir_effect(effect);
        p_lua_pushboolean(L, 1);
    }
    else
    {
        p_lua_pushboolean(L, 0);
    }
    return 1;
}

static int l_status(lua_State* L)
{
    resolve_cockpit();
    p_lua_createtable(L, 0, 6);
    p_lua_pushboolean(L, g_cockpit ? 1 : 0);
    p_lua_setfield(L, -2, "cockpit_base");
    p_lua_pushboolean(L, g_avtv_ctor ? 1 : 0);
    p_lua_setfield(L, -2, "avTVSensor");
    p_lua_pushboolean(L, g_set_flir ? 1 : 0);
    p_lua_setfield(L, -2, "set_flir");
    p_lua_pushboolean(L, g_get_flir ? 1 : 0);
    p_lua_setfield(L, -2, "get_flir");
    p_lua_pushboolean(L, g_set_ir_effect ? 1 : 0);
    p_lua_setfield(L, -2, "ir_effect");
    p_lua_pushnumber(L, static_cast<double>(g_mode));
    p_lua_setfield(L, -2, "mode");
    return 1;
}

extern "C" __declspec(dllexport)
int luaopen_Rafalesystems(lua_State* L)
{
    if (!resolve_lua() || !L)
    {
        return 0;
    }

    resolve_cockpit();
    apply_mode(TVC_CCD);

    p_lua_createtable(L, 0, 10);
    lua_set_cfunction(L, "available", l_available);
    lua_set_cfunction(L, "tv_class_resolved", l_tv_ctor_resolved);
    lua_set_cfunction(L, "get_mode", l_get_mode);
    lua_set_cfunction(L, "set_mode", l_set_mode);
    lua_set_cfunction(L, "set_tv", l_set_tv);
    lua_set_cfunction(L, "set_flir", l_set_flir);
    lua_set_cfunction(L, "set_ir_effect", l_set_ir_effect);
    lua_set_cfunction(L, "status", l_status);
    p_lua_pushstring(L, "Rafalesystems");
    p_lua_setfield(L, -2, "name");
    return 1;
}

BOOL APIENTRY DllMain(HMODULE, DWORD, LPVOID)
{
    return TRUE;
}
