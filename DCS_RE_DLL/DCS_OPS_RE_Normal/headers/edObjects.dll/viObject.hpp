#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: viObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class viObject
{
public:

    // RVA: 0xA3 | Ordinal: 164
        void ChangePos(class wPosition3<float> const &);

    // RVA: 0xC0 | Ordinal: 193
        void ForceID(unsigned int, unsigned int);

    // RVA: 0xD9 | Ordinal: 218
        void GetPoint(void);

    // RVA: 0xF1 | Ordinal: 242
        void IsSearch(int);

    // RVA: 0x100 | Ordinal: 257
        void Parse(class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x111 | Ordinal: 274
        void Register(void);

    // RVA: 0x118 | Ordinal: 281
        void SearchFromThisNode(class viSearch *);

    // RVA: 0x12A | Ordinal: 299
        void SetSearchID(int);

    // RVA: 0x131 | Ordinal: 306
        void SubmitImmediateDebugGeometry(void);

    // RVA: 0x135 | Ordinal: 310
        void TestVolume(class ClipVolume const &);

    // RVA: 0x13C | Ordinal: 317
        void Unregister(void);

    // RVA: 0x141 | Ordinal: 322
        void UpdateGraphicState(void);

    // RVA: 0x152 | Ordinal: 339
        void cast_GraphicEffect(void);

    // RVA: 0x157 | Ordinal: 344
        void cast_viObject(void);

    // RVA: 0x15E | Ordinal: 351
        void checkDrawingInCockpit(void);

    // RVA: 0x182 | Ordinal: 387
        void getRadius(void);

    // RVA: 0x183 | Ordinal: 388
        void getSceneObjectInterface(void);

    // RVA: 0x1AA | Ordinal: 427
        void prepareForRendering(void);

    // RVA: 0x2B | Ordinal: 44
        void viObject(class viObject const &);

    // RVA: 0x2C | Ordinal: 45
        void viObject(unsigned int);

    // RVA: 0x1C3 | Ordinal: 452
        void viRegister(void);

    // RVA: 0x1C7 | Ordinal: 456
        void viUnregister(void);

    // RVA: 0x4E | Ordinal: 79
        void _viObject(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_VIOBJECT_HPP
