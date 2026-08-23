#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: Torpedo_Const
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Torpedo_Const
{
public:

    // RVA: 0x23 | Ordinal: 36
        void Torpedo_Const(struct Torpedo_Const &&);

    // RVA: 0x24 | Ordinal: 37
        void Torpedo_Const(struct Torpedo_Const const &);

    // RVA: 0x25 | Ordinal: 38
        void Torpedo_Const(void);

    // RVA: 0x393 | Ordinal: 916
        void getDiveDepth(float, float) const;

    // RVA: 0x39A | Ordinal: 923
        void getDmaxLaunch(float, float) const;

    // RVA: 0x3A1 | Ordinal: 930
        void getDminLaunch(float, float) const;

    // RVA: 0x3E4 | Ordinal: 997
        void getMaxHbyDepth(float);

    // RVA: 0x3E9 | Ordinal: 1002
        void getMaxVbyDepth(float);

    // RVA: 0x3EA | Ordinal: 1003
        void getMinHbyDepth(float);

    // RVA: 0x3EB | Ordinal: 1004
        void getMinVbyDepth(float);

    // RVA: 0x47E | Ordinal: 1151
        void hasDiveDepthData(void);

    // RVA: 0x480 | Ordinal: 1153
        void hasDmaxLaunchData(void);

    // RVA: 0x482 | Ordinal: 1155
        void hasDminLaunchData(void);

    // RVA: 0x63 | Ordinal: 100
        void _Torpedo_Const(void);
};

// DCS_OPS_RE_WEAPONS.DLL_TORPEDO_CONST_HPP
