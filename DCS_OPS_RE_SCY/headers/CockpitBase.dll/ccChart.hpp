#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccChart
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccChart
{
public:

    // RVA: 0x8E6 | Ordinal: 2279
        void abscissa_mark_line(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x8E7 | Ordinal: 2280
        void abscissa_mark_text(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x9BE | Ordinal: 2495
        void calc_abscissa_from_draw(float);

    // RVA: 0x9BF | Ordinal: 2496
        void calc_draw_abscissa(float);

    // RVA: 0x9C0 | Ordinal: 2497
        void calc_draw_ordinata(float);

    // RVA: 0x9C1 | Ordinal: 2498
        void calc_ordinata_from_draw(float);

    // RVA: 0x1EA | Ordinal: 491
        void ccChart(class cockpit::ccChart const &);

    // RVA: 0x1EB | Ordinal: 492
        void ccChart(void);

    // RVA: 0xA17 | Ordinal: 2584
        void changeType(enum cockpit::chart_abscissa_source, float);

    // RVA: 0xA24 | Ordinal: 2597
        void channel_legend(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xA25 | Ordinal: 2598
        void channel_not_empty(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xA26 | Ordinal: 2599
        void channel_zero_line_position(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xA28 | Ordinal: 2601
        void chart_channel(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xA65 | Ordinal: 2662
        void check_auto_mapped_channels(void);

    // RVA: 0xB0F | Ordinal: 2832
        void control(void);

    // RVA: 0xB3E | Ordinal: 2879
        void create_elements_controllers_map(void);

    // RVA: 0xC18 | Ordinal: 3097
        void formLine(unsigned int, class cockpit::ceSimpleLineObject *);

    // RVA: 0xC36 | Ordinal: 3127
        void getAbscissaSpan(void) const;

    // RVA: 0xC3A | Ordinal: 3131
        void getActualAbscissa(void) const;

    // RVA: 0xCAD | Ordinal: 3246
        void getFirstFreeChannel(void);

    // RVA: 0x120E | Ordinal: 4623
        void initialize(class cockpit::avDevice *, unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x1232 | Ordinal: 4659
        void insertLParamForUpdate(unsigned int, class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::vector<float, class ed::allocator<float>>);

    // RVA: 0x1233 | Ordinal: 4660
        void insertParamForUpdate(unsigned int, char const *);

    // RVA: 0x1234 | Ordinal: 4661
        void insertPoint(unsigned int, float, float, char const *);

    // RVA: 0x125A | Ordinal: 4699
        void isEnabled(void) const;

    // RVA: 0x1488 | Ordinal: 5257
        void ordinata_mark_line(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1579 | Ordinal: 5498
        void real_time_scale_update(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1588 | Ordinal: 5513
        void registerLambdaForUpdate(class ed::basic_string<char> const &, class std::function<float __cdecl(class ed::vector<float, class ed::allocator<float>> const &)>);

    // RVA: 0x1663 | Ordinal: 5732
        void scheduleControl(void);

    // RVA: 0x168E | Ordinal: 5775
        void setAbscissaLimits(float, float);

    // RVA: 0x168F | Ordinal: 5776
        void setAbscissaMarkGridstep(float);

    // RVA: 0x1690 | Ordinal: 5777
        void setAbscissaViewSpan(float);

    // RVA: 0x16B7 | Ordinal: 5816
        void setChartScaleAndBias(unsigned int, float, float);

    // RVA: 0x16D2 | Ordinal: 5843
        void setCustomTimer(float, float);

    // RVA: 0x1704 | Ordinal: 5893
        void setEnable(bool);

    // RVA: 0x175B | Ordinal: 5980
        void setModelTimer(float);

    // RVA: 0x1772 | Ordinal: 6003
        void setOrdinataLimits(float, float);

    // RVA: 0x1773 | Ordinal: 6004
        void setOrdinataMarkGridstep(float);

    // RVA: 0x1797 | Ordinal: 6040
        void setRealTimer(float);

    // RVA: 0x197C | Ordinal: 6525
        void show(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x19F4 | Ordinal: 6645
        void stepCustomTimer(float);

    // RVA: 0x1A36 | Ordinal: 6711
        void timeScaleAdjust(double);

    // RVA: 0x1A56 | Ordinal: 6743
        void trimToEffectiveRange(float);

    // RVA: 0x1A7E | Ordinal: 6783
        void unregisterLambdaForUpdate(class ed::basic_string<char> const &);

    // RVA: 0x1BA5 | Ordinal: 7078
        void zero_line_position(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x375 | Ordinal: 886
        void _ccChart(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCCHART_HPP
