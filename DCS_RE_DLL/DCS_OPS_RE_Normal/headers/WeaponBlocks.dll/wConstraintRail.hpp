#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6EA | Ordinal: 1771
        void detachClient(void);

    // RVA: 0x84B | Ordinal: 2124
        void getInertialAccelerations(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x928 | Ordinal: 2345
        void getLength(void);

    // RVA: 0xA67 | Ordinal: 2664
        void getType(void) const;

    // RVA: 0xB15 | Ordinal: 2838
        void notifyOwner(void);

    // RVA: 0x8E | Ordinal: 143
        void wConstraintRail(class wConstraintRail const &);

    // RVA: 0x8F | Ordinal: 144
        void wConstraintRail(class wIConstraintHost *, class wIRailOwner *, class Math::Vector<3, double> const &, class Math::Matrix<3, double> const &, double);

    // RVA: 0x215 | Ordinal: 534
        void _wConstraintRail(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCONSTRAINTRAIL_HPP
