#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avBorduhrFL23885
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avBorduhrFL23885
{
public:

    // RVA: 0x2BC | Ordinal: 701
        void SetCommand(int, float);

    // RVA: 0xA6 | Ordinal: 167
        void avBorduhrFL23885(class cockpit::dcswwii::avBorduhrFL23885 const &);

    // RVA: 0xA7 | Ordinal: 168
        void avBorduhrFL23885(void);

    // RVA: 0x2DF | Ordinal: 736
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x3AC | Ordinal: 941
        void getReading(enum cockpit::dcswwii::avBorduhrFL23885::Channels);

    // RVA: 0x41D | Ordinal: 1054
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x47F | Ordinal: 1152
        void normalize(double *);

    // RVA: 0x4B7 | Ordinal: 1208
        void post_initialize(void);

    // RVA: 0x519 | Ordinal: 1306
        void repair(void);

    // RVA: 0x5B5 | Ordinal: 1462
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x626 | Ordinal: 1575
        void update(void);

    // RVA: 0x12D | Ordinal: 302
        void _avBorduhrFL23885(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVBORDUHRFL23885_HPP
