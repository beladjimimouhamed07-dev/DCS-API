#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: woFreeFall
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woFreeFall
{
public:

    // RVA: 0x53F | Ordinal: 1344
        void Class(void) const;

    // RVA: 0x552 | Ordinal: 1363
        void Create(unsigned long, class wPosition3<float> const &, class wsType const &, class Graphics::ModelInstance *);

    // RVA: 0x56A | Ordinal: 1387
        void GetDrawArguments(void);

    // RVA: 0x57F | Ordinal: 1408
        void GetPoint(double);

    // RVA: 0x580 | Ordinal: 1409
        void GetPoint(void);

    // RVA: 0x59F | Ordinal: 1440
        void Init(void);

    // RVA: 0x5B6 | Ordinal: 1463
        void LocalBox(double);

    // RVA: 0x5CD | Ordinal: 1486
        void Position(double);

    // RVA: 0x5E8 | Ordinal: 1513
        void SetShape(class wsType const &, class Graphics::ModelInstance *);

    // RVA: 0x5E9 | Ordinal: 1514
        void Set_DrawArgument(int, float);

    // RVA: 0x5EB | Ordinal: 1516
        void SpaceRegister(double);

    // RVA: 0x5EF | Ordinal: 1520
        void Status_Quo(double);

    // RVA: 0xB7C | Ordinal: 2941
        void resetActivityPointer(void);

    // RVA: 0xBAA | Ordinal: 2987
        void setFreeFall(unsigned long, class wPosition3<float> const &);

    // RVA: 0x213 | Ordinal: 532
        void woFreeFall(void);

    // RVA: 0x2E4 | Ordinal: 741
        void _woFreeFall(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WOFREEFALL_HPP
