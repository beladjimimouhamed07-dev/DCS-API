#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QColorSpace
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QColorSpace
{
public:

    // RVA: 0xB3 | Ordinal: 180
        void QColorSpace(class QColorSpace &&);

    // RVA: 0xB4 | Ordinal: 181
        void QColorSpace(class QColorSpace const &);

    // RVA: 0xB5 | Ordinal: 182
        void QColorSpace(class QPointF const &, class QPointF const &, class QPointF const &, class QPointF const &, enum QColorSpace::TransferFunction, float);

    // RVA: 0xB6 | Ordinal: 183
        void QColorSpace(enum QColorSpace::NamedColorSpace);

    // RVA: 0xB7 | Ordinal: 184
        void QColorSpace(enum QColorSpace::Primaries, float);

    // RVA: 0xB8 | Ordinal: 185
        void QColorSpace(enum QColorSpace::Primaries, enum QColorSpace::TransferFunction, float);

    // RVA: 0xB9 | Ordinal: 186
        void QColorSpace(void);

    // RVA: 0xD19 | Ordinal: 3354
        void d_func(void);

    // RVA: 0xD1A | Ordinal: 3355
        void d_func(void) const;

    // RVA: 0x1144 | Ordinal: 4421
        void fromIccProfile(class QByteArray const &);

    // RVA: 0x1175 | Ordinal: 4470
        void gamma(void) const;

    // RVA: 0x4EC8 | Ordinal: 20169
        void iccProfile(void) const;

    // RVA: 0x5093 | Ordinal: 20628
        void isValid(void) const;

    // RVA: 0x54C0 | Ordinal: 21697
        void primaries(void) const;

    // RVA: 0x5B15 | Ordinal: 23318
        void setPrimaries(class QPointF const &, class QPointF const &, class QPointF const &, class QPointF const &);

    // RVA: 0x5B16 | Ordinal: 23319
        void setPrimaries(enum QColorSpace::Primaries);

    // RVA: 0x5C1A | Ordinal: 23579
        void setTransferFunction(enum QColorSpace::TransferFunction, float);

    // RVA: 0x5E7B | Ordinal: 24188
        void swap(class QColorSpace &);

    // RVA: 0x6026 | Ordinal: 24615
        void transferFunction(void) const;

    // RVA: 0x6032 | Ordinal: 24627
        void transformationToColorSpace(class QColorSpace const &) const;

    // RVA: 0x618E | Ordinal: 24975
        void withTransferFunction(enum QColorSpace::TransferFunction, float) const;

    // RVA: 0x41E | Ordinal: 1055
        void _QColorSpace(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QCOLORSPACE_HPP
