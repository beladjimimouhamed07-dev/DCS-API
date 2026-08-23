#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: ParentElement
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sounder {

class ParentElement
{
public:

    // RVA: 0x39 | Ordinal: 58
        void ParentElement(class Sounder::ParentElement &&);

    // RVA: 0x3A | Ordinal: 59
        void ParentElement(class Sounder::ParentElement const &);

    // RVA: 0x3B | Ordinal: 60
        void ParentElement(void);

    // RVA: 0x1C7 | Ordinal: 456
        void addOutput(class Sounder::Element *);

    // RVA: 0x1EF | Ordinal: 496
        void clear(void);

    // RVA: 0x329 | Ordinal: 810
        void insert(class Sounder::ParentElement *);

    // RVA: 0x139 | Ordinal: 314
        void operator__(class Sounder::Element &);

    // RVA: 0x3DB | Ordinal: 988
        void removeOutput(class Sounder::Element *);

    // RVA: 0x4C2 | Ordinal: 1219
        void update_(void);

    // RVA: 0x99 | Ordinal: 154
        void _ParentElement(void);
};

} // namespace Sounder

// DCS_OPS_RE_WRADIO.DLL_PARENTELEMENT_HPP
