#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: lObjectDynData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lObjectDynData
{
public:

    // RVA: 0x9B | Ordinal: 156
        void ArgNetState(struct Graphics::AnimHolderNetState &);

    // RVA: 0x9C | Ordinal: 157
        void ArgNetStateSet(struct Graphics::AnimHolderNetState const &);

    // RVA: 0x9D | Ordinal: 158
        void ArgPlay(int, float, float, float);

    // RVA: 0x9E | Ordinal: 159
        void ArgSet(int, float);

    // RVA: 0xE9 | Ordinal: 234
        void Init(class lLandObject *);

    // RVA: 0x11F | Ordinal: 288
        void SetLife(double);

    // RVA: 0x125 | Ordinal: 294
        void SetOwner(class lLandObject *);

    // RVA: 0x24 | Ordinal: 37
        void lObjectDynData(void);

    // RVA: 0x4A | Ordinal: 75
        void _lObjectDynData(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_LOBJECTDYNDATA_HPP
