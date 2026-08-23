#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: AircraftSounder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class AircraftSounder
{
public:

    // RVA: 0x0 | Ordinal: 1
        void AircraftSounder(void);

    // RVA: 0x212 | Ordinal: 531
        void Empty(void);

    // RVA: 0x213 | Ordinal: 532
        void New(struct Aircraft_Descriptor const *);

    // RVA: 0x214 | Ordinal: 533
        void clearCockpit(void);

    // RVA: 0x21C | Ordinal: 541
        void createControlsThuds(void);

    // RVA: 0x223 | Ordinal: 548
        void createHelmAirRush(void);

    // RVA: 0x224 | Ordinal: 549
        void createPneumoWheelBrakes(void);

    // RVA: 0x225 | Ordinal: 550
        void createSource(class Sound::LoopingSource &, class Sound::Host *, char const *, char const *, char const *);

    // RVA: 0x226 | Ordinal: 551
        void createSource(class Sound::LoopingSource &, char const *, char const *, char const *);

    // RVA: 0x227 | Ordinal: 552
        void createSource(class Sound::Source &, class Sound::Host *, char const *, bool, struct SND_SourceParams *);

    // RVA: 0x228 | Ordinal: 553
        void createSource(class Sound::Source &, char const *, bool, struct SND_SourceParams *);

    // RVA: 0x25A | Ordinal: 603
        void doClearCockpit(void);

    // RVA: 0x288 | Ordinal: 649
        void doInit(class Sound::Host *);

    // RVA: 0x2CC | Ordinal: 717
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x300 | Ordinal: 769
        void doUpdate(double);

    // RVA: 0x33B | Ordinal: 828
        void getExteriorSoundHosts(void) const;

    // RVA: 0x33D | Ordinal: 830
        void getOverridenCategories(void);

    // RVA: 0x345 | Ordinal: 838
        void getSoundHost(char const *, float, float, float);

    // RVA: 0x34E | Ordinal: 847
        void init(class IwoLA *, struct Aircraft_Descriptor const *, class Sound::Host *, enum Sound::Sounder::SoundLOD);

    // RVA: 0x366 | Ordinal: 871
        void initCockpit(class Sound::Host *);

    // RVA: 0x367 | Ordinal: 872
        void initCockpit(void);

    // RVA: 0x374 | Ordinal: 885
        void onAirbrakeExtension(bool);

    // RVA: 0x376 | Ordinal: 887
        void onCanopyJettison(int);

    // RVA: 0x377 | Ordinal: 888
        void onCanopyTearOff(int);

    // RVA: 0x37A | Ordinal: 891
        void onChaff(void);

    // RVA: 0x37B | Ordinal: 892
        void onCustomSound(double const *);

    // RVA: 0x37C | Ordinal: 893
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x39D | Ordinal: 926
        void onDamage(double, bool, bool);

    // RVA: 0x39E | Ordinal: 927
        void onFlapsMovement(double, double, int);

    // RVA: 0x3A2 | Ordinal: 931
        void onFlare(void);

    // RVA: 0x3A3 | Ordinal: 932
        void onFuelPump(bool, bool, bool);

    // RVA: 0x3A6 | Ordinal: 935
        void onGunFire(bool, int, bool);

    // RVA: 0x3B8 | Ordinal: 953
        void onGunpodFire(bool, int, int, int);

    // RVA: 0x3BE | Ordinal: 959
        void onHit(bool);

    // RVA: 0x3BF | Ordinal: 960
        void onMissileLaunch(int, float, float, float);

    // RVA: 0x3C0 | Ordinal: 961
        void onMissileLaunch(void);

    // RVA: 0x3C1 | Ordinal: 962
        void onOrdnanceDrop(void);

    // RVA: 0x3C2 | Ordinal: 963
        void onOrdnanceJettison(void);

    // RVA: 0x3C3 | Ordinal: 964
        void onParachute(bool, struct SND_SourceParams const *);

    // RVA: 0x3C4 | Ordinal: 965
        void onRefuelingFlow(bool);

    // RVA: 0x3C5 | Ordinal: 966
        void onRefuelingProbeMovement(bool);

    // RVA: 0x3C6 | Ordinal: 967
        void onRocketFire(void);

    // RVA: 0x3C7 | Ordinal: 968
        void onUndercarriageBreakage(void);

    // RVA: 0x3C8 | Ordinal: 969
        void onUndercarriageDoorSlam(int, double);

    // RVA: 0x3D1 | Ordinal: 978
        void onUndercarriageLock(int, double);

    // RVA: 0x3DC | Ordinal: 989
        void onUndercarriageStrutMove(bool, struct ed::array<char, 3> const *, double, bool);

    // RVA: 0x3E5 | Ordinal: 998
        void onWingFoldMovement(bool);

    // RVA: 0x3EB | Ordinal: 1004
        void postInit(void);

    // RVA: 0x3FA | Ordinal: 1019
        void update(double);

    // RVA: 0x82 | Ordinal: 131
        void _AircraftSounder(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_AIRCRAFTSOUNDER_HPP
