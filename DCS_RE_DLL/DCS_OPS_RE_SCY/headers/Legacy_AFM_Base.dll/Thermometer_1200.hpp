#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Thermometer_1200
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Thermometer_1200
{
public:

    // RVA: 0x378 | Ordinal: 889
        void Construct(void);

    // RVA: 0x3DF | Ordinal: 992
        void Create(void);

    // RVA: 0x496 | Ordinal: 1175
        void LockJetEngine(class AFM::JetEngine *);

    // RVA: 0x4F6 | Ordinal: 1271
        void Simulation(double);

    // RVA: 0xE7 | Ordinal: 232
        void Thermometer_1200(class AFM::Thermometer_1200 &&);

    // RVA: 0xE8 | Ordinal: 233
        void Thermometer_1200(class AFM::Thermometer_1200 const &);

    // RVA: 0xE9 | Ordinal: 234
        void Thermometer_1200(void);

    // RVA: 0x610 | Ordinal: 1553
        void getIPointerIndicator(class AFM::Indicator **);

    // RVA: 0x67D | Ordinal: 1662
        void getIPointerSensor(class AFM::Sensor **);

    // RVA: 0x14F | Ordinal: 336
        void _Thermometer_1200(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_THERMOMETER_1200_HPP
