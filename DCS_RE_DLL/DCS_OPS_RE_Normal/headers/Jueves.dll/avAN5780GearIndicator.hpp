#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avAN5780GearIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avAN5780GearIndicator
{
public:

    // RVA: 0x9F | Ordinal: 160
        void avAN5780GearIndicator(class cockpit::dcswwii::avAN5780GearIndicator const &);

    // RVA: 0xA0 | Ordinal: 161
        void avAN5780GearIndicator(void);

    // RVA: 0x2FF | Ordinal: 768
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x327 | Ordinal: 808
        void doSetCommand(int, float, bool, int);

    // RVA: 0x418 | Ordinal: 1049
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x45F | Ordinal: 1120
        void netReceiveControl(enum EagleFM::dcswwii::util::DeviceCommands, float);

    // RVA: 0x46E | Ordinal: 1135
        void netRegisterControls(int);

    // RVA: 0x4B3 | Ordinal: 1204
        void post_initialize(void);

    // RVA: 0x516 | Ordinal: 1303
        void repair(void);

    // RVA: 0x585 | Ordinal: 1414
        void setSenderReading(int, float);

    // RVA: 0x5AA | Ordinal: 1451
        void set_damage(unsigned int, bool);

    // RVA: 0x621 | Ordinal: 1570
        void update(void);

    // RVA: 0x128 | Ordinal: 297
        void _avAN5780GearIndicator(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVAN5780GEARINDICATOR_HPP
