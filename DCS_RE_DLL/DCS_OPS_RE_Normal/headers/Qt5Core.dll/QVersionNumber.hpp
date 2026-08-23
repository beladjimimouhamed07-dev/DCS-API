#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QVersionNumber
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QVersionNumber
{
public:

    // RVA: 0xA3A | Ordinal: 2619
        void commonPrefix(class QVersionNumber const &, class QVersionNumber const &);

    // RVA: 0xA5C | Ordinal: 2653
        void compare(class QVersionNumber const &, class QVersionNumber const &);

    // RVA: 0xEE2 | Ordinal: 3811
        void fromString(class QString const &, int *);

    // RVA: 0xEE3 | Ordinal: 3812
        void fromString(class QLatin1String, int *);

    // RVA: 0xEE4 | Ordinal: 3813
        void fromString(class QStringView, int *);

    // RVA: 0x1166 | Ordinal: 4455
        void isPrefixOf(class QVersionNumber const &) const;

    // RVA: 0x143F | Ordinal: 5184
        void normalized(void) const;

    // RVA: 0x1901 | Ordinal: 6402
        void segments(void) const;

    // RVA: 0x1E03 | Ordinal: 7684
        void toString(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QVERSIONNUMBER_HPP
