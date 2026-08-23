#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: JetCompressor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class JetCompressor
{
public:

    // RVA: 0xC9 | Ordinal: 202
        void JetCompressor(class EagleFM::JetCompressor const &);

    // RVA: 0xCA | Ordinal: 203
        void JetCompressor(double, double, double, double);

    // RVA: 0xCB | Ordinal: 204
        void JetCompressor(void);

    // RVA: 0x3BB | Ordinal: 956
        void addData(struct EagleFM::JetCompressorData const &);

    // RVA: 0x3F6 | Ordinal: 1015
        void calcCompressorAMF(double, struct EagleFM::AirFlow &, double &, double &, bool);

    // RVA: 0x3F7 | Ordinal: 1016
        void calcCompressorBeta(double, double &, struct EagleFM::AirFlow &, double &, double &, bool *);

    // RVA: 0x3F9 | Ordinal: 1018
        void calcCompressorWork(double, double, double, double &, double &, double &, double &);

    // RVA: 0x3FB | Ordinal: 1020
        void calcCorePiAndNu(double &, double &);

    // RVA: 0x3FC | Ordinal: 1021
        void calcDiagram(double, double &, double &, double &, double &, double &, double &, double &, double &, double &);

    // RVA: 0x830 | Ordinal: 2097
        void setCorePiAndNuCoeffs(double, double);

    // RVA: 0x898 | Ordinal: 2201
        void setLimitBetaK(double);

    // RVA: 0x1B6 | Ordinal: 439
        void _JetCompressor(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_JETCOMPRESSOR_HPP
