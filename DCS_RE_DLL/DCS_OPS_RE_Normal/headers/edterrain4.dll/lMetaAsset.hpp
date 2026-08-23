#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lMetaAsset
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {

class lMetaAsset
{
public:

    // RVA: 0x221 | Ordinal: 546
        void dump(bool, class ed::basic_string<char> const &);

    // RVA: 0x23B | Ordinal: 572
        void dumpToOffshore(struct offshore::Scene &, int);

    // RVA: 0x2B6 | Ordinal: 695
        void getClass(void) const;

    // RVA: 0x43F | Ordinal: 1088
        void isCompatibleNode(struct offshore::Scene &, int) const;

    // RVA: 0x455 | Ordinal: 1110
        void isMatchColorEnable(void) const;

    // RVA: 0x474 | Ordinal: 1141
        void isVectorized(void) const;

    // RVA: 0x3C | Ordinal: 61
        void lMetaAsset(void);

    // RVA: 0x66 | Ordinal: 103
        void _lMetaAsset(void);
};

} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_LMETAASSET_HPP
