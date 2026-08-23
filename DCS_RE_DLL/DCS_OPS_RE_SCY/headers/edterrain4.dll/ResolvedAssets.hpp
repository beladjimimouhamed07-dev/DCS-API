#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: ResolvedAssets
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {

class ResolvedAssets
{
public:

    // RVA: 0x185 | Ordinal: 390
        void build(class assets::lAssetFile &);

    // RVA: 0x29A | Ordinal: 667
        void getAsset(struct landscape4::GeometrySource &, int);

    // RVA: 0x4E0 | Ordinal: 1249
        void postloading(class assets::lAssetFile &);
};

} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_RESOLVEDASSETS_HPP
