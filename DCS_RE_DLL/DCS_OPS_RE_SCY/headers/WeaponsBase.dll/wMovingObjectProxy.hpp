#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wMovingObjectProxy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMovingObjectProxy
{
public:

    // RVA: 0xBC | Ordinal: 189
        void Class(void) const;

    // RVA: 0xBD | Ordinal: 190
        void GetDrawArguments(void);

    // RVA: 0xBE | Ordinal: 191
        void GetPoint(void);

    // RVA: 0xBF | Ordinal: 192
        void GetPosition(void);

    // RVA: 0xC1 | Ordinal: 194
        void Hrad(void);

    // RVA: 0xC3 | Ordinal: 196
        void LocalBox(double);

    // RVA: 0xC6 | Ordinal: 199
        void OnParentDeath(void);

    // RVA: 0xC7 | Ordinal: 200
        void Position(double);

    // RVA: 0xC9 | Ordinal: 202
        void UseChildren(double, enum viArgumentPurpose);

    // RVA: 0x15A | Ordinal: 347
        void getDetectable(void);

    // RVA: 0x1A7 | Ordinal: 424
        void getParent(void);

    // RVA: 0x257 | Ordinal: 600
        void setDrawArg(int, double);

    // RVA: 0x26A | Ordinal: 619
        void setLocalBox(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x26D | Ordinal: 622
        void setMaxDrawArgIndex(int);

    // RVA: 0x270 | Ordinal: 625
        void setModel(char const *);

    // RVA: 0x274 | Ordinal: 629
        void setParent(class viMovingObject *, bool);

    // RVA: 0x27E | Ordinal: 639
        void setPosition(double, class Math::Position<3, double, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x2E | Ordinal: 47
        void wMovingObjectProxy(void);

    // RVA: 0x5E | Ordinal: 95
        void _wMovingObjectProxy(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WMOVINGOBJECTPROXY_HPP
