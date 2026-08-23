#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: ATCAirdromeParams
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace woATC {
namespace ResourceProvider {

class ATCAirdromeParams
{
public:

    // RVA: 0x2 | Ordinal: 3
        void ATCAirdromeParams(struct woATC::ResourceProvider::ATCAirdromeParams const &);

    // RVA: 0x3 | Ordinal: 4
        void ATCAirdromeParams(void);

    // RVA: 0x262 | Ordinal: 611
        void load(class Lua::Config &);

    // RVA: 0x2B | Ordinal: 44
        void _ATCAirdromeParams(void);
};

} // namespace ResourceProvider
} // namespace woATC

// DCS_OPS_RE_FLIGHT.DLL_ATCAIRDROMEPARAMS_HPP
