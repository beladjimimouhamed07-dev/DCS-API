#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_2_Core
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_2_Core
{
public:

    // RVA: 0x1C2 | Ordinal: 451
        void QOpenGLFunctions_4_2_Core(void);

    // RVA: 0x11CD | Ordinal: 4558
        void glActiveShaderProgram(unsigned int, unsigned int);

    // RVA: 0x11E5 | Ordinal: 4582
        void glActiveTexture(unsigned int);

    // RVA: 0x122B | Ordinal: 4652
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x124F | Ordinal: 4688
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x1265 | Ordinal: 4710
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x1271 | Ordinal: 4722
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1284 | Ordinal: 4741
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x1299 | Ordinal: 4762
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12AF | Ordinal: 4784
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12C2 | Ordinal: 4803
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12D5 | Ordinal: 4822
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12EF | Ordinal: 4848
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12FD | Ordinal: 4862
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x1310 | Ordinal: 4881
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x1319 | Ordinal: 4890
        void glBindImageTexture(unsigned int, unsigned int, int, unsigned char, int, unsigned int, unsigned int);

    // RVA: 0x1328 | Ordinal: 4905
        void glBindProgramPipeline(unsigned int);

    // RVA: 0x133B | Ordinal: 4924
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x134A | Ordinal: 4939
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1368 | Ordinal: 4969
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x137B | Ordinal: 4988
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x138E | Ordinal: 5007
        void glBindVertexArray(unsigned int);

    // RVA: 0x13C4 | Ordinal: 5061
        void glBlendColor(float, float, float, float);

    // RVA: 0x13DD | Ordinal: 5086
        void glBlendEquation(unsigned int);

    // RVA: 0x13F2 | Ordinal: 5107
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x13FF | Ordinal: 5120
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x140C | Ordinal: 5133
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x1427 | Ordinal: 5160
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x143E | Ordinal: 5183
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x144B | Ordinal: 5196
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1458 | Ordinal: 5209
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x146B | Ordinal: 5228
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1483 | Ordinal: 5252
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x149D | Ordinal: 5278
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14D2 | Ordinal: 5331
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14E6 | Ordinal: 5351
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x1501 | Ordinal: 5378
        void glClear(unsigned int);

    // RVA: 0x1531 | Ordinal: 5426
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1544 | Ordinal: 5445
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x1557 | Ordinal: 5464
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x156A | Ordinal: 5483
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x1585 | Ordinal: 5510
        void glClearColor(float, float, float, float);

    // RVA: 0x159F | Ordinal: 5536
        void glClearDepth(double);

    // RVA: 0x15AA | Ordinal: 5547
        void glClearDepthf(float);

    // RVA: 0x15E2 | Ordinal: 5603
        void glClearStencil(int);

    // RVA: 0x1609 | Ordinal: 5642
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x1857 | Ordinal: 6232
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x186A | Ordinal: 6251
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1889 | Ordinal: 6282
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x1895 | Ordinal: 6294
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x18A1 | Ordinal: 6306
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18AD | Ordinal: 6318
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x190C | Ordinal: 6413
        void glCompileShader(unsigned int);

    // RVA: 0x1923 | Ordinal: 6436
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x193B | Ordinal: 6460
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1953 | Ordinal: 6484
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x196A | Ordinal: 6507
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1982 | Ordinal: 6531
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x199A | Ordinal: 6555
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1A0C | Ordinal: 6669
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A7B | Ordinal: 6780
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A95 | Ordinal: 6806
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AAE | Ordinal: 6831
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AC8 | Ordinal: 6857
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AE1 | Ordinal: 6882
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1B00 | Ordinal: 6913
        void glCreateProgram(void);

    // RVA: 0x1B1D | Ordinal: 6942
        void glCreateShader(unsigned int);

    // RVA: 0x1B28 | Ordinal: 6953
        void glCreateShaderProgramv(unsigned int, int, char const *const *);

    // RVA: 0x1B49 | Ordinal: 6986
        void glCullFace(unsigned int);

    // RVA: 0x1B6E | Ordinal: 7023
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B81 | Ordinal: 7042
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1BA7 | Ordinal: 7080
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BB2 | Ordinal: 7091
        void glDeleteProgramPipelines(int, unsigned int const *);

    // RVA: 0x1BC8 | Ordinal: 7113
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BDB | Ordinal: 7132
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BEA | Ordinal: 7147
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1BFF | Ordinal: 7168
        void glDeleteShader(unsigned int);

    // RVA: 0x1C10 | Ordinal: 7185
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C2A | Ordinal: 7211
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C37 | Ordinal: 7224
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C4A | Ordinal: 7243
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C65 | Ordinal: 7270
        void glDepthFunc(unsigned int);

    // RVA: 0x1C80 | Ordinal: 7297
        void glDepthMask(unsigned char);

    // RVA: 0x1C9A | Ordinal: 7323
        void glDepthRange(double, double);

    // RVA: 0x1CA4 | Ordinal: 7333
        void glDepthRangeArrayv(unsigned int, int, double const *);

    // RVA: 0x1CAE | Ordinal: 7343
        void glDepthRangeIndexed(unsigned int, double, double);

    // RVA: 0x1CB9 | Ordinal: 7354
        void glDepthRangef(float, float);

    // RVA: 0x1CCE | Ordinal: 7375
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CE9 | Ordinal: 7402
        void glDisable(unsigned int);

    // RVA: 0x1D10 | Ordinal: 7441
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D23 | Ordinal: 7460
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D4C | Ordinal: 7501
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D59 | Ordinal: 7514
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D6B | Ordinal: 7532
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D73 | Ordinal: 7540
        void glDrawArraysInstancedBaseInstance(unsigned int, int, int, int, unsigned int);

    // RVA: 0x1D8D | Ordinal: 7566
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DA2 | Ordinal: 7587
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DBC | Ordinal: 7613
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DCD | Ordinal: 7630
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DDA | Ordinal: 7643
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DEC | Ordinal: 7661
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DF4 | Ordinal: 7669
        void glDrawElementsInstancedBaseInstance(unsigned int, int, unsigned int, void const *, int, unsigned int);

    // RVA: 0x1E05 | Ordinal: 7686
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E0D | Ordinal: 7694
        void glDrawElementsInstancedBaseVertexBaseInstance(unsigned int, int, unsigned int, void const *, int, int, unsigned int);

    // RVA: 0x1E37 | Ordinal: 7736
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E48 | Ordinal: 7753
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E54 | Ordinal: 7765
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E5C | Ordinal: 7773
        void glDrawTransformFeedbackInstanced(unsigned int, unsigned int, int);

    // RVA: 0x1E68 | Ordinal: 7785
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1E70 | Ordinal: 7793
        void glDrawTransformFeedbackStreamInstanced(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x1EBD | Ordinal: 7870
        void glEnable(unsigned int);

    // RVA: 0x1EE4 | Ordinal: 7909
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EF7 | Ordinal: 7928
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F1A | Ordinal: 7963
        void glEndConditionalRender(void);

    // RVA: 0x1F41 | Ordinal: 8002
        void glEndQuery(unsigned int);

    // RVA: 0x1F4D | Ordinal: 8014
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F60 | Ordinal: 8033
        void glEndTransformFeedback(void);

    // RVA: 0x204E | Ordinal: 8271
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x2069 | Ordinal: 8298
        void glFinish(void);

    // RVA: 0x2084 | Ordinal: 8325
        void glFlush(void);

    // RVA: 0x2097 | Ordinal: 8344
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x2139 | Ordinal: 8506
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2181 | Ordinal: 8578
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x214B | Ordinal: 8524
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x215E | Ordinal: 8543
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2170 | Ordinal: 8561
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2194 | Ordinal: 8597
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21AF | Ordinal: 8624
        void glFrontFace(unsigned int);

    // RVA: 0x21D6 | Ordinal: 8663
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21E9 | Ordinal: 8682
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x2205 | Ordinal: 8710
        void glGenProgramPipelines(int, unsigned int *);

    // RVA: 0x221B | Ordinal: 8732
        void glGenQueries(int, unsigned int *);

    // RVA: 0x222E | Ordinal: 8751
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x223D | Ordinal: 8766
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x2257 | Ordinal: 8792
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2264 | Ordinal: 8805
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x2277 | Ordinal: 8824
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x228A | Ordinal: 8843
        void glGenerateMipmap(unsigned int);

    // RVA: 0x2294 | Ordinal: 8853
        void glGetActiveAtomicCounterBufferiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22A9 | Ordinal: 8874
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22B5 | Ordinal: 8886
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22C1 | Ordinal: 8898
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22CD | Ordinal: 8910
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22E2 | Ordinal: 8931
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22F4 | Ordinal: 8949
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2306 | Ordinal: 8967
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2317 | Ordinal: 8984
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2329 | Ordinal: 9002
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x233E | Ordinal: 9023
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2353 | Ordinal: 9044
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2366 | Ordinal: 9063
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2381 | Ordinal: 9090
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x2392 | Ordinal: 9107
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23A8 | Ordinal: 9129
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23BE | Ordinal: 9151
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23D4 | Ordinal: 9173
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x2429 | Ordinal: 9258
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2469 | Ordinal: 9322
        void glGetDoublei_v(unsigned int, unsigned int, double *);

    // RVA: 0x2483 | Ordinal: 9348
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x249E | Ordinal: 9375
        void glGetError(void);

    // RVA: 0x24A8 | Ordinal: 9385
        void glGetFloati_v(unsigned int, unsigned int, float *);

    // RVA: 0x24C3 | Ordinal: 9412
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24D1 | Ordinal: 9426
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24E4 | Ordinal: 9445
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24F7 | Ordinal: 9464
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x253F | Ordinal: 9536
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2550 | Ordinal: 9553
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x2563 | Ordinal: 9572
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x257E | Ordinal: 9599
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x258D | Ordinal: 9614
        void glGetInternalformativ(unsigned int, unsigned int, unsigned int, int, int *);

    // RVA: 0x2642 | Ordinal: 9795
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x26A7 | Ordinal: 9896
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26C1 | Ordinal: 9922
        void glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *);

    // RVA: 0x26D6 | Ordinal: 9943
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26E8 | Ordinal: 9961
        void glGetProgramPipelineInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26F3 | Ordinal: 9972
        void glGetProgramPipelineiv(unsigned int, unsigned int, int *);

    // RVA: 0x2721 | Ordinal: 10018
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2736 | Ordinal: 10039
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2742 | Ordinal: 10051
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2750 | Ordinal: 10065
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2765 | Ordinal: 10086
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2773 | Ordinal: 10100
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x2789 | Ordinal: 10122
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x279F | Ordinal: 10144
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27B2 | Ordinal: 10163
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27C1 | Ordinal: 10178
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27D0 | Ordinal: 10193
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27DF | Ordinal: 10208
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27EE | Ordinal: 10223
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2812 | Ordinal: 10259
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x281D | Ordinal: 10270
        void glGetShaderPrecisionFormat(unsigned int, unsigned int, int *, int *);

    // RVA: 0x2832 | Ordinal: 10291
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x2847 | Ordinal: 10312
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2862 | Ordinal: 10339
        void glGetString(unsigned int);

    // RVA: 0x2875 | Ordinal: 10358
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2881 | Ordinal: 10370
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x288D | Ordinal: 10382
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x289E | Ordinal: 10399
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x290D | Ordinal: 10510
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x2928 | Ordinal: 10537
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2943 | Ordinal: 10564
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2956 | Ordinal: 10583
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2969 | Ordinal: 10602
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2984 | Ordinal: 10629
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x299F | Ordinal: 10656
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29C2 | Ordinal: 10691
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29DA | Ordinal: 10715
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29EC | Ordinal: 10733
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x2A01 | Ordinal: 10754
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A0D | Ordinal: 10766
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A19 | Ordinal: 10778
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A2E | Ordinal: 10799
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A43 | Ordinal: 10820
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A56 | Ordinal: 10839
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A6F | Ordinal: 10864
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A82 | Ordinal: 10883
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A8C | Ordinal: 10893
        void glGetVertexAttribLdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AA1 | Ordinal: 10914
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AB5 | Ordinal: 10934
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2ACA | Ordinal: 10955
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2ADF | Ordinal: 10976
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B15 | Ordinal: 11030
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2BE6 | Ordinal: 11239
        void glIndexub(unsigned char);

    // RVA: 0x2BFD | Ordinal: 11262
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C5D | Ordinal: 11358
        void glIsBuffer(unsigned int);

    // RVA: 0x2C78 | Ordinal: 11385
        void glIsEnabled(unsigned int);

    // RVA: 0x2C8B | Ordinal: 11404
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2C9E | Ordinal: 11423
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CC4 | Ordinal: 11461
        void glIsProgram(unsigned int);

    // RVA: 0x2CCF | Ordinal: 11472
        void glIsProgramPipeline(unsigned int);

    // RVA: 0x2CE5 | Ordinal: 11494
        void glIsQuery(unsigned int);

    // RVA: 0x2CF8 | Ordinal: 11513
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D07 | Ordinal: 11528
        void glIsSampler(unsigned int);

    // RVA: 0x2D1C | Ordinal: 11549
        void glIsShader(unsigned int);

    // RVA: 0x2D2D | Ordinal: 11566
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D47 | Ordinal: 11592
        void glIsTexture(unsigned int);

    // RVA: 0x2D54 | Ordinal: 11605
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D67 | Ordinal: 11624
        void glIsVertexArray(unsigned int);

    // RVA: 0x2E1B | Ordinal: 11804
        void glLineWidth(float);

    // RVA: 0x2E30 | Ordinal: 11825
        void glLinkProgram(unsigned int);

    // RVA: 0x2EBB | Ordinal: 11964
        void glLogicOp(unsigned int);

    // RVA: 0x2F15 | Ordinal: 12054
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F28 | Ordinal: 12073
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2FCE | Ordinal: 12239
        void glMemoryBarrier(unsigned int);

    // RVA: 0x2FDE | Ordinal: 12255
        void glMinSampleShading(float);

    // RVA: 0x3041 | Ordinal: 12354
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x305D | Ordinal: 12382
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x306D | Ordinal: 12398
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3241 | Ordinal: 12866
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x324D | Ordinal: 12878
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3259 | Ordinal: 12890
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3265 | Ordinal: 12902
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3271 | Ordinal: 12914
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x327D | Ordinal: 12926
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3289 | Ordinal: 12938
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3295 | Ordinal: 12950
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3374 | Ordinal: 13173
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x3380 | Ordinal: 13185
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x33C6 | Ordinal: 13255
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33D3 | Ordinal: 13268
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33E0 | Ordinal: 13281
        void glPauseTransformFeedback(void);

    // RVA: 0x342D | Ordinal: 13358
        void glPixelStoref(unsigned int, float);

    // RVA: 0x3448 | Ordinal: 13385
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3491 | Ordinal: 13458
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34A7 | Ordinal: 13480
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34BD | Ordinal: 13502
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34D3 | Ordinal: 13524
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34ED | Ordinal: 13550
        void glPointSize(float);

    // RVA: 0x3507 | Ordinal: 13576
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3521 | Ordinal: 13602
        void glPolygonOffset(float, float);

    // RVA: 0x358C | Ordinal: 13709
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x35A7 | Ordinal: 13736
        void glProgramBinary(unsigned int, unsigned int, void const *, int);

    // RVA: 0x35B2 | Ordinal: 13747
        void glProgramParameteri(unsigned int, unsigned int, int);

    // RVA: 0x35BC | Ordinal: 13757
        void glProgramUniform1d(unsigned int, int, double);

    // RVA: 0x35C6 | Ordinal: 13767
        void glProgramUniform1dv(unsigned int, int, int, double const *);

    // RVA: 0x35D1 | Ordinal: 13778
        void glProgramUniform1f(unsigned int, int, float);

    // RVA: 0x35DC | Ordinal: 13789
        void glProgramUniform1fv(unsigned int, int, int, float const *);

    // RVA: 0x35E7 | Ordinal: 13800
        void glProgramUniform1i(unsigned int, int, int);

    // RVA: 0x35F2 | Ordinal: 13811
        void glProgramUniform1iv(unsigned int, int, int, int const *);

    // RVA: 0x35FD | Ordinal: 13822
        void glProgramUniform1ui(unsigned int, int, unsigned int);

    // RVA: 0x3608 | Ordinal: 13833
        void glProgramUniform1uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3612 | Ordinal: 13843
        void glProgramUniform2d(unsigned int, int, double, double);

    // RVA: 0x361C | Ordinal: 13853
        void glProgramUniform2dv(unsigned int, int, int, double const *);

    // RVA: 0x3627 | Ordinal: 13864
        void glProgramUniform2f(unsigned int, int, float, float);

    // RVA: 0x3632 | Ordinal: 13875
        void glProgramUniform2fv(unsigned int, int, int, float const *);

    // RVA: 0x363D | Ordinal: 13886
        void glProgramUniform2i(unsigned int, int, int, int);

    // RVA: 0x3648 | Ordinal: 13897
        void glProgramUniform2iv(unsigned int, int, int, int const *);

    // RVA: 0x3653 | Ordinal: 13908
        void glProgramUniform2ui(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x365E | Ordinal: 13919
        void glProgramUniform2uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3668 | Ordinal: 13929
        void glProgramUniform3d(unsigned int, int, double, double, double);

    // RVA: 0x3672 | Ordinal: 13939
        void glProgramUniform3dv(unsigned int, int, int, double const *);

    // RVA: 0x367D | Ordinal: 13950
        void glProgramUniform3f(unsigned int, int, float, float, float);

    // RVA: 0x3688 | Ordinal: 13961
        void glProgramUniform3fv(unsigned int, int, int, float const *);

    // RVA: 0x3693 | Ordinal: 13972
        void glProgramUniform3i(unsigned int, int, int, int, int);

    // RVA: 0x369E | Ordinal: 13983
        void glProgramUniform3iv(unsigned int, int, int, int const *);

    // RVA: 0x36A9 | Ordinal: 13994
        void glProgramUniform3ui(unsigned int, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x36B4 | Ordinal: 14005
        void glProgramUniform3uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x36BE | Ordinal: 14015
        void glProgramUniform4d(unsigned int, int, double, double, double, double);

    // RVA: 0x36C8 | Ordinal: 14025
        void glProgramUniform4dv(unsigned int, int, int, double const *);

    // RVA: 0x36D3 | Ordinal: 14036
        void glProgramUniform4f(unsigned int, int, float, float, float, float);

    // RVA: 0x36DE | Ordinal: 14047
        void glProgramUniform4fv(unsigned int, int, int, float const *);

    // RVA: 0x36E9 | Ordinal: 14058
        void glProgramUniform4i(unsigned int, int, int, int, int, int);

    // RVA: 0x36F4 | Ordinal: 14069
        void glProgramUniform4iv(unsigned int, int, int, int const *);

    // RVA: 0x36FF | Ordinal: 14080
        void glProgramUniform4ui(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x370A | Ordinal: 14091
        void glProgramUniform4uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3714 | Ordinal: 14101
        void glProgramUniformMatrix2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x371F | Ordinal: 14112
        void glProgramUniformMatrix2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3729 | Ordinal: 14122
        void glProgramUniformMatrix2x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3734 | Ordinal: 14133
        void glProgramUniformMatrix2x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x373E | Ordinal: 14143
        void glProgramUniformMatrix2x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3749 | Ordinal: 14154
        void glProgramUniformMatrix2x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3753 | Ordinal: 14164
        void glProgramUniformMatrix3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x375E | Ordinal: 14175
        void glProgramUniformMatrix3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3768 | Ordinal: 14185
        void glProgramUniformMatrix3x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3773 | Ordinal: 14196
        void glProgramUniformMatrix3x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x377D | Ordinal: 14206
        void glProgramUniformMatrix3x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3788 | Ordinal: 14217
        void glProgramUniformMatrix3x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3792 | Ordinal: 14227
        void glProgramUniformMatrix4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x379D | Ordinal: 14238
        void glProgramUniformMatrix4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37A7 | Ordinal: 14248
        void glProgramUniformMatrix4x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37B2 | Ordinal: 14259
        void glProgramUniformMatrix4x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37BC | Ordinal: 14269
        void glProgramUniformMatrix4x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37C7 | Ordinal: 14280
        void glProgramUniformMatrix4x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37D7 | Ordinal: 14296
        void glProvokingVertex(unsigned int);

    // RVA: 0x382D | Ordinal: 14382
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x39E0 | Ordinal: 14817
        void glReadBuffer(unsigned int);

    // RVA: 0x39FB | Ordinal: 14844
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A91 | Ordinal: 14994
        void glReleaseShaderCompiler(void);

    // RVA: 0x3AB5 | Ordinal: 15030
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3AC8 | Ordinal: 15049
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AF3 | Ordinal: 15092
        void glResumeTransformFeedback(void);

    // RVA: 0x3B2D | Ordinal: 15150
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B3E | Ordinal: 15167
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B4D | Ordinal: 15182
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B5C | Ordinal: 15197
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B6B | Ordinal: 15212
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B7A | Ordinal: 15227
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B89 | Ordinal: 15242
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B98 | Ordinal: 15257
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BD5 | Ordinal: 15318
        void glScissor(int, int, int, int);

    // RVA: 0x3BDF | Ordinal: 15328
        void glScissorArrayv(unsigned int, int, int const *);

    // RVA: 0x3BE9 | Ordinal: 15338
        void glScissorIndexed(unsigned int, int, int, int, int);

    // RVA: 0x3BF3 | Ordinal: 15348
        void glScissorIndexedv(unsigned int, int const *);

    // RVA: 0x3CD1 | Ordinal: 15570
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CDD | Ordinal: 15582
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3D24 | Ordinal: 15653
        void glShaderBinary(int, unsigned int const *, unsigned int, void const *, int);

    // RVA: 0x3D39 | Ordinal: 15674
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D5A | Ordinal: 15707
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D6F | Ordinal: 15728
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D8A | Ordinal: 15755
        void glStencilMask(unsigned int);

    // RVA: 0x3D9F | Ordinal: 15776
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DBA | Ordinal: 15803
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DCF | Ordinal: 15824
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DE1 | Ordinal: 15842
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4016 | Ordinal: 16407
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x4022 | Ordinal: 16419
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x402E | Ordinal: 16431
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x403A | Ordinal: 16443
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4046 | Ordinal: 16455
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x4052 | Ordinal: 16467
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x405E | Ordinal: 16479
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x406A | Ordinal: 16491
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x413C | Ordinal: 16701
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4157 | Ordinal: 16728
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4167 | Ordinal: 16744
        void glTexImage2DMultisample(unsigned int, int, int, int, int, unsigned char);

    // RVA: 0x4180 | Ordinal: 16769
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4190 | Ordinal: 16785
        void glTexImage3DMultisample(unsigned int, int, int, int, int, int, unsigned char);

    // RVA: 0x41A3 | Ordinal: 16804
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41B6 | Ordinal: 16823
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41D1 | Ordinal: 16850
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41EC | Ordinal: 16877
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4207 | Ordinal: 16904
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4222 | Ordinal: 16931
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x422A | Ordinal: 16939
        void glTexStorage1D(unsigned int, int, unsigned int, int);

    // RVA: 0x4233 | Ordinal: 16948
        void glTexStorage2D(unsigned int, int, unsigned int, int, int);

    // RVA: 0x4243 | Ordinal: 16964
        void glTexStorage3D(unsigned int, int, unsigned int, int, int, int);

    // RVA: 0x4263 | Ordinal: 16996
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x427D | Ordinal: 17022
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4296 | Ordinal: 17047
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42D5 | Ordinal: 17110
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x4303 | Ordinal: 17156
        void glUniform1d(int, double);

    // RVA: 0x430F | Ordinal: 17168
        void glUniform1dv(int, int, double const *);

    // RVA: 0x4324 | Ordinal: 17189
        void glUniform1f(int, float);

    // RVA: 0x4339 | Ordinal: 17210
        void glUniform1fv(int, int, float const *);

    // RVA: 0x434E | Ordinal: 17231
        void glUniform1i(int, int);

    // RVA: 0x4363 | Ordinal: 17252
        void glUniform1iv(int, int, int const *);

    // RVA: 0x4376 | Ordinal: 17271
        void glUniform1ui(int, unsigned int);

    // RVA: 0x4389 | Ordinal: 17290
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x4395 | Ordinal: 17302
        void glUniform2d(int, double, double);

    // RVA: 0x43A1 | Ordinal: 17314
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43B6 | Ordinal: 17335
        void glUniform2f(int, float, float);

    // RVA: 0x43CB | Ordinal: 17356
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43E0 | Ordinal: 17377
        void glUniform2i(int, int, int);

    // RVA: 0x43F5 | Ordinal: 17398
        void glUniform2iv(int, int, int const *);

    // RVA: 0x4408 | Ordinal: 17417
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x441B | Ordinal: 17436
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x4427 | Ordinal: 17448
        void glUniform3d(int, double, double, double);

    // RVA: 0x4433 | Ordinal: 17460
        void glUniform3dv(int, int, double const *);

    // RVA: 0x4448 | Ordinal: 17481
        void glUniform3f(int, float, float, float);

    // RVA: 0x445D | Ordinal: 17502
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4472 | Ordinal: 17523
        void glUniform3i(int, int, int, int);

    // RVA: 0x4487 | Ordinal: 17544
        void glUniform3iv(int, int, int const *);

    // RVA: 0x449A | Ordinal: 17563
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44AD | Ordinal: 17582
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44B9 | Ordinal: 17594
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44C5 | Ordinal: 17606
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44DA | Ordinal: 17627
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44EF | Ordinal: 17648
        void glUniform4fv(int, int, float const *);

    // RVA: 0x4504 | Ordinal: 17669
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x4519 | Ordinal: 17690
        void glUniform4iv(int, int, int const *);

    // RVA: 0x452C | Ordinal: 17709
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x453F | Ordinal: 17728
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4551 | Ordinal: 17746
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x455D | Ordinal: 17758
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x4572 | Ordinal: 17779
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x457E | Ordinal: 17791
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4592 | Ordinal: 17811
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x459E | Ordinal: 17823
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45B2 | Ordinal: 17843
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45BE | Ordinal: 17855
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45D3 | Ordinal: 17876
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45DF | Ordinal: 17888
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45F3 | Ordinal: 17908
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x45FF | Ordinal: 17920
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x4613 | Ordinal: 17940
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x461F | Ordinal: 17952
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x4634 | Ordinal: 17973
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x4640 | Ordinal: 17985
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x4654 | Ordinal: 18005
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4660 | Ordinal: 18017
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4674 | Ordinal: 18037
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x4680 | Ordinal: 18049
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x4696 | Ordinal: 18071
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46AD | Ordinal: 18094
        void glUseProgram(unsigned int);

    // RVA: 0x46B8 | Ordinal: 18105
        void glUseProgramStages(unsigned int, unsigned int, unsigned int);

    // RVA: 0x46CD | Ordinal: 18126
        void glValidateProgram(unsigned int);

    // RVA: 0x46D8 | Ordinal: 18137
        void glValidateProgramPipeline(unsigned int);

    // RVA: 0x4A72 | Ordinal: 19059
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4B73 | Ordinal: 19316
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4B7D | Ordinal: 19326
        void glVertexAttribL1d(unsigned int, double);

    // RVA: 0x4B87 | Ordinal: 19336
        void glVertexAttribL1dv(unsigned int, double const *);

    // RVA: 0x4B91 | Ordinal: 19346
        void glVertexAttribL2d(unsigned int, double, double);

    // RVA: 0x4B9B | Ordinal: 19356
        void glVertexAttribL2dv(unsigned int, double const *);

    // RVA: 0x4BA5 | Ordinal: 19366
        void glVertexAttribL3d(unsigned int, double, double, double);

    // RVA: 0x4BAF | Ordinal: 19376
        void glVertexAttribL3dv(unsigned int, double const *);

    // RVA: 0x4BB9 | Ordinal: 19386
        void glVertexAttribL4d(unsigned int, double, double, double, double);

    // RVA: 0x4BC3 | Ordinal: 19396
        void glVertexAttribL4dv(unsigned int, double const *);

    // RVA: 0x4BD3 | Ordinal: 19412
        void glVertexAttribLPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BE1 | Ordinal: 19426
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BEF | Ordinal: 19440
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4BFD | Ordinal: 19454
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C0B | Ordinal: 19468
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C19 | Ordinal: 19482
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C27 | Ordinal: 19496
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C35 | Ordinal: 19510
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C43 | Ordinal: 19524
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C58 | Ordinal: 19545
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C6D | Ordinal: 19566
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C79 | Ordinal: 19578
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C85 | Ordinal: 19590
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C91 | Ordinal: 19602
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C9D | Ordinal: 19614
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CA9 | Ordinal: 19626
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CD2 | Ordinal: 19667
        void glViewport(int, int, int, int);

    // RVA: 0x4CDC | Ordinal: 19677
        void glViewportArrayv(unsigned int, int, float const *);

    // RVA: 0x4CE6 | Ordinal: 19687
        void glViewportIndexedf(unsigned int, float, float, float, float);

    // RVA: 0x4CF0 | Ordinal: 19697
        void glViewportIndexedfv(unsigned int, float const *);

    // RVA: 0x4D01 | Ordinal: 19714
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4F2D | Ordinal: 20270
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FEF | Ordinal: 20464
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6113 | Ordinal: 24852
        void versionProfile(void);

    // RVA: 0x490 | Ordinal: 1169
        void _QOpenGLFunctions_4_2_Core(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_2_CORE_HPP
