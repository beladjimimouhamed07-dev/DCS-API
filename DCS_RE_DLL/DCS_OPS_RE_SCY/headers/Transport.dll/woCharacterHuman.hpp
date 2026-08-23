#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: woCharacterHuman
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woCharacterHuman
{
public:

    // RVA: 0x92 | Ordinal: 147
        void AddCockpitModel(class Graphics::ModelInstance *);

    // RVA: 0xA0 | Ordinal: 161
        void Class(void) const;

    // RVA: 0xA9 | Ordinal: 170
        void CommandSet(int);

    // RVA: 0xAA | Ordinal: 171
        void CommandSet(int, double);

    // RVA: 0xB5 | Ordinal: 182
        void Degrade(class wPosition3<float> const *, bool);

    // RVA: 0xB6 | Ordinal: 183
        void Descriptor(void) const;

    // RVA: 0xB8 | Ordinal: 185
        void EventBlock(struct EventBase const *);

    // RVA: 0xBD | Ordinal: 190
        void GetAction(unsigned int);

    // RVA: 0xBF | Ordinal: 192
        void GetColumn(void);

    // RVA: 0xCB | Ordinal: 204
        void GetModel(void);

    // RVA: 0xCC | Ordinal: 205
        void GetModel(void) const;

    // RVA: 0xD0 | Ordinal: 209
        void GetPoint(double);

    // RVA: 0xD1 | Ordinal: 210
        void GetPoint(void);

    // RVA: 0xD8 | Ordinal: 217
        void GetPosition(void);

    // RVA: 0xE3 | Ordinal: 228
        void InitWithParent(class MovingObject *, enum positionUsingMode, class ed::basic_string<char> const &, class osg::Vec3f const &);

    // RVA: 0xED | Ordinal: 238
        void Life(float);

    // RVA: 0xFB | Ordinal: 252
        void Parse(class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x100 | Ordinal: 257
        void Position(double);

    // RVA: 0x101 | Ordinal: 258
        void Position(void);

    // RVA: 0x106 | Ordinal: 263
        void PostCollisionProcessing(struct wsCollisionData *);

    // RVA: 0x110 | Ordinal: 273
        void RegisterUnit(void);

    // RVA: 0x11A | Ordinal: 283
        void SetParentObject(class MovingObject *, enum positionUsingMode, class ed::basic_string<char> const &, class osg::Vec3f const &, bool);

    // RVA: 0x126 | Ordinal: 295
        void UnregisterUnit(void);

    // RVA: 0x14D | Ordinal: 334
        void agony(double &);

    // RVA: 0x170 | Ordinal: 369
        void can_manual(void) const;

    // RVA: 0x174 | Ordinal: 373
        void changeModelShape(class ed::basic_string<char> const &);

    // RVA: 0x1AC | Ordinal: 429
        void create(struct InitCharacter *, class wcColumnAnimation *);

    // RVA: 0x1B2 | Ordinal: 435
        void createControlActivity(int);

    // RVA: 0x1E3 | Ordinal: 484
        void destroy(bool);

    // RVA: 0x1E8 | Ordinal: 489
        void destroy_(void);

    // RVA: 0x20D | Ordinal: 526
        void getActiveWeaponInfo(void) const;

    // RVA: 0x210 | Ordinal: 529
        void getAimPoint(void);

    // RVA: 0x212 | Ordinal: 531
        void getAimShift(class osg::Vec3d &);

    // RVA: 0x21E | Ordinal: 543
        void getBaseSightName(void) const;

    // RVA: 0x224 | Ordinal: 549
        void getCameraMaxDist(class osg::Vec3d const &, double const &, bool);

    // RVA: 0x226 | Ordinal: 551
        void getCameraViewPoint(bool);

    // RVA: 0x291 | Ordinal: 658
        void getLocalPoint(double) const;

    // RVA: 0x29C | Ordinal: 669
        void getMovingObject(void);

    // RVA: 0x2A4 | Ordinal: 677
        void getNearFreeWeapons(void) const;

    // RVA: 0x2BF | Ordinal: 704
        void getPositionInParentSpace(double);

    // RVA: 0x2C1 | Ordinal: 706
        void getPositionUsingMode(void) const;

    // RVA: 0x2C3 | Ordinal: 708
        void getRCS(float, class osg::Vec3f const &) const;

    // RVA: 0x2D2 | Ordinal: 723
        void getRelativeLife(void) const;

    // RVA: 0x2E3 | Ordinal: 740
        void getSkill(void) const;

    // RVA: 0x2E8 | Ordinal: 745
        void getStatus(void) const;

    // RVA: 0x307 | Ordinal: 776
        void getWeaponInfo(void) const;

    // RVA: 0x308 | Ordinal: 777
        void getWeaponSightName(void) const;

    // RVA: 0x32E | Ordinal: 815
        void initActivity(bool, bool);

    // RVA: 0x32F | Ordinal: 816
        void initAirDrop(class wPosition3<float> &, class osg::Vec3f &);

    // RVA: 0x332 | Ordinal: 819
        void initBlocks(bool, bool);

    // RVA: 0x333 | Ordinal: 820
        void initLivery(struct InitCharacter const *);

    // RVA: 0x335 | Ordinal: 822
        void initObject(int);

    // RVA: 0x338 | Ordinal: 825
        void initPosition(class wPosition3<float> const &, class osg::Vec3f const &, bool, class MovingObject *, class ed::basic_string<char> const &, bool, bool);

    // RVA: 0x339 | Ordinal: 826
        void initPosition(float, float, float, float, float, bool, class MovingObject *, class ed::basic_string<char> const &, bool, bool);

    // RVA: 0x352 | Ordinal: 851
        void isHumanControlled(void) const;

    // RVA: 0x354 | Ordinal: 853
        void isManualOff(void) const;

    // RVA: 0x355 | Ordinal: 854
        void isManualOn(void) const;

    // RVA: 0x35B | Ordinal: 860
        void isPlayerCanDrive(void) const;

    // RVA: 0x391 | Ordinal: 914
        void manualCameraMode(void);

    // RVA: 0x392 | Ordinal: 915
        void manualControlInit(void);

    // RVA: 0x393 | Ordinal: 916
        void manualControlRelease(bool);

    // RVA: 0x394 | Ordinal: 917
        void manualCrouch(void);

    // RVA: 0x395 | Ordinal: 918
        void manualJump(void);

    // RVA: 0x396 | Ordinal: 919
        void manualMove(void);

    // RVA: 0x397 | Ordinal: 920
        void manualMoveForward(float);

    // RVA: 0x398 | Ordinal: 921
        void manualMoveRight(float);

    // RVA: 0x399 | Ordinal: 922
        void manualRun(bool);

    // RVA: 0x39A | Ordinal: 923
        void manualSetFire(bool);

    // RVA: 0x39B | Ordinal: 924
        void manualSightMode(bool);

    // RVA: 0x39C | Ordinal: 925
        void manualStop(void);

    // RVA: 0x39D | Ordinal: 926
        void manualViewHorizontal(float);

    // RVA: 0x39E | Ordinal: 927
        void manualViewVertical(float);

    // RVA: 0x3B5 | Ordinal: 950
        void netCreate(struct NetInitCharacter const &, class Mail::Reader);

    // RVA: 0x3BA | Ordinal: 955
        void netDestroy(void);

    // RVA: 0x3BF | Ordinal: 960
        void netDiscard(void);

    // RVA: 0x3C4 | Ordinal: 965
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x3C9 | Ordinal: 970
        void netGetHost(void) const;

    // RVA: 0x3CC | Ordinal: 973
        void netInputActivate(int);

    // RVA: 0x3CD | Ordinal: 974
        void netInputActivateAI(int);

    // RVA: 0x3CE | Ordinal: 975
        void netInputChangePosition(class osg::Vec3f const &, float, unsigned int, class ed::basic_string<char> const &, bool);

    // RVA: 0x3CF | Ordinal: 976
        void netInputFreeNearWeapon(unsigned int);

    // RVA: 0x3D0 | Ordinal: 977
        void netInputHumanTakeControl(bool, int);

    // RVA: 0x3D1 | Ordinal: 978
        void netInputSetParachute(unsigned int);

    // RVA: 0x3D3 | Ordinal: 980
        void netInputStatus(struct CharacterStatus const &);

    // RVA: 0x3D4 | Ordinal: 981
        void netInputTakeWeapon(unsigned int);

    // RVA: 0x3D6 | Ordinal: 983
        void netInputUseWeapon(unsigned int, unsigned char);

    // RVA: 0x3DA | Ordinal: 987
        void netNextTime(double &);

    // RVA: 0x3E1 | Ordinal: 994
        void netSendUpdate(int, int, int &);

    // RVA: 0x3F1 | Ordinal: 1010
        void nextTime(double &);

    // RVA: 0x43D | Ordinal: 1086
        void releaseActivity(void);

    // RVA: 0x43E | Ordinal: 1087
        void releaseBlocks(bool);

    // RVA: 0x43F | Ordinal: 1088
        void releaseObject(void);

    // RVA: 0x47C | Ordinal: 1149
        void setAI_OFF(void);

    // RVA: 0x47F | Ordinal: 1152
        void setAI_ON(void);

    // RVA: 0x494 | Ordinal: 1173
        void setColumn(class wcColumnAnimation *);

    // RVA: 0x495 | Ordinal: 1174
        void setColumn(struct InitCharacter const *, class wcColumnAnimation *);

    // RVA: 0x513 | Ordinal: 1300
        void startAgony(class osg::Vec3f const &);

    // RVA: 0x534 | Ordinal: 1333
        void takeDamage(float, unsigned int, unsigned int, float);

    // RVA: 0x25 | Ordinal: 38
        void woCharacterHuman(void);

    // RVA: 0x3A | Ordinal: 59
        void _woCharacterHuman(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_WOCHARACTERHUMAN_HPP
