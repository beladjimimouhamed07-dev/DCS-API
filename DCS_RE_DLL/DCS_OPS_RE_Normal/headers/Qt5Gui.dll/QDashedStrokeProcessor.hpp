#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QDashedStrokeProcessor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDashedStrokeProcessor
{
public:

    // RVA: 0xD9 | Ordinal: 218
        void QDashedStrokeProcessor(void);

    // RVA: 0x970 | Ordinal: 2417
        void addElement(enum QPainterPath::ElementType, double, double);

    // RVA: 0xF78 | Ordinal: 3961
        void elementCount(void) const;

    // RVA: 0xF7B | Ordinal: 3964
        void elementTypes(void) const;

    // RVA: 0x547D | Ordinal: 21630
        void points(void) const;

    // RVA: 0x54C7 | Ordinal: 21704
        void process(class QVectorPath const &, class QPen const &, class QRectF const &, class QFlags<enum QPainter::RenderHint>);

    // RVA: 0x5A0B | Ordinal: 23052
        void setInvScale(double);

    // RVA: 0x427 | Ordinal: 1064
        void _QDashedStrokeProcessor(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QDASHEDSTROKEPROCESSOR_HPP
