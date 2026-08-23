#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: wAirService
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAirService
{
public:

    // RVA: 0xCD | Ordinal: 206
        void GetParkingObjID(int);

    // RVA: 0x11B | Ordinal: 284
        void SetParking(int, class MovingObject *);

    // RVA: 0x1A5 | Ordinal: 422
        void controlSecondaryService(double &);

    // RVA: 0x1A6 | Ordinal: 423
        void controlService(double &);

    // RVA: 0x1C3 | Ordinal: 452
        void createSystem(int, double, enum wModulation);

    // RVA: 0x1D5 | Ordinal: 470
        void deckFreeFromPlanes(void);

    // RVA: 0x1D7 | Ordinal: 472
        void deleteSystem(void);

    // RVA: 0x20A | Ordinal: 523
        void getATC(void);

    // RVA: 0x264 | Ordinal: 613
        void getFreeCatapultsNum(void);

    // RVA: 0x4B9 | Ordinal: 1210
        void setHost(class woShip *, int);

    // RVA: 0x1C | Ordinal: 29
        void wAirService(class woShip *);

    // RVA: 0x34 | Ordinal: 53
        void _wAirService(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_WAIRSERVICE_HPP
