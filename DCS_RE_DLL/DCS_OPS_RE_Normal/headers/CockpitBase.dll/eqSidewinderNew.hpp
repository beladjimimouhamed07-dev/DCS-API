#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: eqSidewinderNew
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class eqSidewinderNew
{
public:

    // RVA: 0x9B0 | Ordinal: 2481
        void cage(void);

    // RVA: 0x25D | Ordinal: 606
        void eqSidewinderNew(class cockpit::eqSidewinderNew &&);

    // RVA: 0x25E | Ordinal: 607
        void eqSidewinderNew(class cockpit::eqSidewinderNew const &);

    // RVA: 0x25F | Ordinal: 608
        void eqSidewinderNew(class wsType const &);

    // RVA: 0x260 | Ordinal: 609
        void eqSidewinderNew(void);

    // RVA: 0xD3D | Ordinal: 3390
        void getLockStrength(void);

    // RVA: 0x1222 | Ordinal: 4643
        void initialize(void);

    // RVA: 0x1250 | Ordinal: 4689
        void isCaged(void);

    // RVA: 0x1262 | Ordinal: 4707
        void isInTrack(void);

    // RVA: 0x1649 | Ordinal: 5706
        void saveBoresight(void);

    // RVA: 0x16A6 | Ordinal: 5799
        void setBoresight(class wPosition3<double>);

    // RVA: 0x16BD | Ordinal: 5822
        void setCommand(unsigned int, double);

    // RVA: 0x16C4 | Ordinal: 5829
        void setConsentToTrack(bool);

    // RVA: 0x17A2 | Ordinal: 6051
        void setSEAM(class wPosition3<double>);

    // RVA: 0x19A3 | Ordinal: 6564
        void slaveToDirection(class osg::Vec3d const &);

    // RVA: 0x1A3C | Ordinal: 6717
        void toBoresight(void);

    // RVA: 0x1A77 | Ordinal: 6776
        void uncage(void);

    // RVA: 0x1AFF | Ordinal: 6912
        void update(double);

    // RVA: 0x3AD | Ordinal: 942
        void _eqSidewinderNew(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_EQSIDEWINDERNEW_HPP
