#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wDTVDatSeeker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDTVDatSeeker
{
public:

    // RVA: 0x4A0 | Ordinal: 1185
        void __getInputPorts(void);

    // RVA: 0x539 | Ordinal: 1338
        void __getOutputPorts(void);

    // RVA: 0x6D7 | Ordinal: 1752
        void createDebugIncPos(class Math::Vector<3, double>, int, double);

    // RVA: 0x7D0 | Ordinal: 2001
        void getDesc_(void);

    // RVA: 0x884 | Ordinal: 2181
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x981 | Ordinal: 2434
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAF0 | Ordinal: 2801
        void isTargetLocked(unsigned int);

    // RVA: 0xAF1 | Ordinal: 2802
        void isTargetLocked(class Math::Vector<3, double>);

    // RVA: 0xB21 | Ordinal: 2850
        void ownerNewTargetFilter(void);

    // RVA: 0xB5E | Ordinal: 2911
        void readInputData(void);

    // RVA: 0xBB0 | Ordinal: 2993
        void registerStateData(void);

    // RVA: 0xC25 | Ordinal: 3110
        void saveDiffVals(void);

    // RVA: 0xC36 | Ordinal: 3127
        void seekerBlockProc(void);

    // RVA: 0xC61 | Ordinal: 3170
        void sendVisData(void);

    // RVA: 0xC99 | Ordinal: 3226
        void setClientVisTarget(bool);

    // RVA: 0xD73 | Ordinal: 3444
        void simulate(double);

    // RVA: 0xE0C | Ordinal: 3597
        void tryToGetStartData(void);

    // RVA: 0xE13 | Ordinal: 3604
        void updTarget(bool);

    // RVA: 0xE27 | Ordinal: 3624
        void updateTargetDynamicError(void);

    // RVA: 0xAC | Ordinal: 173
        void wDTVDatSeeker(class wDTVDatSeeker &&);

    // RVA: 0xAD | Ordinal: 174
        void wDTVDatSeeker(class wDTVDatSeeker const &);

    // RVA: 0xAE | Ordinal: 175
        void wDTVDatSeeker(class wDTVDatSeekerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x220 | Ordinal: 545
        void _wDTVDatSeeker(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WDTVDATSEEKER_HPP
