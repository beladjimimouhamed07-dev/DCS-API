#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avInitData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avInitData
{
public:

    // RVA: 0x138 | Ordinal: 313
        void avInitData(void);

    // RVA: 0xB17 | Ordinal: 2840
        void copy(struct wsInitData *);

    // RVA: 0xE36 | Ordinal: 3639
        void getUnitCreationTime(void);

    // RVA: 0xEFF | Ordinal: 3840
        void get_custom_unit_property(class ed::basic_string<char> const &) const;

    // RVA: 0x117B | Ordinal: 4476
        void init_birthplace(unsigned int);

    // RVA: 0x162A | Ordinal: 5675
        void resetUnitCreationTime(void);

    // RVA: 0x1654 | Ordinal: 5717
        void save_in_state(struct lua_State *);

    // RVA: 0x1688 | Ordinal: 5769
        void set(struct wsInitData *);

    // RVA: 0x1689 | Ordinal: 5770
        void set(struct wsPlaneJump *);

    // RVA: 0x314 | Ordinal: 789
        void _avInitData(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVINITDATA_HPP
