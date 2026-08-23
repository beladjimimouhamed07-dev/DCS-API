#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: JetCompressorNozzle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class JetCompressorNozzle
{
public:

    // RVA: 0xCD | Ordinal: 206
        void JetCompressorNozzle(class EagleFM::JetCompressorNozzle &&);

    // RVA: 0xCE | Ordinal: 207
        void JetCompressorNozzle(class EagleFM::JetCompressorNozzle const &);

    // RVA: 0xCF | Ordinal: 208
        void JetCompressorNozzle(double, double, bool);

    // RVA: 0x3F8 | Ordinal: 1017
        void calcCompressorFlow(double, double, double &, double &);

    // RVA: 0x61C | Ordinal: 1565
        void getPowerPi(void) const;

    // RVA: 0x725 | Ordinal: 1830
        void init(double, double, bool);

    // RVA: 0x1B7 | Ordinal: 440
        void _JetCompressorNozzle(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_JETCOMPRESSORNOZZLE_HPP
