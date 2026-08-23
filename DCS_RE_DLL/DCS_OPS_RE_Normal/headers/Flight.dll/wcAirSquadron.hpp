#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wcAirSquadron
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wcAirSquadron
{
public:

    // RVA: 0xF2 | Ordinal: 243
        void addPilotKillData(class wcAirSquadronPilot *, struct PilotKillData const &);

    // RVA: 0xF4 | Ordinal: 245
        void addPilotLandingData(class wcAirSquadronPilot *, struct PilotLandingData const &);

    // RVA: 0x101 | Ordinal: 258
        void buildBriefingRoom(void);

    // RVA: 0x179 | Ordinal: 378
        void getBriefingRoom(void);

    // RVA: 0x184 | Ordinal: 389
        void getCommander(void);

    // RVA: 0x1C3 | Ordinal: 452
        void getPilotIndex(class ed::basic_string<char> const &);

    // RVA: 0x2FD | Ordinal: 766
        void setCommander(class wcAirSquadronPilot *);

    // RVA: 0x1C | Ordinal: 29
        void wcAirSquadron(class wcAirSquadron const &);

    // RVA: 0x1D | Ordinal: 30
        void wcAirSquadron(class wcAirWing *, class ed::basic_string<char> const &);

    // RVA: 0x38 | Ordinal: 57
        void _wcAirSquadron(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WCAIRSQUADRON_HPP
