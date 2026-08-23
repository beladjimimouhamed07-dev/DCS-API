#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBiruzaGuidanceModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBiruzaGuidanceModule
{
public:

    // RVA: 0x874 | Ordinal: 2165
        void SetCommand(int, float);

    // RVA: 0xE2 | Ordinal: 227
        void avBiruzaGuidanceModule(class cockpit::avBiruzaGuidanceModule &&);

    // RVA: 0xE3 | Ordinal: 228
        void avBiruzaGuidanceModule(void);

    // RVA: 0xC3B | Ordinal: 3132
        void getAircraftTransponderInfo(void);

    // RVA: 0xD2D | Ordinal: 3374
        void getLastGuidanceData(void) const;

    // RVA: 0x1117 | Ordinal: 4376
        void hasValidGuidanceData(void) const;

    // RVA: 0x11AB | Ordinal: 4524
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x125D | Ordinal: 4702
        void isGuidanceSignalOnline(void) const;

    // RVA: 0x149E | Ordinal: 5279
        void parseGuidanceMessage(class ed::basic_string<char> const &);

    // RVA: 0x14D9 | Ordinal: 5338
        void post_initialize(void);

    // RVA: 0x1525 | Ordinal: 5414
        void processGuidanceMessage(class ed::basic_string<char> const &);

    // RVA: 0x1526 | Ordinal: 5415
        void processIncomingMessages(void);

    // RVA: 0x15AB | Ordinal: 5548
        void release(void);

    // RVA: 0x1681 | Ordinal: 5762
        void sendAircraftTransponderMessage(void);

    // RVA: 0x1682 | Ordinal: 5763
        void sendNetMessage(bool);

    // RVA: 0x16B2 | Ordinal: 5811
        void setChannelNum(int);

    // RVA: 0x1AA7 | Ordinal: 6824
        void update(void);

    // RVA: 0x1B0C | Ordinal: 6925
        void updateDatalinkFrequency(void);

    // RVA: 0x2ED | Ordinal: 750
        void _avBiruzaGuidanceModule(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBIRUZAGUIDANCEMODULE_HPP
