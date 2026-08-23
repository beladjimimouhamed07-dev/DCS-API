#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QMessageDialogOptions
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMessageDialogOptions
{
public:

    // RVA: 0x17E | Ordinal: 383
        void QMessageDialogOptions(class QMessageDialogOptionsPrivate *);

    // RVA: 0x962 | Ordinal: 2403
        void addButton(class QString const &, enum QPlatformDialogHelper::ButtonRole, void *);

    // RVA: 0xBE3 | Ordinal: 3044
        void clone(void) const;

    // RVA: 0xC88 | Ordinal: 3209
        void create(void);

    // RVA: 0xD09 | Ordinal: 3338
        void customButton(int);

    // RVA: 0xD0A | Ordinal: 3339
        void customButtons(void);

    // RVA: 0xE2F | Ordinal: 3632
        void detailedText(void) const;

    // RVA: 0x4EC9 | Ordinal: 20170
        void icon(void) const;

    // RVA: 0x4EFE | Ordinal: 20223
        void informativeText(void) const;

    // RVA: 0x56CC | Ordinal: 22221
        void removeButton(int);

    // RVA: 0x5938 | Ordinal: 22841
        void setDetailedText(class QString const &);

    // RVA: 0x59F6 | Ordinal: 23031
        void setIcon(enum QMessageDialogOptions::Icon);

    // RVA: 0x5A01 | Ordinal: 23042
        void setInformativeText(class QString const &);

    // RVA: 0x5BA5 | Ordinal: 23462
        void setStandardButtons(class QFlags<enum QPlatformDialogHelper::StandardButton>);

    // RVA: 0x5BEF | Ordinal: 23536
        void setText(class QString const &);

    // RVA: 0x5CCF | Ordinal: 23760
        void setWindowTitle(class QString const &);

    // RVA: 0x5D7B | Ordinal: 23932
        void standardButtons(void) const;

    // RVA: 0x5EF1 | Ordinal: 24306
        void text(void) const;

    // RVA: 0x6188 | Ordinal: 24969
        void windowTitle(void) const;

    // RVA: 0x465 | Ordinal: 1126
        void _QMessageDialogOptions(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QMESSAGEDIALOGOPTIONS_HPP
