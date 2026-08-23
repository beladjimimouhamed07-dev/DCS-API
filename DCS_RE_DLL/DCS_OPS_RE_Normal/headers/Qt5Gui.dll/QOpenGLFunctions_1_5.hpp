#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_1_5
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_1_5
{
public:

    // RVA: 0x1B4 | Ordinal: 437
        void QOpenGLFunctions_1_5(void);

    // RVA: 0x11BD | Ordinal: 4542
        void glAccum(unsigned int, float);

    // RVA: 0x11D7 | Ordinal: 4568
        void glActiveTexture(unsigned int);

    // RVA: 0x11F1 | Ordinal: 4594
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x1201 | Ordinal: 4610
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x1211 | Ordinal: 4626
        void glArrayElement(int);

    // RVA: 0x1238 | Ordinal: 4665
        void glBegin(unsigned int);

    // RVA: 0x1257 | Ordinal: 4696
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x12A1 | Ordinal: 4770
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x135A | Ordinal: 4955
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x13A5 | Ordinal: 5030
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13B6 | Ordinal: 5047
        void glBlendColor(float, float, float, float);

    // RVA: 0x13CF | Ordinal: 5072
        void glBlendEquation(unsigned int);

    // RVA: 0x1419 | Ordinal: 5146
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1430 | Ordinal: 5169
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1475 | Ordinal: 5238
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x148F | Ordinal: 5264
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14A9 | Ordinal: 5290
        void glCallList(unsigned int);

    // RVA: 0x14BA | Ordinal: 5307
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14F3 | Ordinal: 5364
        void glClear(unsigned int);

    // RVA: 0x150D | Ordinal: 5390
        void glClearAccum(float, float, float, float);

    // RVA: 0x1577 | Ordinal: 5496
        void glClearColor(float, float, float, float);

    // RVA: 0x1591 | Ordinal: 5522
        void glClearDepth(double);

    // RVA: 0x15B6 | Ordinal: 5559
        void glClearIndex(float);

    // RVA: 0x15D4 | Ordinal: 5589
        void glClearStencil(int);

    // RVA: 0x15F3 | Ordinal: 5620
        void glClientActiveTexture(unsigned int);

    // RVA: 0x1617 | Ordinal: 5656
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x1628 | Ordinal: 5673
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x1639 | Ordinal: 5690
        void glColor3bv(signed char const *);

    // RVA: 0x164A | Ordinal: 5707
        void glColor3d(double, double, double);

    // RVA: 0x165B | Ordinal: 5724
        void glColor3dv(double const *);

    // RVA: 0x166C | Ordinal: 5741
        void glColor3f(float, float, float);

    // RVA: 0x167D | Ordinal: 5758
        void glColor3fv(float const *);

    // RVA: 0x168E | Ordinal: 5775
        void glColor3i(int, int, int);

    // RVA: 0x169F | Ordinal: 5792
        void glColor3iv(int const *);

    // RVA: 0x16B0 | Ordinal: 5809
        void glColor3s(short, short, short);

    // RVA: 0x16C1 | Ordinal: 5826
        void glColor3sv(short const *);

    // RVA: 0x16D2 | Ordinal: 5843
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16E3 | Ordinal: 5860
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16F4 | Ordinal: 5877
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1705 | Ordinal: 5894
        void glColor3uiv(unsigned int const *);

    // RVA: 0x1716 | Ordinal: 5911
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x1727 | Ordinal: 5928
        void glColor3usv(unsigned short const *);

    // RVA: 0x1738 | Ordinal: 5945
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x1749 | Ordinal: 5962
        void glColor4bv(signed char const *);

    // RVA: 0x175A | Ordinal: 5979
        void glColor4d(double, double, double, double);

    // RVA: 0x176B | Ordinal: 5996
        void glColor4dv(double const *);

    // RVA: 0x177C | Ordinal: 6013
        void glColor4f(float, float, float, float);

    // RVA: 0x178D | Ordinal: 6030
        void glColor4fv(float const *);

    // RVA: 0x179E | Ordinal: 6047
        void glColor4i(int, int, int, int);

    // RVA: 0x17AF | Ordinal: 6064
        void glColor4iv(int const *);

    // RVA: 0x17C0 | Ordinal: 6081
        void glColor4s(short, short, short, short);

    // RVA: 0x17D1 | Ordinal: 6098
        void glColor4sv(short const *);

    // RVA: 0x17E2 | Ordinal: 6115
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17F3 | Ordinal: 6132
        void glColor4ubv(unsigned char const *);

    // RVA: 0x1804 | Ordinal: 6149
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1815 | Ordinal: 6166
        void glColor4uiv(unsigned int const *);

    // RVA: 0x1826 | Ordinal: 6183
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x1837 | Ordinal: 6200
        void glColor4usv(unsigned short const *);

    // RVA: 0x1849 | Ordinal: 6218
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1876 | Ordinal: 6263
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x18B6 | Ordinal: 6327
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18C5 | Ordinal: 6342
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18D4 | Ordinal: 6357
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18E3 | Ordinal: 6372
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18F2 | Ordinal: 6387
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1915 | Ordinal: 6422
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x192D | Ordinal: 6446
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1945 | Ordinal: 6470
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x195C | Ordinal: 6493
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1974 | Ordinal: 6517
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x198C | Ordinal: 6541
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19AA | Ordinal: 6571
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19B9 | Ordinal: 6586
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19C8 | Ordinal: 6601
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19D7 | Ordinal: 6616
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19E6 | Ordinal: 6631
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19F5 | Ordinal: 6646
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A16 | Ordinal: 6679
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A25 | Ordinal: 6694
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A34 | Ordinal: 6709
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A43 | Ordinal: 6724
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A5D | Ordinal: 6750
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A6D | Ordinal: 6766
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A87 | Ordinal: 6792
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AA0 | Ordinal: 6817
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1ABA | Ordinal: 6843
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AD3 | Ordinal: 6868
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1B3B | Ordinal: 6972
        void glCullFace(unsigned int);

    // RVA: 0x1B60 | Ordinal: 7009
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B8D | Ordinal: 7054
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1BBA | Ordinal: 7099
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1C1C | Ordinal: 7197
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C57 | Ordinal: 7256
        void glDepthFunc(unsigned int);

    // RVA: 0x1C72 | Ordinal: 7283
        void glDepthMask(unsigned char);

    // RVA: 0x1C8C | Ordinal: 7309
        void glDepthRange(double, double);

    // RVA: 0x1CDB | Ordinal: 7388
        void glDisable(unsigned int);

    // RVA: 0x1CF4 | Ordinal: 7413
        void glDisableClientState(unsigned int);

    // RVA: 0x1D3E | Ordinal: 7487
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D7F | Ordinal: 7552
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DAE | Ordinal: 7599
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E19 | Ordinal: 7706
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E29 | Ordinal: 7722
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E7C | Ordinal: 7805
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E8C | Ordinal: 7821
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1E9D | Ordinal: 7838
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EAF | Ordinal: 7856
        void glEnable(unsigned int);

    // RVA: 0x1EC8 | Ordinal: 7881
        void glEnableClientState(unsigned int);

    // RVA: 0x1F03 | Ordinal: 7940
        void glEnd(void);

    // RVA: 0x1F26 | Ordinal: 7975
        void glEndList(void);

    // RVA: 0x1F33 | Ordinal: 7988
        void glEndQuery(unsigned int);

    // RVA: 0x1F6C | Ordinal: 8045
        void glEvalCoord1d(double);

    // RVA: 0x1F7D | Ordinal: 8062
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F8E | Ordinal: 8079
        void glEvalCoord1f(float);

    // RVA: 0x1F9F | Ordinal: 8096
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FB0 | Ordinal: 8113
        void glEvalCoord2d(double, double);

    // RVA: 0x1FC1 | Ordinal: 8130
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FD2 | Ordinal: 8147
        void glEvalCoord2f(float, float);

    // RVA: 0x1FE3 | Ordinal: 8164
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FF4 | Ordinal: 8181
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x2005 | Ordinal: 8198
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x2016 | Ordinal: 8215
        void glEvalPoint1(int);

    // RVA: 0x2027 | Ordinal: 8232
        void glEvalPoint2(int, int);

    // RVA: 0x2038 | Ordinal: 8249
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x205B | Ordinal: 8284
        void glFinish(void);

    // RVA: 0x2076 | Ordinal: 8311
        void glFlush(void);

    // RVA: 0x20A1 | Ordinal: 8354
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20AE | Ordinal: 8367
        void glFogCoordd(double);

    // RVA: 0x20BB | Ordinal: 8380
        void glFogCoorddv(double const *);

    // RVA: 0x20C8 | Ordinal: 8393
        void glFogCoordf(float);

    // RVA: 0x20D5 | Ordinal: 8406
        void glFogCoordfv(float const *);

    // RVA: 0x20E6 | Ordinal: 8423
        void glFogf(unsigned int, float);

    // RVA: 0x20F7 | Ordinal: 8440
        void glFogfv(unsigned int, float const *);

    // RVA: 0x2108 | Ordinal: 8457
        void glFogi(unsigned int, int);

    // RVA: 0x2119 | Ordinal: 8474
        void glFogiv(unsigned int, int const *);

    // RVA: 0x21A1 | Ordinal: 8610
        void glFrontFace(unsigned int);

    // RVA: 0x21BB | Ordinal: 8636
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21C8 | Ordinal: 8649
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21F5 | Ordinal: 8694
        void glGenLists(int);

    // RVA: 0x220D | Ordinal: 8718
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2249 | Ordinal: 8778
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2373 | Ordinal: 9076
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x239A | Ordinal: 9115
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23B0 | Ordinal: 9137
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23C6 | Ordinal: 9159
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23E0 | Ordinal: 9185
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23EF | Ordinal: 9200
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x23FE | Ordinal: 9215
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x240D | Ordinal: 9230
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x241B | Ordinal: 9244
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2437 | Ordinal: 9272
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2446 | Ordinal: 9287
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2455 | Ordinal: 9302
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2475 | Ordinal: 9334
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x2490 | Ordinal: 9361
        void glGetError(void);

    // RVA: 0x24B5 | Ordinal: 9398
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x250B | Ordinal: 9484
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x251A | Ordinal: 9499
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2529 | Ordinal: 9514
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2570 | Ordinal: 9585
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x2599 | Ordinal: 9626
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25AA | Ordinal: 9643
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25BB | Ordinal: 9660
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25CC | Ordinal: 9677
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25DD | Ordinal: 9694
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25EE | Ordinal: 9711
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x25FF | Ordinal: 9728
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x260E | Ordinal: 9743
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x261D | Ordinal: 9758
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x262C | Ordinal: 9773
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2666 | Ordinal: 9831
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x2677 | Ordinal: 9848
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x2688 | Ordinal: 9865
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x2699 | Ordinal: 9882
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26B1 | Ordinal: 9906
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x2757 | Ordinal: 10072
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x277B | Ordinal: 10108
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2791 | Ordinal: 10130
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27F8 | Ordinal: 10233
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2854 | Ordinal: 10325
        void glGetString(unsigned int);

    // RVA: 0x28AA | Ordinal: 10411
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28BB | Ordinal: 10428
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28CC | Ordinal: 10445
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28DD | Ordinal: 10462
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28EE | Ordinal: 10479
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x28FF | Ordinal: 10496
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x291A | Ordinal: 10523
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2935 | Ordinal: 10550
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2976 | Ordinal: 10615
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2991 | Ordinal: 10642
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2B07 | Ordinal: 11016
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B1F | Ordinal: 11040
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B30 | Ordinal: 11057
        void glIndexMask(unsigned int);

    // RVA: 0x2B40 | Ordinal: 11073
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B51 | Ordinal: 11090
        void glIndexd(double);

    // RVA: 0x2B62 | Ordinal: 11107
        void glIndexdv(double const *);

    // RVA: 0x2B73 | Ordinal: 11124
        void glIndexf(float);

    // RVA: 0x2B84 | Ordinal: 11141
        void glIndexfv(float const *);

    // RVA: 0x2B95 | Ordinal: 11158
        void glIndexi(int);

    // RVA: 0x2BA6 | Ordinal: 11175
        void glIndexiv(int const *);

    // RVA: 0x2BB7 | Ordinal: 11192
        void glIndexs(short);

    // RVA: 0x2BC8 | Ordinal: 11209
        void glIndexsv(short const *);

    // RVA: 0x2BD8 | Ordinal: 11225
        void glIndexub(unsigned char);

    // RVA: 0x2BEF | Ordinal: 11248
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C07 | Ordinal: 11272
        void glInitNames(void);

    // RVA: 0x2C17 | Ordinal: 11288
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C4F | Ordinal: 11344
        void glIsBuffer(unsigned int);

    // RVA: 0x2C6A | Ordinal: 11371
        void glIsEnabled(unsigned int);

    // RVA: 0x2CAA | Ordinal: 11435
        void glIsList(unsigned int);

    // RVA: 0x2CD7 | Ordinal: 11480
        void glIsQuery(unsigned int);

    // RVA: 0x2D39 | Ordinal: 11578
        void glIsTexture(unsigned int);

    // RVA: 0x2D73 | Ordinal: 11636
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D84 | Ordinal: 11653
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D95 | Ordinal: 11670
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DA6 | Ordinal: 11687
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DB7 | Ordinal: 11704
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DC8 | Ordinal: 11721
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DD9 | Ordinal: 11738
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DEA | Ordinal: 11755
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2DFB | Ordinal: 11772
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E0D | Ordinal: 11790
        void glLineWidth(float);

    // RVA: 0x2E3C | Ordinal: 11837
        void glListBase(unsigned int);

    // RVA: 0x2E4D | Ordinal: 11854
        void glLoadIdentity(void);

    // RVA: 0x2E5E | Ordinal: 11871
        void glLoadMatrixd(double const *);

    // RVA: 0x2E6F | Ordinal: 11888
        void glLoadMatrixf(float const *);

    // RVA: 0x2E80 | Ordinal: 11905
        void glLoadName(unsigned int);

    // RVA: 0x2E8E | Ordinal: 11919
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2E9C | Ordinal: 11933
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EAD | Ordinal: 11950
        void glLogicOp(unsigned int);

    // RVA: 0x2EC7 | Ordinal: 11976
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2ED8 | Ordinal: 11993
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EE9 | Ordinal: 12010
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2EFA | Ordinal: 12027
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F07 | Ordinal: 12040
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F34 | Ordinal: 12085
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F45 | Ordinal: 12102
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F56 | Ordinal: 12119
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F67 | Ordinal: 12136
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F7C | Ordinal: 12157
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F8D | Ordinal: 12174
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2F9E | Ordinal: 12191
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FAF | Ordinal: 12208
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FC0 | Ordinal: 12225
        void glMatrixMode(unsigned int);

    // RVA: 0x2FE8 | Ordinal: 12265
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x2FF9 | Ordinal: 12282
        void glMultMatrixd(double const *);

    // RVA: 0x300A | Ordinal: 12299
        void glMultMatrixf(float const *);

    // RVA: 0x3018 | Ordinal: 12313
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x3026 | Ordinal: 12327
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x3033 | Ordinal: 12340
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x304F | Ordinal: 12368
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x307C | Ordinal: 12413
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x308A | Ordinal: 12427
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x3098 | Ordinal: 12441
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30A6 | Ordinal: 12455
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30B4 | Ordinal: 12469
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30C2 | Ordinal: 12483
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30D0 | Ordinal: 12497
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30DE | Ordinal: 12511
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30EC | Ordinal: 12525
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x30FA | Ordinal: 12539
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x3108 | Ordinal: 12553
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x3116 | Ordinal: 12567
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x3124 | Ordinal: 12581
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x3132 | Ordinal: 12595
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x3140 | Ordinal: 12609
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x314E | Ordinal: 12623
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x315C | Ordinal: 12637
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x316A | Ordinal: 12651
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x3178 | Ordinal: 12665
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x3186 | Ordinal: 12679
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x3194 | Ordinal: 12693
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31A2 | Ordinal: 12707
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31B0 | Ordinal: 12721
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31BE | Ordinal: 12735
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31CC | Ordinal: 12749
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31DA | Ordinal: 12763
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31E8 | Ordinal: 12777
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x31F6 | Ordinal: 12791
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x3204 | Ordinal: 12805
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x3212 | Ordinal: 12819
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x3220 | Ordinal: 12833
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x322E | Ordinal: 12847
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x32B7 | Ordinal: 12984
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32C8 | Ordinal: 13001
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32D9 | Ordinal: 13018
        void glNormal3bv(signed char const *);

    // RVA: 0x32EA | Ordinal: 13035
        void glNormal3d(double, double, double);

    // RVA: 0x32FB | Ordinal: 13052
        void glNormal3dv(double const *);

    // RVA: 0x330C | Ordinal: 13069
        void glNormal3f(float, float, float);

    // RVA: 0x331D | Ordinal: 13086
        void glNormal3fv(float const *);

    // RVA: 0x332E | Ordinal: 13103
        void glNormal3i(int, int, int);

    // RVA: 0x333F | Ordinal: 13120
        void glNormal3iv(int const *);

    // RVA: 0x3350 | Ordinal: 13137
        void glNormal3s(short, short, short);

    // RVA: 0x3361 | Ordinal: 13154
        void glNormal3sv(short const *);

    // RVA: 0x3389 | Ordinal: 13194
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33A4 | Ordinal: 13221
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33B5 | Ordinal: 13238
        void glPassThrough(float);

    // RVA: 0x33EC | Ordinal: 13293
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x33FD | Ordinal: 13310
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x340E | Ordinal: 13327
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x341F | Ordinal: 13344
        void glPixelStoref(unsigned int, float);

    // RVA: 0x343A | Ordinal: 13371
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3454 | Ordinal: 13397
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x3465 | Ordinal: 13414
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x3476 | Ordinal: 13431
        void glPixelZoom(float, float);

    // RVA: 0x3483 | Ordinal: 13444
        void glPointParameterf(unsigned int, float);

    // RVA: 0x3499 | Ordinal: 13466
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34AF | Ordinal: 13488
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34C5 | Ordinal: 13510
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34DF | Ordinal: 13536
        void glPointSize(float);

    // RVA: 0x34F9 | Ordinal: 13562
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3513 | Ordinal: 13588
        void glPolygonOffset(float, float);

    // RVA: 0x352D | Ordinal: 13614
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x353E | Ordinal: 13631
        void glPopAttrib(void);

    // RVA: 0x354E | Ordinal: 13647
        void glPopClientAttrib(void);

    // RVA: 0x3564 | Ordinal: 13669
        void glPopMatrix(void);

    // RVA: 0x3575 | Ordinal: 13686
        void glPopName(void);

    // RVA: 0x3597 | Ordinal: 13720
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x37E3 | Ordinal: 14308
        void glPushAttrib(unsigned int);

    // RVA: 0x37F3 | Ordinal: 14324
        void glPushClientAttrib(unsigned int);

    // RVA: 0x3809 | Ordinal: 14346
        void glPushMatrix(void);

    // RVA: 0x381A | Ordinal: 14363
        void glPushName(unsigned int);

    // RVA: 0x3839 | Ordinal: 14394
        void glRasterPos2d(double, double);

    // RVA: 0x384A | Ordinal: 14411
        void glRasterPos2dv(double const *);

    // RVA: 0x385B | Ordinal: 14428
        void glRasterPos2f(float, float);

    // RVA: 0x386C | Ordinal: 14445
        void glRasterPos2fv(float const *);

    // RVA: 0x387D | Ordinal: 14462
        void glRasterPos2i(int, int);

    // RVA: 0x388E | Ordinal: 14479
        void glRasterPos2iv(int const *);

    // RVA: 0x389F | Ordinal: 14496
        void glRasterPos2s(short, short);

    // RVA: 0x38B0 | Ordinal: 14513
        void glRasterPos2sv(short const *);

    // RVA: 0x38C1 | Ordinal: 14530
        void glRasterPos3d(double, double, double);

    // RVA: 0x38D2 | Ordinal: 14547
        void glRasterPos3dv(double const *);

    // RVA: 0x38E3 | Ordinal: 14564
        void glRasterPos3f(float, float, float);

    // RVA: 0x38F4 | Ordinal: 14581
        void glRasterPos3fv(float const *);

    // RVA: 0x3905 | Ordinal: 14598
        void glRasterPos3i(int, int, int);

    // RVA: 0x3916 | Ordinal: 14615
        void glRasterPos3iv(int const *);

    // RVA: 0x3927 | Ordinal: 14632
        void glRasterPos3s(short, short, short);

    // RVA: 0x3938 | Ordinal: 14649
        void glRasterPos3sv(short const *);

    // RVA: 0x3949 | Ordinal: 14666
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x395A | Ordinal: 14683
        void glRasterPos4dv(double const *);

    // RVA: 0x396B | Ordinal: 14700
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x397C | Ordinal: 14717
        void glRasterPos4fv(float const *);

    // RVA: 0x398D | Ordinal: 14734
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x399E | Ordinal: 14751
        void glRasterPos4iv(int const *);

    // RVA: 0x39AF | Ordinal: 14768
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39C0 | Ordinal: 14785
        void glRasterPos4sv(short const *);

    // RVA: 0x39D2 | Ordinal: 14803
        void glReadBuffer(unsigned int);

    // RVA: 0x39ED | Ordinal: 14830
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A0A | Ordinal: 14859
        void glRectd(double, double, double, double);

    // RVA: 0x3A1B | Ordinal: 14876
        void glRectdv(double const *, double const *);

    // RVA: 0x3A2C | Ordinal: 14893
        void glRectf(float, float, float, float);

    // RVA: 0x3A3D | Ordinal: 14910
        void glRectfv(float const *, float const *);

    // RVA: 0x3A4E | Ordinal: 14927
        void glRecti(int, int, int, int);

    // RVA: 0x3A5F | Ordinal: 14944
        void glRectiv(int const *, int const *);

    // RVA: 0x3A70 | Ordinal: 14961
        void glRects(short, short, short, short);

    // RVA: 0x3A81 | Ordinal: 14978
        void glRectsv(short const *, short const *);

    // RVA: 0x3A9D | Ordinal: 15006
        void glRenderMode(unsigned int);

    // RVA: 0x3AD2 | Ordinal: 15059
        void glResetHistogram(unsigned int);

    // RVA: 0x3AE1 | Ordinal: 15074
        void glResetMinmax(unsigned int);

    // RVA: 0x3AFF | Ordinal: 15104
        void glRotated(double, double, double, double);

    // RVA: 0x3B10 | Ordinal: 15121
        void glRotatef(float, float, float, float);

    // RVA: 0x3B1F | Ordinal: 15136
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3BA4 | Ordinal: 15269
        void glScaled(double, double, double);

    // RVA: 0x3BB5 | Ordinal: 15286
        void glScalef(float, float, float);

    // RVA: 0x3BC7 | Ordinal: 15304
        void glScissor(int, int, int, int);

    // RVA: 0x3BFB | Ordinal: 15356
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C08 | Ordinal: 15369
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C15 | Ordinal: 15382
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C22 | Ordinal: 15395
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C2F | Ordinal: 15408
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C3C | Ordinal: 15421
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C49 | Ordinal: 15434
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C56 | Ordinal: 15447
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C63 | Ordinal: 15460
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C70 | Ordinal: 15473
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C7D | Ordinal: 15486
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C8A | Ordinal: 15499
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3C97 | Ordinal: 15512
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CA4 | Ordinal: 15525
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CB1 | Ordinal: 15538
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CBE | Ordinal: 15551
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CE3 | Ordinal: 15588
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CF4 | Ordinal: 15605
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D03 | Ordinal: 15620
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D14 | Ordinal: 15637
        void glShadeModel(unsigned int);

    // RVA: 0x3D4C | Ordinal: 15693
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D7C | Ordinal: 15741
        void glStencilMask(unsigned int);

    // RVA: 0x3DAC | Ordinal: 15789
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DF4 | Ordinal: 15861
        void glTexCoord1d(double);

    // RVA: 0x3E05 | Ordinal: 15878
        void glTexCoord1dv(double const *);

    // RVA: 0x3E16 | Ordinal: 15895
        void glTexCoord1f(float);

    // RVA: 0x3E27 | Ordinal: 15912
        void glTexCoord1fv(float const *);

    // RVA: 0x3E38 | Ordinal: 15929
        void glTexCoord1i(int);

    // RVA: 0x3E49 | Ordinal: 15946
        void glTexCoord1iv(int const *);

    // RVA: 0x3E5A | Ordinal: 15963
        void glTexCoord1s(short);

    // RVA: 0x3E6B | Ordinal: 15980
        void glTexCoord1sv(short const *);

    // RVA: 0x3E7C | Ordinal: 15997
        void glTexCoord2d(double, double);

    // RVA: 0x3E8D | Ordinal: 16014
        void glTexCoord2dv(double const *);

    // RVA: 0x3E9E | Ordinal: 16031
        void glTexCoord2f(float, float);

    // RVA: 0x3EAF | Ordinal: 16048
        void glTexCoord2fv(float const *);

    // RVA: 0x3EC0 | Ordinal: 16065
        void glTexCoord2i(int, int);

    // RVA: 0x3ED1 | Ordinal: 16082
        void glTexCoord2iv(int const *);

    // RVA: 0x3EE2 | Ordinal: 16099
        void glTexCoord2s(short, short);

    // RVA: 0x3EF3 | Ordinal: 16116
        void glTexCoord2sv(short const *);

    // RVA: 0x3F04 | Ordinal: 16133
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F15 | Ordinal: 16150
        void glTexCoord3dv(double const *);

    // RVA: 0x3F26 | Ordinal: 16167
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F37 | Ordinal: 16184
        void glTexCoord3fv(float const *);

    // RVA: 0x3F48 | Ordinal: 16201
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F59 | Ordinal: 16218
        void glTexCoord3iv(int const *);

    // RVA: 0x3F6A | Ordinal: 16235
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F7B | Ordinal: 16252
        void glTexCoord3sv(short const *);

    // RVA: 0x3F8C | Ordinal: 16269
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3F9D | Ordinal: 16286
        void glTexCoord4dv(double const *);

    // RVA: 0x3FAE | Ordinal: 16303
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FBF | Ordinal: 16320
        void glTexCoord4fv(float const *);

    // RVA: 0x3FD0 | Ordinal: 16337
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FE1 | Ordinal: 16354
        void glTexCoord4iv(int const *);

    // RVA: 0x3FF2 | Ordinal: 16371
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x4003 | Ordinal: 16388
        void glTexCoord4sv(short const *);

    // RVA: 0x4073 | Ordinal: 16500
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x4084 | Ordinal: 16517
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x4095 | Ordinal: 16534
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40A6 | Ordinal: 16551
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40B7 | Ordinal: 16568
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40C8 | Ordinal: 16585
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40D9 | Ordinal: 16602
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40EA | Ordinal: 16619
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x40FB | Ordinal: 16636
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x410C | Ordinal: 16653
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x411D | Ordinal: 16670
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x412E | Ordinal: 16687
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4149 | Ordinal: 16714
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4172 | Ordinal: 16755
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x41C3 | Ordinal: 16836
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41DE | Ordinal: 16863
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41F9 | Ordinal: 16890
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4214 | Ordinal: 16917
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4255 | Ordinal: 16982
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x426F | Ordinal: 17008
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4288 | Ordinal: 17033
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42E1 | Ordinal: 17122
        void glTranslated(double, double, double);

    // RVA: 0x42F2 | Ordinal: 17139
        void glTranslatef(float, float, float);

    // RVA: 0x4688 | Ordinal: 18057
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46E4 | Ordinal: 18149
        void glVertex2d(double, double);

    // RVA: 0x46F5 | Ordinal: 18166
        void glVertex2dv(double const *);

    // RVA: 0x4706 | Ordinal: 18183
        void glVertex2f(float, float);

    // RVA: 0x4717 | Ordinal: 18200
        void glVertex2fv(float const *);

    // RVA: 0x4728 | Ordinal: 18217
        void glVertex2i(int, int);

    // RVA: 0x4739 | Ordinal: 18234
        void glVertex2iv(int const *);

    // RVA: 0x474A | Ordinal: 18251
        void glVertex2s(short, short);

    // RVA: 0x475B | Ordinal: 18268
        void glVertex2sv(short const *);

    // RVA: 0x476C | Ordinal: 18285
        void glVertex3d(double, double, double);

    // RVA: 0x477D | Ordinal: 18302
        void glVertex3dv(double const *);

    // RVA: 0x478E | Ordinal: 18319
        void glVertex3f(float, float, float);

    // RVA: 0x479F | Ordinal: 18336
        void glVertex3fv(float const *);

    // RVA: 0x47B0 | Ordinal: 18353
        void glVertex3i(int, int, int);

    // RVA: 0x47C1 | Ordinal: 18370
        void glVertex3iv(int const *);

    // RVA: 0x47D2 | Ordinal: 18387
        void glVertex3s(short, short, short);

    // RVA: 0x47E3 | Ordinal: 18404
        void glVertex3sv(short const *);

    // RVA: 0x47F4 | Ordinal: 18421
        void glVertex4d(double, double, double, double);

    // RVA: 0x4805 | Ordinal: 18438
        void glVertex4dv(double const *);

    // RVA: 0x4816 | Ordinal: 18455
        void glVertex4f(float, float, float, float);

    // RVA: 0x4827 | Ordinal: 18472
        void glVertex4fv(float const *);

    // RVA: 0x4838 | Ordinal: 18489
        void glVertex4i(int, int, int, int);

    // RVA: 0x4849 | Ordinal: 18506
        void glVertex4iv(int const *);

    // RVA: 0x485A | Ordinal: 18523
        void glVertex4s(short, short, short, short);

    // RVA: 0x486B | Ordinal: 18540
        void glVertex4sv(short const *);

    // RVA: 0x4CB2 | Ordinal: 19635
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CC4 | Ordinal: 19653
        void glViewport(int, int, int, int);

    // RVA: 0x4D09 | Ordinal: 19722
        void glWindowPos2d(double, double);

    // RVA: 0x4D16 | Ordinal: 19735
        void glWindowPos2dv(double const *);

    // RVA: 0x4D23 | Ordinal: 19748
        void glWindowPos2f(float, float);

    // RVA: 0x4D30 | Ordinal: 19761
        void glWindowPos2fv(float const *);

    // RVA: 0x4D3D | Ordinal: 19774
        void glWindowPos2i(int, int);

    // RVA: 0x4D4A | Ordinal: 19787
        void glWindowPos2iv(int const *);

    // RVA: 0x4D57 | Ordinal: 19800
        void glWindowPos2s(short, short);

    // RVA: 0x4D64 | Ordinal: 19813
        void glWindowPos2sv(short const *);

    // RVA: 0x4D71 | Ordinal: 19826
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D7E | Ordinal: 19839
        void glWindowPos3dv(double const *);

    // RVA: 0x4D8B | Ordinal: 19852
        void glWindowPos3f(float, float, float);

    // RVA: 0x4D98 | Ordinal: 19865
        void glWindowPos3fv(float const *);

    // RVA: 0x4DA5 | Ordinal: 19878
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DB2 | Ordinal: 19891
        void glWindowPos3iv(int const *);

    // RVA: 0x4DBF | Ordinal: 19904
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DCC | Ordinal: 19917
        void glWindowPos3sv(short const *);

    // RVA: 0x4F1F | Ordinal: 20256
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FE1 | Ordinal: 20450
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6105 | Ordinal: 24838
        void versionProfile(void);

    // RVA: 0x482 | Ordinal: 1155
        void _QOpenGLFunctions_1_5(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_1_5_HPP
