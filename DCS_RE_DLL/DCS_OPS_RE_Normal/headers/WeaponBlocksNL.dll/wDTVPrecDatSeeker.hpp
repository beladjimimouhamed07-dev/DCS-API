#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7C9 | Ordinal: 1994
        void getDesc_(void);

    // RVA: 0x87C | Ordinal: 2173
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x979 | Ordinal: 2426
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xACB | Ordinal: 2764
        void isTargetLocked(unsigned int);

    // RVA: 0xB87 | Ordinal: 2952
        void registerStateData(void);

    // RVA: 0xCDD | Ordinal: 3294
        void setSyncTargetPoint(class Math::Vector<3, double> const &);

    // RVA: 0xDA1 | Ordinal: 3490
        void syncRelative(class Math::Vector<3, double> const &);

    // RVA: 0xDCC | Ordinal: 3533
        void updateOffset(void);

    // RVA: 0xDD9 | Ordinal: 3546
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDTVPRECDATSEEKER_HPP
