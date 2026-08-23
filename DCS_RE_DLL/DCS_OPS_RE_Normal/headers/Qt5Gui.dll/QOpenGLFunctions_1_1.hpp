#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_1_1
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_1_1
{
public:

    // RVA: 0x1B0 | Ordinal: 433
        void QOpenGLFunctions_1_1(void);

    // RVA: 0x11B9 | Ordinal: 4538
        void glAccum(unsigned int, float);

    // RVA: 0x11ED | Ordinal: 4590
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x11FD | Ordinal: 4606
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x120D | Ordinal: 4622
        void glArrayElement(int);

    // RVA: 0x1234 | Ordinal: 4661
        void glBegin(unsigned int);

    // RVA: 0x1356 | Ordinal: 4951
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x13A1 | Ordinal: 5026
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x1415 | Ordinal: 5142
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x14A5 | Ordinal: 5286
        void glCallList(unsigned int);

    // RVA: 0x14B6 | Ordinal: 5303
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14EF | Ordinal: 5360
        void glClear(unsigned int);

    // RVA: 0x1509 | Ordinal: 5386
        void glClearAccum(float, float, float, float);

    // RVA: 0x1573 | Ordinal: 5492
        void glClearColor(float, float, float, float);

    // RVA: 0x158D | Ordinal: 5518
        void glClearDepth(double);

    // RVA: 0x15B2 | Ordinal: 5555
        void glClearIndex(float);

    // RVA: 0x15D0 | Ordinal: 5585
        void glClearStencil(int);

    // RVA: 0x1613 | Ordinal: 5652
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x1624 | Ordinal: 5669
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x1635 | Ordinal: 5686
        void glColor3bv(signed char const *);

    // RVA: 0x1646 | Ordinal: 5703
        void glColor3d(double, double, double);

    // RVA: 0x1657 | Ordinal: 5720
        void glColor3dv(double const *);

    // RVA: 0x1668 | Ordinal: 5737
        void glColor3f(float, float, float);

    // RVA: 0x1679 | Ordinal: 5754
        void glColor3fv(float const *);

    // RVA: 0x168A | Ordinal: 5771
        void glColor3i(int, int, int);

    // RVA: 0x169B | Ordinal: 5788
        void glColor3iv(int const *);

    // RVA: 0x16AC | Ordinal: 5805
        void glColor3s(short, short, short);

    // RVA: 0x16BD | Ordinal: 5822
        void glColor3sv(short const *);

    // RVA: 0x16CE | Ordinal: 5839
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16DF | Ordinal: 5856
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16F0 | Ordinal: 5873
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1701 | Ordinal: 5890
        void glColor3uiv(unsigned int const *);

    // RVA: 0x1712 | Ordinal: 5907
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x1723 | Ordinal: 5924
        void glColor3usv(unsigned short const *);

    // RVA: 0x1734 | Ordinal: 5941
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x1745 | Ordinal: 5958
        void glColor4bv(signed char const *);

    // RVA: 0x1756 | Ordinal: 5975
        void glColor4d(double, double, double, double);

    // RVA: 0x1767 | Ordinal: 5992
        void glColor4dv(double const *);

    // RVA: 0x1778 | Ordinal: 6009
        void glColor4f(float, float, float, float);

    // RVA: 0x1789 | Ordinal: 6026
        void glColor4fv(float const *);

    // RVA: 0x179A | Ordinal: 6043
        void glColor4i(int, int, int, int);

    // RVA: 0x17AB | Ordinal: 6060
        void glColor4iv(int const *);

    // RVA: 0x17BC | Ordinal: 6077
        void glColor4s(short, short, short, short);

    // RVA: 0x17CD | Ordinal: 6094
        void glColor4sv(short const *);

    // RVA: 0x17DE | Ordinal: 6111
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17EF | Ordinal: 6128
        void glColor4ubv(unsigned char const *);

    // RVA: 0x1800 | Ordinal: 6145
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1811 | Ordinal: 6162
        void glColor4uiv(unsigned int const *);

    // RVA: 0x1822 | Ordinal: 6179
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x1833 | Ordinal: 6196
        void glColor4usv(unsigned short const *);

    // RVA: 0x1845 | Ordinal: 6214
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1872 | Ordinal: 6259
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x18B2 | Ordinal: 6323
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x1A59 | Ordinal: 6746
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A69 | Ordinal: 6762
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A83 | Ordinal: 6788
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1A9C | Ordinal: 6813
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AB6 | Ordinal: 6839
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1B37 | Ordinal: 6968
        void glCullFace(unsigned int);

    // RVA: 0x1B89 | Ordinal: 7050
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1C18 | Ordinal: 7193
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C53 | Ordinal: 7252
        void glDepthFunc(unsigned int);

    // RVA: 0x1C6E | Ordinal: 7279
        void glDepthMask(unsigned char);

    // RVA: 0x1C88 | Ordinal: 7305
        void glDepthRange(double, double);

    // RVA: 0x1CD7 | Ordinal: 7384
        void glDisable(unsigned int);

    // RVA: 0x1CF0 | Ordinal: 7409
        void glDisableClientState(unsigned int);

    // RVA: 0x1D3A | Ordinal: 7483
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D7B | Ordinal: 7548
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DAA | Ordinal: 7595
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E15 | Ordinal: 7702
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E78 | Ordinal: 7801
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E88 | Ordinal: 7817
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1E99 | Ordinal: 7834
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EAB | Ordinal: 7852
        void glEnable(unsigned int);

    // RVA: 0x1EC4 | Ordinal: 7877
        void glEnableClientState(unsigned int);

    // RVA: 0x1EFF | Ordinal: 7936
        void glEnd(void);

    // RVA: 0x1F22 | Ordinal: 7971
        void glEndList(void);

    // RVA: 0x1F68 | Ordinal: 8041
        void glEvalCoord1d(double);

    // RVA: 0x1F79 | Ordinal: 8058
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F8A | Ordinal: 8075
        void glEvalCoord1f(float);

    // RVA: 0x1F9B | Ordinal: 8092
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FAC | Ordinal: 8109
        void glEvalCoord2d(double, double);

    // RVA: 0x1FBD | Ordinal: 8126
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FCE | Ordinal: 8143
        void glEvalCoord2f(float, float);

    // RVA: 0x1FDF | Ordinal: 8160
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FF0 | Ordinal: 8177
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x2001 | Ordinal: 8194
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x2012 | Ordinal: 8211
        void glEvalPoint1(int);

    // RVA: 0x2023 | Ordinal: 8228
        void glEvalPoint2(int, int);

    // RVA: 0x2034 | Ordinal: 8245
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x2057 | Ordinal: 8280
        void glFinish(void);

    // RVA: 0x2072 | Ordinal: 8307
        void glFlush(void);

    // RVA: 0x20E2 | Ordinal: 8419
        void glFogf(unsigned int, float);

    // RVA: 0x20F3 | Ordinal: 8436
        void glFogfv(unsigned int, float const *);

    // RVA: 0x2104 | Ordinal: 8453
        void glFogi(unsigned int, int);

    // RVA: 0x2115 | Ordinal: 8470
        void glFogiv(unsigned int, int const *);

    // RVA: 0x219D | Ordinal: 8606
        void glFrontFace(unsigned int);

    // RVA: 0x21B7 | Ordinal: 8632
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21F1 | Ordinal: 8690
        void glGenLists(int);

    // RVA: 0x2245 | Ordinal: 8774
        void glGenTextures(int, unsigned int *);

    // RVA: 0x236F | Ordinal: 9072
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x23DC | Ordinal: 9181
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x2471 | Ordinal: 9330
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x248C | Ordinal: 9357
        void glGetError(void);

    // RVA: 0x24B1 | Ordinal: 9394
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x256C | Ordinal: 9581
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x2595 | Ordinal: 9622
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25A6 | Ordinal: 9639
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25B7 | Ordinal: 9656
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25C8 | Ordinal: 9673
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25D9 | Ordinal: 9690
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25EA | Ordinal: 9707
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x25FB | Ordinal: 9724
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x2662 | Ordinal: 9827
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x2673 | Ordinal: 9844
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x2684 | Ordinal: 9861
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x2695 | Ordinal: 9878
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26AD | Ordinal: 9902
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x2850 | Ordinal: 10321
        void glGetString(unsigned int);

    // RVA: 0x28A6 | Ordinal: 10407
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28B7 | Ordinal: 10424
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28C8 | Ordinal: 10441
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28D9 | Ordinal: 10458
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28EA | Ordinal: 10475
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x28FB | Ordinal: 10492
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2916 | Ordinal: 10519
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2931 | Ordinal: 10546
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2972 | Ordinal: 10611
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x298D | Ordinal: 10638
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2B03 | Ordinal: 11012
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B2C | Ordinal: 11053
        void glIndexMask(unsigned int);

    // RVA: 0x2B3C | Ordinal: 11069
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B4D | Ordinal: 11086
        void glIndexd(double);

    // RVA: 0x2B5E | Ordinal: 11103
        void glIndexdv(double const *);

    // RVA: 0x2B6F | Ordinal: 11120
        void glIndexf(float);

    // RVA: 0x2B80 | Ordinal: 11137
        void glIndexfv(float const *);

    // RVA: 0x2B91 | Ordinal: 11154
        void glIndexi(int);

    // RVA: 0x2BA2 | Ordinal: 11171
        void glIndexiv(int const *);

    // RVA: 0x2BB3 | Ordinal: 11188
        void glIndexs(short);

    // RVA: 0x2BC4 | Ordinal: 11205
        void glIndexsv(short const *);

    // RVA: 0x2BD4 | Ordinal: 11221
        void glIndexub(unsigned char);

    // RVA: 0x2BEB | Ordinal: 11244
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C03 | Ordinal: 11268
        void glInitNames(void);

    // RVA: 0x2C13 | Ordinal: 11284
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C66 | Ordinal: 11367
        void glIsEnabled(unsigned int);

    // RVA: 0x2CA6 | Ordinal: 11431
        void glIsList(unsigned int);

    // RVA: 0x2D35 | Ordinal: 11574
        void glIsTexture(unsigned int);

    // RVA: 0x2D6F | Ordinal: 11632
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D80 | Ordinal: 11649
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D91 | Ordinal: 11666
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DA2 | Ordinal: 11683
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DB3 | Ordinal: 11700
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DC4 | Ordinal: 11717
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DD5 | Ordinal: 11734
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DE6 | Ordinal: 11751
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2DF7 | Ordinal: 11768
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E09 | Ordinal: 11786
        void glLineWidth(float);

    // RVA: 0x2E38 | Ordinal: 11833
        void glListBase(unsigned int);

    // RVA: 0x2E49 | Ordinal: 11850
        void glLoadIdentity(void);

    // RVA: 0x2E5A | Ordinal: 11867
        void glLoadMatrixd(double const *);

    // RVA: 0x2E6B | Ordinal: 11884
        void glLoadMatrixf(float const *);

    // RVA: 0x2E7C | Ordinal: 11901
        void glLoadName(unsigned int);

    // RVA: 0x2EA9 | Ordinal: 11946
        void glLogicOp(unsigned int);

    // RVA: 0x2EC3 | Ordinal: 11972
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2ED4 | Ordinal: 11989
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EE5 | Ordinal: 12006
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2EF6 | Ordinal: 12023
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F30 | Ordinal: 12081
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F41 | Ordinal: 12098
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F52 | Ordinal: 12115
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F63 | Ordinal: 12132
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F78 | Ordinal: 12153
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F89 | Ordinal: 12170
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2F9A | Ordinal: 12187
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FAB | Ordinal: 12204
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FBC | Ordinal: 12221
        void glMatrixMode(unsigned int);

    // RVA: 0x2FF5 | Ordinal: 12278
        void glMultMatrixd(double const *);

    // RVA: 0x3006 | Ordinal: 12295
        void glMultMatrixf(float const *);

    // RVA: 0x32B3 | Ordinal: 12980
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32C4 | Ordinal: 12997
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32D5 | Ordinal: 13014
        void glNormal3bv(signed char const *);

    // RVA: 0x32E6 | Ordinal: 13031
        void glNormal3d(double, double, double);

    // RVA: 0x32F7 | Ordinal: 13048
        void glNormal3dv(double const *);

    // RVA: 0x3308 | Ordinal: 13065
        void glNormal3f(float, float, float);

    // RVA: 0x3319 | Ordinal: 13082
        void glNormal3fv(float const *);

    // RVA: 0x332A | Ordinal: 13099
        void glNormal3i(int, int, int);

    // RVA: 0x333B | Ordinal: 13116
        void glNormal3iv(int const *);

    // RVA: 0x334C | Ordinal: 13133
        void glNormal3s(short, short, short);

    // RVA: 0x335D | Ordinal: 13150
        void glNormal3sv(short const *);

    // RVA: 0x3385 | Ordinal: 13190
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x33A0 | Ordinal: 13217
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33B1 | Ordinal: 13234
        void glPassThrough(float);

    // RVA: 0x33E8 | Ordinal: 13289
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x33F9 | Ordinal: 13306
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x340A | Ordinal: 13323
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x341B | Ordinal: 13340
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3436 | Ordinal: 13367
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3450 | Ordinal: 13393
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x3461 | Ordinal: 13410
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x3472 | Ordinal: 13427
        void glPixelZoom(float, float);

    // RVA: 0x34DB | Ordinal: 13532
        void glPointSize(float);

    // RVA: 0x34F5 | Ordinal: 13558
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x350F | Ordinal: 13584
        void glPolygonOffset(float, float);

    // RVA: 0x3529 | Ordinal: 13610
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x353A | Ordinal: 13627
        void glPopAttrib(void);

    // RVA: 0x354A | Ordinal: 13643
        void glPopClientAttrib(void);

    // RVA: 0x3560 | Ordinal: 13665
        void glPopMatrix(void);

    // RVA: 0x3571 | Ordinal: 13682
        void glPopName(void);

    // RVA: 0x3593 | Ordinal: 13716
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x37DF | Ordinal: 14304
        void glPushAttrib(unsigned int);

    // RVA: 0x37EF | Ordinal: 14320
        void glPushClientAttrib(unsigned int);

    // RVA: 0x3805 | Ordinal: 14342
        void glPushMatrix(void);

    // RVA: 0x3816 | Ordinal: 14359
        void glPushName(unsigned int);

    // RVA: 0x3835 | Ordinal: 14390
        void glRasterPos2d(double, double);

    // RVA: 0x3846 | Ordinal: 14407
        void glRasterPos2dv(double const *);

    // RVA: 0x3857 | Ordinal: 14424
        void glRasterPos2f(float, float);

    // RVA: 0x3868 | Ordinal: 14441
        void glRasterPos2fv(float const *);

    // RVA: 0x3879 | Ordinal: 14458
        void glRasterPos2i(int, int);

    // RVA: 0x388A | Ordinal: 14475
        void glRasterPos2iv(int const *);

    // RVA: 0x389B | Ordinal: 14492
        void glRasterPos2s(short, short);

    // RVA: 0x38AC | Ordinal: 14509
        void glRasterPos2sv(short const *);

    // RVA: 0x38BD | Ordinal: 14526
        void glRasterPos3d(double, double, double);

    // RVA: 0x38CE | Ordinal: 14543
        void glRasterPos3dv(double const *);

    // RVA: 0x38DF | Ordinal: 14560
        void glRasterPos3f(float, float, float);

    // RVA: 0x38F0 | Ordinal: 14577
        void glRasterPos3fv(float const *);

    // RVA: 0x3901 | Ordinal: 14594
        void glRasterPos3i(int, int, int);

    // RVA: 0x3912 | Ordinal: 14611
        void glRasterPos3iv(int const *);

    // RVA: 0x3923 | Ordinal: 14628
        void glRasterPos3s(short, short, short);

    // RVA: 0x3934 | Ordinal: 14645
        void glRasterPos3sv(short const *);

    // RVA: 0x3945 | Ordinal: 14662
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x3956 | Ordinal: 14679
        void glRasterPos4dv(double const *);

    // RVA: 0x3967 | Ordinal: 14696
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x3978 | Ordinal: 14713
        void glRasterPos4fv(float const *);

    // RVA: 0x3989 | Ordinal: 14730
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x399A | Ordinal: 14747
        void glRasterPos4iv(int const *);

    // RVA: 0x39AB | Ordinal: 14764
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39BC | Ordinal: 14781
        void glRasterPos4sv(short const *);

    // RVA: 0x39CE | Ordinal: 14799
        void glReadBuffer(unsigned int);

    // RVA: 0x39E9 | Ordinal: 14826
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A06 | Ordinal: 14855
        void glRectd(double, double, double, double);

    // RVA: 0x3A17 | Ordinal: 14872
        void glRectdv(double const *, double const *);

    // RVA: 0x3A28 | Ordinal: 14889
        void glRectf(float, float, float, float);

    // RVA: 0x3A39 | Ordinal: 14906
        void glRectfv(float const *, float const *);

    // RVA: 0x3A4A | Ordinal: 14923
        void glRecti(int, int, int, int);

    // RVA: 0x3A5B | Ordinal: 14940
        void glRectiv(int const *, int const *);

    // RVA: 0x3A6C | Ordinal: 14957
        void glRects(short, short, short, short);

    // RVA: 0x3A7D | Ordinal: 14974
        void glRectsv(short const *, short const *);

    // RVA: 0x3A99 | Ordinal: 15002
        void glRenderMode(unsigned int);

    // RVA: 0x3AFB | Ordinal: 15100
        void glRotated(double, double, double, double);

    // RVA: 0x3B0C | Ordinal: 15117
        void glRotatef(float, float, float, float);

    // RVA: 0x3BA0 | Ordinal: 15265
        void glScaled(double, double, double);

    // RVA: 0x3BB1 | Ordinal: 15282
        void glScalef(float, float, float);

    // RVA: 0x3BC3 | Ordinal: 15300
        void glScissor(int, int, int, int);

    // RVA: 0x3CF0 | Ordinal: 15601
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D10 | Ordinal: 15633
        void glShadeModel(unsigned int);

    // RVA: 0x3D48 | Ordinal: 15689
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D78 | Ordinal: 15737
        void glStencilMask(unsigned int);

    // RVA: 0x3DA8 | Ordinal: 15785
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DF0 | Ordinal: 15857
        void glTexCoord1d(double);

    // RVA: 0x3E01 | Ordinal: 15874
        void glTexCoord1dv(double const *);

    // RVA: 0x3E12 | Ordinal: 15891
        void glTexCoord1f(float);

    // RVA: 0x3E23 | Ordinal: 15908
        void glTexCoord1fv(float const *);

    // RVA: 0x3E34 | Ordinal: 15925
        void glTexCoord1i(int);

    // RVA: 0x3E45 | Ordinal: 15942
        void glTexCoord1iv(int const *);

    // RVA: 0x3E56 | Ordinal: 15959
        void glTexCoord1s(short);

    // RVA: 0x3E67 | Ordinal: 15976
        void glTexCoord1sv(short const *);

    // RVA: 0x3E78 | Ordinal: 15993
        void glTexCoord2d(double, double);

    // RVA: 0x3E89 | Ordinal: 16010
        void glTexCoord2dv(double const *);

    // RVA: 0x3E9A | Ordinal: 16027
        void glTexCoord2f(float, float);

    // RVA: 0x3EAB | Ordinal: 16044
        void glTexCoord2fv(float const *);

    // RVA: 0x3EBC | Ordinal: 16061
        void glTexCoord2i(int, int);

    // RVA: 0x3ECD | Ordinal: 16078
        void glTexCoord2iv(int const *);

    // RVA: 0x3EDE | Ordinal: 16095
        void glTexCoord2s(short, short);

    // RVA: 0x3EEF | Ordinal: 16112
        void glTexCoord2sv(short const *);

    // RVA: 0x3F00 | Ordinal: 16129
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F11 | Ordinal: 16146
        void glTexCoord3dv(double const *);

    // RVA: 0x3F22 | Ordinal: 16163
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F33 | Ordinal: 16180
        void glTexCoord3fv(float const *);

    // RVA: 0x3F44 | Ordinal: 16197
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F55 | Ordinal: 16214
        void glTexCoord3iv(int const *);

    // RVA: 0x3F66 | Ordinal: 16231
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F77 | Ordinal: 16248
        void glTexCoord3sv(short const *);

    // RVA: 0x3F88 | Ordinal: 16265
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3F99 | Ordinal: 16282
        void glTexCoord4dv(double const *);

    // RVA: 0x3FAA | Ordinal: 16299
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FBB | Ordinal: 16316
        void glTexCoord4fv(float const *);

    // RVA: 0x3FCC | Ordinal: 16333
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FDD | Ordinal: 16350
        void glTexCoord4iv(int const *);

    // RVA: 0x3FEE | Ordinal: 16367
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x3FFF | Ordinal: 16384
        void glTexCoord4sv(short const *);

    // RVA: 0x406F | Ordinal: 16496
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x4080 | Ordinal: 16513
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x4091 | Ordinal: 16530
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40A2 | Ordinal: 16547
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40B3 | Ordinal: 16564
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40C4 | Ordinal: 16581
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40D5 | Ordinal: 16598
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40E6 | Ordinal: 16615
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x40F7 | Ordinal: 16632
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4108 | Ordinal: 16649
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x4119 | Ordinal: 16666
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x412A | Ordinal: 16683
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4145 | Ordinal: 16710
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x41BF | Ordinal: 16832
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41DA | Ordinal: 16859
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41F5 | Ordinal: 16886
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4210 | Ordinal: 16913
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4251 | Ordinal: 16978
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x426B | Ordinal: 17004
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42DD | Ordinal: 17118
        void glTranslated(double, double, double);

    // RVA: 0x42EE | Ordinal: 17135
        void glTranslatef(float, float, float);

    // RVA: 0x46E0 | Ordinal: 18145
        void glVertex2d(double, double);

    // RVA: 0x46F1 | Ordinal: 18162
        void glVertex2dv(double const *);

    // RVA: 0x4702 | Ordinal: 18179
        void glVertex2f(float, float);

    // RVA: 0x4713 | Ordinal: 18196
        void glVertex2fv(float const *);

    // RVA: 0x4724 | Ordinal: 18213
        void glVertex2i(int, int);

    // RVA: 0x4735 | Ordinal: 18230
        void glVertex2iv(int const *);

    // RVA: 0x4746 | Ordinal: 18247
        void glVertex2s(short, short);

    // RVA: 0x4757 | Ordinal: 18264
        void glVertex2sv(short const *);

    // RVA: 0x4768 | Ordinal: 18281
        void glVertex3d(double, double, double);

    // RVA: 0x4779 | Ordinal: 18298
        void glVertex3dv(double const *);

    // RVA: 0x478A | Ordinal: 18315
        void glVertex3f(float, float, float);

    // RVA: 0x479B | Ordinal: 18332
        void glVertex3fv(float const *);

    // RVA: 0x47AC | Ordinal: 18349
        void glVertex3i(int, int, int);

    // RVA: 0x47BD | Ordinal: 18366
        void glVertex3iv(int const *);

    // RVA: 0x47CE | Ordinal: 18383
        void glVertex3s(short, short, short);

    // RVA: 0x47DF | Ordinal: 18400
        void glVertex3sv(short const *);

    // RVA: 0x47F0 | Ordinal: 18417
        void glVertex4d(double, double, double, double);

    // RVA: 0x4801 | Ordinal: 18434
        void glVertex4dv(double const *);

    // RVA: 0x4812 | Ordinal: 18451
        void glVertex4f(float, float, float, float);

    // RVA: 0x4823 | Ordinal: 18468
        void glVertex4fv(float const *);

    // RVA: 0x4834 | Ordinal: 18485
        void glVertex4i(int, int, int, int);

    // RVA: 0x4845 | Ordinal: 18502
        void glVertex4iv(int const *);

    // RVA: 0x4856 | Ordinal: 18519
        void glVertex4s(short, short, short, short);

    // RVA: 0x4867 | Ordinal: 18536
        void glVertex4sv(short const *);

    // RVA: 0x4CAE | Ordinal: 19631
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CC0 | Ordinal: 19649
        void glViewport(int, int, int, int);

    // RVA: 0x4F1B | Ordinal: 20252
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FDD | Ordinal: 20446
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6101 | Ordinal: 24834
        void versionProfile(void);

    // RVA: 0x47E | Ordinal: 1151
        void _QOpenGLFunctions_1_1(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_1_1_HPP
