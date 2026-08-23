#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCommandLineOption
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCommandLineOption
{
public:

    // RVA: 0xB2 | Ordinal: 179
        void QCommandLineOption(class QCommandLineOption const &);

    // RVA: 0xB3 | Ordinal: 180
        void QCommandLineOption(class QString const &, class QString const &, class QString const &, class QString const &);

    // RVA: 0xB4 | Ordinal: 181
        void QCommandLineOption(class QString const &);

    // RVA: 0xB5 | Ordinal: 182
        void QCommandLineOption(class QStringList const &);

    // RVA: 0xB6 | Ordinal: 183
        void QCommandLineOption(class QStringList const &, class QString const &, class QString const &, class QString const &);

    // RVA: 0xC63 | Ordinal: 3172
        void defaultValues(void) const;

    // RVA: 0xC6A | Ordinal: 3179
        void description(void) const;

    // RVA: 0xE67 | Ordinal: 3688
        void flags(void) const;

    // RVA: 0x10FB | Ordinal: 4348
        void isHidden(void) const;

    // RVA: 0x1419 | Ordinal: 5146
        void names(void) const;

    // RVA: 0x1977 | Ordinal: 6520
        void setDefaultValue(class QString const &);

    // RVA: 0x1978 | Ordinal: 6521
        void setDefaultValues(class QStringList const &);

    // RVA: 0x1979 | Ordinal: 6522
        void setDescription(class QString const &);

    // RVA: 0x19CD | Ordinal: 6606
        void setFlags(class QFlags<enum QCommandLineOption::Flag>);

    // RVA: 0x19DF | Ordinal: 6624
        void setHidden(bool);

    // RVA: 0x1AD7 | Ordinal: 6872
        void setValueName(class QString const &);

    // RVA: 0x1C6E | Ordinal: 7279
        void swap(class QCommandLineOption &);

    // RVA: 0x1FCB | Ordinal: 8140
        void valueName(void) const;

    // RVA: 0x2F7 | Ordinal: 760
        void _QCommandLineOption(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCOMMANDLINEOPTION_HPP
