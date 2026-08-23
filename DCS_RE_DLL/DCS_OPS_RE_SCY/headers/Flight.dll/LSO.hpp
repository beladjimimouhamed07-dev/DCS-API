#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: LSO
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class LSO
{
public:

    // RVA: 0x8F | Ordinal: 144
        void Clear(void);

    // RVA: 0xC7 | Ordinal: 200
        void Init(class woATC *);

    // RVA: 0xA | Ordinal: 11
        void LSO(struct LSO const &);

    // RVA: 0xB | Ordinal: 12
        void LSO(void);

    // RVA: 0x12A | Ordinal: 299
        void clientInNotifiedNonClients(unsigned int);

    // RVA: 0x15F | Ordinal: 352
        void finishLanding(struct ClientData *);

    // RVA: 0x19C | Ordinal: 413
        void getGlideslopeBA(void) const;

    // RVA: 0x1B0 | Ordinal: 433
        void getMarshalStackClient(unsigned int, int);

    // RVA: 0x1B2 | Ordinal: 435
        void getMarshalStackClientassignedDistance(unsigned int);

    // RVA: 0x1B3 | Ordinal: 436
        void getMarshalStackMaxDist(void);

    // RVA: 0x1E2 | Ordinal: 483
        void getTanGlideslopeBA(void) const;

    // RVA: 0x26A | Ordinal: 619
        void marshalStackFreeClient(unsigned int);

    // RVA: 0x272 | Ordinal: 627
        void notificateError(class ed::basic_string<char>, float, float, float);

    // RVA: 0x284 | Ordinal: 645
        void onTouchDown(class woLABase *);

    // RVA: 0x299 | Ordinal: 666
        void positionCorrectionOnRogerBall(int &, int &);

    // RVA: 0x300 | Ordinal: 769
        void setGlideslopeBA(float);

    // RVA: 0x32E | Ordinal: 815
        void syncMarshalStack(void);

    // RVA: 0x33B | Ordinal: 828
        void updateLSO(struct ClientData *);

    // RVA: 0x2E | Ordinal: 47
        void _LSO(void);
};

// DCS_OPS_RE_FLIGHT.DLL_LSO_HPP
