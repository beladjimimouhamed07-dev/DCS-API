#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QColorTransferTable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QColorTransferTable
{
public:

    // RVA: 0xBC | Ordinal: 189
        void QColorTransferTable(class QColorTransferTable &&);

    // RVA: 0xBD | Ordinal: 190
        void QColorTransferTable(class QColorTransferTable const &);

    // RVA: 0xBE | Ordinal: 191
        void QColorTransferTable(unsigned int, class QVector<unsigned char> const &);

    // RVA: 0xBF | Ordinal: 192
        void QColorTransferTable(unsigned int, class QVector<unsigned short> const &);

    // RVA: 0xC0 | Ordinal: 193
        void QColorTransferTable(void);

    // RVA: 0xA0F | Ordinal: 2576
        void apply(float) const;

    // RVA: 0xA14 | Ordinal: 2581
        void applyInverse(float, float) const;

    // RVA: 0xA1F | Ordinal: 2592
        void asColorTransferFunction(class QColorTransferFunction *);

    // RVA: 0xB8A | Ordinal: 2955
        void checkValidity(void) const;

    // RVA: 0x500F | Ordinal: 20496
        void isEmpty(void) const;

    // RVA: 0x41F | Ordinal: 1056
        void _QColorTransferTable(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QCOLORTRANSFERTABLE_HPP
