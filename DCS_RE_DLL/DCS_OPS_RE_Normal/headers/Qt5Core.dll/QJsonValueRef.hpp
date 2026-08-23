#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QJsonValueRef
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QJsonValueRef
{
public:

    // RVA: 0x158 | Ordinal: 345
        void QJsonValueRef(class QJsonArray *, int);

    // RVA: 0x159 | Ordinal: 346
        void QJsonValueRef(class QJsonObject *, int);

    // RVA: 0x1079 | Ordinal: 4218
        void isArray(void) const;

    // RVA: 0x1085 | Ordinal: 4230
        void isBool(void) const;

    // RVA: 0x10BF | Ordinal: 4288
        void isDouble(void) const;

    // RVA: 0x114B | Ordinal: 4428
        void isNull(void) const;

    // RVA: 0x115F | Ordinal: 4448
        void isObject(void) const;

    // RVA: 0x11D0 | Ordinal: 4561
        void isString(void) const;

    // RVA: 0x11EB | Ordinal: 4588
        void isUndefined(void) const;

    // RVA: 0x1CE8 | Ordinal: 7401
        void toArray(void) const;

    // RVA: 0x1CF6 | Ordinal: 7415
        void toBool(void) const;

    // RVA: 0x1CF7 | Ordinal: 7416
        void toBool(bool) const;

    // RVA: 0x1D2C | Ordinal: 7469
        void toDouble(double) const;

    // RVA: 0x1D2D | Ordinal: 7470
        void toDouble(void) const;

    // RVA: 0x1D49 | Ordinal: 7498
        void toInt(int) const;

    // RVA: 0x1D4A | Ordinal: 7499
        void toInt(void) const;

    // RVA: 0x1DA1 | Ordinal: 7586
        void toObject(void) const;

    // RVA: 0x1DE1 | Ordinal: 7650
        void toString(class QString const &) const;

    // RVA: 0x1DE2 | Ordinal: 7651
        void toString(void) const;

    // RVA: 0x1E51 | Ordinal: 7762
        void toValue(void) const;

    // RVA: 0x1E56 | Ordinal: 7767
        void toVariant(void) const;

    // RVA: 0x1F39 | Ordinal: 7994
        void type(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QJSONVALUEREF_HPP
