#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wLAGunCarriage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wLAGunCarriage
{
public:

    // RVA: 0xDC | Ordinal: 221
        void cachePosition_(void);

    // RVA: 0x19D | Ordinal: 414
        void getMuzzleBoreSightPosition(void) const;

    // RVA: 0x1E0 | Ordinal: 481
        void get_object(void) const;

    // RVA: 0x258 | Ordinal: 601
        void setDrawArgument(int, float);

    // RVA: 0x2A8 | Ordinal: 681
        void sync_gun_T(void);

    // RVA: 0x28 | Ordinal: 41
        void wLAGunCarriage(class wLAGunCarriage &&);

    // RVA: 0x29 | Ordinal: 42
        void wLAGunCarriage(class wLAGunCarriage const &);

    // RVA: 0x2A | Ordinal: 43
        void wLAGunCarriage(class IwoLA *, signed char);

    // RVA: 0x5C | Ordinal: 93
        void _wLAGunCarriage(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WLAGUNCARRIAGE_HPP
