#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wAttributeOwner
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAttributeOwner
{
public:

    // RVA: 0x619 | Ordinal: 1562
        void add_attribute(class ed::basic_string<char> const &);

    // RVA: 0x799 | Ordinal: 1946
        void explicit_attributes_no_read(class ed::basic_string<char> const &, class std::initializer_list<char const *>);

    // RVA: 0x975 | Ordinal: 2422
        void has_attribute(class ed::basic_string<char> const &) const;

    // RVA: 0x976 | Ordinal: 2423
        void has_attribute(int) const;

    // RVA: 0x977 | Ordinal: 2424
        void has_attribute(char const *) const;

    // RVA: 0xA8E | Ordinal: 2703
        void obtain_set(void) const;

    // RVA: 0x1E1 | Ordinal: 482
        void wAttributeOwner(class wAttributeOwner &&);

    // RVA: 0x1E2 | Ordinal: 483
        void wAttributeOwner(class wAttributeOwner const &);

    // RVA: 0x1E3 | Ordinal: 484
        void wAttributeOwner(void);

    // RVA: 0x2CF | Ordinal: 720
        void _wAttributeOwner(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WATTRIBUTEOWNER_HPP
