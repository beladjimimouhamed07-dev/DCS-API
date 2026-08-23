#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: RemoveRedundantMatsProcess
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class RemoveRedundantMatsProcess
{
public:

    // RVA: 0x164 | Ordinal: 357
        void Execute(struct aiScene *);

    // RVA: 0x199 | Ordinal: 410
        void GetFixedMaterialsString(void) const;

    // RVA: 0x1D0 | Ordinal: 465
        void IsActive(unsigned int) const;

    // RVA: 0x48 | Ordinal: 73
        void RemoveRedundantMatsProcess(class Assimp::RemoveRedundantMatsProcess const &);

    // RVA: 0x49 | Ordinal: 74
        void RemoveRedundantMatsProcess(void);

    // RVA: 0x22D | Ordinal: 558
        void SetFixedMaterialsString(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x24A | Ordinal: 587
        void SetupProperties(class Assimp::Importer const *);

    // RVA: 0x96 | Ordinal: 151
        void _RemoveRedundantMatsProcess(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_REMOVEREDUNDANTMATSPROCESS_HPP
