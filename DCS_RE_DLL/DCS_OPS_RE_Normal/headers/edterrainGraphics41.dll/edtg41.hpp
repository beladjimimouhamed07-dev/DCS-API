#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrainGraphics41.dll
// Class: edtg41
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class edtg41
{
public:

    // RVA: 0x8 | Ordinal: 9
        void GetITerraDispatchGraphics(void);

    // RVA: 0x9 | Ordinal: 10
        void ReadShadingOptions(class Lua::Config &, struct edtg41::TerrainOptions &);

    // RVA: 0xA | Ordinal: 11
        void ReadTerrainOptions(class Lua::Config &, struct edtg41::TerrainOptions &);

    // RVA: 0xB | Ordinal: 12
        void RecalcDistances(struct edtg41::TerrainOptions &, float, float, enum edtg41::edRecalcDistancesFilter);

    // RVA: 0xC | Ordinal: 13
        void RecalcDistances(struct edtg41::TerrainOptions &, float, enum edtg41::edRecalcDistancesFilter);

    // RVA: 0x20 | Ordinal: 33
        void loadGeometry(struct landscape4::GeometrySource &, struct landscape4::GeometrySource &, class ed::vector<struct edtg41::SharedBuffer, class ed::allocator<struct edtg41::SharedBuffer>> &, class osg::Matrixf *, struct landscape4::Material &, class ed::list<struct edtg41::RenderItem *, class ed::allocator<struct edtg41::RenderItem *>> &, class ed::vector<struct edtg41::DeformGeometryStream, class ed::allocator<struct edtg41::DeformGeometryStream>> *, class edtg41::lMaterialParamsArrayGraphics *);
};

// DCS_OPS_RE_EDTERRAINGRAPHICS41.DLL_EDTG41_HPP
