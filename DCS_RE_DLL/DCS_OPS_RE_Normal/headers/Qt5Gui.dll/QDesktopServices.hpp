#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QDesktopServices
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDesktopServices
{
public:

    // RVA: 0xE68 | Ordinal: 3689
        void displayName(enum QDesktopServices::StandardLocation);

    // RVA: 0x53A3 | Ordinal: 21412
        void openUrl(class QUrl const &);

    // RVA: 0x5C82 | Ordinal: 23683
        void setUrlHandler(class QString const &, class QObject *, char const *);

    // RVA: 0x5E13 | Ordinal: 24084
        void storageLocation(enum QDesktopServices::StandardLocation);

    // RVA: 0x5E14 | Ordinal: 24085
        void storageLocationImpl(enum QStandardPaths::StandardLocation);

    // RVA: 0x60AC | Ordinal: 24749
        void unsetUrlHandler(class QString const &);
};

// DCS_OPS_RE_QT5GUI.DLL_QDESKTOPSERVICES_HPP
