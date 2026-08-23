#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avIntercomV2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avIntercomV2
{
public:

    // RVA: 0x885 | Ordinal: 2182
        void SetCommand(int, float);

    // RVA: 0x13B | Ordinal: 316
        void avIntercomV2(void);

    // RVA: 0xBC0 | Ordinal: 3009
        void easyCommOverride(unsigned int);

    // RVA: 0xD48 | Ordinal: 3401
        void getMainRegulator(void);

    // RVA: 0xD4B | Ordinal: 3404
        void getMainSwitcher(void);

    // RVA: 0xD72 | Ordinal: 3443
        void getNoiseSoundLevel(void) const;

    // RVA: 0xDED | Ordinal: 3566
        void getSignalSoundLevel(unsigned int) const;

    // RVA: 0xE1C | Ordinal: 3613
        void getTelephoneSndElement(void);

    // RVA: 0x11C7 | Ordinal: 4552
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1254 | Ordinal: 4693
        void isCommunicatorAvailable(unsigned int);

    // RVA: 0x1271 | Ordinal: 4722
        void isOn(void) const;

    // RVA: 0x1293 | Ordinal: 4756
        void isWireCommOn(void) const;

    // RVA: 0x1297 | Ordinal: 4760
        void isWireCommTransmitOn(void) const;

    // RVA: 0x12FA | Ordinal: 4859
        void l_easy_comm_override(struct lua_State *);

    // RVA: 0x131B | Ordinal: 4892
        void l_get_noise_level(struct lua_State *);

    // RVA: 0x1323 | Ordinal: 4900
        void l_get_signal_level(struct lua_State *);

    // RVA: 0x1330 | Ordinal: 4913
        void l_is_communicator_available(struct lua_State *);

    // RVA: 0x133A | Ordinal: 4923
        void l_make_setup_for_communicator(struct lua_State *);

    // RVA: 0x1363 | Ordinal: 4964
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x1374 | Ordinal: 4981
        void l_set_communicator(struct lua_State *);

    // RVA: 0x13F2 | Ordinal: 5107
        void makeSetupForCommunicator(unsigned int);

    // RVA: 0x14EB | Ordinal: 5356
        void post_initialize(void);

    // RVA: 0x153C | Ordinal: 5437
        void pushReceiver(class cockpit::avReceiver *);

    // RVA: 0x1549 | Ordinal: 5450
        void pushToTalk(bool);

    // RVA: 0x15B6 | Ordinal: 5559
        void release(void);

    // RVA: 0x1624 | Ordinal: 5669
        void resetCommunicator(void);

    // RVA: 0x16C0 | Ordinal: 5825
        void setCommunicator(class cockpit::avCommunicator *);

    // RVA: 0x1A5C | Ordinal: 6749
        void trySetCommunicator(unsigned int);

    // RVA: 0x1B2F | Ordinal: 6960
        void updateState(void);

    // RVA: 0x1B36 | Ordinal: 6967
        void updateWireCommState(void);

    // RVA: 0x316 | Ordinal: 791
        void _avIntercomV2(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVINTERCOMV2_HPP
