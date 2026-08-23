#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avCommunicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avCommunicator
{
public:

    // RVA: 0xEA | Ordinal: 235
        void avCommunicator(void);

    // RVA: 0xE05 | Ordinal: 3590
        void getState(struct cockpit::avCommunicator::State &);

    // RVA: 0xE2D | Ordinal: 3630
        void getTransceiverBits(void) const;

    // RVA: 0xE2E | Ordinal: 3631
        void getTransiver(void);

    // RVA: 0xE2F | Ordinal: 3632
        void getTransmitter(void) const;

    // RVA: 0x11AE | Ordinal: 4527
        void initialize(char const *, class Lua::Config &, class wRadioReceiver *, class wRadioTransmitter *);

    // RVA: 0x126F | Ordinal: 4720
        void isOn(void) const;

    // RVA: 0x1281 | Ordinal: 4738
        void isReceiverOn(void) const;

    // RVA: 0x128F | Ordinal: 4752
        void isTransmitterOn(void) const;

    // RVA: 0x1325 | Ordinal: 4902
        void l_get_state(struct lua_State *);

    // RVA: 0x135C | Ordinal: 4957
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x14BB | Ordinal: 5308
        void postInitialize(void);

    // RVA: 0x15AC | Ordinal: 5549
        void release(void);

    // RVA: 0x1625 | Ordinal: 5670
        void resetCurrent(void);

    // RVA: 0x16A2 | Ordinal: 5795
        void setAsCurrent(void);

    // RVA: 0x170C | Ordinal: 5901
        void setFrequency(double);

    // RVA: 0x175D | Ordinal: 5982
        void setModulation(enum wModulation);

    // RVA: 0x176B | Ordinal: 5996
        void setOnOff(bool);

    // RVA: 0x179C | Ordinal: 6045
        void setReceiverOnOff(bool);

    // RVA: 0x17DD | Ordinal: 6110
        void setTransmitterOnOff(bool);

    // RVA: 0x1B1E | Ordinal: 6943
        void updateMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x2F1 | Ordinal: 754
        void _avCommunicator(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVCOMMUNICATOR_HPP
