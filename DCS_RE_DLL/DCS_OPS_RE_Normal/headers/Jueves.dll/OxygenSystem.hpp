#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: OxygenSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace oxygens {

class OxygenSystem
{
public:

    // RVA: 0x52 | Ordinal: 83
        void OxygenSystem(class EagleFM::dcswwii::oxygens::OxygenSystem const &);

    // RVA: 0x53 | Ordinal: 84
        void OxygenSystem(class EagleFM::dcswwii::FlightModel *, int, double, double, double);

    // RVA: 0x347 | Ordinal: 840
        void doSimulate(void);

    // RVA: 0x360 | Ordinal: 865
        void getContainerPressure(void);

    // RVA: 0x374 | Ordinal: 885
        void getFlow(int);

    // RVA: 0x392 | Ordinal: 915
        void getOperatingPressure(int);

    // RVA: 0x395 | Ordinal: 918
        void getOxygenConsumption(float) const;

    // RVA: 0x3B9 | Ordinal: 954
        void getStarvationEffect1(int);

    // RVA: 0x3BA | Ordinal: 955
        void getStarvationEffect2(int);

    // RVA: 0x3BB | Ordinal: 956
        void getStarvationVisualFactor(int);

    // RVA: 0x43F | Ordinal: 1088
        void isMaskValveOpen(int);

    // RVA: 0x440 | Ordinal: 1089
        void isShowerValveOpen(int);

    // RVA: 0x4E3 | Ordinal: 1252
        void refill(void);

    // RVA: 0x505 | Ordinal: 1286
        void repair(void);

    // RVA: 0x545 | Ordinal: 1350
        void setEmergencyBypassValve(int, bool);

    // RVA: 0x56B | Ordinal: 1388
        void setOperatingValve(int, bool);

    // RVA: 0x587 | Ordinal: 1416
        void setShowerValve(int, bool);

    // RVA: 0x602 | Ordinal: 1539
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x105 | Ordinal: 262
        void _OxygenSystem(void);
};

} // namespace oxygens
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_OXYGENSYSTEM_HPP
