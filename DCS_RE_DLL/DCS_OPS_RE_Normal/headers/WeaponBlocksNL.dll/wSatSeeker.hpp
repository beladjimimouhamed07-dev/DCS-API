#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wSatSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSatSeeker
{
public:

    // RVA: 0x4EA | Ordinal: 1259
        void __getInputPorts(void);

    // RVA: 0x583 | Ordinal: 1412
        void __getOutputPorts(void);

    // RVA: 0x812 | Ordinal: 2067
        void getDesc_(void);

    // RVA: 0x8C5 | Ordinal: 2246
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C2 | Ordinal: 2499
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA4E | Ordinal: 2639
        void getTargetLOS(class Math::Vector<3, double> &, double, unsigned char *);

    // RVA: 0xCBB | Ordinal: 3260
        void setSatError(void);

    // RVA: 0x19D | Ordinal: 414
        void wSatSeeker(class wSatSeeker &&);

    // RVA: 0x19E | Ordinal: 415
        void wSatSeeker(class wSatSeeker const &);

    // RVA: 0x19F | Ordinal: 416
        void wSatSeeker(class wSatSeekerDescriptor const *);

    // RVA: 0x27C | Ordinal: 637
        void _wSatSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WSATSEEKER_HPP
