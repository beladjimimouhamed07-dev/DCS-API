#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: TOFEstimator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TOFEstimator
{
public:

    // RVA: 0x7 | Ordinal: 8
        void TOFEstimator(void);

    // RVA: 0x11F | Ordinal: 288
        void getAAMTOF(double, double, double, double, double, double, double, double, double, double *, enum TOFE::AAM, bool);

    // RVA: 0x120 | Ordinal: 289
        void getAGM114TOF(double, double, double, double, double, int);

    // RVA: 0x17C | Ordinal: 381
        void getGBU24TOF(double, double, double, double, double);

    // RVA: 0x184 | Ordinal: 389
        void getHARMTOF(double, double, double, double, double);

    // RVA: 0x49 | Ordinal: 74
        void _TOFEstimator(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_TOFESTIMATOR_HPP
