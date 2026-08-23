#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QDialogPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDialogPrivate
{
public:

    // RVA: 0x41 | Ordinal: 66
        void QDialogPrivate(void);

    // RVA: 0x682 | Ordinal: 1667
        void canBeNativeDialog(void) const;

    // RVA: 0xA03 | Ordinal: 2564
        void deletePlatformHelper(void);

    // RVA: 0xBD1 | Ordinal: 3026
        void finalize(int, int);

    // RVA: 0xD1A | Ordinal: 3355
        void helperDone(enum QDialog::DialogCode, class QPlatformDialogHelper *);

    // RVA: 0xD1C | Ordinal: 3357
        void helperPrepareShow(class QPlatformDialogHelper *);

    // RVA: 0xD20 | Ordinal: 3361
        void hide(int);

    // RVA: 0xD27 | Ordinal: 3368
        void hideDefault(void);

    // RVA: 0xDDD | Ordinal: 3550
        void initHelper(class QPlatformDialogHelper *);

    // RVA: 0x1394 | Ordinal: 5013
        void platformHelper(void) const;

    // RVA: 0x1407 | Ordinal: 5128
        void q_func(void);

    // RVA: 0x1408 | Ordinal: 5129
        void q_func(void) const;

    // RVA: 0x1682 | Ordinal: 5763
        void resetModalitySetByOpen(void);

    // RVA: 0x18F7 | Ordinal: 6392
        void setDefault(class QPushButton *);

    // RVA: 0x1A7D | Ordinal: 6782
        void setMainDefault(class QPushButton *);

    // RVA: 0x1AEC | Ordinal: 6893
        void setNativeDialogVisible(bool);

    // RVA: 0x1F46 | Ordinal: 8007
        void styleHint(enum QPlatformDialogHelper::StyleHint) const;

    // RVA: 0x21A3 | Ordinal: 8612
        void transientParentWindow(void) const;

    // RVA: 0x1D3 | Ordinal: 468
        void _QDialogPrivate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QDIALOGPRIVATE_HPP
