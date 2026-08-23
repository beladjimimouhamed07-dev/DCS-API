#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: ExternalRefCountData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QtSharedPointer {

class ExternalRefCountData
{
public:

    // RVA: 0x9BA | Ordinal: 2491
        void checkQObjectShared(class QObject const *);

    // RVA: 0xF20 | Ordinal: 3873
        void getAndRef(class QObject const *);

    // RVA: 0x1A61 | Ordinal: 6754
        void setQObjectShared(class QObject const *, bool);
};

} // namespace QtSharedPointer

// DCS_OPS_RE_QT5CORE.DLL_EXTERNALREFCOUNTDATA_HPP
