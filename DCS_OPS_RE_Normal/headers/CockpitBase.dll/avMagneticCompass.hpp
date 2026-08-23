#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMagneticCompass
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMagneticCompass
{
public:

    // RVA: 0x152 | Ordinal: 339
        void avMagneticCompass(class cockpit::avMagneticCompass const &);

    // RVA: 0x153 | Ordinal: 340
        void avMagneticCompass(void);

    // RVA: 0xF14 | Ordinal: 3861
        void get_deviation(void) const;

    // RVA: 0xF6E | Ordinal: 3951
        void get_heading(void) const;

    // RVA: 0xFAF | Ordinal: 4016
        void get_m_north(class wPosition3<double> &, int, double &, double &, double &);

    // RVA: 0xFB0 | Ordinal: 4017
        void get_mag_decl(void) const;

    // RVA: 0xFB1 | Ordinal: 4018
        void get_mag_incl(void) const;

    // RVA: 0xFB3 | Ordinal: 4020
        void get_magnetic_north(class wPosition3<double> &, double &, double &, double &);

    // RVA: 0x1050 | Ordinal: 4177
        void get_reverse_magnetic_north(class wPosition3<double> &, double &, double &, double &);

    // RVA: 0x11D0 | Ordinal: 4561
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x15F9 | Ordinal: 5626
        void repair(void);

    // RVA: 0x185C | Ordinal: 6237
        void set_damage(unsigned int, bool);

    // RVA: 0x322 | Ordinal: 803
        void _avMagneticCompass(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMAGNETICCOMPASS_HPP
