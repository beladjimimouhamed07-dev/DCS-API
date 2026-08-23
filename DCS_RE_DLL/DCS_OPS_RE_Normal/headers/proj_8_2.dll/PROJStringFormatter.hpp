#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: PROJStringFormatter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace io {

class PROJStringFormatter
{
public:

    // RVA: 0x112 | Ordinal: 275
        void addParam(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x113 | Ordinal: 276
        void addParam(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x114 | Ordinal: 277
        void addParam(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, int);

    // RVA: 0x115 | Ordinal: 278
        void addParam(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, double);

    // RVA: 0x116 | Ordinal: 279
        void addParam(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *);

    // RVA: 0x117 | Ordinal: 280
        void addParam(char const *, char const *);

    // RVA: 0x118 | Ordinal: 281
        void addParam(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x119 | Ordinal: 282
        void addParam(char const *, class std::vector<double, class std::allocator<double>> const &);

    // RVA: 0x11A | Ordinal: 283
        void addParam(char const *, int);

    // RVA: 0x11B | Ordinal: 284
        void addParam(char const *, double);

    // RVA: 0x11C | Ordinal: 285
        void addStep(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x11D | Ordinal: 286
        void addStep(char const *);

    // RVA: 0x189 | Ordinal: 394
        void create(enum osgeo::proj::io::PROJStringFormatter::Convention, class std::shared_ptr<class osgeo::proj::io::DatabaseContext>);

    // RVA: 0x299 | Ordinal: 666
        void ingestPROJString(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x30F | Ordinal: 784
        void setCRSExport(bool);

    // RVA: 0x310 | Ordinal: 785
        void setCurrentStepInverted(bool);

    // RVA: 0x315 | Ordinal: 790
        void setIndentationWidth(int);

    // RVA: 0x318 | Ordinal: 793
        void setMaxLineLength(int);

    // RVA: 0x31A | Ordinal: 795
        void setMultiLine(bool);

    // RVA: 0x323 | Ordinal: 804
        void setUseApproxTMerc(bool);

    // RVA: 0x333 | Ordinal: 820
        void startInversion(void);

    // RVA: 0x336 | Ordinal: 823
        void stopInversion(void);

    // RVA: 0x345 | Ordinal: 838
        void toString(void) const;

    // RVA: 0x82 | Ordinal: 131
        void _PROJStringFormatter(void);
};

} // namespace io
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_PROJSTRINGFORMATTER_HPP
