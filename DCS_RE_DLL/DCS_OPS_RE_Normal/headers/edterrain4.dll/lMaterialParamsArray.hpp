#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lMaterialParamsArray
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class lMaterialParamsArray
{
public:

    // RVA: 0x140 | Ordinal: 321
        void addMaterial(struct landscape4::Material &);

    // RVA: 0x141 | Ordinal: 322
        void addMaterialManifold(struct offshore::Manifold const &);

    // RVA: 0x142 | Ordinal: 323
        void addMaterialParams(struct landscape5::lMaterialParamsStruct const &);

    // RVA: 0x143 | Ordinal: 324
        void addMaterialParamsWithManifolds(struct landscape5::lMaterialParamsStruct const &);

    // RVA: 0x21D | Ordinal: 542
        void dump(bool) const;

    // RVA: 0x21E | Ordinal: 543
        void dump(struct offshore::Scene &, int) const;

    // RVA: 0x299 | Ordinal: 666
        void getArraySliceIndex(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, struct landscape5::AdditionalTextureData);

    // RVA: 0x318 | Ordinal: 793
        void getMaterial(struct landscape4::GeometrySource const &, struct landscape4::Material &) const;

    // RVA: 0x31B | Ordinal: 796
        void getMaterialParams(int);

    // RVA: 0x31C | Ordinal: 797
        void getMaterialParamsCopy(int, struct landscape5::lMaterialParamsStruct &);

    // RVA: 0x3A | Ordinal: 59
        void lMaterialParamsArray(void);

    // RVA: 0x65 | Ordinal: 102
        void _lMaterialParamsArray(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_LMATERIALPARAMSARRAY_HPP
