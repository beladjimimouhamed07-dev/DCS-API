#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMetaObjectBuilder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMetaObjectBuilder
{
public:

    // RVA: 0x184 | Ordinal: 389
        void QMetaObjectBuilder(struct QMetaObject const *, class QFlags<enum QMetaObjectBuilder::AddMember>);

    // RVA: 0x185 | Ordinal: 390
        void QMetaObjectBuilder(void);

    // RVA: 0x7D9 | Ordinal: 2010
        void addClassInfo(class QByteArray const &, class QByteArray const &);

    // RVA: 0x7DB | Ordinal: 2012
        void addConstructor(class QByteArray const &);

    // RVA: 0x7DC | Ordinal: 2013
        void addConstructor(class QMetaMethod const &);

    // RVA: 0x7EF | Ordinal: 2032
        void addEnumerator(class QByteArray const &);

    // RVA: 0x7F0 | Ordinal: 2033
        void addEnumerator(class QMetaEnum const &);

    // RVA: 0x7F8 | Ordinal: 2041
        void addMetaObject(struct QMetaObject const *, class QFlags<enum QMetaObjectBuilder::AddMember>);

    // RVA: 0x7F9 | Ordinal: 2042
        void addMethod(class QByteArray const &, class QByteArray const &);

    // RVA: 0x7FA | Ordinal: 2043
        void addMethod(class QByteArray const &);

    // RVA: 0x7FB | Ordinal: 2044
        void addMethod(class QMetaMethod const &);

    // RVA: 0x806 | Ordinal: 2055
        void addProperty(class QByteArray const &, class QByteArray const &, int);

    // RVA: 0x807 | Ordinal: 2056
        void addProperty(class QMetaProperty const &);

    // RVA: 0x80B | Ordinal: 2060
        void addRelatedMetaObject(struct QMetaObject const *);

    // RVA: 0x813 | Ordinal: 2068
        void addSignal(class QByteArray const &);

    // RVA: 0x814 | Ordinal: 2069
        void addSlot(class QByteArray const &);

    // RVA: 0x9D0 | Ordinal: 2513
        void classInfoCount(void) const;

    // RVA: 0x9D1 | Ordinal: 2514
        void classInfoName(int) const;

    // RVA: 0x9D3 | Ordinal: 2516
        void classInfoValue(int) const;

    // RVA: 0x9D5 | Ordinal: 2518
        void className(void) const;

    // RVA: 0xAB2 | Ordinal: 2739
        void constructor(int) const;

    // RVA: 0xAB4 | Ordinal: 2741
        void constructorCount(void) const;

    // RVA: 0xC6B | Ordinal: 3180
        void deserialize(class QDataStream &, class QMap<class QByteArray, struct QMetaObject const *> const &);

    // RVA: 0xD69 | Ordinal: 3434
        void enumerator(int) const;

    // RVA: 0xD6C | Ordinal: 3437
        void enumeratorCount(void) const;

    // RVA: 0xE69 | Ordinal: 3690
        void flags(void) const;

    // RVA: 0xEC7 | Ordinal: 3784
        void fromRelocatableData(struct QMetaObject *, struct QMetaObject const *, class QByteArray const &);

    // RVA: 0xFCF | Ordinal: 4048
        void indexOfClassInfo(class QByteArray const &);

    // RVA: 0xFD1 | Ordinal: 4050
        void indexOfConstructor(class QByteArray const &);

    // RVA: 0xFD3 | Ordinal: 4052
        void indexOfEnumerator(class QByteArray const &);

    // RVA: 0xFD6 | Ordinal: 4055
        void indexOfMethod(class QByteArray const &);

    // RVA: 0xFD8 | Ordinal: 4057
        void indexOfProperty(class QByteArray const &);

    // RVA: 0xFDA | Ordinal: 4059
        void indexOfSignal(class QByteArray const &);

    // RVA: 0xFDC | Ordinal: 4061
        void indexOfSlot(class QByteArray const &);

    // RVA: 0x1384 | Ordinal: 4997
        void method(int) const;

    // RVA: 0x1386 | Ordinal: 4999
        void methodCount(void) const;

    // RVA: 0x1555 | Ordinal: 5462
        void property(int) const;

    // RVA: 0x1558 | Ordinal: 5465
        void propertyCount(void) const;

    // RVA: 0x1790 | Ordinal: 6033
        void relatedMetaObject(int) const;

    // RVA: 0x1791 | Ordinal: 6034
        void relatedMetaObjectCount(void) const;

    // RVA: 0x17D0 | Ordinal: 6097
        void removeClassInfo(int);

    // RVA: 0x17D7 | Ordinal: 6104
        void removeConstructor(int);

    // RVA: 0x17DA | Ordinal: 6107
        void removeEnumerator(int);

    // RVA: 0x17EC | Ordinal: 6125
        void removeMethod(int);

    // RVA: 0x17FA | Ordinal: 6139
        void removeProperty(int);

    // RVA: 0x17FE | Ordinal: 6143
        void removeRelatedMetaObject(int);

    // RVA: 0x1922 | Ordinal: 6435
        void serialize(class QDataStream &) const;

    // RVA: 0x194D | Ordinal: 6478
        void setClassName(class QByteArray const &);

    // RVA: 0x19CE | Ordinal: 6607
        void setFlags(class QFlags<enum QMetaObjectBuilder::MetaObjectFlag>);

    // RVA: 0x1AA6 | Ordinal: 6823
        void setStaticMetacallFunction(void (__cdecl *)(class QObject *, enum QMetaObject::Call, int, void **));

    // RVA: 0x1AAD | Ordinal: 6830
        void setSuperClass(struct QMetaObject const *);

    // RVA: 0x1C31 | Ordinal: 7218
        void staticMetacallFunction(void) const)(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1C56 | Ordinal: 7255
        void superClass(void) const;

    // RVA: 0x1D9A | Ordinal: 7579
        void toMetaObject(void) const;

    // RVA: 0x1DB3 | Ordinal: 7604
        void toRelocatableData(bool *) const;

    // RVA: 0x334 | Ordinal: 821
        void _QMetaObjectBuilder(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QMETAOBJECTBUILDER_HPP
