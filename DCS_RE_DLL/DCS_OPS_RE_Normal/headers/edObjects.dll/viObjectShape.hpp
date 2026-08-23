#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: viObjectShape
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class viObjectShape
{
public:

    // RVA: 0xA5 | Ordinal: 166
        void ChangePos(class wPosition3<float> const &);

    // RVA: 0xCC | Ordinal: 205
        void GetDrawArguments(void);

    // RVA: 0xCF | Ordinal: 208
        void GetEffectState(void);

    // RVA: 0xDA | Ordinal: 219
        void GetPoint(void);

    // RVA: 0xF6 | Ordinal: 247
        void LocalBox(double);

    // RVA: 0xF8 | Ordinal: 249
        void OnChangeEffectState(void);

    // RVA: 0x101 | Ordinal: 258
        void Parse(class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x102 | Ordinal: 259
        void ParseWithVolumeTestResult(class Graphics::ModelParser &, class wPosition3<float> const &, enum IntersectionType);

    // RVA: 0x120 | Ordinal: 289
        void SetModel(class Graphics::ModelPtr);

    // RVA: 0x122 | Ordinal: 291
        void SetModelByName(char const *);

    // RVA: 0x142 | Ordinal: 323
        void UpdateGraphicState(void);

    // RVA: 0x150 | Ordinal: 337
        void canBeImpostor(void) const;

    // RVA: 0x15B | Ordinal: 348
        void cast_viObjectShape(void);

    // RVA: 0x16F | Ordinal: 368
        void getModelParams(void) const;

    // RVA: 0x174 | Ordinal: 373
        void getObjectID(void) const;

    // RVA: 0x178 | Ordinal: 377
        void getObjectPosition(void) const;

    // RVA: 0x17D | Ordinal: 382
        void getObjectType(void) const;

    // RVA: 0x184 | Ordinal: 389
        void getSceneObjectInterface(void);

    // RVA: 0x18A | Ordinal: 395
        void getViType(void) const;

    // RVA: 0x18C | Ordinal: 397
        void getVisibility(void) const;

    // RVA: 0x18E | Ordinal: 399
        void get_Registered(void);

    // RVA: 0x1A0 | Ordinal: 417
        void modelReadyToParse(class Graphics::ModelPtr, class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x30 | Ordinal: 49
        void viObjectShape(class viObjectShape const &);

    // RVA: 0x31 | Ordinal: 50
        void viObjectShape(unsigned int);

    // RVA: 0x51 | Ordinal: 82
        void _viObjectShape(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_VIOBJECTSHAPE_HPP
