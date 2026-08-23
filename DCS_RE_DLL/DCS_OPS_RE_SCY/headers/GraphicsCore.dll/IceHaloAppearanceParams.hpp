#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: IceHaloAppearanceParams
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class IceHaloAppearanceParams
{
public:

    // RVA: 0x1F | Ordinal: 32
        void IceHaloAppearanceParams(void);

    // RVA: 0x22A | Ordinal: 555
        void printAsLua(void) const;

    // RVA: 0x234 | Ordinal: 565
        void readFromConfig(class Lua::Config &);

    // RVA: 0x274 | Ordinal: 629
        void setActiveCrystalTypes(unsigned int);

    // RVA: 0x280 | Ordinal: 641
        void setCrystalWeights(class ed::vector<float, class ed::allocator<float>>);

    // RVA: 0x299 | Ordinal: 666
        void setSunDiameter(float);
};

// DCS_OPS_RE_GRAPHICSCORE.DLL_ICEHALOAPPEARANCEPARAMS_HPP
