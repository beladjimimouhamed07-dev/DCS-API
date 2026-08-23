#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QColorTransferFunction
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QColorTransferFunction
{
public:

    // RVA: 0xBA | Ordinal: 187
        void QColorTransferFunction(float, float, float, float, float, float, float);

    // RVA: 0xBB | Ordinal: 188
        void QColorTransferFunction(void);

    // RVA: 0xA0E | Ordinal: 2575
        void apply(float) const;

    // RVA: 0x113C | Ordinal: 4413
        void fromGamma(float);

    // RVA: 0x115A | Ordinal: 4443
        void fromProPhotoRgb(void);

    // RVA: 0x1162 | Ordinal: 4451
        void fromSRgb(void);

    // RVA: 0x4FAF | Ordinal: 20400
        void inverted(void) const;

    // RVA: 0x5029 | Ordinal: 20522
        void isGamma(void) const;

    // RVA: 0x5041 | Ordinal: 20546
        void isLinear(void) const;

    // RVA: 0x5076 | Ordinal: 20599
        void isSRgb(void) const;

    // RVA: 0x522D | Ordinal: 21038
        void matches(class QColorTransferFunction const &) const;

    // RVA: 0x53FF | Ordinal: 21504
        void paramCompare(float, float);

    // RVA: 0x60C1 | Ordinal: 24770
        void updateHints(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QCOLORTRANSFERFUNCTION_HPP
