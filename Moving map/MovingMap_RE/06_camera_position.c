================================================================================
CAMERA / MAP CENTER / POSITION
================================================================================

Nombre de blocs : 7


################################################################################
# BLOCK 1
# SOURCE : CockpitBase_dump_SCY.dll.c
# KEYWORD : get_camera
################################################################################

cockpit::avMovingMap::get_camera
          (avMovingMap *this,bool param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 local_38 [48];
  
                    // 0x263b50  3784
                    // ?get_camera@avMovingMap@cockpit@@QEAAAEBVCamera@Graphics@@_NMMMM@Z
  dVar4 = wTime::GetModelTime();
  if (dVar4 != *(double *)(this + 0x318)) {
    dVar4 = wTime::GetModelTime();
    *(double *)(this + 0x318) = dVar4;
    (**(code **)(*(longlong *)this + 0x28))(this);
    check_camera_orientation(this);
    check_camera_volume(this,param_1,param_2,param_3,param_4,param_5);
    (**(code **)(*(longlong *)this + 0x30))(this);
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)this + 0x20))(this,local_38);
    uVar1 = *puVar3;
    uVar2 = *(undefined4 *)(puVar3 + 1);
    this[0x310] = (avMovingMap)0x1;
    *(undefined8 *)(this + 0x268) = uVar1;
    *(undefined4 *)(this + 0x270) = uVar2;
  }
  return (Camera *)(this + 8);
}


################################################################################
# BLOCK 2
# SOURCE : CockpitBase_dump_SCY.dll.c
# KEYWORD : get_camera
################################################################################

cockpit::avTVSensor::parse(avTVSensor *this,ModelParser *param_1,wPosition3<float> *param_2)

{
  int iVar1;
  
                    // 0x34a610  5278
                    // ?parse@avTVSensor@cockpit@@QEAAXAEAVModelParser@Graphics@@AEBV?$wPosition3@M@@@Z
  iVar1 = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
  if ((iVar1 == 1) && (this[0x6e8] != (avTVSensor)0x0)) {
    get_camera_position(this);
  }
  return;
}


################################################################################
# BLOCK 3
# SOURCE : CockpitBase_dump_SCY.dll.c
# KEYWORD : get_camera
################################################################################

cockpit::ccIndicator::set_full_view_port_coverage(ccIndicator *this,indicator_viewport *param_1)

{
  ccIndicator *pcVar1;
  double dVar2;
  Camera *pCVar3;
  ccIndicator *pcVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int local_res8;
  int local_resc;
  Camera local_78 [112];
  
                    // 0x37df00  6300
                    // ?set_full_view_port_coverage@ccIndicator@cockpit@@AEAAXAEBUindicator_viewport@2@@Z
  pCVar3 = MultiThreading::active_camera();
  pcVar4 = (ccIndicator *)ceSimple::get_camera_orient(local_78,SUB81(pCVar3,0));
  pcVar1 = this + 0x3e4;
  if (pcVar1 != pcVar4) {
    *(undefined4 *)pcVar1 = *(undefined4 *)pcVar4;
    *(undefined4 *)(this + 1000) = *(undefined4 *)(pcVar4 + 4);
    *(undefined4 *)(this + 0x3ec) = *(undefined4 *)(pcVar4 + 8);
    *(undefined4 *)(this + 0x3f4) = *(undefined4 *)(pcVar4 + 0x10);
    *(undefined4 *)(this + 0x3f8) = *(undefined4 *)(pcVar4 + 0x14);
    *(undefined4 *)(this + 0x3fc) = *(undefined4 *)(pcVar4 + 0x18);
    *(undefined4 *)(this + 0x404) = *(undefined4 *)(pcVar4 + 0x20);
    *(undefined4 *)(this + 0x408) = *(undefined4 *)(pcVar4 + 0x24);
    *(undefined4 *)(this + 0x40c) = *(undefined4 *)(pcVar4 + 0x28);
    *(undefined4 *)(this + 0x414) = *(undefined4 *)(pcVar4 + 0x30);
    *(undefined4 *)(this + 0x418) = *(undefined4 *)(pcVar4 + 0x34);
    *(undefined4 *)(this + 0x41c) = *(undefined4 *)(pcVar4 + 0x38);
  }
  fVar8 = DAT_7ff89358cc34;
  if ((((*(double *)param_1 == 0.0) && (*(double *)(param_1 + 8) == 0.0)) &&
      (*(double *)(param_1 + 0x10) == DAT_7ff89358f6f0)) &&
     (*(double *)(param_1 + 0x18) == DAT_7ff89358f6f0)) {
    fVar6 = DAT_7ff89358cc34 / *(float *)(this + 0x464);
    *(float *)(this + 0x404) = fVar6 * *(float *)(this + 0x404);
    *(float *)(this + 0x408) = fVar6 * *(float *)(this + 0x408);
    *(float *)(this + 0x40c) = fVar6 * *(float *)(this + 0x40c);
    fVar8 = fVar8 / *(float *)(this + 0x468);
  }
  else {
    MultiThreading::active_target_size();
    dVar9 = *(double *)(param_1 + 0x18) / (double)local_resc;
    dVar5 = *(double *)(param_1 + 8) / (double)local_resc;
    dVar2 = *(double *)(param_1 + 0x10) / (double)local_res8;
    fVar10 = (float)((DAT_7ff89358cc38 - (dVar5 + dVar5)) - dVar9);
    dVar5 = *(double *)param_1 / (double)local_res8;
    fVar6 = (float)(((dVar5 + dVar5) - DAT_7ff89358cc38) + dVar2);
    *(float *)(this + 0x418) =
         fVar6 * *(float *)(this + 0x408) + fVar10 * *(float *)(this + 0x3f8) +
         *(float *)(this + 0x418);
    fVar8 = (float)(dVar9 / (double)*(float *)(this + 0x468));
    *(float *)(this + 0x414) =
         fVar6 * *(float *)(this + 0x404) + fVar10 * *(float *)(this + 0x3f4) +
         *(float *)(this + 0x414);
    fVar7 = (float)(dVar2 / (double)*(float *)(this + 0x464));
    *(float *)(this + 0x41c) =
         fVar6 * *(float *)(this + 0x40c) + fVar10 * *(float *)(this + 0x3fc) +
         *(float *)(this + 0x41c);
    *(float *)(this + 0x404) = fVar7 * *(float *)(this + 0x404);
    *(float *)(this + 0x408) = fVar7 * *(float *)(this + 0x408);
    *(float *)(this + 0x40c) = fVar7 * *(float *)(this + 0x40c);
  }
  *(float *)(this + 0x3fc) = fVar8 * *(float *)(this + 0x3fc);
  *(float *)(this + 0x3f8) = fVar8 * *(float *)(this + 0x3f8);
  *(float *)(this + 0x3f4) = fVar8 * *(float *)(this + 0x3f4);
  if (this + 0x424 != pcVar1) {
    *(undefined4 *)(this + 0x424) = *(undefined4 *)pcVar1;
    *(undefined4 *)(this + 0x428) = *(undefined4 *)(this + 1000);
    *(undefined4 *)(this + 0x42c) = *(undefined4 *)(this + 0x3ec);
    *(undefined4 *)(this + 0x434) = *(undefined4 *)(this + 0x3f4);
    *(undefined4 *)(this + 0x438) = *(undefined4 *)(this + 0x3f8);
    *(undefined4 *)(this + 0x43c) = *(undefined4 *)(this + 0x3fc);
    *(undefined4 *)(this + 0x444) = *(undefined4 *)(this + 0x404);
    *(undefined4 *)(this + 0x448) = *(undefined4 *)(this + 0x408);
    *(undefined4 *)(this + 0x44c) = *(undefined4 *)(this + 0x40c);
    *(undefined4 *)(this + 0x454) = *(undefined4 *)(this + 0x414);
    *(undefined4 *)(this + 0x458) = *(undefined4 *)(this + 0x418);
    *(undefined4 *)(this + 0x45c) = *(undefined4 *)(this + 0x41c);
  }
  return;
}


################################################################################
# BLOCK 4
# SOURCE : CockpitBase_dump_SCY.dll.c
# KEYWORD : Render
################################################################################

void FUN_7ff8934d0b50(longlong param_1)

{
  Renderer *this;
  undefined1 auStack_358 [48];
  Camera local_328 [688];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_7ff89368e840 ^ (ulonglong)auStack_358;
  this = *(Renderer **)renderer_exref;
  Graphics::Camera::Camera(local_328,0);
  local_78 = 0x3f060a91;
  local_70 = 0x3f800000;
  local_74 = 0x3f060a91;
  local_20 = 1;
  Graphics::Renderer::SetCamera(this,local_328);
  (**(code **)(**(longlong **)cockpitMTHandler_exref + 0x30))
            (*(longlong **)cockpitMTHandler_exref,*(undefined4 *)(param_1 + 8));
  return;
}


################################################################################
# BLOCK 5
# SOURCE : CockpitBase_dump_SCY.dll.c
# KEYWORD : Graphics::Camera
################################################################################

void FUN_7ff893501c40(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  longlong **pplVar20;
  longlong *plVar21;
  IcClickable *pIVar22;
  VR_options *pVVar23;
  Application *pAVar24;
  longlong *plVar25;
  void *pvVar26;
  int iVar27;
  void *pvVar28;
  undefined4 *puVar29;
  size_t sVar30;
  ulonglong uVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  undefined1 auStackY_678 [32];
  undefined4 local_648;
  undefined4 local_640;
  undefined2 local_63c;
  float local_638;
  int local_634;
  __uint64 local_630;
  undefined1 local_628 [4];
  undefined4 local_624;
  longlong *local_620;
  longlong **local_618;
  longlong *local_610;
  ulonglong local_608;
  longlong *local_600;
  longlong *plStack_5f8;
  longlong *local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined1 local_5c8 [16];
  double local_5b8;
  undefined8 uStack_5b0;
  undefined1 local_5a8 [16];
  double local_598;
  undefined8 uStack_590;
  double local_588;
  double dStack_580;
  undefined1 local_578 [16];
  double local_568;
  double dStack_560;
  undefined1 local_558 [16];
  longlong *local_548;
  longlong *local_540;
  longlong *plStack_538;
  longlong *local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  longlong *local_510;
  longlong *plStack_508;
  longlong *local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  float local_4e0;
  short local_4dc;
  longlong *local_4d8;
  wPosition3<double> local_4c8 [96];
  double local_468;
  double local_460;
  double local_458;
  float local_448 [16];
  Camera local_408 [784];
  double local_f8;
  double dStack_f0;
  double local_e8;
  uint local_e0;
  undefined1 local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_7ff89368e840 ^ (ulonglong)auStackY_678;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  uVar19 = (**(code **)(**(longlong **)globalView_exref + 0x78))();
  FUN_7ff8933401f0(local_4c8,uVar19);
  dVar35 = (double)(**(code **)(**(longlong **)globalView_exref + 0x1e8))();
  fVar45 = (float)(dVar35 * DAT_7ff89358f680);
  local_610 = param_1;
  FUN_7ff893500c10(&local_610,local_4c8,&local_468,fVar45);
  plVar25 = param_1 + 0x85;
  uVar19 = FUN_7ff8933388b0(param_1 + 0x69,&local_510);
  FUN_7ff8933387b0(plVar25,uVar19);
  uVar17 = (**(code **)(**(longlong **)globalView_exref + 0x60))();
  local_600 = (longlong *)0x0;
  plStack_5f8 = (longlong *)0x0;
  uVar41 = 0;
  uVar43 = 0;
  local_610 = (longlong *)0x0;
  local_5f0 = (longlong *)0x0;
  uStack_5e8 = 0;
  local_5e0 = 0;
  uStack_5d8 = 0;
  if (uVar17 == 10) {
LAB_7ff893501db4:
    pIVar22 = cockpit::instance();
    (**(code **)(*(longlong *)pIVar22 + 0x70))(pIVar22);
  }
  else if (uVar17 == 0) {
    if (*(longlong **)globalHumanPlane_exref != (longlong *)0x0) {
      (**(code **)(**(longlong **)globalHumanPlane_exref + 0x20))();
      FUN_7ff89335d230(&local_600);
    }
  }
  else if (uVar17 == 0x13) goto LAB_7ff893501db4;
  pplVar20 = (longlong **)(**(code **)(**(longlong **)visualizer_exref + 0xe8))();
  plVar1 = param_1 + 10;
  if (*plVar1 != param_1[0xb]) {
    param_1[0xb] = *plVar1;
  }
  plVar2 = param_1 + 0xd;
  if (*plVar2 != param_1[0xe]) {
    param_1[0xe] = *plVar2;
  }
  local_618 = pplVar20;
  FUN_7ff893503db0(plVar1,((longlong)pplVar20[1] - (longlong)*pplVar20) / 0x68);
  FUN_7ff893503db0(plVar2,((longlong)pplVar20[1] - (longlong)*pplVar20) / 0x68);
  if (param_1[1] != param_1[2]) {
    param_1[2] = param_1[1];
  }
  auVar14 = _DAT_7ff893593160;
  auVar13 = _DAT_7ff893592dc0;
  fVar3 = DAT_7ff89358dd10;
  local_634 = 0;
  plVar21 = *pplVar20;
  lVar34 = (longlong)pplVar20[1] - (longlong)plVar21 >> 0x3f;
  if (((longlong)pplVar20[1] - (longlong)plVar21) / 0x68 + lVar34 != lVar34) {
    uVar31 = 0;
    do {
      iVar27 = local_634;
      local_5c8 = auVar14;
      local_5b8 = 0.0;
      uStack_5b0 = 0;
      local_5a8 = auVar13;
      local_598 = 0.0;
      uStack_590 = 0;
      local_588 = 0.0;
      dStack_580 = 0.0;
      local_578 = auVar14;
      local_568 = 0.0;
      dStack_560 = 0.0;
      local_558 = auVar13;
      local_640 = fVar45;
      local_638 = fVar45;
      ViewportCalcCamera((smViewport *)(plVar21 + uVar31 * 0xd),local_4c8,&local_638,
                         (wPosition3<double> *)local_5c8,(float *)&local_640);
      fVar4 = local_640;
      *(float *)(param_1 + 0x69) = (float)(double)local_5c8._0_8_;
      *(float *)((longlong)param_1 + 0x34c) = (float)(double)local_5c8._8_8_;
      *(float *)(param_1 + 0x6a) = (float)local_5b8;
      *(float *)(param_1 + 0x6b) = (float)(double)local_5a8._0_8_;
      *(float *)((longlong)param_1 + 0x35c) = (float)(double)local_5a8._8_8_;
      *(float *)(param_1 + 0x6c) = (float)local_598;
      *(float *)(param_1 + 0x6d) = (float)local_588;
      *(float *)((longlong)param_1 + 0x36c) = (float)dStack_580;
      *(float *)(param_1 + 0x6e) = (float)(double)local_578._0_8_;
      *(float *)(param_1 + 0x6f) = (float)local_568;
      *(float *)((longlong)param_1 + 0x37c) = (float)dStack_560;
      *(float *)(param_1 + 0x70) = (float)(double)local_558._0_8_;
      *(float *)((longlong)param_1 + 0x3ec) = (float)local_468;
      *(float *)(param_1 + 0x7e) = (float)local_460;
      *(float *)((longlong)param_1 + 0x3f4) = (float)local_458;
      *(undefined1 *)(param_1 + 0x84) = 1;
      *(float *)(param_1 + 0x6f) =
           (float)(local_568 - (double)*(float *)((longlong)param_1 + 0x3ec));
      *(float *)((longlong)param_1 + 0x37c) =
           (float)(dStack_560 - (double)*(float *)(param_1 + 0x7e));
      *(float *)(param_1 + 0x70) =
           (float)((double)local_558._0_8_ - (double)*(float *)((longlong)param_1 + 0x3f4));
      *(undefined4 *)(param_1 + 0x23) = 0;
      *(undefined1 *)(param_1 + 0x84) = 1;
      tanf(local_638 * fVar3);
      tanf(fVar4 * fVar3);
      FUN_7ff893482c00(param_1 + 0x23);
      plVar21 = (longlong *)FUN_7ff8933388b0(param_1 + 0x69,&local_510);
      if (plVar25 != plVar21) {
        *(int *)plVar25 = (int)*plVar21;
        *(undefined4 *)((longlong)param_1 + 0x42c) = *(undefined4 *)((longlong)plVar21 + 4);
        *(int *)(param_1 + 0x86) = (int)plVar21[1];
        *(int *)(param_1 + 0x87) = (int)plVar21[2];
        *(undefined4 *)((longlong)param_1 + 0x43c) = *(undefined4 *)((longlong)plVar21 + 0x14);
        *(int *)(param_1 + 0x88) = (int)plVar21[3];
        *(int *)(param_1 + 0x89) = (int)plVar21[4];
        *(undefined4 *)((longlong)param_1 + 0x44c) = *(undefined4 *)((longlong)plVar21 + 0x24);
        *(int *)(param_1 + 0x8a) = (int)plVar21[5];
        *(int *)(param_1 + 0x8b) = (int)plVar21[6];
        *(undefined4 *)((longlong)param_1 + 0x45c) = *(undefined4 *)((longlong)plVar21 + 0x34);
        *(int *)(param_1 + 0x8c) = (int)plVar21[7];
      }
      *(int *)((longlong)param_1 + 0x46c) = iVar27;
      *(undefined1 *)(param_1 + 0x8d) = 1;
      DAT_7ff8936a48c8 = 0;
      DAT_7ff8936a48c9 = 0;
      local_624 = CONCAT22(local_624._2_2_,(short)((param_1[2] - param_1[1]) / 0xd0));
      if (uVar17 == 0) {
        if (*(longlong **)globalHumanPlane_exref != (longlong *)0x0) {
          (**(code **)(**(longlong **)globalHumanPlane_exref + 0x28))();
        }
      }
      else if ((uVar17 == 0x13) || (uVar17 == 10)) {
        pIVar22 = cockpit::instance();
        (**(code **)(*(longlong *)pIVar22 + 0x78))(pIVar22);
      }
      local_624 = CONCAT22((short)((param_1[2] - param_1[1]) / 0xd0),(undefined2)local_624);
      puVar29 = (undefined4 *)param_1[0xb];
      if (puVar29 == (undefined4 *)param_1[0xc]) {
        lVar34 = (longlong)puVar29 - *plVar1 >> 2;
        if (lVar34 == 0x3fffffffffffffff) goto LAB_7ff893502f0f;
        local_608 = lVar34 + 1;
        uVar31 = param_1[0xc] - *plVar1 >> 2;
        if (0x3fffffffffffffff - (uVar31 >> 1) < uVar31) {
          uVar31 = 0x3fffffffffffffff;
        }
        else {
          uVar31 = (uVar31 >> 1) + uVar31;
          if (uVar31 < local_608) {
            uVar31 = local_608;
          }
        }
        local_630 = uVar31 * 4;
        pvVar26 = malloc(local_630);
        if (pvVar26 == (void *)0x0) {
          ed::fatal_out_of_memory(s_ed_malloc_7ff89358cbc0,local_630);
        }
        *(undefined4 *)((longlong)pvVar26 + lVar34 * 4) = local_624;
        puVar12 = (undefined4 *)*plVar1;
        if (puVar29 == (undefined4 *)param_1[0xb]) {
          sVar30 = param_1[0xb] - (longlong)puVar12;
          pvVar28 = pvVar26;
          puVar29 = puVar12;
        }
        else {
          memmove(pvVar26,puVar12,(longlong)puVar29 - (longlong)puVar12);
          sVar30 = param_1[0xb] - (longlong)puVar29;
          pvVar28 = (void *)((longlong)pvVar26 + (lVar34 + 1) * 4);
        }
        memmove(pvVar28,puVar29,sVar30);
        if ((void *)*plVar1 != (void *)0x0) {
          free((void *)*plVar1);
        }
        *plVar1 = (longlong)pvVar26;
        param_1[0xb] = (longlong)((longlong)pvVar26 + local_608 * 4);
        param_1[0xc] = local_630 + (longlong)pvVar26;
      }
      else {
        *puVar29 = local_624;
        param_1[0xb] = param_1[0xb] + 4;
      }
      DAT_7ff8936a48c8 = 0;
      DAT_7ff8936a48c9 = 0;
      lVar34 = param_1[2];
      lVar32 = param_1[1];
      pIVar22 = cockpit::instance();
      (**(code **)(*(longlong *)pIVar22 + 0x1c0))(pIVar22);
      local_648 = CONCAT22((short)((param_1[2] - param_1[1]) / 0xd0),
                           (short)((lVar34 - lVar32) / 0xd0));
      puVar29 = (undefined4 *)param_1[0xe];
      if (puVar29 == (undefined4 *)param_1[0xf]) {
        lVar34 = (longlong)puVar29 - *plVar2 >> 2;
        if (lVar34 == 0x3fffffffffffffff) {
LAB_7ff893502f0f:
                    // WARNING: Subroutine does not return
          FUN_7ff893330ae0();
        }
        local_608 = lVar34 + 1;
        uVar31 = param_1[0xf] - *plVar2 >> 2;
        if (0x3fffffffffffffff - (uVar31 >> 1) < uVar31) {
          uVar31 = 0x3fffffffffffffff;
        }
        else {
          uVar31 = uVar31 + (uVar31 >> 1);
          if (uVar31 < local_608) {
            uVar31 = local_608;
          }
        }
        local_630 = uVar31 * 4;
        pvVar26 = malloc(local_630);
        if (pvVar26 == (void *)0x0) {
          ed::fatal_out_of_memory(s_ed_malloc_7ff89358cbc0,local_630);
        }
        *(undefined4 *)((longlong)pvVar26 + lVar34 * 4) = local_648;
        puVar12 = (undefined4 *)*plVar2;
        if (puVar29 == (undefined4 *)param_1[0xe]) {
          sVar30 = param_1[0xe] - (longlong)puVar12;
          pvVar28 = pvVar26;
          puVar29 = puVar12;
        }
        else {
          memmove(pvVar26,puVar12,(longlong)puVar29 - (longlong)puVar12);
          sVar30 = param_1[0xe] - (longlong)puVar29;
          pvVar28 = (void *)((longlong)pvVar26 + (lVar34 + 1) * 4);
        }
        memmove(pvVar28,puVar29,sVar30);
        if ((void *)*plVar2 != (void *)0x0) {
          free((void *)*plVar2);
        }
        *plVar2 = (longlong)pvVar26;
        param_1[0xe] = (longlong)((longlong)pvVar26 + local_608 * 4);
        param_1[0xf] = local_630 + (longlong)pvVar26;
      }
      else {
        *puVar29 = local_648;
        param_1[0xe] = param_1[0xe] + 4;
      }
      *(undefined1 *)(param_1 + 0x8d) = 0;
      local_634 = local_634 + 1;
      plVar21 = *local_618;
      uVar31 = (ulonglong)local_634;
    } while (uVar31 < (ulonglong)(((longlong)local_618[1] - (longlong)plVar21) / 0x68));
    uVar41 = SUB84(local_610,0);
    uVar43 = (undefined4)((ulonglong)local_610 >> 0x20);
  }
  local_63c = (ushort)local_63c._1_1_ << 8;
  bVar15 = HMD::isActive();
  if ((bVar15) && (pVVar23 = HMD::get_options(), pVVar23[0x1f] == (VR_options)0x0)) {
    pAVar24 = gui::Application::get();
    *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)(pAVar24 + 8);
    pAVar24 = gui::Application::get();
    iVar27 = *(int *)(pAVar24 + 0xc);
  }
  else {
    pAVar24 = gui::Application::get();
    *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)(pAVar24 + 0x10);
    pAVar24 = gui::Application::get();
    iVar27 = *(int *)(pAVar24 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x4bc) = iVar27;
  fVar45 = (float)(int)param_1[0x97] / (float)iVar27;
  param_1[0x69] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0x3f800000;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0x3f800000;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x23) = 1;
  *(undefined4 *)(param_1 + 0x83) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0xbf800000;
  *(uint *)(param_1 + 0x81) = (uint)fVar45 ^ DAT_7ff89358cdb0;
  *(float *)((longlong)param_1 + 0x414) = fVar45;
  *(undefined4 *)(param_1 + 0x82) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0x3f800000;
  plVar25 = (longlong *)FUN_7ff8933388b0(param_1 + 0x69,&local_510);
  if (param_1 + 0x85 != plVar25) {
    *(int *)(param_1 + 0x85) = (int)*plVar25;
    *(undefined4 *)((longlong)param_1 + 0x42c) = *(undefined4 *)((longlong)plVar25 + 4);
    *(int *)(param_1 + 0x86) = (int)plVar25[1];
    *(int *)(param_1 + 0x87) = (int)plVar25[2];
    *(undefined4 *)((longlong)param_1 + 0x43c) = *(undefined4 *)((longlong)plVar25 + 0x14);
    *(int *)(param_1 + 0x88) = (int)plVar25[3];
    *(int *)(param_1 + 0x89) = (int)plVar25[4];
    *(undefined4 *)((longlong)param_1 + 0x44c) = *(undefined4 *)((longlong)plVar25 + 0x24);
    *(int *)(param_1 + 0x8a) = (int)plVar25[5];
    *(int *)(param_1 + 0x8b) = (int)plVar25[6];
    *(undefined4 *)((longlong)param_1 + 0x45c) = *(undefined4 *)((longlong)plVar25 + 0x34);
    *(int *)(param_1 + 0x8c) = (int)plVar25[7];
  }
  local_640 = (float)CONCAT22(local_640._2_2_,(short)((param_1[2] - param_1[1]) / 0xd0));
  if (uVar17 == 10) {
    pIVar22 = cockpit::instance();
    (**(code **)(*(longlong *)pIVar22 + 0x80))(pIVar22,0);
  }
  else if (uVar17 == 0xb) {
    local_63c = CONCAT11(local_63c._1_1_,1);
    pIVar22 = cockpit::instance();
    plVar25 = (longlong *)(**(code **)(*(longlong *)pIVar22 + 0x158))(pIVar22);
    (**(code **)(*plVar25 + 0x118))(plVar25);
  }
  else if (((0xc < uVar17) || ((0x12a0U >> (uVar17 & 0x1f) & 1) == 0)) &&
          (*(longlong **)globalHumanPlane_exref != (longlong *)0x0)) {
    (**(code **)(**(longlong **)globalHumanPlane_exref + 0x50))();
  }
  pIVar22 = cockpit::instance();
  (**(code **)(*(longlong *)pIVar22 + 0x80))(pIVar22,1);
  local_640 = (float)CONCAT22((short)((param_1[2] - param_1[1]) / 0xd0),(undefined2)local_640);
  lVar34 = param_1[0x10];
  if (lVar34 != param_1[0x11]) {
    param_1[0x11] = lVar34;
  }
  wTVPictureSourceProvider::wTVPictureSourceProvider((wTVPictureSourceProvider *)&local_620);
  if (local_620 == (longlong *)0x0) {
    if (*(longlong **)globalHumanPlane_exref == (longlong *)0x0) goto LAB_7ff893502da2;
    uVar17 = (**(code **)(**(longlong **)globalHumanPlane_exref + 0xa0))();
  }
  else {
    uVar17 = (**(code **)(*local_620 + 0xd0))();
  }
  if (uVar17 != 0) {
    lVar34 = param_1[0x97];
    FUN_7ff893503db0(param_1 + 0x10);
    uVar33 = 0;
    if (uVar17 != 0) {
      do {
        if (local_620 == (longlong *)0x0) {
          if (*(longlong **)globalHumanPlane_exref != (longlong *)0x0) {
            uVar18 = (**(code **)(**(longlong **)globalHumanPlane_exref + 0x90))();
            goto LAB_7ff893502817;
          }
          uVar18 = 0;
LAB_7ff8935028fe:
          Graphics::Camera::Camera(local_408,0);
          local_f8 = 0.0;
          dStack_f0 = 0.0;
          local_e8 = (double)CONCAT44(uVar43,uVar41);
          local_dc = 0;
          local_e0 = uVar18;
        }
        else {
          uVar18 = (**(code **)(*local_620 + 200))();
LAB_7ff893502817:
          if ((uVar18 & 0xfffffff7) == 0) goto LAB_7ff8935028fe;
          if (local_620 == (longlong *)0x0) {
            (**(code **)(**(longlong **)globalHumanPlane_exref + 0x80))
                      (*(longlong **)globalHumanPlane_exref,local_408,uVar33);
            (**(code **)(**(longlong **)globalHumanPlane_exref + 0x88))
                      (*(longlong **)globalHumanPlane_exref,&local_f8,uVar33);
            local_e0 = uVar18;
            cVar16 = (**(code **)(**(longlong **)globalView_exref + 0xb0))();
            if (cVar16 == '\0') {
              cVar16 = (**(code **)(**(longlong **)globalHumanPlane_exref + 0xa8))
                                 (*(longlong **)globalHumanPlane_exref,uVar33);
              local_dc = 0;
              if (cVar16 == '\0') goto LAB_7ff89350292c;
            }
            local_dc = 1;
          }
          else {
            uVar19 = (**(code **)(*local_620 + 0xb8))(local_620,uVar33);
            FUN_7ff8933a4ab0(local_408,uVar19);
            (**(code **)(*local_620 + 0xc0))(local_620,&local_f8,uVar33);
            local_dc = 1;
            local_e0 = uVar18;
          }
        }
LAB_7ff89350292c:
        if ((local_e0 & 0xfffffff7) == 0) {
          local_634 = 0;
          local_638 = 0.0;
          FUN_7ff8934fee60(param_1 + 0x10,&local_638,&local_634);
        }
        else {
          plVar25 = (longlong *)wTVPictureSourceProvider::get_target_size((uint)&local_608);
          param_1[0x97] = *plVar25;
          FUN_7ff8933a6100(param_1 + 0x23,local_408);
          *(float *)((longlong)param_1 + 0x3ec) = (float)local_f8;
          *(float *)(param_1 + 0x7e) = (float)dStack_f0;
          *(float *)((longlong)param_1 + 0x3f4) = (float)local_e8;
          *(undefined1 *)(param_1 + 0x84) = 1;
          fVar44 = (float)(local_f8 - (double)(float)local_f8);
          *(float *)(param_1 + 0x6f) = fVar44;
          fVar42 = (float)(dStack_f0 - (double)(float)dStack_f0);
          *(float *)((longlong)param_1 + 0x37c) = fVar42;
          fVar40 = (float)(local_e8 - (double)(float)local_e8);
          *(float *)(param_1 + 0x70) = fVar40;
          fVar45 = *(float *)((longlong)param_1 + 0x36c);
          fVar3 = *(float *)(param_1 + 0x6d);
          fVar4 = *(float *)(param_1 + 0x6e);
          fVar36 = fVar3 * fVar3 + fVar45 * fVar45 + fVar4 * fVar4;
          fVar5 = *(float *)((longlong)param_1 + 0x35c);
          fVar6 = *(float *)(param_1 + 0x6b);
          fVar7 = *(float *)(param_1 + 0x6c);
          fVar37 = fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7;
          fVar8 = *(float *)((longlong)param_1 + 0x34c);
          fVar9 = *(float *)(param_1 + 0x69);
          fVar10 = *(float *)(param_1 + 0x6a);
          fVar38 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
          fVar40 = (float)((uint)fVar40 ^ DAT_7ff89358cdb0);
          fVar42 = (float)((uint)fVar42 ^ DAT_7ff89358cdb0);
          fVar44 = (float)((uint)fVar44 ^ DAT_7ff89358cdb0);
          fVar39 = fVar44 * (fVar9 / fVar38) + fVar42 * (fVar8 / fVar38) +
                   fVar40 * (fVar10 / fVar38) + PTR_7ff8935a8b60._0_4_;
          if ((float *)(param_1 + 0x85) != local_448) {
            *(float *)(param_1 + 0x85) = fVar9 / fVar38;
            *(float *)((longlong)param_1 + 0x42c) = fVar6 / fVar37;
            *(float *)(param_1 + 0x86) = fVar3 / fVar36;
            *(float *)(param_1 + 0x87) = fVar8 / fVar38;
            *(float *)((longlong)param_1 + 0x43c) = fVar5 / fVar37;
            *(float *)(param_1 + 0x88) = fVar45 / fVar36;
            *(float *)(param_1 + 0x89) = fVar10 / fVar38;
            *(float *)((longlong)param_1 + 0x44c) = fVar7 / fVar37;
            *(float *)(param_1 + 0x8a) = fVar4 / fVar36;
            *(float *)(param_1 + 0x8b) = fVar39;
            *(float *)((longlong)param_1 + 0x45c) =
                 fVar44 * (fVar6 / fVar37) + fVar42 * (fVar5 / fVar37) + fVar40 * (fVar7 / fVar37) +
                 0.0;
            *(float *)(param_1 + 0x8c) =
                 fVar44 * (fVar3 / fVar36) + fVar42 * (fVar45 / fVar36) + fVar40 * (fVar4 / fVar36)
                 + 0.0;
          }
          lVar32 = param_1[2];
          lVar11 = param_1[1];
          *(undefined1 *)(param_1 + 0x8d) = 1;
          if (local_620 == (longlong *)0x0) {
            plVar25 = *(longlong **)globalHumanPlane_exref;
            if (plVar25 != (longlong *)0x0) {
              (**(code **)(*plVar25 + 0xb0))(plVar25,uVar33);
            }
          }
          else {
            (**(code **)(*local_620 + 0xe0))(local_620,uVar33);
          }
          *(undefined1 *)(param_1 + 0x8d) = 0;
          local_648 = CONCAT22((short)((param_1[2] - param_1[1]) / 0xd0),
                               (short)((lVar32 - lVar11) / 0xd0));
          puVar29 = (undefined4 *)param_1[0x11];
          if (puVar29 == (undefined4 *)param_1[0x12]) {
            lVar32 = (longlong)puVar29 - param_1[0x10] >> 2;
            if (lVar32 == 0x3fffffffffffffff) {
                    // WARNING: Subroutine does not return
              FUN_7ff893330ae0();
            }
            local_618 = (longlong **)(lVar32 + 1);
            uVar31 = param_1[0x12] - param_1[0x10] >> 2;
            if (0x3fffffffffffffff - (uVar31 >> 1) < uVar31) {
              pplVar20 = (longlong **)0x3fffffffffffffff;
            }
            else {
              pplVar20 = (longlong **)(uVar31 + (uVar31 >> 1));
              if (pplVar20 < local_618) {
                pplVar20 = local_618;
              }
            }
            local_630 = (longlong)pplVar20 * 4;
            pvVar26 = malloc(local_630);
            if (pvVar26 == (void *)0x0) {
              ed::fatal_out_of_memory(s_ed_malloc_7ff89358cbc0,local_630);
            }
            *(undefined4 *)((longlong)pvVar26 + lVar32 * 4) = local_648;
            puVar12 = (undefined4 *)param_1[0x10];
            if (puVar29 == (undefined4 *)param_1[0x11]) {
              sVar30 = param_1[0x11] - (longlong)puVar12;
              pvVar28 = pvVar26;
              puVar29 = puVar12;
            }
            else {
              memmove(pvVar26,puVar12,(longlong)puVar29 - (longlong)puVar12);
              sVar30 = param_1[0x11] - (longlong)puVar29;
              pvVar28 = (void *)((longlong)pvVar26 + (lVar32 + 1) * 4);
            }
            memmove(pvVar28,puVar29,sVar30);
            if ((void *)param_1[0x10] != (void *)0x0) {
              free((void *)param_1[0x10]);
            }
            param_1[0x10] = (longlong)pvVar26;
            param_1[0x11] = (longlong)((longlong)pvVar26 + (longlong)local_618 * 4);
            param_1[0x12] = local_630 + (longlong)pvVar26;
          }
          else {
            *puVar29 = local_648;
            param_1[0x11] = param_1[0x11] + 4;
          }
        }
        uVar33 = uVar33 + 1;
        if (uVar17 <= uVar33) break;
        uVar41 = SUB84(local_610,0);
        uVar43 = (undefined4)((ulonglong)local_610 >> 0x20);
      } while( true );
    }
    param_1[0x97] = lVar34;
  }
LAB_7ff893502da2:
  local_548 = param_1 + 0xd;
  local_540 = param_1 + 0x10;
  plStack_538 = param_1 + 10;
  if (param_1[1] == param_1[2]) {
    local_540 = local_600;
    plStack_538 = plStack_5f8;
    local_530 = local_5f0;
    uStack_528 = uStack_5e8;
    local_520 = local_5e0;
    uStack_518 = uStack_5d8;
    local_548 = param_1;
    FUN_7ff8934fff10(param_1 + 0x9e,0,local_628,&local_548);
  }
  else {
    local_510 = local_600;
    plStack_508 = plStack_5f8;
    local_500 = local_5f0;
    uStack_4f8 = uStack_5e8;
    local_4f0 = local_5e0;
    uStack_4e8 = uStack_5d8;
    local_4e0 = local_640;
    local_4dc = local_63c;
    local_530 = param_1 + 1;
    local_618 = &local_548;
    local_4d8 = param_1;
    FUN_7ff893500110(param_1 + 0x9e,
                     ((int)((param_1[2] - param_1[1]) / 0xd0) * 0x34 +
                      (int)(param_1[0x11] - *local_540 >> 2) + (int)(param_1[0xe] - *local_548 >> 2)
                     ) * 4 + (int)(param_1[0xb] - *plStack_538 >> 2) * 4 + 0x10,&local_618,
                     &local_510);
  }
  FUN_7ff893501460(param_1);
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  return;
}


################################################################################
# BLOCK 6
# SOURCE : CockpitBase_dump_SCY.dll.c
# KEYWORD : Graphics::Camera
################################################################################

void FUN_7ff893503650(longlong param_1)

{
  uint uVar1;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  longlong lStack_380;
  longlong local_378;
  longlong lStack_370;
  undefined **local_368 [7];
  undefined ***local_330;
  Camera local_328 [688];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_7ff89368e840 ^ (ulonglong)auStack_3a8;
  if (1 < (ulonglong)(*(longlong *)(param_1 + 0xa0) - *(longlong *)(param_1 + 0x98) >> 2)) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x98) + 4);
    local_378 = ((ulonglong)uVar1 & 0xffff) * 0xd0 + *(longlong *)(param_1 + 0x20);
    lStack_370 = (longlong)
                 (((ulonglong)(uVar1 >> 0x10) * 0xd0 - local_378) + *(longlong *)(param_1 + 0x20)) /
                 0xd0;
    if (lStack_370 != 0) {
      if (*(longlong *)(param_1 + 0x4b0) == 0) {
        local_368[0] = std::_Func_impl_no_alloc<>::vftable;
        local_330 = local_368;
        FUN_7ff893334b50(local_368);
        if (local_330 != (undefined ***)0x0) {
          (*(code *)(*local_330)[4])();
        }
      }
      Graphics::Camera::Camera(local_328,0);
      local_78 = DAT_7ff8936a4940;
      local_70 = 0x3f800000;
      local_74 = DAT_7ff8936a4940;
      local_6c = 0x3dcccccd;
      local_20 = 1;
      Graphics::Renderer::SetCamera(*(Renderer **)renderer_exref,local_328);
      local_388 = 0;
      lStack_380 = 0;
      (**(code **)(**(longlong **)pRenderApi_exref + 0x1c8))
                (*(longlong **)pRenderApi_exref,&local_388,DAT_7ff89358cc34,0);
      (**(code **)(**(longlong **)pRenderApi_exref + 0x1e0))(*(longlong **)pRenderApi_exref,0);
      (**(code **)(**(longlong **)pRenderApi_exref + 0x1d8))(*(longlong **)pRenderApi_exref,0);
      local_388 = local_378;
      lStack_380 = lStack_370;
      FUN_7ff893502fa0(param_1,&local_388,0,param_1 + 0x478);
    }
  }
  return;
}


################################################################################
# BLOCK 7
# SOURCE : CockpitBase_dump_SCY.dll.c
# KEYWORD : Graphics::Camera
################################################################################

void FUN_7ff893503ba0(longlong param_1)

{
  longlong lVar1;
  Context *this;
  longlong lVar2;
  undefined1 auStack_3a8 [32];
  int local_388;
  int local_384;
  longlong local_378;
  longlong local_370;
  longlong local_368 [7];
  longlong *local_330;
  undefined4 local_328 [140];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_54;
  undefined4 local_4c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_7ff89368e840 ^ (ulonglong)auStack_3a8;
  lVar2 = (ulonglong)*(ushort *)(param_1 + 200) * 0xd0 + *(longlong *)(param_1 + 0x20);
  lVar1 = (longlong)
          (((ulonglong)*(ushort *)(param_1 + 0xca) * 0xd0 - lVar2) + *(longlong *)(param_1 + 0x20))
          / 0xd0;
  if (lVar1 != 0) {
    Graphics::Camera::Camera((Camera *)local_328,0);
    (**(code **)(**(longlong **)pRenderApi_exref + 0x138))
              (*(longlong **)pRenderApi_exref,&local_388);
    local_2c = (float)local_388 / (float)local_384;
    local_f8 = 0x3f800000;
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 0x3f800000;
    local_d8 = 0;
    local_d0 = 0x3f800000;
    local_c8 = 0;
    local_c0 = 0;
    local_54 = 0;
    local_4c = 0;
    local_328[0] = 1;
    local_28 = 0x3f800000;
    local_34 = 0xbf800000;
    local_38 = (uint)local_2c ^ DAT_7ff89358cdb0;
    local_30 = 0xbf800000;
    local_20 = 1;
    local_24 = 0x3f800000;
    this = Graphics::Context::getCurrentContext();
    local_378 = 0;
    Graphics::Context::setCamera(this,(Camera *)local_328,true,(Vec2i *)&local_378);
    local_330 = (longlong *)0x0;
    local_378 = lVar2;
    local_370 = lVar1;
    FUN_7ff893502fa0(param_1,&local_378,0,local_368);
    if (local_330 != (longlong *)0x0) {
      (**(code **)(*local_330 + 0x20))(local_330,local_330 != local_368);
    }
  }
  return;
}

