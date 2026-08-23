#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lSurfaceFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lSurfaceFile
{
public:

    // RVA: 0x229 | Ordinal: 554
        void dump(void) const;

    // RVA: 0x32E | Ordinal: 815
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x49B | Ordinal: 1180
        void load(class io::MmfStream &);

    // RVA: 0x4EA | Ordinal: 1259
        void postloading(void);

    // RVA: 0x554 | Ordinal: 1365
        void save(class ed::basic_string<char> const &);

    // RVA: 0x555 | Ordinal: 1366
        void save(char const *);

    // RVA: 0x599 | Ordinal: 1434
        void stats(struct landscape4::lSurfaceFile::Stats &) const;

    // RVA: 0x6C | Ordinal: 109
        void _lSurfaceFile(void);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LSURFACEFILE_HPP
