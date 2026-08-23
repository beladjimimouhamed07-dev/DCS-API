#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: mov_ptr_mark
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class mov_ptr_mark
{
public:

    // RVA: 0xEF1 | Ordinal: 3826
        void get_course(void) const;

    // RVA: 0x1011 | Ordinal: 4114
        void get_point(void) const;

    // RVA: 0x101E | Ordinal: 4127
        void get_position(void) const;

    // RVA: 0x285 | Ordinal: 646
        void mov_ptr_mark(class cockpit::mov_ptr_mark const &);

    // RVA: 0x286 | Ordinal: 647
        void mov_ptr_mark(class MovingObject *);

    // RVA: 0x287 | Ordinal: 648
        void mov_ptr_mark(void);

    // RVA: 0x18C9 | Ordinal: 6346
        void set_local_point(class osg::Vec3d const &);

    // RVA: 0x3BB | Ordinal: 956
        void _mov_ptr_mark(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_MOV_PTR_MARK_HPP
