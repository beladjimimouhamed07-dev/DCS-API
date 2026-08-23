#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Terrain.dll
// Class: lSiteElement
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lSiteElement
{
public:

    // RVA: 0x73 | Ordinal: 116
        void get_obj_ptr(void) const;

    // RVA: 0xB | Ordinal: 12
        void lSiteElement(class lSiteElement const &);

    // RVA: 0xC | Ordinal: 13
        void lSiteElement(class lSite *);

    // RVA: 0xD | Ordinal: 14
        void lSiteElement(void);

    // RVA: 0x78 | Ordinal: 121
        void notify_death(void);

    // RVA: 0x7C | Ordinal: 125
        void set_site(class lSite *);

    // RVA: 0x1D | Ordinal: 30
        void _lSiteElement(void);
};

// DCS_OPS_RE_TERRAIN.DLL_LSITEELEMENT_HPP
