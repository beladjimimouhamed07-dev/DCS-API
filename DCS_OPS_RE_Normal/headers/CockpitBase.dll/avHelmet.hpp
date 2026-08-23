#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avHelmet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avHelmet
{
public:

    // RVA: 0x87F | Ordinal: 2176
        void SetCommand(int, float);

    // RVA: 0x119 | Ordinal: 282
        void avHelmet(class cockpit::avHelmet const &);

    // RVA: 0x11A | Ordinal: 283
        void avHelmet(void);

    // RVA: 0xA3A | Ordinal: 2619
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xEC0 | Ordinal: 3777
        void get_brightness(void) const;

    // RVA: 0x111D | Ordinal: 4382
        void helmet_product_type(void) const;

    // RVA: 0x111E | Ordinal: 4383
        void helmet_type(void) const;

    // RVA: 0x11BC | Ordinal: 4541
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x15B1 | Ordinal: 5554
        void release(void);

    // RVA: 0x16ED | Ordinal: 5870
        void setElecPower(bool);

    // RVA: 0x308 | Ordinal: 777
        void _avHelmet(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVHELMET_HPP
