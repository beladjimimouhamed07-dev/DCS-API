#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: FindDegeneratesProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class FindDegeneratesProcess
{
public:

    // RVA: 0x158 | Ordinal: 345
        void EnableAreaCheck(bool);

    // RVA: 0x159 | Ordinal: 346
        void EnableInstantRemoval(bool);

    // RVA: 0x15C | Ordinal: 349
        void Execute(struct aiScene *);

    // RVA: 0x16B | Ordinal: 364
        void ExecuteOnMesh(struct aiMesh *);

    // RVA: 0x19 | Ordinal: 26
        void FindDegeneratesProcess(class Assimp::FindDegeneratesProcess const &);

    // RVA: 0x1A | Ordinal: 27
        void FindDegeneratesProcess(void);

    // RVA: 0x1C8 | Ordinal: 457
        void IsActive(unsigned int) const;

    // RVA: 0x1DD | Ordinal: 478
        void IsInstantRemoval(void) const;

    // RVA: 0x245 | Ordinal: 582
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x2C3 | Ordinal: 708
        void isAreaCheckEnabled(void) const;

    // RVA: 0x7F | Ordinal: 128
        void _FindDegeneratesProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_FINDDEGENERATESPROCESS_HPP
