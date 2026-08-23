#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: HydroSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class HydroSystem
{
public:

    // RVA: 0x35C | Ordinal: 861
        void Construct(void);

    // RVA: 0x3B9 | Ordinal: 954
        void Create(void);

    // RVA: 0x72 | Ordinal: 115
        void HydroSystem(class AFM::HydroSystem &&);

    // RVA: 0x73 | Ordinal: 116
        void HydroSystem(class AFM::HydroSystem const &);

    // RVA: 0x74 | Ordinal: 117
        void HydroSystem(void);

    // RVA: 0x43C | Ordinal: 1085
        void InitInTheFlight(void);

    // RVA: 0x446 | Ordinal: 1095
        void InitOnTheParking(void);

    // RVA: 0x498 | Ordinal: 1177
        void LockLeftJetEngine(class AFM::JetEngine *);

    // RVA: 0x4A5 | Ordinal: 1190
        void LockRightJetEngine(class AFM::JetEngine *);

    // RVA: 0x4E5 | Ordinal: 1254
        void Simulation(double);

    // RVA: 0x5C6 | Ordinal: 1479
        void getHydroAccumulatorsPressure(double *);

    // RVA: 0x6AB | Ordinal: 1708
        void getLeftHydroSystemPressure(double *);

    // RVA: 0x6AC | Ordinal: 1709
        void getLeftHydroSystemPressureConsumption(double *);

    // RVA: 0x6B1 | Ordinal: 1714
        void getLeftPumpFailureFactor(double *);

    // RVA: 0x6D1 | Ordinal: 1746
        void getMaxPressure(double *);

    // RVA: 0x6D2 | Ordinal: 1747
        void getMaxPumpsDisplacement(double *);

    // RVA: 0x700 | Ordinal: 1793
        void getPumpsDisplacementFactor(double *);

    // RVA: 0x708 | Ordinal: 1801
        void getRightHydroSystemPressure(double *);

    // RVA: 0x709 | Ordinal: 1802
        void getRightHydroSystemPressureConsumption(double *);

    // RVA: 0x70E | Ordinal: 1807
        void getRightPumpFailureFactor(double *);

    // RVA: 0x7D0 | Ordinal: 2001
        void setHydroAccumulatorsPressure(double);

    // RVA: 0x7F4 | Ordinal: 2037
        void setLeftHydroSystemPressure(double);

    // RVA: 0x7F5 | Ordinal: 2038
        void setLeftHydroSystemPressureConsumption(double);

    // RVA: 0x7F6 | Ordinal: 2039
        void setLeftHydroSystemPressureOff(void);

    // RVA: 0x7FB | Ordinal: 2044
        void setLeftPumpFailureFactor(double);

    // RVA: 0x818 | Ordinal: 2073
        void setMaxPressure(double);

    // RVA: 0x819 | Ordinal: 2074
        void setMaxPumpsDisplacement(double);

    // RVA: 0x879 | Ordinal: 2170
        void setPumpsDisplacementFactor(double);

    // RVA: 0x882 | Ordinal: 2179
        void setRightHydroSystemPressure(double);

    // RVA: 0x883 | Ordinal: 2180
        void setRightHydroSystemPressureConsumption(double);

    // RVA: 0x884 | Ordinal: 2181
        void setRightHydroSystemPressureOff(void);

    // RVA: 0x889 | Ordinal: 2186
        void setRightPumpFailureFactor(double);

    // RVA: 0x128 | Ordinal: 297
        void _HydroSystem(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_HYDROSYSTEM_HPP
