#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x6D3 | Ordinal: 1748
        void createDebugIncPos(class Math::Vector<3, double>, int, double);

    // RVA: 0x7C8 | Ordinal: 1993
        void getDesc_(void);

    // RVA: 0x87B | Ordinal: 2172
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x978 | Ordinal: 2425
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAC9 | Ordinal: 2762
        void isTargetLocked(unsigned int);

    // RVA: 0xACA | Ordinal: 2763
        void isTargetLocked(class Math::Vector<3, double>);

    // RVA: 0xAF9 | Ordinal: 2810
        void ownerNewTargetFilter(void);

    // RVA: 0xB34 | Ordinal: 2869
        void readInputData(void);

    // RVA: 0xB86 | Ordinal: 2951
        void registerStateData(void);

    // RVA: 0xBE5 | Ordinal: 3046
        void saveDiffVals(void);

    // RVA: 0xBF5 | Ordinal: 3062
        void seekerBlockProc(void);

    // RVA: 0xC1D | Ordinal: 3102
        void sendVisData(void);

    // RVA: 0xC4F | Ordinal: 3152
        void setClientVisTarget(bool);

    // RVA: 0xD28 | Ordinal: 3369
        void simulate(double);

    // RVA: 0xDBD | Ordinal: 3518
        void tryToGetStartData(void);

    // RVA: 0xDC4 | Ordinal: 3525
        void updTarget(bool);

    // RVA: 0xDD8 | Ordinal: 3545
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WDTVDATSEEKER_HPP
