#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImPlot
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImPlot
{
public:

    // RVA: 0x160 | Ordinal: 353
        void AddTextVertical(struct ImDrawList *, struct ImVec2, unsigned int, char const *, char const *);

    // RVA: 0x161 | Ordinal: 354
        void AddTicksCustom(double const *, char const *const *const, int, struct ImPlotTickCollection &);

    // RVA: 0x162 | Ordinal: 355
        void AddTicksDefault(struct ImPlotRange const &, int, int, struct ImPlotTickCollection &);

    // RVA: 0x163 | Ordinal: 356
        void AddTicksLogarithmic(struct ImPlotRange const &, int, struct ImPlotTickCollection &);

    // RVA: 0x164 | Ordinal: 357
        void AddTicksTime(struct ImPlotRange const &, float, struct ImPlotTickCollection &);

    // RVA: 0x165 | Ordinal: 358
        void AddTime(struct ImPlotTime const &, int, int);

    // RVA: 0x169 | Ordinal: 362
        void Annotate(double, double, struct ImVec2 const &, struct ImVec4 const &, char const *, ...);

    // RVA: 0x16A | Ordinal: 363
        void Annotate(double, double, struct ImVec2 const &, char const *, ...);

    // RVA: 0x16B | Ordinal: 364
        void AnnotateClamped(double, double, struct ImVec2 const &, struct ImVec4 const &, char const *, ...);

    // RVA: 0x16C | Ordinal: 365
        void AnnotateClamped(double, double, struct ImVec2 const &, char const *, ...);

    // RVA: 0x16D | Ordinal: 366
        void AnnotateClampedV(double, double, struct ImVec2 const &, struct ImVec4 const &, char const *, char *);

    // RVA: 0x16E | Ordinal: 367
        void AnnotateClampedV(double, double, struct ImVec2 const &, char const *, char *);

    // RVA: 0x16F | Ordinal: 368
        void AnnotateV(double, double, struct ImVec2 const &, struct ImVec4 const &, char const *, char *);

    // RVA: 0x170 | Ordinal: 369
        void AnnotateV(double, double, struct ImVec2 const &, char const *, char *);

    // RVA: 0x183 | Ordinal: 388
        void BeginItem(char const *, int);

    // RVA: 0x184 | Ordinal: 389
        void BeginLegendDragDropSource(char const *, int);

    // RVA: 0x185 | Ordinal: 390
        void BeginLegendPopup(char const *, int);

    // RVA: 0x189 | Ordinal: 394
        void BeginPlot(char const *, char const *, char const *, struct ImVec2 const &, int, int, int, int, int, char const *, char const *);

    // RVA: 0x1A3 | Ordinal: 420
        void BustItemCache(void);

    // RVA: 0x1A4 | Ordinal: 421
        void BustPlotCache(void);

    // RVA: 0x1AD | Ordinal: 430
        void CalcLegendSize(struct ImPlotPlot &, struct ImVec2 const &, struct ImVec2 const &, int);

    // RVA: 0x1B8 | Ordinal: 441
        void CeilTime(struct ImPlotTime const &, int);

    // RVA: 0x1E5 | Ordinal: 486
        void CombineDateTime(struct ImPlotTime const &, struct ImPlotTime const &);

    // RVA: 0x1EF | Ordinal: 496
        void CreateContext(void);

    // RVA: 0x209 | Ordinal: 522
        void DestroyContext(struct ImPlotContext *);

    // RVA: 0x215 | Ordinal: 534
        void DragLineX(char const *, double *, bool, struct ImVec4 const &, float);

    // RVA: 0x216 | Ordinal: 535
        void DragLineY(char const *, double *, bool, struct ImVec4 const &, float);

    // RVA: 0x217 | Ordinal: 536
        void DragPoint(char const *, double *, double *, bool, struct ImVec4 const &, float);

    // RVA: 0x22C | Ordinal: 557
        void EndItem(void);

    // RVA: 0x22D | Ordinal: 558
        void EndLegendDragDropSource(void);

    // RVA: 0x22E | Ordinal: 559
        void EndLegendPopup(void);

    // RVA: 0x232 | Ordinal: 563
        void EndPlot(void);

    // RVA: 0x246 | Ordinal: 583
        void FitNextPlotAxes(bool, bool, bool, bool);

    // RVA: 0x247 | Ordinal: 584
        void FitPoint(struct ImPlotPoint const &);

    // RVA: 0x248 | Ordinal: 585
        void FitPointX(double);

    // RVA: 0x249 | Ordinal: 586
        void FitPointY(double);

    // RVA: 0x24C | Ordinal: 589
        void FloorTime(struct ImPlotTime const &, int);

    // RVA: 0x251 | Ordinal: 594
        void FormatDate(struct ImPlotTime const &, char *, int, int, bool);

    // RVA: 0x252 | Ordinal: 595
        void FormatDateTime(struct ImPlotTime const &, char *, int, struct ImPlotDateTimeFmt);

    // RVA: 0x253 | Ordinal: 596
        void FormatTime(struct ImPlotTime const &, char *, int, int, bool);

    // RVA: 0x259 | Ordinal: 602
        void GetAutoColor(int);

    // RVA: 0x269 | Ordinal: 618
        void GetColormap(int, int *);

    // RVA: 0x26A | Ordinal: 619
        void GetColormapColor(int);

    // RVA: 0x26B | Ordinal: 620
        void GetColormapName(int);

    // RVA: 0x26C | Ordinal: 621
        void GetColormapSize(void);

    // RVA: 0x278 | Ordinal: 633
        void GetCurrentContext(void);

    // RVA: 0x279 | Ordinal: 634
        void GetCurrentItem(void);

    // RVA: 0x27A | Ordinal: 635
        void GetCurrentPlot(void);

    // RVA: 0x294 | Ordinal: 661
        void GetGmtTime(struct ImPlotTime const &, struct tm *);

    // RVA: 0x2A5 | Ordinal: 678
        void GetInputMap(void);

    // RVA: 0x2A8 | Ordinal: 681
        void GetItem(char const *);

    // RVA: 0x2AE | Ordinal: 687
        void GetLastItemColor(void);

    // RVA: 0x2AF | Ordinal: 688
        void GetLocTime(struct ImPlotTime const &, struct tm *);

    // RVA: 0x2B0 | Ordinal: 689
        void GetLocationPos(struct ImRect const &, struct ImVec2 const &, int, struct ImVec2 const &);

    // RVA: 0x2B1 | Ordinal: 690
        void GetMarkerName(int);

    // RVA: 0x2BD | Ordinal: 702
        void GetPlot(char const *);

    // RVA: 0x2BE | Ordinal: 703
        void GetPlotDrawList(void);

    // RVA: 0x2BF | Ordinal: 704
        void GetPlotLimits(int);

    // RVA: 0x2C0 | Ordinal: 705
        void GetPlotMousePos(int);

    // RVA: 0x2C1 | Ordinal: 706
        void GetPlotPos(void);

    // RVA: 0x2C2 | Ordinal: 707
        void GetPlotQuery(int);

    // RVA: 0x2C3 | Ordinal: 708
        void GetPlotSize(void);

    // RVA: 0x2CF | Ordinal: 720
        void GetStyle(void);

    // RVA: 0x2D1 | Ordinal: 722
        void GetStyleColorName(int);

    // RVA: 0x2ED | Ordinal: 750
        void GetYear(struct ImPlotTime const &);

    // RVA: 0x2F0 | Ordinal: 753
        void HideNextItem(bool, int);

    // RVA: 0x334 | Ordinal: 821
        void Initialize(struct ImPlotContext *);

    // RVA: 0x35C | Ordinal: 861
        void IsLegendEntryHovered(char const *);

    // RVA: 0x365 | Ordinal: 870
        void IsPlotHovered(void);

    // RVA: 0x366 | Ordinal: 871
        void IsPlotQueried(void);

    // RVA: 0x367 | Ordinal: 872
        void IsPlotXAxisHovered(void);

    // RVA: 0x368 | Ordinal: 873
        void IsPlotYAxisHovered(int);

    // RVA: 0x379 | Ordinal: 890
        void LabelAxisValue(struct ImPlotAxis const &, struct ImPlotTickCollection const &, double, char *, int);

    // RVA: 0x37C | Ordinal: 893
        void LabelTickDefault(struct ImPlotTick &, struct ImGuiTextBuffer &);

    // RVA: 0x37D | Ordinal: 894
        void LabelTickScientific(struct ImPlotTick &, struct ImGuiTextBuffer &);

    // RVA: 0x37E | Ordinal: 895
        void LabelTickTime(struct ImPlotTick &, struct ImGuiTextBuffer &, struct ImPlotTime const &, struct ImPlotDateTimeFmt);

    // RVA: 0x37F | Ordinal: 896
        void LerpColormap(float);

    // RVA: 0x380 | Ordinal: 897
        void LerpColormap(struct ImVec4 const *, int, float);

    // RVA: 0x381 | Ordinal: 898
        void LinkNextPlotLimits(double *, double *, double *, double *, double *, double *, double *, double *);

    // RVA: 0x392 | Ordinal: 915
        void MakeTime(int, int, int, int, int, int, int);

    // RVA: 0x39D | Ordinal: 926
        void MkGmtTime(struct tm *);

    // RVA: 0x39E | Ordinal: 927
        void MkLocTime(struct tm *);

    // RVA: 0x3A6 | Ordinal: 935
        void NextColormapColor(void);

    // RVA: 0x3A8 | Ordinal: 937
        void NiceNum(double, bool);

    // RVA: 0x3B3 | Ordinal: 948
        void PixelsToPlot(struct ImVec2 const &, int);

    // RVA: 0x3B4 | Ordinal: 949
        void PixelsToPlot(float, float, int);

    // RVA: 0x10 | Ordinal: 17
        void PlotBars___int64_(char const *, __int64 const *, __int64 const *, int, double, int, int);

    // RVA: 0x11 | Ordinal: 18
        void PlotBars___int64_(char const *, __int64 const *, int, double, double, int, int);

    // RVA: 0xE | Ordinal: 15
        void PlotBars_double_(char const *, double const *, double const *, int, double, int, int);

    // RVA: 0xF | Ordinal: 16
        void PlotBars_double_(char const *, double const *, int, double, double, int, int);

    // RVA: 0xC | Ordinal: 13
        void PlotBars_float_(char const *, float const *, float const *, int, double, int, int);

    // RVA: 0xD | Ordinal: 14
        void PlotBars_float_(char const *, float const *, int, double, double, int, int);

    // RVA: 0x8 | Ordinal: 9
        void PlotBars_int_(char const *, int const *, int const *, int, double, int, int);

    // RVA: 0x9 | Ordinal: 10
        void PlotBars_int_(char const *, int const *, int, double, double, int, int);

    // RVA: 0x4 | Ordinal: 5
        void PlotBars_short_(char const *, short const *, short const *, int, double, int, int);

    // RVA: 0x5 | Ordinal: 6
        void PlotBars_short_(char const *, short const *, int, double, double, int, int);

    // RVA: 0x3B5 | Ordinal: 950
        void PlotBarsG(char const *, struct ImPlotPoint (__cdecl *)(void *, int), void *, int, double, int);

    // RVA: 0x24 | Ordinal: 37
        void PlotBarsH___int64_(char const *, __int64 const *, __int64 const *, int, double, int, int);

    // RVA: 0x25 | Ordinal: 38
        void PlotBarsH___int64_(char const *, __int64 const *, int, double, double, int, int);

    // RVA: 0x22 | Ordinal: 35
        void PlotBarsH_double_(char const *, double const *, double const *, int, double, int, int);

    // RVA: 0x23 | Ordinal: 36
        void PlotBarsH_double_(char const *, double const *, int, double, double, int, int);

    // RVA: 0x20 | Ordinal: 33
        void PlotBarsH_float_(char const *, float const *, float const *, int, double, int, int);

    // RVA: 0x21 | Ordinal: 34
        void PlotBarsH_float_(char const *, float const *, int, double, double, int, int);

    // RVA: 0x1C | Ordinal: 29
        void PlotBarsH_int_(char const *, int const *, int const *, int, double, int, int);

    // RVA: 0x1D | Ordinal: 30
        void PlotBarsH_int_(char const *, int const *, int, double, double, int, int);

    // RVA: 0x18 | Ordinal: 25
        void PlotBarsH_short_(char const *, short const *, short const *, int, double, int, int);

    // RVA: 0x19 | Ordinal: 26
        void PlotBarsH_short_(char const *, short const *, int, double, double, int, int);

    // RVA: 0x3B6 | Ordinal: 951
        void PlotBarsHG(char const *, struct ImPlotPoint (__cdecl *)(void *, int), void *, int, double, int);

    // RVA: 0x30 | Ordinal: 49
        void PlotDigital___int64_(char const *, __int64 const *, __int64 const *, int, int, int);

    // RVA: 0x2F | Ordinal: 48
        void PlotDigital_double_(char const *, double const *, double const *, int, int, int);

    // RVA: 0x2E | Ordinal: 47
        void PlotDigital_float_(char const *, float const *, float const *, int, int, int);

    // RVA: 0x2C | Ordinal: 45
        void PlotDigital_int_(char const *, int const *, int const *, int, int, int);

    // RVA: 0x2A | Ordinal: 43
        void PlotDigital_short_(char const *, short const *, short const *, int, int, int);

    // RVA: 0x3B7 | Ordinal: 952
        void PlotDigitalG(char const *, struct ImPlotPoint (__cdecl *)(void *, int), void *, int, int);

    // RVA: 0x3B8 | Ordinal: 953
        void PlotDummy(char const *);

    // RVA: 0x42 | Ordinal: 67
        void PlotErrorBars___int64_(char const *, __int64 const *, __int64 const *, __int64 const *, __int64 const *, int, int, int);

    // RVA: 0x43 | Ordinal: 68
        void PlotErrorBars___int64_(char const *, __int64 const *, __int64 const *, __int64 const *, int, int, int);

    // RVA: 0x40 | Ordinal: 65
        void PlotErrorBars_double_(char const *, double const *, double const *, double const *, double const *, int, int, int);

    // RVA: 0x41 | Ordinal: 66
        void PlotErrorBars_double_(char const *, double const *, double const *, double const *, int, int, int);

    // RVA: 0x3E | Ordinal: 63
        void PlotErrorBars_float_(char const *, float const *, float const *, float const *, float const *, int, int, int);

    // RVA: 0x3F | Ordinal: 64
        void PlotErrorBars_float_(char const *, float const *, float const *, float const *, int, int, int);

    // RVA: 0x3A | Ordinal: 59
        void PlotErrorBars_int_(char const *, int const *, int const *, int const *, int const *, int, int, int);

    // RVA: 0x3B | Ordinal: 60
        void PlotErrorBars_int_(char const *, int const *, int const *, int const *, int, int, int);

    // RVA: 0x36 | Ordinal: 55
        void PlotErrorBars_short_(char const *, short const *, short const *, short const *, short const *, int, int, int);

    // RVA: 0x37 | Ordinal: 56
        void PlotErrorBars_short_(char const *, short const *, short const *, short const *, int, int, int);

    // RVA: 0x56 | Ordinal: 87
        void PlotErrorBarsH___int64_(char const *, __int64 const *, __int64 const *, __int64 const *, __int64 const *, int, int, int);

    // RVA: 0x57 | Ordinal: 88
        void PlotErrorBarsH___int64_(char const *, __int64 const *, __int64 const *, __int64 const *, int, int, int);

    // RVA: 0x54 | Ordinal: 85
        void PlotErrorBarsH_double_(char const *, double const *, double const *, double const *, double const *, int, int, int);

    // RVA: 0x55 | Ordinal: 86
        void PlotErrorBarsH_double_(char const *, double const *, double const *, double const *, int, int, int);

    // RVA: 0x52 | Ordinal: 83
        void PlotErrorBarsH_float_(char const *, float const *, float const *, float const *, float const *, int, int, int);

    // RVA: 0x53 | Ordinal: 84
        void PlotErrorBarsH_float_(char const *, float const *, float const *, float const *, int, int, int);

    // RVA: 0x4E | Ordinal: 79
        void PlotErrorBarsH_int_(char const *, int const *, int const *, int const *, int const *, int, int, int);

    // RVA: 0x4F | Ordinal: 80
        void PlotErrorBarsH_int_(char const *, int const *, int const *, int const *, int, int, int);

    // RVA: 0x4A | Ordinal: 75
        void PlotErrorBarsH_short_(char const *, short const *, short const *, short const *, short const *, int, int, int);

    // RVA: 0x4B | Ordinal: 76
        void PlotErrorBarsH_short_(char const *, short const *, short const *, short const *, int, int, int);

    // RVA: 0x62 | Ordinal: 99
        void PlotHLines___int64_(char const *, __int64 const *, int, int, int);

    // RVA: 0x61 | Ordinal: 98
        void PlotHLines_double_(char const *, double const *, int, int, int);

    // RVA: 0x60 | Ordinal: 97
        void PlotHLines_float_(char const *, float const *, int, int, int);

    // RVA: 0x5E | Ordinal: 95
        void PlotHLines_int_(char const *, int const *, int, int, int);

    // RVA: 0x5C | Ordinal: 93
        void PlotHLines_short_(char const *, short const *, int, int, int);

    // RVA: 0x6C | Ordinal: 109
        void PlotHeatmap___int64_(char const *, __int64 const *, int, int, double, double, char const *, struct ImPlotPoint const &, struct ImPlotPoint const &);

    // RVA: 0x6B | Ordinal: 108
        void PlotHeatmap_double_(char const *, double const *, int, int, double, double, char const *, struct ImPlotPoint const &, struct ImPlotPoint const &);

    // RVA: 0x6A | Ordinal: 107
        void PlotHeatmap_float_(char const *, float const *, int, int, double, double, char const *, struct ImPlotPoint const &, struct ImPlotPoint const &);

    // RVA: 0x68 | Ordinal: 105
        void PlotHeatmap_int_(char const *, int const *, int, int, double, double, char const *, struct ImPlotPoint const &, struct ImPlotPoint const &);

    // RVA: 0x66 | Ordinal: 103
        void PlotHeatmap_short_(char const *, short const *, int, int, double, double, char const *, struct ImPlotPoint const &, struct ImPlotPoint const &);

    // RVA: 0x3BC | Ordinal: 957
        void PlotImage(char const *, void *, struct ImPlotPoint const &, struct ImPlotPoint const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec4 const &);

    // RVA: 0x7E | Ordinal: 127
        void PlotLine___int64_(char const *, __int64 const *, __int64 const *, int, int, int);

    // RVA: 0x7F | Ordinal: 128
        void PlotLine___int64_(char const *, __int64 const *, int, double, double, int, int);

    // RVA: 0x7C | Ordinal: 125
        void PlotLine_double_(char const *, double const *, double const *, int, int, int);

    // RVA: 0x7D | Ordinal: 126
        void PlotLine_double_(char const *, double const *, int, double, double, int, int);

    // RVA: 0x7A | Ordinal: 123
        void PlotLine_float_(char const *, float const *, float const *, int, int, int);

    // RVA: 0x7B | Ordinal: 124
        void PlotLine_float_(char const *, float const *, int, double, double, int, int);

    // RVA: 0x76 | Ordinal: 119
        void PlotLine_int_(char const *, int const *, int const *, int, int, int);

    // RVA: 0x77 | Ordinal: 120
        void PlotLine_int_(char const *, int const *, int, double, double, int, int);

    // RVA: 0x72 | Ordinal: 115
        void PlotLine_short_(char const *, short const *, short const *, int, int, int);

    // RVA: 0x73 | Ordinal: 116
        void PlotLine_short_(char const *, short const *, int, double, double, int, int);

    // RVA: 0x3BD | Ordinal: 958
        void PlotLineG(char const *, struct ImPlotPoint (__cdecl *)(void *, int), void *, int, int);

    // RVA: 0x8A | Ordinal: 139
        void PlotPieChart___int64_(char const *const *const, __int64 const *, int, double, double, double, bool, char const *, double);

    // RVA: 0x89 | Ordinal: 138
        void PlotPieChart_double_(char const *const *const, double const *, int, double, double, double, bool, char const *, double);

    // RVA: 0x88 | Ordinal: 137
        void PlotPieChart_float_(char const *const *const, float const *, int, double, double, double, bool, char const *, double);

    // RVA: 0x86 | Ordinal: 135
        void PlotPieChart_int_(char const *const *const, int const *, int, double, double, double, bool, char const *, double);

    // RVA: 0x84 | Ordinal: 133
        void PlotPieChart_short_(char const *const *const, short const *, int, double, double, double, bool, char const *, double);

    // RVA: 0x3C2 | Ordinal: 963
        void PlotRects(char const *, struct ImPlotPoint (__cdecl *)(void *, int), void *, int, int);

    // RVA: 0x3C3 | Ordinal: 964
        void PlotRects(char const *, float const *, float const *, int, int, int);

    // RVA: 0x3C4 | Ordinal: 965
        void PlotRects(char const *, double const *, double const *, int, int, int);

    // RVA: 0x9C | Ordinal: 157
        void PlotScatter___int64_(char const *, __int64 const *, __int64 const *, int, int, int);

    // RVA: 0x9D | Ordinal: 158
        void PlotScatter___int64_(char const *, __int64 const *, int, double, double, int, int);

    // RVA: 0x9A | Ordinal: 155
        void PlotScatter_double_(char const *, double const *, double const *, int, int, int);

    // RVA: 0x9B | Ordinal: 156
        void PlotScatter_double_(char const *, double const *, int, double, double, int, int);

    // RVA: 0x98 | Ordinal: 153
        void PlotScatter_float_(char const *, float const *, float const *, int, int, int);

    // RVA: 0x99 | Ordinal: 154
        void PlotScatter_float_(char const *, float const *, int, double, double, int, int);

    // RVA: 0x94 | Ordinal: 149
        void PlotScatter_int_(char const *, int const *, int const *, int, int, int);

    // RVA: 0x95 | Ordinal: 150
        void PlotScatter_int_(char const *, int const *, int, double, double, int, int);

    // RVA: 0x90 | Ordinal: 145
        void PlotScatter_short_(char const *, short const *, short const *, int, int, int);

    // RVA: 0x91 | Ordinal: 146
        void PlotScatter_short_(char const *, short const *, int, double, double, int, int);

    // RVA: 0x3C5 | Ordinal: 966
        void PlotScatterG(char const *, struct ImPlotPoint (__cdecl *)(void *, int), void *, int, int);

    // RVA: 0xB8 | Ordinal: 185
        void PlotShaded___int64_(char const *, __int64 const *, __int64 const *, __int64 const *, int, int, int);

    // RVA: 0xB9 | Ordinal: 186
        void PlotShaded___int64_(char const *, __int64 const *, __int64 const *, int, double, int, int);

    // RVA: 0xBA | Ordinal: 187
        void PlotShaded___int64_(char const *, __int64 const *, int, double, double, double, int, int);

    // RVA: 0xB5 | Ordinal: 182
        void PlotShaded_double_(char const *, double const *, double const *, double const *, int, int, int);

    // RVA: 0xB6 | Ordinal: 183
        void PlotShaded_double_(char const *, double const *, double const *, int, double, int, int);

    // RVA: 0xB7 | Ordinal: 184
        void PlotShaded_double_(char const *, double const *, int, double, double, double, int, int);

    // RVA: 0xB2 | Ordinal: 179
        void PlotShaded_float_(char const *, float const *, float const *, float const *, int, int, int);

    // RVA: 0xB3 | Ordinal: 180
        void PlotShaded_float_(char const *, float const *, float const *, int, double, int, int);

    // RVA: 0xB4 | Ordinal: 181
        void PlotShaded_float_(char const *, float const *, int, double, double, double, int, int);

    // RVA: 0xAC | Ordinal: 173
        void PlotShaded_int_(char const *, int const *, int const *, int const *, int, int, int);

    // RVA: 0xAD | Ordinal: 174
        void PlotShaded_int_(char const *, int const *, int const *, int, double, int, int);

    // RVA: 0xAE | Ordinal: 175
        void PlotShaded_int_(char const *, int const *, int, double, double, double, int, int);

    // RVA: 0xA6 | Ordinal: 167
        void PlotShaded_short_(char const *, short const *, short const *, short const *, int, int, int);

    // RVA: 0xA7 | Ordinal: 168
        void PlotShaded_short_(char const *, short const *, short const *, int, double, int, int);

    // RVA: 0xA8 | Ordinal: 169
        void PlotShaded_short_(char const *, short const *, int, double, double, double, int, int);

    // RVA: 0x3C6 | Ordinal: 967
        void PlotShadedG(char const *, struct ImPlotPoint (__cdecl *)(void *, int), void *, struct ImPlotPoint (__cdecl *)(void *, int), void *, int, int);

    // RVA: 0xCE | Ordinal: 207
        void PlotStairs___int64_(char const *, __int64 const *, __int64 const *, int, int, int);

    // RVA: 0xCF | Ordinal: 208
        void PlotStairs___int64_(char const *, __int64 const *, int, double, double, int, int);

    // RVA: 0xCC | Ordinal: 205
        void PlotStairs_double_(char const *, double const *, double const *, int, int, int);

    // RVA: 0xCD | Ordinal: 206
        void PlotStairs_double_(char const *, double const *, int, double, double, int, int);

    // RVA: 0xCA | Ordinal: 203
        void PlotStairs_float_(char const *, float const *, float const *, int, int, int);

    // RVA: 0xCB | Ordinal: 204
        void PlotStairs_float_(char const *, float const *, int, double, double, int, int);

    // RVA: 0xC6 | Ordinal: 199
        void PlotStairs_int_(char const *, int const *, int const *, int, int, int);

    // RVA: 0xC7 | Ordinal: 200
        void PlotStairs_int_(char const *, int const *, int, double, double, int, int);

    // RVA: 0xC2 | Ordinal: 195
        void PlotStairs_short_(char const *, short const *, short const *, int, int, int);

    // RVA: 0xC3 | Ordinal: 196
        void PlotStairs_short_(char const *, short const *, int, double, double, int, int);

    // RVA: 0x3C7 | Ordinal: 968
        void PlotStairsG(char const *, struct ImPlotPoint (__cdecl *)(void *, int), void *, int, int);

    // RVA: 0xE2 | Ordinal: 227
        void PlotStems___int64_(char const *, __int64 const *, __int64 const *, int, double, int, int);

    // RVA: 0xE3 | Ordinal: 228
        void PlotStems___int64_(char const *, __int64 const *, int, double, double, double, int, int);

    // RVA: 0xE0 | Ordinal: 225
        void PlotStems_double_(char const *, double const *, double const *, int, double, int, int);

    // RVA: 0xE1 | Ordinal: 226
        void PlotStems_double_(char const *, double const *, int, double, double, double, int, int);

    // RVA: 0xDE | Ordinal: 223
        void PlotStems_float_(char const *, float const *, float const *, int, double, int, int);

    // RVA: 0xDF | Ordinal: 224
        void PlotStems_float_(char const *, float const *, int, double, double, double, int, int);

    // RVA: 0xDA | Ordinal: 219
        void PlotStems_int_(char const *, int const *, int const *, int, double, int, int);

    // RVA: 0xDB | Ordinal: 220
        void PlotStems_int_(char const *, int const *, int, double, double, double, int, int);

    // RVA: 0xD6 | Ordinal: 215
        void PlotStems_short_(char const *, short const *, short const *, int, double, int, int);

    // RVA: 0xD7 | Ordinal: 216
        void PlotStems_short_(char const *, short const *, int, double, double, double, int, int);

    // RVA: 0x3C8 | Ordinal: 969
        void PlotText(char const *, double, double, bool, struct ImVec2 const &);

    // RVA: 0x3C9 | Ordinal: 970
        void PlotToPixels(struct ImPlotPoint const &, int);

    // RVA: 0x3CA | Ordinal: 971
        void PlotToPixels(double, double, int);

    // RVA: 0xEE | Ordinal: 239
        void PlotVLines___int64_(char const *, __int64 const *, int, int, int);

    // RVA: 0xED | Ordinal: 238
        void PlotVLines_double_(char const *, double const *, int, int, int);

    // RVA: 0xEC | Ordinal: 237
        void PlotVLines_float_(char const *, float const *, int, int, int);

    // RVA: 0xEA | Ordinal: 235
        void PlotVLines_int_(char const *, int const *, int, int, int);

    // RVA: 0xE8 | Ordinal: 233
        void PlotVLines_short_(char const *, short const *, int, int, int);

    // RVA: 0x3CF | Ordinal: 976
        void PopColormap(int);

    // RVA: 0x3D6 | Ordinal: 983
        void PopPlotClipRect(void);

    // RVA: 0x3D8 | Ordinal: 985
        void PopStyleColor(int);

    // RVA: 0x3DA | Ordinal: 987
        void PopStyleVar(int);

    // RVA: 0x3E4 | Ordinal: 997
        void PullLinkedAxis(struct ImPlotAxis &);

    // RVA: 0x3EA | Ordinal: 1003
        void PushColormap(int);

    // RVA: 0x3EB | Ordinal: 1004
        void PushColormap(struct ImVec4 const *, int);

    // RVA: 0x3F6 | Ordinal: 1015
        void PushLinkedAxis(struct ImPlotAxis &);

    // RVA: 0x3F9 | Ordinal: 1018
        void PushPlotClipRect(void);

    // RVA: 0x3FC | Ordinal: 1021
        void PushStyleColor(int, struct ImVec4 const &);

    // RVA: 0x3FD | Ordinal: 1022
        void PushStyleColor(int, unsigned int);

    // RVA: 0x400 | Ordinal: 1025
        void PushStyleVar(int, struct ImVec2 const &);

    // RVA: 0x401 | Ordinal: 1026
        void PushStyleVar(int, int);

    // RVA: 0x402 | Ordinal: 1027
        void PushStyleVar(int, float);

    // RVA: 0x408 | Ordinal: 1033
        void RegisterOrGetItem(char const *, bool *);

    // RVA: 0x41C | Ordinal: 1053
        void ResampleColormap(struct ImVec4 const *, int, struct ImVec4 *, int);

    // RVA: 0x41D | Ordinal: 1054
        void Reset(struct ImPlotContext *);

    // RVA: 0x421 | Ordinal: 1058
        void RoundTime(struct ImPlotTime const &, int);

    // RVA: 0x438 | Ordinal: 1081
        void SetColormap(int, int);

    // RVA: 0x439 | Ordinal: 1082
        void SetColormap(struct ImVec4 const *, int);

    // RVA: 0x43E | Ordinal: 1087
        void SetCurrentContext(struct ImPlotContext *);

    // RVA: 0x44A | Ordinal: 1099
        void SetImGuiContext(struct ImGuiContext *);

    // RVA: 0x450 | Ordinal: 1105
        void SetLegendLocation(int, int, bool);

    // RVA: 0x452 | Ordinal: 1107
        void SetMousePosLocation(int);

    // RVA: 0x455 | Ordinal: 1110
        void SetNextErrorBarStyle(struct ImVec4 const &, float, float);

    // RVA: 0x456 | Ordinal: 1111
        void SetNextFillStyle(struct ImVec4 const &, float);

    // RVA: 0x459 | Ordinal: 1114
        void SetNextLineStyle(struct ImVec4 const &, float);

    // RVA: 0x45A | Ordinal: 1115
        void SetNextMarkerStyle(int, float, struct ImVec4 const &, float, struct ImVec4 const &);

    // RVA: 0x45B | Ordinal: 1116
        void SetNextPlotLimits(double, double, double, double, int);

    // RVA: 0x45C | Ordinal: 1117
        void SetNextPlotLimitsX(double, double, int);

    // RVA: 0x45D | Ordinal: 1118
        void SetNextPlotLimitsY(double, double, int, int);

    // RVA: 0x45E | Ordinal: 1119
        void SetNextPlotTicksX(double, double, int, char const *const *const, bool);

    // RVA: 0x45F | Ordinal: 1120
        void SetNextPlotTicksX(double const *, int, char const *const *const, bool);

    // RVA: 0x460 | Ordinal: 1121
        void SetNextPlotTicksY(double, double, int, char const *const *const, bool, int);

    // RVA: 0x461 | Ordinal: 1122
        void SetNextPlotTicksY(double const *, int, char const *const *const, bool, int);

    // RVA: 0x46A | Ordinal: 1131
        void SetPlotYAxis(int);

    // RVA: 0x48D | Ordinal: 1166
        void ShowAltLegend(char const *, int, struct ImVec2, bool);

    // RVA: 0x48E | Ordinal: 1167
        void ShowAxisContextMenu(struct ImPlotAxis &, struct ImPlotAxis *, bool);

    // RVA: 0x48F | Ordinal: 1168
        void ShowColormapScale(double, double, float);

    // RVA: 0x490 | Ordinal: 1169
        void ShowColormapSelector(char const *);

    // RVA: 0x491 | Ordinal: 1170
        void ShowDatePicker(char const *, int *, struct ImPlotTime *, struct ImPlotTime const *, struct ImPlotTime const *);

    // RVA: 0x493 | Ordinal: 1172
        void ShowDemoWindow(bool *);

    // RVA: 0x495 | Ordinal: 1174
        void ShowLegendEntries(struct ImPlotPlot &, struct ImRect const &, bool, struct ImVec2 const &, struct ImVec2 const &, int, struct ImDrawList &);

    // RVA: 0x497 | Ordinal: 1176
        void ShowMetricsWindow(bool *);

    // RVA: 0x498 | Ordinal: 1177
        void ShowPlotContextMenu(struct ImPlotPlot &);

    // RVA: 0x49A | Ordinal: 1179
        void ShowStyleEditor(struct ImPlotStyle *);

    // RVA: 0x49C | Ordinal: 1181
        void ShowStyleSelector(char const *);

    // RVA: 0x49D | Ordinal: 1182
        void ShowTimePicker(char const *, struct ImPlotTime *);

    // RVA: 0x49F | Ordinal: 1184
        void ShowUserGuide(void);

    // RVA: 0x4B7 | Ordinal: 1208
        void StyleColorsAuto(struct ImPlotStyle *);

    // RVA: 0x4B9 | Ordinal: 1210
        void StyleColorsClassic(struct ImPlotStyle *);

    // RVA: 0x4BB | Ordinal: 1212
        void StyleColorsDark(struct ImPlotStyle *);

    // RVA: 0x4BD | Ordinal: 1214
        void StyleColorsLight(struct ImPlotStyle *);

    // RVA: 0x4EE | Ordinal: 1263
        void UpdateAxisColors(int, struct ImPlotAxis *);

    // RVA: 0x4F2 | Ordinal: 1267
        void UpdateTransformCache(void);
};

// DCS_OPS_RE_IMGUI.DLL_IMPLOT_HPP
