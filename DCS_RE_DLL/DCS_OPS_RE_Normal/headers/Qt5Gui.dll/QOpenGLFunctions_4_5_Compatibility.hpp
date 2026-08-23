#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_5_Compatibility
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_5_Compatibility
{
public:

    // RVA: 0x1C7 | Ordinal: 456
        void QOpenGLFunctions_4_5_Compatibility(void);

    // RVA: 0x11C8 | Ordinal: 4553
        void glAccum(unsigned int, float);

    // RVA: 0x11D2 | Ordinal: 4563
        void glActiveShaderProgram(unsigned int, unsigned int);

    // RVA: 0x11EA | Ordinal: 4587
        void glActiveTexture(unsigned int);

    // RVA: 0x11FC | Ordinal: 4605
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x120C | Ordinal: 4621
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x121C | Ordinal: 4637
        void glArrayElement(int);

    // RVA: 0x1230 | Ordinal: 4657
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x1243 | Ordinal: 4676
        void glBegin(unsigned int);

    // RVA: 0x1254 | Ordinal: 4693
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x126A | Ordinal: 4715
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x1276 | Ordinal: 4727
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1289 | Ordinal: 4746
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x129E | Ordinal: 4767
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12B4 | Ordinal: 4789
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12C7 | Ordinal: 4808
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12DA | Ordinal: 4827
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12DE | Ordinal: 4831
        void glBindBuffersBase(unsigned int, unsigned int, int, unsigned int const *);

    // RVA: 0x12E2 | Ordinal: 4835
        void glBindBuffersRange(unsigned int, unsigned int, int, unsigned int const *, __int64 const *, __int64 const *);

    // RVA: 0x12F4 | Ordinal: 4853
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x1302 | Ordinal: 4867
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x1315 | Ordinal: 4886
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x131E | Ordinal: 4895
        void glBindImageTexture(unsigned int, unsigned int, int, unsigned char, int, unsigned int, unsigned int);

    // RVA: 0x1322 | Ordinal: 4899
        void glBindImageTextures(unsigned int, int, unsigned int const *);

    // RVA: 0x132D | Ordinal: 4910
        void glBindProgramPipeline(unsigned int);

    // RVA: 0x1340 | Ordinal: 4929
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x134F | Ordinal: 4944
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1353 | Ordinal: 4948
        void glBindSamplers(unsigned int, int, unsigned int const *);

    // RVA: 0x136D | Ordinal: 4974
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x136F | Ordinal: 4976
        void glBindTextureUnit(unsigned int, unsigned int);

    // RVA: 0x1373 | Ordinal: 4980
        void glBindTextures(unsigned int, int, unsigned int const *);

    // RVA: 0x1380 | Ordinal: 4993
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1393 | Ordinal: 5012
        void glBindVertexArray(unsigned int);

    // RVA: 0x139A | Ordinal: 5019
        void glBindVertexBuffer(unsigned int, unsigned int, __int64, int);

    // RVA: 0x139E | Ordinal: 5023
        void glBindVertexBuffers(unsigned int, int, unsigned int const *, __int64 const *, int const *);

    // RVA: 0x13B0 | Ordinal: 5041
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13C9 | Ordinal: 5066
        void glBlendColor(float, float, float, float);

    // RVA: 0x13E2 | Ordinal: 5091
        void glBlendEquation(unsigned int);

    // RVA: 0x13F7 | Ordinal: 5112
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x1404 | Ordinal: 5125
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1411 | Ordinal: 5138
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x142C | Ordinal: 5165
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1443 | Ordinal: 5188
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1450 | Ordinal: 5201
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x145D | Ordinal: 5214
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1470 | Ordinal: 5233
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1472 | Ordinal: 5235
        void glBlitNamedFramebuffer(unsigned int, unsigned int, int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1488 | Ordinal: 5257
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x148C | Ordinal: 5261
        void glBufferStorage(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x14A2 | Ordinal: 5283
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14B4 | Ordinal: 5301
        void glCallList(unsigned int);

    // RVA: 0x14C5 | Ordinal: 5318
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14D7 | Ordinal: 5336
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14D9 | Ordinal: 5338
        void glCheckNamedFramebufferStatus(unsigned int, unsigned int);

    // RVA: 0x14EB | Ordinal: 5356
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x1506 | Ordinal: 5383
        void glClear(unsigned int);

    // RVA: 0x1518 | Ordinal: 5401
        void glClearAccum(float, float, float, float);

    // RVA: 0x151D | Ordinal: 5406
        void glClearBufferData(unsigned int, unsigned int, unsigned int, unsigned int, void const *);

    // RVA: 0x1523 | Ordinal: 5412
        void glClearBufferSubData(unsigned int, unsigned int, __int64, __int64, unsigned int, unsigned int, void const *);

    // RVA: 0x1536 | Ordinal: 5431
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1549 | Ordinal: 5450
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x155C | Ordinal: 5469
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x156F | Ordinal: 5488
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x158A | Ordinal: 5515
        void glClearColor(float, float, float, float);

    // RVA: 0x15A4 | Ordinal: 5541
        void glClearDepth(double);

    // RVA: 0x15AF | Ordinal: 5552
        void glClearDepthf(float);

    // RVA: 0x15C1 | Ordinal: 5570
        void glClearIndex(float);

    // RVA: 0x15C2 | Ordinal: 5571
        void glClearNamedBufferData(unsigned int, unsigned int, unsigned int, unsigned int, void const *);

    // RVA: 0x15C4 | Ordinal: 5573
        void glClearNamedBufferSubData(unsigned int, unsigned int, __int64, int, unsigned int, unsigned int, void const *);

    // RVA: 0x15C6 | Ordinal: 5575
        void glClearNamedFramebufferfi(unsigned int, unsigned int, float, int);

    // RVA: 0x15C8 | Ordinal: 5577
        void glClearNamedFramebufferfv(unsigned int, unsigned int, int, float const *);

    // RVA: 0x15CA | Ordinal: 5579
        void glClearNamedFramebufferiv(unsigned int, unsigned int, int, int const *);

    // RVA: 0x15CC | Ordinal: 5581
        void glClearNamedFramebufferuiv(unsigned int, unsigned int, int, unsigned int const *);

    // RVA: 0x15E7 | Ordinal: 5608
        void glClearStencil(int);

    // RVA: 0x15EB | Ordinal: 5612
        void glClearTexImage(unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x15EF | Ordinal: 5616
        void glClearTexSubImage(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x15FE | Ordinal: 5631
        void glClientActiveTexture(unsigned int);

    // RVA: 0x160E | Ordinal: 5647
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x1610 | Ordinal: 5649
        void glClipControl(unsigned int, unsigned int);

    // RVA: 0x1622 | Ordinal: 5667
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x1633 | Ordinal: 5684
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x1644 | Ordinal: 5701
        void glColor3bv(signed char const *);

    // RVA: 0x1655 | Ordinal: 5718
        void glColor3d(double, double, double);

    // RVA: 0x1666 | Ordinal: 5735
        void glColor3dv(double const *);

    // RVA: 0x1677 | Ordinal: 5752
        void glColor3f(float, float, float);

    // RVA: 0x1688 | Ordinal: 5769
        void glColor3fv(float const *);

    // RVA: 0x1699 | Ordinal: 5786
        void glColor3i(int, int, int);

    // RVA: 0x16AA | Ordinal: 5803
        void glColor3iv(int const *);

    // RVA: 0x16BB | Ordinal: 5820
        void glColor3s(short, short, short);

    // RVA: 0x16CC | Ordinal: 5837
        void glColor3sv(short const *);

    // RVA: 0x16DD | Ordinal: 5854
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16EE | Ordinal: 5871
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16FF | Ordinal: 5888
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1710 | Ordinal: 5905
        void glColor3uiv(unsigned int const *);

    // RVA: 0x1721 | Ordinal: 5922
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x1732 | Ordinal: 5939
        void glColor3usv(unsigned short const *);

    // RVA: 0x1743 | Ordinal: 5956
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x1754 | Ordinal: 5973
        void glColor4bv(signed char const *);

    // RVA: 0x1765 | Ordinal: 5990
        void glColor4d(double, double, double, double);

    // RVA: 0x1776 | Ordinal: 6007
        void glColor4dv(double const *);

    // RVA: 0x1787 | Ordinal: 6024
        void glColor4f(float, float, float, float);

    // RVA: 0x1798 | Ordinal: 6041
        void glColor4fv(float const *);

    // RVA: 0x17A9 | Ordinal: 6058
        void glColor4i(int, int, int, int);

    // RVA: 0x17BA | Ordinal: 6075
        void glColor4iv(int const *);

    // RVA: 0x17CB | Ordinal: 6092
        void glColor4s(short, short, short, short);

    // RVA: 0x17DC | Ordinal: 6109
        void glColor4sv(short const *);

    // RVA: 0x17ED | Ordinal: 6126
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17FE | Ordinal: 6143
        void glColor4ubv(unsigned char const *);

    // RVA: 0x180F | Ordinal: 6160
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x1820 | Ordinal: 6177
        void glColor4uiv(unsigned int const *);

    // RVA: 0x1831 | Ordinal: 6194
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x1842 | Ordinal: 6211
        void glColor4usv(unsigned short const *);

    // RVA: 0x185C | Ordinal: 6237
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x186F | Ordinal: 6256
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1881 | Ordinal: 6274
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x188D | Ordinal: 6286
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x1899 | Ordinal: 6298
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x18A5 | Ordinal: 6310
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18B1 | Ordinal: 6322
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x18C1 | Ordinal: 6338
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18D0 | Ordinal: 6353
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18DF | Ordinal: 6368
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18EE | Ordinal: 6383
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18FD | Ordinal: 6398
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1911 | Ordinal: 6418
        void glCompileShader(unsigned int);

    // RVA: 0x1928 | Ordinal: 6441
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x1940 | Ordinal: 6465
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1958 | Ordinal: 6489
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x196F | Ordinal: 6512
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1987 | Ordinal: 6536
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x199F | Ordinal: 6560
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19A1 | Ordinal: 6562
        void glCompressedTextureSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19A3 | Ordinal: 6564
        void glCompressedTextureSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19A5 | Ordinal: 6566
        void glCompressedTextureSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19B5 | Ordinal: 6582
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19C4 | Ordinal: 6597
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19D3 | Ordinal: 6612
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19E2 | Ordinal: 6627
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19F1 | Ordinal: 6642
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x1A00 | Ordinal: 6657
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A11 | Ordinal: 6674
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A21 | Ordinal: 6690
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A30 | Ordinal: 6705
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A3F | Ordinal: 6720
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A4E | Ordinal: 6735
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A54 | Ordinal: 6741
        void glCopyImageSubData(unsigned int, unsigned int, int, int, int, int, unsigned int, unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1A56 | Ordinal: 6743
        void glCopyNamedBufferSubData(unsigned int, unsigned int, __int64, __int64, int);

    // RVA: 0x1A68 | Ordinal: 6761
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A80 | Ordinal: 6785
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A9A | Ordinal: 6811
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AB3 | Ordinal: 6836
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1ACD | Ordinal: 6862
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AE6 | Ordinal: 6887
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AE8 | Ordinal: 6889
        void glCopyTextureSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1AEA | Ordinal: 6891
        void glCopyTextureSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AEC | Ordinal: 6893
        void glCopyTextureSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1AEE | Ordinal: 6895
        void glCreateBuffers(int, unsigned int *);

    // RVA: 0x1AF0 | Ordinal: 6897
        void glCreateFramebuffers(int, unsigned int *);

    // RVA: 0x1B05 | Ordinal: 6918
        void glCreateProgram(void);

    // RVA: 0x1B07 | Ordinal: 6920
        void glCreateProgramPipelines(int, unsigned int *);

    // RVA: 0x1B09 | Ordinal: 6922
        void glCreateQueries(unsigned int, int, unsigned int *);

    // RVA: 0x1B0B | Ordinal: 6924
        void glCreateRenderbuffers(int, unsigned int *);

    // RVA: 0x1B0D | Ordinal: 6926
        void glCreateSamplers(int, unsigned int *);

    // RVA: 0x1B22 | Ordinal: 6947
        void glCreateShader(unsigned int);

    // RVA: 0x1B2D | Ordinal: 6958
        void glCreateShaderProgramv(unsigned int, int, char const *const *);

    // RVA: 0x1B2F | Ordinal: 6960
        void glCreateTextures(unsigned int, int, unsigned int *);

    // RVA: 0x1B31 | Ordinal: 6962
        void glCreateTransformFeedbacks(int, unsigned int *);

    // RVA: 0x1B33 | Ordinal: 6964
        void glCreateVertexArrays(int, unsigned int *);

    // RVA: 0x1B4E | Ordinal: 6991
        void glCullFace(unsigned int);

    // RVA: 0x1B53 | Ordinal: 6996
        void glDebugMessageCallback(void (__cdecl *)(unsigned int, unsigned int, unsigned int, unsigned int, int, char const *, void const *), void const *);

    // RVA: 0x1B58 | Ordinal: 7001
        void glDebugMessageControl(unsigned int, unsigned int, unsigned int, int, unsigned int const *, unsigned char);

    // RVA: 0x1B5D | Ordinal: 7006
        void glDebugMessageInsert(unsigned int, unsigned int, unsigned int, unsigned int, int, char const *);

    // RVA: 0x1B73 | Ordinal: 7028
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B86 | Ordinal: 7047
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B98 | Ordinal: 7065
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1BAC | Ordinal: 7085
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BB7 | Ordinal: 7096
        void glDeleteProgramPipelines(int, unsigned int const *);

    // RVA: 0x1BCD | Ordinal: 7118
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BE0 | Ordinal: 7137
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BEF | Ordinal: 7152
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1C04 | Ordinal: 7173
        void glDeleteShader(unsigned int);

    // RVA: 0x1C15 | Ordinal: 7190
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C2F | Ordinal: 7216
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C3C | Ordinal: 7229
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C4F | Ordinal: 7248
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C6A | Ordinal: 7275
        void glDepthFunc(unsigned int);

    // RVA: 0x1C85 | Ordinal: 7302
        void glDepthMask(unsigned char);

    // RVA: 0x1C9F | Ordinal: 7328
        void glDepthRange(double, double);

    // RVA: 0x1CA9 | Ordinal: 7338
        void glDepthRangeArrayv(unsigned int, int, double const *);

    // RVA: 0x1CB3 | Ordinal: 7348
        void glDepthRangeIndexed(unsigned int, double, double);

    // RVA: 0x1CBE | Ordinal: 7359
        void glDepthRangef(float, float);

    // RVA: 0x1CD3 | Ordinal: 7380
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CEE | Ordinal: 7407
        void glDisable(unsigned int);

    // RVA: 0x1CFF | Ordinal: 7424
        void glDisableClientState(unsigned int);

    // RVA: 0x1D00 | Ordinal: 7425
        void glDisableVertexArrayAttrib(unsigned int, unsigned int);

    // RVA: 0x1D15 | Ordinal: 7446
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D28 | Ordinal: 7465
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D30 | Ordinal: 7473
        void glDispatchCompute(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1D37 | Ordinal: 7480
        void glDispatchComputeIndirect(__int64);

    // RVA: 0x1D51 | Ordinal: 7506
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D5E | Ordinal: 7519
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D70 | Ordinal: 7537
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D78 | Ordinal: 7545
        void glDrawArraysInstancedBaseInstance(unsigned int, int, int, int, unsigned int);

    // RVA: 0x1D92 | Ordinal: 7571
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DA7 | Ordinal: 7592
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DC1 | Ordinal: 7618
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DD2 | Ordinal: 7635
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DDF | Ordinal: 7648
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DF1 | Ordinal: 7666
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DF9 | Ordinal: 7674
        void glDrawElementsInstancedBaseInstance(unsigned int, int, unsigned int, void const *, int, unsigned int);

    // RVA: 0x1E0A | Ordinal: 7691
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E12 | Ordinal: 7699
        void glDrawElementsInstancedBaseVertexBaseInstance(unsigned int, int, unsigned int, void const *, int, int, unsigned int);

    // RVA: 0x1E24 | Ordinal: 7717
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E3C | Ordinal: 7741
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E4D | Ordinal: 7758
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E59 | Ordinal: 7770
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E61 | Ordinal: 7778
        void glDrawTransformFeedbackInstanced(unsigned int, unsigned int, int);

    // RVA: 0x1E6D | Ordinal: 7790
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1E75 | Ordinal: 7798
        void glDrawTransformFeedbackStreamInstanced(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x1E87 | Ordinal: 7816
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E97 | Ordinal: 7832
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1EA8 | Ordinal: 7849
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EC2 | Ordinal: 7875
        void glEnable(unsigned int);

    // RVA: 0x1ED3 | Ordinal: 7892
        void glEnableClientState(unsigned int);

    // RVA: 0x1ED4 | Ordinal: 7893
        void glEnableVertexArrayAttrib(unsigned int, unsigned int);

    // RVA: 0x1EE9 | Ordinal: 7914
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EFC | Ordinal: 7933
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F0E | Ordinal: 7951
        void glEnd(void);

    // RVA: 0x1F1F | Ordinal: 7968
        void glEndConditionalRender(void);

    // RVA: 0x1F31 | Ordinal: 7986
        void glEndList(void);

    // RVA: 0x1F46 | Ordinal: 8007
        void glEndQuery(unsigned int);

    // RVA: 0x1F52 | Ordinal: 8019
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F65 | Ordinal: 8038
        void glEndTransformFeedback(void);

    // RVA: 0x1F77 | Ordinal: 8056
        void glEvalCoord1d(double);

    // RVA: 0x1F88 | Ordinal: 8073
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F99 | Ordinal: 8090
        void glEvalCoord1f(float);

    // RVA: 0x1FAA | Ordinal: 8107
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FBB | Ordinal: 8124
        void glEvalCoord2d(double, double);

    // RVA: 0x1FCC | Ordinal: 8141
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FDD | Ordinal: 8158
        void glEvalCoord2f(float, float);

    // RVA: 0x1FEE | Ordinal: 8175
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FFF | Ordinal: 8192
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x2010 | Ordinal: 8209
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x2021 | Ordinal: 8226
        void glEvalPoint1(int);

    // RVA: 0x2032 | Ordinal: 8243
        void glEvalPoint2(int, int);

    // RVA: 0x2043 | Ordinal: 8260
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x2053 | Ordinal: 8276
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x206E | Ordinal: 8303
        void glFinish(void);

    // RVA: 0x2089 | Ordinal: 8330
        void glFlush(void);

    // RVA: 0x209C | Ordinal: 8349
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x209E | Ordinal: 8351
        void glFlushMappedNamedBufferRange(unsigned int, __int64, int);

    // RVA: 0x20AC | Ordinal: 8365
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20B9 | Ordinal: 8378
        void glFogCoordd(double);

    // RVA: 0x20C6 | Ordinal: 8391
        void glFogCoorddv(double const *);

    // RVA: 0x20D3 | Ordinal: 8404
        void glFogCoordf(float);

    // RVA: 0x20E0 | Ordinal: 8417
        void glFogCoordfv(float const *);

    // RVA: 0x20F1 | Ordinal: 8434
        void glFogf(unsigned int, float);

    // RVA: 0x2102 | Ordinal: 8451
        void glFogfv(unsigned int, float const *);

    // RVA: 0x2113 | Ordinal: 8468
        void glFogi(unsigned int, int);

    // RVA: 0x2124 | Ordinal: 8485
        void glFogiv(unsigned int, int const *);

    // RVA: 0x212B | Ordinal: 8492
        void glFramebufferParameteri(unsigned int, unsigned int, int);

    // RVA: 0x213E | Ordinal: 8511
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2186 | Ordinal: 8583
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2150 | Ordinal: 8529
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2163 | Ordinal: 8548
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2175 | Ordinal: 8566
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2199 | Ordinal: 8602
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21B4 | Ordinal: 8629
        void glFrontFace(unsigned int);

    // RVA: 0x21C6 | Ordinal: 8647
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21DB | Ordinal: 8668
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21EE | Ordinal: 8687
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x2200 | Ordinal: 8705
        void glGenLists(int);

    // RVA: 0x220A | Ordinal: 8715
        void glGenProgramPipelines(int, unsigned int *);

    // RVA: 0x2220 | Ordinal: 8737
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2233 | Ordinal: 8756
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x2242 | Ordinal: 8771
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x225C | Ordinal: 8797
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2269 | Ordinal: 8810
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x227C | Ordinal: 8829
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x228F | Ordinal: 8848
        void glGenerateMipmap(unsigned int);

    // RVA: 0x2291 | Ordinal: 8850
        void glGenerateTextureMipmap(unsigned int);

    // RVA: 0x2299 | Ordinal: 8858
        void glGetActiveAtomicCounterBufferiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22AE | Ordinal: 8879
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22BA | Ordinal: 8891
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22C6 | Ordinal: 8903
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22D2 | Ordinal: 8915
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22E7 | Ordinal: 8936
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22F9 | Ordinal: 8954
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x230B | Ordinal: 8972
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x231C | Ordinal: 8989
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x232E | Ordinal: 9007
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x2343 | Ordinal: 9028
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2358 | Ordinal: 9049
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x236B | Ordinal: 9068
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2386 | Ordinal: 9095
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x2397 | Ordinal: 9112
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23AD | Ordinal: 9134
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23C3 | Ordinal: 9156
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23D9 | Ordinal: 9178
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23EB | Ordinal: 9196
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23FA | Ordinal: 9211
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2409 | Ordinal: 9226
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2418 | Ordinal: 9241
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x242E | Ordinal: 9263
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2430 | Ordinal: 9265
        void glGetCompressedTextureImage(unsigned int, int, int, void *);

    // RVA: 0x2432 | Ordinal: 9267
        void glGetCompressedTextureSubImage(unsigned int, int, int, int, int, int, int, int, int, void *);

    // RVA: 0x2442 | Ordinal: 9283
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2451 | Ordinal: 9298
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2460 | Ordinal: 9313
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2464 | Ordinal: 9317
        void glGetDebugMessageLog(unsigned int, int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, int *, char *);

    // RVA: 0x246E | Ordinal: 9327
        void glGetDoublei_v(unsigned int, unsigned int, double *);

    // RVA: 0x2488 | Ordinal: 9353
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x24A3 | Ordinal: 9380
        void glGetError(void);

    // RVA: 0x24AD | Ordinal: 9390
        void glGetFloati_v(unsigned int, unsigned int, float *);

    // RVA: 0x24C8 | Ordinal: 9417
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24D6 | Ordinal: 9431
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24E9 | Ordinal: 9450
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24FC | Ordinal: 9469
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2503 | Ordinal: 9476
        void glGetFramebufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2506 | Ordinal: 9479
        void glGetGraphicsResetStatus(void);

    // RVA: 0x2516 | Ordinal: 9495
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2525 | Ordinal: 9510
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2534 | Ordinal: 9525
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2544 | Ordinal: 9541
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2555 | Ordinal: 9558
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x2568 | Ordinal: 9577
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2583 | Ordinal: 9604
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x2589 | Ordinal: 9610
        void glGetInternalformati64v(unsigned int, unsigned int, unsigned int, int, __int64 *);

    // RVA: 0x2592 | Ordinal: 9619
        void glGetInternalformativ(unsigned int, unsigned int, unsigned int, int, int *);

    // RVA: 0x25A4 | Ordinal: 9637
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25B5 | Ordinal: 9654
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25C6 | Ordinal: 9671
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25D7 | Ordinal: 9688
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25E8 | Ordinal: 9705
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25F9 | Ordinal: 9722
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x260A | Ordinal: 9739
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x2619 | Ordinal: 9754
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2628 | Ordinal: 9769
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2637 | Ordinal: 9784
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2647 | Ordinal: 9800
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x2649 | Ordinal: 9802
        void glGetNamedBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x264B | Ordinal: 9804
        void glGetNamedBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x264D | Ordinal: 9806
        void glGetNamedBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x264F | Ordinal: 9808
        void glGetNamedBufferSubData(unsigned int, __int64, int, void *);

    // RVA: 0x2651 | Ordinal: 9810
        void glGetNamedFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2653 | Ordinal: 9812
        void glGetNamedFramebufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2655 | Ordinal: 9814
        void glGetNamedRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x265A | Ordinal: 9819
        void glGetObjectLabel(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x265F | Ordinal: 9824
        void glGetObjectPtrLabel(void const *, int, int *, char *);

    // RVA: 0x2671 | Ordinal: 9842
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x2682 | Ordinal: 9859
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x2693 | Ordinal: 9876
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x26AB | Ordinal: 9900
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26BC | Ordinal: 9917
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x26C6 | Ordinal: 9927
        void glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *);

    // RVA: 0x26DB | Ordinal: 9948
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26E2 | Ordinal: 9955
        void glGetProgramInterfaceiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x26ED | Ordinal: 9966
        void glGetProgramPipelineInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26F8 | Ordinal: 9977
        void glGetProgramPipelineiv(unsigned int, unsigned int, int *);

    // RVA: 0x26FF | Ordinal: 9984
        void glGetProgramResourceIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2706 | Ordinal: 9991
        void glGetProgramResourceLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x270C | Ordinal: 9997
        void glGetProgramResourceLocationIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2713 | Ordinal: 10004
        void glGetProgramResourceName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x271A | Ordinal: 10011
        void glGetProgramResourceiv(unsigned int, unsigned int, unsigned int, int, unsigned int const *, int, int *, int *);

    // RVA: 0x2726 | Ordinal: 10023
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x273B | Ordinal: 10044
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2747 | Ordinal: 10056
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2755 | Ordinal: 10070
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x276A | Ordinal: 10091
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2778 | Ordinal: 10105
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x278E | Ordinal: 10127
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27A4 | Ordinal: 10149
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27B7 | Ordinal: 10168
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27C6 | Ordinal: 10183
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27D5 | Ordinal: 10198
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27E4 | Ordinal: 10213
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27F3 | Ordinal: 10228
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2803 | Ordinal: 10244
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2817 | Ordinal: 10264
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2822 | Ordinal: 10275
        void glGetShaderPrecisionFormat(unsigned int, unsigned int, int *, int *);

    // RVA: 0x2837 | Ordinal: 10296
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x284C | Ordinal: 10317
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2867 | Ordinal: 10344
        void glGetString(unsigned int);

    // RVA: 0x287A | Ordinal: 10363
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2886 | Ordinal: 10375
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2892 | Ordinal: 10387
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x28A3 | Ordinal: 10404
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x28B5 | Ordinal: 10422
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28C6 | Ordinal: 10439
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28D7 | Ordinal: 10456
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28E8 | Ordinal: 10473
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28F9 | Ordinal: 10490
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x2912 | Ordinal: 10515
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x292D | Ordinal: 10542
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2948 | Ordinal: 10569
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x295B | Ordinal: 10588
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x296E | Ordinal: 10607
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2989 | Ordinal: 10634
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x29A4 | Ordinal: 10661
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29A6 | Ordinal: 10663
        void glGetTextureImage(unsigned int, int, unsigned int, unsigned int, int, void *);

    // RVA: 0x29A8 | Ordinal: 10665
        void glGetTextureLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x29AA | Ordinal: 10667
        void glGetTextureLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x29AC | Ordinal: 10669
        void glGetTextureParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x29AE | Ordinal: 10671
        void glGetTextureParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x29B0 | Ordinal: 10673
        void glGetTextureParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x29B2 | Ordinal: 10675
        void glGetTextureParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29B4 | Ordinal: 10677
        void glGetTextureSubImage(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, int, void *);

    // RVA: 0x29C7 | Ordinal: 10696
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29C9 | Ordinal: 10698
        void glGetTransformFeedbacki64_v(unsigned int, unsigned int, unsigned int, __int64 *);

    // RVA: 0x29CB | Ordinal: 10700
        void glGetTransformFeedbacki_v(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x29CD | Ordinal: 10702
        void glGetTransformFeedbackiv(unsigned int, unsigned int, int *);

    // RVA: 0x29DF | Ordinal: 10720
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29F1 | Ordinal: 10738
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x2A06 | Ordinal: 10759
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A12 | Ordinal: 10771
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A1E | Ordinal: 10783
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A33 | Ordinal: 10804
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A48 | Ordinal: 10825
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A5B | Ordinal: 10844
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A5D | Ordinal: 10846
        void glGetVertexArrayIndexed64iv(unsigned int, unsigned int, unsigned int, __int64 *);

    // RVA: 0x2A5F | Ordinal: 10848
        void glGetVertexArrayIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2A61 | Ordinal: 10850
        void glGetVertexArrayiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A74 | Ordinal: 10869
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A87 | Ordinal: 10888
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A91 | Ordinal: 10898
        void glGetVertexAttribLdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AA6 | Ordinal: 10919
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2ABA | Ordinal: 10939
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2ACF | Ordinal: 10960
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AE4 | Ordinal: 10981
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2AE6 | Ordinal: 10983
        void glGetnColorTable(unsigned int, unsigned int, unsigned int, int, void *);

    // RVA: 0x2AE7 | Ordinal: 10984
        void glGetnCompressedTexImage(unsigned int, int, int, void *);

    // RVA: 0x2AE9 | Ordinal: 10986
        void glGetnConvolutionFilter(unsigned int, unsigned int, unsigned int, int, void *);

    // RVA: 0x2AEA | Ordinal: 10987
        void glGetnHistogram(unsigned int, unsigned char, unsigned int, unsigned int, int, void *);

    // RVA: 0x2AEB | Ordinal: 10988
        void glGetnMapdv(unsigned int, unsigned int, int, double *);

    // RVA: 0x2AEC | Ordinal: 10989
        void glGetnMapfv(unsigned int, unsigned int, int, float *);

    // RVA: 0x2AED | Ordinal: 10990
        void glGetnMapiv(unsigned int, unsigned int, int, int *);

    // RVA: 0x2AEE | Ordinal: 10991
        void glGetnMinmax(unsigned int, unsigned char, unsigned int, unsigned int, int, void *);

    // RVA: 0x2AEF | Ordinal: 10992
        void glGetnPixelMapfv(unsigned int, int, float *);

    // RVA: 0x2AF0 | Ordinal: 10993
        void glGetnPixelMapuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2AF1 | Ordinal: 10994
        void glGetnPixelMapusv(unsigned int, int, unsigned short *);

    // RVA: 0x2AF2 | Ordinal: 10995
        void glGetnPolygonStipple(int, unsigned char *);

    // RVA: 0x2AF3 | Ordinal: 10996
        void glGetnSeparableFilter(unsigned int, unsigned int, unsigned int, int, void *, int, void *, void *);

    // RVA: 0x2AF4 | Ordinal: 10997
        void glGetnTexImage(unsigned int, int, unsigned int, unsigned int, int, void *);

    // RVA: 0x2AF6 | Ordinal: 10999
        void glGetnUniformdv(unsigned int, int, int, double *);

    // RVA: 0x2AF9 | Ordinal: 11002
        void glGetnUniformfv(unsigned int, int, int, float *);

    // RVA: 0x2AFC | Ordinal: 11005
        void glGetnUniformiv(unsigned int, int, int, int *);

    // RVA: 0x2AFF | Ordinal: 11008
        void glGetnUniformuiv(unsigned int, int, int, unsigned int *);

    // RVA: 0x2B1A | Ordinal: 11035
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B2A | Ordinal: 11051
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B3B | Ordinal: 11068
        void glIndexMask(unsigned int);

    // RVA: 0x2B4B | Ordinal: 11084
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B5C | Ordinal: 11101
        void glIndexd(double);

    // RVA: 0x2B6D | Ordinal: 11118
        void glIndexdv(double const *);

    // RVA: 0x2B7E | Ordinal: 11135
        void glIndexf(float);

    // RVA: 0x2B8F | Ordinal: 11152
        void glIndexfv(float const *);

    // RVA: 0x2BA0 | Ordinal: 11169
        void glIndexi(int);

    // RVA: 0x2BB1 | Ordinal: 11186
        void glIndexiv(int const *);

    // RVA: 0x2BC2 | Ordinal: 11203
        void glIndexs(short);

    // RVA: 0x2BD3 | Ordinal: 11220
        void glIndexsv(short const *);

    // RVA: 0x2BEA | Ordinal: 11243
        void glIndexub(unsigned char);

    // RVA: 0x2C01 | Ordinal: 11266
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C12 | Ordinal: 11283
        void glInitNames(void);

    // RVA: 0x2C22 | Ordinal: 11299
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C28 | Ordinal: 11305
        void glInvalidateBufferData(unsigned int);

    // RVA: 0x2C2E | Ordinal: 11311
        void glInvalidateBufferSubData(unsigned int, __int64, __int64);

    // RVA: 0x2C35 | Ordinal: 11318
        void glInvalidateFramebuffer(unsigned int, int, unsigned int const *);

    // RVA: 0x2C37 | Ordinal: 11320
        void glInvalidateNamedFramebufferData(unsigned int, int, unsigned int const *);

    // RVA: 0x2C39 | Ordinal: 11322
        void glInvalidateNamedFramebufferSubData(unsigned int, int, unsigned int const *, int, int, int, int);

    // RVA: 0x2C40 | Ordinal: 11329
        void glInvalidateSubFramebuffer(unsigned int, int, unsigned int const *, int, int, int, int);

    // RVA: 0x2C46 | Ordinal: 11335
        void glInvalidateTexImage(unsigned int, int);

    // RVA: 0x2C4C | Ordinal: 11341
        void glInvalidateTexSubImage(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x2C62 | Ordinal: 11363
        void glIsBuffer(unsigned int);

    // RVA: 0x2C7D | Ordinal: 11390
        void glIsEnabled(unsigned int);

    // RVA: 0x2C90 | Ordinal: 11409
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2CA3 | Ordinal: 11428
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CB5 | Ordinal: 11446
        void glIsList(unsigned int);

    // RVA: 0x2CC9 | Ordinal: 11466
        void glIsProgram(unsigned int);

    // RVA: 0x2CD4 | Ordinal: 11477
        void glIsProgramPipeline(unsigned int);

    // RVA: 0x2CEA | Ordinal: 11499
        void glIsQuery(unsigned int);

    // RVA: 0x2CFD | Ordinal: 11518
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D0C | Ordinal: 11533
        void glIsSampler(unsigned int);

    // RVA: 0x2D21 | Ordinal: 11554
        void glIsShader(unsigned int);

    // RVA: 0x2D32 | Ordinal: 11571
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D4C | Ordinal: 11597
        void glIsTexture(unsigned int);

    // RVA: 0x2D59 | Ordinal: 11610
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D6C | Ordinal: 11629
        void glIsVertexArray(unsigned int);

    // RVA: 0x2D7E | Ordinal: 11647
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D8F | Ordinal: 11664
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2DA0 | Ordinal: 11681
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DB1 | Ordinal: 11698
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DC2 | Ordinal: 11715
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DD3 | Ordinal: 11732
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DE4 | Ordinal: 11749
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DF5 | Ordinal: 11766
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2E06 | Ordinal: 11783
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E20 | Ordinal: 11809
        void glLineWidth(float);

    // RVA: 0x2E35 | Ordinal: 11830
        void glLinkProgram(unsigned int);

    // RVA: 0x2E47 | Ordinal: 11848
        void glListBase(unsigned int);

    // RVA: 0x2E58 | Ordinal: 11865
        void glLoadIdentity(void);

    // RVA: 0x2E69 | Ordinal: 11882
        void glLoadMatrixd(double const *);

    // RVA: 0x2E7A | Ordinal: 11899
        void glLoadMatrixf(float const *);

    // RVA: 0x2E8B | Ordinal: 11916
        void glLoadName(unsigned int);

    // RVA: 0x2E99 | Ordinal: 11930
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2EA7 | Ordinal: 11944
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EC0 | Ordinal: 11969
        void glLogicOp(unsigned int);

    // RVA: 0x2ED2 | Ordinal: 11987
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2EE3 | Ordinal: 12004
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EF4 | Ordinal: 12021
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2F05 | Ordinal: 12038
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F1A | Ordinal: 12059
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F2D | Ordinal: 12078
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2F3F | Ordinal: 12096
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F50 | Ordinal: 12113
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F61 | Ordinal: 12130
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F72 | Ordinal: 12147
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F73 | Ordinal: 12148
        void glMapNamedBuffer(unsigned int, unsigned int);

    // RVA: 0x2F75 | Ordinal: 12150
        void glMapNamedBufferRange(unsigned int, __int64, int, unsigned int);

    // RVA: 0x2F87 | Ordinal: 12168
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F98 | Ordinal: 12185
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2FA9 | Ordinal: 12202
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FBA | Ordinal: 12219
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FCB | Ordinal: 12236
        void glMatrixMode(unsigned int);

    // RVA: 0x2FD3 | Ordinal: 12244
        void glMemoryBarrier(unsigned int);

    // RVA: 0x2FD6 | Ordinal: 12247
        void glMemoryBarrierByRegion(unsigned int);

    // RVA: 0x2FE3 | Ordinal: 12260
        void glMinSampleShading(float);

    // RVA: 0x2FF3 | Ordinal: 12276
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x3004 | Ordinal: 12293
        void glMultMatrixd(double const *);

    // RVA: 0x3015 | Ordinal: 12310
        void glMultMatrixf(float const *);

    // RVA: 0x3023 | Ordinal: 12324
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x3031 | Ordinal: 12338
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x3046 | Ordinal: 12359
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x304C | Ordinal: 12365
        void glMultiDrawArraysIndirect(unsigned int, void const *, int, int);

    // RVA: 0x3062 | Ordinal: 12387
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x3072 | Ordinal: 12403
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3078 | Ordinal: 12409
        void glMultiDrawElementsIndirect(unsigned int, unsigned int, void const *, int, int);

    // RVA: 0x3087 | Ordinal: 12424
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x3095 | Ordinal: 12438
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x30A3 | Ordinal: 12452
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30B1 | Ordinal: 12466
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30BF | Ordinal: 12480
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30CD | Ordinal: 12494
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30DB | Ordinal: 12508
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30E9 | Ordinal: 12522
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30F7 | Ordinal: 12536
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x3105 | Ordinal: 12550
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x3113 | Ordinal: 12564
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x3121 | Ordinal: 12578
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x312F | Ordinal: 12592
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x313D | Ordinal: 12606
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x314B | Ordinal: 12620
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x3159 | Ordinal: 12634
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x3167 | Ordinal: 12648
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x3175 | Ordinal: 12662
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x3183 | Ordinal: 12676
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x3191 | Ordinal: 12690
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x319F | Ordinal: 12704
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31AD | Ordinal: 12718
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31BB | Ordinal: 12732
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31C9 | Ordinal: 12746
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31D7 | Ordinal: 12760
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31E5 | Ordinal: 12774
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31F3 | Ordinal: 12788
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x3201 | Ordinal: 12802
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x320F | Ordinal: 12816
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x321D | Ordinal: 12830
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x322B | Ordinal: 12844
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x3239 | Ordinal: 12858
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x3245 | Ordinal: 12870
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3251 | Ordinal: 12882
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x325D | Ordinal: 12894
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3269 | Ordinal: 12906
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3275 | Ordinal: 12918
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3281 | Ordinal: 12930
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x328D | Ordinal: 12942
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3299 | Ordinal: 12954
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x329A | Ordinal: 12955
        void glNamedBufferData(unsigned int, int, void const *, unsigned int);

    // RVA: 0x329C | Ordinal: 12957
        void glNamedBufferStorage(unsigned int, int, void const *, unsigned int);

    // RVA: 0x329E | Ordinal: 12959
        void glNamedBufferSubData(unsigned int, __int64, int, void const *);

    // RVA: 0x32A0 | Ordinal: 12961
        void glNamedFramebufferDrawBuffer(unsigned int, unsigned int);

    // RVA: 0x32A2 | Ordinal: 12963
        void glNamedFramebufferDrawBuffers(unsigned int, int, unsigned int const *);

    // RVA: 0x32A4 | Ordinal: 12965
        void glNamedFramebufferParameteri(unsigned int, unsigned int, int);

    // RVA: 0x32A6 | Ordinal: 12967
        void glNamedFramebufferReadBuffer(unsigned int, unsigned int);

    // RVA: 0x32A8 | Ordinal: 12969
        void glNamedFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x32AA | Ordinal: 12971
        void glNamedFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x32AC | Ordinal: 12973
        void glNamedFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x32AE | Ordinal: 12975
        void glNamedRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x32B0 | Ordinal: 12977
        void glNamedRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x32C2 | Ordinal: 12995
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32D3 | Ordinal: 13012
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32E4 | Ordinal: 13029
        void glNormal3bv(signed char const *);

    // RVA: 0x32F5 | Ordinal: 13046
        void glNormal3d(double, double, double);

    // RVA: 0x3306 | Ordinal: 13063
        void glNormal3dv(double const *);

    // RVA: 0x3317 | Ordinal: 13080
        void glNormal3f(float, float, float);

    // RVA: 0x3328 | Ordinal: 13097
        void glNormal3fv(float const *);

    // RVA: 0x3339 | Ordinal: 13114
        void glNormal3i(int, int, int);

    // RVA: 0x334A | Ordinal: 13131
        void glNormal3iv(int const *);

    // RVA: 0x335B | Ordinal: 13148
        void glNormal3s(short, short, short);

    // RVA: 0x336C | Ordinal: 13165
        void glNormal3sv(short const *);

    // RVA: 0x3378 | Ordinal: 13177
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x3384 | Ordinal: 13189
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3394 | Ordinal: 13205
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x3398 | Ordinal: 13209
        void glObjectLabel(unsigned int, unsigned int, int, char const *);

    // RVA: 0x339D | Ordinal: 13214
        void glObjectPtrLabel(void const *, int, char const *);

    // RVA: 0x33AF | Ordinal: 13232
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33C0 | Ordinal: 13249
        void glPassThrough(float);

    // RVA: 0x33CB | Ordinal: 13260
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33D8 | Ordinal: 13273
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33E5 | Ordinal: 13286
        void glPauseTransformFeedback(void);

    // RVA: 0x33F7 | Ordinal: 13304
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x3408 | Ordinal: 13321
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x3419 | Ordinal: 13338
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x3432 | Ordinal: 13363
        void glPixelStoref(unsigned int, float);

    // RVA: 0x344D | Ordinal: 13390
        void glPixelStorei(unsigned int, int);

    // RVA: 0x345F | Ordinal: 13408
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x3470 | Ordinal: 13425
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x3481 | Ordinal: 13442
        void glPixelZoom(float, float);

    // RVA: 0x3496 | Ordinal: 13463
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34AC | Ordinal: 13485
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34C2 | Ordinal: 13507
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34D8 | Ordinal: 13529
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34F2 | Ordinal: 13555
        void glPointSize(float);

    // RVA: 0x350C | Ordinal: 13581
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3526 | Ordinal: 13607
        void glPolygonOffset(float, float);

    // RVA: 0x3538 | Ordinal: 13625
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x3549 | Ordinal: 13642
        void glPopAttrib(void);

    // RVA: 0x3559 | Ordinal: 13658
        void glPopClientAttrib(void);

    // RVA: 0x355D | Ordinal: 13662
        void glPopDebugGroup(void);

    // RVA: 0x356F | Ordinal: 13680
        void glPopMatrix(void);

    // RVA: 0x3580 | Ordinal: 13697
        void glPopName(void);

    // RVA: 0x3591 | Ordinal: 13714
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x35A2 | Ordinal: 13731
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x35AC | Ordinal: 13741
        void glProgramBinary(unsigned int, unsigned int, void const *, int);

    // RVA: 0x35B7 | Ordinal: 13752
        void glProgramParameteri(unsigned int, unsigned int, int);

    // RVA: 0x35C1 | Ordinal: 13762
        void glProgramUniform1d(unsigned int, int, double);

    // RVA: 0x35CB | Ordinal: 13772
        void glProgramUniform1dv(unsigned int, int, int, double const *);

    // RVA: 0x35D6 | Ordinal: 13783
        void glProgramUniform1f(unsigned int, int, float);

    // RVA: 0x35E1 | Ordinal: 13794
        void glProgramUniform1fv(unsigned int, int, int, float const *);

    // RVA: 0x35EC | Ordinal: 13805
        void glProgramUniform1i(unsigned int, int, int);

    // RVA: 0x35F7 | Ordinal: 13816
        void glProgramUniform1iv(unsigned int, int, int, int const *);

    // RVA: 0x3602 | Ordinal: 13827
        void glProgramUniform1ui(unsigned int, int, unsigned int);

    // RVA: 0x360D | Ordinal: 13838
        void glProgramUniform1uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3617 | Ordinal: 13848
        void glProgramUniform2d(unsigned int, int, double, double);

    // RVA: 0x3621 | Ordinal: 13858
        void glProgramUniform2dv(unsigned int, int, int, double const *);

    // RVA: 0x362C | Ordinal: 13869
        void glProgramUniform2f(unsigned int, int, float, float);

    // RVA: 0x3637 | Ordinal: 13880
        void glProgramUniform2fv(unsigned int, int, int, float const *);

    // RVA: 0x3642 | Ordinal: 13891
        void glProgramUniform2i(unsigned int, int, int, int);

    // RVA: 0x364D | Ordinal: 13902
        void glProgramUniform2iv(unsigned int, int, int, int const *);

    // RVA: 0x3658 | Ordinal: 13913
        void glProgramUniform2ui(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x3663 | Ordinal: 13924
        void glProgramUniform2uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x366D | Ordinal: 13934
        void glProgramUniform3d(unsigned int, int, double, double, double);

    // RVA: 0x3677 | Ordinal: 13944
        void glProgramUniform3dv(unsigned int, int, int, double const *);

    // RVA: 0x3682 | Ordinal: 13955
        void glProgramUniform3f(unsigned int, int, float, float, float);

    // RVA: 0x368D | Ordinal: 13966
        void glProgramUniform3fv(unsigned int, int, int, float const *);

    // RVA: 0x3698 | Ordinal: 13977
        void glProgramUniform3i(unsigned int, int, int, int, int);

    // RVA: 0x36A3 | Ordinal: 13988
        void glProgramUniform3iv(unsigned int, int, int, int const *);

    // RVA: 0x36AE | Ordinal: 13999
        void glProgramUniform3ui(unsigned int, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x36B9 | Ordinal: 14010
        void glProgramUniform3uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x36C3 | Ordinal: 14020
        void glProgramUniform4d(unsigned int, int, double, double, double, double);

    // RVA: 0x36CD | Ordinal: 14030
        void glProgramUniform4dv(unsigned int, int, int, double const *);

    // RVA: 0x36D8 | Ordinal: 14041
        void glProgramUniform4f(unsigned int, int, float, float, float, float);

    // RVA: 0x36E3 | Ordinal: 14052
        void glProgramUniform4fv(unsigned int, int, int, float const *);

    // RVA: 0x36EE | Ordinal: 14063
        void glProgramUniform4i(unsigned int, int, int, int, int, int);

    // RVA: 0x36F9 | Ordinal: 14074
        void glProgramUniform4iv(unsigned int, int, int, int const *);

    // RVA: 0x3704 | Ordinal: 14085
        void glProgramUniform4ui(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x370F | Ordinal: 14096
        void glProgramUniform4uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3719 | Ordinal: 14106
        void glProgramUniformMatrix2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3724 | Ordinal: 14117
        void glProgramUniformMatrix2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x372E | Ordinal: 14127
        void glProgramUniformMatrix2x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3739 | Ordinal: 14138
        void glProgramUniformMatrix2x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3743 | Ordinal: 14148
        void glProgramUniformMatrix2x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x374E | Ordinal: 14159
        void glProgramUniformMatrix2x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3758 | Ordinal: 14169
        void glProgramUniformMatrix3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3763 | Ordinal: 14180
        void glProgramUniformMatrix3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x376D | Ordinal: 14190
        void glProgramUniformMatrix3x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3778 | Ordinal: 14201
        void glProgramUniformMatrix3x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3782 | Ordinal: 14211
        void glProgramUniformMatrix3x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x378D | Ordinal: 14222
        void glProgramUniformMatrix3x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3797 | Ordinal: 14232
        void glProgramUniformMatrix4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37A2 | Ordinal: 14243
        void glProgramUniformMatrix4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37AC | Ordinal: 14253
        void glProgramUniformMatrix4x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37B7 | Ordinal: 14264
        void glProgramUniformMatrix4x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37C1 | Ordinal: 14274
        void glProgramUniformMatrix4x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37CC | Ordinal: 14285
        void glProgramUniformMatrix4x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37DC | Ordinal: 14301
        void glProvokingVertex(unsigned int);

    // RVA: 0x37EE | Ordinal: 14319
        void glPushAttrib(unsigned int);

    // RVA: 0x37FE | Ordinal: 14335
        void glPushClientAttrib(unsigned int);

    // RVA: 0x3802 | Ordinal: 14339
        void glPushDebugGroup(unsigned int, unsigned int, int, char const *);

    // RVA: 0x3814 | Ordinal: 14357
        void glPushMatrix(void);

    // RVA: 0x3825 | Ordinal: 14374
        void glPushName(unsigned int);

    // RVA: 0x3832 | Ordinal: 14387
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x3844 | Ordinal: 14405
        void glRasterPos2d(double, double);

    // RVA: 0x3855 | Ordinal: 14422
        void glRasterPos2dv(double const *);

    // RVA: 0x3866 | Ordinal: 14439
        void glRasterPos2f(float, float);

    // RVA: 0x3877 | Ordinal: 14456
        void glRasterPos2fv(float const *);

    // RVA: 0x3888 | Ordinal: 14473
        void glRasterPos2i(int, int);

    // RVA: 0x3899 | Ordinal: 14490
        void glRasterPos2iv(int const *);

    // RVA: 0x38AA | Ordinal: 14507
        void glRasterPos2s(short, short);

    // RVA: 0x38BB | Ordinal: 14524
        void glRasterPos2sv(short const *);

    // RVA: 0x38CC | Ordinal: 14541
        void glRasterPos3d(double, double, double);

    // RVA: 0x38DD | Ordinal: 14558
        void glRasterPos3dv(double const *);

    // RVA: 0x38EE | Ordinal: 14575
        void glRasterPos3f(float, float, float);

    // RVA: 0x38FF | Ordinal: 14592
        void glRasterPos3fv(float const *);

    // RVA: 0x3910 | Ordinal: 14609
        void glRasterPos3i(int, int, int);

    // RVA: 0x3921 | Ordinal: 14626
        void glRasterPos3iv(int const *);

    // RVA: 0x3932 | Ordinal: 14643
        void glRasterPos3s(short, short, short);

    // RVA: 0x3943 | Ordinal: 14660
        void glRasterPos3sv(short const *);

    // RVA: 0x3954 | Ordinal: 14677
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x3965 | Ordinal: 14694
        void glRasterPos4dv(double const *);

    // RVA: 0x3976 | Ordinal: 14711
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x3987 | Ordinal: 14728
        void glRasterPos4fv(float const *);

    // RVA: 0x3998 | Ordinal: 14745
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x39A9 | Ordinal: 14762
        void glRasterPos4iv(int const *);

    // RVA: 0x39BA | Ordinal: 14779
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39CB | Ordinal: 14796
        void glRasterPos4sv(short const *);

    // RVA: 0x39E5 | Ordinal: 14822
        void glReadBuffer(unsigned int);

    // RVA: 0x3A00 | Ordinal: 14849
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A03 | Ordinal: 14852
        void glReadnPixels(int, int, int, int, unsigned int, unsigned int, int, void *);

    // RVA: 0x3A15 | Ordinal: 14870
        void glRectd(double, double, double, double);

    // RVA: 0x3A26 | Ordinal: 14887
        void glRectdv(double const *, double const *);

    // RVA: 0x3A37 | Ordinal: 14904
        void glRectf(float, float, float, float);

    // RVA: 0x3A48 | Ordinal: 14921
        void glRectfv(float const *, float const *);

    // RVA: 0x3A59 | Ordinal: 14938
        void glRecti(int, int, int, int);

    // RVA: 0x3A6A | Ordinal: 14955
        void glRectiv(int const *, int const *);

    // RVA: 0x3A7B | Ordinal: 14972
        void glRects(short, short, short, short);

    // RVA: 0x3A8C | Ordinal: 14989
        void glRectsv(short const *, short const *);

    // RVA: 0x3A96 | Ordinal: 14999
        void glReleaseShaderCompiler(void);

    // RVA: 0x3AA8 | Ordinal: 15017
        void glRenderMode(unsigned int);

    // RVA: 0x3ABA | Ordinal: 15035
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3ACD | Ordinal: 15054
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3ADD | Ordinal: 15070
        void glResetHistogram(unsigned int);

    // RVA: 0x3AEC | Ordinal: 15085
        void glResetMinmax(unsigned int);

    // RVA: 0x3AF8 | Ordinal: 15097
        void glResumeTransformFeedback(void);

    // RVA: 0x3B0A | Ordinal: 15115
        void glRotated(double, double, double, double);

    // RVA: 0x3B1B | Ordinal: 15132
        void glRotatef(float, float, float, float);

    // RVA: 0x3B32 | Ordinal: 15155
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B43 | Ordinal: 15172
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B52 | Ordinal: 15187
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B61 | Ordinal: 15202
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B70 | Ordinal: 15217
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B7F | Ordinal: 15232
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B8E | Ordinal: 15247
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B9D | Ordinal: 15262
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BAF | Ordinal: 15280
        void glScaled(double, double, double);

    // RVA: 0x3BC0 | Ordinal: 15297
        void glScalef(float, float, float);

    // RVA: 0x3BDA | Ordinal: 15323
        void glScissor(int, int, int, int);

    // RVA: 0x3BE4 | Ordinal: 15333
        void glScissorArrayv(unsigned int, int, int const *);

    // RVA: 0x3BEE | Ordinal: 15343
        void glScissorIndexed(unsigned int, int, int, int, int);

    // RVA: 0x3BF8 | Ordinal: 15353
        void glScissorIndexedv(unsigned int, int const *);

    // RVA: 0x3C06 | Ordinal: 15367
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C13 | Ordinal: 15380
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C20 | Ordinal: 15393
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C2D | Ordinal: 15406
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C3A | Ordinal: 15419
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C47 | Ordinal: 15432
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C54 | Ordinal: 15445
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C61 | Ordinal: 15458
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C6E | Ordinal: 15471
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C7B | Ordinal: 15484
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C88 | Ordinal: 15497
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C95 | Ordinal: 15510
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3CA2 | Ordinal: 15523
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CAF | Ordinal: 15536
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CBC | Ordinal: 15549
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CC9 | Ordinal: 15562
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CD5 | Ordinal: 15574
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CE1 | Ordinal: 15586
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3CEE | Ordinal: 15599
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CFF | Ordinal: 15616
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D0E | Ordinal: 15631
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D1F | Ordinal: 15648
        void glShadeModel(unsigned int);

    // RVA: 0x3D29 | Ordinal: 15658
        void glShaderBinary(int, unsigned int const *, unsigned int, void const *, int);

    // RVA: 0x3D3E | Ordinal: 15679
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D44 | Ordinal: 15685
        void glShaderStorageBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3D5F | Ordinal: 15712
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D74 | Ordinal: 15733
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D8F | Ordinal: 15760
        void glStencilMask(unsigned int);

    // RVA: 0x3DA4 | Ordinal: 15781
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DBF | Ordinal: 15808
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DD4 | Ordinal: 15829
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DE6 | Ordinal: 15847
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DED | Ordinal: 15854
        void glTexBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x3DFF | Ordinal: 15872
        void glTexCoord1d(double);

    // RVA: 0x3E10 | Ordinal: 15889
        void glTexCoord1dv(double const *);

    // RVA: 0x3E21 | Ordinal: 15906
        void glTexCoord1f(float);

    // RVA: 0x3E32 | Ordinal: 15923
        void glTexCoord1fv(float const *);

    // RVA: 0x3E43 | Ordinal: 15940
        void glTexCoord1i(int);

    // RVA: 0x3E54 | Ordinal: 15957
        void glTexCoord1iv(int const *);

    // RVA: 0x3E65 | Ordinal: 15974
        void glTexCoord1s(short);

    // RVA: 0x3E76 | Ordinal: 15991
        void glTexCoord1sv(short const *);

    // RVA: 0x3E87 | Ordinal: 16008
        void glTexCoord2d(double, double);

    // RVA: 0x3E98 | Ordinal: 16025
        void glTexCoord2dv(double const *);

    // RVA: 0x3EA9 | Ordinal: 16042
        void glTexCoord2f(float, float);

    // RVA: 0x3EBA | Ordinal: 16059
        void glTexCoord2fv(float const *);

    // RVA: 0x3ECB | Ordinal: 16076
        void glTexCoord2i(int, int);

    // RVA: 0x3EDC | Ordinal: 16093
        void glTexCoord2iv(int const *);

    // RVA: 0x3EED | Ordinal: 16110
        void glTexCoord2s(short, short);

    // RVA: 0x3EFE | Ordinal: 16127
        void glTexCoord2sv(short const *);

    // RVA: 0x3F0F | Ordinal: 16144
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F20 | Ordinal: 16161
        void glTexCoord3dv(double const *);

    // RVA: 0x3F31 | Ordinal: 16178
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F42 | Ordinal: 16195
        void glTexCoord3fv(float const *);

    // RVA: 0x3F53 | Ordinal: 16212
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F64 | Ordinal: 16229
        void glTexCoord3iv(int const *);

    // RVA: 0x3F75 | Ordinal: 16246
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F86 | Ordinal: 16263
        void glTexCoord3sv(short const *);

    // RVA: 0x3F97 | Ordinal: 16280
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3FA8 | Ordinal: 16297
        void glTexCoord4dv(double const *);

    // RVA: 0x3FB9 | Ordinal: 16314
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FCA | Ordinal: 16331
        void glTexCoord4fv(float const *);

    // RVA: 0x3FDB | Ordinal: 16348
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FEC | Ordinal: 16365
        void glTexCoord4iv(int const *);

    // RVA: 0x3FFD | Ordinal: 16382
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x400E | Ordinal: 16399
        void glTexCoord4sv(short const *);

    // RVA: 0x401A | Ordinal: 16411
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x4026 | Ordinal: 16423
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4032 | Ordinal: 16435
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x403E | Ordinal: 16447
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x404A | Ordinal: 16459
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x4056 | Ordinal: 16471
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4062 | Ordinal: 16483
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x406E | Ordinal: 16495
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x407E | Ordinal: 16511
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x408F | Ordinal: 16528
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x40A0 | Ordinal: 16545
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40B1 | Ordinal: 16562
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40C2 | Ordinal: 16579
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40D3 | Ordinal: 16596
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40E4 | Ordinal: 16613
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40F5 | Ordinal: 16630
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x4106 | Ordinal: 16647
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4117 | Ordinal: 16664
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x4128 | Ordinal: 16681
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x4141 | Ordinal: 16706
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x415C | Ordinal: 16733
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x416C | Ordinal: 16749
        void glTexImage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x4185 | Ordinal: 16774
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4195 | Ordinal: 16790
        void glTexImage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x41A8 | Ordinal: 16809
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41BB | Ordinal: 16828
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41D6 | Ordinal: 16855
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41F1 | Ordinal: 16882
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x420C | Ordinal: 16909
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4227 | Ordinal: 16936
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x422F | Ordinal: 16944
        void glTexStorage1D(unsigned int, int, unsigned int, int);

    // RVA: 0x4238 | Ordinal: 16953
        void glTexStorage2D(unsigned int, int, unsigned int, int, int);

    // RVA: 0x423F | Ordinal: 16960
        void glTexStorage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x4248 | Ordinal: 16969
        void glTexStorage3D(unsigned int, int, unsigned int, int, int, int);

    // RVA: 0x424F | Ordinal: 16976
        void glTexStorage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x4268 | Ordinal: 17001
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4282 | Ordinal: 17027
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x429B | Ordinal: 17052
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x429D | Ordinal: 17054
        void glTextureBarrier(void);

    // RVA: 0x429F | Ordinal: 17056
        void glTextureBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x42A1 | Ordinal: 17058
        void glTextureBufferRange(unsigned int, unsigned int, unsigned int, __int64, int);

    // RVA: 0x42A3 | Ordinal: 17060
        void glTextureParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x42A5 | Ordinal: 17062
        void glTextureParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x42A7 | Ordinal: 17064
        void glTextureParameterf(unsigned int, unsigned int, float);

    // RVA: 0x42A9 | Ordinal: 17066
        void glTextureParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x42AB | Ordinal: 17068
        void glTextureParameteri(unsigned int, unsigned int, int);

    // RVA: 0x42AD | Ordinal: 17070
        void glTextureParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x42AF | Ordinal: 17072
        void glTextureStorage1D(unsigned int, int, unsigned int, int);

    // RVA: 0x42B1 | Ordinal: 17074
        void glTextureStorage2D(unsigned int, int, unsigned int, int, int);

    // RVA: 0x42B3 | Ordinal: 17076
        void glTextureStorage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x42B5 | Ordinal: 17078
        void glTextureStorage3D(unsigned int, int, unsigned int, int, int, int);

    // RVA: 0x42B7 | Ordinal: 17080
        void glTextureStorage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x42B9 | Ordinal: 17082
        void glTextureSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42BB | Ordinal: 17084
        void glTextureSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42BD | Ordinal: 17086
        void glTextureSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42C3 | Ordinal: 17092
        void glTextureView(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x42C5 | Ordinal: 17094
        void glTransformFeedbackBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x42C7 | Ordinal: 17096
        void glTransformFeedbackBufferRange(unsigned int, unsigned int, unsigned int, __int64, int);

    // RVA: 0x42DA | Ordinal: 17115
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x42EC | Ordinal: 17133
        void glTranslated(double, double, double);

    // RVA: 0x42FD | Ordinal: 17150
        void glTranslatef(float, float, float);

    // RVA: 0x4308 | Ordinal: 17161
        void glUniform1d(int, double);

    // RVA: 0x4314 | Ordinal: 17173
        void glUniform1dv(int, int, double const *);

    // RVA: 0x4329 | Ordinal: 17194
        void glUniform1f(int, float);

    // RVA: 0x433E | Ordinal: 17215
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4353 | Ordinal: 17236
        void glUniform1i(int, int);

    // RVA: 0x4368 | Ordinal: 17257
        void glUniform1iv(int, int, int const *);

    // RVA: 0x437B | Ordinal: 17276
        void glUniform1ui(int, unsigned int);

    // RVA: 0x438E | Ordinal: 17295
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x439A | Ordinal: 17307
        void glUniform2d(int, double, double);

    // RVA: 0x43A6 | Ordinal: 17319
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43BB | Ordinal: 17340
        void glUniform2f(int, float, float);

    // RVA: 0x43D0 | Ordinal: 17361
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43E5 | Ordinal: 17382
        void glUniform2i(int, int, int);

    // RVA: 0x43FA | Ordinal: 17403
        void glUniform2iv(int, int, int const *);

    // RVA: 0x440D | Ordinal: 17422
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x4420 | Ordinal: 17441
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x442C | Ordinal: 17453
        void glUniform3d(int, double, double, double);

    // RVA: 0x4438 | Ordinal: 17465
        void glUniform3dv(int, int, double const *);

    // RVA: 0x444D | Ordinal: 17486
        void glUniform3f(int, float, float, float);

    // RVA: 0x4462 | Ordinal: 17507
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4477 | Ordinal: 17528
        void glUniform3i(int, int, int, int);

    // RVA: 0x448C | Ordinal: 17549
        void glUniform3iv(int, int, int const *);

    // RVA: 0x449F | Ordinal: 17568
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44B2 | Ordinal: 17587
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44BE | Ordinal: 17599
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44CA | Ordinal: 17611
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44DF | Ordinal: 17632
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44F4 | Ordinal: 17653
        void glUniform4fv(int, int, float const *);

    // RVA: 0x4509 | Ordinal: 17674
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x451E | Ordinal: 17695
        void glUniform4iv(int, int, int const *);

    // RVA: 0x4531 | Ordinal: 17714
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4544 | Ordinal: 17733
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4556 | Ordinal: 17751
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4562 | Ordinal: 17763
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x4577 | Ordinal: 17784
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x4583 | Ordinal: 17796
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4597 | Ordinal: 17816
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45A3 | Ordinal: 17828
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45B7 | Ordinal: 17848
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45C3 | Ordinal: 17860
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45D8 | Ordinal: 17881
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45E4 | Ordinal: 17893
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45F8 | Ordinal: 17913
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4604 | Ordinal: 17925
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x4618 | Ordinal: 17945
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x4624 | Ordinal: 17957
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x4639 | Ordinal: 17978
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x4645 | Ordinal: 17990
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x4659 | Ordinal: 18010
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4665 | Ordinal: 18022
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4679 | Ordinal: 18042
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x4685 | Ordinal: 18054
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x469B | Ordinal: 18076
        void glUnmapBuffer(unsigned int);

    // RVA: 0x469D | Ordinal: 18078
        void glUnmapNamedBuffer(unsigned int);

    // RVA: 0x46B2 | Ordinal: 18099
        void glUseProgram(unsigned int);

    // RVA: 0x46BD | Ordinal: 18110
        void glUseProgramStages(unsigned int, unsigned int, unsigned int);

    // RVA: 0x46D2 | Ordinal: 18131
        void glValidateProgram(unsigned int);

    // RVA: 0x46DD | Ordinal: 18142
        void glValidateProgramPipeline(unsigned int);

    // RVA: 0x46EF | Ordinal: 18160
        void glVertex2d(double, double);

    // RVA: 0x4700 | Ordinal: 18177
        void glVertex2dv(double const *);

    // RVA: 0x4711 | Ordinal: 18194
        void glVertex2f(float, float);

    // RVA: 0x4722 | Ordinal: 18211
        void glVertex2fv(float const *);

    // RVA: 0x4733 | Ordinal: 18228
        void glVertex2i(int, int);

    // RVA: 0x4744 | Ordinal: 18245
        void glVertex2iv(int const *);

    // RVA: 0x4755 | Ordinal: 18262
        void glVertex2s(short, short);

    // RVA: 0x4766 | Ordinal: 18279
        void glVertex2sv(short const *);

    // RVA: 0x4777 | Ordinal: 18296
        void glVertex3d(double, double, double);

    // RVA: 0x4788 | Ordinal: 18313
        void glVertex3dv(double const *);

    // RVA: 0x4799 | Ordinal: 18330
        void glVertex3f(float, float, float);

    // RVA: 0x47AA | Ordinal: 18347
        void glVertex3fv(float const *);

    // RVA: 0x47BB | Ordinal: 18364
        void glVertex3i(int, int, int);

    // RVA: 0x47CC | Ordinal: 18381
        void glVertex3iv(int const *);

    // RVA: 0x47DD | Ordinal: 18398
        void glVertex3s(short, short, short);

    // RVA: 0x47EE | Ordinal: 18415
        void glVertex3sv(short const *);

    // RVA: 0x47FF | Ordinal: 18432
        void glVertex4d(double, double, double, double);

    // RVA: 0x4810 | Ordinal: 18449
        void glVertex4dv(double const *);

    // RVA: 0x4821 | Ordinal: 18466
        void glVertex4f(float, float, float, float);

    // RVA: 0x4832 | Ordinal: 18483
        void glVertex4fv(float const *);

    // RVA: 0x4843 | Ordinal: 18500
        void glVertex4i(int, int, int, int);

    // RVA: 0x4854 | Ordinal: 18517
        void glVertex4iv(int const *);

    // RVA: 0x4865 | Ordinal: 18534
        void glVertex4s(short, short, short, short);

    // RVA: 0x4876 | Ordinal: 18551
        void glVertex4sv(short const *);

    // RVA: 0x4877 | Ordinal: 18552
        void glVertexArrayAttribBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4879 | Ordinal: 18554
        void glVertexArrayAttribFormat(unsigned int, unsigned int, int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x487B | Ordinal: 18556
        void glVertexArrayAttribIFormat(unsigned int, unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x487D | Ordinal: 18558
        void glVertexArrayAttribLFormat(unsigned int, unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x487F | Ordinal: 18560
        void glVertexArrayBindingDivisor(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4881 | Ordinal: 18562
        void glVertexArrayElementBuffer(unsigned int, unsigned int);

    // RVA: 0x4883 | Ordinal: 18564
        void glVertexArrayVertexBuffer(unsigned int, unsigned int, unsigned int, __int64, int);

    // RVA: 0x4885 | Ordinal: 18566
        void glVertexArrayVertexBuffers(unsigned int, unsigned int, int, unsigned int const *, __int64 const *, int const *);

    // RVA: 0x4892 | Ordinal: 18579
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x489F | Ordinal: 18592
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48AD | Ordinal: 18606
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48BB | Ordinal: 18620
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48C8 | Ordinal: 18633
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48D5 | Ordinal: 18646
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48E2 | Ordinal: 18659
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48EF | Ordinal: 18672
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48FD | Ordinal: 18686
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x490B | Ordinal: 18700
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x4918 | Ordinal: 18713
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x4925 | Ordinal: 18726
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x4932 | Ordinal: 18739
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x493F | Ordinal: 18752
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x494D | Ordinal: 18766
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x495B | Ordinal: 18780
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x4968 | Ordinal: 18793
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x4975 | Ordinal: 18806
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x4982 | Ordinal: 18819
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x498F | Ordinal: 18832
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x499C | Ordinal: 18845
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x49A9 | Ordinal: 18858
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49B6 | Ordinal: 18871
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49C3 | Ordinal: 18884
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49D0 | Ordinal: 18897
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49DD | Ordinal: 18910
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49EA | Ordinal: 18923
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49F7 | Ordinal: 18936
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x4A05 | Ordinal: 18950
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A13 | Ordinal: 18964
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A20 | Ordinal: 18977
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A2D | Ordinal: 18990
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A3A | Ordinal: 19003
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A47 | Ordinal: 19016
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A54 | Ordinal: 19029
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A61 | Ordinal: 19042
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4A68 | Ordinal: 19049
        void glVertexAttribBinding(unsigned int, unsigned int);

    // RVA: 0x4A77 | Ordinal: 19064
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4A7E | Ordinal: 19071
        void glVertexAttribFormat(unsigned int, int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4A89 | Ordinal: 19082
        void glVertexAttribI1i(unsigned int, int);

    // RVA: 0x4A94 | Ordinal: 19093
        void glVertexAttribI1iv(unsigned int, int const *);

    // RVA: 0x4A9F | Ordinal: 19104
        void glVertexAttribI1ui(unsigned int, unsigned int);

    // RVA: 0x4AAA | Ordinal: 19115
        void glVertexAttribI1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AB5 | Ordinal: 19126
        void glVertexAttribI2i(unsigned int, int, int);

    // RVA: 0x4AC0 | Ordinal: 19137
        void glVertexAttribI2iv(unsigned int, int const *);

    // RVA: 0x4ACB | Ordinal: 19148
        void glVertexAttribI2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AD6 | Ordinal: 19159
        void glVertexAttribI2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AE1 | Ordinal: 19170
        void glVertexAttribI3i(unsigned int, int, int, int);

    // RVA: 0x4AEC | Ordinal: 19181
        void glVertexAttribI3iv(unsigned int, int const *);

    // RVA: 0x4AF7 | Ordinal: 19192
        void glVertexAttribI3ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B02 | Ordinal: 19203
        void glVertexAttribI3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B0D | Ordinal: 19214
        void glVertexAttribI4bv(unsigned int, signed char const *);

    // RVA: 0x4B19 | Ordinal: 19226
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B25 | Ordinal: 19238
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B30 | Ordinal: 19249
        void glVertexAttribI4sv(unsigned int, short const *);

    // RVA: 0x4B3B | Ordinal: 19260
        void glVertexAttribI4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4B47 | Ordinal: 19272
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B53 | Ordinal: 19284
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B5E | Ordinal: 19295
        void glVertexAttribI4usv(unsigned int, unsigned short const *);

    // RVA: 0x4B65 | Ordinal: 19302
        void glVertexAttribIFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4B78 | Ordinal: 19321
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4B82 | Ordinal: 19331
        void glVertexAttribL1d(unsigned int, double);

    // RVA: 0x4B8C | Ordinal: 19341
        void glVertexAttribL1dv(unsigned int, double const *);

    // RVA: 0x4B96 | Ordinal: 19351
        void glVertexAttribL2d(unsigned int, double, double);

    // RVA: 0x4BA0 | Ordinal: 19361
        void glVertexAttribL2dv(unsigned int, double const *);

    // RVA: 0x4BAA | Ordinal: 19371
        void glVertexAttribL3d(unsigned int, double, double, double);

    // RVA: 0x4BB4 | Ordinal: 19381
        void glVertexAttribL3dv(unsigned int, double const *);

    // RVA: 0x4BBE | Ordinal: 19391
        void glVertexAttribL4d(unsigned int, double, double, double, double);

    // RVA: 0x4BC8 | Ordinal: 19401
        void glVertexAttribL4dv(unsigned int, double const *);

    // RVA: 0x4BCE | Ordinal: 19407
        void glVertexAttribLFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4BD8 | Ordinal: 19417
        void glVertexAttribLPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BE6 | Ordinal: 19431
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BF4 | Ordinal: 19445
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C02 | Ordinal: 19459
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C10 | Ordinal: 19473
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C1E | Ordinal: 19487
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C2C | Ordinal: 19501
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C3A | Ordinal: 19515
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C48 | Ordinal: 19529
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C5D | Ordinal: 19550
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C64 | Ordinal: 19557
        void glVertexBindingDivisor(unsigned int, unsigned int);

    // RVA: 0x4C71 | Ordinal: 19570
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C7D | Ordinal: 19582
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C89 | Ordinal: 19594
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C95 | Ordinal: 19606
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CA1 | Ordinal: 19618
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CAD | Ordinal: 19630
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CBD | Ordinal: 19646
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CD7 | Ordinal: 19672
        void glViewport(int, int, int, int);

    // RVA: 0x4CE1 | Ordinal: 19682
        void glViewportArrayv(unsigned int, int, float const *);

    // RVA: 0x4CEB | Ordinal: 19692
        void glViewportIndexedf(unsigned int, float, float, float, float);

    // RVA: 0x4CF5 | Ordinal: 19702
        void glViewportIndexedfv(unsigned int, float const *);

    // RVA: 0x4D06 | Ordinal: 19719
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4D14 | Ordinal: 19733
        void glWindowPos2d(double, double);

    // RVA: 0x4D21 | Ordinal: 19746
        void glWindowPos2dv(double const *);

    // RVA: 0x4D2E | Ordinal: 19759
        void glWindowPos2f(float, float);

    // RVA: 0x4D3B | Ordinal: 19772
        void glWindowPos2fv(float const *);

    // RVA: 0x4D48 | Ordinal: 19785
        void glWindowPos2i(int, int);

    // RVA: 0x4D55 | Ordinal: 19798
        void glWindowPos2iv(int const *);

    // RVA: 0x4D62 | Ordinal: 19811
        void glWindowPos2s(short, short);

    // RVA: 0x4D6F | Ordinal: 19824
        void glWindowPos2sv(short const *);

    // RVA: 0x4D7C | Ordinal: 19837
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D89 | Ordinal: 19850
        void glWindowPos3dv(double const *);

    // RVA: 0x4D96 | Ordinal: 19863
        void glWindowPos3f(float, float, float);

    // RVA: 0x4DA3 | Ordinal: 19876
        void glWindowPos3fv(float const *);

    // RVA: 0x4DB0 | Ordinal: 19889
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DBD | Ordinal: 19902
        void glWindowPos3iv(int const *);

    // RVA: 0x4DCA | Ordinal: 19915
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DD7 | Ordinal: 19928
        void glWindowPos3sv(short const *);

    // RVA: 0x4F32 | Ordinal: 20275
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FF4 | Ordinal: 20469
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6118 | Ordinal: 24857
        void versionProfile(void);

    // RVA: 0x495 | Ordinal: 1174
        void _QOpenGLFunctions_4_5_Compatibility(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_5_COMPATIBILITY_HPP
