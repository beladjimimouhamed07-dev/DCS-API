#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBasicOxygenSystemInterface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBasicOxygenSystemInterface
{
public:

    // RVA: 0xDC | Ordinal: 221
        void avBasicOxygenSystemInterface(void);

    // RVA: 0xDD | Ordinal: 222
        void avBasicOxygenSystemInterface(class cockpit::avBasicOxygenSystemInterface const &);

    // RVA: 0x9EA | Ordinal: 2539
        void calculate_starvation(double, float);

    // RVA: 0xC67 | Ordinal: 3176
        void getCockpitPressure(int) const;

    // RVA: 0xC68 | Ordinal: 3177
        void getCockpitPressureSpeed(int) const;

    // RVA: 0xEA3 | Ordinal: 3748
        void get_anoxemia_data(unsigned int) const;

    // RVA: 0x11A9 | Ordinal: 4522
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1AA5 | Ordinal: 6822
        void update(void);

    // RVA: 0x2E9 | Ordinal: 746
        void _avBasicOxygenSystemInterface(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASICOXYGENSYSTEMINTERFACE_HPP
