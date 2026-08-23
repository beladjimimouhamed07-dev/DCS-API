#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wBulletWorld
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBulletWorld
{
public:

    // RVA: 0x60C | Ordinal: 1549
        void addCollisionShape(class btCollisionShape *);

    // RVA: 0x60D | Ordinal: 1550
        void addConstraint(class btTypedConstraint *, bool) const;

    // RVA: 0x614 | Ordinal: 1557
        void addRigidBody(class btRigidBody *) const;

    // RVA: 0x616 | Ordinal: 1559
        void addSoftBody(class btSoftBody *) const;

    // RVA: 0x788 | Ordinal: 1929
        void endComputeWorld(void);

    // RVA: 0x7B0 | Ordinal: 1969
        void finish(void);

    // RVA: 0xB61 | Ordinal: 2914
        void removeConstraint(class btTypedConstraint *) const;

    // RVA: 0xB68 | Ordinal: 2921
        void removeRigidBody(class btRigidBody *) const;

    // RVA: 0xB6A | Ordinal: 2923
        void removeSoftBody(class btSoftBody *) const;

    // RVA: 0xBAE | Ordinal: 2991
        void setInternalTickCallback(void (__cdecl *)(class btDynamicsWorld *, double), void *, bool) const;

    // RVA: 0xC12 | Ordinal: 3091
        void start(void);

    // RVA: 0xC15 | Ordinal: 3094
        void startComputeWorld(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WBULLETWORLD_HPP
