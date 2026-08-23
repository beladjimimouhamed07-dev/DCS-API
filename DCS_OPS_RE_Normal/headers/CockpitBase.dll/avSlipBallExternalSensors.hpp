#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSlipBallExternalSensors
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSlipBallExternalSensors
{
public:

    // RVA: 0x1BA | Ordinal: 443
        void avSlipBallExternalSensors(class cockpit::avSlipBallExternalSensors &&);

    // RVA: 0x1BB | Ordinal: 444
        void avSlipBallExternalSensors(class cockpit::avSlipBallExternalSensors const &);

    // RVA: 0x1BC | Ordinal: 445
        void avSlipBallExternalSensors(void);

    // RVA: 0x1784 | Ordinal: 6021
        void setPhysic(class EagleFM::SlipBall *);

    // RVA: 0x1808 | Ordinal: 6153
        void set_Acceleration_local(class Math::Vector<3, double> const &);

    // RVA: 0x1809 | Ordinal: 6154
        void set_G_local(class Math::Vector<3, double> const &);

    // RVA: 0x180E | Ordinal: 6159
        void set_Speed_local(class Math::Vector<3, double> const &);

    // RVA: 0x357 | Ordinal: 856
        void _avSlipBallExternalSensors(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSLIPBALLEXTERNALSENSORS_HPP
