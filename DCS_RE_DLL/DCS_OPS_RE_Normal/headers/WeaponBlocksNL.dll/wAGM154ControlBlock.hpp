#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x79B | Ordinal: 1948
        void getDesc_(void);

    // RVA: 0x84E | Ordinal: 2127
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x94B | Ordinal: 2380
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB01 | Ordinal: 2818
        void procTurnToSide(double, class Math::Vector<3, double> *, bool);

    // RVA: 0xB26 | Ordinal: 2855
        void readInputData(void);

    // RVA: 0xB66 | Ordinal: 2919
        void registerStateData(void);

    // RVA: 0xC11 | Ordinal: 3090
        void sendOutWiresData(void);

    // RVA: 0xCF0 | Ordinal: 3313
        void set_open_h(double);

    // RVA: 0xCF2 | Ordinal: 3315
        void set_pop_up_enabled(bool);

    // RVA: 0xCFF | Ordinal: 3328
        void simulate(double);

    // RVA: 0xDBF | Ordinal: 3520
        void tryToKeepStartH(class Math::Vector<3, double> *, class Math::Vector<3, double> *);

    // RVA: 0x28 | Ordinal: 41
        void wAGM154ControlBlock(class wAGM154ControlBlock &&);

    // RVA: 0x29 | Ordinal: 42
        void wAGM154ControlBlock(class wAGM154ControlBlock const &);

    // RVA: 0x2A | Ordinal: 43
        void wAGM154ControlBlock(class wAGM154ControlBlockDescriptor const *, class wSimulationSystem *);

    // RVA: 0xDE0 | Ordinal: 3553
        void wingsCheckAndProcess(double, double);

    // RVA: 0x1F0 | Ordinal: 497
        void _wAGM154ControlBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAGM154CONTROLBLOCK_HPP
