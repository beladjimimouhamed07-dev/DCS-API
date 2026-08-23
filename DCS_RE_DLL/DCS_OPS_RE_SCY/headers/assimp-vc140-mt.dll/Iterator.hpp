#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: Iterator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ODDLParser {
namespace Value {

class Iterator
{
public:

    // RVA: 0x28 | Ordinal: 41
        void Iterator(class ODDLParser::Value::Iterator const &);

    // RVA: 0x29 | Ordinal: 42
        void Iterator(class ODDLParser::Value *);

    // RVA: 0x2A | Ordinal: 43
        void Iterator(void);

    // RVA: 0x2A4 | Ordinal: 677
        void getNext(void);

    // RVA: 0x2BE | Ordinal: 703
        void hasNext(void) const;

    // RVA: 0x87 | Ordinal: 136
        void _Iterator(void);
};

} // namespace Value
} // namespace ODDLParser

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_ITERATOR_HPP
