#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wRocketSightDataDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRocketSightDataDescriptor
{
public:

    // RVA: 0x11E | Ordinal: 287
        void getA(void);

    // RVA: 0x16D | Ordinal: 366
        void getEngineParameters(double *, double *, double *, double *);

    // RVA: 0x16E | Ordinal: 367
        void getEngineParameters(struct rocketEngineData *);

    // RVA: 0x16F | Ordinal: 368
        void getEngineTime(void);

    // RVA: 0x170 | Ordinal: 369
        void getFMParameters(struct afmGW2Data *);

    // RVA: 0x17A | Ordinal: 379
        void getFuelMass(void);

    // RVA: 0x17B | Ordinal: 380
        void getFuelRate(void);

    // RVA: 0x17D | Ordinal: 382
        void getGW2Parameters(struct minGW2Data *);

    // RVA: 0x180 | Ordinal: 385
        void getGw2Parameters(double *, double *, double *, double *, double *);

    // RVA: 0x189 | Ordinal: 394
        void getI(void);

    // RVA: 0x192 | Ordinal: 403
        void getL(void);

    // RVA: 0x194 | Ordinal: 405
        void getMa(void);

    // RVA: 0x197 | Ordinal: 408
        void getMass(void);

    // RVA: 0x1A3 | Ordinal: 420
        void getMw(void);

    // RVA: 0x1BB | Ordinal: 444
        void getSm(void);

    // RVA: 0x1BE | Ordinal: 447
        void getSw(void);

    // RVA: 0x1C3 | Ordinal: 452
        void getThrust(void);

    // RVA: 0x1C8 | Ordinal: 457
        void getType(void);

    // RVA: 0x1E5 | Ordinal: 486
        void getdCydA0(void);

    // RVA: 0x1E6 | Ordinal: 487
        void getdCydA1(void);

    // RVA: 0x1E7 | Ordinal: 488
        void getmaxAoA(void);

    // RVA: 0x212 | Ordinal: 531
        void load(class wDatabaseLoader *);

    // RVA: 0x35 | Ordinal: 54
        void wRocketSightDataDescriptor(class wRocketSightDataDescriptor &&);

    // RVA: 0x36 | Ordinal: 55
        void wRocketSightDataDescriptor(class wRocketSightDataDescriptor const &);

    // RVA: 0x37 | Ordinal: 56
        void wRocketSightDataDescriptor(class ed::basic_string<char> const &);

    // RVA: 0x62 | Ordinal: 99
        void _wRocketSightDataDescriptor(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WROCKETSIGHTDATADESCRIPTOR_HPP
