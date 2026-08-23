#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QIPAddressUtils
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QIPAddressUtils
{
public:

    // RVA: 0x14BB | Ordinal: 5308
        void parseIp4(unsigned int &, class QChar const *, class QChar const *);

    // RVA: 0x14BC | Ordinal: 5309
        void parseIp6(unsigned char (&)[16], class QChar const *, class QChar const *);

    // RVA: 0x1DDD | Ordinal: 7646
        void toString(class QString &, unsigned int);

    // RVA: 0x1DDE | Ordinal: 7647
        void toString(class QString &, unsigned char const *const);
};

// DCS_OPS_RE_QT5CORE.DLL_QIPADDRESSUTILS_HPP
