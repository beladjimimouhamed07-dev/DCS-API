#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCollator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCollator
{
public:

    // RVA: 0xAC | Ordinal: 173
        void QCollator(class QCollator &&);

    // RVA: 0xAD | Ordinal: 174
        void QCollator(class QCollator const &);

    // RVA: 0xAE | Ordinal: 175
        void QCollator(class QLocale const &);

    // RVA: 0xAF | Ordinal: 176
        void QCollator(void);

    // RVA: 0x987 | Ordinal: 2440
        void caseSensitivity(void) const;

    // RVA: 0xA43 | Ordinal: 2628
        void compare(class QString const &, class QString const &) const;

    // RVA: 0xA44 | Ordinal: 2629
        void compare(class QStringRef const &, class QStringRef const &) const;

    // RVA: 0xA45 | Ordinal: 2630
        void compare(class QChar const *, int, class QChar const *, int) const;

    // RVA: 0xA46 | Ordinal: 2631
        void compare(class QStringView, class QStringView) const;

    // RVA: 0xC83 | Ordinal: 3204
        void detach(void);

    // RVA: 0xFA4 | Ordinal: 4005
        void ignorePunctuation(void) const;

    // RVA: 0x12B8 | Ordinal: 4793
        void locale(void) const;

    // RVA: 0x1466 | Ordinal: 5223
        void numericMode(void) const;

    // RVA: 0x67C | Ordinal: 1661
        void operator()(class QString const &, class QString const &) const;

    // RVA: 0x67D | Ordinal: 1662
        void operator()(class QStringView, class QStringView) const;

    // RVA: 0x1947 | Ordinal: 6472
        void setCaseSensitivity(enum Qt::CaseSensitivity);

    // RVA: 0x19E4 | Ordinal: 6629
        void setIgnorePunctuation(bool);

    // RVA: 0x1A01 | Ordinal: 6658
        void setLocale(class QLocale const &);

    // RVA: 0x1A28 | Ordinal: 6697
        void setNumericMode(bool);

    // RVA: 0x1B5B | Ordinal: 7004
        void sortKey(class QString const &) const;

    // RVA: 0x1C6C | Ordinal: 7277
        void swap(class QCollator &);

    // RVA: 0x2F5 | Ordinal: 758
        void _QCollator(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCOLLATOR_HPP
