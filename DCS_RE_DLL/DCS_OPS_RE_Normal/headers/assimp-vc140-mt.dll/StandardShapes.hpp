#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: StandardShapes
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class StandardShapes
{
public:

    // RVA: 0x1E2 | Ordinal: 483
        void MakeCircle(float, unsigned int, class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &);

    // RVA: 0x1E3 | Ordinal: 484
        void MakeCone(float, float, float, unsigned int, class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &, bool);

    // RVA: 0x1E4 | Ordinal: 485
        void MakeDodecahedron(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &, bool);

    // RVA: 0x1E5 | Ordinal: 486
        void MakeHexahedron(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &, bool);

    // RVA: 0x1E6 | Ordinal: 487
        void MakeIcosahedron(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &);

    // RVA: 0x1E8 | Ordinal: 489
        void MakeMesh(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> const &, unsigned int);

    // RVA: 0x1E9 | Ordinal: 490
        void MakeMesh(unsigned int, void (__cdecl *)(unsigned int, class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &));

    // RVA: 0x1EA | Ordinal: 491
        void MakeMesh(unsigned int (__cdecl *)(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &));

    // RVA: 0x1EB | Ordinal: 492
        void MakeMesh(unsigned int (__cdecl *)(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &, bool));

    // RVA: 0x1EC | Ordinal: 493
        void MakeOctahedron(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &);

    // RVA: 0x1ED | Ordinal: 494
        void MakeSphere(unsigned int, class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &);

    // RVA: 0x1EE | Ordinal: 495
        void MakeTetrahedron(class std::vector<class aiVector3t<float>, class std::allocator<class aiVector3t<float>>> &);

    // RVA: 0x63 | Ordinal: 100
        void StandardShapes(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_STANDARDSHAPES_HPP
