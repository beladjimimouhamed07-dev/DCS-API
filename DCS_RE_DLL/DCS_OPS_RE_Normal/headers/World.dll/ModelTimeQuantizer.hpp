#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: World.dll
// Class: ModelTimeQuantizer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ModelTimeQuantizer
{
public:

    // RVA: 0x0 | Ordinal: 1
        void ModelTimeQuantizer(void);

    // RVA: 0x39 | Ordinal: 58
        void accelerate(void);

    // RVA: 0x3C | Ordinal: 61
        void antifreezeEngaged(void) const;

    // RVA: 0x3D | Ordinal: 62
        void check_breakpoint(double, double);

    // RVA: 0x3E | Ordinal: 63
        void decelerate(void);

    // RVA: 0x3F | Ordinal: 64
        void freeze(void);

    // RVA: 0x40 | Ordinal: 65
        void freezed(void);

    // RVA: 0x41 | Ordinal: 66
        void getAcceleration(void);

    // RVA: 0x42 | Ordinal: 67
        void getAntifreezeSetting(void) const;

    // RVA: 0x43 | Ordinal: 68
        void getDeltaTime(void);

    // RVA: 0x44 | Ordinal: 69
        void getFastForwardTime(void) const;

    // RVA: 0x45 | Ordinal: 70
        void getFinishTime(void);

    // RVA: 0x46 | Ordinal: 71
        void getLastTriedStep(void) const;

    // RVA: 0x47 | Ordinal: 72
        void getLateness(void);

    // RVA: 0x48 | Ordinal: 73
        void getRealFinishTime(void);

    // RVA: 0x49 | Ordinal: 74
        void getRealFreezeTime(void);

    // RVA: 0x4A | Ordinal: 75
        void getRealStartTime(void);

    // RVA: 0x4B | Ordinal: 76
        void getRealUnfreezeTime(void);

    // RVA: 0x4C | Ordinal: 77
        void getStartTime(void);

    // RVA: 0x4E | Ordinal: 79
        void initialize(double, double, bool);

    // RVA: 0x4F | Ordinal: 80
        void initialize(double, bool);

    // RVA: 0x53 | Ordinal: 84
        void nextStep(double);

    // RVA: 0x54 | Ordinal: 85
        void nextStepFixed(double);

    // RVA: 0x65 | Ordinal: 102
        void setAcceleration(double);

    // RVA: 0x66 | Ordinal: 103
        void setAntifreeze(double);

    // RVA: 0x67 | Ordinal: 104
        void setFastForwardTime(double);

    // RVA: 0x68 | Ordinal: 105
        void setFinishTime(double);

    // RVA: 0x69 | Ordinal: 106
        void unfreeze(void);

    // RVA: 0x8 | Ordinal: 9
        void _ModelTimeQuantizer(void);
};

// DCS_OPS_RE_WORLD.DLL_MODELTIMEQUANTIZER_HPP
