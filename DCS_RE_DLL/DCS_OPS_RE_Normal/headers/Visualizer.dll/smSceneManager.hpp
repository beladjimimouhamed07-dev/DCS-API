#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: smSceneManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class smSceneManager
{
public:

    // RVA: 0x40 | Ordinal: 65
        void CreateSceneManager(class std::shared_ptr<class edvfs::IVFSandbox>, class std::shared_ptr<class edvfs::IVFSandbox>, class std::shared_ptr<class edvfs::IVFSandbox>, class std::shared_ptr<class edvfs::IVFSandbox>);

    // RVA: 0x44 | Ordinal: 69
        void DestroySceneManager(void);

    // RVA: 0x125 | Ordinal: 294
        void regLua(struct lua_State *);
};

// DCS_OPS_RE_VISUALIZER.DLL_SMSCENEMANAGER_HPP
