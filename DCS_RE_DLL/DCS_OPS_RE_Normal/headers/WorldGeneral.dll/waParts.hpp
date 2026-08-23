#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: waParts
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class waParts
{
public:

    // RVA: 0x551 | Ordinal: 1362
        void Create(class wPosition3<double> const &, class osg::Vec3f const &, class wsType const &, float, class ed::vector<float, class ed::allocator128<float>> const *, float, unsigned int, char const *);

    // RVA: 0x559 | Ordinal: 1370
        void DestroyNetPart(void);

    // RVA: 0x569 | Ordinal: 1386
        void GetDrawArguments(void);

    // RVA: 0x57D | Ordinal: 1406
        void GetPoint(double);

    // RVA: 0x57E | Ordinal: 1407
        void GetPoint(void);

    // RVA: 0x59E | Ordinal: 1439
        void Init(char const *, class ed::vector<float, class ed::allocator128<float>> const *);

    // RVA: 0x5A0 | Ordinal: 1441
        void InitDetails(void);

    // RVA: 0x5B5 | Ordinal: 1462
        void LocalBox(double);

    // RVA: 0x5C3 | Ordinal: 1476
        void OnMissionEnd(void);

    // RVA: 0x5CC | Ordinal: 1485
        void Position(double);

    // RVA: 0x5E6 | Ordinal: 1511
        void SetNetPart(void);

    // RVA: 0x5EE | Ordinal: 1519
        void Status_Quo(double);

    // RVA: 0x5F1 | Ordinal: 1522
        void SubmitImmediateDebugGeometry(void);

    // RVA: 0x5F7 | Ordinal: 1528
        void Update(double);

    // RVA: 0x632 | Ordinal: 1587
        void baseAnimationUpdate(double);

    // RVA: 0x650 | Ordinal: 1617
        void checkLifeTime(void);

    // RVA: 0x82D | Ordinal: 2094
        void getDeviation(float, float);

    // RVA: 0x9B2 | Ordinal: 2483
        void isFonar(void) const;

    // RVA: 0x9C0 | Ordinal: 2497
        void isShell(void) const;

    // RVA: 0xA6D | Ordinal: 2670
        void netChangeStatus(struct PartsExtStatus const &);

    // RVA: 0xA70 | Ordinal: 2673
        void netCreate(struct PartsExtData const &);

    // RVA: 0xA74 | Ordinal: 2677
        void netDestroy(void);

    // RVA: 0xA79 | Ordinal: 2682
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0xA80 | Ordinal: 2689
        void netSendUpdate(int, int, int &);

    // RVA: 0xB12 | Ordinal: 2835
        void physicsUpdate(double);

    // RVA: 0xB36 | Ordinal: 2871
        void putLandingShape(class osg::Vec3d const &, class osg::Vec3f const &);

    // RVA: 0xB6D | Ordinal: 2926
        void removeVariousEffects(void);

    // RVA: 0xBBF | Ordinal: 3008
        void setPart(class wPosition3<double> const &, class osg::Vec3f const &, class wsType const &, float, class ed::vector<float, class ed::allocator128<float>> const *, float, unsigned int, char const *);

    // RVA: 0xBCC | Ordinal: 3021
        void setShape(char const *, class ed::vector<float, class ed::allocator128<float>> const *);

    // RVA: 0x210 | Ordinal: 529
        void waParts(void);

    // RVA: 0x2E2 | Ordinal: 739
        void _waParts(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WAPARTS_HPP
