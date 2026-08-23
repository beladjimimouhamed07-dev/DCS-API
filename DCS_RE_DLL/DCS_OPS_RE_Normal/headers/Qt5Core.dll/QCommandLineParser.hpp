#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QCommandLineParser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QCommandLineParser
{
public:

    // RVA: 0xB7 | Ordinal: 184
        void QCommandLineParser(void);

    // RVA: 0x7F3 | Ordinal: 2036
        void addHelpOption(void);

    // RVA: 0x800 | Ordinal: 2049
        void addOption(class QCommandLineOption const &);

    // RVA: 0x801 | Ordinal: 2050
        void addOptions(class QList<class QCommandLineOption> const &);

    // RVA: 0x805 | Ordinal: 2054
        void addPositionalArgument(class QString const &, class QString const &, class QString const &);

    // RVA: 0x81C | Ordinal: 2077
        void addVersionOption(void);

    // RVA: 0x880 | Ordinal: 2177
        void applicationDescription(void) const;

    // RVA: 0x9F7 | Ordinal: 2552
        void clearPositionalArguments(void);

    // RVA: 0xD99 | Ordinal: 3482
        void errorText(void) const;

    // RVA: 0xF8C | Ordinal: 3981
        void helpText(void) const;

    // RVA: 0x11A7 | Ordinal: 4520
        void isSet(class QCommandLineOption const &) const;

    // RVA: 0x11A8 | Ordinal: 4521
        void isSet(class QString const &) const;

    // RVA: 0x1491 | Ordinal: 5266
        void optionNames(void) const;

    // RVA: 0x14B8 | Ordinal: 5305
        void parse(class QStringList const &);

    // RVA: 0x1503 | Ordinal: 5380
        void positionalArguments(void) const;

    // RVA: 0x1532 | Ordinal: 5427
        void process(class QCoreApplication const &);

    // RVA: 0x1533 | Ordinal: 5428
        void process(class QStringList const &);

    // RVA: 0x1929 | Ordinal: 6442
        void setApplicationDescription(class QString const &);

    // RVA: 0x1A2D | Ordinal: 6702
        void setOptionsAfterPositionalArgumentsMode(enum QCommandLineParser::OptionsAfterPositionalArgumentsMode);

    // RVA: 0x1A8B | Ordinal: 6796
        void setSingleDashWordOptionMode(enum QCommandLineParser::SingleDashWordOptionMode);

    // RVA: 0x1AFA | Ordinal: 6907
        void showHelp(int);

    // RVA: 0x1AFB | Ordinal: 6908
        void showVersion(void);

    // RVA: 0x1E7C | Ordinal: 7805
        void tr(char const *, char const *, int);

    // RVA: 0x1EBC | Ordinal: 7869
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F60 | Ordinal: 8033
        void unknownOptionNames(void) const;

    // RVA: 0x1FB4 | Ordinal: 8117
        void value(class QString const &) const;

    // RVA: 0x1FB5 | Ordinal: 8118
        void value(class QCommandLineOption const &) const;

    // RVA: 0x1FCF | Ordinal: 8144
        void values(class QCommandLineOption const &) const;

    // RVA: 0x1FD0 | Ordinal: 8145
        void values(class QString const &) const;

    // RVA: 0x2F8 | Ordinal: 761
        void _QCommandLineParser(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCOMMANDLINEPARSER_HPP
