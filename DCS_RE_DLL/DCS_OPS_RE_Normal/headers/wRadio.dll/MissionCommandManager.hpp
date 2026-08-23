#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: MissionCommandManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MissionCommandManager
{
public:

    // RVA: 0x1BF | Ordinal: 448
        void addCommand(class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::basic_string<char> const &, class IMissionCommandAction *);

    // RVA: 0x1C0 | Ordinal: 449
        void addCommandForCoalition(enum wcCoalitionName, class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::basic_string<char> const &, class IMissionCommandAction *);

    // RVA: 0x1C1 | Ordinal: 450
        void addCommandForGroup(enum wcCoalitionName, unsigned int, class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::basic_string<char> const &, class IMissionCommandAction *);

    // RVA: 0x1CB | Ordinal: 460
        void addSubMenu(class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::basic_string<char> const &);

    // RVA: 0x1CC | Ordinal: 461
        void addSubMenuForCoalition(enum wcCoalitionName, class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::basic_string<char> const &);

    // RVA: 0x1CD | Ordinal: 462
        void addSubMenuForGroup(enum wcCoalitionName, unsigned int, class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::basic_string<char> const &);

    // RVA: 0x206 | Ordinal: 519
        void doAction(unsigned int);

    // RVA: 0x32B | Ordinal: 812
        void instance(void);

    // RVA: 0x356 | Ordinal: 855
        void onMissionFinish(void);

    // RVA: 0x357 | Ordinal: 856
        void onMissionStart(void);

    // RVA: 0x3D7 | Ordinal: 984
        void removeItem(class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x3D8 | Ordinal: 985
        void removeItemForCoalition(enum wcCoalitionName, class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x3D9 | Ordinal: 986
        void removeItemForGroup(enum wcCoalitionName, unsigned int, class ed::list<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x42D | Ordinal: 1070
        void setMenu(enum wcCoalitionName, unsigned int);

    // RVA: 0x4BB | Ordinal: 1212
        void updateLocalPlayerMenu(void);
};

// DCS_OPS_RE_WRADIO.DLL_MISSIONCOMMANDMANAGER_HPP
