#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: ClientData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ClientData
{
public:

    // RVA: 0x6 | Ordinal: 7
        void ClientData(struct ClientData &&);

    // RVA: 0x7 | Ordinal: 8
        void ClientData(struct ClientData const &);

    // RVA: 0x8 | Ordinal: 9
        void ClientData(unsigned int);

    // RVA: 0x9 | Ordinal: 10
        void ClientData(void);

    // RVA: 0xC4 | Ordinal: 197
        void In_Air_(void) const;

    // RVA: 0xD1 | Ordinal: 210
        void Position(void) const;

    // RVA: 0xFB | Ordinal: 252
        void assignGroup(class wControl *);

    // RVA: 0x10F | Ordinal: 272
        void canTakeoff(class wAirbase *) const;

    // RVA: 0x172 | Ordinal: 371
        void getAircraftDescriptor(void) const;

    // RVA: 0x189 | Ordinal: 394
        void getCurrentLandPlaceID(void) const;

    // RVA: 0x19F | Ordinal: 416
        void getGroupRaw(void) const;

    // RVA: 0x1A0 | Ordinal: 417
        void getGroupValidated(void) const;

    // RVA: 0x1A6 | Ordinal: 423
        void getLA_(void) const;

    // RVA: 0x1C4 | Ordinal: 453
        void getPtr(void) const;

    // RVA: 0x1FA | Ordinal: 507
        void getVelocity(void) const;

    // RVA: 0x229 | Ordinal: 554
        void init(unsigned int);

    // RVA: 0x23F | Ordinal: 576
        void isDead(void) const;

    // RVA: 0x241 | Ordinal: 578
        void isEngineStarted(void) const;

    // RVA: 0x261 | Ordinal: 610
        void kill(void);

    // RVA: 0x2E0 | Ordinal: 737
        void return_resources_to_warehouse(class IwWarehouse *, bool);

    // RVA: 0x2EC | Ordinal: 749
        void send_message(class woATC *, enum wMsg);

    // RVA: 0x302 | Ordinal: 771
        void setHoverPoint(void);

    // RVA: 0x314 | Ordinal: 789
        void setStatus(enum ClientStatus);

    // RVA: 0x2D | Ordinal: 46
        void _ClientData(void);
};

// DCS_OPS_RE_FLIGHT.DLL_CLIENTDATA_HPP
