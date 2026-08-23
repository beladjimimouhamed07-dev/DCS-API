#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: scene5
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class scene5
{
public:

    // RVA: 0x1E9 | Ordinal: 490
        void createGeometryHandler(enum landscape5::scene5::GeometryHandlerType);

    // RVA: 0x28D | Ordinal: 654
        void geometryHandlerTypeByInstancerMaterial(class ed::basic_string<char> const &);

    // RVA: 0x431 | Ordinal: 1074
        void instancerMaterialByGeometryHandlerType(enum landscape5::scene5::GeometryHandlerType);

    // RVA: 0x59C | Ordinal: 1437
        void strideByGeometryHandlerType(enum landscape5::scene5::GeometryHandlerType);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_SCENE5_HPP
