#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wGuidanceDatalinkSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGuidanceDatalinkSystem
{
public:

    // RVA: 0x1F8 | Ordinal: 505
        void collectEnemyAirUnitsDetectedByGroundRadar(double);

    // RVA: 0x22D | Ordinal: 558
        void getAreaOfResponsibilityRadius(void) const;

    // RVA: 0x238 | Ordinal: 569
        void getChannel(void) const;

    // RVA: 0x25E | Ordinal: 607
        void getGroundRadarProviderIds(void) const;

    // RVA: 0x25F | Ordinal: 608
        void getGroundRadarTargets(class ed::vector<struct GroundRadarTargetData, class ed::allocator<struct GroundRadarTargetData>> &) const;

    // RVA: 0x260 | Ordinal: 609
        void getGuidanceDataSnapshot(class ed::vector<struct DataGuidanceInfo, class ed::allocator<struct DataGuidanceInfo>> &) const;

    // RVA: 0x2D5 | Ordinal: 726
        void getTargetAreaCenter(void) const;

    // RVA: 0x33F | Ordinal: 832
        void isTargetEligibleByGroundRadar(unsigned int, double, bool *);

    // RVA: 0x340 | Ordinal: 833
        void isTargetVisibleByGroundRadarNow(unsigned int) const;

    // RVA: 0x341 | Ordinal: 834
        void isTargetVisibleByGroundRadarNowFromProviders(class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &, unsigned int, class IwWorldRadarProcessor &, class std::function<bool __cdecl(unsigned int)> const &);

    // RVA: 0x347 | Ordinal: 840
        void isUnderGuidance(unsigned int) const;

    // RVA: 0x34E | Ordinal: 847
        void makeGuidanceData(unsigned int);

    // RVA: 0x34F | Ordinal: 848
        void makeMessage(class ed::basic_string<char> &&) const;

    // RVA: 0x393 | Ordinal: 916
        void parseAircraftTransponderMessage(class ed::basic_string<char> const &) const;

    // RVA: 0x3BF | Ordinal: 960
        void processIncomingMessages(void);

    // RVA: 0x3CA | Ordinal: 971
        void refreshGroundRadarProviders(double);

    // RVA: 0x3CC | Ordinal: 973
        void registerAircraft(unsigned int, class osg::Vec3d const &);

    // RVA: 0x3D0 | Ordinal: 977
        void removeAircraftGuidanceData(unsigned int);

    // RVA: 0x3DC | Ordinal: 989
        void removePriorityPoint(void);

    // RVA: 0x3E0 | Ordinal: 993
        void resolveAircraftTransponderConflicts(void);

    // RVA: 0x3EF | Ordinal: 1008
        void sendGuidanceData(unsigned int);

    // RVA: 0x3F2 | Ordinal: 1011
        void sendMessage(class ed::basic_string<char> &&, unsigned int);

    // RVA: 0x3F5 | Ordinal: 1014
        void sendTransceiverAsyncnet(class wRadioDevice *);

    // RVA: 0x407 | Ordinal: 1032
        void setChannel(unsigned int);

    // RVA: 0x446 | Ordinal: 1095
        void setPreferredTargetForAircraft(unsigned int, double, double);

    // RVA: 0x447 | Ordinal: 1096
        void setPriorityPoint(double, double, unsigned int);

    // RVA: 0x44E | Ordinal: 1103
        void setTargetForAircraft(unsigned int, char const *);

    // RVA: 0x461 | Ordinal: 1122
        void setupDatalink(int, int, double, double, class cPointerTemplate<class MovingObject>, enum DatalinkTypes, class wDatalinkCommunicator *);

    // RVA: 0x480 | Ordinal: 1153
        void tryGetFreshestGroundRadarTargetData(unsigned int, class osg::Vec3d &, class osg::Vec3d &, double &) const;

    // RVA: 0x481 | Ordinal: 1154
        void tryGetFreshestGroundRadarTargetDataFromProviders(class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &, unsigned int, class IwWorldRadarProcessor &, class std::function<bool __cdecl(unsigned int)> const &, class osg::Vec3d &, class osg::Vec3d &, double &);

    // RVA: 0x4B3 | Ordinal: 1204
        void update(double);

    // RVA: 0x4B7 | Ordinal: 1208
        void updateAircraftState(unsigned int);

    // RVA: 0x4B8 | Ordinal: 1209
        void updateDatalinkFrequency(void);

    // RVA: 0x4BA | Ordinal: 1211
        void updateGuidanceData(unsigned int);

    // RVA: 0x6A | Ordinal: 107
        void wGuidanceDatalinkSystem(class wGuidanceDatalinkSystem const &);

    // RVA: 0x6B | Ordinal: 108
        void wGuidanceDatalinkSystem(void);

    // RVA: 0xAA | Ordinal: 171
        void _wGuidanceDatalinkSystem(void);
};

// DCS_OPS_RE_WRADIO.DLL_WGUIDANCEDATALINKSYSTEM_HPP
