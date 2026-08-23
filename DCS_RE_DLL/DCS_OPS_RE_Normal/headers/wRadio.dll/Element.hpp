#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: Element
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sounder {

class Element
{
public:

    // RVA: 0x17 | Ordinal: 24
        void Element(class Sounder::Element const &);

    // RVA: 0x18 | Ordinal: 25
        void Element(void);

    // RVA: 0x1EE | Ordinal: 495
        void clear(void);

    // RVA: 0x274 | Ordinal: 629
        void getInput(void) const;

    // RVA: 0x2BC | Ordinal: 701
        void getResultGain(void) const;

    // RVA: 0x12D | Ordinal: 302
        void operator__(class Sounder::ParentElement &);

    // RVA: 0x426 | Ordinal: 1063
        void setInput(class Sounder::ParentElement *);

    // RVA: 0x427 | Ordinal: 1064
        void setInputGain(float);

    // RVA: 0x91 | Ordinal: 146
        void _Element(void);
};

} // namespace Sounder

// DCS_OPS_RE_WRADIO.DLL_ELEMENT_HPP
