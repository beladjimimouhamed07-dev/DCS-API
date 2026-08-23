#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: woSnare
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woSnare
{
public:

    // RVA: 0x541 | Ordinal: 1346
        void Class(void) const;

    // RVA: 0x557 | Ordinal: 1368
        void CreateLight(void);

    // RVA: 0x584 | Ordinal: 1413
        void GetPoint(double);

    // RVA: 0x585 | Ordinal: 1414
        void GetPoint(void);

    // RVA: 0x599 | Ordinal: 1434
        void Hrad(void);

    // RVA: 0x5D1 | Ordinal: 1490
        void Position(double);

    // RVA: 0x5F0 | Ordinal: 1521
        void Status_Quo(double);

    // RVA: 0x827 | Ordinal: 2088
        void getDetectable(void);

    // RVA: 0x8E4 | Ordinal: 2277
        void getRCS(float, class osg::Vec3f const &) const;

    // RVA: 0x906 | Ordinal: 2311
        void getTemperature(class osg::Vec3f const &) const;

    // RVA: 0x907 | Ordinal: 2312
        void getTemperature(float) const;

    // RVA: 0x98B | Ordinal: 2444
        void initialize(void);

    // RVA: 0x9D6 | Ordinal: 2519
        void is_flare(void) const;

    // RVA: 0x9DD | Ordinal: 2526
        void is_signal_flare(void) const;

    // RVA: 0xA67 | Ordinal: 2664
        void modelTimeOfDeath(void) const;

    // RVA: 0xA7B | Ordinal: 2684
        void netGetCreate(struct woSnareInitData &) const;

    // RVA: 0xA83 | Ordinal: 2692
        void netSetSnare(struct woSnareInitData &);

    // RVA: 0xBC0 | Ordinal: 3009
        void setPool(class ed::BlockPool &);

    // RVA: 0xBCE | Ordinal: 3023
        void setSnare(class wPosition3<float> const &, class osg::Vec3f const &, class wsType const &, float);

    // RVA: 0x21A | Ordinal: 539
        void woSnare(void);

    // RVA: 0x2EB | Ordinal: 748
        void _woSnare(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WOSNARE_HPP
