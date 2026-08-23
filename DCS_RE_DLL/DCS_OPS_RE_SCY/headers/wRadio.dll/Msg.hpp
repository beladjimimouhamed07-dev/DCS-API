#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: Msg
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SADL_msgsParser {

class Msg
{
public:

    // RVA: 0x1C3 | Ordinal: 452
        void addIdx(int, class std::map<int, int, struct std::less<int>, class ed::allocator<struct std::pair<int const, int>>> &);

    // RVA: 0x272 | Ordinal: 627
        void getIdx(int, class std::map<int, int, struct std::less<int>, class ed::allocator<struct std::pair<int const, int>>> const &);

    // RVA: 0x302 | Ordinal: 771
        void initHeader(class std::map<int, int, struct std::less<int>, class ed::allocator<struct std::pair<int const, int>>> &);
};

} // namespace SADL_msgsParser

// DCS_OPS_RE_WRADIO.DLL_MSG_HPP
