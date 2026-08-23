#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponsBase.dll
// Class: wShellGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wShellGroup
{
public:

    // RVA: 0x21A | Ordinal: 539
        void makeObjectStep_(class wShell *, double);

    // RVA: 0x21B | Ordinal: 540
        void makeSmokeEffect(class osg::Vec3d const &, class osg::Vec3f const &, float, float, float);

    // RVA: 0x25D | Ordinal: 606
        void setExplosionListener(class wShellExplosionListener *);

    // RVA: 0x42 | Ordinal: 67
        void wShellGroup(double);

    // RVA: 0x43 | Ordinal: 68
        void wShellGroup(double, class wShellExplosionListener *);

    // RVA: 0x66 | Ordinal: 103
        void _wShellGroup(void);
};

// DCS_OPS_RE_WEAPONSBASE.DLL_WSHELLGROUP_HPP
