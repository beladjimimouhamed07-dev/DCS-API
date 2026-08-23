#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: InertialStarter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class InertialStarter
{
public:

    // RVA: 0x37 | Ordinal: 56
        void InertialStarter(class EagleFM::dcswwii::propulsion::InertialStarter const &);

    // RVA: 0x38 | Ordinal: 57
        void InertialStarter(class EagleFM::dcswwii::propulsion::PistonEngine *, double, double, double, double);

    // RVA: 0x354 | Ordinal: 853
        void engageClutch(bool);

    // RVA: 0x355 | Ordinal: 854
        void engageDrive(bool);

    // RVA: 0x3B8 | Ordinal: 953
        void getStage(void);

    // RVA: 0x43A | Ordinal: 1083
        void isClutchEngaged(void);

    // RVA: 0x43C | Ordinal: 1085
        void isDriveEnagaged(void);

    // RVA: 0x500 | Ordinal: 1281
        void repair(void);

    // RVA: 0x588 | Ordinal: 1417
        void setSound(int, double);

    // RVA: 0x5DB | Ordinal: 1500
        void simulate(double);

    // RVA: 0x5FE | Ordinal: 1535
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0xFA | Ordinal: 251
        void _InertialStarter(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_INERTIALSTARTER_HPP
