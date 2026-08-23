#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: woGuidanceSystemState
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woGuidanceSystemState
{
public:

    // RVA: 0x130 | Ordinal: 305
        void activate(class woCar &, int, int, double, double, class wDatalinkCommunicator *);

    // RVA: 0x18B | Ordinal: 396
        void clearAreaOfResponsibilityInfo(void);

    // RVA: 0x18C | Ordinal: 397
        void clearExpiredAreaOfResponsibilityInfo(void);

    // RVA: 0x18D | Ordinal: 398
        void clearExpiredRadarTargets(void);

    // RVA: 0x18E | Ordinal: 399
        void clearExpiredTargetLinks(void);

    // RVA: 0x192 | Ordinal: 403
        void clearRadarTargets(void);

    // RVA: 0x194 | Ordinal: 405
        void clearTargetLinks(void);

    // RVA: 0x1CB | Ordinal: 460
        void deactivate(void);

    // RVA: 0x21A | Ordinal: 539
        void getAreaOfResponsibility(class osg::Vec3d &, int &) const;

    // RVA: 0x22B | Ordinal: 556
        void getChannel(void) const;

    // RVA: 0x2C8 | Ordinal: 713
        void getRadarProviderIds(class ed::vector<unsigned int, class ed::allocator<unsigned int>> &) const;

    // RVA: 0x2C9 | Ordinal: 714
        void getRadarTargets(class ed::vector<struct woGuidanceSystemState::RadarTargetData, class ed::allocator<struct woGuidanceSystemState::RadarTargetData>> &);

    // RVA: 0x2EC | Ordinal: 749
        void getTargetLinks(class ed::vector<struct woGuidanceSystemState::TargetLinkData, class ed::allocator<struct woGuidanceSystemState::TargetLinkData>> &);

    // RVA: 0x316 | Ordinal: 791
        void hasActiveSystem(void) const;

    // RVA: 0x438 | Ordinal: 1081
        void refreshAreaOfResponsibilityInfo(int, int, double, double, class ed::vector<unsigned int, class ed::allocator<unsigned int>>);

    // RVA: 0x439 | Ordinal: 1082
        void refreshAreaOfResponsibilityInfoNet(int, int, double, double, unsigned int, unsigned int, unsigned int);

    // RVA: 0x449 | Ordinal: 1098
        void removePriorityPoint(void);

    // RVA: 0x460 | Ordinal: 1121
        void resetNetSyncTimestamps(void);

    // RVA: 0x4D4 | Ordinal: 1237
        void setPreferredTargetForAircraft(unsigned int, double, double);

    // RVA: 0x528 | Ordinal: 1321
        void syncRadarTargetsFromSystem(void);

    // RVA: 0x529 | Ordinal: 1322
        void syncTargetLinksFromSystem(void);

    // RVA: 0x556 | Ordinal: 1367
        void update(class woCar &, double &, class std::map<int, int, struct std::less<int>, class ed::allocator<struct std::pair<int const, int>>> const &);

    // RVA: 0x56A | Ordinal: 1387
        void updateRadarTargetInfo(unsigned int, double, double, double, double, int, int);

    // RVA: 0x572 | Ordinal: 1395
        void updateTargetInfo(unsigned int, unsigned int);

    // RVA: 0x26 | Ordinal: 39
        void woGuidanceSystemState(void);

    // RVA: 0x3B | Ordinal: 60
        void _woGuidanceSystemState(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_WOGUIDANCESYSTEMSTATE_HPP
