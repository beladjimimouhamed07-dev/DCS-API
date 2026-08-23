#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: vi_helper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class vi_helper
{
public:

    // RVA: 0x14D | Ordinal: 334
        void attach_obj(class eddd::DbgObjWrapper<class eddd::IDbgObj>, class wPosition3<float> const &);

    // RVA: 0x14E | Ordinal: 335
        void attach_obj_at_index(unsigned int, class eddd::DbgObjWrapper<class eddd::IDbgObj>, class wPosition3<float> const *);

    // RVA: 0x161 | Ordinal: 354
        void create(class eddd::DbgObjWrapper<class eddd::IDbgObj>);

    // RVA: 0x164 | Ordinal: 357
        void detach_all(void);

    // RVA: 0x18F | Ordinal: 400
        void get_attached_object(unsigned int);

    // RVA: 0x190 | Ordinal: 401
        void get_attached_object_position(unsigned int) const;

    // RVA: 0x191 | Ordinal: 402
        void hide(void);

    // RVA: 0x1B6 | Ordinal: 439
        void set_attached_object_position(unsigned int, class wPosition3<float> const &);

    // RVA: 0x1B7 | Ordinal: 440
        void set_lifetime(float);

    // RVA: 0x1B8 | Ordinal: 441
        void set_obj(class eddd::DbgObjWrapper<class eddd::IDbgObj>);

    // RVA: 0x1B9 | Ordinal: 442
        void set_point(class osg::Vec3d const &);

    // RVA: 0x1BA | Ordinal: 443
        void set_velocity(class osg::Vec3f const &);

    // RVA: 0x1BC | Ordinal: 445
        void unhide(void);

    // RVA: 0x37 | Ordinal: 56
        void vi_helper(void);

    // RVA: 0x1C8 | Ordinal: 457
        void visible(void);

    // RVA: 0x53 | Ordinal: 84
        void _vi_helper(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_VI_HELPER_HPP
