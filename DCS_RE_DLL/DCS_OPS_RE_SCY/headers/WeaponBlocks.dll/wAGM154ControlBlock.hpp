#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAGM154ControlBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAGM154ControlBlock
{
public:

    // RVA: 0x473 | Ordinal: 1140
        void __getInputPorts(void);

    // RVA: 0x50C | Ordinal: 1293
        void __getOutputPorts(void);

    // RVA: 0x5A6 | Ordinal: 1447
        void add_point(class Math::Vector<3, double> const &);

    // RVA: 0x7A3 | Ordinal: 1956
        void getDesc_(void);

    // RVA: 0x857 | Ordinal: 2136
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x954 | Ordinal: 2389
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB2B | Ordinal: 2860
        void procTurnToSide(double, class Math::Vector<3, double> *, bool);

    // RVA: 0xB50 | Ordinal: 2897
        void readInputData(void);

    // RVA: 0xB90 | Ordinal: 2961
        void registerStateData(void);

    // RVA: 0xC55 | Ordinal: 3158
        void sendOutWiresData(void);

    // RVA: 0xD3B | Ordinal: 3388
        void set_open_h(double);

    // RVA: 0xD3D | Ordinal: 3390
        void set_pop_up_enabled(bool);

    // RVA: 0xD4A | Ordinal: 3403
        void simulate(double);

    // RVA: 0xE0E | Ordinal: 3599
        void tryToKeepStartH(class Math::Vector<3, double> *, class Math::Vector<3, double> *);

    // RVA: 0x28 | Ordinal: 41
        void wAGM154ControlBlock(class wAGM154ControlBlock &&);

    // RVA: 0x29 | Ordinal: 42
        void wAGM154ControlBlock(class wAGM154ControlBlock const &);

    // RVA: 0x2A | Ordinal: 43
        void wAGM154ControlBlock(class wAGM154ControlBlockDescriptor const *, class wSimulationSystem *);

    // RVA: 0xE2F | Ordinal: 3632
        void wingsCheckAndProcess(double, double);

    // RVA: 0x1F0 | Ordinal: 497
        void _wAGM154ControlBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAGM154CONTROLBLOCK_HPP
