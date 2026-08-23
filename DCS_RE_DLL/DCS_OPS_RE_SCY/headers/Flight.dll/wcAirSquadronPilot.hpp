#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wcAirSquadronPilot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wcAirSquadronPilot
{
public:

    // RVA: 0xF3 | Ordinal: 244
        void addPilotKillData(struct PilotKillData const &);

    // RVA: 0xF5 | Ordinal: 246
        void addPilotLandingData(struct PilotLandingData const &);

    // RVA: 0x242 | Ordinal: 579
        void isLocalPlayer(void);

    // RVA: 0x255 | Ordinal: 598
        void isSquadronCommander(void);

    // RVA: 0x1E | Ordinal: 31
        void wcAirSquadronPilot(class wcAirSquadronPilot const &);

    // RVA: 0x1F | Ordinal: 32
        void wcAirSquadronPilot(class wcAirSquadron *, class ed::basic_string<char> const &, class ed::basic_string<char> const &, int, class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, unsigned int, unsigned int);

    // RVA: 0x39 | Ordinal: 58
        void _wcAirSquadronPilot(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WCAIRSQUADRONPILOT_HPP
