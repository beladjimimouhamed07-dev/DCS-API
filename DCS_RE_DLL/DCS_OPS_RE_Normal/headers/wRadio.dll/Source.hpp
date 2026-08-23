#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: Source
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sounder {

class Source
{
public:

    // RVA: 0x53 | Ordinal: 84
        void Source(void);

    // RVA: 0x1FE | Ordinal: 511
        void create(class Sound::Host *, char const *);

    // RVA: 0x23D | Ordinal: 574
        void getCrosstalkThreshold(void) const;

    // RVA: 0x25B | Ordinal: 604
        void getGain(void) const;

    // RVA: 0x261 | Ordinal: 610
        void getHighPassFilterEnabled(void) const;

    // RVA: 0x262 | Ordinal: 611
        void getHighPassFilterFrequency(void) const;

    // RVA: 0x28E | Ordinal: 655
        void getLowPassFilterEnabled(void) const;

    // RVA: 0x28F | Ordinal: 656
        void getLowPassFilterFrequency(void) const;

    // RVA: 0x33B | Ordinal: 828
        void isPlaying(void) const;

    // RVA: 0x3B6 | Ordinal: 951
        void play_(struct SND_SourceParams const &);

    // RVA: 0x3B7 | Ordinal: 952
        void play_once(float);

    // RVA: 0x40A | Ordinal: 1035
        void setCrosstalkThreshold(float);

    // RVA: 0x412 | Ordinal: 1043
        void setEnableHighPassFilter(bool);

    // RVA: 0x413 | Ordinal: 1044
        void setEnableLowPassFilter(bool);

    // RVA: 0x425 | Ordinal: 1062
        void setHighPassFilterFrequency(float);

    // RVA: 0x42A | Ordinal: 1067
        void setLowHighPassFilters(bool, float, bool, float);

    // RVA: 0x42B | Ordinal: 1068
        void setLowPassFilterFrequency(float);

    // RVA: 0x46C | Ordinal: 1133
        void stop_(void);

    // RVA: 0x4AE | Ordinal: 1199
        void update(struct SND_SourceParams const &);

    // RVA: 0x4AF | Ordinal: 1200
        void update(float);

    // RVA: 0x4B0 | Ordinal: 1201
        void update(void);

    // RVA: 0x4C3 | Ordinal: 1220
        void update_(void);

    // RVA: 0xA1 | Ordinal: 162
        void _Source(void);
};

} // namespace Sounder

// DCS_OPS_RE_WRADIO.DLL_SOURCE_HPP
