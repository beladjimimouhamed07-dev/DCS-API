#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wPosTimerError
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wPosTimerError
{
public:

    // RVA: 0x4DF | Ordinal: 1248
        void __getInputPorts(void);

    // RVA: 0x578 | Ordinal: 1401
        void __getOutputPorts(void);

    // RVA: 0x80F | Ordinal: 2064
        void getDesc_(void);

    // RVA: 0x8C3 | Ordinal: 2244
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C0 | Ordinal: 2497
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAC6 | Ordinal: 2759
        void init_randoms(int);

    // RVA: 0xDA9 | Ordinal: 3498
        void simulate(double);

    // RVA: 0x181 | Ordinal: 386
        void wPosTimerError(class wPosTimerError &&);

    // RVA: 0x182 | Ordinal: 387
        void wPosTimerError(class wPosTimerError const &);

    // RVA: 0x183 | Ordinal: 388
        void wPosTimerError(class wPosTimerErrDescriptor const *, class wSimulationSystem *);

    // RVA: 0x270 | Ordinal: 625
        void _wPosTimerError(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WPOSTIMERERROR_HPP
