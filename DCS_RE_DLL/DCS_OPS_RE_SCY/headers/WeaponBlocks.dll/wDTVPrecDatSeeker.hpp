#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wDTVPrecDatSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDTVPrecDatSeeker
{
public:

    // RVA: 0x4A1 | Ordinal: 1186
        void __getInputPorts(void);

    // RVA: 0x53A | Ordinal: 1339
        void __getOutputPorts(void);

    // RVA: 0x623 | Ordinal: 1572
        void calcRealtive(bool);

    // RVA: 0x7D1 | Ordinal: 2002
        void getDesc_(void);

    // RVA: 0x885 | Ordinal: 2182
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x982 | Ordinal: 2435
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAF2 | Ordinal: 2803
        void isTargetLocked(unsigned int);

    // RVA: 0xBB1 | Ordinal: 2994
        void registerStateData(void);

    // RVA: 0xD28 | Ordinal: 3369
        void setSyncTargetPoint(class Math::Vector<3, double> const &);

    // RVA: 0xDEC | Ordinal: 3565
        void syncRelative(class Math::Vector<3, double> const &);

    // RVA: 0xE1B | Ordinal: 3612
        void updateOffset(void);

    // RVA: 0xE28 | Ordinal: 3625
        void updateTargetDynamicError(void);

    // RVA: 0xAF | Ordinal: 176
        void wDTVPrecDatSeeker(class wDTVPrecDatSeeker &&);

    // RVA: 0xB0 | Ordinal: 177
        void wDTVPrecDatSeeker(class wDTVPrecDatSeeker const &);

    // RVA: 0xB1 | Ordinal: 178
        void wDTVPrecDatSeeker(class wDTVPrecDatSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x221 | Ordinal: 546
        void _wDTVPrecDatSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDTVPRECDATSEEKER_HPP
