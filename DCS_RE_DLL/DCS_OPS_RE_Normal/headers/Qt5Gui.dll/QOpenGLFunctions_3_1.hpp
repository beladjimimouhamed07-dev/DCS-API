#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_3_1
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_3_1
{
public:

    // RVA: 0x1B8 | Ordinal: 441
        void QOpenGLFunctions_3_1(void);

    // RVA: 0x11DB | Ordinal: 4572
        void glActiveTexture(unsigned int);

    // RVA: 0x1221 | Ordinal: 4642
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x1245 | Ordinal: 4678
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x125B | Ordinal: 4700
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x127A | Ordinal: 4731
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x128F | Ordinal: 4752
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12A5 | Ordinal: 4774
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12B8 | Ordinal: 4793
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12CB | Ordinal: 4812
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12E5 | Ordinal: 4838
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x1306 | Ordinal: 4871
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1331 | Ordinal: 4914
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x135E | Ordinal: 4959
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1384 | Ordinal: 4997
        void glBindVertexArray(unsigned int);

    // RVA: 0x13BA | Ordinal: 5051
        void glBlendColor(float, float, float, float);

    // RVA: 0x13D3 | Ordinal: 5076
        void glBlendEquation(unsigned int);

    // RVA: 0x13E8 | Ordinal: 5097
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x141D | Ordinal: 5150
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1434 | Ordinal: 5173
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1461 | Ordinal: 5218
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1479 | Ordinal: 5242
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x1493 | Ordinal: 5268
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14C8 | Ordinal: 5321
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14DC | Ordinal: 5341
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x14F7 | Ordinal: 5368
        void glClear(unsigned int);

    // RVA: 0x1527 | Ordinal: 5416
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x153A | Ordinal: 5435
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x154D | Ordinal: 5454
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x1560 | Ordinal: 5473
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x157B | Ordinal: 5500
        void glClearColor(float, float, float, float);

    // RVA: 0x1595 | Ordinal: 5526
        void glClearDepth(double);

    // RVA: 0x15D8 | Ordinal: 5593
        void glClearStencil(int);

    // RVA: 0x184D | Ordinal: 6222
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1860 | Ordinal: 6241
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1902 | Ordinal: 6403
        void glCompileShader(unsigned int);

    // RVA: 0x1919 | Ordinal: 6426
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1931 | Ordinal: 6450
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1949 | Ordinal: 6474
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1960 | Ordinal: 6497
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1978 | Ordinal: 6521
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1990 | Ordinal: 6545
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1A02 | Ordinal: 6659
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A71 | Ordinal: 6770
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A8B | Ordinal: 6796
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AA4 | Ordinal: 6821
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1ABE | Ordinal: 6847
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AD7 | Ordinal: 6872
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AF6 | Ordinal: 6903
        void glCreateProgram(void);

    // RVA: 0x1B13 | Ordinal: 6932
        void glCreateShader(unsigned int);

    // RVA: 0x1B3F | Ordinal: 6976
        void glCullFace(unsigned int);

    // RVA: 0x1B64 | Ordinal: 7013
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B77 | Ordinal: 7032
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B9D | Ordinal: 7070
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BBE | Ordinal: 7103
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BD1 | Ordinal: 7122
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BF5 | Ordinal: 7158
        void glDeleteShader(unsigned int);

    // RVA: 0x1C20 | Ordinal: 7201
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C40 | Ordinal: 7233
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C5B | Ordinal: 7260
        void glDepthFunc(unsigned int);

    // RVA: 0x1C76 | Ordinal: 7287
        void glDepthMask(unsigned char);

    // RVA: 0x1C90 | Ordinal: 7313
        void glDepthRange(double, double);

    // RVA: 0x1CC4 | Ordinal: 7365
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CDF | Ordinal: 7392
        void glDisable(unsigned int);

    // RVA: 0x1D06 | Ordinal: 7431
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D19 | Ordinal: 7450
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D42 | Ordinal: 7491
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D61 | Ordinal: 7522
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D83 | Ordinal: 7556
        void glDrawBuffer(unsigned int);

    // RVA: 0x1D98 | Ordinal: 7577
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DB2 | Ordinal: 7603
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DE2 | Ordinal: 7651
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E2D | Ordinal: 7726
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1EB3 | Ordinal: 7860
        void glEnable(unsigned int);

    // RVA: 0x1EDA | Ordinal: 7899
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EED | Ordinal: 7918
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F10 | Ordinal: 7953
        void glEndConditionalRender(void);

    // RVA: 0x1F37 | Ordinal: 7992
        void glEndQuery(unsigned int);

    // RVA: 0x1F56 | Ordinal: 8023
        void glEndTransformFeedback(void);

    // RVA: 0x205F | Ordinal: 8288
        void glFinish(void);

    // RVA: 0x207A | Ordinal: 8315
        void glFlush(void);

    // RVA: 0x208D | Ordinal: 8334
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x212F | Ordinal: 8496
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2141 | Ordinal: 8514
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2154 | Ordinal: 8533
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2166 | Ordinal: 8551
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x218A | Ordinal: 8587
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21A5 | Ordinal: 8614
        void glFrontFace(unsigned int);

    // RVA: 0x21CC | Ordinal: 8653
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21DF | Ordinal: 8672
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x2211 | Ordinal: 8722
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2224 | Ordinal: 8741
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x224D | Ordinal: 8782
        void glGenTextures(int, unsigned int *);

    // RVA: 0x226D | Ordinal: 8814
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x2280 | Ordinal: 8833
        void glGenerateMipmap(unsigned int);

    // RVA: 0x229F | Ordinal: 8864
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22D8 | Ordinal: 8921
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22EA | Ordinal: 8939
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22FC | Ordinal: 8957
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x230D | Ordinal: 8974
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x231F | Ordinal: 8992
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x2334 | Ordinal: 9013
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2349 | Ordinal: 9034
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x235C | Ordinal: 9053
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2377 | Ordinal: 9080
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x239E | Ordinal: 9119
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23B4 | Ordinal: 9141
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23CA | Ordinal: 9163
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x241F | Ordinal: 9248
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2479 | Ordinal: 9338
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x2494 | Ordinal: 9365
        void glGetError(void);

    // RVA: 0x24B9 | Ordinal: 9402
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24DA | Ordinal: 9435
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24ED | Ordinal: 9454
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2559 | Ordinal: 9562
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2574 | Ordinal: 9589
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x269D | Ordinal: 9886
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26CC | Ordinal: 9933
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x272C | Ordinal: 10029
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x275B | Ordinal: 10076
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x277F | Ordinal: 10112
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2795 | Ordinal: 10134
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27A8 | Ordinal: 10153
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2808 | Ordinal: 10249
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2828 | Ordinal: 10281
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x283D | Ordinal: 10302
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2858 | Ordinal: 10329
        void glGetString(unsigned int);

    // RVA: 0x286B | Ordinal: 10348
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2903 | Ordinal: 10500
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x291E | Ordinal: 10527
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2939 | Ordinal: 10554
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x294C | Ordinal: 10573
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x295F | Ordinal: 10592
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x297A | Ordinal: 10619
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2995 | Ordinal: 10646
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29B8 | Ordinal: 10681
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29D0 | Ordinal: 10705
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29E2 | Ordinal: 10723
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x29F7 | Ordinal: 10744
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A24 | Ordinal: 10789
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A39 | Ordinal: 10810
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A4C | Ordinal: 10829
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A65 | Ordinal: 10854
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A78 | Ordinal: 10873
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A97 | Ordinal: 10904
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AAB | Ordinal: 10924
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AC0 | Ordinal: 10945
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AD5 | Ordinal: 10966
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B0B | Ordinal: 11020
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2BDC | Ordinal: 11229
        void glIndexub(unsigned char);

    // RVA: 0x2BF3 | Ordinal: 11252
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C53 | Ordinal: 11348
        void glIsBuffer(unsigned int);

    // RVA: 0x2C6E | Ordinal: 11375
        void glIsEnabled(unsigned int);

    // RVA: 0x2C81 | Ordinal: 11394
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C94 | Ordinal: 11413
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CBA | Ordinal: 11451
        void glIsProgram(unsigned int);

    // RVA: 0x2CDB | Ordinal: 11484
        void glIsQuery(unsigned int);

    // RVA: 0x2CEE | Ordinal: 11503
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D12 | Ordinal: 11539
        void glIsShader(unsigned int);

    // RVA: 0x2D3D | Ordinal: 11582
        void glIsTexture(unsigned int);

    // RVA: 0x2D5D | Ordinal: 11614
        void glIsVertexArray(unsigned int);

    // RVA: 0x2E11 | Ordinal: 11794
        void glLineWidth(float);

    // RVA: 0x2E26 | Ordinal: 11815
        void glLinkProgram(unsigned int);

    // RVA: 0x2EB1 | Ordinal: 11954
        void glLogicOp(unsigned int);

    // RVA: 0x2F0B | Ordinal: 12044
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F1E | Ordinal: 12063
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x3037 | Ordinal: 12344
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3053 | Ordinal: 12372
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x3423 | Ordinal: 13348
        void glPixelStoref(unsigned int, float);

    // RVA: 0x343E | Ordinal: 13375
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3487 | Ordinal: 13448
        void glPointParameterf(unsigned int, float);

    // RVA: 0x349D | Ordinal: 13470
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34B3 | Ordinal: 13492
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34C9 | Ordinal: 13514
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34E3 | Ordinal: 13540
        void glPointSize(float);

    // RVA: 0x34FD | Ordinal: 13566
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3517 | Ordinal: 13592
        void glPolygonOffset(float, float);

    // RVA: 0x3582 | Ordinal: 13699
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x39D6 | Ordinal: 14807
        void glReadBuffer(unsigned int);

    // RVA: 0x39F1 | Ordinal: 14834
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3AAB | Ordinal: 15020
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3ABE | Ordinal: 15039
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3B23 | Ordinal: 15140
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3BCB | Ordinal: 15308
        void glScissor(int, int, int, int);

    // RVA: 0x3D2F | Ordinal: 15664
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D50 | Ordinal: 15697
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D65 | Ordinal: 15718
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D80 | Ordinal: 15745
        void glStencilMask(unsigned int);

    // RVA: 0x3D95 | Ordinal: 15766
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DB0 | Ordinal: 15793
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DC5 | Ordinal: 15814
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DD7 | Ordinal: 15832
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4132 | Ordinal: 16691
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x414D | Ordinal: 16718
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4176 | Ordinal: 16759
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4199 | Ordinal: 16794
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41AC | Ordinal: 16813
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41C7 | Ordinal: 16840
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41E2 | Ordinal: 16867
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x41FD | Ordinal: 16894
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4218 | Ordinal: 16921
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4259 | Ordinal: 16986
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4273 | Ordinal: 17012
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x428C | Ordinal: 17037
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42CB | Ordinal: 17100
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x431A | Ordinal: 17179
        void glUniform1f(int, float);

    // RVA: 0x432F | Ordinal: 17200
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4344 | Ordinal: 17221
        void glUniform1i(int, int);

    // RVA: 0x4359 | Ordinal: 17242
        void glUniform1iv(int, int, int const *);

    // RVA: 0x436C | Ordinal: 17261
        void glUniform1ui(int, unsigned int);

    // RVA: 0x437F | Ordinal: 17280
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x43AC | Ordinal: 17325
        void glUniform2f(int, float, float);

    // RVA: 0x43C1 | Ordinal: 17346
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43D6 | Ordinal: 17367
        void glUniform2i(int, int, int);

    // RVA: 0x43EB | Ordinal: 17388
        void glUniform2iv(int, int, int const *);

    // RVA: 0x43FE | Ordinal: 17407
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4411 | Ordinal: 17426
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x443E | Ordinal: 17471
        void glUniform3f(int, float, float, float);

    // RVA: 0x4453 | Ordinal: 17492
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4468 | Ordinal: 17513
        void glUniform3i(int, int, int, int);

    // RVA: 0x447D | Ordinal: 17534
        void glUniform3iv(int, int, int const *);

    // RVA: 0x4490 | Ordinal: 17553
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44A3 | Ordinal: 17572
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44D0 | Ordinal: 17617
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44E5 | Ordinal: 17638
        void glUniform4fv(int, int, float const *);

    // RVA: 0x44FA | Ordinal: 17659
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x450F | Ordinal: 17680
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4522 | Ordinal: 17699
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4535 | Ordinal: 17718
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4547 | Ordinal: 17736
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4568 | Ordinal: 17769
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x4588 | Ordinal: 17801
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45A8 | Ordinal: 17833
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45C9 | Ordinal: 17866
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45E9 | Ordinal: 17898
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4609 | Ordinal: 17930
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x462A | Ordinal: 17963
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x464A | Ordinal: 17995
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x466A | Ordinal: 18027
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x468C | Ordinal: 18061
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46A3 | Ordinal: 18084
        void glUseProgram(unsigned int);

    // RVA: 0x46C3 | Ordinal: 18116
        void glValidateProgram(unsigned int);

    // RVA: 0x4B69 | Ordinal: 19306
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4C4E | Ordinal: 19535
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4CC8 | Ordinal: 19657
        void glViewport(int, int, int, int);

    // RVA: 0x4F23 | Ordinal: 20260
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FE5 | Ordinal: 20454
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6109 | Ordinal: 24842
        void versionProfile(void);

    // RVA: 0x486 | Ordinal: 1159
        void _QOpenGLFunctions_3_1(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_3_1_HPP
