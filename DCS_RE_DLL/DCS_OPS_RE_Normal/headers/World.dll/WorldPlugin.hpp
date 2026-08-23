#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: World.dll
// Class: WorldPlugin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class WorldPlugin
{
public:

    // RVA: 0x1A | Ordinal: 27
        void GetDisplayName(void) const;

    // RVA: 0x1B | Ordinal: 28
        void GetLibraryHandle(char const *);

    // RVA: 0x1C | Ordinal: 29
        void GetModelPaths(void) const;

    // RVA: 0x20 | Ordinal: 33
        void GetName(void);

    // RVA: 0x21 | Ordinal: 34
        void GetOptionsEntryName(void) const;

    // RVA: 0x22 | Ordinal: 35
        void GetPath(void) const;

    // RVA: 0x24 | Ordinal: 37
        void GetUniqueID(struct ed::array<unsigned char, 32> &) const;

    // RVA: 0x25 | Ordinal: 38
        void Initialize(void);

    // RVA: 0x26 | Ordinal: 39
        void Initialized(void);

    // RVA: 0x2A | Ordinal: 43
        void KillMe(void);

    // RVA: 0x38 | Ordinal: 57
        void Uninitialize(void);

    // RVA: 0x2 | Ordinal: 3
        void WorldPlugin(class WorldPlugin const &);

    // RVA: 0x3 | Ordinal: 4
        void WorldPlugin(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x58 | Ordinal: 89
        void onInitLowDone(void);

    // RVA: 0x59 | Ordinal: 90
        void onMissionPreStart(void);

    // RVA: 0x5A | Ordinal: 91
        void onMissionStart(void);

    // RVA: 0x5B | Ordinal: 92
        void onMissionStop(void);

    // RVA: 0x5C | Ordinal: 93
        void onMyObjectCreate(class Registered *, unsigned __int64 &) const;

    // RVA: 0x5D | Ordinal: 94
        void onMyObjectDestroy(class Registered *, unsigned __int64 &) const;

    // RVA: 0x5E | Ordinal: 95
        void onMyObjectSimulate(class Registered *, unsigned __int64 &, double) const;

    // RVA: 0x5F | Ordinal: 96
        void onNextFrame(int);

    // RVA: 0xA | Ordinal: 11
        void _WorldPlugin(void);
};

// DCS_OPS_RE_WORLD.DLL_WORLDPLUGIN_HPP
