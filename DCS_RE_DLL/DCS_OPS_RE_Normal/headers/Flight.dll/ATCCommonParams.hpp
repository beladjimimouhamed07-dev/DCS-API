#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: ATCCommonParams
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace woATC {
namespace ResourceProvider {

class ATCCommonParams
{
public:

    // RVA: 0x4 | Ordinal: 5
        void ATCCommonParams(struct woATC::ResourceProvider::ATCCommonParams const &);

    // RVA: 0x5 | Ordinal: 6
        void ATCCommonParams(void);

    // RVA: 0x263 | Ordinal: 612
        void load(class Lua::Config &);

    // RVA: 0x2C | Ordinal: 45
        void _ATCCommonParams(void);
};

} // namespace ResourceProvider
} // namespace woATC

// DCS_OPS_RE_FLIGHT.DLL_ATCCOMMONPARAMS_HPP
