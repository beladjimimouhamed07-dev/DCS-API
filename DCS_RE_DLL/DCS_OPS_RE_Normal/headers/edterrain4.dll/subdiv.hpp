#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: subdiv
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class subdiv
{
public:

    // RVA: 0x160 | Ordinal: 353
        void applyEdgeCrease(class subdiv::SubdivScheme &, unsigned int, struct subdiv::MeshPtr const &, struct subdiv::Mesh &);

    // RVA: 0x16B | Ordinal: 364
        void applySplineEdges(struct subdiv::MeshPtr const &, struct subdiv::Mesh &);

    // RVA: 0x16F | Ordinal: 368
        void applyVertCrease(class subdiv::SubdivScheme &, struct subdiv::Mesh &, unsigned int);

    // RVA: 0x1D2 | Ordinal: 467
        void computeEdges(class subdiv::SubdivScheme const &, struct subdiv::MeshPtr const &, struct subdiv::Mesh &);

    // RVA: 0x201 | Ordinal: 514
        void divideSquareBy4(class subdiv::SubdivScheme &, struct subdiv::MeshPtr const &, class osg::BoundingBoxImpl<class osg::Vec3d> const &, class ed::vector<class osg::BoundingBoxImpl<class osg::Vec3d>, class ed::allocator<class osg::BoundingBoxImpl<class osg::Vec3d>>> &, class ed::vector<struct subdiv::Mesh, class ed::allocator<struct subdiv::Mesh>> &);

    // RVA: 0x352 | Ordinal: 851
        void getOffshoreEdge(struct subdiv::Mesh const &, struct subdiv::Edge32 const &);

    // RVA: 0x380 | Ordinal: 897
        void getPolygonsForSubQuads(struct subdiv::MeshPtr const &, class ed::vector<class ed::vector<int, class ed::allocator<int>>, class ed::allocator<class ed::vector<int, class ed::allocator<int>>>> &, class osg::Vec3f);

    // RVA: 0x4EB | Ordinal: 1260
        void precompute(struct subdiv::MeshPtr const &, struct subdiv::Mesh &, class subdiv::SubdivScheme &);

    // RVA: 0x59F | Ordinal: 1440
        void subdivMesh(class subdiv::SubdivScheme &, struct subdiv::MeshPtr const &, struct subdiv::Mesh &, class ed::vector<int, class ed::allocator<int>> const *);

    // RVA: 0x5A0 | Ordinal: 1441
        void subdivPolygon(class subdiv::SubdivScheme const &, unsigned int, int, unsigned int const *, struct subdiv::MeshPtr const &, struct subdiv::Mesh &);

    // RVA: 0x5A1 | Ordinal: 1442
        void subdivPolygonLinear(class subdiv::SubdivScheme const &, unsigned int, int, unsigned int const *, struct subdiv::MeshPtr const &, struct subdiv::Mesh &);

    // RVA: 0x5A4 | Ordinal: 1445
        void subdivSplineSegment(class subdiv::SubdivScheme &, unsigned int, struct subdiv::MeshPtr const &, struct subdiv::Mesh &);

    // RVA: 0x5A5 | Ordinal: 1446
        void subdivSplineSegmentLinear(class subdiv::SubdivScheme &, unsigned int, struct subdiv::MeshPtr const &, struct subdiv::Mesh &);
};

// DCS_OPS_RE_EDTERRAIN4.DLL_SUBDIV_HPP
