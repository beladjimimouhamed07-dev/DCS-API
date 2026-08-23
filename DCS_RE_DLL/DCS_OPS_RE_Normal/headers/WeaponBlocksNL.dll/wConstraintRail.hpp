#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wConstraintRail
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wConstraintRail
{
public:

    // RVA: 0x59B | Ordinal: 1436
        void acceptImpulse(double);

    // RVA: 0x6E6 | Ordinal: 1767
        void detachClient(void);

    // RVA: 0x842 | Ordinal: 2115
        void getInertialAccelerations(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x91F | Ordinal: 2336
        void getLength(void);

    // RVA: 0xA58 | Ordinal: 2649
        void getType(void) const;

    // RVA: 0xAED | Ordinal: 2798
        void notifyOwner(void);

    // RVA: 0x8E | Ordinal: 143
        void wConstraintRail(class wConstraintRail const &);

    // RVA: 0x8F | Ordinal: 144
        void wConstraintRail(class wIConstraintHost *, class wIRailOwner *, class Math::Vector<3, double> const &, class Math::Matrix<3, double> const &, double);

    // RVA: 0x215 | Ordinal: 534
        void _wConstraintRail(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCONSTRAINTRAIL_HPP
