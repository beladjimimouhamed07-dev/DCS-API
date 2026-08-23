#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects.dll
// Class: Effects
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Effects
{
public:

    // RVA: 0x29 | Ordinal: 42
        void init_effects(struct GraphicsCore::IAtmosphereSampler *, class std::shared_ptr<class edvfs::IVFSandbox>);

    // RVA: 0x2B | Ordinal: 44
        void loadShipWakeConfig(char const *);

    // RVA: 0x2D | Ordinal: 46
        void regLua(struct lua_State *);

    // RVA: 0x2E | Ordinal: 47
        void release_effects(void);
};

// DCS_OPS_RE_EFFECTS.DLL_EFFECTS_HPP
