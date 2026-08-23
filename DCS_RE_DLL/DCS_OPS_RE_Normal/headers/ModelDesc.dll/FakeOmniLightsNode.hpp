#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ModelDesc.dll
// Class: FakeOmniLightsNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class FakeOmniLightsNode
{
public:

    // RVA: 0x13 | Ordinal: 20
        void getBBox(unsigned int) const;

    // RVA: 0x1A | Ordinal: 27
        void getControlNode(unsigned int) const;

    // RVA: 0x1F | Ordinal: 32
        void getLights(void) const;

    // RVA: 0x22 | Ordinal: 35
        void getNumControlNodes(void) const;

    // RVA: 0x24 | Ordinal: 37
        void getNumLights(void) const;

    // RVA: 0x27 | Ordinal: 40
        void getNumTriangles(void) const;

    // RVA: 0x47 | Ordinal: 72
        void load(class io::IBinaryFileR &, class model::IAllocator &, char *, unsigned int);
};

} // namespace model

// DCS_OPS_RE_MODELDESC.DLL_FAKEOMNILIGHTSNODE_HPP
