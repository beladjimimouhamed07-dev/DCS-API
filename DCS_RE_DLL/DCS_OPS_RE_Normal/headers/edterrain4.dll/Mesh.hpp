#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: Mesh
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace subdiv {

class Mesh
{
public:

    // RVA: 0x234 | Ordinal: 565
        void dumpMesh(struct offshore::Mesh &, bool) const;

    // RVA: 0x252 | Ordinal: 595
        void extract(struct subdiv::MeshPtr const &, struct subdiv::ExtractData &, class ed::vector<int, class ed::allocator<int>> const &, struct subdiv::Mesh &);

    // RVA: 0x27E | Ordinal: 639
        void fromOffsoreMesh(struct offshore::Mesh const &, int);

    // RVA: 0x2A6 | Ordinal: 679
        void getBoundingBox(bool) const;

    // RVA: 0x2CB | Ordinal: 716
        void getCrease(unsigned int);

    // RVA: 0x2CC | Ordinal: 717
        void getCrease(unsigned int) const;

    // RVA: 0x2CF | Ordinal: 720
        void getCreasesSize(void) const;

    // RVA: 0x30E | Ordinal: 783
        void getLinearSplineSegment(unsigned int);

    // RVA: 0x30F | Ordinal: 784
        void getLinearSplineSegment(unsigned int) const;

    // RVA: 0x310 | Ordinal: 785
        void getLinearVertexPtr(unsigned int);

    // RVA: 0x311 | Ordinal: 786
        void getLinearVertexPtr(unsigned int) const;

    // RVA: 0x312 | Ordinal: 787
        void getLocalEdges(struct subdiv::Edge32) const;

    // RVA: 0x339 | Ordinal: 826
        void getMeshPtr(void) const;

    // RVA: 0x375 | Ordinal: 886
        void getPolyCount(void) const;

    // RVA: 0x377 | Ordinal: 888
        void getPolyIndicies(unsigned int);

    // RVA: 0x378 | Ordinal: 889
        void getPolyIndicies(unsigned int) const;

    // RVA: 0x37A | Ordinal: 891
        void getPolyIndiciesCount(unsigned int) const;

    // RVA: 0x37C | Ordinal: 893
        void getPolyVertex(unsigned int, unsigned int) const;

    // RVA: 0x3C3 | Ordinal: 964
        void getSplineEdgeSubdiv(struct subdiv::MeshPtr const &, unsigned int, class osg::Vec3f *const) const;

    // RVA: 0x3C5 | Ordinal: 966
        void getSplineSegment(unsigned int);

    // RVA: 0x3C6 | Ordinal: 967
        void getSplineSegment(unsigned int) const;

    // RVA: 0x3D8 | Ordinal: 985
        void getStripesVertsNpolysCount(int &, int &) const;

    // RVA: 0x40F | Ordinal: 1040
        void getVertexPtr(unsigned int);

    // RVA: 0x410 | Ordinal: 1041
        void getVertexPtr(unsigned int) const;

    // RVA: 0x413 | Ordinal: 1044
        void getVertsIndiciesByEdge(struct subdiv::Edge32 const &) const;

    // RVA: 0x568 | Ordinal: 1385
        void setCrease(unsigned int, struct subdiv::Crease);

    // RVA: 0x569 | Ordinal: 1386
        void setCreasesSize(unsigned int);

    // RVA: 0x5B0 | Ordinal: 1457
        void tinyCopy(struct landscape5::lsa5pureFile::Mesh &) const;

    // RVA: 0x5B3 | Ordinal: 1460
        void toOffshoreMesh(struct offshore::Mesh &, bool) const;

    // RVA: 0x5C6 | Ordinal: 1479
        void updatePoints(class ed::vector<struct subdiv::PointFragment, class ed::allocator<struct subdiv::PointFragment>> const &, class ed::vector<struct assets::lPointAsset *, class ed::allocator<struct assets::lPointAsset *>> const &, int);

    // RVA: 0x5C7 | Ordinal: 1480
        void updateSplines(class ed::vector<struct subdiv::SplineSegment, class ed::allocator<struct subdiv::SplineSegment>> const &, class ed::vector<struct assets::lSplineAsset *, class ed::allocator<struct assets::lSplineAsset *>> const &, int);

    // RVA: 0x5D1 | Ordinal: 1490
        void vertsCount(void) const;
};

} // namespace subdiv

// DCS_OPS_RE_EDTERRAIN4.DLL_MESH_HPP
