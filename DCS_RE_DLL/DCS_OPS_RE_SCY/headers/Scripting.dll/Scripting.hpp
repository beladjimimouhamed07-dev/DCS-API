#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Scripting.dll
// Class: Scripting
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Scripting
{
public:

    // RVA: 0x0 | Ordinal: 1
        void cargoResourcePayloadRead(class Lua::Config &, struct inventoryInfo &);

    // RVA: 0x1 | Ordinal: 2
        void cargoResourcePayloadWrite(class Lua::Config &, struct inventoryInfo const &);

    // RVA: 0x2 | Ordinal: 3
        void clearLuaTimers(void);

    // RVA: 0x3 | Ordinal: 4
        void createLuaAirbase(struct lua_State *, unsigned int);

    // RVA: 0x4 | Ordinal: 5
        void createLuaAirbase(struct lua_State *, class wAirbase *);

    // RVA: 0x5 | Ordinal: 6
        void createLuaGroup(struct lua_State *, unsigned int);

    // RVA: 0x6 | Ordinal: 7
        void createLuaGroup(struct lua_State *, class wControl *);

    // RVA: 0x7 | Ordinal: 8
        void createLuaViObject(struct lua_State *, class viObject *);

    // RVA: 0x8 | Ordinal: 9
        void createLuaWorldObject(struct lua_State *, unsigned int);

    // RVA: 0x9 | Ordinal: 10
        void createLuaWorldObject(struct lua_State *, class MovingObject *);

    // RVA: 0xA | Ordinal: 11
        void createWorldEvent(struct lua_State *);

    // RVA: 0xB | Ordinal: 12
        void dynamicAssignMissionID(class Lua::Config &);

    // RVA: 0xC | Ordinal: 13
        void getReportErrorUseMessageBox(void);

    // RVA: 0xD | Ordinal: 14
        void getUnitCallsign(class viObject *, class ed::basic_string<char> &);

    // RVA: 0xE | Ordinal: 15
        void luaMathRandomInit(unsigned int, unsigned int);

    // RVA: 0xF | Ordinal: 16
        void regLuaAI(struct lua_State *);

    // RVA: 0x10 | Ordinal: 17
        void regLuaAirbase(struct lua_State *);

    // RVA: 0x11 | Ordinal: 18
        void regLuaAtmosphere(struct lua_State *);

    // RVA: 0x12 | Ordinal: 19
        void regLuaCoalition(struct lua_State *);

    // RVA: 0x13 | Ordinal: 20
        void regLuaCommunicator(struct lua_State *);

    // RVA: 0x14 | Ordinal: 21
        void regLuaController(struct lua_State *);

    // RVA: 0x15 | Ordinal: 22
        void regLuaCoord(struct lua_State *);

    // RVA: 0x16 | Ordinal: 23
        void regLuaDebugCommunicator(struct lua_State *);

    // RVA: 0x17 | Ordinal: 24
        void regLuaDisposition(struct lua_State *);

    // RVA: 0x18 | Ordinal: 25
        void regLuaEnv(struct lua_State *, bool);

    // RVA: 0x19 | Ordinal: 26
        void regLuaGroup(struct lua_State *);

    // RVA: 0x1A | Ordinal: 27
        void regLuaLand(struct lua_State *);

    // RVA: 0x1B | Ordinal: 28
        void regLuaMath(struct lua_State *);

    // RVA: 0x1C | Ordinal: 29
        void regLuaMessage(struct lua_State *);

    // RVA: 0x1D | Ordinal: 30
        void regLuaMissionCommandManager(struct lua_State *);

    // RVA: 0x1E | Ordinal: 31
        void regLuaMsgConstants(struct lua_State *);

    // RVA: 0x1F | Ordinal: 32
        void regLuaObject(struct lua_State *);

    // RVA: 0x20 | Ordinal: 33
        void regLuaRadio(struct lua_State *);

    // RVA: 0x21 | Ordinal: 34
        void regLuaRadioMeasureEquipment(struct lua_State *);

    // RVA: 0x22 | Ordinal: 35
        void regLuaSceneryObject(struct lua_State *);

    // RVA: 0x23 | Ordinal: 36
        void regLuaScoreList(struct lua_State *);

    // RVA: 0x24 | Ordinal: 37
        void regLuaSpot(struct lua_State *);

    // RVA: 0x25 | Ordinal: 38
        void regLuaStaticObject(struct lua_State *);

    // RVA: 0x26 | Ordinal: 39
        void regLuaTime(struct lua_State *);

    // RVA: 0x27 | Ordinal: 40
        void regLuaTrigger(struct lua_State *);

    // RVA: 0x28 | Ordinal: 41
        void regLuaUnit(struct lua_State *);

    // RVA: 0x29 | Ordinal: 42
        void regLuaView(struct lua_State *);

    // RVA: 0x2A | Ordinal: 43
        void regLuaWeapon(struct lua_State *);

    // RVA: 0x2B | Ordinal: 44
        void regLuaWorld(struct lua_State *);

    // RVA: 0x2C | Ordinal: 45
        void reportError(char const *, char const *);

    // RVA: 0x2D | Ordinal: 46
        void reportError(char const *);

    // RVA: 0x2E | Ordinal: 47
        void setReportErrorUseMessageBox(bool);
};

// DCS_OPS_RE_SCRIPTING.DLL_SCRIPTING_HPP
