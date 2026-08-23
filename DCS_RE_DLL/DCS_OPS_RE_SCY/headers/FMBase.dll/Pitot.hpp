#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Pitot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Pitot
{
public:

    // RVA: 0x105 | Ordinal: 262
        void Pitot(class EagleFM::Pitot const &);

    // RVA: 0x106 | Ordinal: 263
        void Pitot(class EagleFM::DynamicBody *, float);

    // RVA: 0x4C9 | Ordinal: 1226
        void getAoA(void) const;

    // RVA: 0x4CB | Ordinal: 1228
        void getAoS(void) const;

    // RVA: 0x4D0 | Ordinal: 1233
        void getAtmoPressure(void) const;

    // RVA: 0x4EF | Ordinal: 1264
        void getBodyTemperature(void) const;

    // RVA: 0x4F7 | Ordinal: 1272
        void getCAS(void) const;

    // RVA: 0x53F | Ordinal: 1344
        void getEAS(void) const;

    // RVA: 0x577 | Ordinal: 1400
        void getFullPressure(void) const;

    // RVA: 0x587 | Ordinal: 1416
        void getIAS(void) const;

    // RVA: 0x593 | Ordinal: 1428
        void getIceLayerThickness(void) const;

    // RVA: 0x59C | Ordinal: 1437
        void getIntegrityFactor(void) const;

    // RVA: 0x5BD | Ordinal: 1470
        void getMach_adc(void) const;

    // RVA: 0x5BE | Ordinal: 1471
        void getMach_sens(void) const;

    // RVA: 0x628 | Ordinal: 1577
        void getPureAtmoDensity(void) const;

    // RVA: 0x62A | Ordinal: 1579
        void getPureAtmoPressure(void) const;

    // RVA: 0x62C | Ordinal: 1581
        void getPureAtmoTemperature(void) const;

    // RVA: 0x62D | Ordinal: 1582
        void getPureMach(void) const;

    // RVA: 0x62E | Ordinal: 1583
        void getPureTAS(void) const;

    // RVA: 0x68F | Ordinal: 1680
        void getSolidAoA(void) const;

    // RVA: 0x6A3 | Ordinal: 1700
        void getTAS_adc(void) const;

    // RVA: 0x6A4 | Ordinal: 1701
        void getTAS_sens(void) const;

    // RVA: 0x6A5 | Ordinal: 1702
        void getT_slowdown(void) const;

    // RVA: 0x6D2 | Ordinal: 1747
        void getVerticalSpeed(void) const;

    // RVA: 0x845 | Ordinal: 2118
        void setDistortionPressDyn(float (__cdecl *)(float, class EagleFM::Pitot *, class EagleFM::DynamicBody *));

    // RVA: 0x846 | Ordinal: 2119
        void setDistortionPressFull(float (__cdecl *)(float, class EagleFM::Pitot *, class EagleFM::DynamicBody *));

    // RVA: 0x847 | Ordinal: 2120
        void setDistortionPressStat(float (__cdecl *)(float, class EagleFM::Pitot *, class EagleFM::DynamicBody *));

    // RVA: 0x871 | Ordinal: 2162
        void setHeatPower(float);

    // RVA: 0x878 | Ordinal: 2169
        void setIF(float);

    // RVA: 0x96A | Ordinal: 2411
        void simulate(double);

    // RVA: 0x1C9 | Ordinal: 458
        void _Pitot(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_PITOT_HPP
