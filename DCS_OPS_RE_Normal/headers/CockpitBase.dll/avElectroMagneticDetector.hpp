#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avElectroMagneticDetector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avElectroMagneticDetector
{
public:

    // RVA: 0x87B | Ordinal: 2172
        void SetCommand(int, float);

    // RVA: 0x10A | Ordinal: 267
        void avElectroMagneticDetector(class cockpit::avElectroMagneticDetector const &);

    // RVA: 0x10B | Ordinal: 268
        void avElectroMagneticDetector(void);

    // RVA: 0xF07 | Ordinal: 3848
        void get_dbg_bank(void) const;

    // RVA: 0xF08 | Ordinal: 3849
        void get_dbg_pitch(void) const;

    // RVA: 0x11B5 | Ordinal: 4534
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x15AF | Ordinal: 5552
        void release(void);

    // RVA: 0x1AAE | Ordinal: 6831
        void update(void);

    // RVA: 0x300 | Ordinal: 769
        void _avElectroMagneticDetector(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVELECTROMAGNETICDETECTOR_HPP
