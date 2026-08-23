#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x81A | Ordinal: 2075
        void getDesc_(void);

    // RVA: 0x8CE | Ordinal: 2255
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9CB | Ordinal: 2508
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA5D | Ordinal: 2654
        void getTargetLOS(class Math::Vector<3, double> &, double, unsigned char *);

    // RVA: 0xD05 | Ordinal: 3334
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSATSEEKER_HPP
