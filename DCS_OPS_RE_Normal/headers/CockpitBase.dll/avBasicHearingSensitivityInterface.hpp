#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBasicHearingSensitivityInterface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBasicHearingSensitivityInterface
{
public:

    // RVA: 0xD9 | Ordinal: 218
        void avBasicHearingSensitivityInterface(void);

    // RVA: 0xEA2 | Ordinal: 3747
        void get_anoxemia_data(unsigned int) const;

    // RVA: 0x11A7 | Ordinal: 4520
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14D7 | Ordinal: 5336
        void post_initialize(void);

    // RVA: 0x15AA | Ordinal: 5547
        void release(void);

    // RVA: 0x1AA4 | Ordinal: 6821
        void update(void);

    // RVA: 0x1B0D | Ordinal: 6926
        void updateDepressurizationHearingSensitivity(double const &, double const &);

    // RVA: 0x1B23 | Ordinal: 6948
        void updateOverloadHearingSensitivity(void);

    // RVA: 0x1B2C | Ordinal: 6957
        void updateStarvationHearingSensitivity(int);

    // RVA: 0x1B37 | Ordinal: 6968
        void updateWoundData(unsigned int);

    // RVA: 0x2E7 | Ordinal: 744
        void _avBasicHearingSensitivityInterface(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASICHEARINGSENSITIVITYINTERFACE_HPP
