#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImGui
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImGui
{
public:

    // RVA: 0x135 | Ordinal: 310
        void AcceptDragDropPayload(char const *, int);

    // RVA: 0x136 | Ordinal: 311
        void ActivateItem(unsigned int);

    // RVA: 0x140 | Ordinal: 321
        void AddContextHook(struct ImGuiContext *, struct ImGuiContextHook const *);

    // RVA: 0x168 | Ordinal: 361
        void AlignTextToFramePadding(void);

    // RVA: 0x172 | Ordinal: 371
        void ArrowButton(char const *, int);

    // RVA: 0x173 | Ordinal: 372
        void ArrowButtonEx(char const *, int, struct ImVec2, int);

    // RVA: 0x174 | Ordinal: 373
        void Begin(char const *, bool *, int);

    // RVA: 0x176 | Ordinal: 375
        void BeginChild(unsigned int, struct ImVec2 const &, bool, int);

    // RVA: 0x177 | Ordinal: 376
        void BeginChild(char const *, struct ImVec2 const &, bool, int);

    // RVA: 0x178 | Ordinal: 377
        void BeginChildEx(char const *, unsigned int, struct ImVec2 const &, bool, int);

    // RVA: 0x179 | Ordinal: 378
        void BeginChildFrame(unsigned int, struct ImVec2 const &, int);

    // RVA: 0x17A | Ordinal: 379
        void BeginColumns(char const *, int, int);

    // RVA: 0x17B | Ordinal: 380
        void BeginCombo(char const *, char const *, int);

    // RVA: 0x17C | Ordinal: 381
        void BeginDragDropSource(int);

    // RVA: 0x17D | Ordinal: 382
        void BeginDragDropTarget(void);

    // RVA: 0x17E | Ordinal: 383
        void BeginDragDropTargetCustom(struct ImRect const &, unsigned int);

    // RVA: 0x17F | Ordinal: 384
        void BeginGroup(void);

    // RVA: 0x180 | Ordinal: 385
        void BeginHorizontal(int, struct ImVec2 const &, float);

    // RVA: 0x181 | Ordinal: 386
        void BeginHorizontal(char const *, struct ImVec2 const &, float);

    // RVA: 0x182 | Ordinal: 387
        void BeginHorizontal(void const *, struct ImVec2 const &, float);

    // RVA: 0x186 | Ordinal: 391
        void BeginMainMenuBar(void);

    // RVA: 0x187 | Ordinal: 392
        void BeginMenu(char const *, bool);

    // RVA: 0x188 | Ordinal: 393
        void BeginMenuBar(void);

    // RVA: 0x18A | Ordinal: 395
        void BeginPopup(char const *, int);

    // RVA: 0x18B | Ordinal: 396
        void BeginPopupContextItem(char const *, int);

    // RVA: 0x18C | Ordinal: 397
        void BeginPopupContextVoid(char const *, int);

    // RVA: 0x18D | Ordinal: 398
        void BeginPopupContextWindow(char const *, int);

    // RVA: 0x18E | Ordinal: 399
        void BeginPopupEx(unsigned int, int);

    // RVA: 0x18F | Ordinal: 400
        void BeginPopupModal(char const *, bool *, int);

    // RVA: 0x190 | Ordinal: 401
        void BeginTabBar(char const *, int);

    // RVA: 0x191 | Ordinal: 402
        void BeginTabBarEx(struct ImGuiTabBar *, struct ImRect const &, int);

    // RVA: 0x192 | Ordinal: 403
        void BeginTabItem(char const *, bool *, int);

    // RVA: 0x193 | Ordinal: 404
        void BeginTooltip(void);

    // RVA: 0x194 | Ordinal: 405
        void BeginTooltipEx(int, int);

    // RVA: 0x195 | Ordinal: 406
        void BeginVertical(int, struct ImVec2 const &, float);

    // RVA: 0x196 | Ordinal: 407
        void BeginVertical(char const *, struct ImVec2 const &, float);

    // RVA: 0x197 | Ordinal: 408
        void BeginVertical(void const *, struct ImVec2 const &, float);

    // RVA: 0x198 | Ordinal: 409
        void BringWindowToDisplayBack(struct ImGuiWindow *);

    // RVA: 0x199 | Ordinal: 410
        void BringWindowToDisplayFront(struct ImGuiWindow *);

    // RVA: 0x19A | Ordinal: 411
        void BringWindowToFocusFront(struct ImGuiWindow *);

    // RVA: 0x1A0 | Ordinal: 417
        void Bullet(void);

    // RVA: 0x1A1 | Ordinal: 418
        void BulletText(char const *, ...);

    // RVA: 0x1A2 | Ordinal: 419
        void BulletTextV(char const *, char *);

    // RVA: 0x1A5 | Ordinal: 422
        void Button(char const *, struct ImVec2 const &);

    // RVA: 0x1A6 | Ordinal: 423
        void ButtonBehavior(struct ImRect const &, unsigned int, bool *, bool *, int);

    // RVA: 0x1A7 | Ordinal: 424
        void ButtonEx(char const *, struct ImVec2 const &, int);

    // RVA: 0x1AB | Ordinal: 428
        void CalcItemSize(struct ImVec2, float, float);

    // RVA: 0x1AC | Ordinal: 429
        void CalcItemWidth(void);

    // RVA: 0x1AE | Ordinal: 431
        void CalcListClipping(int, float, int *, int *);

    // RVA: 0x1AF | Ordinal: 432
        void CalcTextSize(char const *, char const *, bool, float);

    // RVA: 0x1B1 | Ordinal: 434
        void CalcTypematicRepeatAmount(float, float, float, float);

    // RVA: 0x1B2 | Ordinal: 435
        void CalcWindowExpectedSize(struct ImGuiWindow *);

    // RVA: 0x1B4 | Ordinal: 437
        void CalcWrapWidthForPos(struct ImVec2 const &, float);

    // RVA: 0x1B5 | Ordinal: 438
        void CallContextHooks(struct ImGuiContext *, enum ImGuiContextHookType);

    // RVA: 0x1B6 | Ordinal: 439
        void CaptureKeyboardFromApp(bool);

    // RVA: 0x1B7 | Ordinal: 440
        void CaptureMouseFromApp(bool);

    // RVA: 0x1B9 | Ordinal: 442
        void Checkbox(char const *, bool *);

    // RVA: 0x1BA | Ordinal: 443
        void CheckboxFlags(char const *, int *, int);

    // RVA: 0x1BB | Ordinal: 444
        void CheckboxFlags(char const *, unsigned int *, unsigned int);

    // RVA: 0x1C1 | Ordinal: 450
        void ClearActiveID(void);

    // RVA: 0x1C3 | Ordinal: 452
        void ClearDragDrop(void);

    // RVA: 0x1C7 | Ordinal: 456
        void ClearIniSettings(void);

    // RVA: 0x1D1 | Ordinal: 466
        void CloseButton(unsigned int, struct ImVec2 const &);

    // RVA: 0x1D2 | Ordinal: 467
        void CloseCurrentPopup(void);

    // RVA: 0x1D3 | Ordinal: 468
        void ClosePopupToLevel(int, bool);

    // RVA: 0x1D4 | Ordinal: 469
        void ClosePopupsOverWindow(struct ImGuiWindow *, bool);

    // RVA: 0x1D5 | Ordinal: 470
        void CollapseButton(unsigned int, struct ImVec2 const &);

    // RVA: 0x1D6 | Ordinal: 471
        void CollapsingHeader(char const *, int);

    // RVA: 0x1D7 | Ordinal: 472
        void CollapsingHeader(char const *, bool *, int);

    // RVA: 0x1D8 | Ordinal: 473
        void ColorButton(char const *, struct ImVec4 const &, int, struct ImVec2);

    // RVA: 0x1D9 | Ordinal: 474
        void ColorConvertFloat4ToU32(struct ImVec4 const &);

    // RVA: 0x1DA | Ordinal: 475
        void ColorConvertHSVtoRGB(float, float, float, float &, float &, float &);

    // RVA: 0x1DB | Ordinal: 476
        void ColorConvertRGBtoHSV(float, float, float, float &, float &, float &);

    // RVA: 0x1DC | Ordinal: 477
        void ColorConvertU32ToFloat4(unsigned int);

    // RVA: 0x1DD | Ordinal: 478
        void ColorEdit3(char const *, float *const, int);

    // RVA: 0x1DE | Ordinal: 479
        void ColorEdit4(char const *, float *const, int);

    // RVA: 0x1DF | Ordinal: 480
        void ColorEditOptionsPopup(float const *, int);

    // RVA: 0x1E0 | Ordinal: 481
        void ColorPicker3(char const *, float *const, int);

    // RVA: 0x1E1 | Ordinal: 482
        void ColorPicker4(char const *, float *const, int, float const *);

    // RVA: 0x1E2 | Ordinal: 483
        void ColorPickerOptionsPopup(float const *, int);

    // RVA: 0x1E3 | Ordinal: 484
        void ColorTooltip(char const *, float const *, int);

    // RVA: 0x1E4 | Ordinal: 485
        void Columns(int, char const *, bool);

    // RVA: 0x1E6 | Ordinal: 487
        void Combo(char const *, int *, char const *, int);

    // RVA: 0x1E7 | Ordinal: 488
        void Combo(char const *, int *, bool (__cdecl *)(void *, int, char const **), void *, int, int);

    // RVA: 0x1E8 | Ordinal: 489
        void Combo(char const *, int *, char const *const *const, int, int);

    // RVA: 0x1EE | Ordinal: 495
        void CreateContext(struct ImFontAtlas *);

    // RVA: 0x1F0 | Ordinal: 497
        void CreateNewWindowSettings(char const *);

    // RVA: 0x1F3 | Ordinal: 500
        void CurveEditor(char const *, int, struct ImVec2 *, struct ImGui::CurveState &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &);

    // RVA: 0x1F4 | Ordinal: 501
        void CurveValue(float, int, struct ImVec2 const *);

    // RVA: 0x1F5 | Ordinal: 502
        void CurveValueSmooth(float, int, struct ImVec2 const *);

    // RVA: 0x1F6 | Ordinal: 503
        void DataTypeApplyOp(int, int, void *, void const *, void const *);

    // RVA: 0x1F7 | Ordinal: 504
        void DataTypeApplyOpFromText(char const *, char const *, int, void *, char const *);

    // RVA: 0x1F8 | Ordinal: 505
        void DataTypeClamp(int, void *, void const *, void const *);

    // RVA: 0x1F9 | Ordinal: 506
        void DataTypeCompare(int, void const *, void const *);

    // RVA: 0x1FA | Ordinal: 507
        void DataTypeFormatString(char *, int, int, void const *, char const *);

    // RVA: 0x1FB | Ordinal: 508
        void DataTypeGetInfo(int);

    // RVA: 0x1FD | Ordinal: 510
        void DebugCheckVersionAndDataLayout(char const *, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64);

    // RVA: 0x1FE | Ordinal: 511
        void DebugNodeColumns(struct ImGuiOldColumns *);

    // RVA: 0x1FF | Ordinal: 512
        void DebugNodeDrawCmdShowMeshAndBoundingBox(struct ImGuiWindow *, struct ImDrawList const *, struct ImDrawCmd const *, bool, bool);

    // RVA: 0x200 | Ordinal: 513
        void DebugNodeDrawList(struct ImGuiWindow *, struct ImDrawList const *, char const *);

    // RVA: 0x201 | Ordinal: 514
        void DebugNodeStorage(struct ImGuiStorage *, char const *);

    // RVA: 0x202 | Ordinal: 515
        void DebugNodeTabBar(struct ImGuiTabBar *, char const *);

    // RVA: 0x203 | Ordinal: 516
        void DebugNodeWindow(struct ImGuiWindow *, char const *);

    // RVA: 0x204 | Ordinal: 517
        void DebugNodeWindowSettings(struct ImGuiWindowSettings *);

    // RVA: 0x205 | Ordinal: 518
        void DebugNodeWindowsList(struct ImVector<struct ImGuiWindow *> *, char const *);

    // RVA: 0x208 | Ordinal: 521
        void DestroyContext(struct ImGuiContext *);

    // RVA: 0x20A | Ordinal: 523
        void DragBehavior(unsigned int, int, void *, float, void const *, void const *, char const *, int);

    // RVA: 0x20E | Ordinal: 527
        void DragFloat(char const *, float *, float, float, float, char const *, int);

    // RVA: 0x20B | Ordinal: 524
        void DragFloat2(char const *, float *const, float, float, float, char const *, int);

    // RVA: 0x20C | Ordinal: 525
        void DragFloat3(char const *, float *const, float, float, float, char const *, int);

    // RVA: 0x20D | Ordinal: 526
        void DragFloat4(char const *, float *const, float, float, float, char const *, int);

    // RVA: 0x20F | Ordinal: 528
        void DragFloatRange2(char const *, float *, float *, float, float, float, char const *, char const *, int);

    // RVA: 0x213 | Ordinal: 532
        void DragInt(char const *, int *, float, int, int, char const *, int);

    // RVA: 0x210 | Ordinal: 529
        void DragInt2(char const *, int *const, float, int, int, char const *, int);

    // RVA: 0x211 | Ordinal: 530
        void DragInt3(char const *, int *const, float, int, int, char const *, int);

    // RVA: 0x212 | Ordinal: 531
        void DragInt4(char const *, int *const, float, int, int, char const *, int);

    // RVA: 0x214 | Ordinal: 533
        void DragIntRange2(char const *, int *, int *, float, int, int, char const *, char const *, int);

    // RVA: 0x218 | Ordinal: 537
        void DragScalar(char const *, int, void *, float, void const *, void const *, char const *, int);

    // RVA: 0x219 | Ordinal: 538
        void DragScalar(char const *, int, void *, float, void const *, void const *, char const *, float);

    // RVA: 0x21A | Ordinal: 539
        void DragScalarN(char const *, int, void *, int, float, void const *, void const *, char const *, int);

    // RVA: 0x21B | Ordinal: 540
        void DragScalarN(char const *, int, void *, int, float, void const *, void const *, char const *, float);

    // RVA: 0x21D | Ordinal: 542
        void DrawTimeline(struct ImGui::TimelineContext &, struct ImGui::ITimelineProvider const &, struct ImVec2 const &);

    // RVA: 0x21E | Ordinal: 543
        void DrawTimelineStyleEditor(struct ImGui::TimelineContext::Style &);

    // RVA: 0x21F | Ordinal: 544
        void Dummy(struct ImVec2 const &);

    // RVA: 0x221 | Ordinal: 546
        void End(void);

    // RVA: 0x223 | Ordinal: 548
        void EndChild(void);

    // RVA: 0x224 | Ordinal: 549
        void EndChildFrame(void);

    // RVA: 0x225 | Ordinal: 550
        void EndColumns(void);

    // RVA: 0x226 | Ordinal: 551
        void EndCombo(void);

    // RVA: 0x227 | Ordinal: 552
        void EndDragDropSource(void);

    // RVA: 0x228 | Ordinal: 553
        void EndDragDropTarget(void);

    // RVA: 0x229 | Ordinal: 554
        void EndFrame(void);

    // RVA: 0x22A | Ordinal: 555
        void EndGroup(void);

    // RVA: 0x22B | Ordinal: 556
        void EndHorizontal(void);

    // RVA: 0x22F | Ordinal: 560
        void EndMainMenuBar(void);

    // RVA: 0x230 | Ordinal: 561
        void EndMenu(void);

    // RVA: 0x231 | Ordinal: 562
        void EndMenuBar(void);

    // RVA: 0x233 | Ordinal: 564
        void EndPopup(void);

    // RVA: 0x234 | Ordinal: 565
        void EndTabBar(void);

    // RVA: 0x235 | Ordinal: 566
        void EndTabItem(void);

    // RVA: 0x236 | Ordinal: 567
        void EndTooltip(void);

    // RVA: 0x237 | Ordinal: 568
        void EndVertical(void);

    // RVA: 0x238 | Ordinal: 569
        void ErrorCheckEndFrameRecover(void (__cdecl *)(void *, char const *, ...), void *);

    // RVA: 0x23B | Ordinal: 572
        void FindBestWindowPosForPopup(struct ImGuiWindow *);

    // RVA: 0x23C | Ordinal: 573
        void FindBestWindowPosForPopupEx(struct ImVec2 const &, struct ImVec2 const &, int *, struct ImRect const &, struct ImRect const &, enum ImGuiPopupPositionPolicy);

    // RVA: 0x23F | Ordinal: 576
        void FindOrCreateColumns(struct ImGuiWindow *, unsigned int);

    // RVA: 0x240 | Ordinal: 577
        void FindOrCreateWindowSettings(char const *);

    // RVA: 0x241 | Ordinal: 578
        void FindRenderedTextEnd(char const *, char const *);

    // RVA: 0x242 | Ordinal: 579
        void FindSettingsHandler(char const *);

    // RVA: 0x243 | Ordinal: 580
        void FindWindowByID(unsigned int);

    // RVA: 0x244 | Ordinal: 581
        void FindWindowByName(char const *);

    // RVA: 0x245 | Ordinal: 582
        void FindWindowSettings(unsigned int);

    // RVA: 0x24D | Ordinal: 590
        void FocusTopMostWindowUnderOne(struct ImGuiWindow *, struct ImGuiWindow *);

    // RVA: 0x24E | Ordinal: 591
        void FocusWindow(struct ImGuiWindow *);

    // RVA: 0x24F | Ordinal: 592
        void FocusableItemRegister(struct ImGuiWindow *, unsigned int);

    // RVA: 0x250 | Ordinal: 593
        void FocusableItemUnregister(struct ImGuiWindow *);

    // RVA: 0x256 | Ordinal: 599
        void GcAwakeTransientWindowBuffers(struct ImGuiWindow *);

    // RVA: 0x257 | Ordinal: 600
        void GcCompactTransientMiscBuffers(void);

    // RVA: 0x258 | Ordinal: 601
        void GcCompactTransientWindowBuffers(struct ImGuiWindow *);

    // RVA: 0x25C | Ordinal: 605
        void GetBackgroundDrawList(void);

    // RVA: 0x265 | Ordinal: 614
        void GetClipboardText(void);

    // RVA: 0x266 | Ordinal: 615
        void GetColorU32(struct ImVec4 const &);

    // RVA: 0x267 | Ordinal: 616
        void GetColorU32(int, float);

    // RVA: 0x268 | Ordinal: 617
        void GetColorU32(unsigned int);

    // RVA: 0x26D | Ordinal: 622
        void GetColumnIndex(void);

    // RVA: 0x26E | Ordinal: 623
        void GetColumnNormFromOffset(struct ImGuiOldColumns const *, float);

    // RVA: 0x26F | Ordinal: 624
        void GetColumnOffset(int);

    // RVA: 0x270 | Ordinal: 625
        void GetColumnOffsetFromNorm(struct ImGuiOldColumns const *, float);

    // RVA: 0x271 | Ordinal: 626
        void GetColumnWidth(int);

    // RVA: 0x272 | Ordinal: 627
        void GetColumnsCount(void);

    // RVA: 0x273 | Ordinal: 628
        void GetColumnsID(char const *, int);

    // RVA: 0x274 | Ordinal: 629
        void GetContentRegionAvail(void);

    // RVA: 0x275 | Ordinal: 630
        void GetContentRegionMax(void);

    // RVA: 0x276 | Ordinal: 631
        void GetContentRegionMaxAbs(void);

    // RVA: 0x277 | Ordinal: 632
        void GetCurrentContext(void);

    // RVA: 0x27B | Ordinal: 636
        void GetCursorPos(void);

    // RVA: 0x27C | Ordinal: 637
        void GetCursorPosX(void);

    // RVA: 0x27D | Ordinal: 638
        void GetCursorPosY(void);

    // RVA: 0x27E | Ordinal: 639
        void GetCursorScreenPos(void);

    // RVA: 0x27F | Ordinal: 640
        void GetCursorStartPos(void);

    // RVA: 0x280 | Ordinal: 641
        void GetDragDropPayload(void);

    // RVA: 0x281 | Ordinal: 642
        void GetDrawData(void);

    // RVA: 0x282 | Ordinal: 643
        void GetDrawListSharedData(void);

    // RVA: 0x285 | Ordinal: 646
        void GetFont(void);

    // RVA: 0x286 | Ordinal: 647
        void GetFontSize(void);

    // RVA: 0x287 | Ordinal: 648
        void GetFontTexUvWhitePixel(void);

    // RVA: 0x288 | Ordinal: 649
        void GetForegroundDrawList(void);

    // RVA: 0x289 | Ordinal: 650
        void GetFrameCount(void);

    // RVA: 0x28A | Ordinal: 651
        void GetFrameHeight(void);

    // RVA: 0x28B | Ordinal: 652
        void GetFrameHeightWithSpacing(void);

    // RVA: 0x296 | Ordinal: 663
        void GetHoveredID(void);

    // RVA: 0x297 | Ordinal: 664
        void GetID(char const *, char const *);

    // RVA: 0x298 | Ordinal: 665
        void GetID(char const *);

    // RVA: 0x299 | Ordinal: 666
        void GetID(void const *);

    // RVA: 0x2A1 | Ordinal: 674
        void GetIDWithSeed(char const *, char const *, unsigned int);

    // RVA: 0x2A2 | Ordinal: 675
        void GetIO(void);

    // RVA: 0x2A9 | Ordinal: 682
        void GetItemRectMax(void);

    // RVA: 0x2AA | Ordinal: 683
        void GetItemRectMin(void);

    // RVA: 0x2AB | Ordinal: 684
        void GetItemRectSize(void);

    // RVA: 0x2AC | Ordinal: 685
        void GetKeyIndex(int);

    // RVA: 0x2AD | Ordinal: 686
        void GetKeyPressedAmount(int, float, float);

    // RVA: 0x2B2 | Ordinal: 691
        void GetMergedKeyModFlags(void);

    // RVA: 0x2B3 | Ordinal: 692
        void GetMouseCursor(void);

    // RVA: 0x2B5 | Ordinal: 694
        void GetMouseDragDelta(int, float);

    // RVA: 0x2B6 | Ordinal: 695
        void GetMousePos(void);

    // RVA: 0x2B7 | Ordinal: 696
        void GetMousePosOnOpeningCurrentPopup(void);

    // RVA: 0x2B9 | Ordinal: 698
        void GetNavInputAmount(int, enum ImGuiInputReadMode);

    // RVA: 0x2B8 | Ordinal: 697
        void GetNavInputAmount2d(int, enum ImGuiInputReadMode, float, float);

    // RVA: 0x2C5 | Ordinal: 710
        void GetScrollMaxX(void);

    // RVA: 0x2C6 | Ordinal: 711
        void GetScrollMaxY(void);

    // RVA: 0x2C7 | Ordinal: 712
        void GetScrollX(void);

    // RVA: 0x2C8 | Ordinal: 713
        void GetScrollY(void);

    // RVA: 0x2CD | Ordinal: 718
        void GetStateStorage(void);

    // RVA: 0x2CE | Ordinal: 719
        void GetStyle(void);

    // RVA: 0x2D0 | Ordinal: 721
        void GetStyleColorName(int);

    // RVA: 0x2D2 | Ordinal: 723
        void GetStyleColorVec4(int);

    // RVA: 0x2D7 | Ordinal: 728
        void GetTextLineHeight(void);

    // RVA: 0x2D8 | Ordinal: 729
        void GetTextLineHeightWithSpacing(void);

    // RVA: 0x2D9 | Ordinal: 730
        void GetTime(void);

    // RVA: 0x2DA | Ordinal: 731
        void GetTopMostPopupModal(void);

    // RVA: 0x2DB | Ordinal: 732
        void GetTreeNodeToLabelSpacing(void);

    // RVA: 0x2DD | Ordinal: 734
        void GetVersion(void);

    // RVA: 0x2E1 | Ordinal: 738
        void GetWindowAllowedExtentRect(struct ImGuiWindow *);

    // RVA: 0x2E2 | Ordinal: 739
        void GetWindowContentRegionMax(void);

    // RVA: 0x2E3 | Ordinal: 740
        void GetWindowContentRegionMin(void);

    // RVA: 0x2E4 | Ordinal: 741
        void GetWindowContentRegionWidth(void);

    // RVA: 0x2E5 | Ordinal: 742
        void GetWindowDrawList(void);

    // RVA: 0x2E6 | Ordinal: 743
        void GetWindowHeight(void);

    // RVA: 0x2E7 | Ordinal: 744
        void GetWindowPos(void);

    // RVA: 0x2E8 | Ordinal: 745
        void GetWindowResizeID(struct ImGuiWindow *, int);

    // RVA: 0x2E9 | Ordinal: 746
        void GetWindowScrollbarID(struct ImGuiWindow *, enum ImGuiAxis);

    // RVA: 0x2EA | Ordinal: 747
        void GetWindowScrollbarRect(struct ImGuiWindow *, enum ImGuiAxis);

    // RVA: 0x2EB | Ordinal: 748
        void GetWindowSize(void);

    // RVA: 0x2EC | Ordinal: 749
        void GetWindowWidth(void);

    // RVA: 0x32F | Ordinal: 816
        void Image(void *, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec4 const &, struct ImVec4 const &);

    // RVA: 0x330 | Ordinal: 817
        void ImageButton(void *, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, int, struct ImVec4 const &, struct ImVec4 const &);

    // RVA: 0x331 | Ordinal: 818
        void ImageButtonEx(unsigned int, void *, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec4 const &, struct ImVec4 const &);

    // RVA: 0x332 | Ordinal: 819
        void Indent(float);

    // RVA: 0x333 | Ordinal: 820
        void Initialize(struct ImGuiContext *);

    // RVA: 0x335 | Ordinal: 822
        void InputDouble(char const *, double *, double, double, char const *, int);

    // RVA: 0x339 | Ordinal: 826
        void InputFloat(char const *, float *, float, float, char const *, int);

    // RVA: 0x336 | Ordinal: 823
        void InputFloat2(char const *, float *const, char const *, int);

    // RVA: 0x337 | Ordinal: 824
        void InputFloat3(char const *, float *const, char const *, int);

    // RVA: 0x338 | Ordinal: 825
        void InputFloat4(char const *, float *const, char const *, int);

    // RVA: 0x33D | Ordinal: 830
        void InputInt(char const *, int *, int, int, int);

    // RVA: 0x33A | Ordinal: 827
        void InputInt2(char const *, int *const, int);

    // RVA: 0x33B | Ordinal: 828
        void InputInt3(char const *, int *const, int);

    // RVA: 0x33C | Ordinal: 829
        void InputInt4(char const *, int *const, int);

    // RVA: 0x33E | Ordinal: 831
        void InputScalar(char const *, int, void *, void const *, void const *, char const *, int);

    // RVA: 0x33F | Ordinal: 832
        void InputScalarN(char const *, int, void *, int, void const *, void const *, char const *, int);

    // RVA: 0x340 | Ordinal: 833
        void InputText(char const *, char *, unsigned __int64, int, int (__cdecl *)(struct ImGuiInputTextCallbackData *), void *);

    // RVA: 0x341 | Ordinal: 834
        void InputTextEx(char const *, char const *, char *, int, struct ImVec2 const &, int, int (__cdecl *)(struct ImGuiInputTextCallbackData *), void *);

    // RVA: 0x342 | Ordinal: 835
        void InputTextMultiline(char const *, char *, unsigned __int64, struct ImVec2 const &, int, int (__cdecl *)(struct ImGuiInputTextCallbackData *), void *);

    // RVA: 0x343 | Ordinal: 836
        void InputTextWithHint(char const *, char const *, char *, unsigned __int64, int, int (__cdecl *)(struct ImGuiInputTextCallbackData *), void *);

    // RVA: 0x345 | Ordinal: 838
        void InvisibleButton(char const *, struct ImVec2 const &, int);

    // RVA: 0x346 | Ordinal: 839
        void IsAnyItemActive(void);

    // RVA: 0x347 | Ordinal: 840
        void IsAnyItemFocused(void);

    // RVA: 0x348 | Ordinal: 841
        void IsAnyItemHovered(void);

    // RVA: 0x349 | Ordinal: 842
        void IsAnyMouseDown(void);

    // RVA: 0x34A | Ordinal: 843
        void IsClippedEx(struct ImRect const &, unsigned int, bool);

    // RVA: 0x34B | Ordinal: 844
        void IsDragDropPayloadBeingAccepted(void);

    // RVA: 0x34E | Ordinal: 847
        void IsItemActivated(void);

    // RVA: 0x34F | Ordinal: 848
        void IsItemActive(void);

    // RVA: 0x350 | Ordinal: 849
        void IsItemClicked(int);

    // RVA: 0x351 | Ordinal: 850
        void IsItemDeactivated(void);

    // RVA: 0x352 | Ordinal: 851
        void IsItemDeactivatedAfterEdit(void);

    // RVA: 0x353 | Ordinal: 852
        void IsItemEdited(void);

    // RVA: 0x354 | Ordinal: 853
        void IsItemFocused(void);

    // RVA: 0x355 | Ordinal: 854
        void IsItemHovered(int);

    // RVA: 0x356 | Ordinal: 855
        void IsItemToggledOpen(void);

    // RVA: 0x357 | Ordinal: 856
        void IsItemToggledSelection(void);

    // RVA: 0x358 | Ordinal: 857
        void IsItemVisible(void);

    // RVA: 0x359 | Ordinal: 858
        void IsKeyDown(int);

    // RVA: 0x35A | Ordinal: 859
        void IsKeyPressed(int, bool);

    // RVA: 0x35B | Ordinal: 860
        void IsKeyReleased(int);

    // RVA: 0x35D | Ordinal: 862
        void IsMouseClicked(int, bool);

    // RVA: 0x35E | Ordinal: 863
        void IsMouseDoubleClicked(int);

    // RVA: 0x35F | Ordinal: 864
        void IsMouseDown(int);

    // RVA: 0x360 | Ordinal: 865
        void IsMouseDragPastThreshold(int, float);

    // RVA: 0x361 | Ordinal: 866
        void IsMouseDragging(int, float);

    // RVA: 0x362 | Ordinal: 867
        void IsMouseHoveringRect(struct ImVec2 const &, struct ImVec2 const &, bool);

    // RVA: 0x363 | Ordinal: 868
        void IsMousePosValid(struct ImVec2 const *);

    // RVA: 0x364 | Ordinal: 869
        void IsMouseReleased(int);

    // RVA: 0x369 | Ordinal: 874
        void IsPopupOpen(unsigned int, int);

    // RVA: 0x36A | Ordinal: 875
        void IsPopupOpen(char const *, int);

    // RVA: 0x36B | Ordinal: 876
        void IsRectVisible(struct ImVec2 const &, struct ImVec2 const &);

    // RVA: 0x36C | Ordinal: 877
        void IsRectVisible(struct ImVec2 const &);

    // RVA: 0x36D | Ordinal: 878
        void IsWindowAbove(struct ImGuiWindow *, struct ImGuiWindow *);

    // RVA: 0x36E | Ordinal: 879
        void IsWindowAppearing(void);

    // RVA: 0x36F | Ordinal: 880
        void IsWindowChildOf(struct ImGuiWindow *, struct ImGuiWindow *);

    // RVA: 0x370 | Ordinal: 881
        void IsWindowCollapsed(void);

    // RVA: 0x371 | Ordinal: 882
        void IsWindowFocused(int);

    // RVA: 0x372 | Ordinal: 883
        void IsWindowHovered(int);

    // RVA: 0x373 | Ordinal: 884
        void IsWindowNavFocusable(struct ImGuiWindow *);

    // RVA: 0x374 | Ordinal: 885
        void ItemAdd(struct ImRect const &, unsigned int, struct ImRect const *);

    // RVA: 0x375 | Ordinal: 886
        void ItemHoverable(struct ImRect const &, unsigned int);

    // RVA: 0x376 | Ordinal: 887
        void ItemSize(struct ImRect const &, float);

    // RVA: 0x377 | Ordinal: 888
        void ItemSize(struct ImVec2 const &, float);

    // RVA: 0x378 | Ordinal: 889
        void KeepAliveID(unsigned int);

    // RVA: 0x37A | Ordinal: 891
        void LabelText(char const *, char const *, ...);

    // RVA: 0x37B | Ordinal: 892
        void LabelTextV(char const *, char const *, char *);

    // RVA: 0x382 | Ordinal: 899
        void ListBox(char const *, int *, bool (__cdecl *)(void *, int, char const **), void *, int, int);

    // RVA: 0x383 | Ordinal: 900
        void ListBox(char const *, int *, char const *const *const, int, int);

    // RVA: 0x384 | Ordinal: 901
        void ListBoxFooter(void);

    // RVA: 0x385 | Ordinal: 902
        void ListBoxHeader(char const *, struct ImVec2 const &);

    // RVA: 0x386 | Ordinal: 903
        void ListBoxHeader(char const *, int, int);

    // RVA: 0x387 | Ordinal: 904
        void LoadIniSettingsFromDisk(char const *);

    // RVA: 0x388 | Ordinal: 905
        void LoadIniSettingsFromMemory(char const *, unsigned __int64);

    // RVA: 0x389 | Ordinal: 906
        void LogBegin(enum ImGuiLogType, int);

    // RVA: 0x38A | Ordinal: 907
        void LogButtons(void);

    // RVA: 0x38B | Ordinal: 908
        void LogFinish(void);

    // RVA: 0x38C | Ordinal: 909
        void LogRenderedText(struct ImVec2 const *, char const *, char const *);

    // RVA: 0x38D | Ordinal: 910
        void LogText(char const *, ...);

    // RVA: 0x38E | Ordinal: 911
        void LogToBuffer(int);

    // RVA: 0x38F | Ordinal: 912
        void LogToClipboard(int);

    // RVA: 0x390 | Ordinal: 913
        void LogToFile(int, char const *);

    // RVA: 0x391 | Ordinal: 914
        void LogToTTY(int);

    // RVA: 0x393 | Ordinal: 916
        void MarkIniSettingsDirty(struct ImGuiWindow *);

    // RVA: 0x394 | Ordinal: 917
        void MarkIniSettingsDirty(void);

    // RVA: 0x395 | Ordinal: 918
        void MarkItemEdited(unsigned int);

    // RVA: 0x396 | Ordinal: 919
        void MemAlloc(unsigned __int64);

    // RVA: 0x397 | Ordinal: 920
        void MemFree(void *);

    // RVA: 0x39A | Ordinal: 923
        void MenuItem(char const *, char const *, bool *, bool);

    // RVA: 0x39B | Ordinal: 924
        void MenuItem(char const *, char const *, bool, bool);

    // RVA: 0x39F | Ordinal: 928
        void NavInitWindow(struct ImGuiWindow *, bool);

    // RVA: 0x3A0 | Ordinal: 929
        void NavMoveRequestButNoResultYet(void);

    // RVA: 0x3A1 | Ordinal: 930
        void NavMoveRequestCancel(void);

    // RVA: 0x3A2 | Ordinal: 931
        void NavMoveRequestForward(int, int, struct ImRect const &, int);

    // RVA: 0x3A3 | Ordinal: 932
        void NavMoveRequestTryWrapping(struct ImGuiWindow *, int);

    // RVA: 0x3A4 | Ordinal: 933
        void NewFrame(void);

    // RVA: 0x3A5 | Ordinal: 934
        void NewLine(void);

    // RVA: 0x3A7 | Ordinal: 936
        void NextColumn(void);

    // RVA: 0x3AA | Ordinal: 939
        void OpenPopup(char const *, int);

    // RVA: 0x3AB | Ordinal: 940
        void OpenPopupEx(unsigned int, int);

    // RVA: 0x3AC | Ordinal: 941
        void OpenPopupOnItemClick(char const *, int);

    // RVA: 0x3B9 | Ordinal: 954
        void PlotEx(enum ImGuiPlotType, char const *, float (__cdecl *)(void *, int), void *, int, int, char const *, float, float, struct ImVec2);

    // RVA: 0x3BA | Ordinal: 955
        void PlotHistogram(char const *, float (__cdecl *)(void *, int), void *, int, int, char const *, float, float, struct ImVec2);

    // RVA: 0x3BB | Ordinal: 956
        void PlotHistogram(char const *, float const *, int, int, char const *, float, float, struct ImVec2, int);

    // RVA: 0x3BE | Ordinal: 959
        void PlotLines(char const *, float (__cdecl *)(void *, int), void *, int, int, char const *, float, float, struct ImVec2);

    // RVA: 0x3BF | Ordinal: 960
        void PlotLines(char const *, float const *, int, int, char const *, float, float, struct ImVec2, int);

    // RVA: 0x3C0 | Ordinal: 961
        void PlotMultiHistograms(char const *, int, char const **, struct ImColor const *, float (__cdecl *)(void const *, int), void const *const *, int, int, float, float, struct ImVec2);

    // RVA: 0x3C1 | Ordinal: 962
        void PlotMultiLines(char const *, int, char const **, struct ImColor const *, float (__cdecl *)(void const *, int), void const *const *, int, int, float, float, struct ImVec2);

    // RVA: 0x3CB | Ordinal: 972
        void PopAllowKeyboardFocus(void);

    // RVA: 0x3CC | Ordinal: 973
        void PopButtonRepeat(void);

    // RVA: 0x3CE | Ordinal: 975
        void PopClipRect(void);

    // RVA: 0x3D0 | Ordinal: 977
        void PopColumnsBackground(void);

    // RVA: 0x3D1 | Ordinal: 978
        void PopFocusScope(void);

    // RVA: 0x3D2 | Ordinal: 979
        void PopFont(void);

    // RVA: 0x3D3 | Ordinal: 980
        void PopID(void);

    // RVA: 0x3D4 | Ordinal: 981
        void PopItemFlag(void);

    // RVA: 0x3D5 | Ordinal: 982
        void PopItemWidth(void);

    // RVA: 0x3D7 | Ordinal: 984
        void PopStyleColor(int);

    // RVA: 0x3D9 | Ordinal: 986
        void PopStyleVar(int);

    // RVA: 0x3DB | Ordinal: 988
        void PopTextWrapPos(void);

    // RVA: 0x3E3 | Ordinal: 996
        void ProgressBar(float, struct ImVec2 const &, char const *);

    // RVA: 0x3E5 | Ordinal: 998
        void PushAllowKeyboardFocus(bool);

    // RVA: 0x3E6 | Ordinal: 999
        void PushButtonRepeat(bool);

    // RVA: 0x3E8 | Ordinal: 1001
        void PushClipRect(struct ImVec2 const &, struct ImVec2 const &, bool);

    // RVA: 0x3EC | Ordinal: 1005
        void PushColumnClipRect(int);

    // RVA: 0x3ED | Ordinal: 1006
        void PushColumnsBackground(void);

    // RVA: 0x3EE | Ordinal: 1007
        void PushFocusScope(unsigned int);

    // RVA: 0x3EF | Ordinal: 1008
        void PushFont(struct ImFont *);

    // RVA: 0x3F0 | Ordinal: 1009
        void PushID(int);

    // RVA: 0x3F1 | Ordinal: 1010
        void PushID(char const *, char const *);

    // RVA: 0x3F2 | Ordinal: 1011
        void PushID(char const *);

    // RVA: 0x3F3 | Ordinal: 1012
        void PushID(void const *);

    // RVA: 0x3F4 | Ordinal: 1013
        void PushItemFlag(int, bool);

    // RVA: 0x3F5 | Ordinal: 1014
        void PushItemWidth(float);

    // RVA: 0x3F7 | Ordinal: 1016
        void PushMultiItemsWidths(int, float);

    // RVA: 0x3F8 | Ordinal: 1017
        void PushOverrideID(unsigned int);

    // RVA: 0x3FA | Ordinal: 1019
        void PushStyleColor(int, struct ImVec4 const &);

    // RVA: 0x3FB | Ordinal: 1020
        void PushStyleColor(int, unsigned int);

    // RVA: 0x3FE | Ordinal: 1023
        void PushStyleVar(int, struct ImVec2 const &);

    // RVA: 0x3FF | Ordinal: 1024
        void PushStyleVar(int, float);

    // RVA: 0x403 | Ordinal: 1028
        void PushTextWrapPos(float);

    // RVA: 0x405 | Ordinal: 1030
        void RadioButton(char const *, int *, int);

    // RVA: 0x406 | Ordinal: 1031
        void RadioButton(char const *, bool);

    // RVA: 0x409 | Ordinal: 1034
        void Render(void);

    // RVA: 0x40A | Ordinal: 1035
        void RenderArrow(struct ImDrawList *, struct ImVec2, unsigned int, int, float);

    // RVA: 0x40B | Ordinal: 1036
        void RenderArrowPointingAt(struct ImDrawList *, struct ImVec2, struct ImVec2, int, unsigned int);

    // RVA: 0x40C | Ordinal: 1037
        void RenderBullet(struct ImDrawList *, struct ImVec2, unsigned int);

    // RVA: 0x40E | Ordinal: 1039
        void RenderCheckMark(struct ImDrawList *, struct ImVec2, unsigned int, float);

    // RVA: 0x40F | Ordinal: 1040
        void RenderColorRectWithAlphaCheckerboard(struct ImDrawList *, struct ImVec2, struct ImVec2, unsigned int, float, struct ImVec2, float, int);

    // RVA: 0x410 | Ordinal: 1041
        void RenderFrame(struct ImVec2, struct ImVec2, unsigned int, bool, float);

    // RVA: 0x411 | Ordinal: 1042
        void RenderFrameBorder(struct ImVec2, struct ImVec2, float);

    // RVA: 0x412 | Ordinal: 1043
        void RenderMouseCursor(struct ImDrawList *, struct ImVec2, float, int, unsigned int, unsigned int, unsigned int);

    // RVA: 0x413 | Ordinal: 1044
        void RenderNavHighlight(struct ImRect const &, unsigned int, int);

    // RVA: 0x414 | Ordinal: 1045
        void RenderRectFilledRangeH(struct ImDrawList *, struct ImRect const &, unsigned int, float, float, float);

    // RVA: 0x415 | Ordinal: 1046
        void RenderRectFilledWithHole(struct ImDrawList *, struct ImRect, struct ImRect, unsigned int, float);

    // RVA: 0x417 | Ordinal: 1048
        void RenderText(struct ImVec2, char const *, char const *, bool);

    // RVA: 0x418 | Ordinal: 1049
        void RenderTextClipped(struct ImVec2 const &, struct ImVec2 const &, char const *, char const *, struct ImVec2 const *, struct ImVec2 const &, struct ImRect const *);

    // RVA: 0x419 | Ordinal: 1050
        void RenderTextClippedEx(struct ImDrawList *, struct ImVec2 const &, struct ImVec2 const &, char const *, char const *, struct ImVec2 const *, struct ImVec2 const &, struct ImRect const *);

    // RVA: 0x41A | Ordinal: 1051
        void RenderTextEllipsis(struct ImDrawList *, struct ImVec2 const &, struct ImVec2 const &, float, float, char const *, char const *, struct ImVec2 const *);

    // RVA: 0x41B | Ordinal: 1052
        void RenderTextWrapped(struct ImVec2, char const *, char const *, float);

    // RVA: 0x41E | Ordinal: 1055
        void ResetMouseDragDelta(int);

    // RVA: 0x41F | Ordinal: 1056
        void ResumeLayout(void);

    // RVA: 0x422 | Ordinal: 1059
        void SameLine(float, float);

    // RVA: 0x423 | Ordinal: 1060
        void SaveIniSettingsToDisk(char const *);

    // RVA: 0x424 | Ordinal: 1061
        void SaveIniSettingsToMemory(unsigned __int64 *);

    // RVA: 0x427 | Ordinal: 1064
        void ScrollToBringRectIntoView(struct ImGuiWindow *, struct ImRect const &);

    // RVA: 0x428 | Ordinal: 1065
        void Scrollbar(enum ImGuiAxis);

    // RVA: 0x429 | Ordinal: 1066
        void ScrollbarEx(struct ImRect const &, unsigned int, enum ImGuiAxis, float *, float, float, int);

    // RVA: 0x42B | Ordinal: 1068
        void Selectable(char const *, bool *, int, struct ImVec2 const &);

    // RVA: 0x42C | Ordinal: 1069
        void Selectable(char const *, bool, int, struct ImVec2 const &);

    // RVA: 0x42D | Ordinal: 1070
        void Separator(void);

    // RVA: 0x42E | Ordinal: 1071
        void SeparatorEx(int);

    // RVA: 0x430 | Ordinal: 1073
        void SetActiveID(unsigned int, struct ImGuiWindow *);

    // RVA: 0x432 | Ordinal: 1075
        void SetAllocatorFunctions(void * (__cdecl *)(unsigned __int64, void *), void (__cdecl *)(void *, void *), void *);

    // RVA: 0x436 | Ordinal: 1079
        void SetClipboardText(char const *);

    // RVA: 0x437 | Ordinal: 1080
        void SetColorEditOptions(int);

    // RVA: 0x43A | Ordinal: 1083
        void SetColumnOffset(int, float);

    // RVA: 0x43B | Ordinal: 1084
        void SetColumnWidth(int, float);

    // RVA: 0x43D | Ordinal: 1086
        void SetCurrentContext(struct ImGuiContext *);

    // RVA: 0x43F | Ordinal: 1088
        void SetCurrentFont(struct ImFont *);

    // RVA: 0x440 | Ordinal: 1089
        void SetCursorPos(struct ImVec2 const &);

    // RVA: 0x441 | Ordinal: 1090
        void SetCursorPosX(float);

    // RVA: 0x442 | Ordinal: 1091
        void SetCursorPosY(float);

    // RVA: 0x443 | Ordinal: 1092
        void SetCursorScreenPos(struct ImVec2 const &);

    // RVA: 0x444 | Ordinal: 1093
        void SetDragDropPayload(char const *, void const *, unsigned __int64, int);

    // RVA: 0x447 | Ordinal: 1096
        void SetFocusID(unsigned int, struct ImGuiWindow *);

    // RVA: 0x449 | Ordinal: 1098
        void SetHoveredID(unsigned int);

    // RVA: 0x44C | Ordinal: 1101
        void SetItemAllowOverlap(void);

    // RVA: 0x44D | Ordinal: 1102
        void SetItemDefaultFocus(void);

    // RVA: 0x44E | Ordinal: 1103
        void SetKeyboardFocusHere(int);

    // RVA: 0x44F | Ordinal: 1104
        void SetLastItemData(struct ImGuiWindow *, unsigned int, int, struct ImRect const &);

    // RVA: 0x451 | Ordinal: 1106
        void SetMouseCursor(int);

    // RVA: 0x453 | Ordinal: 1108
        void SetNavID(unsigned int, int, unsigned int);

    // RVA: 0x454 | Ordinal: 1109
        void SetNavIDWithRectRel(unsigned int, int, unsigned int, struct ImRect const &);

    // RVA: 0x457 | Ordinal: 1112
        void SetNextItemOpen(bool, int);

    // RVA: 0x458 | Ordinal: 1113
        void SetNextItemWidth(float);

    // RVA: 0x462 | Ordinal: 1123
        void SetNextWindowBgAlpha(float);

    // RVA: 0x463 | Ordinal: 1124
        void SetNextWindowCollapsed(bool, int);

    // RVA: 0x464 | Ordinal: 1125
        void SetNextWindowContentSize(struct ImVec2 const &);

    // RVA: 0x465 | Ordinal: 1126
        void SetNextWindowFocus(void);

    // RVA: 0x466 | Ordinal: 1127
        void SetNextWindowPos(struct ImVec2 const &, int, struct ImVec2 const &);

    // RVA: 0x467 | Ordinal: 1128
        void SetNextWindowScroll(struct ImVec2 const &);

    // RVA: 0x468 | Ordinal: 1129
        void SetNextWindowSize(struct ImVec2 const &, int);

    // RVA: 0x469 | Ordinal: 1130
        void SetNextWindowSizeConstraints(struct ImVec2 const &, struct ImVec2 const &, void (__cdecl *)(struct ImGuiSizeCallbackData *), void *);

    // RVA: 0x46B | Ordinal: 1132
        void SetScrollFromPosX(float, float);

    // RVA: 0x46C | Ordinal: 1133
        void SetScrollFromPosX(struct ImGuiWindow *, float, float);

    // RVA: 0x46D | Ordinal: 1134
        void SetScrollFromPosY(float, float);

    // RVA: 0x46E | Ordinal: 1135
        void SetScrollFromPosY(struct ImGuiWindow *, float, float);

    // RVA: 0x46F | Ordinal: 1136
        void SetScrollHereX(float);

    // RVA: 0x470 | Ordinal: 1137
        void SetScrollHereY(float);

    // RVA: 0x471 | Ordinal: 1138
        void SetScrollX(float);

    // RVA: 0x472 | Ordinal: 1139
        void SetScrollX(struct ImGuiWindow *, float);

    // RVA: 0x473 | Ordinal: 1140
        void SetScrollY(float);

    // RVA: 0x474 | Ordinal: 1141
        void SetScrollY(struct ImGuiWindow *, float);

    // RVA: 0x475 | Ordinal: 1142
        void SetStateStorage(struct ImGuiStorage *);

    // RVA: 0x476 | Ordinal: 1143
        void SetTabItemClosed(char const *);

    // RVA: 0x478 | Ordinal: 1145
        void SetTooltip(char const *, ...);

    // RVA: 0x479 | Ordinal: 1146
        void SetTooltipV(char const *, char *);

    // RVA: 0x47C | Ordinal: 1149
        void SetWindowClipRectBeforeSetChannel(struct ImGuiWindow *, struct ImRect const &);

    // RVA: 0x47D | Ordinal: 1150
        void SetWindowCollapsed(struct ImGuiWindow *, bool, int);

    // RVA: 0x47E | Ordinal: 1151
        void SetWindowCollapsed(char const *, bool, int);

    // RVA: 0x47F | Ordinal: 1152
        void SetWindowCollapsed(bool, int);

    // RVA: 0x480 | Ordinal: 1153
        void SetWindowFocus(char const *);

    // RVA: 0x481 | Ordinal: 1154
        void SetWindowFocus(void);

    // RVA: 0x482 | Ordinal: 1155
        void SetWindowFontScale(float);

    // RVA: 0x483 | Ordinal: 1156
        void SetWindowHitTestHole(struct ImGuiWindow *, struct ImVec2 const &, struct ImVec2 const &);

    // RVA: 0x484 | Ordinal: 1157
        void SetWindowPos(struct ImVec2 const &, int);

    // RVA: 0x485 | Ordinal: 1158
        void SetWindowPos(struct ImGuiWindow *, struct ImVec2 const &, int);

    // RVA: 0x486 | Ordinal: 1159
        void SetWindowPos(char const *, struct ImVec2 const &, int);

    // RVA: 0x487 | Ordinal: 1160
        void SetWindowSize(struct ImVec2 const &, int);

    // RVA: 0x488 | Ordinal: 1161
        void SetWindowSize(struct ImGuiWindow *, struct ImVec2 const &, int);

    // RVA: 0x489 | Ordinal: 1162
        void SetWindowSize(char const *, struct ImVec2 const &, int);

    // RVA: 0x48A | Ordinal: 1163
        void ShadeVertsLinearColorGradientKeepAlpha(struct ImDrawList *, int, int, struct ImVec2, struct ImVec2, unsigned int, unsigned int);

    // RVA: 0x48B | Ordinal: 1164
        void ShadeVertsLinearUV(struct ImDrawList *, int, int, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, struct ImVec2 const &, bool);

    // RVA: 0x48C | Ordinal: 1165
        void ShowAboutWindow(bool *);

    // RVA: 0x492 | Ordinal: 1171
        void ShowDemoWindow(bool *);

    // RVA: 0x494 | Ordinal: 1173
        void ShowFontSelector(char const *);

    // RVA: 0x496 | Ordinal: 1175
        void ShowMetricsWindow(bool *);

    // RVA: 0x499 | Ordinal: 1178
        void ShowStyleEditor(struct ImGuiStyle *);

    // RVA: 0x49B | Ordinal: 1180
        void ShowStyleSelector(char const *);

    // RVA: 0x49E | Ordinal: 1183
        void ShowUserGuide(void);

    // RVA: 0x4A0 | Ordinal: 1185
        void ShrinkWidths(struct ImGuiShrinkWidthItem *, int, float);

    // RVA: 0x4A1 | Ordinal: 1186
        void Shutdown(struct ImGuiContext *);

    // RVA: 0x4A2 | Ordinal: 1187
        void SliderAngle(char const *, float *, float, float, char const *, int);

    // RVA: 0x4A3 | Ordinal: 1188
        void SliderBehavior(struct ImRect const &, unsigned int, int, void *, void const *, void const *, char const *, int, struct ImRect *);

    // RVA: 0x4A7 | Ordinal: 1192
        void SliderFloat(char const *, float *, float, float, char const *, int);

    // RVA: 0x4A4 | Ordinal: 1189
        void SliderFloat2(char const *, float *const, float, float, char const *, int);

    // RVA: 0x4A5 | Ordinal: 1190
        void SliderFloat3(char const *, float *const, float, float, char const *, int);

    // RVA: 0x4A6 | Ordinal: 1191
        void SliderFloat4(char const *, float *const, float, float, char const *, int);

    // RVA: 0x4AB | Ordinal: 1196
        void SliderInt(char const *, int *, int, int, char const *, int);

    // RVA: 0x4A8 | Ordinal: 1193
        void SliderInt2(char const *, int *const, int, int, char const *, int);

    // RVA: 0x4A9 | Ordinal: 1194
        void SliderInt3(char const *, int *const, int, int, char const *, int);

    // RVA: 0x4AA | Ordinal: 1195
        void SliderInt4(char const *, int *const, int, int, char const *, int);

    // RVA: 0x4AC | Ordinal: 1197
        void SliderScalar(char const *, int, void *, void const *, void const *, char const *, int);

    // RVA: 0x4AD | Ordinal: 1198
        void SliderScalar(char const *, int, void *, void const *, void const *, char const *, float);

    // RVA: 0x4AE | Ordinal: 1199
        void SliderScalarN(char const *, int, void *, int, void const *, void const *, char const *, int);

    // RVA: 0x4AF | Ordinal: 1200
        void SliderScalarN(char const *, int, void *, int, void const *, void const *, char const *, float);

    // RVA: 0x4B0 | Ordinal: 1201
        void SmallButton(char const *);

    // RVA: 0x4B1 | Ordinal: 1202
        void Spacing(void);

    // RVA: 0x4B3 | Ordinal: 1204
        void SplitterBehavior(struct ImRect const &, unsigned int, enum ImGuiAxis, float *, float *, float, float, float, float);

    // RVA: 0x4B4 | Ordinal: 1205
        void Spring(float, float);

    // RVA: 0x4B5 | Ordinal: 1206
        void StartMouseMovingWindow(struct ImGuiWindow *);

    // RVA: 0x4B8 | Ordinal: 1209
        void StyleColorsClassic(struct ImGuiStyle *);

    // RVA: 0x4BA | Ordinal: 1211
        void StyleColorsDark(struct ImGuiStyle *);

    // RVA: 0x4BC | Ordinal: 1213
        void StyleColorsLight(struct ImGuiStyle *);

    // RVA: 0x4BE | Ordinal: 1215
        void SuspendLayout(void);

    // RVA: 0x4BF | Ordinal: 1216
        void TabBarCloseTab(struct ImGuiTabBar *, struct ImGuiTabItem *);

    // RVA: 0x4C0 | Ordinal: 1217
        void TabBarFindTabByID(struct ImGuiTabBar *, unsigned int);

    // RVA: 0x4C1 | Ordinal: 1218
        void TabBarProcessReorder(struct ImGuiTabBar *);

    // RVA: 0x4C2 | Ordinal: 1219
        void TabBarQueueReorder(struct ImGuiTabBar *, struct ImGuiTabItem const *, int);

    // RVA: 0x4C3 | Ordinal: 1220
        void TabBarRemoveTab(struct ImGuiTabBar *, unsigned int);

    // RVA: 0x4C4 | Ordinal: 1221
        void TabItemBackground(struct ImDrawList *, struct ImRect const &, int, unsigned int);

    // RVA: 0x4C5 | Ordinal: 1222
        void TabItemButton(char const *, int);

    // RVA: 0x4C6 | Ordinal: 1223
        void TabItemCalcSize(char const *, bool);

    // RVA: 0x4C7 | Ordinal: 1224
        void TabItemEx(struct ImGuiTabBar *, char const *, bool *, int);

    // RVA: 0x4C8 | Ordinal: 1225
        void TabItemLabelAndCloseButton(struct ImDrawList *, struct ImRect const &, int, struct ImVec2, char const *, unsigned int, unsigned int, bool, bool *, bool *);

    // RVA: 0x4C9 | Ordinal: 1226
        void TempInputScalar(struct ImRect const &, unsigned int, char const *, int, void *, char const *, void const *, void const *);

    // RVA: 0x4CA | Ordinal: 1227
        void TempInputText(struct ImRect const &, unsigned int, char const *, char *, int, int);

    // RVA: 0x4CC | Ordinal: 1229
        void Text(char const *, ...);

    // RVA: 0x4CD | Ordinal: 1230
        void TextColored(struct ImVec4 const &, char const *, ...);

    // RVA: 0x4CE | Ordinal: 1231
        void TextColoredV(struct ImVec4 const &, char const *, char *);

    // RVA: 0x4CF | Ordinal: 1232
        void TextDisabled(char const *, ...);

    // RVA: 0x4D0 | Ordinal: 1233
        void TextDisabledV(char const *, char *);

    // RVA: 0x4D1 | Ordinal: 1234
        void TextEx(char const *, char const *, int);

    // RVA: 0x4D2 | Ordinal: 1235
        void TextUnformatted(char const *, char const *);

    // RVA: 0x4D3 | Ordinal: 1236
        void TextV(char const *, char *);

    // RVA: 0x4D4 | Ordinal: 1237
        void TextWrapped(char const *, ...);

    // RVA: 0x4D5 | Ordinal: 1238
        void TextWrappedV(char const *, char *);

    // RVA: 0x4DC | Ordinal: 1245
        void TreeNode(char const *, char const *, ...);

    // RVA: 0x4DD | Ordinal: 1246
        void TreeNode(char const *);

    // RVA: 0x4DE | Ordinal: 1247
        void TreeNode(void const *, char const *, ...);

    // RVA: 0x4DF | Ordinal: 1248
        void TreeNodeBehavior(unsigned int, int, char const *, char const *);

    // RVA: 0x4E0 | Ordinal: 1249
        void TreeNodeBehaviorIsOpen(unsigned int, int);

    // RVA: 0x4E1 | Ordinal: 1250
        void TreeNodeEx(char const *, int, char const *, ...);

    // RVA: 0x4E2 | Ordinal: 1251
        void TreeNodeEx(char const *, int);

    // RVA: 0x4E3 | Ordinal: 1252
        void TreeNodeEx(void const *, int, char const *, ...);

    // RVA: 0x4E4 | Ordinal: 1253
        void TreeNodeExV(char const *, int, char const *, char *);

    // RVA: 0x4E5 | Ordinal: 1254
        void TreeNodeExV(void const *, int, char const *, char *);

    // RVA: 0x4E6 | Ordinal: 1255
        void TreeNodeV(char const *, char const *, char *);

    // RVA: 0x4E7 | Ordinal: 1256
        void TreeNodeV(void const *, char const *, char *);

    // RVA: 0x4E8 | Ordinal: 1257
        void TreePop(void);

    // RVA: 0x4E9 | Ordinal: 1258
        void TreePush(char const *);

    // RVA: 0x4EA | Ordinal: 1259
        void TreePush(void const *);

    // RVA: 0x4EB | Ordinal: 1260
        void TreePushOverrideID(unsigned int);

    // RVA: 0x4EC | Ordinal: 1261
        void Unindent(float);

    // RVA: 0x4EF | Ordinal: 1264
        void UpdateHoveredWindowAndCaptureFlags(void);

    // RVA: 0x4F0 | Ordinal: 1265
        void UpdateMouseMovingWindowEndFrame(void);

    // RVA: 0x4F1 | Ordinal: 1266
        void UpdateMouseMovingWindowNewFrame(void);

    // RVA: 0x4F3 | Ordinal: 1268
        void UpdateWindowParentAndRootLinks(struct ImGuiWindow *, int, struct ImGuiWindow *);

    // RVA: 0x4F4 | Ordinal: 1269
        void VSliderFloat(char const *, struct ImVec2 const &, float *, float, float, char const *, int);

    // RVA: 0x4F5 | Ordinal: 1270
        void VSliderInt(char const *, struct ImVec2 const &, int *, int, int, char const *, int);

    // RVA: 0x4F6 | Ordinal: 1271
        void VSliderScalar(char const *, struct ImVec2 const &, int, void *, void const *, void const *, char const *, int);

    // RVA: 0x4F7 | Ordinal: 1272
        void Value(char const *, int);

    // RVA: 0x4F8 | Ordinal: 1273
        void Value(char const *, unsigned int);

    // RVA: 0x4F9 | Ordinal: 1274
        void Value(char const *, float, char const *);

    // RVA: 0x4FA | Ordinal: 1275
        void Value(char const *, bool);

    // RVA: 0x50E | Ordinal: 1295
        void gizmo3D(char const *, class vgm::Quat &, class vgm::Quat &, float, int);

    // RVA: 0x50F | Ordinal: 1296
        void gizmo3D(char const *, class vgm::Quat &, class vgm::Vec3 &, float, int);

    // RVA: 0x510 | Ordinal: 1297
        void gizmo3D(char const *, class vgm::Quat &, class vgm::Vec4 &, float, int);

    // RVA: 0x511 | Ordinal: 1298
        void gizmo3D(char const *, class vgm::Quat &, float, int);

    // RVA: 0x512 | Ordinal: 1299
        void gizmo3D(char const *, class vgm::Vec3 &, class vgm::Vec3 &, float, int);

    // RVA: 0x513 | Ordinal: 1300
        void gizmo3D(char const *, class vgm::Vec3 &, class vgm::Quat &, class vgm::Vec3 &, float, int);

    // RVA: 0x514 | Ordinal: 1301
        void gizmo3D(char const *, class vgm::Vec3 &, class vgm::Quat &, class vgm::Quat &, float, int);

    // RVA: 0x515 | Ordinal: 1302
        void gizmo3D(char const *, class vgm::Vec3 &, class vgm::Quat &, class vgm::Vec4 &, float, int);

    // RVA: 0x516 | Ordinal: 1303
        void gizmo3D(char const *, class vgm::Vec3 &, class vgm::Quat &, float, int);

    // RVA: 0x517 | Ordinal: 1304
        void gizmo3D(char const *, class vgm::Vec3 &, class vgm::Vec4 &, float, int);

    // RVA: 0x518 | Ordinal: 1305
        void gizmo3D(char const *, class vgm::Vec3 &, float, int);

    // RVA: 0x519 | Ordinal: 1306
        void gizmo3D(char const *, class vgm::Vec4 &, float, int);
};

// DCS_OPS_RE_IMGUI.DLL_IMGUI_HPP
