#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Inter.dll
// Class: inter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class inter
{
public:

    // RVA: 0x33 | Ordinal: 52
        void getAnimationsVFS(void);

    // RVA: 0x37 | Ordinal: 56
        void getModelsVFS(void);

    // RVA: 0x3C | Ordinal: 61
        void getShadersVFS(void);

    // RVA: 0x54 | Ordinal: 85
        void getTexturesVFS(void);

    // RVA: 0x74 | Ordinal: 117
        void setVFSs(class std::shared_ptr<class edvfs::IVFSandbox>, class std::shared_ptr<class edvfs::IVFSandbox>, class std::shared_ptr<class edvfs::IVFSandbox>, class std::shared_ptr<class edvfs::IVFSandbox>);
};

// DCS_OPS_RE_INTER.DLL_INTER_HPP
