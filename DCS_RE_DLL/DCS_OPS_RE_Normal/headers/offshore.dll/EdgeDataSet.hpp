#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: EdgeDataSet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class EdgeDataSet
{
public:

    // RVA: 0x13D | Ordinal: 318
        void getData(struct offshore::Edge32);

    // RVA: 0x13E | Ordinal: 319
        void getData(struct offshore::Edge32) const;

    // RVA: 0x13F | Ordinal: 320
        void getData(struct offshore::Edge32, double &) const;

    // RVA: 0x140 | Ordinal: 321
        void getData(struct offshore::Edge32, class osg::Vec2d &) const;

    // RVA: 0x141 | Ordinal: 322
        void getData(struct offshore::Edge32, class osg::Vec3d &) const;

    // RVA: 0x212 | Ordinal: 531
        void setData(struct offshore::Edge32, class osg::Vec2d const &);

    // RVA: 0x213 | Ordinal: 532
        void setData(struct offshore::Edge32, class osg::Vec3d const &);

    // RVA: 0x214 | Ordinal: 533
        void setData(struct offshore::Edge32, double);

    // RVA: 0x215 | Ordinal: 534
        void setData(struct offshore::Edge32, double const *);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_EDGEDATASET_HPP
