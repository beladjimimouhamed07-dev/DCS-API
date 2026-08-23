#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: WorldGeneral
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class WorldGeneral
{
public:

    // RVA: 0xB01 | Ordinal: 2818
        void parseDamageCell(char const *);

    // RVA: 0xB02 | Ordinal: 2819
        void parseEffectType(char const *);

    // RVA: 0xB03 | Ordinal: 2820
        void parseExplosiveEffect(char const *);

    // RVA: 0xB04 | Ordinal: 2821
        void parseExplosiveMaterial(char const *);

    // RVA: 0xB06 | Ordinal: 2823
        void parseInnardLoosely(char **);

    // RVA: 0xB0A | Ordinal: 2827
        void parseProjectileType(char const *);

    // RVA: 0xB0B | Ordinal: 2828
        void parseTransmissionDesign(char const *);

    // RVA: 0xC5B | Ordinal: 3164
        void verboseDamageCell(int, class ed::basic_string<char> &);

    // RVA: 0xC5C | Ordinal: 3165
        void verboseEffectType(class ed::basic_string<char> &, enum WorldGeneral::EffectType, int);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WORLDGENERAL_HPP
