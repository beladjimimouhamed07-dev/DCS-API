#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avUGR_4K
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avUGR_4K
{
public:

    // RVA: 0x89B | Ordinal: 2204
        void SetCommand(int, float);

    // RVA: 0x1CC | Ordinal: 461
        void avUGR_4K(class cockpit::avUGR_4K const &);

    // RVA: 0x1CD | Ordinal: 462
        void avUGR_4K(void);

    // RVA: 0xAFC | Ordinal: 2813
        void connect_electric(class EagleFM::Elec::ItemBase &);

    // RVA: 0xEBA | Ordinal: 3771
        void get_bearing(void) const;

    // RVA: 0xEE4 | Ordinal: 3813
        void get_commanded_course(void) const;

    // RVA: 0x1037 | Ordinal: 4152
        void get_radio_bearing(void) const;

    // RVA: 0x11FD | Ordinal: 4606
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1500 | Ordinal: 5377
        void post_initialize(void);

    // RVA: 0x1ADF | Ordinal: 6880
        void update(void);

    // RVA: 0x362 | Ordinal: 867
        void _avUGR_4K(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVUGR_4K_HPP
