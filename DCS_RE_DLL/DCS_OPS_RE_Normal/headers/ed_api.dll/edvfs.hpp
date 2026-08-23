#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ed_api.dll
// Class: edvfs
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class edvfs
{
public:

    // RVA: 0x0 | Ordinal: 1
        void CheckAnimationsMountPoint(char const *);

    // RVA: 0x1 | Ordinal: 2
        void CheckModelsMountPoint(char const *);

    // RVA: 0x2 | Ordinal: 3
        void CheckTexturesMountPoint(char const *);

    // RVA: 0x3 | Ordinal: 4
        void GetAnimationsVFS(void);

    // RVA: 0x4 | Ordinal: 5
        void GetModelsVFS(void);

    // RVA: 0x5 | Ordinal: 6
        void GetShadersVFS(void);

    // RVA: 0x6 | Ordinal: 7
        void GetTexturesVFS(void);
};

// DCS_OPS_RE_ED_API.DLL_EDVFS_HPP
