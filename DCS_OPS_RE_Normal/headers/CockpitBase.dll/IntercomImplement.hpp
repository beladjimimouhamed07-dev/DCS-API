#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: IntercomImplement
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class IntercomImplement
{
public:

    // RVA: 0x66 | Ordinal: 103
        void IntercomImplement(void);

    // RVA: 0xD46 | Ordinal: 3399
        void getMainRegulator(void);

    // RVA: 0xD49 | Ordinal: 3402
        void getMainSwitcher(void);

    // RVA: 0xD70 | Ordinal: 3441
        void getNoiseSoundLevel(void) const;

    // RVA: 0xDEB | Ordinal: 3564
        void getSignalSoundLevel(unsigned int) const;

    // RVA: 0xE1A | Ordinal: 3611
        void getTelephoneSndElement(void);

    // RVA: 0x118B | Ordinal: 4492
        void initialize(class ed::basic_string<char> const &);

    // RVA: 0x126E | Ordinal: 4719
        void isOn(void) const;

    // RVA: 0x1291 | Ordinal: 4754
        void isWireCommOn(void) const;

    // RVA: 0x1295 | Ordinal: 4758
        void isWireCommTransmitOn(void) const;

    // RVA: 0x1459 | Ordinal: 5210
        void onToggleCommMenuCommand(void);

    // RVA: 0x14C3 | Ordinal: 5316
        void post_initialize(class ed::basic_string<char> const &, unsigned char, struct lua_State *);

    // RVA: 0x153A | Ordinal: 5435
        void pushReceiver(class cockpit::avReceiver *);

    // RVA: 0x1547 | Ordinal: 5448
        void pushToTalk(bool);

    // RVA: 0x159D | Ordinal: 5534
        void release(void);

    // RVA: 0x1622 | Ordinal: 5667
        void resetCommunicator(void);

    // RVA: 0x16BE | Ordinal: 5823
        void setCommunicator(class cockpit::avCommunicator *);

    // RVA: 0x1B0A | Ordinal: 6923
        void updateCurrentCommunicator(void);

    // RVA: 0x1B2D | Ordinal: 6958
        void updateState(void);

    // RVA: 0x1B34 | Ordinal: 6965
        void updateWireCommState(void);

    // RVA: 0x2AE | Ordinal: 687
        void _IntercomImplement(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_INTERCOMIMPLEMENT_HPP
