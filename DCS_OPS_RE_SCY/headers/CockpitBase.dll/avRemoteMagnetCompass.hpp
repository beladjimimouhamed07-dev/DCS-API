#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avRemoteMagnetCompass
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avRemoteMagnetCompass
{
public:

    // RVA: 0x193 | Ordinal: 404
        void avRemoteMagnetCompass(class cockpit::avRemoteMagnetCompass const &);

    // RVA: 0x194 | Ordinal: 405
        void avRemoteMagnetCompass(void);

    // RVA: 0xB05 | Ordinal: 2822
        void connect_electric_wire(class EagleFM::Elec::ItemBase &);

    // RVA: 0x11E4 | Ordinal: 4581
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x15FC | Ordinal: 5629
        void repair(void);

    // RVA: 0x185E | Ordinal: 6239
        void set_damage(unsigned int, bool);

    // RVA: 0x1994 | Ordinal: 6549
        void simulate_damage(double);

    // RVA: 0x1AD0 | Ordinal: 6865
        void update(void);

    // RVA: 0x341 | Ordinal: 834
        void _avRemoteMagnetCompass(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVREMOTEMAGNETCOMPASS_HPP
