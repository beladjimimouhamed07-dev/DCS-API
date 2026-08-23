#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXExpression
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXExpression
{
public:

    // RVA: 0xFB | Ordinal: 252
        void FXExpression(class FX::FXExpression const &);

    // RVA: 0xFC | Ordinal: 253
        void FXExpression(class FX::FXString const &, class FX::FXString const &, enum FX::FXExpression::Error *);

    // RVA: 0xFD | Ordinal: 254
        void FXExpression(char const *, char const *, enum FX::FXExpression::Error *);

    // RVA: 0xFE | Ordinal: 255
        void FXExpression(void);

    // RVA: 0xDEA | Ordinal: 3563
        void empty(void) const;

    // RVA: 0xE47 | Ordinal: 3656
        void evaluate(double const *) const;

    // RVA: 0x11E3 | Ordinal: 4580
        void getError(enum FX::FXExpression::Error);

    // RVA: 0x265D | Ordinal: 9822
        void parse(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x265E | Ordinal: 9823
        void parse(char const *, char const *);

    // RVA: 0x403 | Ordinal: 1028
        void _FXExpression(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXEXPRESSION_HPP
