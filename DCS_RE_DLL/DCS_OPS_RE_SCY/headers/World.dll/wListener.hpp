#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: World.dll
// Class: wListener
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wListener
{
public:

    // RVA: 0x56 | Ordinal: 87
        void onCreate(class Registered *);

    // RVA: 0x57 | Ordinal: 88
        void onDestroy(class Registered *);

    // RVA: 0x60 | Ordinal: 97
        void onWorldSpawnStageComplete(enum spawnStageCompletion);

    // RVA: 0x4 | Ordinal: 5
        void wListener(class wListener const &);

    // RVA: 0x5 | Ordinal: 6
        void wListener(void);

    // RVA: 0xB | Ordinal: 12
        void _wListener(void);
};

// DCS_OPS_RE_WORLD.DLL_WLISTENER_HPP
