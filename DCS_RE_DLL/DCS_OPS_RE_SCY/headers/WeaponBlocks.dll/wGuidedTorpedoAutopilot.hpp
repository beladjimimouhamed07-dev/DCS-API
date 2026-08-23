#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wGuidedTorpedoAutopilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGuidedTorpedoAutopilot
{
public:

    // RVA: 0x4C8 | Ordinal: 1225
        void __getInputPorts(void);

    // RVA: 0x561 | Ordinal: 1378
        void __getOutputPorts(void);

    // RVA: 0x5F1 | Ordinal: 1522
        void calcHorCtrlVal(void);

    // RVA: 0x5FE | Ordinal: 1535
        void calcLOSwLOS(void);

    // RVA: 0x647 | Ordinal: 1608
        void calcVertCtrlVal(void);

    // RVA: 0x64F | Ordinal: 1616
        void calcXCtrlVal(void);

    // RVA: 0x6AE | Ordinal: 1711
        void convCtrlValByRoll(void);

    // RVA: 0x7F8 | Ordinal: 2041
        void getDesc_(void);

    // RVA: 0x8AC | Ordinal: 2221
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A9 | Ordinal: 2474
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB65 | Ordinal: 2918
        void readInputData(void);

    // RVA: 0xBD1 | Ordinal: 3026
        void registerStateData(void);

    // RVA: 0xD93 | Ordinal: 3476
        void simulate(double);

    // RVA: 0x13B | Ordinal: 316
        void wGuidedTorpedoAutopilot(class wGuidedTorpedoAutopilot &&);

    // RVA: 0x13C | Ordinal: 317
        void wGuidedTorpedoAutopilot(class wGuidedTorpedoAutopilot const &);

    // RVA: 0x13D | Ordinal: 318
        void wGuidedTorpedoAutopilot(class wGuidedTorpedoAutopilotDescriptor const *, class wSimulationSystem *);

    // RVA: 0x257 | Ordinal: 600
        void _wGuidedTorpedoAutopilot(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGUIDEDTORPEDOAUTOPILOT_HPP
