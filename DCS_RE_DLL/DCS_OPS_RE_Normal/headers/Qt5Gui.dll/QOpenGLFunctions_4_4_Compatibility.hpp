#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLFunctions_4_4_Compatibility
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLFunctions_4_4_Compatibility
{
public:

    // RVA: 0x1C5 | Ordinal: 454
        void QOpenGLFunctions_4_4_Compatibility(void);

    // RVA: 0x11C7 | Ordinal: 4552
        void glAccum(unsigned int, float);

    // RVA: 0x11D0 | Ordinal: 4561
        void glActiveShaderProgram(unsigned int, unsigned int);

    // RVA: 0x11E8 | Ordinal: 4585
        void glActiveTexture(unsigned int);

    // RVA: 0x11FB | Ordinal: 4604
        void glAlphaFunc(unsigned int, float);

    // RVA: 0x120B | Ordinal: 4620
        void glAreTexturesResident(int, unsigned int const *, unsigned char *);

    // RVA: 0x121B | Ordinal: 4636
        void glArrayElement(int);

    // RVA: 0x122E | Ordinal: 4655
        void glAttachShader(unsigned int, unsigned int);

    // RVA: 0x1242 | Ordinal: 4675
        void glBegin(unsigned int);

    // RVA: 0x1252 | Ordinal: 4691
        void glBeginConditionalRender(unsigned int, unsigned int);

    // RVA: 0x1268 | Ordinal: 4713
        void glBeginQuery(unsigned int, unsigned int);

    // RVA: 0x1274 | Ordinal: 4725
        void glBeginQueryIndexed(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1287 | Ordinal: 4744
        void glBeginTransformFeedback(unsigned int);

    // RVA: 0x129C | Ordinal: 4765
        void glBindAttribLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x12B2 | Ordinal: 4787
        void glBindBuffer(unsigned int, unsigned int);

    // RVA: 0x12C5 | Ordinal: 4806
        void glBindBufferBase(unsigned int, unsigned int, unsigned int);

    // RVA: 0x12D8 | Ordinal: 4825
        void glBindBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x12DC | Ordinal: 4829
        void glBindBuffersBase(unsigned int, unsigned int, int, unsigned int const *);

    // RVA: 0x12E0 | Ordinal: 4833
        void glBindBuffersRange(unsigned int, unsigned int, int, unsigned int const *, __int64 const *, __int64 const *);

    // RVA: 0x12F2 | Ordinal: 4851
        void glBindFragDataLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x1300 | Ordinal: 4865
        void glBindFragDataLocationIndexed(unsigned int, unsigned int, unsigned int, char const *);

    // RVA: 0x1313 | Ordinal: 4884
        void glBindFramebuffer(unsigned int, unsigned int);

    // RVA: 0x131C | Ordinal: 4893
        void glBindImageTexture(unsigned int, unsigned int, int, unsigned char, int, unsigned int, unsigned int);

    // RVA: 0x1320 | Ordinal: 4897
        void glBindImageTextures(unsigned int, int, unsigned int const *);

    // RVA: 0x132B | Ordinal: 4908
        void glBindProgramPipeline(unsigned int);

    // RVA: 0x133E | Ordinal: 4927
        void glBindRenderbuffer(unsigned int, unsigned int);

    // RVA: 0x134D | Ordinal: 4942
        void glBindSampler(unsigned int, unsigned int);

    // RVA: 0x1351 | Ordinal: 4946
        void glBindSamplers(unsigned int, int, unsigned int const *);

    // RVA: 0x136B | Ordinal: 4972
        void glBindTexture(unsigned int, unsigned int);

    // RVA: 0x1371 | Ordinal: 4978
        void glBindTextures(unsigned int, int, unsigned int const *);

    // RVA: 0x137E | Ordinal: 4991
        void glBindTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1391 | Ordinal: 5010
        void glBindVertexArray(unsigned int);

    // RVA: 0x1398 | Ordinal: 5017
        void glBindVertexBuffer(unsigned int, unsigned int, __int64, int);

    // RVA: 0x139C | Ordinal: 5021
        void glBindVertexBuffers(unsigned int, int, unsigned int const *, __int64 const *, int const *);

    // RVA: 0x13AF | Ordinal: 5040
        void glBitmap(int, int, float, float, float, float, unsigned char const *);

    // RVA: 0x13C7 | Ordinal: 5064
        void glBlendColor(float, float, float, float);

    // RVA: 0x13E0 | Ordinal: 5089
        void glBlendEquation(unsigned int);

    // RVA: 0x13F5 | Ordinal: 5110
        void glBlendEquationSeparate(unsigned int, unsigned int);

    // RVA: 0x1402 | Ordinal: 5123
        void glBlendEquationSeparatei(unsigned int, unsigned int, unsigned int);

    // RVA: 0x140F | Ordinal: 5136
        void glBlendEquationi(unsigned int, unsigned int);

    // RVA: 0x142A | Ordinal: 5163
        void glBlendFunc(unsigned int, unsigned int);

    // RVA: 0x1441 | Ordinal: 5186
        void glBlendFuncSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x144E | Ordinal: 5199
        void glBlendFuncSeparatei(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x145B | Ordinal: 5212
        void glBlendFunci(unsigned int, unsigned int, unsigned int);

    // RVA: 0x146E | Ordinal: 5231
        void glBlitFramebuffer(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1486 | Ordinal: 5255
        void glBufferData(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x148A | Ordinal: 5259
        void glBufferStorage(unsigned int, __int64, void const *, unsigned int);

    // RVA: 0x14A0 | Ordinal: 5281
        void glBufferSubData(unsigned int, __int64, __int64, void const *);

    // RVA: 0x14B3 | Ordinal: 5300
        void glCallList(unsigned int);

    // RVA: 0x14C4 | Ordinal: 5317
        void glCallLists(int, unsigned int, void const *);

    // RVA: 0x14D5 | Ordinal: 5334
        void glCheckFramebufferStatus(unsigned int);

    // RVA: 0x14E9 | Ordinal: 5354
        void glClampColor(unsigned int, unsigned int);

    // RVA: 0x1504 | Ordinal: 5381
        void glClear(unsigned int);

    // RVA: 0x1517 | Ordinal: 5400
        void glClearAccum(float, float, float, float);

    // RVA: 0x151B | Ordinal: 5404
        void glClearBufferData(unsigned int, unsigned int, unsigned int, unsigned int, void const *);

    // RVA: 0x1521 | Ordinal: 5410
        void glClearBufferSubData(unsigned int, unsigned int, __int64, __int64, unsigned int, unsigned int, void const *);

    // RVA: 0x1534 | Ordinal: 5429
        void glClearBufferfi(unsigned int, int, float, int);

    // RVA: 0x1547 | Ordinal: 5448
        void glClearBufferfv(unsigned int, int, float const *);

    // RVA: 0x155A | Ordinal: 5467
        void glClearBufferiv(unsigned int, int, int const *);

    // RVA: 0x156D | Ordinal: 5486
        void glClearBufferuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x1588 | Ordinal: 5513
        void glClearColor(float, float, float, float);

    // RVA: 0x15A2 | Ordinal: 5539
        void glClearDepth(double);

    // RVA: 0x15AD | Ordinal: 5550
        void glClearDepthf(float);

    // RVA: 0x15C0 | Ordinal: 5569
        void glClearIndex(float);

    // RVA: 0x15E5 | Ordinal: 5606
        void glClearStencil(int);

    // RVA: 0x15E9 | Ordinal: 5610
        void glClearTexImage(unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x15ED | Ordinal: 5614
        void glClearTexSubImage(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x15FD | Ordinal: 5630
        void glClientActiveTexture(unsigned int);

    // RVA: 0x160C | Ordinal: 5645
        void glClientWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x1621 | Ordinal: 5666
        void glClipPlane(unsigned int, double const *);

    // RVA: 0x1632 | Ordinal: 5683
        void glColor3b(signed char, signed char, signed char);

    // RVA: 0x1643 | Ordinal: 5700
        void glColor3bv(signed char const *);

    // RVA: 0x1654 | Ordinal: 5717
        void glColor3d(double, double, double);

    // RVA: 0x1665 | Ordinal: 5734
        void glColor3dv(double const *);

    // RVA: 0x1676 | Ordinal: 5751
        void glColor3f(float, float, float);

    // RVA: 0x1687 | Ordinal: 5768
        void glColor3fv(float const *);

    // RVA: 0x1698 | Ordinal: 5785
        void glColor3i(int, int, int);

    // RVA: 0x16A9 | Ordinal: 5802
        void glColor3iv(int const *);

    // RVA: 0x16BA | Ordinal: 5819
        void glColor3s(short, short, short);

    // RVA: 0x16CB | Ordinal: 5836
        void glColor3sv(short const *);

    // RVA: 0x16DC | Ordinal: 5853
        void glColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x16ED | Ordinal: 5870
        void glColor3ubv(unsigned char const *);

    // RVA: 0x16FE | Ordinal: 5887
        void glColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x170F | Ordinal: 5904
        void glColor3uiv(unsigned int const *);

    // RVA: 0x1720 | Ordinal: 5921
        void glColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x1731 | Ordinal: 5938
        void glColor3usv(unsigned short const *);

    // RVA: 0x1742 | Ordinal: 5955
        void glColor4b(signed char, signed char, signed char, signed char);

    // RVA: 0x1753 | Ordinal: 5972
        void glColor4bv(signed char const *);

    // RVA: 0x1764 | Ordinal: 5989
        void glColor4d(double, double, double, double);

    // RVA: 0x1775 | Ordinal: 6006
        void glColor4dv(double const *);

    // RVA: 0x1786 | Ordinal: 6023
        void glColor4f(float, float, float, float);

    // RVA: 0x1797 | Ordinal: 6040
        void glColor4fv(float const *);

    // RVA: 0x17A8 | Ordinal: 6057
        void glColor4i(int, int, int, int);

    // RVA: 0x17B9 | Ordinal: 6074
        void glColor4iv(int const *);

    // RVA: 0x17CA | Ordinal: 6091
        void glColor4s(short, short, short, short);

    // RVA: 0x17DB | Ordinal: 6108
        void glColor4sv(short const *);

    // RVA: 0x17EC | Ordinal: 6125
        void glColor4ub(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x17FD | Ordinal: 6142
        void glColor4ubv(unsigned char const *);

    // RVA: 0x180E | Ordinal: 6159
        void glColor4ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x181F | Ordinal: 6176
        void glColor4uiv(unsigned int const *);

    // RVA: 0x1830 | Ordinal: 6193
        void glColor4us(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x1841 | Ordinal: 6210
        void glColor4usv(unsigned short const *);

    // RVA: 0x185A | Ordinal: 6235
        void glColorMask(unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x186D | Ordinal: 6254
        void glColorMaski(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x1880 | Ordinal: 6273
        void glColorMaterial(unsigned int, unsigned int);

    // RVA: 0x188C | Ordinal: 6285
        void glColorP3ui(unsigned int, unsigned int);

    // RVA: 0x1898 | Ordinal: 6297
        void glColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x18A4 | Ordinal: 6309
        void glColorP4ui(unsigned int, unsigned int);

    // RVA: 0x18B0 | Ordinal: 6321
        void glColorP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x18C0 | Ordinal: 6337
        void glColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x18CF | Ordinal: 6352
        void glColorSubTable(unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18DE | Ordinal: 6367
        void glColorTable(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x18ED | Ordinal: 6382
        void glColorTableParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x18FC | Ordinal: 6397
        void glColorTableParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x190F | Ordinal: 6416
        void glCompileShader(unsigned int);

    // RVA: 0x1926 | Ordinal: 6439
        void glCompressedTexImage1D(unsigned int, int, unsigned int, int, int, int, void const *);

    // RVA: 0x193E | Ordinal: 6463
        void glCompressedTexImage2D(unsigned int, int, unsigned int, int, int, int, int, void const *);

    // RVA: 0x1956 | Ordinal: 6487
        void glCompressedTexImage3D(unsigned int, int, unsigned int, int, int, int, int, int, void const *);

    // RVA: 0x196D | Ordinal: 6510
        void glCompressedTexSubImage1D(unsigned int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x1985 | Ordinal: 6534
        void glCompressedTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x199D | Ordinal: 6558
        void glCompressedTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const *);

    // RVA: 0x19B4 | Ordinal: 6581
        void glConvolutionFilter1D(unsigned int, unsigned int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19C3 | Ordinal: 6596
        void glConvolutionFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x19D2 | Ordinal: 6611
        void glConvolutionParameterf(unsigned int, unsigned int, float);

    // RVA: 0x19E1 | Ordinal: 6626
        void glConvolutionParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x19F0 | Ordinal: 6641
        void glConvolutionParameteri(unsigned int, unsigned int, int);

    // RVA: 0x19FF | Ordinal: 6656
        void glConvolutionParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x1A0F | Ordinal: 6672
        void glCopyBufferSubData(unsigned int, unsigned int, __int64, __int64, __int64);

    // RVA: 0x1A20 | Ordinal: 6689
        void glCopyColorSubTable(unsigned int, int, int, int, int);

    // RVA: 0x1A2F | Ordinal: 6704
        void glCopyColorTable(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A3E | Ordinal: 6719
        void glCopyConvolutionFilter1D(unsigned int, unsigned int, int, int, int);

    // RVA: 0x1A4D | Ordinal: 6734
        void glCopyConvolutionFilter2D(unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x1A52 | Ordinal: 6739
        void glCopyImageSubData(unsigned int, unsigned int, int, int, int, int, unsigned int, unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1A67 | Ordinal: 6760
        void glCopyPixels(int, int, int, int, unsigned int);

    // RVA: 0x1A7E | Ordinal: 6783
        void glCopyTexImage1D(unsigned int, int, unsigned int, int, int, int, int);

    // RVA: 0x1A98 | Ordinal: 6809
        void glCopyTexImage2D(unsigned int, int, unsigned int, int, int, int, int, int);

    // RVA: 0x1AB1 | Ordinal: 6834
        void glCopyTexSubImage1D(unsigned int, int, int, int, int, int);

    // RVA: 0x1ACB | Ordinal: 6860
        void glCopyTexSubImage2D(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x1AE4 | Ordinal: 6885
        void glCopyTexSubImage3D(unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0x1B03 | Ordinal: 6916
        void glCreateProgram(void);

    // RVA: 0x1B20 | Ordinal: 6945
        void glCreateShader(unsigned int);

    // RVA: 0x1B2B | Ordinal: 6956
        void glCreateShaderProgramv(unsigned int, int, char const *const *);

    // RVA: 0x1B4C | Ordinal: 6989
        void glCullFace(unsigned int);

    // RVA: 0x1B51 | Ordinal: 6994
        void glDebugMessageCallback(void (__cdecl *)(unsigned int, unsigned int, unsigned int, unsigned int, int, char const *, void const *), void const *);

    // RVA: 0x1B56 | Ordinal: 6999
        void glDebugMessageControl(unsigned int, unsigned int, unsigned int, int, unsigned int const *, unsigned char);

    // RVA: 0x1B5B | Ordinal: 7004
        void glDebugMessageInsert(unsigned int, unsigned int, unsigned int, unsigned int, int, char const *);

    // RVA: 0x1B71 | Ordinal: 7026
        void glDeleteBuffers(int, unsigned int const *);

    // RVA: 0x1B84 | Ordinal: 7045
        void glDeleteFramebuffers(int, unsigned int const *);

    // RVA: 0x1B97 | Ordinal: 7064
        void glDeleteLists(unsigned int, int);

    // RVA: 0x1BAA | Ordinal: 7083
        void glDeleteProgram(unsigned int);

    // RVA: 0x1BB5 | Ordinal: 7094
        void glDeleteProgramPipelines(int, unsigned int const *);

    // RVA: 0x1BCB | Ordinal: 7116
        void glDeleteQueries(int, unsigned int const *);

    // RVA: 0x1BDE | Ordinal: 7135
        void glDeleteRenderbuffers(int, unsigned int const *);

    // RVA: 0x1BED | Ordinal: 7150
        void glDeleteSamplers(int, unsigned int const *);

    // RVA: 0x1C02 | Ordinal: 7171
        void glDeleteShader(unsigned int);

    // RVA: 0x1C13 | Ordinal: 7188
        void glDeleteSync(struct __GLsync *);

    // RVA: 0x1C2D | Ordinal: 7214
        void glDeleteTextures(int, unsigned int const *);

    // RVA: 0x1C3A | Ordinal: 7227
        void glDeleteTransformFeedbacks(int, unsigned int const *);

    // RVA: 0x1C4D | Ordinal: 7246
        void glDeleteVertexArrays(int, unsigned int const *);

    // RVA: 0x1C68 | Ordinal: 7273
        void glDepthFunc(unsigned int);

    // RVA: 0x1C83 | Ordinal: 7300
        void glDepthMask(unsigned char);

    // RVA: 0x1C9D | Ordinal: 7326
        void glDepthRange(double, double);

    // RVA: 0x1CA7 | Ordinal: 7336
        void glDepthRangeArrayv(unsigned int, int, double const *);

    // RVA: 0x1CB1 | Ordinal: 7346
        void glDepthRangeIndexed(unsigned int, double, double);

    // RVA: 0x1CBC | Ordinal: 7357
        void glDepthRangef(float, float);

    // RVA: 0x1CD1 | Ordinal: 7378
        void glDetachShader(unsigned int, unsigned int);

    // RVA: 0x1CEC | Ordinal: 7405
        void glDisable(unsigned int);

    // RVA: 0x1CFE | Ordinal: 7423
        void glDisableClientState(unsigned int);

    // RVA: 0x1D13 | Ordinal: 7444
        void glDisableVertexAttribArray(unsigned int);

    // RVA: 0x1D26 | Ordinal: 7463
        void glDisablei(unsigned int, unsigned int);

    // RVA: 0x1D2E | Ordinal: 7471
        void glDispatchCompute(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1D35 | Ordinal: 7478
        void glDispatchComputeIndirect(__int64);

    // RVA: 0x1D4F | Ordinal: 7504
        void glDrawArrays(unsigned int, int, int);

    // RVA: 0x1D5C | Ordinal: 7517
        void glDrawArraysIndirect(unsigned int, void const *);

    // RVA: 0x1D6E | Ordinal: 7535
        void glDrawArraysInstanced(unsigned int, int, int, int);

    // RVA: 0x1D76 | Ordinal: 7543
        void glDrawArraysInstancedBaseInstance(unsigned int, int, int, int, unsigned int);

    // RVA: 0x1D90 | Ordinal: 7569
        void glDrawBuffer(unsigned int);

    // RVA: 0x1DA5 | Ordinal: 7590
        void glDrawBuffers(int, unsigned int const *);

    // RVA: 0x1DBF | Ordinal: 7616
        void glDrawElements(unsigned int, int, unsigned int, void const *);

    // RVA: 0x1DD0 | Ordinal: 7633
        void glDrawElementsBaseVertex(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DDD | Ordinal: 7646
        void glDrawElementsIndirect(unsigned int, unsigned int, void const *);

    // RVA: 0x1DEF | Ordinal: 7664
        void glDrawElementsInstanced(unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1DF7 | Ordinal: 7672
        void glDrawElementsInstancedBaseInstance(unsigned int, int, unsigned int, void const *, int, unsigned int);

    // RVA: 0x1E08 | Ordinal: 7689
        void glDrawElementsInstancedBaseVertex(unsigned int, int, unsigned int, void const *, int, int);

    // RVA: 0x1E10 | Ordinal: 7697
        void glDrawElementsInstancedBaseVertexBaseInstance(unsigned int, int, unsigned int, void const *, int, int, unsigned int);

    // RVA: 0x1E23 | Ordinal: 7716
        void glDrawPixels(int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x1E3A | Ordinal: 7739
        void glDrawRangeElements(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *);

    // RVA: 0x1E4B | Ordinal: 7756
        void glDrawRangeElementsBaseVertex(unsigned int, unsigned int, unsigned int, int, unsigned int, void const *, int);

    // RVA: 0x1E57 | Ordinal: 7768
        void glDrawTransformFeedback(unsigned int, unsigned int);

    // RVA: 0x1E5F | Ordinal: 7776
        void glDrawTransformFeedbackInstanced(unsigned int, unsigned int, int);

    // RVA: 0x1E6B | Ordinal: 7788
        void glDrawTransformFeedbackStream(unsigned int, unsigned int, unsigned int);

    // RVA: 0x1E73 | Ordinal: 7796
        void glDrawTransformFeedbackStreamInstanced(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x1E86 | Ordinal: 7815
        void glEdgeFlag(unsigned char);

    // RVA: 0x1E96 | Ordinal: 7831
        void glEdgeFlagPointer(int, void const *);

    // RVA: 0x1EA7 | Ordinal: 7848
        void glEdgeFlagv(unsigned char const *);

    // RVA: 0x1EC0 | Ordinal: 7873
        void glEnable(unsigned int);

    // RVA: 0x1ED2 | Ordinal: 7891
        void glEnableClientState(unsigned int);

    // RVA: 0x1EE7 | Ordinal: 7912
        void glEnableVertexAttribArray(unsigned int);

    // RVA: 0x1EFA | Ordinal: 7931
        void glEnablei(unsigned int, unsigned int);

    // RVA: 0x1F0D | Ordinal: 7950
        void glEnd(void);

    // RVA: 0x1F1D | Ordinal: 7966
        void glEndConditionalRender(void);

    // RVA: 0x1F30 | Ordinal: 7985
        void glEndList(void);

    // RVA: 0x1F44 | Ordinal: 8005
        void glEndQuery(unsigned int);

    // RVA: 0x1F50 | Ordinal: 8017
        void glEndQueryIndexed(unsigned int, unsigned int);

    // RVA: 0x1F63 | Ordinal: 8036
        void glEndTransformFeedback(void);

    // RVA: 0x1F76 | Ordinal: 8055
        void glEvalCoord1d(double);

    // RVA: 0x1F87 | Ordinal: 8072
        void glEvalCoord1dv(double const *);

    // RVA: 0x1F98 | Ordinal: 8089
        void glEvalCoord1f(float);

    // RVA: 0x1FA9 | Ordinal: 8106
        void glEvalCoord1fv(float const *);

    // RVA: 0x1FBA | Ordinal: 8123
        void glEvalCoord2d(double, double);

    // RVA: 0x1FCB | Ordinal: 8140
        void glEvalCoord2dv(double const *);

    // RVA: 0x1FDC | Ordinal: 8157
        void glEvalCoord2f(float, float);

    // RVA: 0x1FED | Ordinal: 8174
        void glEvalCoord2fv(float const *);

    // RVA: 0x1FFE | Ordinal: 8191
        void glEvalMesh1(unsigned int, int, int);

    // RVA: 0x200F | Ordinal: 8208
        void glEvalMesh2(unsigned int, int, int, int, int);

    // RVA: 0x2020 | Ordinal: 8225
        void glEvalPoint1(int);

    // RVA: 0x2031 | Ordinal: 8242
        void glEvalPoint2(int, int);

    // RVA: 0x2042 | Ordinal: 8259
        void glFeedbackBuffer(int, unsigned int, float *);

    // RVA: 0x2051 | Ordinal: 8274
        void glFenceSync(unsigned int, unsigned int);

    // RVA: 0x206C | Ordinal: 8301
        void glFinish(void);

    // RVA: 0x2087 | Ordinal: 8328
        void glFlush(void);

    // RVA: 0x209A | Ordinal: 8347
        void glFlushMappedBufferRange(unsigned int, __int64, __int64);

    // RVA: 0x20AB | Ordinal: 8364
        void glFogCoordPointer(unsigned int, int, void const *);

    // RVA: 0x20B8 | Ordinal: 8377
        void glFogCoordd(double);

    // RVA: 0x20C5 | Ordinal: 8390
        void glFogCoorddv(double const *);

    // RVA: 0x20D2 | Ordinal: 8403
        void glFogCoordf(float);

    // RVA: 0x20DF | Ordinal: 8416
        void glFogCoordfv(float const *);

    // RVA: 0x20F0 | Ordinal: 8433
        void glFogf(unsigned int, float);

    // RVA: 0x2101 | Ordinal: 8450
        void glFogfv(unsigned int, float const *);

    // RVA: 0x2112 | Ordinal: 8467
        void glFogi(unsigned int, int);

    // RVA: 0x2123 | Ordinal: 8484
        void glFogiv(unsigned int, int const *);

    // RVA: 0x2129 | Ordinal: 8490
        void glFramebufferParameteri(unsigned int, unsigned int, int);

    // RVA: 0x213C | Ordinal: 8509
        void glFramebufferRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x2184 | Ordinal: 8581
        void glFramebufferTexture(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x214E | Ordinal: 8527
        void glFramebufferTexture1D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2161 | Ordinal: 8546
        void glFramebufferTexture2D(unsigned int, unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x2173 | Ordinal: 8564
        void glFramebufferTexture3D(unsigned int, unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x2197 | Ordinal: 8600
        void glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int);

    // RVA: 0x21B2 | Ordinal: 8627
        void glFrontFace(unsigned int);

    // RVA: 0x21C5 | Ordinal: 8646
        void glFrustum(double, double, double, double, double, double);

    // RVA: 0x21D9 | Ordinal: 8666
        void glGenBuffers(int, unsigned int *);

    // RVA: 0x21EC | Ordinal: 8685
        void glGenFramebuffers(int, unsigned int *);

    // RVA: 0x21FF | Ordinal: 8704
        void glGenLists(int);

    // RVA: 0x2208 | Ordinal: 8713
        void glGenProgramPipelines(int, unsigned int *);

    // RVA: 0x221E | Ordinal: 8735
        void glGenQueries(int, unsigned int *);

    // RVA: 0x2231 | Ordinal: 8754
        void glGenRenderbuffers(int, unsigned int *);

    // RVA: 0x2240 | Ordinal: 8769
        void glGenSamplers(int, unsigned int *);

    // RVA: 0x225A | Ordinal: 8795
        void glGenTextures(int, unsigned int *);

    // RVA: 0x2267 | Ordinal: 8808
        void glGenTransformFeedbacks(int, unsigned int *);

    // RVA: 0x227A | Ordinal: 8827
        void glGenVertexArrays(int, unsigned int *);

    // RVA: 0x228D | Ordinal: 8846
        void glGenerateMipmap(unsigned int);

    // RVA: 0x2297 | Ordinal: 8856
        void glGetActiveAtomicCounterBufferiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22AC | Ordinal: 8877
        void glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22B8 | Ordinal: 8889
        void glGetActiveSubroutineName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22C4 | Ordinal: 8901
        void glGetActiveSubroutineUniformName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x22D0 | Ordinal: 8913
        void glGetActiveSubroutineUniformiv(unsigned int, unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x22E5 | Ordinal: 8934
        void glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x22F7 | Ordinal: 8952
        void glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2309 | Ordinal: 8970
        void glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x231A | Ordinal: 8987
        void glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x232C | Ordinal: 9005
        void glGetActiveUniformsiv(unsigned int, int, unsigned int const *, unsigned int, int *);

    // RVA: 0x2341 | Ordinal: 9026
        void glGetAttachedShaders(unsigned int, int, int *, unsigned int *);

    // RVA: 0x2356 | Ordinal: 9047
        void glGetAttribLocation(unsigned int, char const *);

    // RVA: 0x2369 | Ordinal: 9066
        void glGetBooleani_v(unsigned int, unsigned int, unsigned char *);

    // RVA: 0x2384 | Ordinal: 9093
        void glGetBooleanv(unsigned int, unsigned char *);

    // RVA: 0x2395 | Ordinal: 9110
        void glGetBufferParameteri64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x23AB | Ordinal: 9132
        void glGetBufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x23C1 | Ordinal: 9154
        void glGetBufferPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x23D7 | Ordinal: 9176
        void glGetBufferSubData(unsigned int, __int64, __int64, void *);

    // RVA: 0x23EA | Ordinal: 9195
        void glGetClipPlane(unsigned int, double *);

    // RVA: 0x23F9 | Ordinal: 9210
        void glGetColorTable(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2408 | Ordinal: 9225
        void glGetColorTableParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2417 | Ordinal: 9240
        void glGetColorTableParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x242C | Ordinal: 9261
        void glGetCompressedTexImage(unsigned int, int, void *);

    // RVA: 0x2441 | Ordinal: 9282
        void glGetConvolutionFilter(unsigned int, unsigned int, unsigned int, void *);

    // RVA: 0x2450 | Ordinal: 9297
        void glGetConvolutionParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x245F | Ordinal: 9312
        void glGetConvolutionParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2462 | Ordinal: 9315
        void glGetDebugMessageLog(unsigned int, int, unsigned int *, unsigned int *, unsigned int *, unsigned int *, int *, char *);

    // RVA: 0x246C | Ordinal: 9325
        void glGetDoublei_v(unsigned int, unsigned int, double *);

    // RVA: 0x2486 | Ordinal: 9351
        void glGetDoublev(unsigned int, double *);

    // RVA: 0x24A1 | Ordinal: 9378
        void glGetError(void);

    // RVA: 0x24AB | Ordinal: 9388
        void glGetFloati_v(unsigned int, unsigned int, float *);

    // RVA: 0x24C6 | Ordinal: 9415
        void glGetFloatv(unsigned int, float *);

    // RVA: 0x24D4 | Ordinal: 9429
        void glGetFragDataIndex(unsigned int, char const *);

    // RVA: 0x24E7 | Ordinal: 9448
        void glGetFragDataLocation(unsigned int, char const *);

    // RVA: 0x24FA | Ordinal: 9467
        void glGetFramebufferAttachmentParameteriv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2501 | Ordinal: 9474
        void glGetFramebufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2515 | Ordinal: 9494
        void glGetHistogram(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2524 | Ordinal: 9509
        void glGetHistogramParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2533 | Ordinal: 9524
        void glGetHistogramParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2542 | Ordinal: 9539
        void glGetInteger64i_v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2553 | Ordinal: 9556
        void glGetInteger64v(unsigned int, __int64 *);

    // RVA: 0x2566 | Ordinal: 9575
        void glGetIntegeri_v(unsigned int, unsigned int, int *);

    // RVA: 0x2581 | Ordinal: 9602
        void glGetIntegerv(unsigned int, int *);

    // RVA: 0x2587 | Ordinal: 9608
        void glGetInternalformati64v(unsigned int, unsigned int, unsigned int, int, __int64 *);

    // RVA: 0x2590 | Ordinal: 9617
        void glGetInternalformativ(unsigned int, unsigned int, unsigned int, int, int *);

    // RVA: 0x25A3 | Ordinal: 9636
        void glGetLightfv(unsigned int, unsigned int, float *);

    // RVA: 0x25B4 | Ordinal: 9653
        void glGetLightiv(unsigned int, unsigned int, int *);

    // RVA: 0x25C5 | Ordinal: 9670
        void glGetMapdv(unsigned int, unsigned int, double *);

    // RVA: 0x25D6 | Ordinal: 9687
        void glGetMapfv(unsigned int, unsigned int, float *);

    // RVA: 0x25E7 | Ordinal: 9704
        void glGetMapiv(unsigned int, unsigned int, int *);

    // RVA: 0x25F8 | Ordinal: 9721
        void glGetMaterialfv(unsigned int, unsigned int, float *);

    // RVA: 0x2609 | Ordinal: 9738
        void glGetMaterialiv(unsigned int, unsigned int, int *);

    // RVA: 0x2618 | Ordinal: 9753
        void glGetMinmax(unsigned int, unsigned char, unsigned int, unsigned int, void *);

    // RVA: 0x2627 | Ordinal: 9768
        void glGetMinmaxParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x2636 | Ordinal: 9783
        void glGetMinmaxParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2645 | Ordinal: 9798
        void glGetMultisamplefv(unsigned int, unsigned int, float *);

    // RVA: 0x2658 | Ordinal: 9817
        void glGetObjectLabel(unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x265D | Ordinal: 9822
        void glGetObjectPtrLabel(void const *, int, int *, char *);

    // RVA: 0x2670 | Ordinal: 9841
        void glGetPixelMapfv(unsigned int, float *);

    // RVA: 0x2681 | Ordinal: 9858
        void glGetPixelMapuiv(unsigned int, unsigned int *);

    // RVA: 0x2692 | Ordinal: 9875
        void glGetPixelMapusv(unsigned int, unsigned short *);

    // RVA: 0x26AA | Ordinal: 9899
        void glGetPointerv(unsigned int, void **);

    // RVA: 0x26BB | Ordinal: 9916
        void glGetPolygonStipple(unsigned char *);

    // RVA: 0x26C4 | Ordinal: 9925
        void glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *);

    // RVA: 0x26D9 | Ordinal: 9946
        void glGetProgramInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26E0 | Ordinal: 9953
        void glGetProgramInterfaceiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x26EB | Ordinal: 9964
        void glGetProgramPipelineInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x26F6 | Ordinal: 9975
        void glGetProgramPipelineiv(unsigned int, unsigned int, int *);

    // RVA: 0x26FD | Ordinal: 9982
        void glGetProgramResourceIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2704 | Ordinal: 9989
        void glGetProgramResourceLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x270A | Ordinal: 9995
        void glGetProgramResourceLocationIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2711 | Ordinal: 10002
        void glGetProgramResourceName(unsigned int, unsigned int, unsigned int, int, int *, char *);

    // RVA: 0x2718 | Ordinal: 10009
        void glGetProgramResourceiv(unsigned int, unsigned int, unsigned int, int, unsigned int const *, int, int *, int *);

    // RVA: 0x2724 | Ordinal: 10021
        void glGetProgramStageiv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2739 | Ordinal: 10042
        void glGetProgramiv(unsigned int, unsigned int, int *);

    // RVA: 0x2745 | Ordinal: 10054
        void glGetQueryIndexediv(unsigned int, unsigned int, unsigned int, int *);

    // RVA: 0x2753 | Ordinal: 10068
        void glGetQueryObjecti64v(unsigned int, unsigned int, __int64 *);

    // RVA: 0x2768 | Ordinal: 10089
        void glGetQueryObjectiv(unsigned int, unsigned int, int *);

    // RVA: 0x2776 | Ordinal: 10103
        void glGetQueryObjectui64v(unsigned int, unsigned int, unsigned __int64 *);

    // RVA: 0x278C | Ordinal: 10125
        void glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27A2 | Ordinal: 10147
        void glGetQueryiv(unsigned int, unsigned int, int *);

    // RVA: 0x27B5 | Ordinal: 10166
        void glGetRenderbufferParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x27C4 | Ordinal: 10181
        void glGetSamplerParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x27D3 | Ordinal: 10196
        void glGetSamplerParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x27E2 | Ordinal: 10211
        void glGetSamplerParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x27F1 | Ordinal: 10226
        void glGetSamplerParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x2802 | Ordinal: 10243
        void glGetSeparableFilter(unsigned int, unsigned int, unsigned int, void *, void *, void *);

    // RVA: 0x2815 | Ordinal: 10262
        void glGetShaderInfoLog(unsigned int, int, int *, char *);

    // RVA: 0x2820 | Ordinal: 10273
        void glGetShaderPrecisionFormat(unsigned int, unsigned int, int *, int *);

    // RVA: 0x2835 | Ordinal: 10294
        void glGetShaderSource(unsigned int, int, int *, char *);

    // RVA: 0x284A | Ordinal: 10315
        void glGetShaderiv(unsigned int, unsigned int, int *);

    // RVA: 0x2865 | Ordinal: 10342
        void glGetString(unsigned int);

    // RVA: 0x2878 | Ordinal: 10361
        void glGetStringi(unsigned int, unsigned int);

    // RVA: 0x2884 | Ordinal: 10373
        void glGetSubroutineIndex(unsigned int, unsigned int, char const *);

    // RVA: 0x2890 | Ordinal: 10385
        void glGetSubroutineUniformLocation(unsigned int, unsigned int, char const *);

    // RVA: 0x28A1 | Ordinal: 10402
        void glGetSynciv(struct __GLsync *, unsigned int, int, int *, int *);

    // RVA: 0x28B4 | Ordinal: 10421
        void glGetTexEnvfv(unsigned int, unsigned int, float *);

    // RVA: 0x28C5 | Ordinal: 10438
        void glGetTexEnviv(unsigned int, unsigned int, int *);

    // RVA: 0x28D6 | Ordinal: 10455
        void glGetTexGendv(unsigned int, unsigned int, double *);

    // RVA: 0x28E7 | Ordinal: 10472
        void glGetTexGenfv(unsigned int, unsigned int, float *);

    // RVA: 0x28F8 | Ordinal: 10489
        void glGetTexGeniv(unsigned int, unsigned int, int *);

    // RVA: 0x2910 | Ordinal: 10513
        void glGetTexImage(unsigned int, int, unsigned int, unsigned int, void *);

    // RVA: 0x292B | Ordinal: 10540
        void glGetTexLevelParameterfv(unsigned int, int, unsigned int, float *);

    // RVA: 0x2946 | Ordinal: 10567
        void glGetTexLevelParameteriv(unsigned int, int, unsigned int, int *);

    // RVA: 0x2959 | Ordinal: 10586
        void glGetTexParameterIiv(unsigned int, unsigned int, int *);

    // RVA: 0x296C | Ordinal: 10605
        void glGetTexParameterIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2987 | Ordinal: 10632
        void glGetTexParameterfv(unsigned int, unsigned int, float *);

    // RVA: 0x29A2 | Ordinal: 10659
        void glGetTexParameteriv(unsigned int, unsigned int, int *);

    // RVA: 0x29C5 | Ordinal: 10694
        void glGetTransformFeedbackVarying(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *);

    // RVA: 0x29DD | Ordinal: 10718
        void glGetUniformBlockIndex(unsigned int, char const *);

    // RVA: 0x29EF | Ordinal: 10736
        void glGetUniformIndices(unsigned int, int, char const *const *, unsigned int *);

    // RVA: 0x2A04 | Ordinal: 10757
        void glGetUniformLocation(unsigned int, char const *);

    // RVA: 0x2A10 | Ordinal: 10769
        void glGetUniformSubroutineuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A1C | Ordinal: 10781
        void glGetUniformdv(unsigned int, int, double *);

    // RVA: 0x2A31 | Ordinal: 10802
        void glGetUniformfv(unsigned int, int, float *);

    // RVA: 0x2A46 | Ordinal: 10823
        void glGetUniformiv(unsigned int, int, int *);

    // RVA: 0x2A59 | Ordinal: 10842
        void glGetUniformuiv(unsigned int, int, unsigned int *);

    // RVA: 0x2A72 | Ordinal: 10867
        void glGetVertexAttribIiv(unsigned int, unsigned int, int *);

    // RVA: 0x2A85 | Ordinal: 10886
        void glGetVertexAttribIuiv(unsigned int, unsigned int, unsigned int *);

    // RVA: 0x2A8F | Ordinal: 10896
        void glGetVertexAttribLdv(unsigned int, unsigned int, double *);

    // RVA: 0x2AA4 | Ordinal: 10917
        void glGetVertexAttribPointerv(unsigned int, unsigned int, void **);

    // RVA: 0x2AB8 | Ordinal: 10937
        void glGetVertexAttribdv(unsigned int, unsigned int, double *);

    // RVA: 0x2ACD | Ordinal: 10958
        void glGetVertexAttribfv(unsigned int, unsigned int, float *);

    // RVA: 0x2AE2 | Ordinal: 10979
        void glGetVertexAttribiv(unsigned int, unsigned int, int *);

    // RVA: 0x2B18 | Ordinal: 11033
        void glHint(unsigned int, unsigned int);

    // RVA: 0x2B29 | Ordinal: 11050
        void glHistogram(unsigned int, int, unsigned int, unsigned char);

    // RVA: 0x2B3A | Ordinal: 11067
        void glIndexMask(unsigned int);

    // RVA: 0x2B4A | Ordinal: 11083
        void glIndexPointer(unsigned int, int, void const *);

    // RVA: 0x2B5B | Ordinal: 11100
        void glIndexd(double);

    // RVA: 0x2B6C | Ordinal: 11117
        void glIndexdv(double const *);

    // RVA: 0x2B7D | Ordinal: 11134
        void glIndexf(float);

    // RVA: 0x2B8E | Ordinal: 11151
        void glIndexfv(float const *);

    // RVA: 0x2B9F | Ordinal: 11168
        void glIndexi(int);

    // RVA: 0x2BB0 | Ordinal: 11185
        void glIndexiv(int const *);

    // RVA: 0x2BC1 | Ordinal: 11202
        void glIndexs(short);

    // RVA: 0x2BD2 | Ordinal: 11219
        void glIndexsv(short const *);

    // RVA: 0x2BE9 | Ordinal: 11242
        void glIndexub(unsigned char);

    // RVA: 0x2C00 | Ordinal: 11265
        void glIndexubv(unsigned char const *);

    // RVA: 0x2C11 | Ordinal: 11282
        void glInitNames(void);

    // RVA: 0x2C21 | Ordinal: 11298
        void glInterleavedArrays(unsigned int, int, void const *);

    // RVA: 0x2C26 | Ordinal: 11303
        void glInvalidateBufferData(unsigned int);

    // RVA: 0x2C2C | Ordinal: 11309
        void glInvalidateBufferSubData(unsigned int, __int64, __int64);

    // RVA: 0x2C33 | Ordinal: 11316
        void glInvalidateFramebuffer(unsigned int, int, unsigned int const *);

    // RVA: 0x2C3E | Ordinal: 11327
        void glInvalidateSubFramebuffer(unsigned int, int, unsigned int const *, int, int, int, int);

    // RVA: 0x2C44 | Ordinal: 11333
        void glInvalidateTexImage(unsigned int, int);

    // RVA: 0x2C4A | Ordinal: 11339
        void glInvalidateTexSubImage(unsigned int, int, int, int, int, int, int, int);

    // RVA: 0x2C60 | Ordinal: 11361
        void glIsBuffer(unsigned int);

    // RVA: 0x2C7B | Ordinal: 11388
        void glIsEnabled(unsigned int);

    // RVA: 0x2C8E | Ordinal: 11407
        void glIsEnabledi(unsigned int, unsigned int);

    // RVA: 0x2CA1 | Ordinal: 11426
        void glIsFramebuffer(unsigned int);

    // RVA: 0x2CB4 | Ordinal: 11445
        void glIsList(unsigned int);

    // RVA: 0x2CC7 | Ordinal: 11464
        void glIsProgram(unsigned int);

    // RVA: 0x2CD2 | Ordinal: 11475
        void glIsProgramPipeline(unsigned int);

    // RVA: 0x2CE8 | Ordinal: 11497
        void glIsQuery(unsigned int);

    // RVA: 0x2CFB | Ordinal: 11516
        void glIsRenderbuffer(unsigned int);

    // RVA: 0x2D0A | Ordinal: 11531
        void glIsSampler(unsigned int);

    // RVA: 0x2D1F | Ordinal: 11552
        void glIsShader(unsigned int);

    // RVA: 0x2D30 | Ordinal: 11569
        void glIsSync(struct __GLsync *);

    // RVA: 0x2D4A | Ordinal: 11595
        void glIsTexture(unsigned int);

    // RVA: 0x2D57 | Ordinal: 11608
        void glIsTransformFeedback(unsigned int);

    // RVA: 0x2D6A | Ordinal: 11627
        void glIsVertexArray(unsigned int);

    // RVA: 0x2D7D | Ordinal: 11646
        void glLightModelf(unsigned int, float);

    // RVA: 0x2D8E | Ordinal: 11663
        void glLightModelfv(unsigned int, float const *);

    // RVA: 0x2D9F | Ordinal: 11680
        void glLightModeli(unsigned int, int);

    // RVA: 0x2DB0 | Ordinal: 11697
        void glLightModeliv(unsigned int, int const *);

    // RVA: 0x2DC1 | Ordinal: 11714
        void glLightf(unsigned int, unsigned int, float);

    // RVA: 0x2DD2 | Ordinal: 11731
        void glLightfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2DE3 | Ordinal: 11748
        void glLighti(unsigned int, unsigned int, int);

    // RVA: 0x2DF4 | Ordinal: 11765
        void glLightiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2E05 | Ordinal: 11782
        void glLineStipple(int, unsigned short);

    // RVA: 0x2E1E | Ordinal: 11807
        void glLineWidth(float);

    // RVA: 0x2E33 | Ordinal: 11828
        void glLinkProgram(unsigned int);

    // RVA: 0x2E46 | Ordinal: 11847
        void glListBase(unsigned int);

    // RVA: 0x2E57 | Ordinal: 11864
        void glLoadIdentity(void);

    // RVA: 0x2E68 | Ordinal: 11881
        void glLoadMatrixd(double const *);

    // RVA: 0x2E79 | Ordinal: 11898
        void glLoadMatrixf(float const *);

    // RVA: 0x2E8A | Ordinal: 11915
        void glLoadName(unsigned int);

    // RVA: 0x2E98 | Ordinal: 11929
        void glLoadTransposeMatrixd(double const *);

    // RVA: 0x2EA6 | Ordinal: 11943
        void glLoadTransposeMatrixf(float const *);

    // RVA: 0x2EBE | Ordinal: 11967
        void glLogicOp(unsigned int);

    // RVA: 0x2ED1 | Ordinal: 11986
        void glMap1d(unsigned int, double, double, int, int, double const *);

    // RVA: 0x2EE2 | Ordinal: 12003
        void glMap1f(unsigned int, float, float, int, int, float const *);

    // RVA: 0x2EF3 | Ordinal: 12020
        void glMap2d(unsigned int, double, double, int, int, double, double, int, int, double const *);

    // RVA: 0x2F04 | Ordinal: 12037
        void glMap2f(unsigned int, float, float, int, int, float, float, int, int, float const *);

    // RVA: 0x2F18 | Ordinal: 12057
        void glMapBuffer(unsigned int, unsigned int);

    // RVA: 0x2F2B | Ordinal: 12076
        void glMapBufferRange(unsigned int, __int64, __int64, unsigned int);

    // RVA: 0x2F3E | Ordinal: 12095
        void glMapGrid1d(int, double, double);

    // RVA: 0x2F4F | Ordinal: 12112
        void glMapGrid1f(int, float, float);

    // RVA: 0x2F60 | Ordinal: 12129
        void glMapGrid2d(int, double, double, int, double, double);

    // RVA: 0x2F71 | Ordinal: 12146
        void glMapGrid2f(int, float, float, int, float, float);

    // RVA: 0x2F86 | Ordinal: 12167
        void glMaterialf(unsigned int, unsigned int, float);

    // RVA: 0x2F97 | Ordinal: 12184
        void glMaterialfv(unsigned int, unsigned int, float const *);

    // RVA: 0x2FA8 | Ordinal: 12201
        void glMateriali(unsigned int, unsigned int, int);

    // RVA: 0x2FB9 | Ordinal: 12218
        void glMaterialiv(unsigned int, unsigned int, int const *);

    // RVA: 0x2FCA | Ordinal: 12235
        void glMatrixMode(unsigned int);

    // RVA: 0x2FD1 | Ordinal: 12242
        void glMemoryBarrier(unsigned int);

    // RVA: 0x2FE1 | Ordinal: 12258
        void glMinSampleShading(float);

    // RVA: 0x2FF2 | Ordinal: 12275
        void glMinmax(unsigned int, unsigned int, unsigned char);

    // RVA: 0x3003 | Ordinal: 12292
        void glMultMatrixd(double const *);

    // RVA: 0x3014 | Ordinal: 12309
        void glMultMatrixf(float const *);

    // RVA: 0x3022 | Ordinal: 12323
        void glMultTransposeMatrixd(double const *);

    // RVA: 0x3030 | Ordinal: 12337
        void glMultTransposeMatrixf(float const *);

    // RVA: 0x3044 | Ordinal: 12357
        void glMultiDrawArrays(unsigned int, int const *, int const *, int);

    // RVA: 0x304A | Ordinal: 12363
        void glMultiDrawArraysIndirect(unsigned int, void const *, int, int);

    // RVA: 0x3060 | Ordinal: 12385
        void glMultiDrawElements(unsigned int, int const *, unsigned int, void const *const *, int);

    // RVA: 0x3070 | Ordinal: 12401
        void glMultiDrawElementsBaseVertex(unsigned int, int const *, unsigned int, void const *const *, int, int const *);

    // RVA: 0x3076 | Ordinal: 12407
        void glMultiDrawElementsIndirect(unsigned int, unsigned int, void const *, int, int);

    // RVA: 0x3086 | Ordinal: 12423
        void glMultiTexCoord1d(unsigned int, double);

    // RVA: 0x3094 | Ordinal: 12437
        void glMultiTexCoord1dv(unsigned int, double const *);

    // RVA: 0x30A2 | Ordinal: 12451
        void glMultiTexCoord1f(unsigned int, float);

    // RVA: 0x30B0 | Ordinal: 12465
        void glMultiTexCoord1fv(unsigned int, float const *);

    // RVA: 0x30BE | Ordinal: 12479
        void glMultiTexCoord1i(unsigned int, int);

    // RVA: 0x30CC | Ordinal: 12493
        void glMultiTexCoord1iv(unsigned int, int const *);

    // RVA: 0x30DA | Ordinal: 12507
        void glMultiTexCoord1s(unsigned int, short);

    // RVA: 0x30E8 | Ordinal: 12521
        void glMultiTexCoord1sv(unsigned int, short const *);

    // RVA: 0x30F6 | Ordinal: 12535
        void glMultiTexCoord2d(unsigned int, double, double);

    // RVA: 0x3104 | Ordinal: 12549
        void glMultiTexCoord2dv(unsigned int, double const *);

    // RVA: 0x3112 | Ordinal: 12563
        void glMultiTexCoord2f(unsigned int, float, float);

    // RVA: 0x3120 | Ordinal: 12577
        void glMultiTexCoord2fv(unsigned int, float const *);

    // RVA: 0x312E | Ordinal: 12591
        void glMultiTexCoord2i(unsigned int, int, int);

    // RVA: 0x313C | Ordinal: 12605
        void glMultiTexCoord2iv(unsigned int, int const *);

    // RVA: 0x314A | Ordinal: 12619
        void glMultiTexCoord2s(unsigned int, short, short);

    // RVA: 0x3158 | Ordinal: 12633
        void glMultiTexCoord2sv(unsigned int, short const *);

    // RVA: 0x3166 | Ordinal: 12647
        void glMultiTexCoord3d(unsigned int, double, double, double);

    // RVA: 0x3174 | Ordinal: 12661
        void glMultiTexCoord3dv(unsigned int, double const *);

    // RVA: 0x3182 | Ordinal: 12675
        void glMultiTexCoord3f(unsigned int, float, float, float);

    // RVA: 0x3190 | Ordinal: 12689
        void glMultiTexCoord3fv(unsigned int, float const *);

    // RVA: 0x319E | Ordinal: 12703
        void glMultiTexCoord3i(unsigned int, int, int, int);

    // RVA: 0x31AC | Ordinal: 12717
        void glMultiTexCoord3iv(unsigned int, int const *);

    // RVA: 0x31BA | Ordinal: 12731
        void glMultiTexCoord3s(unsigned int, short, short, short);

    // RVA: 0x31C8 | Ordinal: 12745
        void glMultiTexCoord3sv(unsigned int, short const *);

    // RVA: 0x31D6 | Ordinal: 12759
        void glMultiTexCoord4d(unsigned int, double, double, double, double);

    // RVA: 0x31E4 | Ordinal: 12773
        void glMultiTexCoord4dv(unsigned int, double const *);

    // RVA: 0x31F2 | Ordinal: 12787
        void glMultiTexCoord4f(unsigned int, float, float, float, float);

    // RVA: 0x3200 | Ordinal: 12801
        void glMultiTexCoord4fv(unsigned int, float const *);

    // RVA: 0x320E | Ordinal: 12815
        void glMultiTexCoord4i(unsigned int, int, int, int, int);

    // RVA: 0x321C | Ordinal: 12829
        void glMultiTexCoord4iv(unsigned int, int const *);

    // RVA: 0x322A | Ordinal: 12843
        void glMultiTexCoord4s(unsigned int, short, short, short, short);

    // RVA: 0x3238 | Ordinal: 12857
        void glMultiTexCoord4sv(unsigned int, short const *);

    // RVA: 0x3244 | Ordinal: 12869
        void glMultiTexCoordP1ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3250 | Ordinal: 12881
        void glMultiTexCoordP1uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x325C | Ordinal: 12893
        void glMultiTexCoordP2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3268 | Ordinal: 12905
        void glMultiTexCoordP2uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3274 | Ordinal: 12917
        void glMultiTexCoordP3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3280 | Ordinal: 12929
        void glMultiTexCoordP3uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x328C | Ordinal: 12941
        void glMultiTexCoordP4ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3298 | Ordinal: 12953
        void glMultiTexCoordP4uiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x32C1 | Ordinal: 12994
        void glNewList(unsigned int, unsigned int);

    // RVA: 0x32D2 | Ordinal: 13011
        void glNormal3b(signed char, signed char, signed char);

    // RVA: 0x32E3 | Ordinal: 13028
        void glNormal3bv(signed char const *);

    // RVA: 0x32F4 | Ordinal: 13045
        void glNormal3d(double, double, double);

    // RVA: 0x3305 | Ordinal: 13062
        void glNormal3dv(double const *);

    // RVA: 0x3316 | Ordinal: 13079
        void glNormal3f(float, float, float);

    // RVA: 0x3327 | Ordinal: 13096
        void glNormal3fv(float const *);

    // RVA: 0x3338 | Ordinal: 13113
        void glNormal3i(int, int, int);

    // RVA: 0x3349 | Ordinal: 13130
        void glNormal3iv(int const *);

    // RVA: 0x335A | Ordinal: 13147
        void glNormal3s(short, short, short);

    // RVA: 0x336B | Ordinal: 13164
        void glNormal3sv(short const *);

    // RVA: 0x3377 | Ordinal: 13176
        void glNormalP3ui(unsigned int, unsigned int);

    // RVA: 0x3383 | Ordinal: 13188
        void glNormalP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3393 | Ordinal: 13204
        void glNormalPointer(unsigned int, int, void const *);

    // RVA: 0x3396 | Ordinal: 13207
        void glObjectLabel(unsigned int, unsigned int, int, char const *);

    // RVA: 0x339B | Ordinal: 13212
        void glObjectPtrLabel(void const *, int, char const *);

    // RVA: 0x33AE | Ordinal: 13231
        void glOrtho(double, double, double, double, double, double);

    // RVA: 0x33BF | Ordinal: 13248
        void glPassThrough(float);

    // RVA: 0x33C9 | Ordinal: 13258
        void glPatchParameterfv(unsigned int, float const *);

    // RVA: 0x33D6 | Ordinal: 13271
        void glPatchParameteri(unsigned int, int);

    // RVA: 0x33E3 | Ordinal: 13284
        void glPauseTransformFeedback(void);

    // RVA: 0x33F6 | Ordinal: 13303
        void glPixelMapfv(unsigned int, int, float const *);

    // RVA: 0x3407 | Ordinal: 13320
        void glPixelMapuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x3418 | Ordinal: 13337
        void glPixelMapusv(unsigned int, int, unsigned short const *);

    // RVA: 0x3430 | Ordinal: 13361
        void glPixelStoref(unsigned int, float);

    // RVA: 0x344B | Ordinal: 13388
        void glPixelStorei(unsigned int, int);

    // RVA: 0x345E | Ordinal: 13407
        void glPixelTransferf(unsigned int, float);

    // RVA: 0x346F | Ordinal: 13424
        void glPixelTransferi(unsigned int, int);

    // RVA: 0x3480 | Ordinal: 13441
        void glPixelZoom(float, float);

    // RVA: 0x3494 | Ordinal: 13461
        void glPointParameterf(unsigned int, float);

    // RVA: 0x34AA | Ordinal: 13483
        void glPointParameterfv(unsigned int, float const *);

    // RVA: 0x34C0 | Ordinal: 13505
        void glPointParameteri(unsigned int, int);

    // RVA: 0x34D6 | Ordinal: 13527
        void glPointParameteriv(unsigned int, int const *);

    // RVA: 0x34F0 | Ordinal: 13553
        void glPointSize(float);

    // RVA: 0x350A | Ordinal: 13579
        void glPolygonMode(unsigned int, unsigned int);

    // RVA: 0x3524 | Ordinal: 13605
        void glPolygonOffset(float, float);

    // RVA: 0x3537 | Ordinal: 13624
        void glPolygonStipple(unsigned char const *);

    // RVA: 0x3548 | Ordinal: 13641
        void glPopAttrib(void);

    // RVA: 0x3558 | Ordinal: 13657
        void glPopClientAttrib(void);

    // RVA: 0x355B | Ordinal: 13660
        void glPopDebugGroup(void);

    // RVA: 0x356E | Ordinal: 13679
        void glPopMatrix(void);

    // RVA: 0x357F | Ordinal: 13696
        void glPopName(void);

    // RVA: 0x358F | Ordinal: 13712
        void glPrimitiveRestartIndex(unsigned int);

    // RVA: 0x35A1 | Ordinal: 13730
        void glPrioritizeTextures(int, unsigned int const *, float const *);

    // RVA: 0x35AA | Ordinal: 13739
        void glProgramBinary(unsigned int, unsigned int, void const *, int);

    // RVA: 0x35B5 | Ordinal: 13750
        void glProgramParameteri(unsigned int, unsigned int, int);

    // RVA: 0x35BF | Ordinal: 13760
        void glProgramUniform1d(unsigned int, int, double);

    // RVA: 0x35C9 | Ordinal: 13770
        void glProgramUniform1dv(unsigned int, int, int, double const *);

    // RVA: 0x35D4 | Ordinal: 13781
        void glProgramUniform1f(unsigned int, int, float);

    // RVA: 0x35DF | Ordinal: 13792
        void glProgramUniform1fv(unsigned int, int, int, float const *);

    // RVA: 0x35EA | Ordinal: 13803
        void glProgramUniform1i(unsigned int, int, int);

    // RVA: 0x35F5 | Ordinal: 13814
        void glProgramUniform1iv(unsigned int, int, int, int const *);

    // RVA: 0x3600 | Ordinal: 13825
        void glProgramUniform1ui(unsigned int, int, unsigned int);

    // RVA: 0x360B | Ordinal: 13836
        void glProgramUniform1uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3615 | Ordinal: 13846
        void glProgramUniform2d(unsigned int, int, double, double);

    // RVA: 0x361F | Ordinal: 13856
        void glProgramUniform2dv(unsigned int, int, int, double const *);

    // RVA: 0x362A | Ordinal: 13867
        void glProgramUniform2f(unsigned int, int, float, float);

    // RVA: 0x3635 | Ordinal: 13878
        void glProgramUniform2fv(unsigned int, int, int, float const *);

    // RVA: 0x3640 | Ordinal: 13889
        void glProgramUniform2i(unsigned int, int, int, int);

    // RVA: 0x364B | Ordinal: 13900
        void glProgramUniform2iv(unsigned int, int, int, int const *);

    // RVA: 0x3656 | Ordinal: 13911
        void glProgramUniform2ui(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x3661 | Ordinal: 13922
        void glProgramUniform2uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x366B | Ordinal: 13932
        void glProgramUniform3d(unsigned int, int, double, double, double);

    // RVA: 0x3675 | Ordinal: 13942
        void glProgramUniform3dv(unsigned int, int, int, double const *);

    // RVA: 0x3680 | Ordinal: 13953
        void glProgramUniform3f(unsigned int, int, float, float, float);

    // RVA: 0x368B | Ordinal: 13964
        void glProgramUniform3fv(unsigned int, int, int, float const *);

    // RVA: 0x3696 | Ordinal: 13975
        void glProgramUniform3i(unsigned int, int, int, int, int);

    // RVA: 0x36A1 | Ordinal: 13986
        void glProgramUniform3iv(unsigned int, int, int, int const *);

    // RVA: 0x36AC | Ordinal: 13997
        void glProgramUniform3ui(unsigned int, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x36B7 | Ordinal: 14008
        void glProgramUniform3uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x36C1 | Ordinal: 14018
        void glProgramUniform4d(unsigned int, int, double, double, double, double);

    // RVA: 0x36CB | Ordinal: 14028
        void glProgramUniform4dv(unsigned int, int, int, double const *);

    // RVA: 0x36D6 | Ordinal: 14039
        void glProgramUniform4f(unsigned int, int, float, float, float, float);

    // RVA: 0x36E1 | Ordinal: 14050
        void glProgramUniform4fv(unsigned int, int, int, float const *);

    // RVA: 0x36EC | Ordinal: 14061
        void glProgramUniform4i(unsigned int, int, int, int, int, int);

    // RVA: 0x36F7 | Ordinal: 14072
        void glProgramUniform4iv(unsigned int, int, int, int const *);

    // RVA: 0x3702 | Ordinal: 14083
        void glProgramUniform4ui(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x370D | Ordinal: 14094
        void glProgramUniform4uiv(unsigned int, int, int, unsigned int const *);

    // RVA: 0x3717 | Ordinal: 14104
        void glProgramUniformMatrix2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3722 | Ordinal: 14115
        void glProgramUniformMatrix2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x372C | Ordinal: 14125
        void glProgramUniformMatrix2x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3737 | Ordinal: 14136
        void glProgramUniformMatrix2x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3741 | Ordinal: 14146
        void glProgramUniformMatrix2x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x374C | Ordinal: 14157
        void glProgramUniformMatrix2x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3756 | Ordinal: 14167
        void glProgramUniformMatrix3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3761 | Ordinal: 14178
        void glProgramUniformMatrix3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x376B | Ordinal: 14188
        void glProgramUniformMatrix3x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x3776 | Ordinal: 14199
        void glProgramUniformMatrix3x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3780 | Ordinal: 14209
        void glProgramUniformMatrix3x4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x378B | Ordinal: 14220
        void glProgramUniformMatrix3x4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x3795 | Ordinal: 14230
        void glProgramUniformMatrix4dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37A0 | Ordinal: 14241
        void glProgramUniformMatrix4fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37AA | Ordinal: 14251
        void glProgramUniformMatrix4x2dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37B5 | Ordinal: 14262
        void glProgramUniformMatrix4x2fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37BF | Ordinal: 14272
        void glProgramUniformMatrix4x3dv(unsigned int, int, int, unsigned char, double const *);

    // RVA: 0x37CA | Ordinal: 14283
        void glProgramUniformMatrix4x3fv(unsigned int, int, int, unsigned char, float const *);

    // RVA: 0x37DA | Ordinal: 14299
        void glProvokingVertex(unsigned int);

    // RVA: 0x37ED | Ordinal: 14318
        void glPushAttrib(unsigned int);

    // RVA: 0x37FD | Ordinal: 14334
        void glPushClientAttrib(unsigned int);

    // RVA: 0x3800 | Ordinal: 14337
        void glPushDebugGroup(unsigned int, unsigned int, int, char const *);

    // RVA: 0x3813 | Ordinal: 14356
        void glPushMatrix(void);

    // RVA: 0x3824 | Ordinal: 14373
        void glPushName(unsigned int);

    // RVA: 0x3830 | Ordinal: 14385
        void glQueryCounter(unsigned int, unsigned int);

    // RVA: 0x3843 | Ordinal: 14404
        void glRasterPos2d(double, double);

    // RVA: 0x3854 | Ordinal: 14421
        void glRasterPos2dv(double const *);

    // RVA: 0x3865 | Ordinal: 14438
        void glRasterPos2f(float, float);

    // RVA: 0x3876 | Ordinal: 14455
        void glRasterPos2fv(float const *);

    // RVA: 0x3887 | Ordinal: 14472
        void glRasterPos2i(int, int);

    // RVA: 0x3898 | Ordinal: 14489
        void glRasterPos2iv(int const *);

    // RVA: 0x38A9 | Ordinal: 14506
        void glRasterPos2s(short, short);

    // RVA: 0x38BA | Ordinal: 14523
        void glRasterPos2sv(short const *);

    // RVA: 0x38CB | Ordinal: 14540
        void glRasterPos3d(double, double, double);

    // RVA: 0x38DC | Ordinal: 14557
        void glRasterPos3dv(double const *);

    // RVA: 0x38ED | Ordinal: 14574
        void glRasterPos3f(float, float, float);

    // RVA: 0x38FE | Ordinal: 14591
        void glRasterPos3fv(float const *);

    // RVA: 0x390F | Ordinal: 14608
        void glRasterPos3i(int, int, int);

    // RVA: 0x3920 | Ordinal: 14625
        void glRasterPos3iv(int const *);

    // RVA: 0x3931 | Ordinal: 14642
        void glRasterPos3s(short, short, short);

    // RVA: 0x3942 | Ordinal: 14659
        void glRasterPos3sv(short const *);

    // RVA: 0x3953 | Ordinal: 14676
        void glRasterPos4d(double, double, double, double);

    // RVA: 0x3964 | Ordinal: 14693
        void glRasterPos4dv(double const *);

    // RVA: 0x3975 | Ordinal: 14710
        void glRasterPos4f(float, float, float, float);

    // RVA: 0x3986 | Ordinal: 14727
        void glRasterPos4fv(float const *);

    // RVA: 0x3997 | Ordinal: 14744
        void glRasterPos4i(int, int, int, int);

    // RVA: 0x39A8 | Ordinal: 14761
        void glRasterPos4iv(int const *);

    // RVA: 0x39B9 | Ordinal: 14778
        void glRasterPos4s(short, short, short, short);

    // RVA: 0x39CA | Ordinal: 14795
        void glRasterPos4sv(short const *);

    // RVA: 0x39E3 | Ordinal: 14820
        void glReadBuffer(unsigned int);

    // RVA: 0x39FE | Ordinal: 14847
        void glReadPixels(int, int, int, int, unsigned int, unsigned int, void *);

    // RVA: 0x3A14 | Ordinal: 14869
        void glRectd(double, double, double, double);

    // RVA: 0x3A25 | Ordinal: 14886
        void glRectdv(double const *, double const *);

    // RVA: 0x3A36 | Ordinal: 14903
        void glRectf(float, float, float, float);

    // RVA: 0x3A47 | Ordinal: 14920
        void glRectfv(float const *, float const *);

    // RVA: 0x3A58 | Ordinal: 14937
        void glRecti(int, int, int, int);

    // RVA: 0x3A69 | Ordinal: 14954
        void glRectiv(int const *, int const *);

    // RVA: 0x3A7A | Ordinal: 14971
        void glRects(short, short, short, short);

    // RVA: 0x3A8B | Ordinal: 14988
        void glRectsv(short const *, short const *);

    // RVA: 0x3A94 | Ordinal: 14997
        void glReleaseShaderCompiler(void);

    // RVA: 0x3AA7 | Ordinal: 15016
        void glRenderMode(unsigned int);

    // RVA: 0x3AB8 | Ordinal: 15033
        void glRenderbufferStorage(unsigned int, unsigned int, int, int);

    // RVA: 0x3ACB | Ordinal: 15052
        void glRenderbufferStorageMultisample(unsigned int, int, unsigned int, int, int);

    // RVA: 0x3ADC | Ordinal: 15069
        void glResetHistogram(unsigned int);

    // RVA: 0x3AEB | Ordinal: 15084
        void glResetMinmax(unsigned int);

    // RVA: 0x3AF6 | Ordinal: 15095
        void glResumeTransformFeedback(void);

    // RVA: 0x3B09 | Ordinal: 15114
        void glRotated(double, double, double, double);

    // RVA: 0x3B1A | Ordinal: 15131
        void glRotatef(float, float, float, float);

    // RVA: 0x3B30 | Ordinal: 15153
        void glSampleCoverage(float, unsigned char);

    // RVA: 0x3B41 | Ordinal: 15170
        void glSampleMaski(unsigned int, unsigned int);

    // RVA: 0x3B50 | Ordinal: 15185
        void glSamplerParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x3B5F | Ordinal: 15200
        void glSamplerParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x3B6E | Ordinal: 15215
        void glSamplerParameterf(unsigned int, unsigned int, float);

    // RVA: 0x3B7D | Ordinal: 15230
        void glSamplerParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x3B8C | Ordinal: 15245
        void glSamplerParameteri(unsigned int, unsigned int, int);

    // RVA: 0x3B9B | Ordinal: 15260
        void glSamplerParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x3BAE | Ordinal: 15279
        void glScaled(double, double, double);

    // RVA: 0x3BBF | Ordinal: 15296
        void glScalef(float, float, float);

    // RVA: 0x3BD8 | Ordinal: 15321
        void glScissor(int, int, int, int);

    // RVA: 0x3BE2 | Ordinal: 15331
        void glScissorArrayv(unsigned int, int, int const *);

    // RVA: 0x3BEC | Ordinal: 15341
        void glScissorIndexed(unsigned int, int, int, int, int);

    // RVA: 0x3BF6 | Ordinal: 15351
        void glScissorIndexedv(unsigned int, int const *);

    // RVA: 0x3C05 | Ordinal: 15366
        void glSecondaryColor3b(signed char, signed char, signed char);

    // RVA: 0x3C12 | Ordinal: 15379
        void glSecondaryColor3bv(signed char const *);

    // RVA: 0x3C1F | Ordinal: 15392
        void glSecondaryColor3d(double, double, double);

    // RVA: 0x3C2C | Ordinal: 15405
        void glSecondaryColor3dv(double const *);

    // RVA: 0x3C39 | Ordinal: 15418
        void glSecondaryColor3f(float, float, float);

    // RVA: 0x3C46 | Ordinal: 15431
        void glSecondaryColor3fv(float const *);

    // RVA: 0x3C53 | Ordinal: 15444
        void glSecondaryColor3i(int, int, int);

    // RVA: 0x3C60 | Ordinal: 15457
        void glSecondaryColor3iv(int const *);

    // RVA: 0x3C6D | Ordinal: 15470
        void glSecondaryColor3s(short, short, short);

    // RVA: 0x3C7A | Ordinal: 15483
        void glSecondaryColor3sv(short const *);

    // RVA: 0x3C87 | Ordinal: 15496
        void glSecondaryColor3ub(unsigned char, unsigned char, unsigned char);

    // RVA: 0x3C94 | Ordinal: 15509
        void glSecondaryColor3ubv(unsigned char const *);

    // RVA: 0x3CA1 | Ordinal: 15522
        void glSecondaryColor3ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3CAE | Ordinal: 15535
        void glSecondaryColor3uiv(unsigned int const *);

    // RVA: 0x3CBB | Ordinal: 15548
        void glSecondaryColor3us(unsigned short, unsigned short, unsigned short);

    // RVA: 0x3CC8 | Ordinal: 15561
        void glSecondaryColor3usv(unsigned short const *);

    // RVA: 0x3CD4 | Ordinal: 15573
        void glSecondaryColorP3ui(unsigned int, unsigned int);

    // RVA: 0x3CE0 | Ordinal: 15585
        void glSecondaryColorP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x3CED | Ordinal: 15598
        void glSecondaryColorPointer(int, unsigned int, int, void const *);

    // RVA: 0x3CFE | Ordinal: 15615
        void glSelectBuffer(int, unsigned int *);

    // RVA: 0x3D0D | Ordinal: 15630
        void glSeparableFilter2D(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void const *, void const *);

    // RVA: 0x3D1E | Ordinal: 15647
        void glShadeModel(unsigned int);

    // RVA: 0x3D27 | Ordinal: 15656
        void glShaderBinary(int, unsigned int const *, unsigned int, void const *, int);

    // RVA: 0x3D3C | Ordinal: 15677
        void glShaderSource(unsigned int, int, char const *const *, int const *);

    // RVA: 0x3D42 | Ordinal: 15683
        void glShaderStorageBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3D5D | Ordinal: 15710
        void glStencilFunc(unsigned int, int, unsigned int);

    // RVA: 0x3D72 | Ordinal: 15731
        void glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int);

    // RVA: 0x3D8D | Ordinal: 15758
        void glStencilMask(unsigned int);

    // RVA: 0x3DA2 | Ordinal: 15779
        void glStencilMaskSeparate(unsigned int, unsigned int);

    // RVA: 0x3DBD | Ordinal: 15806
        void glStencilOp(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DD2 | Ordinal: 15827
        void glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DE4 | Ordinal: 15845
        void glTexBuffer(unsigned int, unsigned int, unsigned int);

    // RVA: 0x3DEB | Ordinal: 15852
        void glTexBufferRange(unsigned int, unsigned int, unsigned int, __int64, __int64);

    // RVA: 0x3DFE | Ordinal: 15871
        void glTexCoord1d(double);

    // RVA: 0x3E0F | Ordinal: 15888
        void glTexCoord1dv(double const *);

    // RVA: 0x3E20 | Ordinal: 15905
        void glTexCoord1f(float);

    // RVA: 0x3E31 | Ordinal: 15922
        void glTexCoord1fv(float const *);

    // RVA: 0x3E42 | Ordinal: 15939
        void glTexCoord1i(int);

    // RVA: 0x3E53 | Ordinal: 15956
        void glTexCoord1iv(int const *);

    // RVA: 0x3E64 | Ordinal: 15973
        void glTexCoord1s(short);

    // RVA: 0x3E75 | Ordinal: 15990
        void glTexCoord1sv(short const *);

    // RVA: 0x3E86 | Ordinal: 16007
        void glTexCoord2d(double, double);

    // RVA: 0x3E97 | Ordinal: 16024
        void glTexCoord2dv(double const *);

    // RVA: 0x3EA8 | Ordinal: 16041
        void glTexCoord2f(float, float);

    // RVA: 0x3EB9 | Ordinal: 16058
        void glTexCoord2fv(float const *);

    // RVA: 0x3ECA | Ordinal: 16075
        void glTexCoord2i(int, int);

    // RVA: 0x3EDB | Ordinal: 16092
        void glTexCoord2iv(int const *);

    // RVA: 0x3EEC | Ordinal: 16109
        void glTexCoord2s(short, short);

    // RVA: 0x3EFD | Ordinal: 16126
        void glTexCoord2sv(short const *);

    // RVA: 0x3F0E | Ordinal: 16143
        void glTexCoord3d(double, double, double);

    // RVA: 0x3F1F | Ordinal: 16160
        void glTexCoord3dv(double const *);

    // RVA: 0x3F30 | Ordinal: 16177
        void glTexCoord3f(float, float, float);

    // RVA: 0x3F41 | Ordinal: 16194
        void glTexCoord3fv(float const *);

    // RVA: 0x3F52 | Ordinal: 16211
        void glTexCoord3i(int, int, int);

    // RVA: 0x3F63 | Ordinal: 16228
        void glTexCoord3iv(int const *);

    // RVA: 0x3F74 | Ordinal: 16245
        void glTexCoord3s(short, short, short);

    // RVA: 0x3F85 | Ordinal: 16262
        void glTexCoord3sv(short const *);

    // RVA: 0x3F96 | Ordinal: 16279
        void glTexCoord4d(double, double, double, double);

    // RVA: 0x3FA7 | Ordinal: 16296
        void glTexCoord4dv(double const *);

    // RVA: 0x3FB8 | Ordinal: 16313
        void glTexCoord4f(float, float, float, float);

    // RVA: 0x3FC9 | Ordinal: 16330
        void glTexCoord4fv(float const *);

    // RVA: 0x3FDA | Ordinal: 16347
        void glTexCoord4i(int, int, int, int);

    // RVA: 0x3FEB | Ordinal: 16364
        void glTexCoord4iv(int const *);

    // RVA: 0x3FFC | Ordinal: 16381
        void glTexCoord4s(short, short, short, short);

    // RVA: 0x400D | Ordinal: 16398
        void glTexCoord4sv(short const *);

    // RVA: 0x4019 | Ordinal: 16410
        void glTexCoordP1ui(unsigned int, unsigned int);

    // RVA: 0x4025 | Ordinal: 16422
        void glTexCoordP1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4031 | Ordinal: 16434
        void glTexCoordP2ui(unsigned int, unsigned int);

    // RVA: 0x403D | Ordinal: 16446
        void glTexCoordP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4049 | Ordinal: 16458
        void glTexCoordP3ui(unsigned int, unsigned int);

    // RVA: 0x4055 | Ordinal: 16470
        void glTexCoordP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4061 | Ordinal: 16482
        void glTexCoordP4ui(unsigned int, unsigned int);

    // RVA: 0x406D | Ordinal: 16494
        void glTexCoordP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x407D | Ordinal: 16510
        void glTexCoordPointer(int, unsigned int, int, void const *);

    // RVA: 0x408E | Ordinal: 16527
        void glTexEnvf(unsigned int, unsigned int, float);

    // RVA: 0x409F | Ordinal: 16544
        void glTexEnvfv(unsigned int, unsigned int, float const *);

    // RVA: 0x40B0 | Ordinal: 16561
        void glTexEnvi(unsigned int, unsigned int, int);

    // RVA: 0x40C1 | Ordinal: 16578
        void glTexEnviv(unsigned int, unsigned int, int const *);

    // RVA: 0x40D2 | Ordinal: 16595
        void glTexGend(unsigned int, unsigned int, double);

    // RVA: 0x40E3 | Ordinal: 16612
        void glTexGendv(unsigned int, unsigned int, double const *);

    // RVA: 0x40F4 | Ordinal: 16629
        void glTexGenf(unsigned int, unsigned int, float);

    // RVA: 0x4105 | Ordinal: 16646
        void glTexGenfv(unsigned int, unsigned int, float const *);

    // RVA: 0x4116 | Ordinal: 16663
        void glTexGeni(unsigned int, unsigned int, int);

    // RVA: 0x4127 | Ordinal: 16680
        void glTexGeniv(unsigned int, unsigned int, int const *);

    // RVA: 0x413F | Ordinal: 16704
        void glTexImage1D(unsigned int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x415A | Ordinal: 16731
        void glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x416A | Ordinal: 16747
        void glTexImage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x4183 | Ordinal: 16772
        void glTexImage3D(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4193 | Ordinal: 16788
        void glTexImage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x41A6 | Ordinal: 16807
        void glTexParameterIiv(unsigned int, unsigned int, int const *);

    // RVA: 0x41B9 | Ordinal: 16826
        void glTexParameterIuiv(unsigned int, unsigned int, unsigned int const *);

    // RVA: 0x41D4 | Ordinal: 16853
        void glTexParameterf(unsigned int, unsigned int, float);

    // RVA: 0x41EF | Ordinal: 16880
        void glTexParameterfv(unsigned int, unsigned int, float const *);

    // RVA: 0x420A | Ordinal: 16907
        void glTexParameteri(unsigned int, unsigned int, int);

    // RVA: 0x4225 | Ordinal: 16934
        void glTexParameteriv(unsigned int, unsigned int, int const *);

    // RVA: 0x422D | Ordinal: 16942
        void glTexStorage1D(unsigned int, int, unsigned int, int);

    // RVA: 0x4236 | Ordinal: 16951
        void glTexStorage2D(unsigned int, int, unsigned int, int, int);

    // RVA: 0x423D | Ordinal: 16958
        void glTexStorage2DMultisample(unsigned int, int, unsigned int, int, int, unsigned char);

    // RVA: 0x4246 | Ordinal: 16967
        void glTexStorage3D(unsigned int, int, unsigned int, int, int, int);

    // RVA: 0x424D | Ordinal: 16974
        void glTexStorage3DMultisample(unsigned int, int, unsigned int, int, int, int, unsigned char);

    // RVA: 0x4266 | Ordinal: 16999
        void glTexSubImage1D(unsigned int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4280 | Ordinal: 17025
        void glTexSubImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x4299 | Ordinal: 17050
        void glTexSubImage3D(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const *);

    // RVA: 0x42C1 | Ordinal: 17090
        void glTextureView(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x42D8 | Ordinal: 17113
        void glTransformFeedbackVaryings(unsigned int, int, char const *const *, unsigned int);

    // RVA: 0x42EB | Ordinal: 17132
        void glTranslated(double, double, double);

    // RVA: 0x42FC | Ordinal: 17149
        void glTranslatef(float, float, float);

    // RVA: 0x4306 | Ordinal: 17159
        void glUniform1d(int, double);

    // RVA: 0x4312 | Ordinal: 17171
        void glUniform1dv(int, int, double const *);

    // RVA: 0x4327 | Ordinal: 17192
        void glUniform1f(int, float);

    // RVA: 0x433C | Ordinal: 17213
        void glUniform1fv(int, int, float const *);

    // RVA: 0x4351 | Ordinal: 17234
        void glUniform1i(int, int);

    // RVA: 0x4366 | Ordinal: 17255
        void glUniform1iv(int, int, int const *);

    // RVA: 0x4379 | Ordinal: 17274
        void glUniform1ui(int, unsigned int);

    // RVA: 0x438C | Ordinal: 17293
        void glUniform1uiv(int, int, unsigned int const *);

    // RVA: 0x4398 | Ordinal: 17305
        void glUniform2d(int, double, double);

    // RVA: 0x43A4 | Ordinal: 17317
        void glUniform2dv(int, int, double const *);

    // RVA: 0x43B9 | Ordinal: 17338
        void glUniform2f(int, float, float);

    // RVA: 0x43CE | Ordinal: 17359
        void glUniform2fv(int, int, float const *);

    // RVA: 0x43E3 | Ordinal: 17380
        void glUniform2i(int, int, int);

    // RVA: 0x43F8 | Ordinal: 17401
        void glUniform2iv(int, int, int const *);

    // RVA: 0x440B | Ordinal: 17420
        void glUniform2ui(int, unsigned int, unsigned int);

    // RVA: 0x441E | Ordinal: 17439
        void glUniform2uiv(int, int, unsigned int const *);

    // RVA: 0x442A | Ordinal: 17451
        void glUniform3d(int, double, double, double);

    // RVA: 0x4436 | Ordinal: 17463
        void glUniform3dv(int, int, double const *);

    // RVA: 0x444B | Ordinal: 17484
        void glUniform3f(int, float, float, float);

    // RVA: 0x4460 | Ordinal: 17505
        void glUniform3fv(int, int, float const *);

    // RVA: 0x4475 | Ordinal: 17526
        void glUniform3i(int, int, int, int);

    // RVA: 0x448A | Ordinal: 17547
        void glUniform3iv(int, int, int const *);

    // RVA: 0x449D | Ordinal: 17566
        void glUniform3ui(int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x44B0 | Ordinal: 17585
        void glUniform3uiv(int, int, unsigned int const *);

    // RVA: 0x44BC | Ordinal: 17597
        void glUniform4d(int, double, double, double, double);

    // RVA: 0x44C8 | Ordinal: 17609
        void glUniform4dv(int, int, double const *);

    // RVA: 0x44DD | Ordinal: 17630
        void glUniform4f(int, float, float, float, float);

    // RVA: 0x44F2 | Ordinal: 17651
        void glUniform4fv(int, int, float const *);

    // RVA: 0x4507 | Ordinal: 17672
        void glUniform4i(int, int, int, int, int);

    // RVA: 0x451C | Ordinal: 17693
        void glUniform4iv(int, int, int const *);

    // RVA: 0x452F | Ordinal: 17712
        void glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4542 | Ordinal: 17731
        void glUniform4uiv(int, int, unsigned int const *);

    // RVA: 0x4554 | Ordinal: 17749
        void glUniformBlockBinding(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4560 | Ordinal: 17761
        void glUniformMatrix2dv(int, int, unsigned char, double const *);

    // RVA: 0x4575 | Ordinal: 17782
        void glUniformMatrix2fv(int, int, unsigned char, float const *);

    // RVA: 0x4581 | Ordinal: 17794
        void glUniformMatrix2x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4595 | Ordinal: 17814
        void glUniformMatrix2x3fv(int, int, unsigned char, float const *);

    // RVA: 0x45A1 | Ordinal: 17826
        void glUniformMatrix2x4dv(int, int, unsigned char, double const *);

    // RVA: 0x45B5 | Ordinal: 17846
        void glUniformMatrix2x4fv(int, int, unsigned char, float const *);

    // RVA: 0x45C1 | Ordinal: 17858
        void glUniformMatrix3dv(int, int, unsigned char, double const *);

    // RVA: 0x45D6 | Ordinal: 17879
        void glUniformMatrix3fv(int, int, unsigned char, float const *);

    // RVA: 0x45E2 | Ordinal: 17891
        void glUniformMatrix3x2dv(int, int, unsigned char, double const *);

    // RVA: 0x45F6 | Ordinal: 17911
        void glUniformMatrix3x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4602 | Ordinal: 17923
        void glUniformMatrix3x4dv(int, int, unsigned char, double const *);

    // RVA: 0x4616 | Ordinal: 17943
        void glUniformMatrix3x4fv(int, int, unsigned char, float const *);

    // RVA: 0x4622 | Ordinal: 17955
        void glUniformMatrix4dv(int, int, unsigned char, double const *);

    // RVA: 0x4637 | Ordinal: 17976
        void glUniformMatrix4fv(int, int, unsigned char, float const *);

    // RVA: 0x4643 | Ordinal: 17988
        void glUniformMatrix4x2dv(int, int, unsigned char, double const *);

    // RVA: 0x4657 | Ordinal: 18008
        void glUniformMatrix4x2fv(int, int, unsigned char, float const *);

    // RVA: 0x4663 | Ordinal: 18020
        void glUniformMatrix4x3dv(int, int, unsigned char, double const *);

    // RVA: 0x4677 | Ordinal: 18040
        void glUniformMatrix4x3fv(int, int, unsigned char, float const *);

    // RVA: 0x4683 | Ordinal: 18052
        void glUniformSubroutinesuiv(unsigned int, int, unsigned int const *);

    // RVA: 0x4699 | Ordinal: 18074
        void glUnmapBuffer(unsigned int);

    // RVA: 0x46B0 | Ordinal: 18097
        void glUseProgram(unsigned int);

    // RVA: 0x46BB | Ordinal: 18108
        void glUseProgramStages(unsigned int, unsigned int, unsigned int);

    // RVA: 0x46D0 | Ordinal: 18129
        void glValidateProgram(unsigned int);

    // RVA: 0x46DB | Ordinal: 18140
        void glValidateProgramPipeline(unsigned int);

    // RVA: 0x46EE | Ordinal: 18159
        void glVertex2d(double, double);

    // RVA: 0x46FF | Ordinal: 18176
        void glVertex2dv(double const *);

    // RVA: 0x4710 | Ordinal: 18193
        void glVertex2f(float, float);

    // RVA: 0x4721 | Ordinal: 18210
        void glVertex2fv(float const *);

    // RVA: 0x4732 | Ordinal: 18227
        void glVertex2i(int, int);

    // RVA: 0x4743 | Ordinal: 18244
        void glVertex2iv(int const *);

    // RVA: 0x4754 | Ordinal: 18261
        void glVertex2s(short, short);

    // RVA: 0x4765 | Ordinal: 18278
        void glVertex2sv(short const *);

    // RVA: 0x4776 | Ordinal: 18295
        void glVertex3d(double, double, double);

    // RVA: 0x4787 | Ordinal: 18312
        void glVertex3dv(double const *);

    // RVA: 0x4798 | Ordinal: 18329
        void glVertex3f(float, float, float);

    // RVA: 0x47A9 | Ordinal: 18346
        void glVertex3fv(float const *);

    // RVA: 0x47BA | Ordinal: 18363
        void glVertex3i(int, int, int);

    // RVA: 0x47CB | Ordinal: 18380
        void glVertex3iv(int const *);

    // RVA: 0x47DC | Ordinal: 18397
        void glVertex3s(short, short, short);

    // RVA: 0x47ED | Ordinal: 18414
        void glVertex3sv(short const *);

    // RVA: 0x47FE | Ordinal: 18431
        void glVertex4d(double, double, double, double);

    // RVA: 0x480F | Ordinal: 18448
        void glVertex4dv(double const *);

    // RVA: 0x4820 | Ordinal: 18465
        void glVertex4f(float, float, float, float);

    // RVA: 0x4831 | Ordinal: 18482
        void glVertex4fv(float const *);

    // RVA: 0x4842 | Ordinal: 18499
        void glVertex4i(int, int, int, int);

    // RVA: 0x4853 | Ordinal: 18516
        void glVertex4iv(int const *);

    // RVA: 0x4864 | Ordinal: 18533
        void glVertex4s(short, short, short, short);

    // RVA: 0x4875 | Ordinal: 18550
        void glVertex4sv(short const *);

    // RVA: 0x4890 | Ordinal: 18577
        void glVertexAttrib1d(unsigned int, double);

    // RVA: 0x489D | Ordinal: 18590
        void glVertexAttrib1dv(unsigned int, double const *);

    // RVA: 0x48AB | Ordinal: 18604
        void glVertexAttrib1f(unsigned int, float);

    // RVA: 0x48B9 | Ordinal: 18618
        void glVertexAttrib1fv(unsigned int, float const *);

    // RVA: 0x48C6 | Ordinal: 18631
        void glVertexAttrib1s(unsigned int, short);

    // RVA: 0x48D3 | Ordinal: 18644
        void glVertexAttrib1sv(unsigned int, short const *);

    // RVA: 0x48E0 | Ordinal: 18657
        void glVertexAttrib2d(unsigned int, double, double);

    // RVA: 0x48ED | Ordinal: 18670
        void glVertexAttrib2dv(unsigned int, double const *);

    // RVA: 0x48FB | Ordinal: 18684
        void glVertexAttrib2f(unsigned int, float, float);

    // RVA: 0x4909 | Ordinal: 18698
        void glVertexAttrib2fv(unsigned int, float const *);

    // RVA: 0x4916 | Ordinal: 18711
        void glVertexAttrib2s(unsigned int, short, short);

    // RVA: 0x4923 | Ordinal: 18724
        void glVertexAttrib2sv(unsigned int, short const *);

    // RVA: 0x4930 | Ordinal: 18737
        void glVertexAttrib3d(unsigned int, double, double, double);

    // RVA: 0x493D | Ordinal: 18750
        void glVertexAttrib3dv(unsigned int, double const *);

    // RVA: 0x494B | Ordinal: 18764
        void glVertexAttrib3f(unsigned int, float, float, float);

    // RVA: 0x4959 | Ordinal: 18778
        void glVertexAttrib3fv(unsigned int, float const *);

    // RVA: 0x4966 | Ordinal: 18791
        void glVertexAttrib3s(unsigned int, short, short, short);

    // RVA: 0x4973 | Ordinal: 18804
        void glVertexAttrib3sv(unsigned int, short const *);

    // RVA: 0x4980 | Ordinal: 18817
        void glVertexAttrib4Nbv(unsigned int, signed char const *);

    // RVA: 0x498D | Ordinal: 18830
        void glVertexAttrib4Niv(unsigned int, int const *);

    // RVA: 0x499A | Ordinal: 18843
        void glVertexAttrib4Nsv(unsigned int, short const *);

    // RVA: 0x49A7 | Ordinal: 18856
        void glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);

    // RVA: 0x49B4 | Ordinal: 18869
        void glVertexAttrib4Nubv(unsigned int, unsigned char const *);

    // RVA: 0x49C1 | Ordinal: 18882
        void glVertexAttrib4Nuiv(unsigned int, unsigned int const *);

    // RVA: 0x49CE | Ordinal: 18895
        void glVertexAttrib4Nusv(unsigned int, unsigned short const *);

    // RVA: 0x49DB | Ordinal: 18908
        void glVertexAttrib4bv(unsigned int, signed char const *);

    // RVA: 0x49E8 | Ordinal: 18921
        void glVertexAttrib4d(unsigned int, double, double, double, double);

    // RVA: 0x49F5 | Ordinal: 18934
        void glVertexAttrib4dv(unsigned int, double const *);

    // RVA: 0x4A03 | Ordinal: 18948
        void glVertexAttrib4f(unsigned int, float, float, float, float);

    // RVA: 0x4A11 | Ordinal: 18962
        void glVertexAttrib4fv(unsigned int, float const *);

    // RVA: 0x4A1E | Ordinal: 18975
        void glVertexAttrib4iv(unsigned int, int const *);

    // RVA: 0x4A2B | Ordinal: 18988
        void glVertexAttrib4s(unsigned int, short, short, short, short);

    // RVA: 0x4A38 | Ordinal: 19001
        void glVertexAttrib4sv(unsigned int, short const *);

    // RVA: 0x4A45 | Ordinal: 19014
        void glVertexAttrib4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4A52 | Ordinal: 19027
        void glVertexAttrib4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4A5F | Ordinal: 19040
        void glVertexAttrib4usv(unsigned int, unsigned short const *);

    // RVA: 0x4A66 | Ordinal: 19047
        void glVertexAttribBinding(unsigned int, unsigned int);

    // RVA: 0x4A75 | Ordinal: 19062
        void glVertexAttribDivisor(unsigned int, unsigned int);

    // RVA: 0x4A7C | Ordinal: 19069
        void glVertexAttribFormat(unsigned int, int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4A87 | Ordinal: 19080
        void glVertexAttribI1i(unsigned int, int);

    // RVA: 0x4A92 | Ordinal: 19091
        void glVertexAttribI1iv(unsigned int, int const *);

    // RVA: 0x4A9D | Ordinal: 19102
        void glVertexAttribI1ui(unsigned int, unsigned int);

    // RVA: 0x4AA8 | Ordinal: 19113
        void glVertexAttribI1uiv(unsigned int, unsigned int const *);

    // RVA: 0x4AB3 | Ordinal: 19124
        void glVertexAttribI2i(unsigned int, int, int);

    // RVA: 0x4ABE | Ordinal: 19135
        void glVertexAttribI2iv(unsigned int, int const *);

    // RVA: 0x4AC9 | Ordinal: 19146
        void glVertexAttribI2ui(unsigned int, unsigned int, unsigned int);

    // RVA: 0x4AD4 | Ordinal: 19157
        void glVertexAttribI2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4ADF | Ordinal: 19168
        void glVertexAttribI3i(unsigned int, int, int, int);

    // RVA: 0x4AEA | Ordinal: 19179
        void glVertexAttribI3iv(unsigned int, int const *);

    // RVA: 0x4AF5 | Ordinal: 19190
        void glVertexAttribI3ui(unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B00 | Ordinal: 19201
        void glVertexAttribI3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B0B | Ordinal: 19212
        void glVertexAttribI4bv(unsigned int, signed char const *);

    // RVA: 0x4B17 | Ordinal: 19224
        void glVertexAttribI4i(unsigned int, int, int, int, int);

    // RVA: 0x4B23 | Ordinal: 19236
        void glVertexAttribI4iv(unsigned int, int const *);

    // RVA: 0x4B2E | Ordinal: 19247
        void glVertexAttribI4sv(unsigned int, short const *);

    // RVA: 0x4B39 | Ordinal: 19258
        void glVertexAttribI4ubv(unsigned int, unsigned char const *);

    // RVA: 0x4B45 | Ordinal: 19270
        void glVertexAttribI4ui(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x4B51 | Ordinal: 19282
        void glVertexAttribI4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4B5C | Ordinal: 19293
        void glVertexAttribI4usv(unsigned int, unsigned short const *);

    // RVA: 0x4B63 | Ordinal: 19300
        void glVertexAttribIFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4B76 | Ordinal: 19319
        void glVertexAttribIPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4B80 | Ordinal: 19329
        void glVertexAttribL1d(unsigned int, double);

    // RVA: 0x4B8A | Ordinal: 19339
        void glVertexAttribL1dv(unsigned int, double const *);

    // RVA: 0x4B94 | Ordinal: 19349
        void glVertexAttribL2d(unsigned int, double, double);

    // RVA: 0x4B9E | Ordinal: 19359
        void glVertexAttribL2dv(unsigned int, double const *);

    // RVA: 0x4BA8 | Ordinal: 19369
        void glVertexAttribL3d(unsigned int, double, double, double);

    // RVA: 0x4BB2 | Ordinal: 19379
        void glVertexAttribL3dv(unsigned int, double const *);

    // RVA: 0x4BBC | Ordinal: 19389
        void glVertexAttribL4d(unsigned int, double, double, double, double);

    // RVA: 0x4BC6 | Ordinal: 19399
        void glVertexAttribL4dv(unsigned int, double const *);

    // RVA: 0x4BCC | Ordinal: 19405
        void glVertexAttribLFormat(unsigned int, int, unsigned int, unsigned int);

    // RVA: 0x4BD6 | Ordinal: 19415
        void glVertexAttribLPointer(unsigned int, int, unsigned int, int, void const *);

    // RVA: 0x4BE4 | Ordinal: 19429
        void glVertexAttribP1ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4BF2 | Ordinal: 19443
        void glVertexAttribP1uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C00 | Ordinal: 19457
        void glVertexAttribP2ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C0E | Ordinal: 19471
        void glVertexAttribP2uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C1C | Ordinal: 19485
        void glVertexAttribP3ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C2A | Ordinal: 19499
        void glVertexAttribP3uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C38 | Ordinal: 19513
        void glVertexAttribP4ui(unsigned int, unsigned int, unsigned char, unsigned int);

    // RVA: 0x4C46 | Ordinal: 19527
        void glVertexAttribP4uiv(unsigned int, unsigned int, unsigned char, unsigned int const *);

    // RVA: 0x4C5B | Ordinal: 19548
        void glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const *);

    // RVA: 0x4C62 | Ordinal: 19555
        void glVertexBindingDivisor(unsigned int, unsigned int);

    // RVA: 0x4C70 | Ordinal: 19569
        void glVertexP2ui(unsigned int, unsigned int);

    // RVA: 0x4C7C | Ordinal: 19581
        void glVertexP2uiv(unsigned int, unsigned int const *);

    // RVA: 0x4C88 | Ordinal: 19593
        void glVertexP3ui(unsigned int, unsigned int);

    // RVA: 0x4C94 | Ordinal: 19605
        void glVertexP3uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CA0 | Ordinal: 19617
        void glVertexP4ui(unsigned int, unsigned int);

    // RVA: 0x4CAC | Ordinal: 19629
        void glVertexP4uiv(unsigned int, unsigned int const *);

    // RVA: 0x4CBC | Ordinal: 19645
        void glVertexPointer(int, unsigned int, int, void const *);

    // RVA: 0x4CD5 | Ordinal: 19670
        void glViewport(int, int, int, int);

    // RVA: 0x4CDF | Ordinal: 19680
        void glViewportArrayv(unsigned int, int, float const *);

    // RVA: 0x4CE9 | Ordinal: 19690
        void glViewportIndexedf(unsigned int, float, float, float, float);

    // RVA: 0x4CF3 | Ordinal: 19700
        void glViewportIndexedfv(unsigned int, float const *);

    // RVA: 0x4D04 | Ordinal: 19717
        void glWaitSync(struct __GLsync *, unsigned int, unsigned __int64);

    // RVA: 0x4D13 | Ordinal: 19732
        void glWindowPos2d(double, double);

    // RVA: 0x4D20 | Ordinal: 19745
        void glWindowPos2dv(double const *);

    // RVA: 0x4D2D | Ordinal: 19758
        void glWindowPos2f(float, float);

    // RVA: 0x4D3A | Ordinal: 19771
        void glWindowPos2fv(float const *);

    // RVA: 0x4D47 | Ordinal: 19784
        void glWindowPos2i(int, int);

    // RVA: 0x4D54 | Ordinal: 19797
        void glWindowPos2iv(int const *);

    // RVA: 0x4D61 | Ordinal: 19810
        void glWindowPos2s(short, short);

    // RVA: 0x4D6E | Ordinal: 19823
        void glWindowPos2sv(short const *);

    // RVA: 0x4D7B | Ordinal: 19836
        void glWindowPos3d(double, double, double);

    // RVA: 0x4D88 | Ordinal: 19849
        void glWindowPos3dv(double const *);

    // RVA: 0x4D95 | Ordinal: 19862
        void glWindowPos3f(float, float, float);

    // RVA: 0x4DA2 | Ordinal: 19875
        void glWindowPos3fv(float const *);

    // RVA: 0x4DAF | Ordinal: 19888
        void glWindowPos3i(int, int, int);

    // RVA: 0x4DBC | Ordinal: 19901
        void glWindowPos3iv(int const *);

    // RVA: 0x4DC9 | Ordinal: 19914
        void glWindowPos3s(short, short, short);

    // RVA: 0x4DD6 | Ordinal: 19927
        void glWindowPos3sv(short const *);

    // RVA: 0x4F30 | Ordinal: 20273
        void initializeOpenGLFunctions(void);

    // RVA: 0x4FF2 | Ordinal: 20467
        void isContextCompatible(class QOpenGLContext *);

    // RVA: 0x6116 | Ordinal: 24855
        void versionProfile(void);

    // RVA: 0x493 | Ordinal: 1172
        void _QOpenGLFunctions_4_4_Compatibility(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLFUNCTIONS_4_4_COMPATIBILITY_HPP
