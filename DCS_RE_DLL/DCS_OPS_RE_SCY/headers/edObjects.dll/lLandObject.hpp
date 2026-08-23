#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: lLandObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class lLandObject
{
public:

    // RVA: 0x96 | Ordinal: 151
        void AddDestroyedObject(unsigned int);

    // RVA: 0xA1 | Ordinal: 162
        void CanTakeDamage(float);

    // RVA: 0xA8 | Ordinal: 169
        void ClearDestroyedObjects(void);

    // RVA: 0xA9 | Ordinal: 170
        void Coalition(void) const;

    // RVA: 0xAB | Ordinal: 172
        void Country(void) const;

    // RVA: 0xB0 | Ordinal: 177
        void CreateDynamicData(void);

    // RVA: 0xB3 | Ordinal: 180
        void CurLife(void) const;

    // RVA: 0xB4 | Ordinal: 181
        void Degrade(bool, unsigned int);

    // RVA: 0xB5 | Ordinal: 182
        void Degrade(bool);

    // RVA: 0xBA | Ordinal: 187
        void DynData(void);

    // RVA: 0xBB | Ordinal: 188
        void DynData(void) const;

    // RVA: 0xBF | Ordinal: 192
        void ForceID(unsigned int, unsigned int);

    // RVA: 0xC1 | Ordinal: 194
        void GetArgsNetState(struct Graphics::AnimHolderNetState &);

    // RVA: 0xCE | Ordinal: 207
        void GetDynData(bool);

    // RVA: 0xD8 | Ordinal: 217
        void GetPoint(void);

    // RVA: 0xDD | Ordinal: 222
        void GetPosition(void);

    // RVA: 0xE8 | Ordinal: 233
        void Init(struct LandObjectInitData const &);

    // RVA: 0xEE | Ordinal: 239
        void IsDead(void) const;

    // RVA: 0xEF | Ordinal: 240
        void IsMarkedDestroyed(unsigned int);

    // RVA: 0xF0 | Ordinal: 241
        void IsNetServer(void) const;

    // RVA: 0xF3 | Ordinal: 244
        void Life(void) const;

    // RVA: 0xF2 | Ordinal: 243
        void Life0(void) const;

    // RVA: 0xF4 | Ordinal: 245
        void LocalBox(double);

    // RVA: 0xF9 | Ordinal: 250
        void OnParentChangePos(void);

    // RVA: 0xFF | Ordinal: 256
        void Parse(class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x103 | Ordinal: 260
        void PlayArg(int, float, float, float);

    // RVA: 0x104 | Ordinal: 261
        void Position(double);

    // RVA: 0x107 | Ordinal: 264
        void PostCollisionProcessing(struct wsCollisionData *);

    // RVA: 0x113 | Ordinal: 276
        void ReinitState(void);

    // RVA: 0x11A | Ordinal: 283
        void SetArgsNetState(struct Graphics::AnimHolderNetState const &);

    // RVA: 0x11B | Ordinal: 284
        void SetCoalition(enum wcCoalitionName);

    // RVA: 0x11C | Ordinal: 285
        void SetDrawArg(int, float);

    // RVA: 0x11E | Ordinal: 287
        void SetLife(double);

    // RVA: 0x127 | Ordinal: 296
        void SetPos(class wPosition3<float> const &);

    // RVA: 0x132 | Ordinal: 307
        void TakeDamage(double, unsigned int, unsigned int);

    // RVA: 0x139 | Ordinal: 314
        void Type(void) const;

    // RVA: 0x138 | Ordinal: 313
        void Type0(void) const;

    // RVA: 0x143 | Ordinal: 324
        void UpdateSpaceRegistration(void);

    // RVA: 0x14B | Ordinal: 332
        void advanceGraphRevision(void);

    // RVA: 0x155 | Ordinal: 342
        void cast_lLandObject(void);

    // RVA: 0x162 | Ordinal: 355
        void destroy(void);

    // RVA: 0x163 | Ordinal: 356
        void detachFromTerrainSceneObject(void);

    // RVA: 0x16B | Ordinal: 364
        void getMissionID(void) const;

    // RVA: 0x170 | Ordinal: 369
        void getName(void) const;

    // RVA: 0x17C | Ordinal: 381
        void getObjectType(void) const;

    // RVA: 0x17F | Ordinal: 384
        void getPositionUsingMode(void) const;

    // RVA: 0x185 | Ordinal: 390
        void getStaticData(void) const;

    // RVA: 0x186 | Ordinal: 391
        void getTypeName(void) const;

    // RVA: 0x18B | Ordinal: 396
        void getVisibility(void) const;

    // RVA: 0x192 | Ordinal: 403
        void initFromMapObject(class ISceneObject &);

    // RVA: 0x19D | Ordinal: 414
        void isReflectionOfTerrainSceneObject(void) const;

    // RVA: 0x22 | Ordinal: 35
        void lLandObject(class lLandObject const &);

    // RVA: 0x23 | Ordinal: 36
        void lLandObject(void);

    // RVA: 0x19E | Ordinal: 415
        void markTransparentAtThisMoment(bool);

    // RVA: 0x1A3 | Ordinal: 420
        void notifyOnDestroy(class LandObjectDestroyNotifierBase *);

    // RVA: 0x1A8 | Ordinal: 425
        void onStateChanged(void);

    // RVA: 0x1AF | Ordinal: 432
        void removeFromDistrict(void);

    // RVA: 0x1B3 | Ordinal: 436
        void setLiveryFrom(struct StaticObjectData const &);

    // RVA: 0x1B4 | Ordinal: 437
        void setNewShape(struct wShape *);

    // RVA: 0x1B5 | Ordinal: 438
        void setStaticData(struct StaticObjectData const &);

    // RVA: 0x1BB | Ordinal: 444
        void take_missionID(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1C5 | Ordinal: 454
        void viSetType(unsigned int);

    // RVA: 0x49 | Ordinal: 74
        void _lLandObject(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_LLANDOBJECT_HPP
