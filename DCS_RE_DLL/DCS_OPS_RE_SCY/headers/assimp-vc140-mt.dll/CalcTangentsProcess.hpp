#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: CalcTangentsProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class CalcTangentsProcess
{
public:

    // RVA: 0x6 | Ordinal: 7
        void CalcTangentsProcess(class Assimp::CalcTangentsProcess const &);

    // RVA: 0x7 | Ordinal: 8
        void CalcTangentsProcess(void);

    // RVA: 0x15A | Ordinal: 347
        void Execute(struct aiScene *);

    // RVA: 0x1C6 | Ordinal: 455
        void IsActive(unsigned int) const;

    // RVA: 0x214 | Ordinal: 533
        void ProcessMesh(struct aiMesh *, unsigned int);

    // RVA: 0x232 | Ordinal: 563
        void SetMaxSmoothAngle(float);

    // RVA: 0x243 | Ordinal: 580
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x75 | Ordinal: 118
        void _CalcTangentsProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_CALCTANGENTSPROCESS_HPP
