#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: dbg_box
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class dbg_box
{
public:

    // RVA: 0x1F | Ordinal: 32
        void dbg_box(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x20 | Ordinal: 33
        void dbg_box(float);

    // RVA: 0x10B | Ordinal: 268
        void initialize(void);

    // RVA: 0x132 | Ordinal: 307
        void reset_box(void);
};

// DCS_OPS_RE_GRAPHICSVISTA.DLL_DBG_BOX_HPP
