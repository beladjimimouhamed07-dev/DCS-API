#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wNetObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wNetObject
{
public:

    // RVA: 0x8CC | Ordinal: 2253
        void getNextTime(void) const;

    // RVA: 0x8D9 | Ordinal: 2266
        void getPos(double);

    // RVA: 0x8DA | Ordinal: 2267
        void getPos(double, class wPosition3<double> &, class osg::Vec3f *, class osg::Vec3f *);

    // RVA: 0x97E | Ordinal: 2431
        void init(double, class wPosition3<double> const &);

    // RVA: 0xBC1 | Ordinal: 3010
        void setPos(double, class wPosition3<double> const &);

    // RVA: 0x1FC | Ordinal: 509
        void wNetObject(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WNETOBJECT_HPP
