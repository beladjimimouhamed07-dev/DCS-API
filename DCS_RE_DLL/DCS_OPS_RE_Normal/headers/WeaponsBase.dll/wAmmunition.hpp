#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wAmmunition
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunition
{
public:

    // RVA: 0xBB | Ordinal: 188
        void Class(void) const;

    // RVA: 0xC0 | Ordinal: 193
        void GunId(void) const;

    // RVA: 0xC2 | Ordinal: 195
        void In_Air_(void) const;

    // RVA: 0xC8 | Ordinal: 201
        void PostCollisionProcessing(struct wsCollisionData *);

    // RVA: 0xD9 | Ordinal: 218
        void assignTargetPoint(class osg::Vec3f const &);

    // RVA: 0x10D | Ordinal: 270
        void destroy(bool);

    // RVA: 0x10E | Ordinal: 271
        void die_(bool);

    // RVA: 0x123 | Ordinal: 292
        void getAimPoint(void);

    // RVA: 0x132 | Ordinal: 307
        void getAmmunitionHotJoinData(struct AmmunitionHotJoinData &) const;

    // RVA: 0x139 | Ordinal: 314
        void getBaseAmmunitionHotJoinData(struct BaseAmmoHotJoinData &) const;

    // RVA: 0x141 | Ordinal: 322
        void getCaliber(void) const;

    // RVA: 0x159 | Ordinal: 346
        void getDescriptor(void) const;

    // RVA: 0x187 | Ordinal: 392
        void getHost(void) const;

    // RVA: 0x18C | Ordinal: 397
        void getIllumination(class osg::Vec3f const &) const;

    // RVA: 0x1A5 | Ordinal: 422
        void getNameDescriptor(void) const;

    // RVA: 0x1AA | Ordinal: 427
        void getRCS(float, class osg::Vec3f const &) const;

    // RVA: 0x1B9 | Ordinal: 442
        void getShotTime(void) const;

    // RVA: 0x1BF | Ordinal: 448
        void getSystem(void);

    // RVA: 0x1C1 | Ordinal: 450
        void getTemperature(class osg::Vec3f const &) const;

    // RVA: 0x1C2 | Ordinal: 451
        void getTemperature(float) const;

    // RVA: 0x1CA | Ordinal: 459
        void getViFlag(void);

    // RVA: 0x1CC | Ordinal: 461
        void getVolumeEffectBox(class Math::Box<2, float> *) const;

    // RVA: 0x1EB | Ordinal: 492
        void initClient(class MovingObject *, class wAmmunitionDescriptor const *, class Lua::Loader *, struct wNetCreateInfo const &, class Mail::Stream &);

    // RVA: 0x1ED | Ordinal: 494
        void initCommon_(class MovingObject *, class wAmmunitionDescriptor const *);

    // RVA: 0x1EE | Ordinal: 495
        void initDrawArgs_(class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0x1F0 | Ordinal: 497
        void initNet(class MovingObject *, class wAmmunitionDescriptor const *, class Lua::Loader *, unsigned int);

    // RVA: 0x1F1 | Ordinal: 498
        void initServer(class MovingObject *, class wAmmunitionDescriptor const *, class Lua::Loader *);

    // RVA: 0x21D | Ordinal: 542
        void netAimError(struct AmmunitionGuidedAimErrorMessage const &);

    // RVA: 0x21E | Ordinal: 543
        void netCreate(struct AmmunitionHotJoinData const &);

    // RVA: 0x21F | Ordinal: 544
        void netDataLinkState(struct AmmunitionGuidedDataLinkStateMessage const &);

    // RVA: 0x220 | Ordinal: 545
        void netDestroy(void);

    // RVA: 0x222 | Ordinal: 547
        void netExplosionSync(struct AmmunitionExplosionSyncMessage const &);

    // RVA: 0x223 | Ordinal: 548
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x224 | Ordinal: 549
        void netIlluminatorTgtID(struct AmmunitionGuidedIlluminatorTgtIDMessage const &);

    // RVA: 0x225 | Ordinal: 550
        void netLaunchMode(struct AmmunitionGuidedLaunchModeMessage const &);

    // RVA: 0x226 | Ordinal: 551
        void netSideTargetIDs(struct AmmunitionGuidedSideTargetIDsMessage const &);

    // RVA: 0x227 | Ordinal: 552
        void netWeaponNamedValue(struct wAmmunitionNamedValueMessageStruct const &);

    // RVA: 0x22A | Ordinal: 555
        void onRailSet(class Math::Vector<3, double> const &, double);

    // RVA: 0x245 | Ordinal: 582
        void setAmmunitionHotJoinData(struct AmmunitionHotJoinData const *);

    // RVA: 0x249 | Ordinal: 586
        void setBaseAmmunitionHotJoinData(struct BaseAmmoHotJoinData const *);

    // RVA: 0x24E | Ordinal: 591
        void setCoalition(enum wcCoalitionName);

    // RVA: 0x255 | Ordinal: 598
        void setDataLinkState(bool const &);

    // RVA: 0x25C | Ordinal: 605
        void setError(class Math::Vector<3, double> const &);

    // RVA: 0x25E | Ordinal: 607
        void setExplosionSync(struct AmmunitionExplosionSyncMessage);

    // RVA: 0x264 | Ordinal: 613
        void setIlluminatorTgtID(unsigned int const &);

    // RVA: 0x267 | Ordinal: 616
        void setLaunchMode(int const &);

    // RVA: 0x268 | Ordinal: 617
        void setLauncher(class MovingObject *);

    // RVA: 0x269 | Ordinal: 618
        void setLauncherId(unsigned int);

    // RVA: 0x272 | Ordinal: 627
        void setOmega(class Math::Vector<3, double> const &);

    // RVA: 0x275 | Ordinal: 630
        void setPortValue(class ed::basic_string<char> const &, int);

    // RVA: 0x276 | Ordinal: 631
        void setPortValue(class ed::basic_string<char> const &, unsigned int);

    // RVA: 0x277 | Ordinal: 632
        void setPortValue(class ed::basic_string<char> const &, double);

    // RVA: 0x278 | Ordinal: 633
        void setPortValue(class ed::basic_string<char> const &, void *);

    // RVA: 0x279 | Ordinal: 634
        void setPortValue(class ed::basic_string<char> const &, struct Math::Rotation3<double>);

    // RVA: 0x27A | Ordinal: 635
        void setPortValue(class ed::basic_string<char> const &, class Math::Vector<3, double>);

    // RVA: 0x27B | Ordinal: 636
        void setPortValue(class ed::basic_string<char> const &, bool);

    // RVA: 0x27D | Ordinal: 638
        void setPosition(class Math::Vector<3, double> const &);

    // RVA: 0x27C | Ordinal: 637
        void setPosition3d(class wPosition3<double> const &);

    // RVA: 0x27F | Ordinal: 640
        void setRailPosition(class Math::Vector<3, double> const &);

    // RVA: 0x280 | Ordinal: 641
        void setRotation(struct Math::Rotation3<double> const &);

    // RVA: 0x281 | Ordinal: 642
        void setSideTargetIDs(unsigned int *const, int const &);

    // RVA: 0x282 | Ordinal: 643
        void setState(int);

    // RVA: 0x283 | Ordinal: 644
        void setSuppressExplosion(bool const &);

    // RVA: 0x284 | Ordinal: 645
        void setTarget(unsigned int);

    // RVA: 0x287 | Ordinal: 648
        void setVelocity(class Math::Vector<3, double> const &);

    // RVA: 0x288 | Ordinal: 649
        void setWireValue(class ed::basic_string<char> const &, int);

    // RVA: 0x289 | Ordinal: 650
        void setWireValue(class ed::basic_string<char> const &, unsigned int);

    // RVA: 0x28A | Ordinal: 651
        void setWireValue(class ed::basic_string<char> const &, double);

    // RVA: 0x28B | Ordinal: 652
        void setWireValue(class ed::basic_string<char> const &, struct Math::Rotation3<double>);

    // RVA: 0x28C | Ordinal: 653
        void setWireValue(class ed::basic_string<char> const &, class Math::Vector<3, double>);

    // RVA: 0x28D | Ordinal: 654
        void setWireValue(class ed::basic_string<char> const &, bool);

    // RVA: 0x297 | Ordinal: 664
        void simulate(void);

    // RVA: 0x2A2 | Ordinal: 675
        void sound_init(class wAmmunitionDescriptor const *);

    // RVA: 0x2AB | Ordinal: 684
        void tryForceID(unsigned int);

    // RVA: 0x17 | Ordinal: 24
        void wAmmunition(void);

    // RVA: 0x51 | Ordinal: 82
        void _wAmmunition(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WAMMUNITION_HPP
