#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wWorldCollider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWorldCollider
{
public:

    // RVA: 0xF0 | Ordinal: 241
        void check(double, unsigned int, unsigned int, int, class Math::Vector<3, double> const *, class Math::Vector<3, double> const *, unsigned int *, double *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, char const **const, double, unsigned int, bool);

    // RVA: 0xF1 | Ordinal: 242
        void checkOneAccur(double, unsigned int, unsigned int, class Math::Vector<3, double> const *, class Math::Vector<3, double> const *, unsigned int *, double *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, char const **const, double, unsigned int, class Math::Vector<3, double>, int);

    // RVA: 0x234 | Ordinal: 565
        void processIntersection_(class ISceneObject const &);

    // RVA: 0x235 | Ordinal: 566
        void processIntersection_(class ISceneObject const &, int, double, bool);

    // RVA: 0x44 | Ordinal: 69
        void wWorldCollider(void);

    // RVA: 0x67 | Ordinal: 104
        void _wWorldCollider(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WWORLDCOLLIDER_HPP
