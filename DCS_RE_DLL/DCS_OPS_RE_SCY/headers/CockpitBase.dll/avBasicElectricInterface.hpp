#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBasicElectricInterface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBasicElectricInterface
{
public:

    // RVA: 0x82C | Ordinal: 2093
        void OnAC_BusPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x82D | Ordinal: 2094
        void OnAC_BusPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0xD8 | Ordinal: 217
        void avBasicElectricInterface(void);

    // RVA: 0x116E | Ordinal: 4463
        void initSound(void);

    // RVA: 0x1172 | Ordinal: 4467
        void initSoundHost(void);

    // RVA: 0x11A6 | Ordinal: 4519
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14D6 | Ordinal: 5335
        void post_initialize(void);

    // RVA: 0x1792 | Ordinal: 6035
        void setPowerOnOffHandlersForAC_Bus(class EagleFM::Elec::ItemBase *);

    // RVA: 0x1AA3 | Ordinal: 6820
        void update(void);

    // RVA: 0x2E6 | Ordinal: 743
        void _avBasicElectricInterface(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASICELECTRICINTERFACE_HPP
