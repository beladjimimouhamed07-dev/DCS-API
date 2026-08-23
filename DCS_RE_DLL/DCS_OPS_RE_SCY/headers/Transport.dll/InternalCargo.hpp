#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: InternalCargo
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class InternalCargo
{
public:

    // RVA: 0x8 | Ordinal: 9
        void InternalCargo(class InternalCargo const &);

    // RVA: 0x9 | Ordinal: 10
        void InternalCargo(void);

    // RVA: 0xF6 | Ordinal: 247
        void OnCargoAdd(class MovingObject *, unsigned int);

    // RVA: 0xF7 | Ordinal: 248
        void OnCargoRemove(class MovingObject *);

    // RVA: 0x138 | Ordinal: 313
        void addCargo(unsigned int);

    // RVA: 0x147 | Ordinal: 328
        void addUnit(unsigned int, unsigned int, int);

    // RVA: 0x15C | Ordinal: 349
        void beginAirDropProcedure(unsigned int);

    // RVA: 0x15D | Ordinal: 350
        void beginAirDropProcedureSingle(unsigned int);

    // RVA: 0x167 | Ordinal: 360
        void canPlaceColumn(unsigned int, bool, bool);

    // RVA: 0x168 | Ordinal: 361
        void canPlaceUnit(unsigned int, bool);

    // RVA: 0x214 | Ordinal: 533
        void getAirborn(void);

    // RVA: 0x229 | Ordinal: 554
        void getCargoWeight(void) const;

    // RVA: 0x267 | Ordinal: 616
        void getFullMass(void) const;

    // RVA: 0x294 | Ordinal: 661
        void getMaxCountInfantry(void);

    // RVA: 0x298 | Ordinal: 665
        void getMaximalCapacity(void) const;

    // RVA: 0x2AD | Ordinal: 686
        void getNominalCapacity(void) const;

    // RVA: 0x2B4 | Ordinal: 693
        void getObjectOnBoard(struct SNumOnBoard &);

    // RVA: 0x2B5 | Ordinal: 694
        void getObjectsOnBoard(void) const;

    // RVA: 0x2BB | Ordinal: 700
        void getPayload(void) const;

    // RVA: 0x2BC | Ordinal: 701
        void getPlacePoint(struct SNumOnBoard const &);

    // RVA: 0x2FD | Ordinal: 766
        void getUnitNearPoint(class osg::Vec2f const &);

    // RVA: 0x2FE | Ordinal: 767
        void getUnitsMass(void) const;

    // RVA: 0x2FF | Ordinal: 768
        void getUnitsSize(void) const;

    // RVA: 0x35E | Ordinal: 863
        void isReservedColumn(unsigned int);

    // RVA: 0x367 | Ordinal: 872
        void isUnit(unsigned int);

    // RVA: 0x368 | Ordinal: 873
        void isUnitInCargo(struct SNumOnBoard const &, class osg::Vec3f const &);

    // RVA: 0x3AC | Ordinal: 941
        void moveToData(struct InternalCargoStoreData &&);

    // RVA: 0x420 | Ordinal: 1057
        void putCargoToTop(unsigned int);

    // RVA: 0x440 | Ordinal: 1089
        void removeCargo(unsigned int);

    // RVA: 0x44D | Ordinal: 1102
        void removeUnit(unsigned int, bool &);

    // RVA: 0x457 | Ordinal: 1112
        void reserveColumn(unsigned int);

    // RVA: 0x483 | Ordinal: 1156
        void setAirborn(bool);

    // RVA: 0x48D | Ordinal: 1166
        void setCapacity(struct Internal_Cargo_Capacity const &, float, float);

    // RVA: 0x48F | Ordinal: 1168
        void setCargoMasterHandler(class std::function<bool __cdecl(unsigned int, class osg::Vec3f &)>);

    // RVA: 0x49C | Ordinal: 1181
        void setData(struct InternalCargoStoreData const &, unsigned int);

    // RVA: 0x4FD | Ordinal: 1278
        void setUnitItselfOut(unsigned int, enum SNumOnBoard::ESelfActive);

    // RVA: 0x502 | Ordinal: 1283
        void silentKillPayload(void);

    // RVA: 0x54B | Ordinal: 1356
        void unReserveColumn(unsigned int);

    // RVA: 0x2C | Ordinal: 45
        void _InternalCargo(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_INTERNALCARGO_HPP
