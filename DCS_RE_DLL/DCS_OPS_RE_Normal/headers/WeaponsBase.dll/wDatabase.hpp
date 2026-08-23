#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wDatabase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDatabase
{
public:

    // RVA: 0xCB | Ordinal: 204
        void addDescriptor(class wDescriptorBase *);

    // RVA: 0x119 | Ordinal: 282
        void findDescriptorByName_(class ed::basic_string<char> const &);

    // RVA: 0x11D | Ordinal: 286
        void freeTable_(void);

    // RVA: 0x1F3 | Ordinal: 500
        void initTable_(struct lua_State *);

    // RVA: 0x1FB | Ordinal: 508
        void instance(void);

    // RVA: 0x238 | Ordinal: 569
        void reload(void);

    // RVA: 0x20 | Ordinal: 33
        void wDatabase(void);

    // RVA: 0x57 | Ordinal: 88
        void _wDatabase(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WDATABASE_HPP
