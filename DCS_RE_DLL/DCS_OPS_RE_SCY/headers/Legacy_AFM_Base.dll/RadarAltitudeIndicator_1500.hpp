#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: RadarAltitudeIndicator_1500
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class RadarAltitudeIndicator_1500
{
public:

    // RVA: 0x368 | Ordinal: 873
        void Construct(void);

    // RVA: 0x3CA | Ordinal: 971
        void Create(void);

    // RVA: 0x4AD | Ordinal: 1198
        void LockSensor(class AFM::Sensor *);

    // RVA: 0xA5 | Ordinal: 166
        void RadarAltitudeIndicator_1500(class AFM::RadarAltitudeIndicator_1500 &&);

    // RVA: 0xA6 | Ordinal: 167
        void RadarAltitudeIndicator_1500(class AFM::RadarAltitudeIndicator_1500 const &);

    // RVA: 0xA7 | Ordinal: 168
        void RadarAltitudeIndicator_1500(void);

    // RVA: 0x4EC | Ordinal: 1261
        void Simulation(double);

    // RVA: 0x60E | Ordinal: 1551
        void getIPointerIndicator(class AFM::Indicator **);

    // RVA: 0x139 | Ordinal: 314
        void _RadarAltitudeIndicator_1500(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_RADARALTITUDEINDICATOR_1500_HPP
