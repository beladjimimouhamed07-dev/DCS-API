#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wPNCoeffCalcBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wPNCoeffCalcBlock
{
public:

    // RVA: 0x4DB | Ordinal: 1244
        void __getInputPorts(void);

    // RVA: 0x574 | Ordinal: 1397
        void __getOutputPorts(void);

    // RVA: 0x803 | Ordinal: 2052
        void getDesc_(void);

    // RVA: 0x8B6 | Ordinal: 2231
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9B3 | Ordinal: 2484
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA08 | Ordinal: 2569
        void getPNCoeff(double);

    // RVA: 0xD5A | Ordinal: 3419
        void simulate(double);

    // RVA: 0x172 | Ordinal: 371
        void wPNCoeffCalcBlock(class wPNCoeffCalcBlock &&);

    // RVA: 0x173 | Ordinal: 372
        void wPNCoeffCalcBlock(class wPNCoeffCalcBlock const &);

    // RVA: 0x174 | Ordinal: 373
        void wPNCoeffCalcBlock(class wPNCoeffCalcBlockDescriptor const *, class wSimulationSystem *);

    // RVA: 0x26B | Ordinal: 620
        void _wPNCoeffCalcBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WPNCOEFFCALCBLOCK_HPP
