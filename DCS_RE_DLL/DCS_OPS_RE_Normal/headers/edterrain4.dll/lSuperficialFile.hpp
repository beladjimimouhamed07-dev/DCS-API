#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lSuperficialFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lSuperficialFile
{
public:

    // RVA: 0x227 | Ordinal: 552
        void dump(void) const;

    // RVA: 0x228 | Ordinal: 553
        void dump(struct offshore::Scene &) const;

    // RVA: 0x32C | Ordinal: 813
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x48 | Ordinal: 73
        void lSuperficialFile(void);

    // RVA: 0x499 | Ordinal: 1178
        void load(class io::MmfStream &);

    // RVA: 0x4E9 | Ordinal: 1258
        void postloading(class assets::lAssetFile &);

    // RVA: 0x4F5 | Ordinal: 1270
        void preload(void);

    // RVA: 0x552 | Ordinal: 1363
        void save(char const *);

    // RVA: 0x6A | Ordinal: 107
        void _lSuperficialFile(void);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LSUPERFICIALFILE_HPP
