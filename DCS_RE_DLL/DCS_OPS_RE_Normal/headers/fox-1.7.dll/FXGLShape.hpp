#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLShape
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLShape
{
public:

    // RVA: 0x151 | Ordinal: 338
        void FXGLShape(void);

    // RVA: 0x152 | Ordinal: 339
        void FXGLShape(class FX::FXGLShape const &);

    // RVA: 0x153 | Ordinal: 340
        void FXGLShape(float, float, float, unsigned int);

    // RVA: 0x154 | Ordinal: 341
        void FXGLShape(float, float, float, unsigned int, struct FX::FXMaterial const &, struct FX::FXMaterial const &);

    // RVA: 0xA6F | Ordinal: 2672
        void bounds(class FX::FXRangef &);

    // RVA: 0xA79 | Ordinal: 2682
        void canDelete(void) const;

    // RVA: 0xA7C | Ordinal: 2685
        void canDrag(void) const;

    // RVA: 0xB8B | Ordinal: 2956
        void copy(void);

    // RVA: 0xD0E | Ordinal: 3343
        void drag(class FX::FXGLViewer *, int, int, int, int);

    // RVA: 0xD18 | Ordinal: 3353
        void draw(class FX::FXGLViewer *);

    // RVA: 0xDDA | Ordinal: 3547
        void drawbox(void);

    // RVA: 0xDDB | Ordinal: 3548
        void drawhandles(void);

    // RVA: 0xDDF | Ordinal: 3552
        void drawshape(class FX::FXGLViewer *);

    // RVA: 0x135E | Ordinal: 4959
        void getMaterial(int, struct FX::FXMaterial &) const;

    // RVA: 0x13E8 | Ordinal: 5097
        void getMetaClass(void) const;

    // RVA: 0x1507 | Ordinal: 5384
        void getPosition(void) const;

    // RVA: 0x1634 | Ordinal: 5685
        void getTipText(void) const;

    // RVA: 0x1767 | Ordinal: 5992
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1835 | Ordinal: 6198
        void hit(class FX::FXGLViewer *);

    // RVA: 0x1AE7 | Ordinal: 6888
        void load(class FX::FXStream &);

    // RVA: 0x1F9B | Ordinal: 8092
        void onCmdBackMaterial(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x201D | Ordinal: 8222
        void onCmdDrawingStyle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2035 | Ordinal: 8246
        void onCmdFrontMaterial(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21FA | Ordinal: 8699
        void onCmdShadeOff(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21FB | Ordinal: 8700
        void onCmdShadeOn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21FC | Ordinal: 8701
        void onCmdShadeSmooth(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x224E | Ordinal: 8783
        void onDNDDrop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2264 | Ordinal: 8805
        void onDNDMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24CC | Ordinal: 9421
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2567 | Ordinal: 9576
        void onUpdBackMaterial(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x258A | Ordinal: 9611
        void onUpdDrawingStyle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2597 | Ordinal: 9624
        void onUpdFrontMaterial(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25ED | Ordinal: 9710
        void onUpdShadeOff(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25EE | Ordinal: 9711
        void onUpdShadeOn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25EF | Ordinal: 9712
        void onUpdShadeSmooth(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2818 | Ordinal: 10265
        void save(class FX::FXStream &) const;

    // RVA: 0x2BED | Ordinal: 11246
        void setMaterial(int, struct FX::FXMaterial const &);

    // RVA: 0x2C67 | Ordinal: 11368
        void setPosition(class FX::FXVec3f const &);

    // RVA: 0x2D79 | Ordinal: 11642
        void setTipText(class FX::FXString const &);

    // RVA: 0x421 | Ordinal: 1058
        void _FXGLShape(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLSHAPE_HPP
