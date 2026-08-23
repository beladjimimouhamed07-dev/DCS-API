#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: ValueExtractor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QCss {

class ValueExtractor
{
public:

    // RVA: 0x3E3 | Ordinal: 996
        void ValueExtractor(struct QCss::ValueExtractor &&);

    // RVA: 0x3E4 | Ordinal: 997
        void ValueExtractor(struct QCss::ValueExtractor const &);

    // RVA: 0x3E5 | Ordinal: 998
        void ValueExtractor(class QVector<struct QCss::Declaration> const &, class QPalette const &);

    // RVA: 0xAD6 | Ordinal: 2775
        void borderValue(struct QCss::Declaration const &, int *, enum QCss::BorderStyle *, class QBrush *);

    // RVA: 0x100A | Ordinal: 4107
        void extractBackground(class QBrush *, class QString *, enum QCss::Repeat *, class QFlags<enum Qt::AlignmentFlag> *, enum QCss::Origin *, enum QCss::Attachment *, enum QCss::Origin *);

    // RVA: 0x100B | Ordinal: 4108
        void extractBorder(int *, class QBrush *, enum QCss::BorderStyle *, class QSize *);

    // RVA: 0x100C | Ordinal: 4109
        void extractBox(int *, int *, int *);

    // RVA: 0x100D | Ordinal: 4110
        void extractFont(void);

    // RVA: 0x100E | Ordinal: 4111
        void extractFont(class QFont *, int *);

    // RVA: 0x100F | Ordinal: 4112
        void extractGeometry(int *, int *, int *, int *, int *, int *);

    // RVA: 0x1011 | Ordinal: 4114
        void extractIcon(class QIcon *, class QSize *);

    // RVA: 0x1012 | Ordinal: 4115
        void extractImage(class QIcon *, class QFlags<enum Qt::AlignmentFlag> *, class QSize *);

    // RVA: 0x1013 | Ordinal: 4116
        void extractOutline(int *, class QBrush *, enum QCss::BorderStyle *, class QSize *, int *);

    // RVA: 0x1014 | Ordinal: 4117
        void extractPalette(class QBrush *, class QBrush *, class QBrush *, class QBrush *);

    // RVA: 0x1015 | Ordinal: 4118
        void extractPosition(int *, int *, int *, int *, enum QCss::Origin *, class QFlags<enum Qt::AlignmentFlag> *, enum QCss::PositionMode *, class QFlags<enum Qt::AlignmentFlag> *);

    // RVA: 0x1016 | Ordinal: 4119
        void extractStyleFeatures(void);

    // RVA: 0x514E | Ordinal: 20815
        void lengthValue(struct QCss::Value const &);

    // RVA: 0x514F | Ordinal: 20816
        void lengthValue(struct QCss::Declaration const &);

    // RVA: 0x5150 | Ordinal: 20817
        void lengthValues(struct QCss::Declaration const &, int *);

    // RVA: 0x5D4C | Ordinal: 23885
        void sizeValue(struct QCss::Declaration const &);

    // RVA: 0x5D4D | Ordinal: 23886
        void sizeValues(struct QCss::Declaration const &, class QSize *);

    // RVA: 0x55E | Ordinal: 1375
        void _ValueExtractor(void);
};

} // namespace QCss

// DCS_OPS_RE_QT5GUI.DLL_VALUEEXTRACTOR_HPP
