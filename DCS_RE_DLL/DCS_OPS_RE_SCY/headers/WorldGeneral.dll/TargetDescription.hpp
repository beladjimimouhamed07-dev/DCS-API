#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: TargetDescription
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TargetDescription
{
public:

    // RVA: 0x1A0 | Ordinal: 417
        void TargetDescription(class MovingObject *);

    // RVA: 0x1A1 | Ordinal: 418
        void TargetDescription(void);

    // RVA: 0x635 | Ordinal: 1590
        void build(class MovingObject *);

    // RVA: 0x6E6 | Ordinal: 1767
        void convertTypeToString(enum TargetDescription::Type);

    // RVA: 0x7AA | Ordinal: 1963
        void findType_(class cPointerTemplate<class MovingObject> const &, struct TargetDescription::Rules::ClassData const &, enum TargetDescription::Type, unsigned int);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_TARGETDESCRIPTION_HPP
