#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: vd5
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class vd5
{
public:

    // RVA: 0x476 | Ordinal: 1143
        void lLinked2VectorData(class assets::lLinked &, class vd5::VectorData &, class std::function<bool __cdecl(enum assets::enAssetClass, int)> *, class std::function<void __cdecl(enum assets::enAssetClass, int, int)> *);

    // RVA: 0x5CC | Ordinal: 1485
        void vectorData2lLinked(class vd5::VectorData &, class assets::lLinked &, class std::function<bool __cdecl(class vd5::Vertex, struct assets::lLinked::SplineInstance::BindToSplineVertex &)> *);
};

// DCS_OPS_RE_EDTERRAIN4.DLL_VD5_HPP
