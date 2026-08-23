#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CCore
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CCore
{
public:

    // RVA: 0x17F | Ordinal: 384
        void ApplyScale(float);

    // RVA: 0x180 | Ordinal: 385
        void AreTexCoordsFlipped(void) const;

    // RVA: 0x182 | Ordinal: 387
        void Authorize(char const *);

    // RVA: 0x28 | Ordinal: 41
        void CCore(void);

    // RVA: 0x187 | Ordinal: 392
        void ComponentName(int);

    // RVA: 0x188 | Ordinal: 393
        void CompressScalar(float);

    // RVA: 0x189 | Ordinal: 394
        void CompressVec3(unsigned char *const, class SpeedTree::Vec3 const &);

    // RVA: 0x18B | Ordinal: 396
        void ComputeLodByDistance(float) const;

    // RVA: 0x18C | Ordinal: 397
        void ComputeLodByDistanceSquared(float) const;

    // RVA: 0x18D | Ordinal: 398
        void ComputeLodSnapshot(float) const;

    // RVA: 0x18E | Ordinal: 399
        void ComputeLodTransition(float, int);

    // RVA: 0x1A2 | Ordinal: 419
        void DeleteGeometry(void);

    // RVA: 0x1B0 | Ordinal: 433
        void FileSizeInBytes(char const *);

    // RVA: 0x1B8 | Ordinal: 441
        void GetAmbientImageScalar(void) const;

    // RVA: 0x1BC | Ordinal: 445
        void GetClipSpaceDepthRange(float &, float &);

    // RVA: 0x1BD | Ordinal: 446
        void GetCollisionObjects(int &) const;

    // RVA: 0x1C2 | Ordinal: 451
        void GetError(void);

    // RVA: 0x1C3 | Ordinal: 452
        void GetExtents(void) const;

    // RVA: 0x1C4 | Ordinal: 453
        void GetFilename(void) const;

    // RVA: 0x1C8 | Ordinal: 457
        void GetGeometry(void) const;

    // RVA: 0x1CA | Ordinal: 459
        void GetHueVariationParams(void) const;

    // RVA: 0x1CD | Ordinal: 462
        void GetLodProfile(void) const;

    // RVA: 0x1CE | Ordinal: 463
        void GetLodProfileSquared(void) const;

    // RVA: 0x1D4 | Ordinal: 469
        void GetPixelPropertyDesc(enum SpeedTree::EPixelProperty);

    // RVA: 0x1D9 | Ordinal: 474
        void GetSdkResourceUsage(void);

    // RVA: 0x1DD | Ordinal: 478
        void GetUserData(void) const;

    // RVA: 0x1DE | Ordinal: 479
        void GetUserString(enum SpeedTree::CCore::EUserStringOrdinal) const;

    // RVA: 0x1E0 | Ordinal: 481
        void GetVertexPropertyDesc(struct SpeedTree::Enumeration<enum SpeedTree::EVertexPropertyUntyped, char>);

    // RVA: 0x1E1 | Ordinal: 482
        void GetWind(void);

    // RVA: 0x1E2 | Ordinal: 483
        void GetWind(void) const;

    // RVA: 0x1E3 | Ordinal: 484
        void GetWindShaderTable(void) const;

    // RVA: 0x1ED | Ordinal: 494
        void IsAuthorized(void);

    // RVA: 0x1F0 | Ordinal: 497
        void IsCompiledAsGrass(void) const;

    // RVA: 0x1F1 | Ordinal: 498
        void IsCompiledForDeferred(void) const;

    // RVA: 0x1F2 | Ordinal: 499
        void IsCompiledForDepthPrepass(void) const;

    // RVA: 0x1FA | Ordinal: 507
        void IsLoadedAsGrassModel(void) const;

    // RVA: 0x1FE | Ordinal: 511
        void IsRunTimeBigEndian(void);

    // RVA: 0x205 | Ordinal: 518
        void LoadFileIntoBuffer(char const *, unsigned __int64 &, unsigned char *);

    // RVA: 0x206 | Ordinal: 519
        void LoadTree(char const *, bool, float);

    // RVA: 0x207 | Ordinal: 520
        void LoadTree(unsigned char const *, unsigned int, bool, bool, float);

    // RVA: 0x23D | Ordinal: 574
        void ReassignPointer(unsigned char *&, unsigned char const *) const;

    // RVA: 0x23E | Ordinal: 575
        void ReassignRenderState(struct SpeedTree::SRenderState &, unsigned char const *) const;

    // RVA: 0x247 | Ordinal: 584
        void ResourceAllocated(enum SpeedTree::EGfxResourceType, class SpeedTree::CBasicFixedString<256> const &, unsigned __int64);

    // RVA: 0x248 | Ordinal: 585
        void ResourceReleased(class SpeedTree::CBasicFixedString<256> const &);

    // RVA: 0x272 | Ordinal: 627
        void SetAmbientImageScalar(float);

    // RVA: 0x274 | Ordinal: 629
        void SetClipSpaceDepthRange(float, float);

    // RVA: 0x277 | Ordinal: 632
        void SetError(char const *, ...);

    // RVA: 0x27F | Ordinal: 640
        void SetHueVariationParams(struct SpeedTree::CCore::SHueVariationParams const &);

    // RVA: 0x283 | Ordinal: 644
        void SetLodProfile(struct SpeedTree::SLodProfile const &);

    // RVA: 0x28C | Ordinal: 653
        void SetUserData(void *);

    // RVA: 0x28F | Ordinal: 656
        void ShutDown(void);

    // RVA: 0x292 | Ordinal: 659
        void SrtBuffer(void) const;

    // RVA: 0x297 | Ordinal: 664
        void TmpHeapBlockDelete(int, unsigned __int64);

    // RVA: 0x298 | Ordinal: 665
        void TmpHeapBlockDeleteAll(unsigned __int64);

    // RVA: 0x299 | Ordinal: 666
        void TmpHeapBlockFindHandle(unsigned char const *);

    // RVA: 0x29A | Ordinal: 667
        void TmpHeapBlockLock(unsigned __int64, char const *, int &);

    // RVA: 0x29B | Ordinal: 668
        void TmpHeapBlockUnlock(int);

    // RVA: 0x2A3 | Ordinal: 676
        void UncompressScalar(unsigned char);

    // RVA: 0x2A4 | Ordinal: 677
        void UncompressVec3(unsigned char const *);

    // RVA: 0x2A9 | Ordinal: 682
        void Version(bool);

    // RVA: 0x88 | Ordinal: 137
        void _CCore(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CCORE_HPP
