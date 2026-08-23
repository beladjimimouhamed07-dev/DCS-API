#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wCommunicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wCommunicator
{
public:

    // RVA: 0x1BB | Ordinal: 444
        void addCallback(class wRadioDevice::Callback *);

    // RVA: 0x1CE | Ordinal: 463
        void addTransiver(class IwTransiver *);

    // RVA: 0x1CF | Ordinal: 464
        void addUseBits(class IwTransiver const *, class std::bitset<32> &);

    // RVA: 0x1DC | Ordinal: 477
        void canBreakReceive(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x1DE | Ordinal: 479
        void canDelay(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x1DF | Ordinal: 480
        void canInterrupt(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x1E0 | Ordinal: 481
        void canReceiveFromByBandwidthAndSignal(class wRadioTransmitter *) const;

    // RVA: 0x1E3 | Ordinal: 484
        void canRemove(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x1E4 | Ordinal: 485
        void cannotInterruptReceive(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x1E7 | Ordinal: 488
        void checkMessageFilter(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x1EA | Ordinal: 491
        void checkMessageObsolence(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x1EC | Ordinal: 493
        void checkReceivingMessagesAfterFreqModulationChange(void);

    // RVA: 0x1F0 | Ordinal: 497
        void clear(void);

    // RVA: 0x1F1 | Ordinal: 498
        void clearMessageQueue(void);

    // RVA: 0x1F2 | Ordinal: 499
        void clearObsoleteMessages(void);

    // RVA: 0x1F3 | Ordinal: 500
        void clearReceivingMessages(void);

    // RVA: 0x203 | Ordinal: 516
        void destroyExternalXmitFinishActivity(void);

    // RVA: 0x204 | Ordinal: 517
        void directVoiceMessageInProgress(unsigned __int64) const;

    // RVA: 0x214 | Ordinal: 533
        void finalizeTransceiversToUseBits(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32> &) const;

    // RVA: 0x217 | Ordinal: 536
        void finishTransmission(bool, class std::bitset<32> const &);

    // RVA: 0x21A | Ordinal: 539
        void finishTransmissionByIdx(bool, unsigned __int64);

    // RVA: 0x21B | Ordinal: 540
        void finishTransmissionByIdx_asyncnet(bool, unsigned __int64);

    // RVA: 0x21C | Ordinal: 541
        void finishTransmissionByPtr(bool, class IwTransiver *);

    // RVA: 0x21E | Ordinal: 543
        void finishTransmissionByPtr_(bool, class IwTransiver *, bool);

    // RVA: 0x21F | Ordinal: 544
        void finishTransmissionOfMsg(bool, class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x228 | Ordinal: 553
        void getActiveMessagePtr(unsigned __int64) const;

    // RVA: 0x237 | Ordinal: 568
        void getById(unsigned int);

    // RVA: 0x246 | Ordinal: 583
        void getDefaultTransceiversBits(void) const;

    // RVA: 0x297 | Ordinal: 664
        void getMinSNR(void) const;

    // RVA: 0x29A | Ordinal: 667
        void getMostRecentActiveMessage(void) const;

    // RVA: 0x2B5 | Ordinal: 694
        void getReceiveCommNetFlags(void) const;

    // RVA: 0x2BA | Ordinal: 699
        void getReceivingMessages(void) const;

    // RVA: 0x2BD | Ordinal: 702
        void getSNR(class wRadioTransmitter const *, bool) const;

    // RVA: 0x2C5 | Ordinal: 710
        void getSpectrumSelectivity(class wRadioTransmitter const *) const;

    // RVA: 0x2DD | Ordinal: 734
        void getTransceiverIndex(class IwTransiver const *) const;

    // RVA: 0x2DE | Ordinal: 735
        void getTransceiverOwners(void);

    // RVA: 0x2DF | Ordinal: 736
        void getTransceiversCountForMsg(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x2E0 | Ordinal: 737
        void getTransceiversNum(void) const;

    // RVA: 0x2E1 | Ordinal: 738
        void getTransiver(int) const;

    // RVA: 0x2E2 | Ordinal: 739
        void getTransivers(void);

    // RVA: 0x2E3 | Ordinal: 740
        void getTransmitCommNetFlags(void) const;

    // RVA: 0x2FE | Ordinal: 767
        void howLongWaitForTransmission(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x326 | Ordinal: 807
        void initOnSelfCreate(void);

    // RVA: 0x32C | Ordinal: 813
        void interruptFinishingActivity(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x331 | Ordinal: 818
        void isDefaultAsyncnetTransmitBypassed(void) const;

    // RVA: 0x335 | Ordinal: 822
        void isMessageFromOwnObject(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &) const;

    // RVA: 0x336 | Ordinal: 823
        void isMessageLegible(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, bool);

    // RVA: 0x33D | Ordinal: 830
        void isReceiving(void) const;

    // RVA: 0x343 | Ordinal: 836
        void isTransmitting(class std::bitset<32> const &, unsigned char) const;

    // RVA: 0x344 | Ordinal: 837
        void isTransmitting(class IwTransiver *, unsigned char) const;

    // RVA: 0x345 | Ordinal: 838
        void isTransmitting(unsigned __int64, unsigned char) const;

    // RVA: 0x348 | Ordinal: 841
        void isWaitingForTransmission(void) const;

    // RVA: 0x34D | Ordinal: 846
        void makeAndTransmitMessage(enum wMsg, class Parameter const *);

    // RVA: 0x350 | Ordinal: 849
        void makeMessageData(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32> const &, struct wMessageData &) const;

    // RVA: 0x358 | Ordinal: 857
        void onReceiving(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, enum RadioMessageEvent, bool, bool);

    // RVA: 0x35A | Ordinal: 859
        void onSending(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, enum RadioMessageEvent);

    // RVA: 0x3BB | Ordinal: 956
        void procVoiceCommFinishMessage_asyncnet(bool, unsigned char);

    // RVA: 0x3BC | Ordinal: 957
        void procVoiceCommStartMessage_asyncnet(struct wMessageData const &);

    // RVA: 0x3BD | Ordinal: 958
        void procVoiceCommTransmitter_asyncnet(bool, int, unsigned char, float, double, float, enum wModulation);

    // RVA: 0x3C0 | Ordinal: 961
        void processMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x3C7 | Ordinal: 968
        void receiveMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, enum RadioMessageEvent);

    // RVA: 0x3D1 | Ordinal: 978
        void removeCallback(class wRadioDevice::Callback *);

    // RVA: 0x3DE | Ordinal: 991
        void removeTransiver(class IwTransiver *);

    // RVA: 0x3F1 | Ordinal: 1010
        void sendMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, enum RadioMessageEvent);

    // RVA: 0x3F3 | Ordinal: 1012
        void sendMessageFinish(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, bool);

    // RVA: 0x3F6 | Ordinal: 1015
        void sendVoiceCommChangeCommNetFlags_asyncnet(unsigned int, unsigned int);

    // RVA: 0x3F7 | Ordinal: 1016
        void sendVoiceCommFinishMessage_asyncnet(bool, unsigned char);

    // RVA: 0x3F8 | Ordinal: 1017
        void sendVoiceCommStartMessage_asyncnet(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32> const &);

    // RVA: 0x406 | Ordinal: 1031
        void setBypassDefaultAsyncnetTransmitExt(bool);

    // RVA: 0x409 | Ordinal: 1034
        void setCommandDialogsPanelisOn(bool);

    // RVA: 0x40D | Ordinal: 1038
        void setCurrentTransceiver(class IwTransiver *);

    // RVA: 0x40E | Ordinal: 1039
        void setDefaultTransceiversBits(class std::bitset<32> const &);

    // RVA: 0x41B | Ordinal: 1052
        void setExternalXmitFinishActivity(class wTime *);

    // RVA: 0x431 | Ordinal: 1074
        void setMsgStartTimeAndFinishingActivity(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, double);

    // RVA: 0x448 | Ordinal: 1097
        void setReceiveCommNetFlags(unsigned int);

    // RVA: 0x44F | Ordinal: 1104
        void setTransiver(class IwTransiver *, int);

    // RVA: 0x452 | Ordinal: 1107
        void setTransmitCommNetFlags(unsigned int);

    // RVA: 0x453 | Ordinal: 1108
        void setTransmitReceiveCommNetFlags(unsigned int);

    // RVA: 0x463 | Ordinal: 1124
        void startMessageTransmission(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32> const &, bool);

    // RVA: 0x467 | Ordinal: 1128
        void startTransmissionFromQueue(unsigned char);

    // RVA: 0x468 | Ordinal: 1129
        void startWaiting(double);

    // RVA: 0x47B | Ordinal: 1148
        void transmitMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32>);

    // RVA: 0x47C | Ordinal: 1149
        void transmitMessageNow(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32>);

    // RVA: 0x47D | Ordinal: 1150
        void transmitMessageNow_(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32>, bool);

    // RVA: 0x47E | Ordinal: 1151
        void transmitMessage_(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32>, bool);

    // RVA: 0x47F | Ordinal: 1152
        void transmitZeroDurationMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, class std::bitset<32> const &);

    // RVA: 0x483 | Ordinal: 1156
        void tryTransmitEnqueuedMessage(void);

    // RVA: 0x4BD | Ordinal: 1214
        void updateMostRecentActiveMessage(void);

    // RVA: 0x64 | Ordinal: 101
        void wCommunicator(enum wChannelType);

    // RVA: 0x65 | Ordinal: 102
        void wCommunicator(enum wChannelType, int, class MovingObject *, char const *);

    // RVA: 0xA6 | Ordinal: 167
        void _wCommunicator(void);
};

// DCS_OPS_RE_WRADIO.DLL_WCOMMUNICATOR_HPP
