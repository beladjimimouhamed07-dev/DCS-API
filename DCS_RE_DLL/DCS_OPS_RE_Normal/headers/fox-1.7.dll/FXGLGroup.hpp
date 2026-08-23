#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLGroup
{
public:

    // RVA: 0x147 | Ordinal: 328
        void FXGLGroup(class FX::FXGLGroup const &);

    // RVA: 0x148 | Ordinal: 329
        void FXGLGroup(void);

    // RVA: 0x9C0 | Ordinal: 2497
        void append(class FX::FXObjectListOf<class FX::FXGLObject> const &);

    // RVA: 0x9C1 | Ordinal: 2498
        void append(class FX::FXGLObject *);

    // RVA: 0xA6B | Ordinal: 2668
        void bounds(class FX::FXRangef &);

    // RVA: 0xA7A | Ordinal: 2683
        void canDrag(void) const;

    // RVA: 0xAC4 | Ordinal: 2757
        void child(int) const;

    // RVA: 0xAD0 | Ordinal: 2769
        void clear(void);

    // RVA: 0xB87 | Ordinal: 2952
        void copy(void);

    // RVA: 0xD0C | Ordinal: 3341
        void drag(class FX::FXGLViewer *, int, int, int, int);

    // RVA: 0xD14 | Ordinal: 3349
        void draw(class FX::FXGLViewer *);

    // RVA: 0xE33 | Ordinal: 3636
        void erase(int);

    // RVA: 0x1342 | Ordinal: 4931
        void getList(void);

    // RVA: 0x13E4 | Ordinal: 5093
        void getMetaClass(void) const;

    // RVA: 0x1763 | Ordinal: 5988
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1831 | Ordinal: 6194
        void hit(class FX::FXGLViewer *);

    // RVA: 0x184C | Ordinal: 6221
        void identify(unsigned int *);

    // RVA: 0x18A2 | Ordinal: 6307
        void insert(int, class FX::FXObjectListOf<class FX::FXGLObject> const &);

    // RVA: 0x18A3 | Ordinal: 6308
        void insert(int, class FX::FXGLObject *);

    // RVA: 0x1AE4 | Ordinal: 6885
        void load(class FX::FXStream &);

    // RVA: 0x1C23 | Ordinal: 7204
        void manufacture(void);

    // RVA: 0x1F15 | Ordinal: 7958
        void no(void) const;

    // RVA: 0x26A6 | Ordinal: 9895
        void prepend(class FX::FXObjectListOf<class FX::FXGLObject> const &);

    // RVA: 0x26A7 | Ordinal: 9896
        void prepend(class FX::FXGLObject *);

    // RVA: 0x273C | Ordinal: 10045
        void remove(class FX::FXGLObject *);

    // RVA: 0x276F | Ordinal: 10096
        void replace(int, class FX::FXGLObject *);

    // RVA: 0x2815 | Ordinal: 10262
        void save(class FX::FXStream &) const;

    // RVA: 0x41D | Ordinal: 1054
        void _FXGLGroup(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLGROUP_HPP
