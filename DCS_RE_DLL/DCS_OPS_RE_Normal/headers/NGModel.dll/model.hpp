#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: NGModel.dll
// Class: model
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class model
{
public:

    // RVA: 0x1B | Ordinal: 28
        void SetModelsVFS(class edvfs::IVFSandbox *);

    // RVA: 0x53 | Ordinal: 84
        void getNRenderedTris(void);

    // RVA: 0x6B | Ordinal: 108
        void load_json_mat(char const *);

    // RVA: 0x70 | Ordinal: 113
        void resetTrisCounter(void);
};

// DCS_OPS_RE_NGMODEL.DLL_MODEL_HPP
