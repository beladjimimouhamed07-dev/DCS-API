#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: renderer.dll
// Class: render
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class render
{
public:

    // RVA: 0x3 | Ordinal: 4
        void addGlobalDefine(class render::DefinePair);

    // RVA: 0x4 | Ordinal: 5
        void addReloadTexturesCallback(void (__cdecl *)(void));

    // RVA: 0x5 | Ordinal: 6
        void addShaderCache(char const *, int);

    // RVA: 0x6 | Ordinal: 7
        void add_on_shutdown_callback(class std::function<void __cdecl(void)> const &);

    // RVA: 0xB | Ordinal: 12
        void disablePeriodicallyResourcesUnloading(void);

    // RVA: 0xE | Ordinal: 15
        void enablePeriodicallyResourcesUnloading(double);

    // RVA: 0xF | Ordinal: 16
        void forceReloadShaders(char const *);

    // RVA: 0x11 | Ordinal: 18
        void getFileName(char const *, class ed::basic_string<char> &);

    // RVA: 0x12 | Ordinal: 19
        void getGlobalDefined(class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>> &);

    // RVA: 0x13 | Ordinal: 20
        void getShadersVFS(void);

    // RVA: 0x14 | Ordinal: 21
        void getTexturesVFS(void);

    // RVA: 0x15 | Ordinal: 22
        void getUsedShaders(class ed::vector<struct RenderAPI::UsedShader, class ed::allocator<struct RenderAPI::UsedShader>> &);

    // RVA: 0x18 | Ordinal: 25
        void onReloadTextures(void);

    // RVA: 0x19 | Ordinal: 26
        void openFirstOccurrence(char const *);

    // RVA: 0x21 | Ordinal: 34
        void parseDefine(char const *);

    // RVA: 0x22 | Ordinal: 35
        void registerReloadShadersCallback(class render::ReloadShadersCallback *);

    // RVA: 0x23 | Ordinal: 36
        void reloadShaders(void);

    // RVA: 0x24 | Ordinal: 37
        void removeGlobalDefine(class render::DefinePair);

    // RVA: 0x25 | Ordinal: 38
        void removeReloadTexturesCallback(void (__cdecl *)(void));

    // RVA: 0x26 | Ordinal: 39
        void setGlobalDefined(class ed::vector<class render::DefinePair, class ed::allocator<class render::DefinePair>> const &);

    // RVA: 0x27 | Ordinal: 40
        void setShadersVFS(class std::shared_ptr<class edvfs::IVFSandbox>);

    // RVA: 0x28 | Ordinal: 41
        void setTexturesVFS(class std::shared_ptr<class edvfs::IVFSandbox>);

    // RVA: 0x2A | Ordinal: 43
        void shutdown(void);

    // RVA: 0x2B | Ordinal: 44
        void test(char const *);

    // RVA: 0x2C | Ordinal: 45
        void texturesGC(void);

    // RVA: 0x2D | Ordinal: 46
        void unregisterReloadShadersCallback(class render::ReloadShadersCallback *);

    // RVA: 0x30 | Ordinal: 49
        void waiAllTexturesToLoad(void);
};

// DCS_OPS_RE_RENDERER.DLL_RENDER_HPP
