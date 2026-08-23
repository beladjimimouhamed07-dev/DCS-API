#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wDatabaseLoader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDatabaseLoader
{
public:

    // RVA: 0x1BD | Ordinal: 446
        void getSource(void) const;

    // RVA: 0x217 | Ordinal: 536
        void loadDescriptor_(class ed::basic_string<char> const &, bool);

    // RVA: 0x218 | Ordinal: 537
        void loadDescriptor_(bool);

    // RVA: 0x219 | Ordinal: 538
        void loadNamespace_(void);

    // RVA: 0x21 | Ordinal: 34
        void wDatabaseLoader(class wDatabase *, struct lua_State *);

    // RVA: 0x58 | Ordinal: 89
        void _wDatabaseLoader(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WDATABASELOADER_HPP
