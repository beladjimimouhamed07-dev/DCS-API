#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: CompressorBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class CompressorBase
{
public:

    // RVA: 0x48 | Ordinal: 73
        void CompressorBase(class EagleFM::CompressorBase const &);

    // RVA: 0x49 | Ordinal: 74
        void CompressorBase(double, double, double, double);

    // RVA: 0x4A | Ordinal: 75
        void CompressorBase(void);

    // RVA: 0x420 | Ordinal: 1057
        void calcMulTemperature(double, double);

    // RVA: 0x424 | Ordinal: 1061
        void calcNuByTemperatureAndComprPi(double, double, double);

    // RVA: 0x428 | Ordinal: 1065
        void calcPower(double, double, double, double);

    // RVA: 0x429 | Ordinal: 1066
        void calcPower(double, double, double, double, double);

    // RVA: 0x441 | Ordinal: 1090
        void calcWindmillingMoment(double, double, double, double, double);

    // RVA: 0x712 | Ordinal: 1811
        void init(double, double, double, double);

    // RVA: 0x191 | Ordinal: 402
        void _CompressorBase(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_COMPRESSORBASE_HPP
