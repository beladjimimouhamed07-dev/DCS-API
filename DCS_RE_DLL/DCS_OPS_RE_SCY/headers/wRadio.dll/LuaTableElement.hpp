#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: LuaTableElement
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class LuaTableElement
{
public:

    // RVA: 0x2D | Ordinal: 46
        void LuaTableElement(class LuaTableElement const &);

    // RVA: 0x2E | Ordinal: 47
        void LuaTableElement(void);

    // RVA: 0x209 | Ordinal: 522
        void empty(void) const;

    // RVA: 0x222 | Ordinal: 547
        void fromState(struct lua_State *);

    // RVA: 0x224 | Ordinal: 549
        void fromState_(struct lua_State *, int);

    // RVA: 0x158 | Ordinal: 345
        void operator_(class LuaTableElement const &) const;

    // RVA: 0x3B9 | Ordinal: 954
        void print(void) const;

    // RVA: 0x3BA | Ordinal: 955
        void print_(int) const;

    // RVA: 0x437 | Ordinal: 1080
        void setNewType_(enum LuaTableElement::Type);

    // RVA: 0x477 | Ordinal: 1144
        void toState(struct lua_State *) const;

    // RVA: 0x94 | Ordinal: 149
        void _LuaTableElement(void);
};

// DCS_OPS_RE_WRADIO.DLL_LUATABLEELEMENT_HPP
