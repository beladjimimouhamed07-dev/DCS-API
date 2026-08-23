#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wShellDescriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wShellDescriptor
{
public:

    // RVA: 0x133 | Ordinal: 308
        void getAnimDesc(void) const;

    // RVA: 0x19B | Ordinal: 412
        void getModel(void) const;

    // RVA: 0x20B | Ordinal: 524
        void launch(class wShellGroup *, bool, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, unsigned int, struct wShellCoefficients const &, enum wcCoalitionName, unsigned char, double, unsigned int, class Math::Vector<3, double> const &) const;

    // RVA: 0x214 | Ordinal: 533
        void load(class wDatabaseLoader *);

    // RVA: 0x3C | Ordinal: 61
        void wShellDescriptor(class wShellDescriptor &&);

    // RVA: 0x3D | Ordinal: 62
        void wShellDescriptor(class wShellDescriptor const &);

    // RVA: 0x3E | Ordinal: 63
        void wShellDescriptor(class ed::basic_string<char> const &);

    // RVA: 0x65 | Ordinal: 102
        void _wShellDescriptor(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WSHELLDESCRIPTOR_HPP
