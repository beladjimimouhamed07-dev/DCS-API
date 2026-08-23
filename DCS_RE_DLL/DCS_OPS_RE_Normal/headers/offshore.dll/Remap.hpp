#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Remap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Remap
{
public:

    // RVA: 0x4 | Ordinal: 5
        void Remap(class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0x1A4 | Ordinal: 421
        void invertRemap(int);

    // RVA: 0x1A5 | Ordinal: 422
        void invertRemapUvset(struct offshore::uvSet &);

    // RVA: 0x1E6 | Ordinal: 487
        void remap(int);

    // RVA: 0x1E7 | Ordinal: 488
        void remap(class ed::vector<int, class ed::allocator<int>> &);

    // RVA: 0x1E8 | Ordinal: 489
        void remapUvset(struct offshore::uvSet &);

    // RVA: 0x1E9 | Ordinal: 490
        void remapUvset(struct offshore::uvSet &, class std::map<int, int, struct std::less<int>, class ed::allocator<struct std::pair<int const, int>>> &);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_REMAP_HPP
