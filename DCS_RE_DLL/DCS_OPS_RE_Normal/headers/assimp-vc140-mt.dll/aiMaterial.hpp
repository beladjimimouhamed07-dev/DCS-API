#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: aiMaterial
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class aiMaterial
{
public:

    // RVA: 0x113 | Ordinal: 276
        void AddBinaryProperty(void const *, unsigned int, char const *, unsigned int, unsigned int, enum aiPropertyTypeInfo);

    // RVA: 0x119 | Ordinal: 282
        void AddProperty(int const *, unsigned int, char const *, unsigned int, unsigned int);

    // RVA: 0x11A | Ordinal: 283
        void AddProperty(float const *, unsigned int, char const *, unsigned int, unsigned int);

    // RVA: 0x11B | Ordinal: 284
        void AddProperty(double const *, unsigned int, char const *, unsigned int, unsigned int);

    // RVA: 0x11C | Ordinal: 285
        void AddProperty(struct aiColor3D const *, unsigned int, char const *, unsigned int, unsigned int);

    // RVA: 0x11D | Ordinal: 286
        void AddProperty(struct aiString const *, char const *, unsigned int, unsigned int);

    // RVA: 0x11E | Ordinal: 287
        void AddProperty(struct aiUVTransform const *, unsigned int, char const *, unsigned int, unsigned int);

    // RVA: 0x11F | Ordinal: 288
        void AddProperty(class aiColor4t<float> const *, unsigned int, char const *, unsigned int, unsigned int);

    // RVA: 0x120 | Ordinal: 289
        void AddProperty(class aiVector3t<float> const *, unsigned int, char const *, unsigned int, unsigned int);

    // RVA: 0x130 | Ordinal: 305
        void Clear(void);

    // RVA: 0x144 | Ordinal: 325
        void CopyPropertyList(struct aiMaterial *, struct aiMaterial const *);

    // RVA: 0x185 | Ordinal: 390
        void Get(char const *, unsigned int, unsigned int, int &) const;

    // RVA: 0x186 | Ordinal: 391
        void Get(char const *, unsigned int, unsigned int, float &) const;

    // RVA: 0x187 | Ordinal: 392
        void Get(char const *, unsigned int, unsigned int, struct aiColor3D &) const;

    // RVA: 0x188 | Ordinal: 393
        void Get(char const *, unsigned int, unsigned int, struct aiString &) const;

    // RVA: 0x189 | Ordinal: 394
        void Get(char const *, unsigned int, unsigned int, struct aiUVTransform &) const;

    // RVA: 0x18A | Ordinal: 395
        void Get(char const *, unsigned int, unsigned int, class aiColor4t<float> &) const;

    // RVA: 0x18B | Ordinal: 396
        void Get(char const *, unsigned int, unsigned int, int *, unsigned int *) const;

    // RVA: 0x18C | Ordinal: 397
        void Get(char const *, unsigned int, unsigned int, float *, unsigned int *) const;

    // RVA: 0x1A9 | Ordinal: 426
        void GetName(void);

    // RVA: 0x1BA | Ordinal: 443
        void GetTexture(enum aiTextureType, unsigned int, struct aiString *, enum aiTextureMapping *, unsigned int *, float *, enum aiTextureOp *, enum aiTextureMapMode *) const;

    // RVA: 0x1BB | Ordinal: 444
        void GetTextureCount(enum aiTextureType) const;

    // RVA: 0x226 | Ordinal: 551
        void RemoveProperty(char const *, unsigned int, unsigned int);

    // RVA: 0x6D | Ordinal: 110
        void aiMaterial(void);

    // RVA: 0xA8 | Ordinal: 169
        void _aiMaterial(void);
};

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_AIMATERIAL_HPP
