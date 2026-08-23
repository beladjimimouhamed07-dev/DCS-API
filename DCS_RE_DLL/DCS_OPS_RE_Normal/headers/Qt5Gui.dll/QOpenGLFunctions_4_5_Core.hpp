#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_5_Core
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_5_Core
{
public:

    // RVA: 0x1C8 | Ordinal: 457
        void QOpenGLFunctions_4_5_Core(void);

    // RVA: 0x11D3 | Ordinal: 4564
        void glActiveShaderProgram(unsigned int, unsigned int);

    // RVA: 0x11EB | Ordinal: 4588
        void glActiveTexture(unsigned int);

    // RVA: 0x1231 | Ordinal: 4658
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x1255 | Ordinal: 4694
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x126B | Ordinal: 4716
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x1277 | Ordinal: 4728
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x128A | Ordinal: 4747
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x129F | Ordinal: 4768
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12B5 | Ordinal: 4790
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12C8 | Ordinal: 4809
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12DB | Ordinal: 4828
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12DF | Ordinal: 4832
        void glBindBuffersBase(unsigned int, unsigned int, int, unsigned int const *);

    // RVA: 0x12E3 | Ordinal: 4836
        void glBindBuffersRange(unsigned int, unsigned int, int, unsigned int const *, __int64 const *, __int64 const *);

    // RVA: 0x12F5 | Ordinal: 4854
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x1303 | Ordinal: 4868
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x1316 | Ordinal: 4887
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x131F | Ordinal: 4896
        void glBindImageTexture(unsigned int, unsigned int, int, unsigned char, int, unsigned int, unsigned int);

    // RVA: 0x1323 | Ordinal: 4900
        void glBindImageTextures(unsigned int, int, unsigned int const *);

    // RVA: 0x132E | Ordinal: 4911
        void glBindProgramPipeline(unsigned int);

    // RVA: 0x1341 | Ordinal: 4930
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x1350 | Ordinal: 4945
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1354 | Ordinal: 4949
        void glBindSamplers(unsigned int, int, unsigned int const *);

    // RVA: 0x136E | Ordinal: 4975
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1370 | Ordinal: 4977
        void glBindTextureUnit(unsigned int, unsigned int);

    // RVA: 0x1374 | Ordinal: 4981
        void glBindTextures(unsigned int, int, unsigned int const *);

    // RVA: 0x1381 | Ordinal: 4994
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1394 | Ordinal: 5013
        void glBindVertexArray(unsigned int);

    // RVA: 0x139B | Ordinal: 5020
        void glBindVertexBuffer(unsigned int, unsigned int, __int64, int);

    // RVA: 0x139F | Ordinal: 5024
        void glBindVertexBuffers(unsigned int, int, unsigned int const *, __int64 const *, int const *);

    // RVA: 0x13CA | Ordinal: 5067
        void glBlendColor(float, float, float, float);

    // RVA: 0x13E3 | Ordinal: 5092
        void glBlendEquation(unsigned int);

    // RVA: 0x13F8 | Ordinal: 5113
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x1405 | Ordinal: 5126
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1412 | Ordinal: 5139
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x142D | Ordinal: 5166
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1444 | Ordinal: 5189
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1451 | Ordinal: 5202
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x145E | Ordinal: 5215
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1471 | Ordinal: 5234
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1473 | Ordinal: 5236
        void glBlitNamedFramebuffer(unsigned int, unsigned int, int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1489 | Ordinal: 5258
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x148D | Ordinal: 5262
        void glBufferStorage(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x14A3 | Ordinal: 5284
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14D8 | Ordinal: 5337
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14DA | Ordinal: 5339
        void glCheckNamedFramebufferStatus(unsigned int, unsigned int);

    // RVA: 0x14EC | Ordinal: 5357
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x1507 | Ordinal: 5384
        void glClear(unsigned int);

    // RVA: 0x151E | Ordinal: 5407
        void glClearBufferData(unsigned int, unsigned int, unsigned int, unsigned int, void const *);

    // RVA: 0x1524 | Ordinal: 5413
        void glClearBufferSubData(unsigned int, unsigned int, __int64, __int64, unsigned int, unsigned int, void const *);

    // RVA: 0x1537 | Ordinal: 5432
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x154A | Ordinal: 5451
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x155D | Ordinal: 5470
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x1570 | Ordinal: 5489
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x158B | Ordinal: 5516
        void glClearColor(float, float, float, float);

    // RVA: 0x15A5 | Ordinal: 5542
        void glClearDepth(double);

    // RVA: 0x15B0 | Ordinal: 5553
        void glClearDepthf(float);

    // RVA: 0x15C3 | Ordinal: 5572
        void glClearNamedBufferData(unsigned int, unsigned int, unsigned int, unsigned int, void const *);

    // RVA: 0x15C5 | Ordinal: 5574
        void glClearNamedBufferSubData(unsigned int, unsigned int, __int64, int, unsigned int, unsigned int, void const *);

    // RVA: 0x15C7 | Ordinal: 5576
        void glClearNamedFramebufferfi(unsigned int, unsigned int, float, int);

    // RVA: 0x15C9 | Ordinal: 5578
        void glClearNamedFramebufferfv(unsigned int, unsigned int, int, float const *);

    // RVA: 0x15CB | Ordinal: 5580
        void glClearNamedFramebufferiv(unsigned int, unsigned int, int, int const *);

    // RVA: 0x15CD | Ordinal: 5582
        void glClearNamedFramebufferuiv(unsigned int, unsigned int, int, unsigned int const *);

    // RVA: 0x15E8 | Ordinal: 5609
        void glClearStencil(int);

    // RVA: 0x15EC | Ordinal: 5613
        void glClearTexImage(unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x15F0 | Ordinal: 5617
        void glClearTexSubImage(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x160F | Ordinal: 5648
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x1611 | Ordinal: 5650
        void glClipControl(unsigned int, unsigned int);

    // RVA: 0x185D | Ordinal: 6238
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1870 | Ordinal: 6257
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1912 | Ordinal: 6419
        void glCompileShader(unsigned int);

    // RVA: 0x1929 | Ordinal: 6442
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1941 | Ordinal: 6466
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1959 | Ordinal: 6490
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x1970 | Ordinal: 6513
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1988 | Ordinal: 6537
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19A0 | Ordinal: 6561
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19A2 | Ordinal: 6563
        void glCompressedTextureSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19A4 | Ordinal: 6565
        void glCompressedTextureSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19A6 | Ordinal: 6567
        void glCompressedTextureSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1A12 | Ordinal: 6675
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A55 | Ordinal: 6742
        void glCopyImageSubData(unsigned int, unsigned int, int, int, int, int, unsigned int, unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1A57 | Ordinal: 6744
        void glCopyNamedBufferSubData(unsigned int, unsigned int, __int64, __int64, int);

    // RVA: 0x1A81 | Ordinal: 6786
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A9B | Ordinal: 6812
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AB4 | Ordinal: 6837
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1ACE | Ordinal: 6863
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AE7 | Ordinal: 6888
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AE9 | Ordinal: 6890
        void glCopyTextureSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AEB | Ordinal: 6892
        void glCopyTextureSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AED | Ordinal: 6894
        void glCopyTextureSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AEF | Ordinal: 6896
        void glCreateBuffers(int, unsigned int *);

    // RVA: 0x1AF1 | Ordinal: 6898
        void glCreateFramebuffers(int, unsigned int *);

    // RVA: 0x1B06 | Ordinal: 6919
        void glCreateProgram(void);

    // RVA: 0x1B08 | Ordinal: 6921
        void glCreateProgramPipelines(int, unsigned int *);

    // RVA: 0x1B0A | Ordinal: 6923
        void glCreateQueries(unsigned int, int, unsigned int *);

    // RVA: 0x1B0C | Ordinal: 6925
        void glCreateRenderbuffers(int, unsigned int *);

    // RVA: 0x1B0E | Ordinal: 6927
        void glCreateSamplers(int, unsigned int *);

    // RVA: 0x1B23 | Ordinal: 6948
        void glCreateShader(unsigned int);

    // RVA: 0x1B2E | Ordinal: 6959
        void glCreateShaderProgramv(unsigned int, int, char const *const *);

    // RVA: 0x1B30 | Ordinal: 6961
        void glCreateTextures(unsigned int, int, unsigned int *);

    // RVA: 0x1B32 | Ordinal: 6963
        void glCreateTransformFeedbacks(int, unsigned int *);

    // RVA: 0x1B34 | Ordinal: 6965
        void glCreateVertexArrays(int, unsigned int *);

    // RVA: 0x1B4F | Ordinal: 6992
        void glCullFace(unsigned int);

    // RVA: 0x1B54 | Ordinal: 6997
        void glDebugMessageCallback(void (__cdecl *)(unsigned int, unsigned int, unsigned int, unsigned int, int, char const *, void const *), void const *);

    // RVA: 0x1B59 | Ordinal: 7002
        void glDebugMessageControl(unsigned int, unsigned int, unsigned int, int, unsigned int const *, unsigned char);

    // RVA: 0x1B5E | Ordinal: 7007
        void glDebugMessageInsert(unsigned int, unsigned int, unsigned int, unsigned int, int, char const *);

    // RVA: 0x1B74 | Ordinal: 7029
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B87 | Ordinal: 7048
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1BAD | Ordinal: 7086
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BB8 | Ordinal: 7097
        void glDeleteProgramPipelines(int, unsigned int const *);

    // RVA: 0x1BCE | Ordinal: 7119
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BE1 | Ordinal: 7138
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BF0 | Ordinal: 7153
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1C05 | Ordinal: 7174
        void glDeleteShader(unsigned int);

    // RVA: 0x1C16 | Ordinal: 7191
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C30 | Ordinal: 7217
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C3D | Ordinal: 7230
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C50 | Ordinal: 7249
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C6B | Ordinal: 7276
        void glDepthFunc(unsigned int);

    // RVA: 0x1C86 | Ordinal: 7303
        void glDepthMask(unsigned char);

    // RVA: 0x1CA0 | Ordinal: 7329
        void glDepthRange(double, double);

    // RVA: 0x1CAA | Ordinal: 7339
        void glDepthRangeArrayv(unsigned int, int, double const *);

    // RVA: 0x1CB4 | Ordinal: 7349
        void glDepthRangeIndexed(unsigned int, double, double);

    // RVA: 0x1CBF | Ordinal: 7360
        void glDepthRangef(float, float);

    // RVA: 0x1CD4 | Ordinal: 7381
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CEF | Ordinal: 7408
        void glDisable(unsigned int);

    // RVA: 0x1D01 | Ordinal: 7426
        void glDisableVertexArrayAttrib(unsigned int, unsigned int);

    // RVA: 0x1D16 | Ordinal: 7447
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D29 | Ordinal: 7466
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D31 | Ordinal: 7474
        void glDispatchCompute(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1D38 | Ordinal: 7481
        void glDispatchComputeIndirect(__int64);

    // RVA: 0x1D52 | Ordinal: 7507
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D5F | Ordinal: 7520
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D71 | Ordinal: 7538
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D79 | Ordinal: 7546
        void glDrawArraysInstancedBaseInstance(unsigned int, int, int, int, unsigned int);

    // RVA: 0x1D93 | Ordinal: 7572
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DA8 | Ordinal: 7593
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DC2 | Ordinal: 7619
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DD3 | Ordinal: 7636
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DE0 | Ordinal: 7649
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DF2 | Ordinal: 7667
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DFA | Ordinal: 7675
        void glDrawElementsInstancedBaseInstance(unsigned int, int, unsigned int, void const *, int, unsigned int);

    // RVA: 0x1E0B | Ordinal: 7692
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E13 | Ordinal: 7700
        void glDrawElementsInstancedBaseVertexBaseInstance(unsigned int, int, unsigned int, void const *, int, int, unsigned int);

    // RVA: 0x1E3D | Ordinal: 7742
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E4E | Ordinal: 7759
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E5A | Ordinal: 7771
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E62 | Ordinal: 7779
        void glDrawTransformFeedbackInstanced(unsigned int, unsigned int, int);

    // RVA: 0x1E6E | Ordinal: 7791
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1E76 | Ordinal: 7799
        void glDrawTransformFeedbackStreamInstanced(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x1EC3 | Ordinal: 7876
        void glEnable(unsigned int);

    // RVA: 0x1ED5 | Ordinal: 7894
        void glEnableVertexArrayAttrib(unsigned int, unsigned int);

    // RVA: 0x1EEA | Ordinal: 7915
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EFD | Ordinal: 7934
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F20 | Ordinal: 7969
        void glEndConditionalRender(void);

    // RVA: 0x1F47 | Ordinal: 8008
        void glEndQuery(unsigned int);

    // RVA: 0x1F53 | Ordinal: 8020
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F66 | Ordinal: 8039
        void glEndTransformFeedback(void);

    // RVA: 0x2054 | Ordinal: 8277
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x206F | Ordinal: 8304
        void glFinish(void);

    // RVA: 0x208A | Ordinal: 8331
        void glFlush(void);

    // RVA: 0x209D | Ordinal: 8350
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x209F | Ordinal: 8352
        void glFlushMappedNamedBufferRange(unsigned int, __int64, int);

    // RVA: 0x212C | Ordinal: 8493
        void glFramebufferParameteri(unsigned int, unsigned int, int);

    // RVA: 0x213F | Ordinal: 8512
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2187 | Ordinal: 8584
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2151 | Ordinal: 8530
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2164 | Ordinal: 8549
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2176 | Ordinal: 8567
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x219A | Ordinal: 8603
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21B5 | Ordinal: 8630
        void glFrontFace(unsigned int);

    // RVA: 0x21DC | Ordinal: 8669
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21EF | Ordinal: 8688
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x220B | Ordinal: 8716
        void glGenProgramPipelines(int, unsigned int *);

    // RVA: 0x2221 | Ordinal: 8738
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2234 | Ordinal: 8757
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x2243 | Ordinal: 8772
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x225D | Ordinal: 8798
        void glGenTextures(int, unsigned int *);

    // RVA: 0x226A | Ordinal: 8811
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x227D | Ordinal: 8830
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x2290 | Ordinal: 8849
        void glGenerateMipmap(unsigned int);

    // RVA: 0x2292 | Ordinal: 8851
        void glGenerateTextureMipmap(unsigned int);

    // RVA: 0x229A | Ordinal: 8859
        void glGetActiveAtomicCounterBufferiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22AF | Ordinal: 8880
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22BB | Ordinal: 8892
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22C7 | Ordinal: 8904
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22D3 | Ordinal: 8916
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22E8 | Ordinal: 8937
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22FA | Ordinal: 8955
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x230C | Ordinal: 8973
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x231D | Ordinal: 8990
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x232F | Ordinal: 9008
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x2344 | Ordinal: 9029
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2359 | Ordinal: 9050
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x236C | Ordinal: 9069
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2387 | Ordinal: 9096
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x2398 | Ordinal: 9113
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23AE | Ordinal: 9135
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23C4 | Ordinal: 9157
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23DA | Ordinal: 9179
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x242F | Ordinal: 9264
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2431 | Ordinal: 9266
        void glGetCompressedTextureImage(unsigned int, int, int, void *);

    // RVA: 0x2433 | Ordinal: 9268
        void glGetCompressedTextureSubImage(unsigned int, int, int, int, int, int, int, int, int, void *);

    // RVA: 0x2465 | Ordinal: 9318
        void glGetDebugMessageLog(unsigned int, int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, int *, char *);

    // RVA: 0x246F | Ordinal: 9328
        void glGetDoublei_v(unsigned int, unsigned int, double *);

    // RVA: 0x2489 | Ordinal: 9354
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x24A4 | Ordinal: 9381
        void glGetError(void);

    // RVA: 0x24AE | Ordinal: 9391
        void glGetFloati_v(unsigned int, unsigned int, float *);

    // RVA: 0x24C9 | Ordinal: 9418
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24D7 | Ordinal: 9432
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24EA | Ordinal: 9451
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24FD | Ordinal: 9470
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2504 | Ordinal: 9477
        void glGetFramebufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2507 | Ordinal: 9480
        void glGetGraphicsResetStatus(void);

    // RVA: 0x2545 | Ordinal: 9542
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2556 | Ordinal: 9559
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x2569 | Ordinal: 9578
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2584 | Ordinal: 9605
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x258A | Ordinal: 9611
        void glGetInternalformati64v(unsigned int, unsigned int, unsigned int, int, __int64 *);

    // RVA: 0x2593 | Ordinal: 9620
        void glGetInternalformativ(unsigned int, unsigned int, unsigned int, int, int *);

    // RVA: 0x2648 | Ordinal: 9801
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x264A | Ordinal: 9803
        void glGetNamedBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x264C | Ordinal: 9805
        void glGetNamedBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x264E | Ordinal: 9807
        void glGetNamedBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2650 | Ordinal: 9809
        void glGetNamedBufferSubData(unsigned int, __int64, int, void *);

    // RVA: 0x2652 | Ordinal: 9811
        void glGetNamedFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2654 | Ordinal: 9813
        void glGetNamedFramebufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2656 | Ordinal: 9815
        void glGetNamedRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x265B | Ordinal: 9820
        void glGetObjectLabel(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2660 | Ordinal: 9825
        void glGetObjectPtrLabel(void const *, int, int *, char *);

    // RVA: 0x26C7 | Ordinal: 9928
        void glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *);

    // RVA: 0x26DC | Ordinal: 9949
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26E3 | Ordinal: 9956
        void glGetProgramInterfaceiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x26EE | Ordinal: 9967
        void glGetProgramPipelineInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26F9 | Ordinal: 9978
        void glGetProgramPipelineiv(unsigned int, unsigned int, int *);

    // RVA: 0x2700 | Ordinal: 9985
        void glGetProgramResourceIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2707 | Ordinal: 9992
        void glGetProgramResourceLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x270D | Ordinal: 9998
        void glGetProgramResourceLocationIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2714 | Ordinal: 10005
        void glGetProgramResourceName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x271B | Ordinal: 10012
        void glGetProgramResourceiv(unsigned int, unsigned int, unsigned int, int, unsigned int const *, int, int *, int *);

    // RVA: 0x2727 | Ordinal: 10024
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x273C | Ordinal: 10045
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2748 | Ordinal: 10057
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2756 | Ordinal: 10071
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x276B | Ordinal: 10092
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2779 | Ordinal: 10106
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x278F | Ordinal: 10128
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27A5 | Ordinal: 10150
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27B8 | Ordinal: 10169
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27C7 | Ordinal: 10184
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27D6 | Ordinal: 10199
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27E5 | Ordinal: 10214
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27F4 | Ordinal: 10229
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2818 | Ordinal: 10265
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2823 | Ordinal: 10276
        void glGetShaderPrecisionFormat(unsigned int, unsigned int, int *, int *);

    // RVA: 0x2838 | Ordinal: 10297
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x284D | Ordinal: 10318
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2868 | Ordinal: 10345
        void glGetString(unsigned int);

    // RVA: 0x287B | Ordinal: 10364
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2887 | Ordinal: 10376
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2893 | Ordinal: 10388
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x28A4 | Ordinal: 10405
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x2913 | Ordinal: 10516
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x292E | Ordinal: 10543
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2949 | Ordinal: 10570
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x295C | Ordinal: 10589
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x296F | Ordinal: 10608
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x298A | Ordinal: 10635
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x29A5 | Ordinal: 10662
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29A7 | Ordinal: 10664
        void glGetTextureImage(unsigned int, int, unsigned int, unsigned int, int, void *);

    // RVA: 0x29A9 | Ordinal: 10666
        void glGetTextureLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x29AB | Ordinal: 10668
        void glGetTextureLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x29AD | Ordinal: 10670
        void glGetTextureParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x29AF | Ordinal: 10672
        void glGetTextureParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x29B1 | Ordinal: 10674
        void glGetTextureParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x29B3 | Ordinal: 10676
        void glGetTextureParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29B5 | Ordinal: 10678
        void glGetTextureSubImage(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, int, void *);

    // RVA: 0x29C8 | Ordinal: 10697
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29CA | Ordinal: 10699
        void glGetTransformFeedbacki64_v(unsigned int, unsigned int, unsigned int, __int64 *);

    // RVA: 0x29CC | Ordinal: 10701
        void glGetTransformFeedbacki_v(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x29CE | Ordinal: 10703
        void glGetTransformFeedbackiv(unsigned int, unsigned int, int *);

    // RVA: 0x29E0 | Ordinal: 10721
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29F2 | Ordinal: 10739
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x2A07 | Ordinal: 10760
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A13 | Ordinal: 10772
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A1F | Ordinal: 10784
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A34 | Ordinal: 10805
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A49 | Ordinal: 10826
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A5C | Ordinal: 10845
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A5E | Ordinal: 10847
        void glGetVertexArrayIndexed64iv(unsigned int, unsigned int, unsigned int, __int64 *);

    // RVA: 0x2A60 | Ordinal: 10849
        void glGetVertexArrayIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2A62 | Ordinal: 10851
        void glGetVertexArrayiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A75 | Ordinal: 10870
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A88 | Ordinal: 10889
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A92 | Ordinal: 10899
        void glGetVertexAttribLdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AA7 | Ordinal: 10920
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2ABB | Ordinal: 10940
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AD0 | Ordinal: 10961
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AE5 | Ordinal: 10982
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2AE8 | Ordinal: 10985
        void glGetnCompressedTexImage(unsigned int, int, int, void *);

    // RVA: 0x2AF5 | Ordinal: 10998
        void glGetnTexImage(unsigned int, int, unsigned int, unsigned int, int, void *);

    // RVA: 0x2AF7 | Ordinal: 11000
        void glGetnUniformdv(unsigned int, int, int, double *);

    // RVA: 0x2AFA | Ordinal: 11003
        void glGetnUniformfv(unsigned int, int, int, float *);

    // RVA: 0x2AFD | Ordinal: 11006
        void glGetnUniformiv(unsigned int, int, int, int *);

    // RVA: 0x2B00 | Ordinal: 11009
        void glGetnUniformuiv(unsigned int, int, int, unsigned int *);

    // RVA: 0x2B1B | Ordinal: 11036
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2C29 | Ordinal: 11306
        void glInvalidateBufferData(unsigned int);

    // RVA: 0x2C2F | Ordinal: 11312
        void glInvalidateBufferSubData(unsigned int, __int64, __int64);

    // RVA: 0x2C36 | Ordinal: 11319
        void glInvalidateFramebuffer(unsigned int, int, unsigned int const *);

    // RVA: 0x2C38 | Ordinal: 11321
        void glInvalidateNamedFramebufferData(unsigned int, int, unsigned int const *);

    // RVA: 0x2C3A | Ordinal: 11323
        void glInvalidateNamedFramebufferSubData(unsigned int, int, unsigned int const *, int, int, int, int);

    // RVA: 0x2C41 | Ordinal: 11330
        void glInvalidateSubFramebuffer(unsigned int, int, unsigned int const *, int, int, int, int);

    // RVA: 0x2C47 | Ordinal: 11336
        void glInvalidateTexImage(unsigned int, int);

    // RVA: 0x2C4D | Ordinal: 11342
        void glInvalidateTexSubImage(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x2C63 | Ordinal: 11364
        void glIsBuffer(unsigned int);

    // RVA: 0x2C7E | Ordinal: 11391
        void glIsEnabled(unsigned int);

    // RVA: 0x2C91 | Ordinal: 11410
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2CA4 | Ordinal: 11429
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CCA | Ordinal: 11467
        void glIsProgram(unsigned int);

    // RVA: 0x2CD5 | Ordinal: 11478
        void glIsProgramPipeline(unsigned int);

    // RVA: 0x2CEB | Ordinal: 11500
        void glIsQuery(unsigned int);

    // RVA: 0x2CFE | Ordinal: 11519
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D0D | Ordinal: 11534
        void glIsSampler(unsigned int);

    // RVA: 0x2D22 | Ordinal: 11555
        void glIsShader(unsigned int);

    // RVA: 0x2D33 | Ordinal: 11572
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D4D | Ordinal: 11598
        void glIsTexture(unsigned int);

    // RVA: 0x2D5A | Ordinal: 11611
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D6D | Ordinal: 11630
        void glIsVertexArray(unsigned int);

    // RVA: 0x2E21 | Ordinal: 11810
        void glLineWidth(float);

    // RVA: 0x2E36 | Ordinal: 11831
        void glLinkProgram(unsigned int);

    // RVA: 0x2EC1 | Ordinal: 11970
        void glLogicOp(unsigned int);

    // RVA: 0x2F1B | Ordinal: 12060
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F2E | Ordinal: 12079
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2F74 | Ordinal: 12149
        void glMapNamedBuffer(unsigned int, unsigned int);

    // RVA: 0x2F76 | Ordinal: 12151
        void glMapNamedBufferRange(unsigned int, __int64, int, unsigned int);

    // RVA: 0x2FD4 | Ordinal: 12245
        void glMemoryBarrier(unsigned int);

    // RVA: 0x2FD7 | Ordinal: 12248
        void glMemoryBarrierByRegion(unsigned int);

    // RVA: 0x2FE4 | Ordinal: 12261
        void glMinSampleShading(float);

    // RVA: 0x3047 | Ordinal: 12360
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x304D | Ordinal: 12366
        void glMultiDrawArraysIndirect(unsigned int, void const *, int, int);

    // RVA: 0x3063 | Ordinal: 12388
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x3073 | Ordinal: 12404
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3079 | Ordinal: 12410
        void glMultiDrawElementsIndirect(unsigned int, unsigned int, void const *, int, int);

    // RVA: 0x329B | Ordinal: 12956
        void glNamedBufferData(unsigned int, int, void const *, unsigned int);

    // RVA: 0x329D | Ordinal: 12958
        void glNamedBufferStorage(unsigned int, int, void const *, unsigned int);

    // RVA: 0x329F | Ordinal: 12960
        void glNamedBufferSubData(unsigned int, __int64, int, void const *);

    // RVA: 0x32A1 | Ordinal: 12962
        void glNamedFramebufferDrawBuffer(unsigned int, unsigned int);

    // RVA: 0x32A3 | Ordinal: 12964
        void glNamedFramebufferDrawBuffers(unsigned int, int, unsigned int const *);

    // RVA: 0x32A5 | Ordinal: 12966
        void glNamedFramebufferParameteri(unsigned int, unsigned int, int);

    // RVA: 0x32A7 | Ordinal: 12968
        void glNamedFramebufferReadBuffer(unsigned int, unsigned int);

    // RVA: 0x32A9 | Ordinal: 12970
        void glNamedFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x32AB | Ordinal: 12972
        void glNamedFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x32AD | Ordinal: 12974
        void glNamedFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x32AF | Ordinal: 12976
        void glNamedRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x32B1 | Ordinal: 12978
        void glNamedRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3399 | Ordinal: 13210
        void glObjectLabel(unsigned int, unsigned int, int, char const *);

    // RVA: 0x339E | Ordinal: 13215
        void glObjectPtrLabel(void const *, int, char const *);

    // RVA: 0x33CC | Ordinal: 13261
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33D9 | Ordinal: 13274
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33E6 | Ordinal: 13287
        void glPauseTransformFeedback(void);

    // RVA: 0x3433 | Ordinal: 13364
        void glPixelStoref(unsigned int, float);

    // RVA: 0x344E | Ordinal: 13391
        void glPixelStorei(unsigned int, int);

    // RVA: 0x3497 | Ordinal: 13464
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34AD | Ordinal: 13486
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34C3 | Ordinal: 13508
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34D9 | Ordinal: 13530
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34F3 | Ordinal: 13556
        void glPointSize(float);

    // RVA: 0x350D | Ordinal: 13582
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3527 | Ordinal: 13608
        void glPolygonOffset(float, float);

    // RVA: 0x355E | Ordinal: 13663
        void glPopDebugGroup(void);

    // RVA: 0x3592 | Ordinal: 13715
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x35AD | Ordinal: 13742
        void glProgramBinary(unsigned int, unsigned int, void const *, int);

    // RVA: 0x35B8 | Ordinal: 13753
        void glProgramParameteri(unsigned int, unsigned int, int);

    // RVA: 0x35C2 | Ordinal: 13763
        void glProgramUniform1d(unsigned int, int, double);

    // RVA: 0x35CC | Ordinal: 13773
        void glProgramUniform1dv(unsigned int, int, int, double const *);

    // RVA: 0x35D7 | Ordinal: 13784
        void glProgramUniform1f(unsigned int, int, float);

    // RVA: 0x35E2 | Ordinal: 13795
        void glProgramUniform1fv(unsigned int, int, int, float const *);

    // RVA: 0x35ED | Ordinal: 13806
        void glProgramUniform1i(unsigned int, int, int);

    // RVA: 0x35F8 | Ordinal: 13817
        void glProgramUniform1iv(unsigned int, int, int, int const *);

    // RVA: 0x3603 | Ordinal: 13828
        void glProgramUniform1ui(unsigned int, int, unsigned int);

    // RVA: 0x360E | Ordinal: 13839
        void glProgramUniform1uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3618 | Ordinal: 13849
        void glProgramUniform2d(unsigned int, int, double, double);

    // RVA: 0x3622 | Ordinal: 13859
        void glProgramUniform2dv(unsigned int, int, int, double const *);

    // RVA: 0x362D | Ordinal: 13870
        void glProgramUniform2f(unsigned int, int, float, float);

    // RVA: 0x3638 | Ordinal: 13881
        void glProgramUniform2fv(unsigned int, int, int, float const *);

    // RVA: 0x3643 | Ordinal: 13892
        void glProgramUniform2i(unsigned int, int, int, int);

    // RVA: 0x364E | Ordinal: 13903
        void glProgramUniform2iv(unsigned int, int, int, int const *);

    // RVA: 0x3659 | Ordinal: 13914
        void glProgramUniform2ui(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x3664 | Ordinal: 13925
        void glProgramUniform2uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x366E | Ordinal: 13935
        void glProgramUniform3d(unsigned int, int, double, double, double);

    // RVA: 0x3678 | Ordinal: 13945
        void glProgramUniform3dv(unsigned int, int, int, double const *);

    // RVA: 0x3683 | Ordinal: 13956
        void glProgramUniform3f(unsigned int, int, float, float, float);

    // RVA: 0x368E | Ordinal: 13967
        void glProgramUniform3fv(unsigned int, int, int, float const *);

    // RVA: 0x3699 | Ordinal: 13978
        void glProgramUniform3i(unsigned int, int, int, int, int);

    // RVA: 0x36A4 | Ordinal: 13989
        void glProgramUniform3iv(unsigned int, int, int, int const *);

    // RVA: 0x36AF | Ordinal: 14000
        void glProgramUniform3ui(unsigned int, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x36BA | Ordinal: 14011
        void glProgramUniform3uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x36C4 | Ordinal: 14021
        void glProgramUniform4d(unsigned int, int, double, double, double, double);

    // RVA: 0x36CE | Ordinal: 14031
        void glProgramUniform4dv(unsigned int, int, int, double const *);

    // RVA: 0x36D9 | Ordinal: 14042
        void glProgramUniform4f(unsigned int, int, float, float, float, float);

    // RVA: 0x36E4 | Ordinal: 14053
        void glProgramUniform4fv(unsigned int, int, int, float const *);

    // RVA: 0x36EF | Ordinal: 14064
        void glProgramUniform4i(unsigned int, int, int, int, int, int);

    // RVA: 0x36FA | Ordinal: 14075
        void glProgramUniform4iv(unsigned int, int, int, int const *);

    // RVA: 0x3705 | Ordinal: 14086
        void glProgramUniform4ui(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3710 | Ordinal: 14097
        void glProgramUniform4uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x371A | Ordinal: 14107
        void glProgramUniformMatrix2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3725 | Ordinal: 14118
        void glProgramUniformMatrix2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x372F | Ordinal: 14128
        void glProgramUniformMatrix2x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x373A | Ordinal: 14139
        void glProgramUniformMatrix2x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3744 | Ordinal: 14149
        void glProgramUniformMatrix2x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x374F | Ordinal: 14160
        void glProgramUniformMatrix2x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3759 | Ordinal: 14170
        void glProgramUniformMatrix3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3764 | Ordinal: 14181
        void glProgramUniformMatrix3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x376E | Ordinal: 14191
        void glProgramUniformMatrix3x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3779 | Ordinal: 14202
        void glProgramUniformMatrix3x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3783 | Ordinal: 14212
        void glProgramUniformMatrix3x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x378E | Ordinal: 14223
        void glProgramUniformMatrix3x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3798 | Ordinal: 14233
        void glProgramUniformMatrix4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37A3 | Ordinal: 14244
        void glProgramUniformMatrix4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37AD | Ordinal: 14254
        void glProgramUniformMatrix4x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37B8 | Ordinal: 14265
        void glProgramUniformMatrix4x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37C2 | Ordinal: 14275
        void glProgramUniformMatrix4x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37CD | Ordinal: 14286
        void glProgramUniformMatrix4x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37DD | Ordinal: 14302
        void glProvokingVertex(unsigned int);

    // RVA: 0x3803 | Ordinal: 14340
        void glPushDebugGroup(unsigned int, unsigned int, int, char const *);

    // RVA: 0x3833 | Ordinal: 14388
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x39E6 | Ordinal: 14823
        void glReadBuffer(unsigned int);

    // RVA: 0x3A01 | Ordinal: 14850
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A04 | Ordinal: 14853
        void glReadnPixels(int, int, int, int, unsigned int, unsigned int, int, void *);

    // RVA: 0x3A97 | Ordinal: 15000
        void glReleaseShaderCompiler(void);

    // RVA: 0x3ABB | Ordinal: 15036
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3ACE | Ordinal: 15055
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3AF9 | Ordinal: 15098
        void glResumeTransformFeedback(void);

    // RVA: 0x3B33 | Ordinal: 15156
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B44 | Ordinal: 15173
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B53 | Ordinal: 15188
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B62 | Ordinal: 15203
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B71 | Ordinal: 15218
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B80 | Ordinal: 15233
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B8F | Ordinal: 15248
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B9E | Ordinal: 15263
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BDB | Ordinal: 15324
        void glScissor(int, int, int, int);

    // RVA: 0x3BE5 | Ordinal: 15334
        void glScissorArrayv(unsigned int, int, int const *);

    // RVA: 0x3BEF | Ordinal: 15344
        void glScissorIndexed(unsigned int, int, int, int, int);

    // RVA: 0x3BF9 | Ordinal: 15354
        void glScissorIndexedv(unsigned int, int const *);

    // RVA: 0x3D2A | Ordinal: 15659
        void glShaderBinary(int, unsigned int const *, unsigned int, void const *, int);

    // RVA: 0x3D3F | Ordinal: 15680
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D45 | Ordinal: 15686
        void glShaderStorageBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3D60 | Ordinal: 15713
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D75 | Ordinal: 15734
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D90 | Ordinal: 15761
        void glStencilMask(unsigned int);

    // RVA: 0x3DA5 | Ordinal: 15782
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DC0 | Ordinal: 15809
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DD5 | Ordinal: 15830
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DE7 | Ordinal: 15848
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DEE | Ordinal: 15855
        void glTexBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x4142 | Ordinal: 16707
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x415D | Ordinal: 16734
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x416D | Ordinal: 16750
        void glTexImage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x4186 | Ordinal: 16775
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4196 | Ordinal: 16791
        void glTexImage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x41A9 | Ordinal: 16810
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41BC | Ordinal: 16829
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41D7 | Ordinal: 16856
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41F2 | Ordinal: 16883
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x420D | Ordinal: 16910
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4228 | Ordinal: 16937
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x4230 | Ordinal: 16945
        void glTexStorage1D(unsigned int, int, unsigned int, int);

    // RVA: 0x4239 | Ordinal: 16954
        void glTexStorage2D(unsigned int, int, unsigned int, int, int);

    // RVA: 0x4240 | Ordinal: 16961
        void glTexStorage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x4249 | Ordinal: 16970
        void glTexStorage3D(unsigned int, int, unsigned int, int, int, int);

    // RVA: 0x4250 | Ordinal: 16977
        void glTexStorage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x4269 | Ordinal: 17002
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4283 | Ordinal: 17028
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x429C | Ordinal: 17053
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x429E | Ordinal: 17055
        void glTextureBarrier(void);

    // RVA: 0x42A0 | Ordinal: 17057
        void glTextureBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x42A2 | Ordinal: 17059
        void glTextureBufferRange(unsigned int, unsigned int, unsigned int, __int64, int);

    // RVA: 0x42A4 | Ordinal: 17061
        void glTextureParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x42A6 | Ordinal: 17063
        void glTextureParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x42A8 | Ordinal: 17065
        void glTextureParameterf(unsigned int, unsigned int, float);

    // RVA: 0x42AA | Ordinal: 17067
        void glTextureParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x42AC | Ordinal: 17069
        void glTextureParameteri(unsigned int, unsigned int, int);

    // RVA: 0x42AE | Ordinal: 17071
        void glTextureParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x42B0 | Ordinal: 17073
        void glTextureStorage1D(unsigned int, int, unsigned int, int);

    // RVA: 0x42B2 | Ordinal: 17075
        void glTextureStorage2D(unsigned int, int, unsigned int, int, int);

    // RVA: 0x42B4 | Ordinal: 17077
        void glTextureStorage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x42B6 | Ordinal: 17079
        void glTextureStorage3D(unsigned int, int, unsigned int, int, int, int);

    // RVA: 0x42B8 | Ordinal: 17081
        void glTextureStorage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x42BA | Ordinal: 17083
        void glTextureSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42BC | Ordinal: 17085
        void glTextureSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42BE | Ordinal: 17087
        void glTextureSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42C4 | Ordinal: 17093
        void glTextureView(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x42C6 | Ordinal: 17095
        void glTransformFeedbackBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x42C8 | Ordinal: 17097
        void glTransformFeedbackBufferRange(unsigned int, unsigned int, unsigned int, __int64, int);

    // RVA: 0x42DB | Ordinal: 17116
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x4309 | Ordinal: 17162
        void glUniform1d(int, double);

    // RVA: 0x4315 | Ordinal: 17174
        void glUniform1dv(int, int, double const *);

    // RVA: 0x432A | Ordinal: 17195
        void glUniform1f(int, float);

    // RVA: 0x433F | Ordinal: 17216
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4354 | Ordinal: 17237
        void glUniform1i(int, int);

    // RVA: 0x4369 | Ordinal: 17258
        void glUniform1iv(int, int, int const *);

    // RVA: 0x437C | Ordinal: 17277
        void glUniform1ui(int, unsigned int);

    // RVA: 0x438F | Ordinal: 17296
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x439B | Ordinal: 17308
        void glUniform2d(int, double, double);

    // RVA: 0x43A7 | Ordinal: 17320
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43BC | Ordinal: 17341
        void glUniform2f(int, float, float);

    // RVA: 0x43D1 | Ordinal: 17362
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43E6 | Ordinal: 17383
        void glUniform2i(int, int, int);

    // RVA: 0x43FB | Ordinal: 17404
        void glUniform2iv(int, int, int const *);

    // RVA: 0x440E | Ordinal: 17423
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4421 | Ordinal: 17442
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x442D | Ordinal: 17454
        void glUniform3d(int, double, double, double);

    // RVA: 0x4439 | Ordinal: 17466
        void glUniform3dv(int, int, double const *);

    // RVA: 0x444E | Ordinal: 17487
        void glUniform3f(int, float, float, float);

    // RVA: 0x4463 | Ordinal: 17508
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4478 | Ordinal: 17529
        void glUniform3i(int, int, int, int);

    // RVA: 0x448D | Ordinal: 17550
        void glUniform3iv(int, int, int const *);

    // RVA: 0x44A0 | Ordinal: 17569
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44B3 | Ordinal: 17588
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44BF | Ordinal: 17600
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44CB | Ordinal: 17612
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44E0 | Ordinal: 17633
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44F5 | Ordinal: 17654
        void glUniform4fv(int, int, float const *);

    // RVA: 0x450A | Ordinal: 17675
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x451F | Ordinal: 17696
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4532 | Ordinal: 17715
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4545 | Ordinal: 17734
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4557 | Ordinal: 17752
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4563 | Ordinal: 17764
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x4578 | Ordinal: 17785
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x4584 | Ordinal: 17797
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4598 | Ordinal: 17817
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45A4 | Ordinal: 17829
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45B8 | Ordinal: 17849
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45C4 | Ordinal: 17861
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45D9 | Ordinal: 17882
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45E5 | Ordinal: 17894
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45F9 | Ordinal: 17914
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4605 | Ordinal: 17926
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x4619 | Ordinal: 17946
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x4625 | Ordinal: 17958
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x463A | Ordinal: 17979
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x4646 | Ordinal: 17991
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x465A | Ordinal: 18011
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4666 | Ordinal: 18023
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x467A | Ordinal: 18043
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x4686 | Ordinal: 18055
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x469C | Ordinal: 18077
        void glUnmapBuffer(unsigned int);

    // RVA: 0x469E | Ordinal: 18079
        void glUnmapNamedBuffer(unsigned int);

    // RVA: 0x46B3 | Ordinal: 18100
        void glUseProgram(unsigned int);

    // RVA: 0x46BE | Ordinal: 18111
        void glUseProgramStages(unsigned int, unsigned int, unsigned int);

    // RVA: 0x46D3 | Ordinal: 18132
        void glValidateProgram(unsigned int);

    // RVA: 0x46DE | Ordinal: 18143
        void glValidateProgramPipeline(unsigned int);

    // RVA: 0x4878 | Ordinal: 18553
        void glVertexArrayAttribBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x487A | Ordinal: 18555
        void glVertexArrayAttribFormat(unsigned int, unsigned int, int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x487C | Ordinal: 18557
        void glVertexArrayAttribIFormat(unsigned int, unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x487E | Ordinal: 18559
        void glVertexArrayAttribLFormat(unsigned int, unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4880 | Ordinal: 18561
        void glVertexArrayBindingDivisor(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4882 | Ordinal: 18563
        void glVertexArrayElementBuffer(unsigned int, unsigned int);

    // RVA: 0x4884 | Ordinal: 18565
        void glVertexArrayVertexBuffer(unsigned int, unsigned int, unsigned int, __int64, int);

    // RVA: 0x4886 | Ordinal: 18567
        void glVertexArrayVertexBuffers(unsigned int, unsigned int, int, unsigned int const *, __int64 const *, int const *);

    // RVA: 0x4893 | Ordinal: 18580
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x48A0 | Ordinal: 18593
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48AE | Ordinal: 18607
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48BC | Ordinal: 18621
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48C9 | Ordinal: 18634
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48D6 | Ordinal: 18647
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48E3 | Ordinal: 18660
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48F0 | Ordinal: 18673
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48FE | Ordinal: 18687
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x490C | Ordinal: 18701
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x4919 | Ordinal: 18714
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x4926 | Ordinal: 18727
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x4933 | Ordinal: 18740
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x4940 | Ordinal: 18753
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x494E | Ordinal: 18767
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x495C | Ordinal: 18781
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x4969 | Ordinal: 18794
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x4976 | Ordinal: 18807
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x4983 | Ordinal: 18820
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x4990 | Ordinal: 18833
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x499D | Ordinal: 18846
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x49AA | Ordinal: 18859
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49B7 | Ordinal: 18872
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49C4 | Ordinal: 18885
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49D1 | Ordinal: 18898
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49DE | Ordinal: 18911
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49EB | Ordinal: 18924
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49F8 | Ordinal: 18937
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x4A06 | Ordinal: 18951
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A14 | Ordinal: 18965
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A21 | Ordinal: 18978
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A2E | Ordinal: 18991
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A3B | Ordinal: 19004
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A48 | Ordinal: 19017
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A55 | Ordinal: 19030
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A62 | Ordinal: 19043
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4A69 | Ordinal: 19050
        void glVertexAttribBinding(unsigned int, unsigned int);

    // RVA: 0x4A78 | Ordinal: 19065
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4A7F | Ordinal: 19072
        void glVertexAttribFormat(unsigned int, int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4A8A | Ordinal: 19083
        void glVertexAttribI1i(unsigned int, int);

    // RVA: 0x4A95 | Ordinal: 19094
        void glVertexAttribI1iv(unsigned int, int const *);

    // RVA: 0x4AA0 | Ordinal: 19105
        void glVertexAttribI1ui(unsigned int, unsigned int);

    // RVA: 0x4AAB | Ordinal: 19116
        void glVertexAttribI1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AB6 | Ordinal: 19127
        void glVertexAttribI2i(unsigned int, int, int);

    // RVA: 0x4AC1 | Ordinal: 19138
        void glVertexAttribI2iv(unsigned int, int const *);

    // RVA: 0x4ACC | Ordinal: 19149
        void glVertexAttribI2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AD7 | Ordinal: 19160
        void glVertexAttribI2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AE2 | Ordinal: 19171
        void glVertexAttribI3i(unsigned int, int, int, int);

    // RVA: 0x4AED | Ordinal: 19182
        void glVertexAttribI3iv(unsigned int, int const *);

    // RVA: 0x4AF8 | Ordinal: 19193
        void glVertexAttribI3ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B03 | Ordinal: 19204
        void glVertexAttribI3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B0E | Ordinal: 19215
        void glVertexAttribI4bv(unsigned int, signed char const *);

    // RVA: 0x4B1A | Ordinal: 19227
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B26 | Ordinal: 19239
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B31 | Ordinal: 19250
        void glVertexAttribI4sv(unsigned int, short const *);

    // RVA: 0x4B3C | Ordinal: 19261
        void glVertexAttribI4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4B48 | Ordinal: 19273
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B54 | Ordinal: 19285
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B5F | Ordinal: 19296
        void glVertexAttribI4usv(unsigned int, unsigned short const *);

    // RVA: 0x4B66 | Ordinal: 19303
        void glVertexAttribIFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4B79 | Ordinal: 19322
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4B83 | Ordinal: 19332
        void glVertexAttribL1d(unsigned int, double);

    // RVA: 0x4B8D | Ordinal: 19342
        void glVertexAttribL1dv(unsigned int, double const *);

    // RVA: 0x4B97 | Ordinal: 19352
        void glVertexAttribL2d(unsigned int, double, double);

    // RVA: 0x4BA1 | Ordinal: 19362
        void glVertexAttribL2dv(unsigned int, double const *);

    // RVA: 0x4BAB | Ordinal: 19372
        void glVertexAttribL3d(unsigned int, double, double, double);

    // RVA: 0x4BB5 | Ordinal: 19382
        void glVertexAttribL3dv(unsigned int, double const *);

    // RVA: 0x4BBF | Ordinal: 19392
        void glVertexAttribL4d(unsigned int, double, double, double, double);

    // RVA: 0x4BC9 | Ordinal: 19402
        void glVertexAttribL4dv(unsigned int, double const *);

    // RVA: 0x4BCF | Ordinal: 19408
        void glVertexAttribLFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4BD9 | Ordinal: 19418
        void glVertexAttribLPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BE7 | Ordinal: 19432
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BF5 | Ordinal: 19446
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C03 | Ordinal: 19460
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C11 | Ordinal: 19474
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C1F | Ordinal: 19488
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C2D | Ordinal: 19502
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C3B | Ordinal: 19516
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C49 | Ordinal: 19530
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C5E | Ordinal: 19551
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C65 | Ordinal: 19558
        void glVertexBindingDivisor(unsigned int, unsigned int);

    // RVA: 0x4CD8 | Ordinal: 19673
        void glViewport(int, int, int, int);

    // RVA: 0x4CE2 | Ordinal: 19683
        void glViewportArrayv(unsigned int, int, float const *);

    // RVA: 0x4CEC | Ordinal: 19693
        void glViewportIndexedf(unsigned int, float, float, float, float);

    // RVA: 0x4CF6 | Ordinal: 19703
        void glViewportIndexedfv(unsigned int, float const *);

    // RVA: 0x4D07 | Ordinal: 19720
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4F33 | Ordinal: 20276
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FF5 | Ordinal: 20470
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6119 | Ordinal: 24858
        void versionProfile(void);

    // RVA: 0x496 | Ordinal: 1175
        void _QOpenGLFunctions_4_5_Core(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_5_CORE_HPP
