#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: forest50testFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class forest50testFile
{
public:

    // RVA: 0x218 | Ordinal: 537
        void dump(void) const;

    // RVA: 0x219 | Ordinal: 538
        void dump(struct offshore::Scene &) const;

    // RVA: 0x30 | Ordinal: 49
        void forest50testFile(void);

    // RVA: 0x323 | Ordinal: 804
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x47F | Ordinal: 1152
        void load(class io::MmfStream &);

    // RVA: 0x53C | Ordinal: 1341
        void save(class ed::basic_string<char> const &);

    // RVA: 0x53D | Ordinal: 1342
        void save(char const *);

    // RVA: 0x5E | Ordinal: 95
        void _forest50testFile(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_FOREST50TESTFILE_HPP
