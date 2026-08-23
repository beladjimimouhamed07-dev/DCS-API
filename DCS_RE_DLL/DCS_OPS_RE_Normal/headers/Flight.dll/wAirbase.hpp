#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wAirbase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAirbase
{
public:

    // RVA: 0x82 | Ordinal: 131
        void AddATC(int);

    // RVA: 0x83 | Ordinal: 132
        void AddATCComm(double, enum wModulation, int);

    // RVA: 0xA6 | Ordinal: 167
        void GetRunWaysCount(void) const;

    // RVA: 0xAA | Ordinal: 171
        void Get_ElevatorTaxis(void);

    // RVA: 0xAC | Ordinal: 173
        void Get_HelicopterTaxis(void);

    // RVA: 0xAE | Ordinal: 175
        void Get_Landing_Point(void);

    // RVA: 0xAF | Ordinal: 176
        void Get_Landing_Point(class wPosition3<float> *, unsigned int);

    // RVA: 0xB8 | Ordinal: 185
        void Get_TakeOff_Point(class wPosition3<float> *, unsigned int);

    // RVA: 0xBD | Ordinal: 190
        void Get_Taxis(void);

    // RVA: 0xBE | Ordinal: 191
        void Get_TaxisForTO(void);

    // RVA: 0xC0 | Ordinal: 193
        void Glide_Slope(unsigned int) const;

    // RVA: 0xDC | Ordinal: 221
        void _get_crew(class Mail::Reader &);

    // RVA: 0xDD | Ordinal: 222
        void _get_crew(unsigned char);

    // RVA: 0x104 | Ordinal: 261
        void canClientProceedToRunway(unsigned int);

    // RVA: 0x114 | Ordinal: 277
        void checkAnyTermForObject(unsigned int);

    // RVA: 0x127 | Ordinal: 296
        void clearLandingPlane(class MovingObject *);

    // RVA: 0x148 | Ordinal: 329
        void create_spawn_delegation(void);

    // RVA: 0x149 | Ordinal: 330
        void create_warehouse(class ed::basic_string<char> const &);

    // RVA: 0x16B | Ordinal: 364
        void getATC(void) const;

    // RVA: 0x16E | Ordinal: 367
        void getAirWing(void) const;

    // RVA: 0x185 | Ordinal: 390
        void getCommunicator(void);

    // RVA: 0x18C | Ordinal: 397
        void getDispatcherTower(class osg::Vec3f &) const;

    // RVA: 0x1BB | Ordinal: 444
        void getObject(void);

    // RVA: 0x1BD | Ordinal: 446
        void getOrbit(unsigned int) const;

    // RVA: 0x1C9 | Ordinal: 458
        void getRWdirForPurpose(enum wAirbase::E_RWdirPurpose, unsigned int) const;

    // RVA: 0x1E8 | Ordinal: 489
        void getTerminalByClient(unsigned int, bool);

    // RVA: 0x1F7 | Ordinal: 504
        void getTrendCoalition(void) const;

    // RVA: 0x1F8 | Ordinal: 505
        void getTrendCoalitionState(void) const;

    // RVA: 0x24B | Ordinal: 588
        void isRunWayOpen(void) const;

    // RVA: 0x26C | Ordinal: 621
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x26F | Ordinal: 624
        void netInitTrendCoalition(struct TrendInitState);

    // RVA: 0x270 | Ordinal: 625
        void netSendCreate(unsigned char);

    // RVA: 0x27D | Ordinal: 638
        void onMessage(unsigned int, enum ATCMessage);

    // RVA: 0x286 | Ordinal: 647
        void onWorldSpawnComplete(enum spawnStageCompletion);

    // RVA: 0x29A | Ordinal: 667
        void procCheckCrewHash(unsigned char, unsigned int, struct Mail::Info const &);

    // RVA: 0x29B | Ordinal: 668
        void procClientMessage(unsigned int, enum ATCMessage);

    // RVA: 0x29D | Ordinal: 670
        void procCrewAssignAircraft(unsigned int, unsigned char, bool, struct Mail::Info const &);

    // RVA: 0x29E | Ordinal: 671
        void procCrewMoveMember(unsigned char, float, unsigned char, class osg::Vec4f, class osg::Vec4f, struct Mail::Info const &);

    // RVA: 0x29F | Ordinal: 672
        void procCrewMoveMemberFinalPos(unsigned char, unsigned char, class osg::Vec4f, struct Mail::Info const &);

    // RVA: 0x2A0 | Ordinal: 673
        void procCrewMoveMemberStopAnim(unsigned char, float, unsigned char, class ed::basic_string<char> const &, class osg::Vec2f, struct Mail::Info const &);

    // RVA: 0x2A1 | Ordinal: 674
        void procCrewSendFullState(unsigned char, struct Mail::Info const &);

    // RVA: 0x2A3 | Ordinal: 676
        void procInitStatus(struct AirbaseInitState const &);

    // RVA: 0x2A7 | Ordinal: 680
        void procLSOSync(unsigned int, int, bool);

    // RVA: 0x2A9 | Ordinal: 682
        void procMarshalClient(unsigned int, int, bool);

    // RVA: 0x2AB | Ordinal: 684
        void procMsgCrewClientConnect(unsigned int, struct Mail::Info const &);

    // RVA: 0x2AC | Ordinal: 685
        void procMsgCrewConfigHash(unsigned int, struct Mail::Info const &);

    // RVA: 0x2AD | Ordinal: 686
        void procMsgCrewNetEvent(unsigned char, unsigned char, unsigned char, struct Mail::Info const &);

    // RVA: 0x2AE | Ordinal: 687
        void procMsgCrewRunwaySafe(unsigned char, struct Mail::Info const &);

    // RVA: 0x2AF | Ordinal: 688
        void procMsgTakeoffCrewDebugStateEnable(class Mail::Reader, struct Mail::Info const &);

    // RVA: 0x2B0 | Ordinal: 689
        void procMsgTakeoffCrewDistRemain(unsigned int, float, struct Mail::Info const &);

    // RVA: 0x2B1 | Ordinal: 690
        void procMsgTakeoffCrewMemberLocks(class Mail::Reader, struct Mail::Info const &);

    // RVA: 0x2B2 | Ordinal: 691
        void procMsgTakeoffCrewRearmRefuelDlgCancelBtn(struct Mail::Info const &);

    // RVA: 0x2B3 | Ordinal: 692
        void procMsgTakeoffCrewRemoveTaskLocks(unsigned char, struct Mail::Info const &);

    // RVA: 0x2B4 | Ordinal: 693
        void procMsgTakeoffCrewTaskState(class Mail::Reader, struct Mail::Info const &);

    // RVA: 0x2B6 | Ordinal: 695
        void procRequestTerminalForSpawn(unsigned int, unsigned int, class ed::basic_string<char>, float);

    // RVA: 0x2B9 | Ordinal: 698
        void procSendRadioMessage(unsigned int, enum wMsg);

    // RVA: 0x2BB | Ordinal: 700
        void procSetClientStatus(unsigned int, enum ClientStatus);

    // RVA: 0x2BD | Ordinal: 702
        void procSetCoalition(enum wcCoalitionName);

    // RVA: 0x2BE | Ordinal: 703
        void procSetInitCoalition(enum wcCoalitionName);

    // RVA: 0x2C2 | Ordinal: 707
        void procSyncCrewMembersPos(class Mail::Reader, struct Mail::Info const &);

    // RVA: 0x2C3 | Ordinal: 708
        void procSyncCrewState(class Mail::Reader, struct Mail::Info const &);

    // RVA: 0x2C4 | Ordinal: 709
        void procSyncTakeoffCrew(class Mail::Reader, struct Mail::Info const &);

    // RVA: 0x2C5 | Ordinal: 710
        void procSyncTakeoffCrewAddClient(unsigned int, unsigned char, unsigned char, struct Mail::Info const &);

    // RVA: 0x2C6 | Ordinal: 711
        void procTakeoffCrewLockMember(unsigned char, unsigned char, bool, struct Mail::Info const &);

    // RVA: 0x2C7 | Ordinal: 712
        void procTakeoffCrewLockMemberReply(unsigned char, unsigned char, struct Mail::Info const &);

    // RVA: 0x2C8 | Ordinal: 713
        void procTerminalStatus(unsigned int, int, int, bool);

    // RVA: 0x2CA | Ordinal: 715
        void processATCLandingData(struct PilotLandingData const &);

    // RVA: 0x2CF | Ordinal: 720
        void radioDeviceCallbackPtr(void);

    // RVA: 0x2EB | Ordinal: 748
        void sendToPatternInitStatus(struct AirbaseInitState const &);

    // RVA: 0x2F0 | Ordinal: 753
        void setAirWing(class wcAirWing *);

    // RVA: 0x2FA | Ordinal: 763
        void setCoalition(enum wcCoalitionName);

    // RVA: 0x306 | Ordinal: 775
        void setInitCoalition(enum wcCoalitionName);

    // RVA: 0x30A | Ordinal: 779
        void setLandingPlane(class MovingObject *);

    // RVA: 0x312 | Ordinal: 787
        void setState(unsigned char);

    // RVA: 0x31A | Ordinal: 795
        void setTrendCoalition(int, enum wcCoalitionName, char);

    // RVA: 0x15 | Ordinal: 22
        void wAirbase(void);

    // RVA: 0x32 | Ordinal: 51
        void _wAirbase(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WAIRBASE_HPP
