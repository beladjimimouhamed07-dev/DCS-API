#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avDispenseProgram
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avDispenseProgram
{
public:

    // RVA: 0x786 | Ordinal: 1927
        void Copy(class cockpit::avDispenseProgram const &);

    // RVA: 0x100 | Ordinal: 257
        void avDispenseProgram(class cockpit::avDispenseProgram const &);

    // RVA: 0x101 | Ordinal: 258
        void avDispenseProgram(void);

    // RVA: 0xC5B | Ordinal: 3164
        void getChaff(void) const;

    // RVA: 0xC7C | Ordinal: 3197
        void getCycle(void) const;

    // RVA: 0xCB2 | Ordinal: 3251
        void getFlare(void) const;

    // RVA: 0xD10 | Ordinal: 3345
        void getIntv(void) const;

    // RVA: 0xD1F | Ordinal: 3360
        void getIsOperable(void) const;

    // RVA: 0x16AE | Ordinal: 5807
        void setChaff(unsigned int);

    // RVA: 0x16D3 | Ordinal: 5844
        void setCycle(unsigned int);

    // RVA: 0x170A | Ordinal: 5899
        void setFlare(unsigned int);

    // RVA: 0x1735 | Ordinal: 5942
        void setIntv(float);

    // RVA: 0x173B | Ordinal: 5948
        void setIsOperable(bool);

    // RVA: 0x177D | Ordinal: 6014
        void setParams(unsigned int, unsigned int, float, unsigned int);

    // RVA: 0x2FB | Ordinal: 764
        void _avDispenseProgram(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVDISPENSEPROGRAM_HPP
