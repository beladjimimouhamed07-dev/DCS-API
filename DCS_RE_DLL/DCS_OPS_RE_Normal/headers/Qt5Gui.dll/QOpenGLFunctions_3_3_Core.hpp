#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_3_3_Core
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_3_3_Core
{
public:

    // RVA: 0x1BC | Ordinal: 445
        void QOpenGLFunctions_3_3_Core(void);

    // RVA: 0x11DF | Ordinal: 4576
        void glActiveTexture(unsigned int);

    // RVA: 0x1225 | Ordinal: 4646
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x1249 | Ordinal: 4682
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x125F | Ordinal: 4704
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x127E | Ordinal: 4735
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x1293 | Ordinal: 4756
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12A9 | Ordinal: 4778
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12BC | Ordinal: 4797
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12CF | Ordinal: 4816
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12E9 | Ordinal: 4842
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12F7 | Ordinal: 4856
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x130A | Ordinal: 4875
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1335 | Ordinal: 4918
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x1344 | Ordinal: 4933
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1362 | Ordinal: 4963
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1388 | Ordinal: 5001
        void glBindVertexArray(unsigned int);

    // RVA: 0x13BE | Ordinal: 5055
        void glBlendColor(float, float, float, float);

    // RVA: 0x13D7 | Ordinal: 5080
        void glBlendEquation(unsigned int);

    // RVA: 0x13EC | Ordinal: 5101
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x1421 | Ordinal: 5154
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1438 | Ordinal: 5177
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1465 | Ordinal: 5222
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x147D | Ordinal: 5246
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x1497 | Ordinal: 5272
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14CC | Ordinal: 5325
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14E0 | Ordinal: 5345
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x14FB | Ordinal: 5372
        void glClear(unsigned int);

    // RVA: 0x152B | Ordinal: 5420
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x153E | Ordinal: 5439
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x1551 | Ordinal: 5458
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x1564 | Ordinal: 5477
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x157F | Ordinal: 5504
        void glClearColor(float, float, float, float);

    // RVA: 0x1599 | Ordinal: 5530
        void glClearDepth(double);

    // RVA: 0x15DC | Ordinal: 5597
        void glClearStencil(int);

    // RVA: 0x1603 | Ordinal: 5636
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x1851 | Ordinal: 6226
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1864 | Ordinal: 6245
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1883 | Ordinal: 6276
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x188F | Ordinal: 6288
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x189B | Ordinal: 6300
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18A7 | Ordinal: 6312
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x1906 | Ordinal: 6407
        void glCompileShader(unsigned int);

    // RVA: 0x191D | Ordinal: 6430
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1935 | Ordinal: 6454
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x194D | Ordinal: 6478
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1964 | Ordinal: 6501
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x197C | Ordinal: 6525
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1994 | Ordinal: 6549
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1A06 | Ordinal: 6663
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A75 | Ordinal: 6774
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A8F | Ordinal: 6800
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AA8 | Ordinal: 6825
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AC2 | Ordinal: 6851
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1ADB | Ordinal: 6876
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AFA | Ordinal: 6907
        void glCreateProgram(void);

    // RVA: 0x1B17 | Ordinal: 6936
        void glCreateShader(unsigned int);

    // RVA: 0x1B43 | Ordinal: 6980
        void glCullFace(unsigned int);

    // RVA: 0x1B68 | Ordinal: 7017
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B7B | Ordinal: 7036
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1BA1 | Ordinal: 7074
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BC2 | Ordinal: 7107
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BD5 | Ordinal: 7126
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BE4 | Ordinal: 7141
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1BF9 | Ordinal: 7162
        void glDeleteShader(unsigned int);

    // RVA: 0x1C0A | Ordinal: 7179
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C24 | Ordinal: 7205
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C44 | Ordinal: 7237
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C5F | Ordinal: 7264
        void glDepthFunc(unsigned int);

    // RVA: 0x1C7A | Ordinal: 7291
        void glDepthMask(unsigned char);

    // RVA: 0x1C94 | Ordinal: 7317
        void glDepthRange(double, double);

    // RVA: 0x1CC8 | Ordinal: 7369
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CE3 | Ordinal: 7396
        void glDisable(unsigned int);

    // RVA: 0x1D0A | Ordinal: 7435
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D1D | Ordinal: 7454
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D46 | Ordinal: 7495
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D65 | Ordinal: 7526
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D87 | Ordinal: 7560
        void glDrawBuffer(unsigned int);

    // RVA: 0x1D9C | Ordinal: 7581
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DB6 | Ordinal: 7607
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DC7 | Ordinal: 7624
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DE6 | Ordinal: 7655
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DFF | Ordinal: 7680
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E31 | Ordinal: 7730
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E42 | Ordinal: 7747
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1EB7 | Ordinal: 7864
        void glEnable(unsigned int);

    // RVA: 0x1EDE | Ordinal: 7903
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EF1 | Ordinal: 7922
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F14 | Ordinal: 7957
        void glEndConditionalRender(void);

    // RVA: 0x1F3B | Ordinal: 7996
        void glEndQuery(unsigned int);

    // RVA: 0x1F5A | Ordinal: 8027
        void glEndTransformFeedback(void);

    // RVA: 0x2048 | Ordinal: 8265
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x2063 | Ordinal: 8292
        void glFinish(void);

    // RVA: 0x207E | Ordinal: 8319
        void glFlush(void);

    // RVA: 0x2091 | Ordinal: 8338
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x2133 | Ordinal: 8500
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x217B | Ordinal: 8572
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2145 | Ordinal: 8518
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2158 | Ordinal: 8537
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x216A | Ordinal: 8555
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x218E | Ordinal: 8591
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21A9 | Ordinal: 8618
        void glFrontFace(unsigned int);

    // RVA: 0x21D0 | Ordinal: 8657
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21E3 | Ordinal: 8676
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x2215 | Ordinal: 8726
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2228 | Ordinal: 8745
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x2237 | Ordinal: 8760
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x2251 | Ordinal: 8786
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2271 | Ordinal: 8818
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x2284 | Ordinal: 8837
        void glGenerateMipmap(unsigned int);

    // RVA: 0x22A3 | Ordinal: 8868
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22DC | Ordinal: 8925
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22EE | Ordinal: 8943
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2300 | Ordinal: 8961
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2311 | Ordinal: 8978
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2323 | Ordinal: 8996
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x2338 | Ordinal: 9017
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x234D | Ordinal: 9038
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2360 | Ordinal: 9057
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x237B | Ordinal: 9084
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x238C | Ordinal: 9101
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23A2 | Ordinal: 9123
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23B8 | Ordinal: 9145
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23CE | Ordinal: 9167
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x2423 | Ordinal: 9252
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x247D | Ordinal: 9342
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x2498 | Ordinal: 9369
        void glGetError(void);

    // RVA: 0x24BD | Ordinal: 9406
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24CB | Ordinal: 9420
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24DE | Ordinal: 9439
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24F1 | Ordinal: 9458
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2539 | Ordinal: 9530
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x254A | Ordinal: 9547
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x255D | Ordinal: 9566
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2578 | Ordinal: 9593
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x263C | Ordinal: 9789
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x26A1 | Ordinal: 9890
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26D0 | Ordinal: 9937
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2730 | Ordinal: 10033
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x274A | Ordinal: 10059
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x275F | Ordinal: 10080
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x276D | Ordinal: 10094
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x2783 | Ordinal: 10116
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2799 | Ordinal: 10138
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27AC | Ordinal: 10157
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27BB | Ordinal: 10172
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27CA | Ordinal: 10187
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27D9 | Ordinal: 10202
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27E8 | Ordinal: 10217
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x280C | Ordinal: 10253
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x282C | Ordinal: 10285
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x2841 | Ordinal: 10306
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x285C | Ordinal: 10333
        void glGetString(unsigned int);

    // RVA: 0x286F | Ordinal: 10352
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2898 | Ordinal: 10393
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x2907 | Ordinal: 10504
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2922 | Ordinal: 10531
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x293D | Ordinal: 10558
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2950 | Ordinal: 10577
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2963 | Ordinal: 10596
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x297E | Ordinal: 10623
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2999 | Ordinal: 10650
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29BC | Ordinal: 10685
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29D4 | Ordinal: 10709
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29E6 | Ordinal: 10727
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x29FB | Ordinal: 10748
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A28 | Ordinal: 10793
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A3D | Ordinal: 10814
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A50 | Ordinal: 10833
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A69 | Ordinal: 10858
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A7C | Ordinal: 10877
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A9B | Ordinal: 10908
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AAF | Ordinal: 10928
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AC4 | Ordinal: 10949
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AD9 | Ordinal: 10970
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B0F | Ordinal: 11024
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2BE0 | Ordinal: 11233
        void glIndexub(unsigned char);

    // RVA: 0x2BF7 | Ordinal: 11256
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C57 | Ordinal: 11352
        void glIsBuffer(unsigned int);

    // RVA: 0x2C72 | Ordinal: 11379
        void glIsEnabled(unsigned int);

    // RVA: 0x2C85 | Ordinal: 11398
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C98 | Ordinal: 11417
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CBE | Ordinal: 11455
        void glIsProgram(unsigned int);

    // RVA: 0x2CDF | Ordinal: 11488
        void glIsQuery(unsigned int);

    // RVA: 0x2CF2 | Ordinal: 11507
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D01 | Ordinal: 11522
        void glIsSampler(unsigned int);

    // RVA: 0x2D16 | Ordinal: 11543
        void glIsShader(unsigned int);

    // RVA: 0x2D27 | Ordinal: 11560
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D41 | Ordinal: 11586
        void glIsTexture(unsigned int);

    // RVA: 0x2D61 | Ordinal: 11618
        void glIsVertexArray(unsigned int);

    // RVA: 0x2E15 | Ordinal: 11798
        void glLineWidth(float);

    // RVA: 0x2E2A | Ordinal: 11819
        void glLinkProgram(unsigned int);

    // RVA: 0x2EB5 | Ordinal: 11958
        void glLogicOp(unsigned int);

    // RVA: 0x2F0F | Ordinal: 12048
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F22 | Ordinal: 12067
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x303B | Ordinal: 12348
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x3057 | Ordinal: 12376
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x3067 | Ordinal: 12392
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x323B | Ordinal: 12860
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3247 | Ordinal: 12872
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3253 | Ordinal: 12884
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x325F | Ordinal: 12896
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x326B | Ordinal: 12908
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3277 | Ordinal: 12920
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3283 | Ordinal: 12932
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x328F | Ordinal: 12944
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x336E | Ordinal: 13167
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x337A | Ordinal: 13179
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3427 | Ordinal: 13352
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3442 | Ordinal: 13379
        void glPixelStorei(unsigned int, int);

    // RVA: 0x348B | Ordinal: 13452
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34A1 | Ordinal: 13474
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34B7 | Ordinal: 13496
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34CD | Ordinal: 13518
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34E7 | Ordinal: 13544
        void glPointSize(float);

    // RVA: 0x3501 | Ordinal: 13570
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x351B | Ordinal: 13596
        void glPolygonOffset(float, float);

    // RVA: 0x3586 | Ordinal: 13703
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x37D1 | Ordinal: 14290
        void glProvokingVertex(unsigned int);

    // RVA: 0x3827 | Ordinal: 14376
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x39DA | Ordinal: 14811
        void glReadBuffer(unsigned int);

    // RVA: 0x39F5 | Ordinal: 14838
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3AAF | Ordinal: 15024
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3AC2 | Ordinal: 15043
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3B27 | Ordinal: 15144
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B38 | Ordinal: 15161
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B47 | Ordinal: 15176
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B56 | Ordinal: 15191
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B65 | Ordinal: 15206
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B74 | Ordinal: 15221
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B83 | Ordinal: 15236
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B92 | Ordinal: 15251
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BCF | Ordinal: 15312
        void glScissor(int, int, int, int);

    // RVA: 0x3CCB | Ordinal: 15564
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CD7 | Ordinal: 15576
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3D33 | Ordinal: 15668
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D54 | Ordinal: 15701
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D69 | Ordinal: 15722
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D84 | Ordinal: 15749
        void glStencilMask(unsigned int);

    // RVA: 0x3D99 | Ordinal: 15770
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DB4 | Ordinal: 15797
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DC9 | Ordinal: 15818
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DDB | Ordinal: 15836
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4010 | Ordinal: 16401
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x401C | Ordinal: 16413
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4028 | Ordinal: 16425
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x4034 | Ordinal: 16437
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4040 | Ordinal: 16449
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x404C | Ordinal: 16461
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4058 | Ordinal: 16473
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x4064 | Ordinal: 16485
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4136 | Ordinal: 16695
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4151 | Ordinal: 16722
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4161 | Ordinal: 16738
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x417A | Ordinal: 16763
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x418A | Ordinal: 16779
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x419D | Ordinal: 16798
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41B0 | Ordinal: 16817
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41CB | Ordinal: 16844
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41E6 | Ordinal: 16871
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4201 | Ordinal: 16898
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x421C | Ordinal: 16925
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x425D | Ordinal: 16990
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4277 | Ordinal: 17016
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4290 | Ordinal: 17041
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42CF | Ordinal: 17104
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x431E | Ordinal: 17183
        void glUniform1f(int, float);

    // RVA: 0x4333 | Ordinal: 17204
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4348 | Ordinal: 17225
        void glUniform1i(int, int);

    // RVA: 0x435D | Ordinal: 17246
        void glUniform1iv(int, int, int const *);

    // RVA: 0x4370 | Ordinal: 17265
        void glUniform1ui(int, unsigned int);

    // RVA: 0x4383 | Ordinal: 17284
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x43B0 | Ordinal: 17329
        void glUniform2f(int, float, float);

    // RVA: 0x43C5 | Ordinal: 17350
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43DA | Ordinal: 17371
        void glUniform2i(int, int, int);

    // RVA: 0x43EF | Ordinal: 17392
        void glUniform2iv(int, int, int const *);

    // RVA: 0x4402 | Ordinal: 17411
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4415 | Ordinal: 17430
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x4442 | Ordinal: 17475
        void glUniform3f(int, float, float, float);

    // RVA: 0x4457 | Ordinal: 17496
        void glUniform3fv(int, int, float const *);

    // RVA: 0x446C | Ordinal: 17517
        void glUniform3i(int, int, int, int);

    // RVA: 0x4481 | Ordinal: 17538
        void glUniform3iv(int, int, int const *);

    // RVA: 0x4494 | Ordinal: 17557
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44A7 | Ordinal: 17576
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44D4 | Ordinal: 17621
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44E9 | Ordinal: 17642
        void glUniform4fv(int, int, float const *);

    // RVA: 0x44FE | Ordinal: 17663
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x4513 | Ordinal: 17684
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4526 | Ordinal: 17703
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4539 | Ordinal: 17722
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x454B | Ordinal: 17740
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x456C | Ordinal: 17773
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x458C | Ordinal: 17805
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45AC | Ordinal: 17837
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45CD | Ordinal: 17870
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45ED | Ordinal: 17902
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x460D | Ordinal: 17934
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x462E | Ordinal: 17967
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x464E | Ordinal: 17999
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x466E | Ordinal: 18031
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x4690 | Ordinal: 18065
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46A7 | Ordinal: 18088
        void glUseProgram(unsigned int);

    // RVA: 0x46C7 | Ordinal: 18120
        void glValidateProgram(unsigned int);

    // RVA: 0x4A6C | Ordinal: 19053
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4B6D | Ordinal: 19310
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BDB | Ordinal: 19420
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BE9 | Ordinal: 19434
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4BF7 | Ordinal: 19448
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C05 | Ordinal: 19462
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C13 | Ordinal: 19476
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C21 | Ordinal: 19490
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C2F | Ordinal: 19504
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C3D | Ordinal: 19518
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C52 | Ordinal: 19539
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C67 | Ordinal: 19560
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C73 | Ordinal: 19572
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C7F | Ordinal: 19584
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C8B | Ordinal: 19596
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C97 | Ordinal: 19608
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CA3 | Ordinal: 19620
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CCC | Ordinal: 19661
        void glViewport(int, int, int, int);

    // RVA: 0x4CFB | Ordinal: 19708
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4F27 | Ordinal: 20264
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FE9 | Ordinal: 20458
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x610D | Ordinal: 24846
        void versionProfile(void);

    // RVA: 0x48A | Ordinal: 1163
        void _QOpenGLFunctions_3_3_Core(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_3_3_CORE_HPP
