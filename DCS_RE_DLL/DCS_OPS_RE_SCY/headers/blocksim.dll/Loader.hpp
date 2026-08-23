#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: Loader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Lua {

class Loader
{
public:

    // RVA: 0xCC | Ordinal: 205
        void Loader(struct lua_State *);

    // RVA: 0xCD | Ordinal: 206
        void Loader(struct lua_State *, char const *);

    // RVA: 0x28A | Ordinal: 651
        void beginArray(void);

    // RVA: 0x4 | Ordinal: 5
        void beginArray_int_(int);

    // RVA: 0x28B | Ordinal: 652
        void beginMetatable(void);

    // RVA: 0x7 | Ordinal: 8
        void beginSubtable_int_(int);

    // RVA: 0x28C | Ordinal: 653
        void beginSubtables(void);

    // RVA: 0xA | Ordinal: 11
        void createSubtable_int_(int);

    // RVA: 0x2FD | Ordinal: 766
        void endMetatable(void);

    // RVA: 0x2FE | Ordinal: 767
        void endSubtable(void);

    // RVA: 0x2FF | Ordinal: 768
        void extractPath_(class ed::basic_string<char> const &);

    // RVA: 0xD | Ordinal: 14
        void formatPath__int_(int);

    // RVA: 0x10 | Ordinal: 17
        void getBoolean_int_(int);

    // RVA: 0x3D2 | Ordinal: 979
        void getCurrentPath(int) const;

    // RVA: 0x13 | Ordinal: 20
        void getDouble_int_(int);

    // RVA: 0x16 | Ordinal: 23
        void getInt_int_(int);

    // RVA: 0x465 | Ordinal: 1126
        void getLuaState(void) const;

    // RVA: 0x19 | Ordinal: 26
        void getPointer_int_(int);

    // RVA: 0x1C | Ordinal: 29
        void getQuaternion_int_(int);

    // RVA: 0x511 | Ordinal: 1298
        void getRootDir(void) const;

    // RVA: 0x1F | Ordinal: 32
        void getUINT32_int_(int);

    // RVA: 0x22 | Ordinal: 35
        void getUINT64_int_(int);

    // RVA: 0x25 | Ordinal: 38
        void hasEntry_int_(int);

    // RVA: 0x542 | Ordinal: 1347
        void newMetatable(void);

    // RVA: 0x543 | Ordinal: 1348
        void nextArray(void);

    // RVA: 0x544 | Ordinal: 1349
        void nextSubelementKey(class ed::basic_string<char> &);

    // RVA: 0x545 | Ordinal: 1350
        void nextSubtable(class ed::basic_string<char> &);

    // RVA: 0x28 | Ordinal: 41
        void setBoolean_int_(int, bool);

    // RVA: 0x2B | Ordinal: 44
        void setDouble_int_(int, double);

    // RVA: 0x2E | Ordinal: 47
        void setInt_int_(int, int);

    // RVA: 0x31 | Ordinal: 50
        void setPointer_int_(int, void *);

    // RVA: 0x34 | Ordinal: 53
        void setQuaternion_int_(int, struct Math::Rotation3<double> const &);

    // RVA: 0x37 | Ordinal: 56
        void setString_int_(int, class ed::basic_string<char> const &);

    // RVA: 0x3A | Ordinal: 59
        void setUINT32_int_(int, unsigned int);

    // RVA: 0x3D | Ordinal: 62
        void setUINT64_int_(int, unsigned __int64);

    // RVA: 0x40 | Ordinal: 65
        void setVector_int_(int, class Math::Vector<3, double> const &);

    // RVA: 0x43 | Ordinal: 68
        void tryBeginSubtable_int_(int);

    // RVA: 0x46 | Ordinal: 71
        void tryGetBoolean_int_(int, bool *);

    // RVA: 0x55 | Ordinal: 86
        void tryGetString_int_(int, class ed::basic_string<char> *);

    // RVA: 0x58 | Ordinal: 89
        void tryGetVector_int_(int, class Math::Vector<3, double> *);

    // RVA: 0x152 | Ordinal: 339
        void _Loader(void);
};

} // namespace Lua

// DCS_OPS_RE_BLOCKSIM.DLL_LOADER_HPP
