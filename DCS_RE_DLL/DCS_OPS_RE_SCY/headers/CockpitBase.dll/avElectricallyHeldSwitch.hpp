#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avElectricallyHeldSwitch
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avElectricallyHeldSwitch
{
public:

    // RVA: 0x849 | Ordinal: 2122
        void OnPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x8FB | Ordinal: 2300
        void addDisconnectWire(class EagleFM::Elec::ItemBase *);

    // RVA: 0x108 | Ordinal: 265
        void avElectricallyHeldSwitch(class cockpit::avElectricallyHeldSwitch const &);

    // RVA: 0x109 | Ordinal: 266
        void avElectricallyHeldSwitch(class cockpit::avDevice *, int, int);

    // RVA: 0xA52 | Ordinal: 2643
        void checkPower(void);

    // RVA: 0xAF1 | Ordinal: 2802
        void connect(class EagleFM::Elec::ItemBase &);

    // RVA: 0xD1E | Ordinal: 3359
        void getIsOn(void) const;

    // RVA: 0xD7C | Ordinal: 3453
        void getOutput(void);

    // RVA: 0xD7D | Ordinal: 3454
        void getOutputConst(void) const;

    // RVA: 0x176C | Ordinal: 5997
        void setOnOff(bool);

    // RVA: 0x2FF | Ordinal: 768
        void _avElectricallyHeldSwitch(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVELECTRICALLYHELDSWITCH_HPP
