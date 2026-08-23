#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: dbg_cone_frustum
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class dbg_cone_frustum
{
public:

    // RVA: 0x22 | Ordinal: 35
        void dbg_cone_frustum(double, double, double, int);

    // RVA: 0x10D | Ordinal: 270
        void initialize(void);

    // RVA: 0x145 | Ordinal: 326
        void set_cone(double, double);

    // RVA: 0x146 | Ordinal: 327
        void set_cone_frustum(double, double, double, int);

    // RVA: 0x148 | Ordinal: 329
        void set_cylinder(double, double, int);
};

// DCS_OPS_RE_GRAPHICSVISTA.DLL_DBG_CONE_FRUSTUM_HPP
