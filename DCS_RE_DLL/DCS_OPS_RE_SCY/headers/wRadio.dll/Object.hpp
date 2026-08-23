#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: Object
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace wMessage {

class Object
{
public:

    // RVA: 0x35 | Ordinal: 54
        void Object(class wMessage::Object &&);

    // RVA: 0x36 | Ordinal: 55
        void Object(class wMessage::Object const &);

    // RVA: 0x37 | Ordinal: 56
        void Object(int, class MovingObject *, char const *);

    // RVA: 0x38 | Ordinal: 57
        void Object(void);

    // RVA: 0x201 | Ordinal: 514
        void createLuaObject(struct lua_State *) const;

    // RVA: 0x4C5 | Ordinal: 1222
        void valid(void) const;

    // RVA: 0x98 | Ordinal: 153
        void _Object(void);
};

} // namespace wMessage

// DCS_OPS_RE_WRADIO.DLL_OBJECT_HPP
