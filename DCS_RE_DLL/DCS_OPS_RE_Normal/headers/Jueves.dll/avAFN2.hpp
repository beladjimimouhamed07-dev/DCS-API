#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avAFN2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAFN2
{
public:

    // RVA: 0x98 | Ordinal: 153
        void avAFN2(void);

    // RVA: 0x2FC | Ordinal: 765
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x3AA | Ordinal: 939
        void getReading(enum cockpit::avAFN2::Channels);

    // RVA: 0x413 | Ordinal: 1044
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x455 | Ordinal: 1110
        void mute(bool);

    // RVA: 0x488 | Ordinal: 1161
        void onCircuitPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x48B | Ordinal: 1164
        void onCircuitPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x4AF | Ordinal: 1200
        void post_initialize(void);

    // RVA: 0x4EA | Ordinal: 1259
        void release(void);

    // RVA: 0x513 | Ordinal: 1300
        void repair(void);

    // RVA: 0x54E | Ordinal: 1359
        void setFrequency(double);

    // RVA: 0x5A1 | Ordinal: 1442
        void setVolume(float);

    // RVA: 0x5B1 | Ordinal: 1458
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x61D | Ordinal: 1566
        void update(void);

    // RVA: 0x123 | Ordinal: 292
        void _avAFN2(void);
};

} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVAFN2_HPP
