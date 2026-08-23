#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QArrayData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QArrayData
{
public:

    // RVA: 0x4A | Ordinal: 75
        void QArrayData(void);

    // RVA: 0x833 | Ordinal: 2100
        void allocate(unsigned __int64, unsigned __int64, unsigned __int64, class QFlags<enum QArrayData::AllocationOption>);

    // RVA: 0x9FC | Ordinal: 2557
        void cloneFlags(void) const;

    // RVA: 0xBFB | Ordinal: 3068
        void data(void);

    // RVA: 0xBFC | Ordinal: 3069
        void data(void) const;

    // RVA: 0xC3D | Ordinal: 3134
        void deallocate(struct QArrayData *, unsigned __int64, unsigned __int64);

    // RVA: 0xC8D | Ordinal: 3214
        void detachCapacity(unsigned __int64) const;

    // RVA: 0xC8E | Ordinal: 3215
        void detachFlags(void) const;

    // RVA: 0x1139 | Ordinal: 4410
        void isMutable(void) const;

    // RVA: 0x175A | Ordinal: 5979
        void reallocateUnaligned(struct QArrayData *, unsigned __int64, unsigned __int64, class QFlags<enum QArrayData::AllocationOption>);

    // RVA: 0x1AEE | Ordinal: 6895
        void sharedNull(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QARRAYDATA_HPP
