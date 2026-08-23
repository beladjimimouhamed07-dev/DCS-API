#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: WARBuilder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class WARBuilder
{
public:

    // RVA: 0x8 | Ordinal: 9
        void WARBuilder(class WARBuilder const &);

    // RVA: 0x9 | Ordinal: 10
        void WARBuilder(void);

    // RVA: 0x126 | Ordinal: 295
        void getAirDensity(double);

    // RVA: 0x181 | Ordinal: 386
        void getHARMApexAlt(double, double, double, double);

    // RVA: 0x182 | Ordinal: 387
        void getHARMLoftPitch(double, double, double);

    // RVA: 0x183 | Ordinal: 388
        void getHARMMinPitch(double, double);

    // RVA: 0x185 | Ordinal: 390
        void getHARMTOF(double, double, double, double, double);

    // RVA: 0x186 | Ordinal: 391
        void getHARMTTR(double, double, double);

    // RVA: 0x1A9 | Ordinal: 426
        void getPitchToLAL(double, double, double, double, bool);

    // RVA: 0x1C5 | Ordinal: 454
        void getTurnToLAL(double, double);

    // RVA: 0x1CD | Ordinal: 462
        void getWARForAILoft(double, double, double, double &, double &, double &);

    // RVA: 0x1CE | Ordinal: 463
        void getWARForAILoft(double, double, double, double, double, double &, double &, double &, int &);

    // RVA: 0x1CF | Ordinal: 464
        void getWARForBallisticLoft(double, double, double, double &, double &, double &);

    // RVA: 0x1D0 | Ordinal: 465
        void getWARForBallisticLoft(double, double, double, double, double, double &, double &, double &, int &);

    // RVA: 0x1D1 | Ordinal: 466
        void getWARcover(double, double, double, double, bool, double &, double &, double &, double &, bool &);

    // RVA: 0x1D2 | Ordinal: 467
        void getWARcoverHARM16(double, double, double, double, double, bool, double &, double &, double &, double &, double &, double &, double &, double &, double &, double &, bool &);

    // RVA: 0x1D3 | Ordinal: 468
        void getWARcoverHARM18(double, double, double, double, double &, double &, double &, double &, double &, bool &, bool &);

    // RVA: 0x1D5 | Ordinal: 470
        void getWARedgeArray(double, double, bool, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> *, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> *);

    // RVA: 0x1D4 | Ordinal: 469
        void getWARedgeArray2(double, double, double, bool, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> *, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> *);

    // RVA: 0x1D6 | Ordinal: 471
        void getWARedgeArrays(double, double, double, bool, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> *, class ed::vector<class osg::Vec2d, class ed::allocator<class osg::Vec2d>> *, bool);

    // RVA: 0x1D8 | Ordinal: 473
        void getWARedgePoint(double, double, double, bool, double &, double &);

    // RVA: 0x1D7 | Ordinal: 472
        void getWARedgePoint2(double, double, double, double, bool, double &, double &);

    // RVA: 0x1D9 | Ordinal: 474
        void getWARedgePointBallistic(double, double, double, double &, double &, double &);

    // RVA: 0x1F7 | Ordinal: 504
        void initialize(class ed::vector<double, class ed::allocator<double>> *, class ed::vector<double, class ed::allocator<double>> *, class ed::vector<double, class ed::allocator<double>> *);

    // RVA: 0x1F6 | Ordinal: 503
        void initialize2(class ed::vector<double, class ed::allocator<double>> *, class ed::vector<double, class ed::allocator<double>> *, class ed::vector<double, class ed::allocator<double>> *);

    // RVA: 0x207 | Ordinal: 520
        void isInitialized(void) const;

    // RVA: 0x206 | Ordinal: 519
        void isInitialized2(void) const;

    // RVA: 0x4A | Ordinal: 75
        void _WARBuilder(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WARBUILDER_HPP
