#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_3_2_Core
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_3_2_Core
{
public:

    // RVA: 0x1BA | Ordinal: 443
        void QOpenGLFunctions_3_2_Core(void);

    // RVA: 0x11DD | Ordinal: 4574
        void glActiveTexture(unsigned int);

    // RVA: 0x1223 | Ordinal: 4644
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x1247 | Ordinal: 4680
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x125D | Ordinal: 4702
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x127C | Ordinal: 4733
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x1291 | Ordinal: 4754
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12A7 | Ordinal: 4776
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12BA | Ordinal: 4795
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12CD | Ordinal: 4814
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12E7 | Ordinal: 4840
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x1308 | Ordinal: 4873
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1333 | Ordinal: 4916
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x1360 | Ordinal: 4961
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1386 | Ordinal: 4999
        void glBindVertexArray(unsigned int);

    // RVA: 0x13BC | Ordinal: 5053
        void glBlendColor(float, float, float, float);

    // RVA: 0x13D5 | Ordinal: 5078
        void glBlendEquation(unsigned int);

    // RVA: 0x13EA | Ordinal: 5099
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x141F | Ordinal: 5152
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1436 | Ordinal: 5175
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1463 | Ordinal: 5220
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x147B | Ordinal: 5244
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x1495 | Ordinal: 5270
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14CA | Ordinal: 5323
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14DE | Ordinal: 5343
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x14F9 | Ordinal: 5370
        void glClear(unsigned int);

    // RVA: 0x1529 | Ordinal: 5418
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x153C | Ordinal: 5437
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x154F | Ordinal: 5456
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x1562 | Ordinal: 5475
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x157D | Ordinal: 5502
        void glClearColor(float, float, float, float);

    // RVA: 0x1597 | Ordinal: 5528
        void glClearDepth(double);

    // RVA: 0x15DA | Ordinal: 5595
        void glClearStencil(int);

    // RVA: 0x1601 | Ordinal: 5634
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x184F | Ordinal: 6224
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1862 | Ordinal: 6243
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1904 | Ordinal: 6405
        void glCompileShader(unsigned int);

    // RVA: 0x191B | Ordinal: 6428
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1933 | Ordinal: 6452
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x194B | Ordinal: 6476
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1962 | Ordinal: 6499
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x197A | Ordinal: 6523
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1992 | Ordinal: 6547
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1A04 | Ordinal: 6661
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A73 | Ordinal: 6772
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A8D | Ordinal: 6798
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AA6 | Ordinal: 6823
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AC0 | Ordinal: 6849
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AD9 | Ordinal: 6874
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AF8 | Ordinal: 6905
        void glCreateProgram(void);

    // RVA: 0x1B15 | Ordinal: 6934
        void glCreateShader(unsigned int);

    // RVA: 0x1B41 | Ordinal: 6978
        void glCullFace(unsigned int);

    // RVA: 0x1B66 | Ordinal: 7015
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B79 | Ordinal: 7034
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B9F | Ordinal: 7072
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BC0 | Ordinal: 7105
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BD3 | Ordinal: 7124
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BF7 | Ordinal: 7160
        void glDeleteShader(unsigned int);

    // RVA: 0x1C08 | Ordinal: 7177
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C22 | Ordinal: 7203
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C42 | Ordinal: 7235
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C5D | Ordinal: 7262
        void glDepthFunc(unsigned int);

    // RVA: 0x1C78 | Ordinal: 7289
        void glDepthMask(unsigned char);

    // RVA: 0x1C92 | Ordinal: 7315
        void glDepthRange(double, double);

    // RVA: 0x1CC6 | Ordinal: 7367
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CE1 | Ordinal: 7394
        void glDisable(unsigned int);

    // RVA: 0x1D08 | Ordinal: 7433
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D1B | Ordinal: 7452
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D44 | Ordinal: 7493
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D63 | Ordinal: 7524
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D85 | Ordinal: 7558
        void glDrawBuffer(unsigned int);

    // RVA: 0x1D9A | Ordinal: 7579
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DB4 | Ordinal: 7605
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DC5 | Ordinal: 7622
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DE4 | Ordinal: 7653
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DFD | Ordinal: 7678
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E2F | Ordinal: 7728
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E40 | Ordinal: 7745
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1EB5 | Ordinal: 7862
        void glEnable(unsigned int);

    // RVA: 0x1EDC | Ordinal: 7901
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EEF | Ordinal: 7920
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F12 | Ordinal: 7955
        void glEndConditionalRender(void);

    // RVA: 0x1F39 | Ordinal: 7994
        void glEndQuery(unsigned int);

    // RVA: 0x1F58 | Ordinal: 8025
        void glEndTransformFeedback(void);

    // RVA: 0x2046 | Ordinal: 8263
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x2061 | Ordinal: 8290
        void glFinish(void);

    // RVA: 0x207C | Ordinal: 8317
        void glFlush(void);

    // RVA: 0x208F | Ordinal: 8336
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x2131 | Ordinal: 8498
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2179 | Ordinal: 8570
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2143 | Ordinal: 8516
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2156 | Ordinal: 8535
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2168 | Ordinal: 8553
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x218C | Ordinal: 8589
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21A7 | Ordinal: 8616
        void glFrontFace(unsigned int);

    // RVA: 0x21CE | Ordinal: 8655
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21E1 | Ordinal: 8674
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x2213 | Ordinal: 8724
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2226 | Ordinal: 8743
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x224F | Ordinal: 8784
        void glGenTextures(int, unsigned int *);

    // RVA: 0x226F | Ordinal: 8816
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x2282 | Ordinal: 8835
        void glGenerateMipmap(unsigned int);

    // RVA: 0x22A1 | Ordinal: 8866
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22DA | Ordinal: 8923
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22EC | Ordinal: 8941
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22FE | Ordinal: 8959
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x230F | Ordinal: 8976
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2321 | Ordinal: 8994
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x2336 | Ordinal: 9015
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x234B | Ordinal: 9036
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x235E | Ordinal: 9055
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2379 | Ordinal: 9082
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x238A | Ordinal: 9099
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23A0 | Ordinal: 9121
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23B6 | Ordinal: 9143
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23CC | Ordinal: 9165
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x2421 | Ordinal: 9250
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x247B | Ordinal: 9340
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x2496 | Ordinal: 9367
        void glGetError(void);

    // RVA: 0x24BB | Ordinal: 9404
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24DC | Ordinal: 9437
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24EF | Ordinal: 9456
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2537 | Ordinal: 9528
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2548 | Ordinal: 9545
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x255B | Ordinal: 9564
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2576 | Ordinal: 9591
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x263A | Ordinal: 9787
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x269F | Ordinal: 9888
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26CE | Ordinal: 9935
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x272E | Ordinal: 10031
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x275D | Ordinal: 10078
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2781 | Ordinal: 10114
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2797 | Ordinal: 10136
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27AA | Ordinal: 10155
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x280A | Ordinal: 10251
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x282A | Ordinal: 10283
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x283F | Ordinal: 10304
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x285A | Ordinal: 10331
        void glGetString(unsigned int);

    // RVA: 0x286D | Ordinal: 10350
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2896 | Ordinal: 10391
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x2905 | Ordinal: 10502
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2920 | Ordinal: 10529
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x293B | Ordinal: 10556
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x294E | Ordinal: 10575
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2961 | Ordinal: 10594
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x297C | Ordinal: 10621
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2997 | Ordinal: 10648
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29BA | Ordinal: 10683
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29D2 | Ordinal: 10707
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29E4 | Ordinal: 10725
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x29F9 | Ordinal: 10746
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A26 | Ordinal: 10791
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A3B | Ordinal: 10812
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A4E | Ordinal: 10831
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A67 | Ordinal: 10856
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A7A | Ordinal: 10875
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A99 | Ordinal: 10906
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AAD | Ordinal: 10926
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AC2 | Ordinal: 10947
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AD7 | Ordinal: 10968
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B0D | Ordinal: 11022
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2BDE | Ordinal: 11231
        void glIndexub(unsigned char);

    // RVA: 0x2BF5 | Ordinal: 11254
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C55 | Ordinal: 11350
        void glIsBuffer(unsigned int);

    // RVA: 0x2C70 | Ordinal: 11377
        void glIsEnabled(unsigned int);

    // RVA: 0x2C83 | Ordinal: 11396
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C96 | Ordinal: 11415
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CBC | Ordinal: 11453
        void glIsProgram(unsigned int);

    // RVA: 0x2CDD | Ordinal: 11486
        void glIsQuery(unsigned int);

    // RVA: 0x2CF0 | Ordinal: 11505
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D14 | Ordinal: 11541
        void glIsShader(unsigned int);

    // RVA: 0x2D25 | Ordinal: 11558
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D3F | Ordinal: 11584
        void glIsTexture(unsigned int);

    // RVA: 0x2D5F | Ordinal: 11616
        void glIsVertexArray(unsigned int);

    // RVA: 0x2E13 | Ordinal: 11796
        void glLineWidth(float);

    // RVA: 0x2E28 | Ordinal: 11817
        void glLinkProgram(unsigned int);

    // RVA: 0x2EB3 | Ordinal: 11956
        void glLogicOp(unsigned int);

    // RVA: 0x2F0D | Ordinal: 12046
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F20 | Ordinal: 12065
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x3039 | Ordinal: 12346
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3055 | Ordinal: 12374
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x3065 | Ordinal: 12390
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3425 | Ordinal: 13350
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3440 | Ordinal: 13377
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3489 | Ordinal: 13450
        void glPointParameterf(unsigned int, float);

    // RVA: 0x349F | Ordinal: 13472
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34B5 | Ordinal: 13494
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34CB | Ordinal: 13516
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34E5 | Ordinal: 13542
        void glPointSize(float);

    // RVA: 0x34FF | Ordinal: 13568
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3519 | Ordinal: 13594
        void glPolygonOffset(float, float);

    // RVA: 0x3584 | Ordinal: 13701
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x37CF | Ordinal: 14288
        void glProvokingVertex(unsigned int);

    // RVA: 0x39D8 | Ordinal: 14809
        void glReadBuffer(unsigned int);

    // RVA: 0x39F3 | Ordinal: 14836
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3AAD | Ordinal: 15022
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3AC0 | Ordinal: 15041
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3B25 | Ordinal: 15142
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B36 | Ordinal: 15159
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3BCD | Ordinal: 15310
        void glScissor(int, int, int, int);

    // RVA: 0x3D31 | Ordinal: 15666
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D52 | Ordinal: 15699
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D67 | Ordinal: 15720
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D82 | Ordinal: 15747
        void glStencilMask(unsigned int);

    // RVA: 0x3D97 | Ordinal: 15768
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DB2 | Ordinal: 15795
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DC7 | Ordinal: 15816
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DD9 | Ordinal: 15834
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4134 | Ordinal: 16693
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x414F | Ordinal: 16720
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x415F | Ordinal: 16736
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x4178 | Ordinal: 16761
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4188 | Ordinal: 16777
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x419B | Ordinal: 16796
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41AE | Ordinal: 16815
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41C9 | Ordinal: 16842
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41E4 | Ordinal: 16869
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41FF | Ordinal: 16896
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x421A | Ordinal: 16923
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x425B | Ordinal: 16988
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4275 | Ordinal: 17014
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x428E | Ordinal: 17039
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42CD | Ordinal: 17102
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x431C | Ordinal: 17181
        void glUniform1f(int, float);

    // RVA: 0x4331 | Ordinal: 17202
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4346 | Ordinal: 17223
        void glUniform1i(int, int);

    // RVA: 0x435B | Ordinal: 17244
        void glUniform1iv(int, int, int const *);

    // RVA: 0x436E | Ordinal: 17263
        void glUniform1ui(int, unsigned int);

    // RVA: 0x4381 | Ordinal: 17282
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x43AE | Ordinal: 17327
        void glUniform2f(int, float, float);

    // RVA: 0x43C3 | Ordinal: 17348
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43D8 | Ordinal: 17369
        void glUniform2i(int, int, int);

    // RVA: 0x43ED | Ordinal: 17390
        void glUniform2iv(int, int, int const *);

    // RVA: 0x4400 | Ordinal: 17409
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4413 | Ordinal: 17428
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x4440 | Ordinal: 17473
        void glUniform3f(int, float, float, float);

    // RVA: 0x4455 | Ordinal: 17494
        void glUniform3fv(int, int, float const *);

    // RVA: 0x446A | Ordinal: 17515
        void glUniform3i(int, int, int, int);

    // RVA: 0x447F | Ordinal: 17536
        void glUniform3iv(int, int, int const *);

    // RVA: 0x4492 | Ordinal: 17555
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44A5 | Ordinal: 17574
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44D2 | Ordinal: 17619
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44E7 | Ordinal: 17640
        void glUniform4fv(int, int, float const *);

    // RVA: 0x44FC | Ordinal: 17661
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x4511 | Ordinal: 17682
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4524 | Ordinal: 17701
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4537 | Ordinal: 17720
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4549 | Ordinal: 17738
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x456A | Ordinal: 17771
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x458A | Ordinal: 17803
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45AA | Ordinal: 17835
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45CB | Ordinal: 17868
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45EB | Ordinal: 17900
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x460B | Ordinal: 17932
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x462C | Ordinal: 17965
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x464C | Ordinal: 17997
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x466C | Ordinal: 18029
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x468E | Ordinal: 18063
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46A5 | Ordinal: 18086
        void glUseProgram(unsigned int);

    // RVA: 0x46C5 | Ordinal: 18118
        void glValidateProgram(unsigned int);

    // RVA: 0x4B6B | Ordinal: 19308
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4C50 | Ordinal: 19537
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4CCA | Ordinal: 19659
        void glViewport(int, int, int, int);

    // RVA: 0x4CF9 | Ordinal: 19706
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4F25 | Ordinal: 20262
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FE7 | Ordinal: 20456
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x610B | Ordinal: 24844
        void versionProfile(void);

    // RVA: 0x488 | Ordinal: 1161
        void _QOpenGLFunctions_3_2_Core(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_3_2_CORE_HPP
