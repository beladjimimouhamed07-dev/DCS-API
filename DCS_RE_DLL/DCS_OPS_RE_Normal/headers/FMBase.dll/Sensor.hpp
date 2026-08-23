#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Sensor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Sensor
{
public:

    // RVA: 0x12A | Ordinal: 299
        void Sensor(class EagleFM::Sensor const &);

    // RVA: 0x12B | Ordinal: 300
        void Sensor(void);

    // RVA: 0x3D1 | Ordinal: 978
        void breakAndFreeze(void);

    // RVA: 0x4AF | Ordinal: 1200
        void forceInput(double);

    // RVA: 0x58E | Ordinal: 1423
        void getIF(void) const;

    // RVA: 0x5EA | Ordinal: 1515
        void getOutput(void) const;

    // RVA: 0x72D | Ordinal: 1838
        void init(double, double);

    // RVA: 0x806 | Ordinal: 2055
        void setAperiodicType(double);

    // RVA: 0x843 | Ordinal: 2116
        void setDirectType(void);

    // RVA: 0x85F | Ordinal: 2144
        void setFlagImmortal(bool);

    // RVA: 0x879 | Ordinal: 2170
        void setIF(double);

    // RVA: 0x882 | Ordinal: 2179
        void setInput(double);

    // RVA: 0x8B4 | Ordinal: 2229
        void setOscillationType(double, double);

    // RVA: 0x970 | Ordinal: 2417
        void simulate(double);

    // RVA: 0x1D6 | Ordinal: 471
        void _Sensor(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_SENSOR_HPP
