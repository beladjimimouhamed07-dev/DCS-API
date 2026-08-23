#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: LARBuilder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class LARBuilder
{
public:

    // RVA: 0x5 | Ordinal: 6
        void LARBuilder(class LARBuilder const &);

    // RVA: 0x6 | Ordinal: 7
        void LARBuilder(void);

    // RVA: 0xDE | Ordinal: 223
        void calcBombPath(void);

    // RVA: 0x125 | Ordinal: 294
        void getAirDensity(double);

    // RVA: 0x135 | Ordinal: 310
        void getAvailableAccel(double, double, double);

    // RVA: 0x150 | Ordinal: 337
        void getCx0(double);

    // RVA: 0x191 | Ordinal: 402
        void getJDAMTOF(double, double, double, double, double, double, double, double, double, double, enum LARBuilder::JDAM_Type);

    // RVA: 0x1F2 | Ordinal: 499
        void initTOFState(void);

    // RVA: 0x265 | Ordinal: 614
        void setImpactVec(void);

    // RVA: 0x48 | Ordinal: 73
        void _LARBuilder(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_LARBUILDER_HPP
