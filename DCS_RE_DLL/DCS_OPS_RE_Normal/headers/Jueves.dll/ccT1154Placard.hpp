#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: ccT1154Placard
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class ccT1154Placard
{
public:

    // RVA: 0xDE | Ordinal: 223
        void ccT1154Placard(class cockpit::dcswwii::ccT1154Placard const &);

    // RVA: 0xDF | Ordinal: 224
        void ccT1154Placard(void);

    // RVA: 0x315 | Ordinal: 790
        void create_elements_controllers_map(void);

    // RVA: 0x439 | Ordinal: 1082
        void initialize(class cockpit::avDevice *, unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x4CF | Ordinal: 1232
        void post_initialize(void);

    // RVA: 0x52A | Ordinal: 1323
        void scribble(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x14B | Ordinal: 332
        void _ccT1154Placard(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_CCT1154PLACARD_HPP
