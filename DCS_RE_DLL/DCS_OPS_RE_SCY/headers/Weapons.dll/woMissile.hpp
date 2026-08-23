#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: woMissile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woMissile
{
public:

    // RVA: 0x149 | Ordinal: 330
        void AS_Regular_Missile(void);

    // RVA: 0x14A | Ordinal: 331
        void Aeroballistic_Missile(void);

    // RVA: 0x14B | Ordinal: 332
        void Alfa(void) const;

    // RVA: 0x14D | Ordinal: 334
        void Antiship_Missile(void);

    // RVA: 0x14E | Ordinal: 335
        void Attack_Air_Target(void);

    // RVA: 0x16B | Ordinal: 364
        void Class(void) const;

    // RVA: 0x173 | Ordinal: 372
        void Control(void);

    // RVA: 0x174 | Ordinal: 373
        void Control_Gamma_Req(void);

    // RVA: 0x175 | Ordinal: 374
        void Control_Spec(void);

    // RVA: 0x177 | Ordinal: 376
        void Control_Vel_Req(void);

    // RVA: 0x179 | Ordinal: 378
        void Course(void);

    // RVA: 0x17C | Ordinal: 381
        void CreateLight(void);

    // RVA: 0x17E | Ordinal: 383
        void DefineObjectReflection(class MovingObject *);

    // RVA: 0x181 | Ordinal: 386
        void DrawArgument_(double);

    // RVA: 0x182 | Ordinal: 387
        void Dyn_Type(void);

    // RVA: 0x183 | Ordinal: 388
        void Follow_Direction(class osg::Vec3f const &);

    // RVA: 0x188 | Ordinal: 393
        void GetAlfa(void);

    // RVA: 0x192 | Ordinal: 403
        void GetCx0CyaA(float *, float *, float *);

    // RVA: 0x193 | Ordinal: 404
        void GetCxCy(float, float *, float *);

    // RVA: 0x197 | Ordinal: 408
        void GetDrawArguments(void);

    // RVA: 0x19F | Ordinal: 416
        void GetN2Position(void);

    // RVA: 0x1A0 | Ordinal: 417
        void GetNoTarget(void);

    // RVA: 0x1A4 | Ordinal: 421
        void GetNyzAvailable(void);

    // RVA: 0x1A7 | Ordinal: 424
        void GetPoint(double);

    // RVA: 0x1A8 | Ordinal: 425
        void GetPoint(void);

    // RVA: 0x1AB | Ordinal: 428
        void GetTargetPosition(void);

    // RVA: 0x1AF | Ordinal: 432
        void Get_Cx(float);

    // RVA: 0x1B0 | Ordinal: 433
        void Get_Family(void);

    // RVA: 0x1B1 | Ordinal: 434
        void Get_Gamma_Req(class osg::Vec3f const &);

    // RVA: 0x1B2 | Ordinal: 435
        void Get_H_max(void);

    // RVA: 0x1B3 | Ordinal: 436
        void Get_Head_Type(void);

    // RVA: 0x1B4 | Ordinal: 437
        void Get_Name(void);

    // RVA: 0x1B5 | Ordinal: 438
        void Get_T_pos_Error(void);

    // RVA: 0x1B6 | Ordinal: 439
        void Get_Target_Performances(void);

    // RVA: 0x1B7 | Ordinal: 440
        void Ground_Proximity(float, class osg::Vec3f *);

    // RVA: 0x1BE | Ordinal: 447
        void Hrad(void);

    // RVA: 0x1C3 | Ordinal: 452
        void In_Air_(void) const;

    // RVA: 0x1C5 | Ordinal: 454
        void Init(void);

    // RVA: 0x1C6 | Ordinal: 455
        void InitExhaust(void);

    // RVA: 0x1DC | Ordinal: 477
        void NextTime(void);

    // RVA: 0x1DD | Ordinal: 478
        void Nx(void) const;

    // RVA: 0x1E1 | Ordinal: 482
        void Ny(void) const;

    // RVA: 0x1E2 | Ordinal: 483
        void Nz(void) const;

    // RVA: 0x1EF | Ordinal: 496
        void Position(double);

    // RVA: 0x1F0 | Ordinal: 497
        void PostCollisionProcessing(struct wsCollisionData *);

    // RVA: 0x1F8 | Ordinal: 505
        void Rocket_Limits(void);

    // RVA: 0x1F9 | Ordinal: 506
        void Roll(void);

    // RVA: 0x1FA | Ordinal: 507
        void SAMTimeToTargetImpact(void);

    // RVA: 0x1FB | Ordinal: 508
        void SAttack_Air_Target(void);

    // RVA: 0x1FD | Ordinal: 510
        void Select_Dynamics(void);

    // RVA: 0x201 | Ordinal: 514
        void SetNewGun(unsigned int);

    // RVA: 0x202 | Ordinal: 515
        void SetNoTarget(bool);

    // RVA: 0x204 | Ordinal: 517
        void Set_Head_Type(int);

    // RVA: 0x205 | Ordinal: 518
        void Set_No_Target(void);

    // RVA: 0x20B | Ordinal: 524
        void Tang(void);

    // RVA: 0x210 | Ordinal: 529
        void Target_ID(void) const;

    // RVA: 0x211 | Ordinal: 530
        void Target_Warning(void);

    // RVA: 0x213 | Ordinal: 532
        void TimeToTargetImpact(float);

    // RVA: 0x218 | Ordinal: 537
        void Wing_Missile(void);

    // RVA: 0x23B | Ordinal: 572
        void advanceAnimation(void);

    // RVA: 0x255 | Ordinal: 598
        void assignTargetPoint(class osg::Vec3f const &);

    // RVA: 0x2F7 | Ordinal: 760
        void doExplode(class osg::Vec3f const &, unsigned int);

    // RVA: 0x326 | Ordinal: 807
        void getActiveLockDist(void);

    // RVA: 0x358 | Ordinal: 857
        void getCaliber(void) const;

    // RVA: 0x36C | Ordinal: 877
        void getControlTimeStep(void);

    // RVA: 0x37B | Ordinal: 892
        void getDetectable(void);

    // RVA: 0x3A8 | Ordinal: 937
        void getDynamicTimeStep(void);

    // RVA: 0x3C1 | Ordinal: 962
        void getGun(void);

    // RVA: 0x3C2 | Ordinal: 963
        void getHOJ(void) const;

    // RVA: 0x3C5 | Ordinal: 966
        void getHost(void) const;

    // RVA: 0x3CA | Ordinal: 971
        void getIllumination(class osg::Vec3f const &) const;

    // RVA: 0x3CF | Ordinal: 976
        void getLoft(void) const;

    // RVA: 0x3D1 | Ordinal: 978
        void getM_miss(void);

    // RVA: 0x3F5 | Ordinal: 1014
        void getNameDescriptor(void) const;

    // RVA: 0x3FC | Ordinal: 1021
        void getNy_max(void) const;

    // RVA: 0x40E | Ordinal: 1039
        void getRCS(float, class osg::Vec3f const &) const;

    // RVA: 0x437 | Ordinal: 1080
        void getTemperature(class osg::Vec3f const &) const;

    // RVA: 0x438 | Ordinal: 1081
        void getTemperature(float) const;

    // RVA: 0x448 | Ordinal: 1097
        void getVolumeEffectBox(class Math::Box<2, float> *) const;

    // RVA: 0x475 | Ordinal: 1142
        void get_wRocketHotJoin(struct wRocketHotJoin &) const;

    // RVA: 0x4A0 | Ordinal: 1185
        void initialization(void);

    // RVA: 0x4A5 | Ordinal: 1190
        void isAirTargetVisible(class MovingObject *);

    // RVA: 0x517 | Ordinal: 1304
        void netActiveRadarLockDist(float);

    // RVA: 0x528 | Ordinal: 1321
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x529 | Ordinal: 1322
        void netHOJ(bool);

    // RVA: 0x52B | Ordinal: 1324
        void netHeadActive(bool);

    // RVA: 0x538 | Ordinal: 1337
        void netLoft(bool);

    // RVA: 0x539 | Ordinal: 1338
        void netNoTargetVal(bool);

    // RVA: 0x540 | Ordinal: 1345
        void netSendUpdate(int, int, int &);

    // RVA: 0x5E1 | Ordinal: 1506
        void setActiveRadarLockDist(float, bool);

    // RVA: 0x601 | Ordinal: 1538
        void setDrawArg(int, float);

    // RVA: 0x606 | Ordinal: 1543
        void setHOJ(bool, bool);

    // RVA: 0x608 | Ordinal: 1545
        void setHeadActive(bool, bool);

    // RVA: 0x610 | Ordinal: 1553
        void setLoft(bool, bool);

    // RVA: 0x616 | Ordinal: 1559
        void setMissile(unsigned int, unsigned int, class osg::Vec3f const &, class wsType, class osg::Vec3f const &, class wPosition3<float> const &, int, class wConstraintRail *, class ed::vector<float, class ed::allocator128<float>> const &, bool, int, int, int, float, bool, class osg::Vec3f, bool, double, float, bool, float, bool, float, bool);

    // RVA: 0x61E | Ordinal: 1567
        void setNoTargetVal(bool, bool);

    // RVA: 0x628 | Ordinal: 1577
        void setRailOwner(class MovingObject *);

    // RVA: 0x63D | Ordinal: 1598
        void setTime(float);

    // RVA: 0x642 | Ordinal: 1603
        void set_ic70(bool);

    // RVA: 0x65A | Ordinal: 1627
        void sound_init(void);

    // RVA: 0x54 | Ordinal: 85
        void woMissile(void);

    // RVA: 0x81 | Ordinal: 130
        void _woMissile(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WOMISSILE_HPP
