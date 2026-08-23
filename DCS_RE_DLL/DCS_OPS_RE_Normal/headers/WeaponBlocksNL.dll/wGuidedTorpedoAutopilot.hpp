#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x6AA | Ordinal: 1707
        void convCtrlValByRoll(void);

    // RVA: 0x7F0 | Ordinal: 2033
        void getDesc_(void);

    // RVA: 0x8A3 | Ordinal: 2212
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9A0 | Ordinal: 2465
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB3B | Ordinal: 2876
        void readInputData(void);

    // RVA: 0xBA7 | Ordinal: 2984
        void registerStateData(void);

    // RVA: 0xD48 | Ordinal: 3401
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGUIDEDTORPEDOAUTOPILOT_HPP
