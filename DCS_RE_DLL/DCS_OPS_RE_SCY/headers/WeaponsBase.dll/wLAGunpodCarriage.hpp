#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wLAGunpodCarriage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wLAGunpodCarriage
{
public:

    // RVA: 0xDD | Ordinal: 222
        void cachePosition_(void);

    // RVA: 0x18A | Ordinal: 395
        void getID(void) const;

    // RVA: 0x19E | Ordinal: 415
        void getMuzzleBoreSightPosition(void) const;

    // RVA: 0x1E1 | Ordinal: 482
        void get_object(void) const;

    // RVA: 0x259 | Ordinal: 602
        void setDrawArgument(int, float);

    // RVA: 0x2A9 | Ordinal: 682
        void sync_gun_T(void);

    // RVA: 0x2B | Ordinal: 44
        void wLAGunpodCarriage(class wLAGunpodCarriage &&);

    // RVA: 0x2C | Ordinal: 45
        void wLAGunpodCarriage(class wLAGunpodCarriage const &);

    // RVA: 0x2D | Ordinal: 46
        void wLAGunpodCarriage(class IwoLA *, class IwoAIPilon *, signed char);

    // RVA: 0x5D | Ordinal: 94
        void _wLAGunpodCarriage(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WLAGUNPODCARRIAGE_HPP
