#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: GeometrySource
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class GeometrySource
{
public:

    // RVA: 0x20B | Ordinal: 524
        void dump(struct _iobuf *) const;

    // RVA: 0x24F | Ordinal: 592
        void exportToOffshore(struct offshore::Scene &, int, int *) const;

    // RVA: 0x2AE | Ordinal: 687
        void getBytes(void) const;

    // RVA: 0x3D1 | Ordinal: 978
        void getStream(class ed::basic_string<char> const &);

    // RVA: 0x3D2 | Ordinal: 979
        void getStream(class ed::basic_string<char> const &) const;

    // RVA: 0x3D7 | Ordinal: 984
        void getStreamIndex(class ed::basic_string<char> const &) const;

    // RVA: 0x4F0 | Ordinal: 1265
        void preload(bool) const;

    // RVA: 0x4FB | Ordinal: 1276
        void primitiveCount(void) const;

    // RVA: 0x59B | Ordinal: 1436
        void streamTypeStride(int);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_GEOMETRYSOURCE_HPP
