#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: Geometry
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class Geometry
{
public:

    // RVA: 0x55 | Ordinal: 86
        void Create(char const *);

    // RVA: 0x59 | Ordinal: 90
        void CreateMT(char const *);

    // RVA: 0xEA | Ordinal: 235
        void freeGeometryCache(void);

    // RVA: 0x128 | Ordinal: 297
        void releaseOrphans(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_GEOMETRY_HPP
