#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wAmmunitionDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunitionDescriptor
{
public:

    // RVA: 0x104 | Ordinal: 261
        void createClient(class MovingObject *, unsigned int, class Lua::Loader *) const;

    // RVA: 0x109 | Ordinal: 266
        void createServer(class MovingObject *, class Lua::Loader *) const;

    // RVA: 0x10A | Ordinal: 267
        void create_(void) const;

    // RVA: 0x134 | Ordinal: 309
        void getAttributes(void) const;

    // RVA: 0x142 | Ordinal: 323
        void getCaliber(void) const;

    // RVA: 0x152 | Ordinal: 339
        void getCxCoeff(void) const;

    // RVA: 0x160 | Ordinal: 353
        void getDrawArgs(bool) const;

    // RVA: 0x188 | Ordinal: 393
        void getI(void) const;

    // RVA: 0x193 | Ordinal: 404
        void getLength(void) const;

    // RVA: 0x196 | Ordinal: 407
        void getMass(void) const;

    // RVA: 0x19A | Ordinal: 411
        void getModel(void) const;

    // RVA: 0x1AB | Ordinal: 428
        void getRCS(void) const;

    // RVA: 0x1BA | Ordinal: 443
        void getSkinArgVal(void) const;

    // RVA: 0x1BC | Ordinal: 445
        void getSounderName(void) const;

    // RVA: 0x1C0 | Ordinal: 449
        void getSystemScheme(bool) const;

    // RVA: 0x1C6 | Ordinal: 455
        void getType(void) const;

    // RVA: 0x1EF | Ordinal: 496
        void initDrawArgs_(class wSimulationSystemScheme const *, class ed::vector<int, class ed::allocator<int>> &);

    // RVA: 0x20F | Ordinal: 528
        void load(class wDatabaseLoader *);

    // RVA: 0x18 | Ordinal: 25
        void wAmmunitionDescriptor(class wAmmunitionDescriptor const &);

    // RVA: 0x19 | Ordinal: 26
        void wAmmunitionDescriptor(class ed::basic_string<char> const &);

    // RVA: 0x52 | Ordinal: 83
        void _wAmmunitionDescriptor(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WAMMUNITIONDESCRIPTOR_HPP
