#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class FX
{
public:

    // RVA: 0x6EB | Ordinal: 1772
        void FXString(void) const;

    // RVA: 0x0 | Ordinal: 1
        void FXVariant_(class FX::FXArray<class FX::FXVariant> const &);

    // RVA: 0x1 | Ordinal: 2
        void FXVariant_(class FX::FXVariant const &, __int64);

    // RVA: 0x2 | Ordinal: 3
        void FXVariant_(class FX::FXVariant const *, __int64);

    // RVA: 0x3 | Ordinal: 4
        void FXVariant_(void);

    // RVA: 0x4 | Ordinal: 5
        void FXVariant_(__int64);

    // RVA: 0x93F | Ordinal: 2368
        void __snprintf(char *, int, char const *, ...);

    // RVA: 0x940 | Ordinal: 2369
        void __sscanf(char const *, char const *, ...);

    // RVA: 0x941 | Ordinal: 2370
        void __strtod(char const *, char const **, bool *);

    // RVA: 0x942 | Ordinal: 2371
        void __strtof(char const *, char const **, bool *);

    // RVA: 0x943 | Ordinal: 2372
        void __strtol(char const *, char const **, int, bool *);

    // RVA: 0x944 | Ordinal: 2373
        void __strtoll(char const *, char const **, int, bool *);

    // RVA: 0x945 | Ordinal: 2374
        void __strtoul(char const *, char const **, int, bool *);

    // RVA: 0x946 | Ordinal: 2375
        void __strtoull(char const *, char const **, int, bool *);

    // RVA: 0x947 | Ordinal: 2376
        void __vsnprintf(char *, int, char const *, char *);

    // RVA: 0x948 | Ordinal: 2377
        void __vsscanf(char const *, char const *, char *);

    // RVA: 0x9EB | Ordinal: 2540
        void arc(class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x9EC | Ordinal: 2541
        void arc(class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0xA41 | Ordinal: 2626
        void atomicAdd(int volatile *, int);

    // RVA: 0xA42 | Ordinal: 2627
        void atomicAdd(unsigned int volatile *, unsigned int);

    // RVA: 0xA43 | Ordinal: 2628
        void atomicAdd(void *volatile *, __int64);

    // RVA: 0xA44 | Ordinal: 2629
        void atomicBoolCas(int volatile *, int, int);

    // RVA: 0xA45 | Ordinal: 2630
        void atomicBoolCas(unsigned int volatile *, unsigned int, unsigned int);

    // RVA: 0xA46 | Ordinal: 2631
        void atomicBoolCas(void *volatile *, void *, void *);

    // RVA: 0xA47 | Ordinal: 2632
        void atomicBoolDCas(void *volatile *, void *, void *, void *, void *);

    // RVA: 0xA48 | Ordinal: 2633
        void atomicCas(int volatile *, int, int);

    // RVA: 0xA49 | Ordinal: 2634
        void atomicCas(unsigned int volatile *, unsigned int, unsigned int);

    // RVA: 0xA4A | Ordinal: 2635
        void atomicCas(void *volatile *, void *, void *);

    // RVA: 0xA4B | Ordinal: 2636
        void atomicSet(int volatile *, int);

    // RVA: 0xA4C | Ordinal: 2637
        void atomicSet(unsigned int volatile *, unsigned int);

    // RVA: 0xA4D | Ordinal: 2638
        void atomicSet(void *volatile *, void *);

    // RVA: 0xA4E | Ordinal: 2639
        void atomicsAvailable(void);

    // RVA: 0xA62 | Ordinal: 2659
        void blendOverBackground(unsigned int, unsigned int);

    // RVA: 0xA63 | Ordinal: 2660
        void blendOverBlack(unsigned int);

    // RVA: 0xA64 | Ordinal: 2661
        void blendOverWhite(unsigned int);

    // RVA: 0xAAC | Ordinal: 2733
        void ccos(class FX::FXComplexd const &);

    // RVA: 0xAAD | Ordinal: 2734
        void ccos(class FX::FXComplexf const &);

    // RVA: 0xAAE | Ordinal: 2735
        void ccosh(class FX::FXComplexd const &);

    // RVA: 0xAAF | Ordinal: 2736
        void ccosh(class FX::FXComplexf const &);

    // RVA: 0xB0A | Ordinal: 2827
        void colorFromName(class FX::FXString const &);

    // RVA: 0xB0B | Ordinal: 2828
        void colorFromName(char const *);

    // RVA: 0xB0C | Ordinal: 2829
        void colorFromVec3d(class FX::FXVec3d const &);

    // RVA: 0xB0D | Ordinal: 2830
        void colorFromVec3f(class FX::FXVec3f const &);

    // RVA: 0xB0E | Ordinal: 2831
        void colorFromVec4d(class FX::FXVec4d const &);

    // RVA: 0xB0F | Ordinal: 2832
        void colorFromVec4f(class FX::FXVec4f const &);

    // RVA: 0xB11 | Ordinal: 2834
        void colorToVec3d(unsigned int);

    // RVA: 0xB12 | Ordinal: 2835
        void colorToVec3f(unsigned int);

    // RVA: 0xB13 | Ordinal: 2836
        void colorToVec4d(unsigned int);

    // RVA: 0xB14 | Ordinal: 2837
        void colorToVec4f(unsigned int);

    // RVA: 0xB1A | Ordinal: 2843
        void compare(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0xB1B | Ordinal: 2844
        void compare(class FX::FXString const &, class FX::FXString const &, int);

    // RVA: 0xB1C | Ordinal: 2845
        void compare(class FX::FXString const &, char const *);

    // RVA: 0xB1D | Ordinal: 2846
        void compare(class FX::FXString const &, char const *, int);

    // RVA: 0xB1E | Ordinal: 2847
        void compare(char const *, char const *);

    // RVA: 0xB1F | Ordinal: 2848
        void compare(char const *, char const *, int);

    // RVA: 0xB20 | Ordinal: 2849
        void compare(char const *, class FX::FXString const &);

    // RVA: 0xB21 | Ordinal: 2850
        void compare(char const *, class FX::FXString const &, int);

    // RVA: 0xB26 | Ordinal: 2855
        void comparecase(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0xB27 | Ordinal: 2856
        void comparecase(class FX::FXString const &, class FX::FXString const &, int);

    // RVA: 0xB28 | Ordinal: 2857
        void comparecase(class FX::FXString const &, char const *);

    // RVA: 0xB29 | Ordinal: 2858
        void comparecase(class FX::FXString const &, char const *, int);

    // RVA: 0xB2A | Ordinal: 2859
        void comparecase(char const *, char const *);

    // RVA: 0xB2B | Ordinal: 2860
        void comparecase(char const *, char const *, int);

    // RVA: 0xB2C | Ordinal: 2861
        void comparecase(char const *, class FX::FXString const &);

    // RVA: 0xB2D | Ordinal: 2862
        void comparecase(char const *, class FX::FXString const &, int);

    // RVA: 0xB2E | Ordinal: 2863
        void compareversion(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0xB2F | Ordinal: 2864
        void compareversion(class FX::FXString const &, char const *);

    // RVA: 0xB30 | Ordinal: 2865
        void compareversion(char const *, char const *);

    // RVA: 0xB31 | Ordinal: 2866
        void compareversion(char const *, class FX::FXString const &);

    // RVA: 0xB32 | Ordinal: 2867
        void compareversioncase(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0xB33 | Ordinal: 2868
        void compareversioncase(class FX::FXString const &, char const *);

    // RVA: 0xB34 | Ordinal: 2869
        void compareversioncase(char const *, char const *);

    // RVA: 0xB35 | Ordinal: 2870
        void compareversioncase(char const *, class FX::FXString const &);

    // RVA: 0xB36 | Ordinal: 2871
        void compose(class FX::FXString const &, bool);

    // RVA: 0xBFF | Ordinal: 3072
        void csin(class FX::FXComplexd const &);

    // RVA: 0xC00 | Ordinal: 3073
        void csin(class FX::FXComplexf const &);

    // RVA: 0xC01 | Ordinal: 3074
        void csinh(class FX::FXComplexd const &);

    // RVA: 0xC02 | Ordinal: 3075
        void csinh(class FX::FXComplexf const &);

    // RVA: 0xC03 | Ordinal: 3076
        void csqrt(class FX::FXComplexd const &);

    // RVA: 0xC04 | Ordinal: 3077
        void csqrt(class FX::FXComplexf const &);

    // RVA: 0xC07 | Ordinal: 3080
        void ctan(class FX::FXComplexd const &);

    // RVA: 0xC08 | Ordinal: 3081
        void ctan(class FX::FXComplexf const &);

    // RVA: 0xC09 | Ordinal: 3082
        void ctanh(class FX::FXComplexd const &);

    // RVA: 0xC0A | Ordinal: 3083
        void ctanh(class FX::FXComplexf const &);

    // RVA: 0xC31 | Ordinal: 3122
        void decompose(class FX::FXString const &, bool);

    // RVA: 0xD0B | Ordinal: 3340
        void dosToUnix(class FX::FXString &);

    // RVA: 0xE46 | Ordinal: 3655
        void escape(class FX::FXString const &, char, char, int);

    // RVA: 0xE88 | Ordinal: 3721
        void fastnormalize(class FX::FXVec2f const &);

    // RVA: 0xE89 | Ordinal: 3722
        void fastnormalize(class FX::FXVec3f const &);

    // RVA: 0xE8A | Ordinal: 3723
        void fastnormalize(class FX::FXVec4f const &);

    // RVA: 0xF1D | Ordinal: 3870
        void findHotKey(class FX::FXString const &);

    // RVA: 0xF6D | Ordinal: 3950
        void fxCPUCaps(unsigned int);

    // RVA: 0xF6E | Ordinal: 3951
        void fxCPUFeatures(void);

    // RVA: 0xF6F | Ordinal: 3952
        void fxCPUGetCaps(unsigned int, unsigned int *const);

    // RVA: 0xF70 | Ordinal: 3953
        void fxCPUGetXCaps(unsigned int, unsigned int, unsigned int *const);

    // RVA: 0xF71 | Ordinal: 3954
        void fxCPUName(char *const);

    // RVA: 0xF72 | Ordinal: 3955
        void fxIsFinite(float);

    // RVA: 0xF73 | Ordinal: 3956
        void fxIsFinite(double);

    // RVA: 0xF74 | Ordinal: 3957
        void fxIsInf(float);

    // RVA: 0xF75 | Ordinal: 3958
        void fxIsInf(double);

    // RVA: 0xF76 | Ordinal: 3959
        void fxIsNan(float);

    // RVA: 0xF77 | Ordinal: 3960
        void fxIsNan(double);

    // RVA: 0xF78 | Ordinal: 3961
        void fxSignBit(float);

    // RVA: 0xF79 | Ordinal: 3962
        void fxSignBit(double);

    // RVA: 0xF7B | Ordinal: 3964
        void fxassert(char const *, char const *, unsigned int);

    // RVA: 0xF7C | Ordinal: 3965
        void fxcalloc(void **, unsigned __int64);

    // RVA: 0xF7D | Ordinal: 3966
        void fxcheckBMP(class FX::FXStream &);

    // RVA: 0xF7E | Ordinal: 3967
        void fxcheckDDS(class FX::FXStream &);

    // RVA: 0xF7F | Ordinal: 3968
        void fxcheckEXE(class FX::FXStream &);

    // RVA: 0xF80 | Ordinal: 3969
        void fxcheckGIF(class FX::FXStream &);

    // RVA: 0xF81 | Ordinal: 3970
        void fxcheckICO(class FX::FXStream &);

    // RVA: 0xF82 | Ordinal: 3971
        void fxcheckIFF(class FX::FXStream &);

    // RVA: 0xF83 | Ordinal: 3972
        void fxcheckJP2(class FX::FXStream &);

    // RVA: 0xF84 | Ordinal: 3973
        void fxcheckJPG(class FX::FXStream &);

    // RVA: 0xF85 | Ordinal: 3974
        void fxcheckPCX(class FX::FXStream &);

    // RVA: 0xF86 | Ordinal: 3975
        void fxcheckPNG(class FX::FXStream &);

    // RVA: 0xF87 | Ordinal: 3976
        void fxcheckPPM(class FX::FXStream &);

    // RVA: 0xF88 | Ordinal: 3977
        void fxcheckRAS(class FX::FXStream &);

    // RVA: 0xF89 | Ordinal: 3978
        void fxcheckRGB(class FX::FXStream &);

    // RVA: 0xF8A | Ordinal: 3979
        void fxcheckTGA(class FX::FXStream &);

    // RVA: 0xF8B | Ordinal: 3980
        void fxcheckTIF(class FX::FXStream &);

    // RVA: 0xF8C | Ordinal: 3981
        void fxcheckWEBP(class FX::FXStream &);

    // RVA: 0xF8D | Ordinal: 3982
        void fxcheckXBM(class FX::FXStream &);

    // RVA: 0xF8E | Ordinal: 3983
        void fxcheckXPM(class FX::FXStream &);

    // RVA: 0xF8F | Ordinal: 3984
        void fxerror(char const *, ...);

    // RVA: 0xF90 | Ordinal: 3985
        void fxfree(void **);

    // RVA: 0xF91 | Ordinal: 3986
        void fxfromDOS(char *&, int &);

    // RVA: 0xF92 | Ordinal: 3987
        void fxgetticks(void);

    // RVA: 0xF93 | Ordinal: 3988
        void fxhsl_to_rgb(float &, float &, float &, float, float, float);

    // RVA: 0xF94 | Ordinal: 3989
        void fxhsv_to_rgb(float &, float &, float &, float, float, float);

    // RVA: 0xF95 | Ordinal: 3990
        void fxieeedoubleclass(double);

    // RVA: 0xF96 | Ordinal: 3991
        void fxieeefloatclass(float);

    // RVA: 0xF97 | Ordinal: 3992
        void fxisconsole(char const *);

    // RVA: 0xF98 | Ordinal: 3993
        void fxkeysym2ucs(unsigned int);

    // RVA: 0xF99 | Ordinal: 3994
        void fxloadBMP(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xF9A | Ordinal: 3995
        void fxloadDDS(class FX::FXStream &, unsigned int *&, int &, int &, int &);

    // RVA: 0xF9B | Ordinal: 3996
        void fxloadDIB(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xF9C | Ordinal: 3997
        void fxloadEXE(class FX::FXStream &, unsigned int *&, int &, int &, int, int);

    // RVA: 0xF9D | Ordinal: 3998
        void fxloadGIF(class FX::FXStream &, unsigned int *&, int &, int &, bool);

    // RVA: 0xF9E | Ordinal: 3999
        void fxloadICO(class FX::FXStream &, unsigned int *&, int &, int &, int &, int &);

    // RVA: 0xF9F | Ordinal: 4000
        void fxloadICOStream(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xFA0 | Ordinal: 4001
        void fxloadIFF(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xFA1 | Ordinal: 4002
        void fxloadJP2(class FX::FXStream &, unsigned int *&, int &, int &, int &);

    // RVA: 0xFA2 | Ordinal: 4003
        void fxloadJPG(class FX::FXStream &, unsigned int *&, int &, int &, int &);

    // RVA: 0xFA3 | Ordinal: 4004
        void fxloadPCX(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xFA4 | Ordinal: 4005
        void fxloadPNG(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xFA5 | Ordinal: 4006
        void fxloadPPM(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xFA6 | Ordinal: 4007
        void fxloadRAS(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xFA7 | Ordinal: 4008
        void fxloadRGB(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xFA8 | Ordinal: 4009
        void fxloadTGA(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xFA9 | Ordinal: 4010
        void fxloadTIF(class FX::FXStream &, unsigned int *&, int &, int &, unsigned short &);

    // RVA: 0xFAA | Ordinal: 4011
        void fxloadWEBP(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xFAB | Ordinal: 4012
        void fxloadXBM(unsigned int *&, unsigned char const *, unsigned char const *, int, int);

    // RVA: 0xFAC | Ordinal: 4013
        void fxloadXBM(class FX::FXStream &, unsigned int *&, int &, int &, int &, int &);

    // RVA: 0xFAD | Ordinal: 4014
        void fxloadXPM(class FX::FXStream &, unsigned int *&, int &, int &);

    // RVA: 0xFAE | Ordinal: 4015
        void fxloadXPM(char const **, unsigned int *&, int &, int &);

    // RVA: 0xFAF | Ordinal: 4016
        void fxmalloc(void **, unsigned __int64);

    // RVA: 0xFB0 | Ordinal: 4017
        void fxmemdup(void **, void const *, unsigned __int64);

    // RVA: 0xFB1 | Ordinal: 4018
        void fxmessage(char const *, ...);

    // RVA: 0xFB2 | Ordinal: 4019
        void fxopen(char const *, char const *);

    // RVA: 0xFB3 | Ordinal: 4020
        void fxparsegeometry(char const *, int &, int &, int &, int &);

    // RVA: 0xFB4 | Ordinal: 4021
        void fxrandom(unsigned int &);

    // RVA: 0xFB5 | Ordinal: 4022
        void fxreopen(char const *, char const *, struct _iobuf *);

    // RVA: 0xFB6 | Ordinal: 4023
        void fxresize(void **, unsigned __int64);

    // RVA: 0xFB7 | Ordinal: 4024
        void fxrgb_to_hsl(float &, float &, float &, float, float, float);

    // RVA: 0xFB8 | Ordinal: 4025
        void fxrgb_to_hsv(float &, float &, float &, float, float, float);

    // RVA: 0xFB9 | Ordinal: 4026
        void fxsaveBMP(class FX::FXStream &, unsigned int const *, int, int);

    // RVA: 0xFBA | Ordinal: 4027
        void fxsaveDDS(class FX::FXStream &, unsigned int *, int, int, int);

    // RVA: 0xFBB | Ordinal: 4028
        void fxsaveDIB(class FX::FXStream &, unsigned int const *, int, int);

    // RVA: 0xFBC | Ordinal: 4029
        void fxsaveGIF(class FX::FXStream &, unsigned int const *, int, int, bool);

    // RVA: 0xFBD | Ordinal: 4030
        void fxsaveICO(class FX::FXStream &, unsigned int const *, int, int, int, int);

    // RVA: 0xFBE | Ordinal: 4031
        void fxsaveJP2(class FX::FXStream &, unsigned int const *, int, int, int);

    // RVA: 0xFBF | Ordinal: 4032
        void fxsaveJPG(class FX::FXStream &, unsigned int const *, int, int, int);

    // RVA: 0xFC0 | Ordinal: 4033
        void fxsavePCX(class FX::FXStream &, unsigned int const *, int, int);

    // RVA: 0xFC1 | Ordinal: 4034
        void fxsavePNG(class FX::FXStream &, unsigned int const *, int, int);

    // RVA: 0xFC2 | Ordinal: 4035
        void fxsavePPM(class FX::FXStream &, unsigned int const *, int, int);

    // RVA: 0xFC3 | Ordinal: 4036
        void fxsavePS(class FX::FXStream &, unsigned int const *, int, int, int, int, int, bool);

    // RVA: 0xFC4 | Ordinal: 4037
        void fxsaveRAS(class FX::FXStream &, unsigned int const *, int, int);

    // RVA: 0xFC5 | Ordinal: 4038
        void fxsaveRGB(class FX::FXStream &, unsigned int const *, int, int);

    // RVA: 0xFC6 | Ordinal: 4039
        void fxsaveTGA(class FX::FXStream &, unsigned int const *, int, int);

    // RVA: 0xFC7 | Ordinal: 4040
        void fxsaveTIF(class FX::FXStream &, unsigned int const *, int, int, unsigned short);

    // RVA: 0xFC8 | Ordinal: 4041
        void fxsaveWEBP(class FX::FXStream &, unsigned int const *, int, int, float);

    // RVA: 0xFC9 | Ordinal: 4042
        void fxsaveXBM(class FX::FXStream &, unsigned int const *, int, int, int, int);

    // RVA: 0xFCA | Ordinal: 4043
        void fxsaveXPM(class FX::FXStream &, unsigned int const *, int, int, bool);

    // RVA: 0xFCB | Ordinal: 4044
        void fxstrdup(char const *);

    // RVA: 0xFCC | Ordinal: 4045
        void fxstrhash(char const *);

    // RVA: 0xFCD | Ordinal: 4046
        void fxstrlcat(char *, char const *, __int64);

    // RVA: 0xFCE | Ordinal: 4047
        void fxstrlcpy(char *, char const *, __int64);

    // RVA: 0xFCF | Ordinal: 4048
        void fxtenToThe(int);

    // RVA: 0xFD0 | Ordinal: 4049
        void fxtoDOS(char *&, int &);

    // RVA: 0xFD1 | Ordinal: 4050
        void fxtrace(int, char const *, ...);

    // RVA: 0xFD2 | Ordinal: 4051
        void fxucs2keysym(unsigned int);

    // RVA: 0xFD3 | Ordinal: 4052
        void fxverify(char const *, char const *, unsigned int);

    // RVA: 0xFD5 | Ordinal: 4054
        void fxwarning(char const *, ...);

    // RVA: 0x16DE | Ordinal: 5855
        void glUseFXFont(class FX::FXFont *, int, int, int);

    // RVA: 0x18D5 | Ordinal: 6358
        void intersect(class FX::FXExtentd const &, class FX::FXExtentd const &);

    // RVA: 0x18D6 | Ordinal: 6359
        void intersect(class FX::FXExtentf const &, class FX::FXExtentf const &);

    // RVA: 0x18D7 | Ordinal: 6360
        void intersect(class FX::FXRanged const &, class FX::FXRanged const &);

    // RVA: 0x18D8 | Ordinal: 6361
        void intersect(class FX::FXRangef const &, class FX::FXRangef const &);

    // RVA: 0x1A8F | Ordinal: 6800
        void lerp(class FX::FXQuatd const &, class FX::FXQuatd const &, double);

    // RVA: 0x1A90 | Ordinal: 6801
        void lerp(class FX::FXQuatf const &, class FX::FXQuatf const &, float);

    // RVA: 0x1A91 | Ordinal: 6802
        void lerp(class FX::FXVec2d const &, class FX::FXVec2d const &, double);

    // RVA: 0x1A92 | Ordinal: 6803
        void lerp(class FX::FXVec2f const &, class FX::FXVec2f const &, float);

    // RVA: 0x1A93 | Ordinal: 6804
        void lerp(class FX::FXVec3d const &, class FX::FXVec3d const &, double);

    // RVA: 0x1A94 | Ordinal: 6805
        void lerp(class FX::FXVec3f const &, class FX::FXVec3f const &, float);

    // RVA: 0x1A95 | Ordinal: 6806
        void lerp(class FX::FXVec4d const &, class FX::FXVec4d const &, double);

    // RVA: 0x1A96 | Ordinal: 6807
        void lerpdot(class FX::FXQuatd const &, class FX::FXQuatd const &, double);

    // RVA: 0x1A97 | Ordinal: 6808
        void lerpdot(class FX::FXQuatf const &, class FX::FXQuatf const &, float);

    // RVA: 0x1BA7 | Ordinal: 7080
        void makeBlendColor(unsigned int, unsigned int, int);

    // RVA: 0x1BA9 | Ordinal: 7082
        void makeHiliteColor(unsigned int, int);

    // RVA: 0x1BB4 | Ordinal: 7093
        void makeShadowColor(unsigned int, int);

    // RVA: 0x1D02 | Ordinal: 7427
        void memswap(void *, void *, unsigned __int64);

    // RVA: 0x1F07 | Ordinal: 7944
        void nameFromColor(unsigned int);

    // RVA: 0x1F08 | Ordinal: 7945
        void nameFromColor(char *, unsigned int);

    // RVA: 0x1F09 | Ordinal: 7946
        void ncs2utf(char *, wchar_t const *, int);

    // RVA: 0x1F0A | Ordinal: 7947
        void ncs2utf(char *, wchar_t const *, int, int);

    // RVA: 0x1F0B | Ordinal: 7948
        void ncs2utf(wchar_t const *);

    // RVA: 0x1F0C | Ordinal: 7949
        void ncs2utf(wchar_t const *, int);

    // RVA: 0x1F24 | Ordinal: 7973
        void normal(class FX::FXVec3d const &, class FX::FXVec3d const &, class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x1F25 | Ordinal: 7974
        void normal(class FX::FXVec3d const &, class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x1F26 | Ordinal: 7975
        void normal(class FX::FXVec3f const &, class FX::FXVec3f const &, class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x1F27 | Ordinal: 7976
        void normal(class FX::FXVec3f const &, class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x1F2A | Ordinal: 7979
        void normalize(class FX::FXString const &);

    // RVA: 0x1F2B | Ordinal: 7980
        void normalize(class FX::FXVec2d const &);

    // RVA: 0x1F2C | Ordinal: 7981
        void normalize(class FX::FXVec2f const &);

    // RVA: 0x1F2D | Ordinal: 7982
        void normalize(class FX::FXVec3d const &);

    // RVA: 0x1F2E | Ordinal: 7983
        void normalize(class FX::FXVec3f const &);

    // RVA: 0x1F2F | Ordinal: 7984
        void normalize(class FX::FXVec4d const &);

    // RVA: 0x1F30 | Ordinal: 7985
        void normalize(class FX::FXVec4f const &);

    // RVA: 0x77F | Ordinal: 1920
        void operator_(class FX::FXString const &, class FX::FXString const &);

    // RVA: 0x780 | Ordinal: 1921
        void operator_(class FX::FXString const &, char const *);

    // RVA: 0x781 | Ordinal: 1922
        void operator_(char const *, class FX::FXString const &);

    // RVA: 0x5FB | Ordinal: 1532
        void operator__(class FX::FXStream &, class FX::FXComplexd const &);

    // RVA: 0x5FC | Ordinal: 1533
        void operator__(class FX::FXStream &, class FX::FXComplexf const &);

    // RVA: 0x5FD | Ordinal: 1534
        void operator__(class FX::FXStream &, class FX::FXDate const &);

    // RVA: 0x5FE | Ordinal: 1535
        void operator__(class FX::FXStream &, class FX::FXExpression const &);

    // RVA: 0x5FF | Ordinal: 1536
        void operator__(class FX::FXStream &, class FX::FXExtentd const &);

    // RVA: 0x600 | Ordinal: 1537
        void operator__(class FX::FXStream &, class FX::FXExtentf const &);

    // RVA: 0x601 | Ordinal: 1538
        void operator__(class FX::FXStream &, class FX::FXMat2d const &);

    // RVA: 0x602 | Ordinal: 1539
        void operator__(class FX::FXStream &, class FX::FXMat2f const &);

    // RVA: 0x603 | Ordinal: 1540
        void operator__(class FX::FXStream &, class FX::FXMat3d const &);

    // RVA: 0x604 | Ordinal: 1541
        void operator__(class FX::FXStream &, class FX::FXMat3f const &);

    // RVA: 0x605 | Ordinal: 1542
        void operator__(class FX::FXStream &, class FX::FXMat4d const &);

    // RVA: 0x606 | Ordinal: 1543
        void operator__(class FX::FXStream &, class FX::FXMat4f const &);

    // RVA: 0x607 | Ordinal: 1544
        void operator__(class FX::FXStream &, class FX::FXPoint const &);

    // RVA: 0x608 | Ordinal: 1545
        void operator__(class FX::FXStream &, class FX::FXQuatd const &);

    // RVA: 0x609 | Ordinal: 1546
        void operator__(class FX::FXStream &, class FX::FXQuatf const &);

    // RVA: 0x60A | Ordinal: 1547
        void operator__(class FX::FXStream &, class FX::FXRanged const &);

    // RVA: 0x60B | Ordinal: 1548
        void operator__(class FX::FXStream &, class FX::FXRangef const &);

    // RVA: 0x60C | Ordinal: 1549
        void operator__(class FX::FXStream &, class FX::FXRectangle const &);

    // RVA: 0x60D | Ordinal: 1550
        void operator__(class FX::FXStream &, class FX::FXRex const &);

    // RVA: 0x60E | Ordinal: 1551
        void operator__(class FX::FXStream &, class FX::FXSize const &);

    // RVA: 0x60F | Ordinal: 1552
        void operator__(class FX::FXStream &, class FX::FXSphered const &);

    // RVA: 0x610 | Ordinal: 1553
        void operator__(class FX::FXStream &, class FX::FXSpheref const &);

    // RVA: 0x611 | Ordinal: 1554
        void operator__(class FX::FXStream &, class FX::FXString const &);

    // RVA: 0x612 | Ordinal: 1555
        void operator__(class FX::FXStream &, class FX::FXVec2d const &);

    // RVA: 0x613 | Ordinal: 1556
        void operator__(class FX::FXStream &, class FX::FXVec2f const &);

    // RVA: 0x614 | Ordinal: 1557
        void operator__(class FX::FXStream &, class FX::FXVec3d const &);

    // RVA: 0x615 | Ordinal: 1558
        void operator__(class FX::FXStream &, class FX::FXVec3f const &);

    // RVA: 0x616 | Ordinal: 1559
        void operator__(class FX::FXStream &, class FX::FXVec4d const &);

    // RVA: 0x617 | Ordinal: 1560
        void operator__(class FX::FXStream &, class FX::FXVec4f const &);

    // RVA: 0x5BD | Ordinal: 1470
        void operator__(class FX::FXStream &, class FX::FXComplexd &);

    // RVA: 0x5BE | Ordinal: 1471
        void operator__(class FX::FXStream &, class FX::FXComplexf &);

    // RVA: 0x5BF | Ordinal: 1472
        void operator__(class FX::FXStream &, class FX::FXDate &);

    // RVA: 0x5C0 | Ordinal: 1473
        void operator__(class FX::FXStream &, class FX::FXExpression &);

    // RVA: 0x5C1 | Ordinal: 1474
        void operator__(class FX::FXStream &, class FX::FXExtentd &);

    // RVA: 0x5C2 | Ordinal: 1475
        void operator__(class FX::FXStream &, class FX::FXExtentf &);

    // RVA: 0x5C3 | Ordinal: 1476
        void operator__(class FX::FXStream &, class FX::FXMat2d &);

    // RVA: 0x5C4 | Ordinal: 1477
        void operator__(class FX::FXStream &, class FX::FXMat2f &);

    // RVA: 0x5C5 | Ordinal: 1478
        void operator__(class FX::FXStream &, class FX::FXMat3d &);

    // RVA: 0x5C6 | Ordinal: 1479
        void operator__(class FX::FXStream &, class FX::FXMat3f &);

    // RVA: 0x5C7 | Ordinal: 1480
        void operator__(class FX::FXStream &, class FX::FXMat4d &);

    // RVA: 0x5C8 | Ordinal: 1481
        void operator__(class FX::FXStream &, class FX::FXMat4f &);

    // RVA: 0x5C9 | Ordinal: 1482
        void operator__(class FX::FXStream &, class FX::FXPoint &);

    // RVA: 0x5CA | Ordinal: 1483
        void operator__(class FX::FXStream &, class FX::FXQuatd &);

    // RVA: 0x5CB | Ordinal: 1484
        void operator__(class FX::FXStream &, class FX::FXQuatf &);

    // RVA: 0x5CC | Ordinal: 1485
        void operator__(class FX::FXStream &, class FX::FXRanged &);

    // RVA: 0x5CD | Ordinal: 1486
        void operator__(class FX::FXStream &, class FX::FXRangef &);

    // RVA: 0x5CE | Ordinal: 1487
        void operator__(class FX::FXStream &, class FX::FXRectangle &);

    // RVA: 0x5CF | Ordinal: 1488
        void operator__(class FX::FXStream &, class FX::FXRex &);

    // RVA: 0x5D0 | Ordinal: 1489
        void operator__(class FX::FXStream &, class FX::FXSize &);

    // RVA: 0x5D1 | Ordinal: 1490
        void operator__(class FX::FXStream &, class FX::FXSphered &);

    // RVA: 0x5D2 | Ordinal: 1491
        void operator__(class FX::FXStream &, class FX::FXSpheref &);

    // RVA: 0x5D3 | Ordinal: 1492
        void operator__(class FX::FXStream &, class FX::FXString &);

    // RVA: 0x5D4 | Ordinal: 1493
        void operator__(class FX::FXStream &, class FX::FXVec2d &);

    // RVA: 0x5D5 | Ordinal: 1494
        void operator__(class FX::FXStream &, class FX::FXVec2f &);

    // RVA: 0x5D6 | Ordinal: 1495
        void operator__(class FX::FXStream &, class FX::FXVec3d &);

    // RVA: 0x5D7 | Ordinal: 1496
        void operator__(class FX::FXStream &, class FX::FXVec3f &);

    // RVA: 0x5D8 | Ordinal: 1497
        void operator__(class FX::FXStream &, class FX::FXVec4d &);

    // RVA: 0x5D9 | Ordinal: 1498
        void operator__(class FX::FXStream &, class FX::FXVec4f &);

    // RVA: 0x264E | Ordinal: 9807
        void overlap(class FX::FXExtentd const &, class FX::FXExtentd const &);

    // RVA: 0x264F | Ordinal: 9808
        void overlap(class FX::FXExtentf const &, class FX::FXExtentf const &);

    // RVA: 0x2650 | Ordinal: 9809
        void overlap(class FX::FXRanged const &, class FX::FXRanged const &);

    // RVA: 0x2651 | Ordinal: 9810
        void overlap(class FX::FXRanged const &, class FX::FXSphered const &);

    // RVA: 0x2652 | Ordinal: 9811
        void overlap(class FX::FXRangef const &, class FX::FXRangef const &);

    // RVA: 0x2653 | Ordinal: 9812
        void overlap(class FX::FXRangef const &, class FX::FXSpheref const &);

    // RVA: 0x2654 | Ordinal: 9813
        void overlap(class FX::FXSphered const &, class FX::FXSphered const &);

    // RVA: 0x2655 | Ordinal: 9814
        void overlap(class FX::FXSphered const &, class FX::FXRanged const &);

    // RVA: 0x2656 | Ordinal: 9815
        void overlap(class FX::FXSpheref const &, class FX::FXSpheref const &);

    // RVA: 0x2657 | Ordinal: 9816
        void overlap(class FX::FXSpheref const &, class FX::FXRangef const &);

    // RVA: 0x2663 | Ordinal: 9828
        void parseAccel(class FX::FXString const &);

    // RVA: 0x2665 | Ordinal: 9830
        void parseHotKey(class FX::FXString const &);

    // RVA: 0x2674 | Ordinal: 9845
        void plane(class FX::FXVec4d const &);

    // RVA: 0x2675 | Ordinal: 9846
        void plane(class FX::FXVec3d const &, class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x2676 | Ordinal: 9847
        void plane(class FX::FXVec3d const &, class FX::FXVec3d const &);

    // RVA: 0x2677 | Ordinal: 9848
        void plane(class FX::FXVec3d const &, double);

    // RVA: 0x2678 | Ordinal: 9849
        void plane(class FX::FXVec4f const &);

    // RVA: 0x2679 | Ordinal: 9850
        void plane(class FX::FXVec3f const &, class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x267A | Ordinal: 9851
        void plane(class FX::FXVec3f const &, class FX::FXVec3f const &);

    // RVA: 0x267B | Ordinal: 9852
        void plane(class FX::FXVec3f const &, float);

    // RVA: 0x2DF4 | Ordinal: 11765
        void shouldEscape(class FX::FXString const &, char, char, int);

    // RVA: 0x2E69 | Ordinal: 11882
        void stripHotKey(class FX::FXString const &);

    // RVA: 0x2EF0 | Ordinal: 12017
        void unescape(class FX::FXString const &, char, char);

    // RVA: 0x2EF5 | Ordinal: 12022
        void unite(class FX::FXExtentd const &, class FX::FXExtentd const &);

    // RVA: 0x2EF6 | Ordinal: 12023
        void unite(class FX::FXExtentf const &, class FX::FXExtentf const &);

    // RVA: 0x2EF7 | Ordinal: 12024
        void unite(class FX::FXRanged const &, class FX::FXRanged const &);

    // RVA: 0x2EF8 | Ordinal: 12025
        void unite(class FX::FXRangef const &, class FX::FXRangef const &);

    // RVA: 0x2EFE | Ordinal: 12031
        void unixToDos(class FX::FXString &);

    // RVA: 0x2F0A | Ordinal: 12043
        void unparseAccel(unsigned int);

    // RVA: 0x2F41 | Ordinal: 12098
        void utf2ncs(wchar_t *, char const *, int);

    // RVA: 0x2F42 | Ordinal: 12099
        void utf2ncs(wchar_t *, char const *, int, int);

    // RVA: 0x2F43 | Ordinal: 12100
        void utf2ncs(char const *);

    // RVA: 0x2F44 | Ordinal: 12101
        void utf2ncs(char const *, int);

    // RVA: 0x2F45 | Ordinal: 12102
        void utf2wcs(unsigned int *, char const *, int);

    // RVA: 0x2F46 | Ordinal: 12103
        void utf2wcs(unsigned int *, char const *, int, int);

    // RVA: 0x2F47 | Ordinal: 12104
        void utf2wcs(char const *);

    // RVA: 0x2F48 | Ordinal: 12105
        void utf2wcs(char const *, int);

    // RVA: 0x2FAB | Ordinal: 12204
        void wc(char const *);

    // RVA: 0x2FAC | Ordinal: 12205
        void wc(wchar_t const *);

    // RVA: 0x2FA7 | Ordinal: 12200
        void wc2nc(unsigned int);

    // RVA: 0x2FA8 | Ordinal: 12201
        void wc2nc(wchar_t *, unsigned int);

    // RVA: 0x2FA9 | Ordinal: 12202
        void wc2utf(unsigned int);

    // RVA: 0x2FAA | Ordinal: 12203
        void wc2utf(char *, unsigned int);

    // RVA: 0x2FAE | Ordinal: 12207
        void wcdec(char *);

    // RVA: 0x2FAF | Ordinal: 12208
        void wcdec(wchar_t *);

    // RVA: 0x2FB0 | Ordinal: 12209
        void wcdec(char const *);

    // RVA: 0x2FB1 | Ordinal: 12210
        void wcdec(wchar_t const *);

    // RVA: 0x2FB2 | Ordinal: 12211
        void wcinc(char *);

    // RVA: 0x2FB3 | Ordinal: 12212
        void wcinc(wchar_t *);

    // RVA: 0x2FB4 | Ordinal: 12213
        void wcinc(char const *);

    // RVA: 0x2FB5 | Ordinal: 12214
        void wcinc(wchar_t const *);

    // RVA: 0x2FB6 | Ordinal: 12215
        void wclen(char const *);

    // RVA: 0x2FB7 | Ordinal: 12216
        void wclen(wchar_t const *);

    // RVA: 0x2FB8 | Ordinal: 12217
        void wcs2utf(char *, unsigned int const *, int);

    // RVA: 0x2FB9 | Ordinal: 12218
        void wcs2utf(char *, unsigned int const *, int, int);

    // RVA: 0x2FBA | Ordinal: 12219
        void wcs2utf(unsigned int const *);

    // RVA: 0x2FBB | Ordinal: 12220
        void wcs2utf(unsigned int const *, int);

    // RVA: 0x2FBC | Ordinal: 12221
        void wcstart(char *);

    // RVA: 0x2FBD | Ordinal: 12222
        void wcstart(wchar_t *);

    // RVA: 0x2FBE | Ordinal: 12223
        void wcstart(char const *);

    // RVA: 0x2FBF | Ordinal: 12224
        void wcstart(wchar_t const *);

    // RVA: 0x2FC0 | Ordinal: 12225
        void wcvalid(char const *);

    // RVA: 0x2FC1 | Ordinal: 12226
        void wcvalid(wchar_t const *);
};

// DCS_OPS_RE_FOX-1.7.DLL_FX_HPP
