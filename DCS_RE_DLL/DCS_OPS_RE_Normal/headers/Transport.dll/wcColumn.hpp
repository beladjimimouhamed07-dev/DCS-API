#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: wcColumn
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wcColumn
{
public:

    // RVA: 0x9D | Ordinal: 158
        void Class(void) const;

    // RVA: 0xAD | Ordinal: 174
        void Control(void);

    // RVA: 0xC8 | Ordinal: 201
        void GetLastWaypointId(void) const;

    // RVA: 0xF8 | Ordinal: 249
        void OnRoadObjectDestroyed(unsigned int);

    // RVA: 0xFA | Ordinal: 251
        void OutFinishTaskMessage(int, int);

    // RVA: 0x128 | Ordinal: 297
        void _addTask(class AI::Task *, class osg::Vec3f const &, class AI::ITaskHelper *);

    // RVA: 0x12A | Ordinal: 299
        void _createEmptyRouteMission(class osg::Vec3f const &);

    // RVA: 0x12B | Ordinal: 300
        void _deleteTask(unsigned int);

    // RVA: 0x12C | Ordinal: 301
        void _deleteTask(class AI::Task *);

    // RVA: 0x13C | Ordinal: 317
        void addDescentOnBoard(unsigned int, class wcColumn *);

    // RVA: 0x13D | Ordinal: 318
        void addFOTarget(unsigned int);

    // RVA: 0x140 | Ordinal: 321
        void addMember(class woCar *);

    // RVA: 0x143 | Ordinal: 324
        void addTargetTask(unsigned int, class AI::Task *);

    // RVA: 0x145 | Ordinal: 326
        void addToAIColumn(class woCar *);

    // RVA: 0x148 | Ordinal: 329
        void afterCreatePath(bool);

    // RVA: 0x14A | Ordinal: 331
        void afterCreatePathMSG(bool, bool);

    // RVA: 0x158 | Ordinal: 345
        void askForEmbarkTask(void);

    // RVA: 0x164 | Ordinal: 357
        void canForceRiver(void) const;

    // RVA: 0x169 | Ordinal: 362
        void canSwim(void) const;

    // RVA: 0x187 | Ordinal: 392
        void checkedDisperse(void);

    // RVA: 0x190 | Ordinal: 401
        void clearPath(void);

    // RVA: 0x198 | Ordinal: 409
        void continueMovement(void);

    // RVA: 0x199 | Ordinal: 410
        void control(double &);

    // RVA: 0x1A8 | Ordinal: 425
        void create(struct lua_State *, class IwcCountry *, bool, unsigned char);

    // RVA: 0x1BA | Ordinal: 443
        void createNetPath(class std::map<float, struct RoutePoint, struct std::less<float>, class ed::allocator<struct std::pair<float const, struct RoutePoint>>> const &);

    // RVA: 0x1BC | Ordinal: 445
        void createPathAndUnits(class Lua::Config &, unsigned char);

    // RVA: 0x1BE | Ordinal: 447
        void createPathEnd(int, bool);

    // RVA: 0x1C0 | Ordinal: 449
        void createPathWORoad(class osg::Vec3d, class osg::Vec3d, bool);

    // RVA: 0x1C5 | Ordinal: 454
        void currentAlarmState(void) const;

    // RVA: 0x1C7 | Ordinal: 456
        void currentFormation(void) const;

    // RVA: 0x1C9 | Ordinal: 458
        void currentROE(void) const;

    // RVA: 0x1D8 | Ordinal: 473
        void deleteTargetTask(unsigned int);

    // RVA: 0x1DF | Ordinal: 480
        void destroy(bool);

    // RVA: 0x1E5 | Ordinal: 486
        void destroyObjectOnPath(unsigned int);

    // RVA: 0x1EB | Ordinal: 492
        void disableFOTargets(void);

    // RVA: 0x1FE | Ordinal: 511
        void fallInTemplate(class ed::basic_string<char> const &);

    // RVA: 0x208 | Ordinal: 521
        void freezePath(void);

    // RVA: 0x228 | Ordinal: 553
        void getCarSize(void);

    // RVA: 0x230 | Ordinal: 561
        void getCountWaypoints(void) const;

    // RVA: 0x231 | Ordinal: 562
        void getCreatePathRetValue(void);

    // RVA: 0x23E | Ordinal: 575
        void getDesc(void) const;

    // RVA: 0x247 | Ordinal: 584
        void getDetector(void);

    // RVA: 0x252 | Ordinal: 595
        void getEmbarkTask(void);

    // RVA: 0x25E | Ordinal: 607
        void getFireTimeTargetCar(int, double &, double &);

    // RVA: 0x25F | Ordinal: 608
        void getFordingDepth(void) const;

    // RVA: 0x263 | Ordinal: 612
        void getFormationOffset(int) const;

    // RVA: 0x265 | Ordinal: 614
        void getFreeFormPos(class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> const &, class ed::basic_string<char> const &);

    // RVA: 0x27D | Ordinal: 638
        void getHumanLeader(void);

    // RVA: 0x288 | Ordinal: 649
        void getLeader(void) const;

    // RVA: 0x28C | Ordinal: 653
        void getLeaderNumWP(void) const;

    // RVA: 0x295 | Ordinal: 662
        void getMaxFireAltitude(unsigned int) const;

    // RVA: 0x299 | Ordinal: 666
        void getMissionTask(void);

    // RVA: 0x29A | Ordinal: 667
        void getMovingImpl(void);

    // RVA: 0x29B | Ordinal: 668
        void getMovingImpl(void) const;

    // RVA: 0x2AC | Ordinal: 685
        void getNextWaypointId(void) const;

    // RVA: 0x2B1 | Ordinal: 690
        void getObject(unsigned __int64) const;

    // RVA: 0x2D5 | Ordinal: 726
        void getRoute(void);

    // RVA: 0x2DF | Ordinal: 736
        void getSize(void) const;

    // RVA: 0x2EE | Ordinal: 751
        void getTasks(char const *, class ed::vector<class AI::Task *, class ed::allocator<class AI::Task *>> &);

    // RVA: 0x2F5 | Ordinal: 758
        void getTransportId(void);

    // RVA: 0x2F8 | Ordinal: 761
        void getUnderConstructionFlag(void);

    // RVA: 0x2F9 | Ordinal: 762
        void getUnit(int) const;

    // RVA: 0x301 | Ordinal: 770
        void getVehicle(int);

    // RVA: 0x311 | Ordinal: 786
        void groupRoute(void) const;

    // RVA: 0x327 | Ordinal: 808
        void increaseColumnLength(void);

    // RVA: 0x344 | Ordinal: 837
        void isAllStaying(void) const;

    // RVA: 0x348 | Ordinal: 841
        void isColumn(void) const;

    // RVA: 0x349 | Ordinal: 842
        void isCurrentState(void);

    // RVA: 0x34A | Ordinal: 843
        void isDead(void) const;

    // RVA: 0x34D | Ordinal: 846
        void isFOPathAssignable(void) const;

    // RVA: 0x34E | Ordinal: 847
        void isFOTargetsAssignable(void) const;

    // RVA: 0x350 | Ordinal: 849
        void isHuman(void) const;

    // RVA: 0x353 | Ordinal: 852
        void isLeader(class woCar *);

    // RVA: 0x377 | Ordinal: 888
        void leaderPathParam(void) const;

    // RVA: 0x378 | Ordinal: 889
        void leaderPointOnRoadParam(struct edterrain::PointOnRoad &) const;

    // RVA: 0x37A | Ordinal: 891
        void leaderSpeed(void) const;

    // RVA: 0x3A7 | Ordinal: 936
        void maxSlopeAngle(void) const;

    // RVA: 0x3B2 | Ordinal: 947
        void netCreate(unsigned int, enum wcCoalitionName, bool, unsigned int, class ed::basic_string<char> const &, struct ColumnStatus const &);

    // RVA: 0x3B7 | Ordinal: 952
        void netDestroy(void);

    // RVA: 0x3BC | Ordinal: 957
        void netDiscard(void);

    // RVA: 0x3C1 | Ordinal: 962
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x3C6 | Ordinal: 967
        void netGetHost(void) const;

    // RVA: 0x3CB | Ordinal: 972
        void netHideGroup(bool);

    // RVA: 0x3DE | Ordinal: 991
        void netSendUpdate(int, int, int &);

    // RVA: 0x3EA | Ordinal: 1003
        void net_requestPath(int);

    // RVA: 0x3EB | Ordinal: 1004
        void net_updateExpendedQty(unsigned int, int);

    // RVA: 0x3EC | Ordinal: 1005
        void net_updateWeaponFlags(unsigned int, unsigned __int64);

    // RVA: 0x437 | Ordinal: 1080
        void reform(double const *);

    // RVA: 0x443 | Ordinal: 1092
        void removeFOTarget(unsigned int);

    // RVA: 0x444 | Ordinal: 1093
        void removeFromAIColumn(class woCar *);

    // RVA: 0x446 | Ordinal: 1095
        void removeMember(class woCar *);

    // RVA: 0x44B | Ordinal: 1100
        void removeTargetToAI(unsigned int);

    // RVA: 0x45A | Ordinal: 1115
        void resetColumnLength(void);

    // RVA: 0x45B | Ordinal: 1116
        void resetColumnParam(void);

    // RVA: 0x45C | Ordinal: 1117
        void resetCreatePathRetValue(void);

    // RVA: 0x45E | Ordinal: 1119
        void resetLeaderPathParam(int, class osg::Vec3d &);

    // RVA: 0x464 | Ordinal: 1125
        void routeSpeed(void) const;

    // RVA: 0x468 | Ordinal: 1129
        void scheduleActivitiesStart(void);

    // RVA: 0x46C | Ordinal: 1133
        void sendActiveEmbarkTask(void) const;

    // RVA: 0x46F | Ordinal: 1136
        void sendBypassRouteRequest(double, unsigned int);

    // RVA: 0x474 | Ordinal: 1141
        void sendEmbarkTask(double, double, double, double, class ed::basic_string<char> const &, unsigned int, bool) const;

    // RVA: 0x485 | Ordinal: 1158
        void setAlarmState(enum GTMAlarmType);

    // RVA: 0x48C | Ordinal: 1165
        void setByPassRouteHandler(class wcRoute *, double, unsigned int, double);

    // RVA: 0x499 | Ordinal: 1178
        void setCountry(class IwcCountry *);

    // RVA: 0x49B | Ordinal: 1180
        void setCurrIndxToMission(int);

    // RVA: 0x4A9 | Ordinal: 1194
        void setEmbarkTask(double, double, double, double, class ed::basic_string<char> const &, unsigned int, bool);

    // RVA: 0x4AB | Ordinal: 1196
        void setEngageAirWeapons(bool);

    // RVA: 0x4AC | Ordinal: 1197
        void setFOTargetsAssignable(bool);

    // RVA: 0x4AE | Ordinal: 1199
        void setFollowingCurrentState(void);

    // RVA: 0x4B0 | Ordinal: 1201
        void setFormation(enum CarFormationType);

    // RVA: 0x4BA | Ordinal: 1211
        void setHumanLeader(bool);

    // RVA: 0x4BE | Ordinal: 1215
        void setIntervalBetweenCars(double);

    // RVA: 0x4C0 | Ordinal: 1217
        void setMemberReconMode(class woCar *, bool);

    // RVA: 0x4C3 | Ordinal: 1220
        void setNetOrder(enum wcColumnMail::ColumnOrder, int);

    // RVA: 0x4C4 | Ordinal: 1221
        void setNetPath(struct SPathUpdateParams);

    // RVA: 0x4C9 | Ordinal: 1226
        void setNetStatus(struct ColumnStatus const &);

    // RVA: 0x4CC | Ordinal: 1229
        void setOnOff(bool);

    // RVA: 0x4CE | Ordinal: 1231
        void setOption(unsigned int, class Parameter const &);

    // RVA: 0x4D0 | Ordinal: 1233
        void setPathHandler(bool, class wcRoute *, int);

    // RVA: 0x4D1 | Ordinal: 1234
        void setPathTo(struct PathOptions const &);

    // RVA: 0x4D6 | Ordinal: 1239
        void setROE(enum ROEType);

    // RVA: 0x4DC | Ordinal: 1245
        void setRoute(class std::map<float, struct RoutePoint, struct std::less<float>, class ed::allocator<struct std::pair<float const, struct RoutePoint>>> &);

    // RVA: 0x4DF | Ordinal: 1248
        void setRouteSpeed(double, bool);

    // RVA: 0x4E6 | Ordinal: 1255
        void setSpeedToGroup(double, bool);

    // RVA: 0x4ED | Ordinal: 1262
        void setStraightPathTo(struct PathOptions const &);

    // RVA: 0x4F2 | Ordinal: 1267
        void setTargetToAI(struct TargetPointGround const &, double);

    // RVA: 0x4FB | Ordinal: 1276
        void setTransportId(unsigned int);

    // RVA: 0x518 | Ordinal: 1305
        void state(void) const;

    // RVA: 0x51E | Ordinal: 1311
        void stopMovement(void);

    // RVA: 0x523 | Ordinal: 1316
        void subscribeTakeControlEvent(void);

    // RVA: 0x525 | Ordinal: 1318
        void subscribeToScoreList(void);

    // RVA: 0x537 | Ordinal: 1336
        void taskForTarget(unsigned int);

    // RVA: 0x54E | Ordinal: 1359
        void unsubscribeFromScoreList(void);

    // RVA: 0x54F | Ordinal: 1360
        void unsubscribeTakeControlEvent(void);

    // RVA: 0x554 | Ordinal: 1365
        void update(double &);

    // RVA: 0x558 | Ordinal: 1369
        void updateCachedData(void);

    // RVA: 0x55A | Ordinal: 1371
        void updateColumnParam(void);

    // RVA: 0x562 | Ordinal: 1379
        void updateExpendedQty(unsigned int, int);

    // RVA: 0x567 | Ordinal: 1384
        void updateNumberOfEnabledAIs(bool);

    // RVA: 0x56B | Ordinal: 1388
        void updateRoadObjects(void);

    // RVA: 0x574 | Ordinal: 1397
        void updateWeaponFlags(unsigned int, unsigned __int64);

    // RVA: 0x576 | Ordinal: 1399
        void vehicle(int) const;

    // RVA: 0x57B | Ordinal: 1404
        void wait(double);

    // RVA: 0x1D | Ordinal: 30
        void wcColumn(void);

    // RVA: 0x35 | Ordinal: 54
        void _wcColumn(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_WCCOLUMN_HPP
