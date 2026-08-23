#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avChaffFlareContainer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avChaffFlareContainer
{
public:

    // RVA: 0x792 | Ordinal: 1939
        void DropChaff(int, int);

    // RVA: 0x793 | Ordinal: 1940
        void DropFlare(int, int);

    // RVA: 0x7FA | Ordinal: 2043
        void LoadChaff(int);

    // RVA: 0x7FB | Ordinal: 2044
        void LoadFlare(int);

    // RVA: 0xE6 | Ordinal: 231
        void avChaffFlareContainer(class cockpit::avChaffFlareContainer const &);

    // RVA: 0xE7 | Ordinal: 232
        void avChaffFlareContainer(void);

    // RVA: 0xAB7 | Ordinal: 2744
        void clear(void);

    // RVA: 0xBB8 | Ordinal: 3001
        void dropSnar(unsigned char, int, int);

    // RVA: 0xC5A | Ordinal: 3163
        void getChaff(void) const;

    // RVA: 0xCB1 | Ordinal: 3250
        void getFlare(void) const;

    // RVA: 0xDF1 | Ordinal: 3570
        void getSnar(unsigned char);

    // RVA: 0x11AC | Ordinal: 4525
        void initialize(int);

    // RVA: 0x2EF | Ordinal: 752
        void _avChaffFlareContainer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVCHAFFFLARECONTAINER_HPP
