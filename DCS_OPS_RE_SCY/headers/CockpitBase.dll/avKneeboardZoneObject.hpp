#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avKneeboardZoneObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avKneeboardZoneObject
{
public:

    // RVA: 0x145 | Ordinal: 326
        void avKneeboardZoneObject(class Lua::Config &);

    // RVA: 0x146 | Ordinal: 327
        void avKneeboardZoneObject(class cockpit::avKneeboardZoneObject const &);

    // RVA: 0x1014 | Ordinal: 4117
        void get_points(void) const;

    // RVA: 0x1905 | Ordinal: 6406
        void set_points(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &);

    // RVA: 0x31D | Ordinal: 798
        void _avKneeboardZoneObject(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVKNEEBOARDZONEOBJECT_HPP
