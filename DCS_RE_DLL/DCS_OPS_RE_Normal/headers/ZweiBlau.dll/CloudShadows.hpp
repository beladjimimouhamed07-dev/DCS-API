#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ZweiBlau.dll
// Class: CloudShadows
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cld {

class CloudShadows
{
public:

    // RVA: 0x0 | Ordinal: 1
        void CloudShadows(class cld::CloudShadows &&);

    // RVA: 0x1 | Ordinal: 2
        void CloudShadows(void);

    // RVA: 0x5 | Ordinal: 6
        void OnUpdate(void);

    // RVA: 0x6 | Ordinal: 7
        void collect(class osg::Vec4d *, class osg::Vec4d const &, class osg::Vec3d &, class viObject **, unsigned long);

    // RVA: 0x7 | Ordinal: 8
        void collect(class osg::Vec4d *, class viObject **, unsigned long);

    // RVA: 0x8 | Ordinal: 9
        void init(void);

    // RVA: 0x9 | Ordinal: 10
        void makeShadow(class osg::Vec3f const &);

    // RVA: 0x2 | Ordinal: 3
        void _CloudShadows(void);
};

} // namespace cld

// DCS_OPS_RE_ZWEIBLAU.DLL_CLOUDSHADOWS_HPP
