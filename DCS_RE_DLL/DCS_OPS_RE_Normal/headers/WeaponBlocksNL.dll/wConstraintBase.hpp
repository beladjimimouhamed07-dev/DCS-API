#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x835 | Ordinal: 2102
        void getGlobalAngularVelocity(void);

    // RVA: 0x836 | Ordinal: 2103
        void getGlobalOrientation(void);

    // RVA: 0x837 | Ordinal: 2104
        void getGlobalPosition(void);

    // RVA: 0x838 | Ordinal: 2105
        void getGlobalVelocity(void);

    // RVA: 0x83C | Ordinal: 2109
        void getHost(void);

    // RVA: 0x83D | Ordinal: 2110
        void getHostLocalOrientation(void);

    // RVA: 0x83E | Ordinal: 2111
        void getHostLocalPosition(void);

    // RVA: 0x925 | Ordinal: 2342
        void getLocalAcceleration(void);

    // RVA: 0x926 | Ordinal: 2343
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WCONSTRAINTBASE_HPP
