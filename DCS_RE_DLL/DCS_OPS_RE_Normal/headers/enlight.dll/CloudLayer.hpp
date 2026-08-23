#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: CloudLayer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {
namespace CloudDetails {
namespace DensityMapParams {

class CloudLayer
{
public:

    // RVA: 0xC | Ordinal: 13
        void CloudLayer(void);

    // RVA: 0xB6 | Ordinal: 183
        void isEnabled(void) const;

    // RVA: 0x109 | Ordinal: 266
        void updateNoiseFreqWeights(float, float);

    // RVA: 0x108 | Ordinal: 265
        void updateNoiseFreqWeights2(float, float);
};

} // namespace DensityMapParams
} // namespace CloudDetails
} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_CLOUDLAYER_HPP
