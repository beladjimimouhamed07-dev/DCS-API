#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: woRunWay
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woRunWay
{
public:

    // RVA: 0x8B | Ordinal: 140
        void Class(void) const;

    // RVA: 0x97 | Ordinal: 152
        void Course(void);

    // RVA: 0xC3 | Ordinal: 196
        void Hrad(void);

    // RVA: 0xD3 | Ordinal: 212
        void PostCollisionProcessing(struct wsCollisionData *);

    // RVA: 0x1AB | Ordinal: 428
        void getLength(void);

    // RVA: 0x24F | Ordinal: 592
        void isRunWayOpen(void);

    // RVA: 0x303 | Ordinal: 772
        void setIDAirdrome(unsigned int);

    // RVA: 0x30D | Ordinal: 782
        void setRunWay(class wPosition3<float> &, float, float, class wsType);

    // RVA: 0x23 | Ordinal: 36
        void woRunWay(void);

    // RVA: 0x3C | Ordinal: 61
        void _woRunWay(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WORUNWAY_HPP
