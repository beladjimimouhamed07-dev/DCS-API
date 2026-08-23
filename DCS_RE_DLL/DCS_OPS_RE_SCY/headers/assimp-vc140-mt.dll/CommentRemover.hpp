#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: CommentRemover
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class CommentRemover
{
public:

    // RVA: 0x8 | Ordinal: 9
        void CommentRemover(void);

    // RVA: 0x224 | Ordinal: 549
        void RemoveLineComments(char const *, char *, char);

    // RVA: 0x225 | Ordinal: 550
        void RemoveMultiLineComments(char const *, char const *, char *, char);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_COMMENTREMOVER_HPP
