#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: PolygonDataSet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class PolygonDataSet
{
public:

    // RVA: 0x142 | Ordinal: 323
        void getData(unsigned int);

    // RVA: 0x143 | Ordinal: 324
        void getData(unsigned int) const;

    // RVA: 0x144 | Ordinal: 325
        void getData(unsigned int, double &) const;

    // RVA: 0x145 | Ordinal: 326
        void getData(unsigned int, class osg::Vec2d &) const;

    // RVA: 0x146 | Ordinal: 327
        void getDataInt(unsigned int, int &) const;

    // RVA: 0x1D1 | Ordinal: 466
        void push_back(double *);

    // RVA: 0x216 | Ordinal: 535
        void setData(unsigned int, class osg::Vec2d const &);

    // RVA: 0x217 | Ordinal: 536
        void setData(unsigned int, double);

    // RVA: 0x218 | Ordinal: 537
        void setData(unsigned int, double *);

    // RVA: 0x219 | Ordinal: 538
        void setDataInt(unsigned int, int);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_POLYGONDATASET_HPP
