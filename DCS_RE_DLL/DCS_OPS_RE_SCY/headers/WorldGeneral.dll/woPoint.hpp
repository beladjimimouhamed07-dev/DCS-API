#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: woPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woPoint
{
public:

    // RVA: 0x540 | Ordinal: 1345
        void Class(void) const;

    // RVA: 0x555 | Ordinal: 1366
        void Create(class osg::Vec3f const &, unsigned int);

    // RVA: 0x573 | Ordinal: 1396
        void GetModel(void);

    // RVA: 0x598 | Ordinal: 1433
        void Hrad(void);

    // RVA: 0x5A4 | Ordinal: 1445
        void IsDead(void) const;

    // RVA: 0x5D4 | Ordinal: 1493
        void PostCollisionProcessing(struct wsCollisionData *);

    // RVA: 0x5E7 | Ordinal: 1512
        void SetPoint(class osg::Vec3d const &);

    // RVA: 0x76E | Ordinal: 1903
        void destroy_(void);

    // RVA: 0x7A2 | Ordinal: 1955
        void fillInitData(struct InitNetPoint &) const;

    // RVA: 0x8D3 | Ordinal: 2260
        void getObjectType(void) const;

    // RVA: 0x98A | Ordinal: 2443
        void initialize(void);

    // RVA: 0x9DF | Ordinal: 2528
        void kill(void);

    // RVA: 0xA6E | Ordinal: 2671
        void netChangeStatus(struct StatusNetPoint const &);

    // RVA: 0xA75 | Ordinal: 2678
        void netDestroy(void);

    // RVA: 0xA78 | Ordinal: 2681
        void netDiscard(void);

    // RVA: 0xA7A | Ordinal: 2683
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0xBC2 | Ordinal: 3011
        void setPosition(class osg::Vec3f const &);

    // RVA: 0xC32 | Ordinal: 3123
        void type(void) const;

    // RVA: 0x219 | Ordinal: 538
        void woPoint(void);

    // RVA: 0x2E9 | Ordinal: 746
        void _woPoint(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WOPOINT_HPP
