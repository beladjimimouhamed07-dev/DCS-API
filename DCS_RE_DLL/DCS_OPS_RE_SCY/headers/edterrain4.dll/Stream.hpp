#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: Stream
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {
namespace MaterialAlias {

class Stream
{
public:

    // RVA: 0x27 | Ordinal: 40
        void Stream(char const *, int);

    // RVA: 0x272 | Ordinal: 627
        void findUvSet(struct offshore::Mesh &, struct offshore::Material &) const;

    // RVA: 0x305 | Ordinal: 774
        void getInterpolation(void) const;

    // RVA: 0x3FD | Ordinal: 1022
        void getType(void) const;

    // RVA: 0x46E | Ordinal: 1135
        void isUseMaterialParamsArray(void) const;

    // RVA: 0x59A | Ordinal: 1435
        void streamTypeBytes(void) const;
};

} // namespace MaterialAlias
} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_STREAM_HPP
