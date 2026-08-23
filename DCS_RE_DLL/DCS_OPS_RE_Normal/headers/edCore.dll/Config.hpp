#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Config
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Lua {

class Config
{
public:

    // RVA: 0x42 | Ordinal: 67
        void Config(struct lua_State *, int);

    // RVA: 0x163 | Ordinal: 356
        void call_func(char const *, class ed::basic_string<char> *, int, int);

    // RVA: 0x164 | Ordinal: 357
        void call_log(char const *, char const *) const;

    // RVA: 0x17B | Ordinal: 380
        void create(int);

    // RVA: 0x17C | Ordinal: 381
        void create(char const *);

    // RVA: 0x194 | Ordinal: 405
        void create_raw(char const *);

    // RVA: 0x1A3 | Ordinal: 420
        void dobuffer(void const *, unsigned __int64, class ed::basic_string<char> *);

    // RVA: 0x1A4 | Ordinal: 421
        void dofile(char const *);

    // RVA: 0x1A6 | Ordinal: 423
        void dostring(char const *);

    // RVA: 0x1A5 | Ordinal: 422
        void dostring2(char const *, class ed::basic_string<char> &);

    // RVA: 0x1B1 | Ordinal: 434
        void errorFunc(struct lua_State *);

    // RVA: 0x1D9 | Ordinal: 474
        void get(int);

    // RVA: 0x1DA | Ordinal: 475
        void get(char const *);

    // RVA: 0x279 | Ordinal: 634
        void iterate_pop(unsigned char *);

    // RVA: 0x27A | Ordinal: 635
        void iterate_pop(unsigned short *);

    // RVA: 0x27B | Ordinal: 636
        void iterate_pop(int *);

    // RVA: 0x27C | Ordinal: 637
        void iterate_pop(unsigned int *);

    // RVA: 0x27D | Ordinal: 638
        void iterate_pop(unsigned long *);

    // RVA: 0x27E | Ordinal: 639
        void iterate_pop(float *);

    // RVA: 0x27F | Ordinal: 640
        void iterate_pop(double *);

    // RVA: 0x280 | Ordinal: 641
        void iterate_pop(void **);

    // RVA: 0x281 | Ordinal: 642
        void iterate_pop(class ed::basic_string<char> *);

    // RVA: 0x282 | Ordinal: 643
        void iterate_pop(bool *);

    // RVA: 0x288 | Ordinal: 649
        void load(char const *);

    // RVA: 0x287 | Ordinal: 648
        void load2(char const *, class ed::basic_string<char> &);

    // RVA: 0x28F | Ordinal: 656
        void load_buffer(char const *, unsigned __int64, char const *);

    // RVA: 0x2C6 | Ordinal: 711
        void open(int);

    // RVA: 0x2C7 | Ordinal: 712
        void open(char const *);

    // RVA: 0x2CF | Ordinal: 720
        void open_raw(char const *);

    // RVA: 0x2DA | Ordinal: 731
        void pop(unsigned char *);

    // RVA: 0x2DB | Ordinal: 732
        void pop(unsigned short *);

    // RVA: 0x2DC | Ordinal: 733
        void pop(int *);

    // RVA: 0x2DD | Ordinal: 734
        void pop(unsigned int *);

    // RVA: 0x2DE | Ordinal: 735
        void pop(unsigned long *);

    // RVA: 0x2DF | Ordinal: 736
        void pop(float *);

    // RVA: 0x2E0 | Ordinal: 737
        void pop(double *);

    // RVA: 0x2E1 | Ordinal: 738
        void pop(void **);

    // RVA: 0x2E2 | Ordinal: 739
        void pop(class ed::basic_string<char> *);

    // RVA: 0x2E3 | Ordinal: 740
        void pop(class ed::vector<float, class ed::allocator<float>> *);

    // RVA: 0x2E4 | Ordinal: 741
        void pop(class osg::Vec2d *);

    // RVA: 0x2E5 | Ordinal: 742
        void pop(class osg::Vec2f *);

    // RVA: 0x2E6 | Ordinal: 743
        void pop(class osg::Vec3d *);

    // RVA: 0x2E7 | Ordinal: 744
        void pop(class osg::Vec3f *);

    // RVA: 0x2E8 | Ordinal: 745
        void pop(class osg::Vec4d *);

    // RVA: 0x2E9 | Ordinal: 746
        void pop(class osg::Vec4f *);

    // RVA: 0x2EA | Ordinal: 747
        void pop(class osg::Vec4ub *);

    // RVA: 0x2EB | Ordinal: 748
        void pop(unsigned __int64 *);

    // RVA: 0x2EC | Ordinal: 749
        void pop(bool *);

    // RVA: 0x2F4 | Ordinal: 757
        void printTraceback(void);

    // RVA: 0x2F6 | Ordinal: 759
        void printTracebackToString(void);

    // RVA: 0x377 | Ordinal: 888
        void set(int);

    // RVA: 0x378 | Ordinal: 889
        void set(char const *);

    // RVA: 0x3C7 | Ordinal: 968
        void tmpload(char const *, bool);

    // RVA: 0x3C8 | Ordinal: 969
        void tmpload_buf(char const *, unsigned __int64, bool);

    // RVA: 0x3F1 | Ordinal: 1010
        void unset(char const *);

    // RVA: 0xB0 | Ordinal: 177
        void _Config(void);
};

} // namespace Lua

// DCS_OPS_RE_EDCORE.DLL_CONFIG_HPP
