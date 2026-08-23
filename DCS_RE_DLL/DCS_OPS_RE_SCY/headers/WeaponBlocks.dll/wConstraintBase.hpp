#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wConstraintBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wConstraintBase
{
public:

    // RVA: 0x83D | Ordinal: 2110
        void getGlobalAngularVelocity(void);

    // RVA: 0x83E | Ordinal: 2111
        void getGlobalOrientation(void);

    // RVA: 0x83F | Ordinal: 2112
        void getGlobalPosition(void);

    // RVA: 0x840 | Ordinal: 2113
        void getGlobalVelocity(void);

    // RVA: 0x844 | Ordinal: 2117
        void getHost(void);

    // RVA: 0x845 | Ordinal: 2118
        void getHostLocalOrientation(void);

    // RVA: 0x846 | Ordinal: 2119
        void getHostLocalPosition(void);

    // RVA: 0x92E | Ordinal: 2351
        void getLocalAcceleration(void);

    // RVA: 0x92F | Ordinal: 2352
        void getLocalAngularVelocity(void);

    // RVA: 0x8B | Ordinal: 140
        void wConstraintBase(class wConstraintBase const &);

    // RVA: 0x8C | Ordinal: 141
        void wConstraintBase(class wIConstraintHost *, class Math::Vector<3, double> const &, class Math::Matrix<3, double> const &);

    // RVA: 0x8D | Ordinal: 142
        void wConstraintBase(void);

    // RVA: 0x214 | Ordinal: 533
        void _wConstraintBase(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WCONSTRAINTBASE_HPP
