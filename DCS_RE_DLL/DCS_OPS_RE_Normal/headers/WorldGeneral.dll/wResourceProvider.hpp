#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wResourceProvider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wResourceProvider
{
public:

    // RVA: 0x61F | Ordinal: 1568
        void after_update(void) const;

    // RVA: 0x666 | Ordinal: 1639
        void check_resource(unsigned char, unsigned int *, float *) const;

    // RVA: 0x679 | Ordinal: 1658
        void clear_cache(void) const;

    // RVA: 0x948 | Ordinal: 2377
        void get_model_names_by_resource(unsigned int) const;

    // RVA: 0x94C | Ordinal: 2381
        void get_object(void) const;

    // RVA: 0x94D | Ordinal: 2382
        void get_object_reference_points(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &) const;

    // RVA: 0x955 | Ordinal: 2390
        void get_resource(unsigned char, unsigned int *, float *) const;

    // RVA: 0xB7B | Ordinal: 2940
        void reset(void);

    // RVA: 0xBEE | Ordinal: 3055
        void set_object(class MovingObject *);

    // RVA: 0xBF5 | Ordinal: 3062
        void set_resource(unsigned char, bool, unsigned int, float) const;

    // RVA: 0xC56 | Ordinal: 3159
        void update_resources(void) const;

    // RVA: 0x202 | Ordinal: 515
        void wResourceProvider(class wResourceProvider const &);

    // RVA: 0x203 | Ordinal: 516
        void wResourceProvider(void);

    // RVA: 0x2DC | Ordinal: 733
        void _wResourceProvider(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WRESOURCEPROVIDER_HPP
