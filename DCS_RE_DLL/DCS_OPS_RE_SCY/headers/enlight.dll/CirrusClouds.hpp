#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: CirrusClouds
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class CirrusClouds
{
public:

    // RVA: 0x8 | Ordinal: 9
        void CirrusClouds(class enlight::CirrusClouds const &);

    // RVA: 0x9 | Ordinal: 10
        void CirrusClouds(void);

    // RVA: 0xDA | Ordinal: 219
        void render(enum enlight::CirrusCloudsTechnique);

    // RVA: 0xFA | Ordinal: 251
        void setRandomSeed(unsigned int);

    // RVA: 0x2C | Ordinal: 45
        void _CirrusClouds(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_CIRRUSCLOUDS_HPP
