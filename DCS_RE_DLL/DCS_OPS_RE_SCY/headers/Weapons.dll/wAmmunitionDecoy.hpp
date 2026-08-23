#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wAmmunitionDecoy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunitionDecoy
{
public:

    // RVA: 0x1E5 | Ordinal: 486
        void OnNetworkMessage(struct DecoyNetMessage const &);

    // RVA: 0x227 | Ordinal: 552
        void addSnare(unsigned int, double);

    // RVA: 0x228 | Ordinal: 553
        void addSpawnPos(class Math::Vector<3, double> const &);

    // RVA: 0x2EA | Ordinal: 747
        void createDecoy(int, char);

    // RVA: 0x495 | Ordinal: 1174
        void initCommon_(class MovingObject *, class wAmmunitionDescriptor const *);

    // RVA: 0x653 | Ordinal: 1620
        void simulate(void);

    // RVA: 0x65D | Ordinal: 1630
        void spawnSnare(bool);

    // RVA: 0x3C | Ordinal: 61
        void wAmmunitionDecoy(void);

    // RVA: 0x73 | Ordinal: 116
        void _wAmmunitionDecoy(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WAMMUNITIONDECOY_HPP
