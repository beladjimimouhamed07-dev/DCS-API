#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wFMBombDrag
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wFMBombDrag
{
public:

    // RVA: 0x4B7 | Ordinal: 1208
        void __getInputPorts(void);

    // RVA: 0x550 | Ordinal: 1361
        void __getOutputPorts(void);

    // RVA: 0x5E1 | Ordinal: 1506
        void calcForce_(class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &, double, double);

    // RVA: 0x7E7 | Ordinal: 2024
        void getDesc_(void);

    // RVA: 0x89B | Ordinal: 2204
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x998 | Ordinal: 2457
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xFE | Ordinal: 255
        void wFMBombDrag(class wFMBombDrag &&);

    // RVA: 0xFF | Ordinal: 256
        void wFMBombDrag(class wFMBombDrag const &);

    // RVA: 0x100 | Ordinal: 257
        void wFMBombDrag(class wFMBombDragDescriptor const *, class wSimulationSystem *);

    // RVA: 0x23F | Ordinal: 576
        void _wFMBombDrag(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WFMBOMBDRAG_HPP
