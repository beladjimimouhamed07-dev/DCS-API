#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avPhotoluminescenceController
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avPhotoluminescenceController
{
public:

    // RVA: 0x2CF | Ordinal: 720
        void addLampSource(class EagleFM::Elec::Lamp *, float);

    // RVA: 0xC7 | Ordinal: 200
        void avPhotoluminescenceController(class cockpit::dcswwii::avPhotoluminescenceController const &);

    // RVA: 0xC8 | Ordinal: 201
        void avPhotoluminescenceController(void);

    // RVA: 0x42B | Ordinal: 1068
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4C4 | Ordinal: 1221
        void post_initialize(void);

    // RVA: 0x575 | Ordinal: 1398
        void setRadioactivity(float);

    // RVA: 0x633 | Ordinal: 1588
        void update(void);

    // RVA: 0x13D | Ordinal: 318
        void _avPhotoluminescenceController(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVPHOTOLUMINESCENCECONTROLLER_HPP
