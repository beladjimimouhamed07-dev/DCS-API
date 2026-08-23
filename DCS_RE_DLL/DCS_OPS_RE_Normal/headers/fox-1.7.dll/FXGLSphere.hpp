#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGLSphere
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGLSphere
{
public:

    // RVA: 0x155 | Ordinal: 342
        void FXGLSphere(void);

    // RVA: 0x156 | Ordinal: 343
        void FXGLSphere(class FX::FXGLSphere const &);

    // RVA: 0x157 | Ordinal: 344
        void FXGLSphere(float, float, float, float);

    // RVA: 0x158 | Ordinal: 345
        void FXGLSphere(float, float, float, float, struct FX::FXMaterial const &);

    // RVA: 0xB8C | Ordinal: 2957
        void copy(void);

    // RVA: 0xDE0 | Ordinal: 3553
        void drawshape(class FX::FXGLViewer *);

    // RVA: 0x13E9 | Ordinal: 5098
        void getMetaClass(void) const;

    // RVA: 0x1520 | Ordinal: 5409
        void getRadius(void) const;

    // RVA: 0x15BA | Ordinal: 5563
        void getSlices(void) const;

    // RVA: 0x15D3 | Ordinal: 5588
        void getStacks(void) const;

    // RVA: 0x1768 | Ordinal: 5993
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AE8 | Ordinal: 6889
        void load(class FX::FXStream &);

    // RVA: 0x1C27 | Ordinal: 7208
        void manufacture(void);

    // RVA: 0x2819 | Ordinal: 10266
        void save(class FX::FXStream &) const;

    // RVA: 0x2C7D | Ordinal: 11390
        void setRadius(float);

    // RVA: 0x2CFD | Ordinal: 11518
        void setSlices(int);

    // RVA: 0x2D18 | Ordinal: 11545
        void setStacks(int);

    // RVA: 0x422 | Ordinal: 1059
        void _FXGLSphere(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGLSPHERE_HPP
