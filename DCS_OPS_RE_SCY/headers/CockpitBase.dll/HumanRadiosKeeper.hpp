#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: HumanRadiosKeeper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class HumanRadiosKeeper
{
public:

    // RVA: 0x906 | Ordinal: 2311
        void addParameterChangeHandler(class std::function<void __cdecl(unsigned __int64, enum cockpit::HumanRadiosKeeper::RADIO_PARAMETERS)>);

    // RVA: 0x90B | Ordinal: 2316
        void addSingletonParameterChangeHandler(class std::function<void __cdecl(enum cockpit::HumanRadiosKeeper::RADIO_PARAMETERS_SINGLETONS)>);

    // RVA: 0xA2D | Ordinal: 2606
        void checkAndCallHandler(unsigned __int64, enum cockpit::HumanRadiosKeeper::RADIO_PARAMETERS, double);

    // RVA: 0xA5A | Ordinal: 2651
        void checkRadioIndex(int);

    // RVA: 0xAB3 | Ordinal: 2740
        void clear(void);

    // RVA: 0xB30 | Ordinal: 2865
        void createDynamicRadio(class cPointerTemplate<class MovingObject> const &, struct cockpit::HumanRadiosKeeper::Preset const &, enum cockpit::HumanRadiosKeeper::RADIO_TYPES);

    // RVA: 0xB31 | Ordinal: 2866
        void createDynamicRadio(class cPointerTemplate<class MovingObject> const &, class ed::basic_string<char> const &, enum cockpit::HumanRadiosKeeper::RADIO_TYPES);

    // RVA: 0xBEF | Ordinal: 3056
        void finalizeRadioPresetsPaths(void);

    // RVA: 0xC5E | Ordinal: 3167
        void getChannel(unsigned __int64);

    // RVA: 0xC6E | Ordinal: 3183
        void getCryptoKey(unsigned __int64);

    // RVA: 0xC73 | Ordinal: 3188
        void getCurrentTransmittingRadio(void);

    // RVA: 0xC78 | Ordinal: 3193
        void getCustomSampleGain(int, unsigned __int64);

    // RVA: 0xC79 | Ordinal: 3194
        void getCustomSamplePath(int, unsigned __int64);

    // RVA: 0xC7A | Ordinal: 3195
        void getCustomSamplePlaycount(int, unsigned __int64);

    // RVA: 0xC7B | Ordinal: 3196
        void getCustomSamples(int);

    // RVA: 0xC91 | Ordinal: 3218
        void getDynamicRadio(unsigned __int64);

    // RVA: 0xCA8 | Ordinal: 3241
        void getEncryptionEnabled(unsigned __int64);

    // RVA: 0xCA9 | Ordinal: 3242
        void getEncryptionPresent(unsigned __int64);

    // RVA: 0xCB6 | Ordinal: 3255
        void getFrequency(unsigned __int64);

    // RVA: 0xCCF | Ordinal: 3280
        void getGuardReceiver(unsigned __int64);

    // RVA: 0xCD0 | Ordinal: 3281
        void getGuardReceiverFrequency(unsigned __int64);

    // RVA: 0xCD1 | Ordinal: 3282
        void getGuardReceiverModulation(unsigned __int64);

    // RVA: 0xCD2 | Ordinal: 3283
        void getGuardReceiverOnOffStatus(unsigned __int64);

    // RVA: 0xCD3 | Ordinal: 3284
        void getGuardReceiverPresenceStatus(unsigned __int64);

    // RVA: 0xCFD | Ordinal: 3326
        void getHolderCoalition(void);

    // RVA: 0xCFE | Ordinal: 3327
        void getHolderCommunicator(void);

    // RVA: 0xD00 | Ordinal: 3329
        void getHotMikeEnabled(void);

    // RVA: 0xD01 | Ordinal: 3330
        void getHotMikeExternalControl(void);

    // RVA: 0xD0E | Ordinal: 3343
        void getIntercomIsPresent(void);

    // RVA: 0xD0F | Ordinal: 3344
        void getIntercomVolume(void);

    // RVA: 0xD17 | Ordinal: 3352
        void getIsExternallyControlled(unsigned __int64);

    // RVA: 0xD23 | Ordinal: 3364
        void getIsTransmissionEnabled(unsigned __int64);

    // RVA: 0xD24 | Ordinal: 3365
        void getIsTransmitting(unsigned __int64);

    // RVA: 0xD60 | Ordinal: 3425
        void getModulation(unsigned __int64);

    // RVA: 0xD69 | Ordinal: 3434
        void getName(unsigned __int64);

    // RVA: 0xD75 | Ordinal: 3446
        void getOnOffStatus(unsigned __int64);

    // RVA: 0xDAC | Ordinal: 3501
        void getRadioDisplayOrder(unsigned __int64);

    // RVA: 0xDAD | Ordinal: 3502
        void getRadioIdBy_avDevice_id(unsigned int);

    // RVA: 0xDAE | Ordinal: 3503
        void getRadioIdBy_avReceiver_id(int);

    // RVA: 0xDAF | Ordinal: 3504
        void getRadioPresetID(unsigned __int64);

    // RVA: 0xDB0 | Ordinal: 3505
        void getRadioPresetsPaths(void);

    // RVA: 0xDB2 | Ordinal: 3507
        void getRadioType(unsigned __int64);

    // RVA: 0xDBB | Ordinal: 3516
        void getReceiver(unsigned __int64, int);

    // RVA: 0xDBE | Ordinal: 3519
        void getReceiverName(class cockpit::avReceiver *);

    // RVA: 0xDBF | Ordinal: 3520
        void getRegisteredReceiversCount(void);

    // RVA: 0xDFB | Ordinal: 3580
        void getSoundVolume(unsigned __int64);

    // RVA: 0xE02 | Ordinal: 3587
        void getSquelchPresent(unsigned __int64);

    // RVA: 0xE03 | Ordinal: 3588
        void getSquelchStatus(unsigned __int64);

    // RVA: 0xE2C | Ordinal: 3629
        void getTransceiver(unsigned __int64, int);

    // RVA: 0xE31 | Ordinal: 3634
        void getTransmitterPower(unsigned __int64);

    // RVA: 0xEAC | Ordinal: 3757
        void get_avReceiverBy_VOIP_id(int);

    // RVA: 0x1121 | Ordinal: 4386
        void helper_lua_pushRadiosStatus(struct lua_State *, unsigned __int64);

    // RVA: 0x1133 | Ordinal: 4404
        void i_AddReceiver(unsigned int, int, bool);

    // RVA: 0x1134 | Ordinal: 4405
        void i_enableCrewComm(bool);

    // RVA: 0x1136 | Ordinal: 4407
        void i_enable_radio_for_transmission(unsigned int, bool);

    // RVA: 0x1135 | Ordinal: 4406
        void i_enable_radio_for_transmission2(unsigned int, bool);

    // RVA: 0x1137 | Ordinal: 4408
        void i_get_radio_idx_by_number_and_kind(unsigned __int64, bool);

    // RVA: 0x1138 | Ordinal: 4409
        void i_omitRadioRegistration(unsigned int, bool);

    // RVA: 0x1139 | Ordinal: 4410
        void i_overrideCrewCommVolume(float);

    // RVA: 0x113B | Ordinal: 4412
        void i_pushRadioName(unsigned int, class ed::basic_string<char> const &);

    // RVA: 0x113A | Ordinal: 4411
        void i_pushRadioName2(unsigned __int64, class ed::basic_string<char> const &);

    // RVA: 0x113C | Ordinal: 4413
        void i_registerRadio(unsigned int, int, enum cockpit::HumanRadiosKeeper::RADIO_CAPABILITIES);

    // RVA: 0x113D | Ordinal: 4414
        void i_setHotMikeEnabled(bool);

    // RVA: 0x113E | Ordinal: 4415
        void i_setHotMikeHasExternalControl(bool);

    // RVA: 0x113F | Ordinal: 4416
        void i_start_stop_nondynamic_radio_transmission(unsigned int, bool);

    // RVA: 0x1140 | Ordinal: 4417
        void i_start_transmission(int);

    // RVA: 0x1141 | Ordinal: 4418
        void i_stop_transmission(int);

    // RVA: 0x1223 | Ordinal: 4644
        void initializeAll(void);

    // RVA: 0x1224 | Ordinal: 4645
        void initializeContextIndependent(class cPointerTemplate<class MovingObject> const &, class ed::basic_string<char> const &);

    // RVA: 0x1225 | Ordinal: 4646
        void initializeContextIndependentLcl(class cPointerTemplate<class MovingObject> const &, struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x13CD | Ordinal: 5070
        void lua_getAllRadiosStatus(struct lua_State *);

    // RVA: 0x13CE | Ordinal: 5071
        void lua_getEncryptionEnabled(struct lua_State *);

    // RVA: 0x13CF | Ordinal: 5072
        void lua_getEncryptionPresent(struct lua_State *);

    // RVA: 0x13D0 | Ordinal: 5073
        void lua_getFrequency(struct lua_State *);

    // RVA: 0x13D1 | Ordinal: 5074
        void lua_getGuardReceiverFrequency(struct lua_State *);

    // RVA: 0x13D2 | Ordinal: 5075
        void lua_getGuardReceiverModulation(struct lua_State *);

    // RVA: 0x13D3 | Ordinal: 5076
        void lua_getGuardReceiverOnOffStatus(struct lua_State *);

    // RVA: 0x13D4 | Ordinal: 5077
        void lua_getGuardReceiverPresenceStatus(struct lua_State *);

    // RVA: 0x13D5 | Ordinal: 5078
        void lua_getIsExternallyControlled(struct lua_State *);

    // RVA: 0x13D6 | Ordinal: 5079
        void lua_getIsTransmissionEnabled(struct lua_State *);

    // RVA: 0x13D7 | Ordinal: 5080
        void lua_getIsTransmitting(struct lua_State *);

    // RVA: 0x13D8 | Ordinal: 5081
        void lua_getModulation(struct lua_State *);

    // RVA: 0x13D9 | Ordinal: 5082
        void lua_getOnOffStatus(struct lua_State *);

    // RVA: 0x13DA | Ordinal: 5083
        void lua_getRadioStatus(struct lua_State *);

    // RVA: 0x13DB | Ordinal: 5084
        void lua_getSoundVolume(struct lua_State *);

    // RVA: 0x13DC | Ordinal: 5085
        void lua_getSquelchPresent(struct lua_State *);

    // RVA: 0x13DD | Ordinal: 5086
        void lua_getSquelchStatus(struct lua_State *);

    // RVA: 0x13DE | Ordinal: 5087
        void lua_getTransmitterPower(struct lua_State *);

    // RVA: 0x13E0 | Ordinal: 5089
        void lua_setEncryptionEnabled(struct lua_State *);

    // RVA: 0x13E1 | Ordinal: 5090
        void lua_setFrequency(struct lua_State *);

    // RVA: 0x13E2 | Ordinal: 5091
        void lua_setGuardReceiverFrequency(struct lua_State *);

    // RVA: 0x13E3 | Ordinal: 5092
        void lua_setGuardReceiverModulation(struct lua_State *);

    // RVA: 0x13E4 | Ordinal: 5093
        void lua_setGuardReceiverOnOffStatus(struct lua_State *);

    // RVA: 0x13E5 | Ordinal: 5094
        void lua_setIsExternallyControlled(struct lua_State *);

    // RVA: 0x13E6 | Ordinal: 5095
        void lua_setModulation(struct lua_State *);

    // RVA: 0x13E7 | Ordinal: 5096
        void lua_setOnOffStatus(struct lua_State *);

    // RVA: 0x13E8 | Ordinal: 5097
        void lua_setSoundVolume(struct lua_State *);

    // RVA: 0x13E9 | Ordinal: 5098
        void lua_setSquelchStatus(struct lua_State *);

    // RVA: 0x13EA | Ordinal: 5099
        void lua_setTransmitterPower(struct lua_State *);

    // RVA: 0x142C | Ordinal: 5165
        void omitRadioRegistrationByDevicePtr(class cockpit::avDevice *, bool);

    // RVA: 0x1532 | Ordinal: 5427
        void pushCustomSample(int, class ed::basic_string<char> const &);

    // RVA: 0x1537 | Ordinal: 5432
        void pushRadioEntry(struct cockpit::HumanRadiosKeeper::RadioEntry);

    // RVA: 0x1538 | Ordinal: 5433
        void pushRadioNameByDevicePtr(class cockpit::avDevice *, class ed::basic_string<char> const &);

    // RVA: 0x1539 | Ordinal: 5434
        void pushRadioPresetPath(unsigned __int64, class ed::basic_string<char> const &);

    // RVA: 0x153D | Ordinal: 5438
        void pushReceiverForRadio(class cockpit::avReceiver *, class cockpit::avDevice *, bool, bool);

    // RVA: 0x1556 | Ordinal: 5463
        void radioIsNotExternallyRegistered(class cockpit::avDevice *);

    // RVA: 0x1582 | Ordinal: 5507
        void regLua(struct lua_State *);

    // RVA: 0x1589 | Ordinal: 5514
        void registerRadioByDevicePtr(class cockpit::avDevice *, int, enum cockpit::HumanRadiosKeeper::RADIO_CAPABILITIES);

    // RVA: 0x158B | Ordinal: 5516
        void register_avReceiver(class cockpit::avReceiver *);

    // RVA: 0x16AF | Ordinal: 5808
        void setChannel(unsigned __int64, unsigned int);

    // RVA: 0x16C9 | Ordinal: 5834
        void setCryptoKey(unsigned __int64, int);

    // RVA: 0x16CB | Ordinal: 5836
        void setCurrentRadio(unsigned __int64);

    // RVA: 0x16D0 | Ordinal: 5841
        void setCustomSampleGain(int, unsigned __int64, float);

    // RVA: 0x16D1 | Ordinal: 5842
        void setCustomSamplePlaycount(int, unsigned __int64, int);

    // RVA: 0x1705 | Ordinal: 5894
        void setEncryptionEnabled(unsigned __int64, bool);

    // RVA: 0x170B | Ordinal: 5900
        void setFrequency(unsigned __int64, double);

    // RVA: 0x1719 | Ordinal: 5914
        void setGuardReceiverFrequency(unsigned __int64, double);

    // RVA: 0x171A | Ordinal: 5915
        void setGuardReceiverModulation(unsigned __int64, char);

    // RVA: 0x171B | Ordinal: 5916
        void setGuardReceiverOnOffStatus(unsigned __int64, bool);

    // RVA: 0x1739 | Ordinal: 5946
        void setIsExternallyControlled(unsigned __int64, bool);

    // RVA: 0x175C | Ordinal: 5981
        void setModulation(unsigned __int64, char);

    // RVA: 0x176F | Ordinal: 6000
        void setOnOffStatus(unsigned __int64, int);

    // RVA: 0x17B1 | Ordinal: 6066
        void setSoundVolume(unsigned __int64, float);

    // RVA: 0x17B6 | Ordinal: 6071
        void setSquelchStatus(unsigned __int64, bool);

    // RVA: 0x17DE | Ordinal: 6111
        void setTransmitterPower(unsigned __int64, double);

    // RVA: 0x1828 | Ordinal: 6185
        void set_avTelephonePtr(class cockpit::avTelephone *);

    // RVA: 0x19DB | Ordinal: 6620
        void startUpdateActivity(void);

    // RVA: 0x1A01 | Ordinal: 6658
        void stopUpdateActivity(void);

    // RVA: 0x1A87 | Ordinal: 6792
        void update(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_HUMANRADIOSKEEPER_HPP
