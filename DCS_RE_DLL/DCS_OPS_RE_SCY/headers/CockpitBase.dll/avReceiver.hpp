#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avReceiver
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avReceiver
{
public:

    // RVA: 0x90E | Ordinal: 2319
        void addStaticSoundSource(class Sounder::Source &);

    // RVA: 0x190 | Ordinal: 401
        void avReceiver(void);

    // RVA: 0xB53 | Ordinal: 2900
        void damageAntenna(bool);

    // RVA: 0xC00 | Ordinal: 3073
        void finishMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0xC35 | Ordinal: 3126
        void getAGC(void) const;

    // RVA: 0xC4F | Ordinal: 3152
        void getBandwidth(void) const;

    // RVA: 0xC5F | Ordinal: 3168
        void getChannel(void) const;

    // RVA: 0xC69 | Ordinal: 3178
        void getCommandedFrequency(void) const;

    // RVA: 0xCB7 | Ordinal: 3256
        void getFrequency(void) const;

    // RVA: 0xCBF | Ordinal: 3264
        void getGain(double, double, double) const;

    // RVA: 0xCC0 | Ordinal: 3265
        void getGainToNoiseRatio(double, double) const;

    // RVA: 0xD02 | Ordinal: 3331
        void getID(void) const;

    // RVA: 0xD61 | Ordinal: 3426
        void getModulation(void) const;

    // RVA: 0xD67 | Ordinal: 3432
        void getMuteIsOn(void) const;

    // RVA: 0xD73 | Ordinal: 3444
        void getNoiseSoundLevel(void) const;

    // RVA: 0xD76 | Ordinal: 3447
        void getOnwerUnitCommunicator(void);

    // RVA: 0xD77 | Ordinal: 3448
        void getOnwerUnitPtr(void);

    // RVA: 0xD7E | Ordinal: 3455
        void getOutputSoundElement(void);

    // RVA: 0xD84 | Ordinal: 3461
        void getOwnerUnit(void) const;

    // RVA: 0xDBC | Ordinal: 3517
        void getReceiver(void) const;

    // RVA: 0xDE5 | Ordinal: 3558
        void getSignalHF(class wRadioTransmitter const *) const;

    // RVA: 0xDE6 | Ordinal: 3559
        void getSignalHF(void) const;

    // RVA: 0xDE7 | Ordinal: 3560
        void getSignalLF(class wRadioTransmitter const *) const;

    // RVA: 0xDE8 | Ordinal: 3561
        void getSignalLF(void) const;

    // RVA: 0xDE9 | Ordinal: 3562
        void getSignalLF_beforeAGC(void) const;

    // RVA: 0xDEA | Ordinal: 3563
        void getSignalPowerOnHF(class wRadioTransmitter const *);

    // RVA: 0xDEE | Ordinal: 3567
        void getSignalSoundLevel(unsigned int) const;

    // RVA: 0xDF5 | Ordinal: 3574
        void getSoundElement(void);

    // RVA: 0xE01 | Ordinal: 3586
        void getSquelchIsOn(void) const;

    // RVA: 0xE09 | Ordinal: 3594
        void getState(struct cockpit::avReceiver::State &);

    // RVA: 0xE50 | Ordinal: 3665
        void getVolume(void) const;

    // RVA: 0x11E2 | Ordinal: 4579
        void initialize(char const *, class Lua::Config &, class wRadioReceiver *);

    // RVA: 0x124B | Ordinal: 4684
        void isAntennaDamaged(void) const;

    // RVA: 0x1273 | Ordinal: 4724
        void isOn(void) const;

    // RVA: 0x1288 | Ordinal: 4745
        void isSignalReceived(void) const;

    // RVA: 0x131F | Ordinal: 4896
        void l_get_ptr(struct lua_State *);

    // RVA: 0x1326 | Ordinal: 4903
        void l_get_state(struct lua_State *);

    // RVA: 0x1366 | Ordinal: 4967
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x1418 | Ordinal: 5145
        void mute(bool);

    // RVA: 0x14BC | Ordinal: 5309
        void postInitialize(void);

    // RVA: 0x14BD | Ordinal: 5310
        void postInitialize_(void);

    // RVA: 0x153E | Ordinal: 5439
        void pushSamplesToRadiosKeeper(void) const;

    // RVA: 0x15C1 | Ordinal: 5570
        void release(void);

    // RVA: 0x16A4 | Ordinal: 5797
        void setBlanked(bool);

    // RVA: 0x16B0 | Ordinal: 5809
        void setChannel(int);

    // RVA: 0x170D | Ordinal: 5902
        void setFrequency(double);

    // RVA: 0x172A | Ordinal: 5931
        void setHighPassFilterFrequency(float);

    // RVA: 0x1748 | Ordinal: 5961
        void setLowPassFilterFrequency(float);

    // RVA: 0x175E | Ordinal: 5983
        void setModulation(enum wModulation);

    // RVA: 0x176D | Ordinal: 5998
        void setOnOff(bool);

    // RVA: 0x177C | Ordinal: 6013
        void setOwnerUnit(class MovingObject *);

    // RVA: 0x179B | Ordinal: 6044
        void setReceiver(class wRadioReceiver *);

    // RVA: 0x17B5 | Ordinal: 6070
        void setSquelchOnOff(bool);

    // RVA: 0x1800 | Ordinal: 6145
        void setVolume(float);

    // RVA: 0x1ACE | Ordinal: 6863
        void update(void);

    // RVA: 0x1B1F | Ordinal: 6944
        void updateMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x1B20 | Ordinal: 6945
        void updateMessages(void);

    // RVA: 0x1B28 | Ordinal: 6953
        void updateSignalPowerOnLF(class wRadioTransmitter const *);

    // RVA: 0x1B29 | Ordinal: 6954
        void updateSignalsPowerOnHF(void);

    // RVA: 0x33F | Ordinal: 832
        void _avReceiver(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVRECEIVER_HPP
