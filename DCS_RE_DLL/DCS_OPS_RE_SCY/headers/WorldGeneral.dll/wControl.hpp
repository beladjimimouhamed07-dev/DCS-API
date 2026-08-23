#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wControl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wControl
{
public:

    // RVA: 0x53D | Ordinal: 1342
        void Class(void) const;

    // RVA: 0x545 | Ordinal: 1350
        void Coalition(void) const;

    // RVA: 0x54A | Ordinal: 1355
        void Control(void);

    // RVA: 0x565 | Ordinal: 1382
        void GetCommander(void) const;

    // RVA: 0x5FF | Ordinal: 1536
        void acuireMissionId(unsigned int, class wControl *);

    // RVA: 0x76C | Ordinal: 1901
        void destroy(bool);

    // RVA: 0x770 | Ordinal: 1905
        void detectMissile(class MovingObject *, bool);

    // RVA: 0x7B2 | Ordinal: 1971
        void finishTask(void);

    // RVA: 0x7B8 | Ordinal: 1977
        void forceDetectMissile(class MovingObject *);

    // RVA: 0x7CF | Ordinal: 2000
        void getByMissionId(unsigned int);

    // RVA: 0x7D0 | Ordinal: 2001
        void getByMissionId_AndDoAction(unsigned int, class std::function<bool __cdecl(class wControl *)>);

    // RVA: 0x7D1 | Ordinal: 2002
        void getByName(class ed::basic_string<char> const &);

    // RVA: 0x7D2 | Ordinal: 2003
        void getByNameEx(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x80E | Ordinal: 2063
        void getCategory(void) const;

    // RVA: 0x80F | Ordinal: 2064
        void getChilds(void) const;

    // RVA: 0x823 | Ordinal: 2084
        void getDesc(void) const;

    // RVA: 0x828 | Ordinal: 2089
        void getDetectedTargets(class ed::vector<struct wControl::Target, class ed::allocator<struct wControl::Target>> &) const;

    // RVA: 0x82B | Ordinal: 2092
        void getDetector(void);

    // RVA: 0x83B | Ordinal: 2108
        void getInitialUnitsSize(void);

    // RVA: 0x851 | Ordinal: 2130
        void getLeader(void) const;

    // RVA: 0x862 | Ordinal: 2147
        void getMissionIdByControl(class wControl const *);

    // RVA: 0x8C5 | Ordinal: 2246
        void getName(void) const;

    // RVA: 0x8CB | Ordinal: 2252
        void getNextMissId(void);

    // RVA: 0x8F4 | Ordinal: 2293
        void getSize(void) const;

    // RVA: 0x90B | Ordinal: 2316
        void getUnit(int) const;

    // RVA: 0x9AC | Ordinal: 2477
        void isDead(void) const;

    // RVA: 0x9B3 | Ordinal: 2484
        void isGroup(void) const;

    // RVA: 0x9C4 | Ordinal: 2501
        void isTargetDetected(unsigned int, class wTargetDetectionStatus &) const;

    // RVA: 0x9CA | Ordinal: 2507
        void isUncontrollableFlag(void) const;

    // RVA: 0x9E0 | Ordinal: 2529
        void knowTarget(class MovingObject *, unsigned char);

    // RVA: 0xA52 | Ordinal: 2643
        void loadTriggeredTasks(class Lua::Config &);

    // RVA: 0xA92 | Ordinal: 2707
        void onDamage(enum wcCoalitionName, unsigned int, unsigned int, unsigned int, float);

    // RVA: 0xAA4 | Ordinal: 2725
        void onShoot(enum wcCoalitionName, unsigned int, class wsType const &, void *, unsigned int, unsigned int, class osg::Vec3f const &, double);

    // RVA: 0xB7D | Ordinal: 2942
        void resetMissIdCounter(void);

    // RVA: 0xB9A | Ordinal: 2971
        void setAltitudeToGroup(double, bool, bool);

    // RVA: 0xB9C | Ordinal: 2973
        void setCallbackOnShoot(class std::function<void __cdecl(void *, class wsType const &)> const &);

    // RVA: 0xBAD | Ordinal: 2990
        void setInitialUnitsSize(int);

    // RVA: 0xBB6 | Ordinal: 2999
        void setName(class ed::basic_string<char> const &);

    // RVA: 0xBBC | Ordinal: 3005
        void setOption(unsigned int, class Parameter const &);

    // RVA: 0xBCF | Ordinal: 3024
        void setSpeedToGroup(double, bool);

    // RVA: 0xBE1 | Ordinal: 3042
        void setUncontrollableFlag(bool);

    // RVA: 0xC2D | Ordinal: 3118
        void triggerTask(unsigned int, bool);

    // RVA: 0xC3B | Ordinal: 3132
        void unregisterMissionId(class wControl *);

    // RVA: 0xC5A | Ordinal: 3163
        void validatePointerOnObjectID(unsigned int, class MovingObject *);

    // RVA: 0x1E4 | Ordinal: 485
        void wControl(class wControl const &);

    // RVA: 0x1E5 | Ordinal: 486
        void wControl(void);

    // RVA: 0xC69 | Ordinal: 3178
        void wake_me_up(double);

    // RVA: 0xC6A | Ordinal: 3179
        void wake_me_up_now(void);

    // RVA: 0x2D0 | Ordinal: 721
        void _wControl(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WCONTROL_HPP
