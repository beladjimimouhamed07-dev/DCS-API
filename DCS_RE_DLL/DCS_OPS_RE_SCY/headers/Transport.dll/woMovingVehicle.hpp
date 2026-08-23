#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: woMovingVehicle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woMovingVehicle
{
public:

    // RVA: 0x99 | Ordinal: 154
        void ChangePos(class wPosition3<float> const &);

    // RVA: 0xA1 | Ordinal: 162
        void Class(void) const;

    // RVA: 0xC5 | Ordinal: 198
        void GetGearsPosition(class osg::Vec3d &, class osg::Vec3d &, class osg::Vec3d &, class osg::Vec3d &);

    // RVA: 0xD2 | Ordinal: 211
        void GetPoint(double);

    // RVA: 0xD3 | Ordinal: 212
        void GetPoint(void);

    // RVA: 0xD9 | Ordinal: 218
        void GetPositionForTrailers(class woMovingVehicle *, class wPosition3<float> &, class osg::Vec3d &, double);

    // RVA: 0xE4 | Ordinal: 229
        void IsOnRoad(void) const;

    // RVA: 0xE5 | Ordinal: 230
        void IsOnWater(void);

    // RVA: 0xF9 | Ordinal: 250
        void OnRoadObjectDestroyed(unsigned int);

    // RVA: 0x104 | Ordinal: 261
        void PositionByGears(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d &, class osg::Vec3d &) const;

    // RVA: 0x10A | Ordinal: 267
        void PrintTrace(void);

    // RVA: 0x166 | Ordinal: 359
        void canForceRiver(void) const;

    // RVA: 0x16B | Ordinal: 364
        void canSwim(void) const;

    // RVA: 0x16D | Ordinal: 366
        void can_TacticalDir(void) const;

    // RVA: 0x172 | Ordinal: 371
        void can_tacticalSpeed(void) const;

    // RVA: 0x17F | Ordinal: 384
        void checkLandscape(void);

    // RVA: 0x182 | Ordinal: 387
        void checkOnRideObject(void);

    // RVA: 0x184 | Ordinal: 389
        void checkRideOnObstacles(double, double, double &, struct woMovingVehicle::IntersectionCache *);

    // RVA: 0x1FF | Ordinal: 512
        void fastPos(void) const;

    // RVA: 0x223 | Ordinal: 548
        void getByImpl(class MovingVehicle const *);

    // RVA: 0x242 | Ordinal: 579
        void getDescriptor(void) const;

    // RVA: 0x261 | Ordinal: 610
        void getFordingDepth(void) const;

    // RVA: 0x33A | Ordinal: 827
        void initPosition(float, float, float, bool, bool);

    // RVA: 0x33D | Ordinal: 830
        void initPositionWithParent(class osg::Vec3d, float);

    // RVA: 0x346 | Ordinal: 839
        void isBlockAvoiding(void) const;

    // RVA: 0x360 | Ordinal: 865
        void isStaying(void) const;

    // RVA: 0x362 | Ordinal: 867
        void isStayingEx(void) const;

    // RVA: 0x364 | Ordinal: 869
        void isStopped(void) const;

    // RVA: 0x37B | Ordinal: 892
        void length(void) const;

    // RVA: 0x3A0 | Ordinal: 929
        void mass(void) const;

    // RVA: 0x3A6 | Ordinal: 935
        void maxDeltaHeight(double) const;

    // RVA: 0x3A9 | Ordinal: 938
        void maxSlopeAngle(void) const;

    // RVA: 0x3AA | Ordinal: 939
        void maxSpeed(void) const;

    // RVA: 0x3EE | Ordinal: 1007
        void nextStep(double);

    // RVA: 0x422 | Ordinal: 1059
        void radius(void) const;

    // RVA: 0x497 | Ordinal: 1176
        void setConfig(struct Vehicle_Descriptor const *);

    // RVA: 0x4AD | Ordinal: 1198
        void setFixedMoving(bool);

    // RVA: 0x4B3 | Ordinal: 1204
        void setFromSurfInfo(class osg::Vec3d &, struct woMovingVehicle::IntersectionCache *, bool);

    // RVA: 0x4B4 | Ordinal: 1205
        void setFromSurfInfoWithObstacles(class osg::Vec3d &, struct woMovingVehicle::IntersectionCache *, bool, double, double);

    // RVA: 0x4E1 | Ordinal: 1250
        void setSceneObjectIdToImpl(void);

    // RVA: 0x4EE | Ordinal: 1263
        void setTacticalDir(class osg::Vec2d const &, double);

    // RVA: 0x4F0 | Ordinal: 1265
        void setTacticalSpeed(double);

    // RVA: 0x4F8 | Ordinal: 1273
        void setTopSpeedHandicap(double);

    // RVA: 0x512 | Ordinal: 1299
        void speed(void) const;

    // RVA: 0x514 | Ordinal: 1301
        void startAgony(void);

    // RVA: 0x51F | Ordinal: 1312
        void stopOnLandCondition(bool);

    // RVA: 0x522 | Ordinal: 1315
        void stopWithRemovingFromGroup(bool);

    // RVA: 0x52A | Ordinal: 1323
        void tacticalDir(void) const;

    // RVA: 0x52C | Ordinal: 1325
        void tacticalDirArrived(void) const;

    // RVA: 0x52E | Ordinal: 1327
        void tacticalDirFixed(void) const;

    // RVA: 0x530 | Ordinal: 1329
        void tacticalSpeed(void) const;

    // RVA: 0x549 | Ordinal: 1354
        void turnR(void) const;

    // RVA: 0x557 | Ordinal: 1368
        void updateAIPos(void);

    // RVA: 0x565 | Ordinal: 1382
        void updateMOPosition(double, double);

    // RVA: 0x566 | Ordinal: 1383
        void updateNeighbours(class MovingVehicle const *);

    // RVA: 0x577 | Ordinal: 1400
        void vehicleImpl(void);

    // RVA: 0x578 | Ordinal: 1401
        void vehicleImpl(void) const;

    // RVA: 0x579 | Ordinal: 1402
        void vehicleState(void) const;

    // RVA: 0x57A | Ordinal: 1403
        void vertObstacle(void) const;

    // RVA: 0x57E | Ordinal: 1407
        void wheelTurnAngleArg(void) const;

    // RVA: 0x57F | Ordinal: 1408
        void width(void) const;

    // RVA: 0x27 | Ordinal: 40
        void woMovingVehicle(void);

    // RVA: 0x3C | Ordinal: 61
        void _woMovingVehicle(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_WOMOVINGVEHICLE_HPP
