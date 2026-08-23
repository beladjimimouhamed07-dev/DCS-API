#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avArcadeTargetSelector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avArcadeTargetSelector
{
public:

    // RVA: 0xC6 | Ordinal: 199
        void avArcadeTargetSelector(class cockpit::avArcadeRadar *);

    // RVA: 0xAB6 | Ordinal: 2743
        void clear(void);

    // RVA: 0xB83 | Ordinal: 2948
        void down(void);

    // RVA: 0xF1B | Ordinal: 3868
        void get_direction(void);

    // RVA: 0xFAD | Ordinal: 4014
        void get_look_point(void);

    // RVA: 0xFE9 | Ordinal: 4074
        void get_orientation(void);

    // RVA: 0x103A | Ordinal: 4155
        void get_range(void);

    // RVA: 0x138E | Ordinal: 5007
        void left(void);

    // RVA: 0x1412 | Ordinal: 5139
        void move_horizontal(int);

    // RVA: 0x1415 | Ordinal: 5142
        void move_vertical(int);

    // RVA: 0x1416 | Ordinal: 5143
        void moving(void) const;

    // RVA: 0x163E | Ordinal: 5695
        void right(void);

    // RVA: 0x182D | Ordinal: 6190
        void set_base_point(class osg::Vec3d const &);

    // RVA: 0x19C5 | Ordinal: 6598
        void stabilize(void);

    // RVA: 0x19CB | Ordinal: 6604
        void stabilized(void) const;

    // RVA: 0x19F8 | Ordinal: 6649
        void stop(void);

    // RVA: 0x1A81 | Ordinal: 6786
        void unstabilize(void);

    // RVA: 0x1A82 | Ordinal: 6787
        void up(void);

    // RVA: 0x1A9D | Ordinal: 6814
        void update(double);

    // RVA: 0x2DD | Ordinal: 734
        void _avArcadeTargetSelector(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVARCADETARGETSELECTOR_HPP
