#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QOperatingSystemVersion
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOperatingSystemVersion
{
public:

    // RVA: 0x1A5 | Ordinal: 422
        void QOperatingSystemVersion(enum QOperatingSystemVersion::OSType, int, int, int);

    // RVA: 0xA49 | Ordinal: 2634
        void compare(class QOperatingSystemVersion const &, class QOperatingSystemVersion const &);

    // RVA: 0xB57 | Ordinal: 2904
        void current(void);

    // RVA: 0xB74 | Ordinal: 2933
        void currentType(void);

    // RVA: 0x1073 | Ordinal: 4212
        void isAnyOfType(class std::initializer_list<enum QOperatingSystemVersion::OSType>) const;

    // RVA: 0x12ED | Ordinal: 4846
        void majorVersion(void) const;

    // RVA: 0x138C | Ordinal: 5005
        void microVersion(void) const;

    // RVA: 0x13AC | Ordinal: 5037
        void minorVersion(void) const;

    // RVA: 0x140C | Ordinal: 5133
        void name(void) const;

    // RVA: 0x1900 | Ordinal: 6401
        void segmentCount(void) const;

    // RVA: 0x1F3E | Ordinal: 7999
        void type(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QOPERATINGSYSTEMVERSION_HPP
