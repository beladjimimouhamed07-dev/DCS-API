#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wcAirWing
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wcAirWing
{
public:

    // RVA: 0xCB | Ordinal: 204
        void LogAirWingPilotData(char const *, struct AirWingPilotData const &);

    // RVA: 0xCC | Ordinal: 205
        void LuaFinish(void);

    // RVA: 0xCD | Ordinal: 206
        void LuaInit(void);

    // RVA: 0xD0 | Ordinal: 209
        void ParseServerConfig(class Lua::Config &);

    // RVA: 0xF0 | Ordinal: 241
        void addNewAirSquadron(class ed::basic_string<char> const &);

    // RVA: 0xF1 | Ordinal: 242
        void addNewPilot(class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, unsigned int, unsigned int, class wcAirSquadron *, unsigned int);

    // RVA: 0xF6 | Ordinal: 247
        void addPilotLandingData(struct PilotLandingData const &);

    // RVA: 0x16C | Ordinal: 365
        void getAirSquadron(class ed::basic_string<char> const &);

    // RVA: 0x16D | Ordinal: 366
        void getAirSquadron(unsigned int);

    // RVA: 0x16F | Ordinal: 368
        void getAirWing(class ed::basic_string<char> const &);

    // RVA: 0x170 | Ordinal: 369
        void getAirWingAndSquadronNames(unsigned int, unsigned int, class ed::basic_string<char> &, class ed::basic_string<char> &, class ed::basic_string<char> &);

    // RVA: 0x171 | Ordinal: 370
        void getAirbase(void);

    // RVA: 0x1AC | Ordinal: 429
        void getLocalPlayer(void);

    // RVA: 0x1AD | Ordinal: 430
        void getLocalPlayerAirSquadron(void);

    // RVA: 0x1AE | Ordinal: 431
        void getLuaState(void);

    // RVA: 0x1B8 | Ordinal: 441
        void getName(void);

    // RVA: 0x1C1 | Ordinal: 450
        void getPilotByMissionID(unsigned int);

    // RVA: 0x1C2 | Ordinal: 451
        void getPilotByName(class ed::basic_string<char> const &);

    // RVA: 0x294 | Ordinal: 661
        void pilotKillDataToLua(struct PilotKillData const &);

    // RVA: 0x295 | Ordinal: 662
        void pilotLandingDataToLua(struct PilotLandingData const &);

    // RVA: 0x2CB | Ordinal: 716
        void processATCLandingData(struct PilotLandingData const &);

    // RVA: 0x2CC | Ordinal: 717
        void processCarrierPilotKillData(struct PilotKillData const &);

    // RVA: 0x2E1 | Ordinal: 738
        void savePilotKillData(struct PilotKillData const &);

    // RVA: 0x2E2 | Ordinal: 739
        void savePilotLandingData(struct PilotLandingData const &);

    // RVA: 0x2E3 | Ordinal: 740
        void sel_on_event(class EventHandle const &);

    // RVA: 0x2E4 | Ordinal: 741
        void sel_reset(void);

    // RVA: 0x2E5 | Ordinal: 742
        void sel_start(void);

    // RVA: 0x2E6 | Ordinal: 743
        void sel_stop(void);

    // RVA: 0x2EF | Ordinal: 752
        void setActiveBriefingRoom(class wcAirSquadron *);

    // RVA: 0x2F1 | Ordinal: 754
        void setAirbase(class wAirbase *);

    // RVA: 0x340 | Ordinal: 833
        void useAirSquadronKills(class ed::basic_string<char> const &, class IBriefingRoom *);

    // RVA: 0x341 | Ordinal: 834
        void useAirSquadronLandings(class ed::basic_string<char> const &, class IBriefingRoom *);

    // RVA: 0x20 | Ordinal: 33
        void wcAirWing(class wcAirWing const &);

    // RVA: 0x21 | Ordinal: 34
        void wcAirWing(class wAirbase *, class ed::basic_string<char> const &);

    // RVA: 0x3A | Ordinal: 59
        void _wcAirWing(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WCAIRWING_HPP
