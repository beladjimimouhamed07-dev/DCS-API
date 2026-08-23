#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXJSON
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXJSON
{
public:

    // RVA: 0x1A3 | Ordinal: 420
        void FXJSON(class FX::FXJSON const &);

    // RVA: 0x1A4 | Ordinal: 421
        void FXJSON(char *, unsigned __int64, enum FX::FXJSON::Direction);

    // RVA: 0x1A5 | Ordinal: 422
        void FXJSON(void);

    // RVA: 0xAF9 | Ordinal: 2810
        void close(void);

    // RVA: 0xCD7 | Ordinal: 3288
        void direction(void) const;

    // RVA: 0xEBA | Ordinal: 3771
        void fill(void);

    // RVA: 0xF4D | Ordinal: 3918
        void flush(void);

    // RVA: 0x109A | Ordinal: 4251
        void getColumn(void) const;

    // RVA: 0x11E4 | Ordinal: 4581
        void getError(enum FX::FXJSON::Error);

    // RVA: 0x12CC | Ordinal: 4813
        void getIndentation(void) const;

    // RVA: 0x1338 | Ordinal: 4921
        void getLine(void) const;

    // RVA: 0x1341 | Ordinal: 4930
        void getLineWrap(void) const;

    // RVA: 0x14C4 | Ordinal: 5317
        void getNumericFormat(void) const;

    // RVA: 0x14C5 | Ordinal: 5318
        void getNumericPrecision(void) const;

    // RVA: 0x14DB | Ordinal: 5340
        void getOutputFlow(void) const;

    // RVA: 0x1AF8 | Ordinal: 6905
        void load(class FX::FXVariant &);

    // RVA: 0x1B4B | Ordinal: 6988
        void loadArray(class FX::FXVariant &);

    // RVA: 0x1B52 | Ordinal: 6995
        void loadMap(class FX::FXVariant &);

    // RVA: 0x1B85 | Ordinal: 7046
        void loadString(class FX::FXString &);

    // RVA: 0x1B86 | Ordinal: 7047
        void loadVariant(class FX::FXVariant &);

    // RVA: 0x1F0E | Ordinal: 7951
        void next(void);

    // RVA: 0x263E | Ordinal: 9791
        void open(char *, unsigned __int64, enum FX::FXJSON::Direction);

    // RVA: 0x2829 | Ordinal: 10282
        void save(class FX::FXVariant const &);

    // RVA: 0x287C | Ordinal: 10365
        void saveArray(class FX::FXVariant const &);

    // RVA: 0x287D | Ordinal: 10366
        void saveIndent(int);

    // RVA: 0x287E | Ordinal: 10367
        void saveMap(class FX::FXVariant const &);

    // RVA: 0x28AB | Ordinal: 10412
        void saveString(class FX::FXString const &);

    // RVA: 0x28AC | Ordinal: 10413
        void saveText(char const *, int);

    // RVA: 0x28AD | Ordinal: 10414
        void saveVariant(class FX::FXVariant const &);

    // RVA: 0x2B6E | Ordinal: 11119
        void setIndentation(int);

    // RVA: 0x2BD1 | Ordinal: 11218
        void setLineWrap(int);

    // RVA: 0x2C26 | Ordinal: 11303
        void setNumericFormat(int);

    // RVA: 0x2C27 | Ordinal: 11304
        void setNumericPrecision(int);

    // RVA: 0x2C3F | Ordinal: 11328
        void setOutputFlow(int);

    // RVA: 0x445 | Ordinal: 1094
        void _FXJSON(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXJSON_HPP
