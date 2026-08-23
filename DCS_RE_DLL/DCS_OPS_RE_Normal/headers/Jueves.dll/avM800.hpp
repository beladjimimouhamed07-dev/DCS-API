#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avM800
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avM800
{
public:

    // RVA: 0xC2 | Ordinal: 195
        void avM800(class cockpit::avM800 &&);

    // RVA: 0xC3 | Ordinal: 196
        void avM800(class cockpit::avM800 const &);

    // RVA: 0xC4 | Ordinal: 197
        void avM800(void);

    // RVA: 0x309 | Ordinal: 778
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x331 | Ordinal: 818
        void doSetCommand(int, float, bool, int);

    // RVA: 0x366 | Ordinal: 871
        void getDigitState(int) const;

    // RVA: 0x368 | Ordinal: 873
        void getDisplayBrightness(void) const;

    // RVA: 0x3C6 | Ordinal: 967
        void getTagVisibility(enum cockpit::avM800::M800DisplayModes) const;

    // RVA: 0x429 | Ordinal: 1066
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x45C | Ordinal: 1117
        void netPutFullState(void);

    // RVA: 0x478 | Ordinal: 1145
        void netRegisterControls(int);

    // RVA: 0x493 | Ordinal: 1172
        void onPin2Depowered(struct lwl::CSignalInfo const *);

    // RVA: 0x494 | Ordinal: 1173
        void onPin2Powered(struct lwl::CSignalInfo const *);

    // RVA: 0x4C2 | Ordinal: 1219
        void post_initialize(void);

    // RVA: 0x4E6 | Ordinal: 1255
        void reflectToCabin(void);

    // RVA: 0x51E | Ordinal: 1311
        void repair(void);

    // RVA: 0x539 | Ordinal: 1338
        void setCircuitryPower(bool);

    // RVA: 0x584 | Ordinal: 1413
        void setScreenPower(bool);

    // RVA: 0x5B9 | Ordinal: 1466
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x616 | Ordinal: 1559
        void trySetNextDisplayMode(void);

    // RVA: 0x631 | Ordinal: 1586
        void update(void);

    // RVA: 0x13B | Ordinal: 316
        void _avM800(void);
};

} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVM800_HPP
