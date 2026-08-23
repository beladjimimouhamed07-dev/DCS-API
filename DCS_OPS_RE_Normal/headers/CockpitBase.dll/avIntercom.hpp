#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avIntercom
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avIntercom
{
public:

    // RVA: 0x884 | Ordinal: 2181
        void SetCommand(int, float);

    // RVA: 0x139 | Ordinal: 314
        void avIntercom(class cockpit::avIntercom &&);

    // RVA: 0x13A | Ordinal: 315
        void avIntercom(void);

    // RVA: 0xBBF | Ordinal: 3008
        void easyCommOverride(unsigned int);

    // RVA: 0xD47 | Ordinal: 3400
        void getMainRegulator(void);

    // RVA: 0xD4A | Ordinal: 3403
        void getMainSwitcher(void);

    // RVA: 0xD71 | Ordinal: 3442
        void getNoiseSoundLevel(void) const;

    // RVA: 0xDEC | Ordinal: 3565
        void getSignalSoundLevel(unsigned int) const;

    // RVA: 0xE1B | Ordinal: 3612
        void getTelephoneSndElement(void);

    // RVA: 0x11C6 | Ordinal: 4551
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1253 | Ordinal: 4692
        void isCommunicatorAvailable(unsigned int);

    // RVA: 0x1270 | Ordinal: 4721
        void isOn(void) const;

    // RVA: 0x1292 | Ordinal: 4755
        void isWireCommOn(void) const;

    // RVA: 0x1296 | Ordinal: 4759
        void isWireCommTransmitOn(void) const;

    // RVA: 0x12F9 | Ordinal: 4858
        void l_easy_comm_override(struct lua_State *);

    // RVA: 0x131A | Ordinal: 4891
        void l_get_noise_level(struct lua_State *);

    // RVA: 0x1322 | Ordinal: 4899
        void l_get_signal_level(struct lua_State *);

    // RVA: 0x132F | Ordinal: 4912
        void l_is_communicator_available(struct lua_State *);

    // RVA: 0x1339 | Ordinal: 4922
        void l_make_setup_for_communicator(struct lua_State *);

    // RVA: 0x1362 | Ordinal: 4963
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x1373 | Ordinal: 4980
        void l_set_communicator(struct lua_State *);

    // RVA: 0x13F1 | Ordinal: 5106
        void makeSetupForCommunicator(unsigned int);

    // RVA: 0x14EA | Ordinal: 5355
        void post_initialize(void);

    // RVA: 0x153B | Ordinal: 5436
        void pushReceiver(class cockpit::avReceiver *);

    // RVA: 0x1548 | Ordinal: 5449
        void pushToTalk(bool);

    // RVA: 0x15B5 | Ordinal: 5558
        void release(void);

    // RVA: 0x1623 | Ordinal: 5668
        void resetCommunicator(void);

    // RVA: 0x16BF | Ordinal: 5824
        void setCommunicator(class cockpit::avCommunicator *);

    // RVA: 0x1A5B | Ordinal: 6748
        void trySetCommunicator(unsigned int);

    // RVA: 0x1B2E | Ordinal: 6959
        void updateState(void);

    // RVA: 0x1B35 | Ordinal: 6966
        void updateWireCommState(void);

    // RVA: 0x315 | Ordinal: 790
        void _avIntercom(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVINTERCOM_HPP
