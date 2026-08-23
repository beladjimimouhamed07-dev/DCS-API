#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QStandardPaths
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStandardPaths
{
public:

    // RVA: 0xCB9 | Ordinal: 3258
        void displayName(enum QStandardPaths::StandardLocation);

    // RVA: 0xD00 | Ordinal: 3329
        void enableTestMode(bool);

    // RVA: 0xE40 | Ordinal: 3649
        void findExecutable(class QString const &, class QStringList const &);

    // RVA: 0x11DB | Ordinal: 4572
        void isTestModeEnabled(void);

    // RVA: 0x12CD | Ordinal: 4814
        void locate(enum QStandardPaths::StandardLocation, class QString const &, class QFlags<enum QStandardPaths::LocateOption>);

    // RVA: 0x12CE | Ordinal: 4815
        void locateAll(enum QStandardPaths::StandardLocation, class QString const &, class QFlags<enum QStandardPaths::LocateOption>);

    // RVA: 0x1AB5 | Ordinal: 6838
        void setTestModeEnabled(bool);

    // RVA: 0x1B94 | Ordinal: 7061
        void standardLocations(enum QStandardPaths::StandardLocation);

    // RVA: 0x2017 | Ordinal: 8216
        void writableLocation(enum QStandardPaths::StandardLocation);
};

// DCS_OPS_RE_QT5CORE.DLL_QSTANDARDPATHS_HPP
