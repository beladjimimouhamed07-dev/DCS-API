#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: dbg_draw_structure
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class dbg_draw_structure
{
public:

    // RVA: 0x5C7 | Ordinal: 1480
        void Parse(class wPosition3<double> const &);

    // RVA: 0x61A | Ordinal: 1563
        void add_dbg_obj(class ed::basic_string<char> const &, class eddd::DbgObjWrapper<class eddd::IDbgObj>);

    // RVA: 0x670 | Ordinal: 1649
        void clear(void);

    // RVA: 0x1DD | Ordinal: 478
        void dbg_draw_structure(class dbg_draw_structure const &);

    // RVA: 0x1DE | Ordinal: 479
        void dbg_draw_structure(void);

    // RVA: 0x785 | Ordinal: 1926
        void empty(void) const;

    // RVA: 0x7B9 | Ordinal: 1978
        void force_color(class osg::Vec3f const &);

    // RVA: 0x933 | Ordinal: 2356
        void get_eddbg_obj(class ed::basic_string<char> const &) const;

    // RVA: 0x94B | Ordinal: 2380
        void get_obj_position(void) const;

    // RVA: 0x9D5 | Ordinal: 2518
        void is_draw_enable(void) const;

    // RVA: 0xB6E | Ordinal: 2927
        void remove_dbg_obj(class ed::basic_string<char> const &);

    // RVA: 0xB96 | Ordinal: 2967
        void set(void);

    // RVA: 0xBE7 | Ordinal: 3048
        void set_draw_enable(bool);

    // RVA: 0xC54 | Ordinal: 3157
        void update_position(void);

    // RVA: 0x2CD | Ordinal: 718
        void _dbg_draw_structure(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_DBG_DRAW_STRUCTURE_HPP
