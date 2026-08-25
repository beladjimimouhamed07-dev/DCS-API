/*
 * CockpitBase.dll class reconstruction
 * Function: render
 * Address : 7ffada795fa0
 * Role    : method
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* protected: void __cdecl cockpit::ccMovingMap::render(class cockpit::ccIndicationRenderParser &
   __ptr64,unsigned char) __ptr64 */

void __thiscall
cockpit::ccMovingMap::render(ccMovingMap *this,ccIndicationRenderParser *param_1,uchar param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  SimpleOctTree *this_00;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined7 in_register_00000081;
  vector<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>,ed::allocator<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>_>_>
  *pvVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_2e8 [32];
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined8 local_2b0;
  ClipVolume local_298 [32];
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  uint local_258;
  uint local_254;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  uint local_230;
  uint local_22c;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  uint local_208;
  uint local_204;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  uint local_1e0;
  uint local_1dc;
  undefined4 local_e8;
  ulonglong local_d8;
  
                    /* 0x385fa0  5608
                       ?render@ccMovingMap@cockpit@@IEAAXAEAVccIndicationRenderParser@2@E@Z */
  local_d8 = DAT_7ffada94e840 ^ (ulonglong)auStack_2e8;
  if ((*(longlong *)(this + 0xa0) != *(longlong *)(this + 0xa8)) &&
     (this_00 = *(SimpleOctTree **)
                 (*(longlong *)(this + 0xa0) + (ulonglong)*(uint *)(this + 0xb8) * 8),
     this_00 != (SimpleOctTree *)0x0)) {
    lVar10 = (**(code **)(**(longlong **)(this + 0x78) + 0xa8))
                       (*(longlong **)(this + 0x78),param_1,CONCAT71(in_register_00000081,param_2));
    uVar6 = *(undefined8 *)(lVar10 + 0x2fc);
    fVar26 = (float)((ulonglong)uVar6 >> 0x20);
    fVar16 = (float)((ulonglong)*(undefined8 *)(lVar10 + 0x2f0) >> 0x20);
    fVar27 = *(float *)(lVar10 + 0x2f8);
    local_2b0._0_4_ = (float)*(undefined8 *)(lVar10 + 0x2f0);
    local_2b8 = *(float *)(lVar10 + 0x248) * fVar16 + *(float *)(lVar10 + 0x238) * fVar27 +
                *(float *)(lVar10 + 600) * (float)local_2b0 + *(float *)(lVar10 + 0x268);
    fVar1 = *(float *)(lVar10 + 0x264);
    fVar2 = *(float *)(lVar10 + 0x234);
    local_2c4 = *(float *)(lVar10 + 0x244);
    local_2bc = local_2c4 * fVar16 + fVar2 * fVar27 + *(float *)(lVar10 + 0x254) * (float)local_2b0
                + fVar1;
    fVar3 = *(float *)(lVar10 + 0x260);
    fVar4 = *(float *)(lVar10 + 0x240);
    local_2c0 = *(float *)(lVar10 + 0x230);
    fVar27 = local_2c0 * fVar27;
    fVar17 = *(float *)(lVar10 + 0x250) * (float)local_2b0;
    fVar5 = *(float *)(lVar10 + 0x304);
    local_2b0._0_4_ = (float)uVar6;
    local_2c8 = *(float *)(lVar10 + 0x248) * fVar26 + *(float *)(lVar10 + 0x238) * fVar5 +
                *(float *)(lVar10 + 600) * (float)local_2b0 + *(float *)(lVar10 + 0x268);
    fVar25 = local_2c4 * fVar26;
    fVar23 = *(float *)(lVar10 + 0x254) * (float)local_2b0;
    fVar24 = local_2c0 * fVar5;
    fVar20 = *(float *)(lVar10 + 0x250) * (float)local_2b0;
    local_2b0 = uVar6;
    FUN_7ffada828ff0((undefined8 *)local_298);
    local_e8 = 4;
    dVar19 = (double)(fVar27 + fVar4 * fVar16 + fVar17 + fVar3);
    local_278 = (double)(float)(*(uint *)(lVar10 + 0x240) ^ DAT_7ffada84cdb0);
    local_270 = (double)(float)(*(uint *)(lVar10 + 0x244) ^ DAT_7ffada84cdb0);
    local_268 = (double)(float)(*(uint *)(lVar10 + 0x248) ^ DAT_7ffada84cdb0);
    local_230 = 0;
    uVar11 = local_230;
    if (0.0 <= local_268) {
      uVar11 = 4;
    }
    uVar21 = local_230;
    if (0.0 <= local_270) {
      uVar21 = 2;
    }
    local_258 = uVar11 | uVar21 | (uint)(0.0 <= local_278);
    uVar21 = (uint)DAT_7ffada84cda0;
    uVar22 = (uint)((ulonglong)DAT_7ffada84cda0 >> 0x20);
    local_260 = ((double)CONCAT44((uint)((ulonglong)local_278 >> 0x20) ^ uVar22,
                                  SUB84(local_278,0) ^ uVar21) * dVar19 -
                local_270 * (double)local_2bc) - local_268 * (double)local_2b8;
    local_254 = ~local_258 & 7;
    local_250 = (double)(float)(*(uint *)(lVar10 + 0x250) ^ DAT_7ffada84cdb0);
    local_248 = (double)(float)(*(uint *)(lVar10 + 0x254) ^ DAT_7ffada84cdb0);
    local_240 = (double)(float)(*(uint *)(lVar10 + 600) ^ DAT_7ffada84cdb0);
    uVar11 = local_230;
    if (0.0 <= local_240) {
      uVar11 = 4;
    }
    if (0.0 <= local_248) {
      local_230 = 2;
    }
    local_230 = 0.0 <= local_250 | uVar11 | local_230;
    local_238 = ((double)CONCAT44((uint)((ulonglong)local_250 >> 0x20) ^ uVar22,
                                  SUB84(local_250,0) ^ uVar21) * dVar19 -
                (double)local_2bc * local_248) - (double)local_2b8 * local_240;
    local_22c = ~local_230 & 7;
    dVar19 = (double)(fVar24 + fVar4 * fVar26 + fVar20 + fVar3);
    dVar18 = (double)(fVar25 + fVar2 * fVar5 + fVar23 + fVar1);
    local_228 = (double)*(float *)(lVar10 + 0x240);
    local_220 = (double)*(float *)(lVar10 + 0x244);
    local_218 = (double)*(float *)(lVar10 + 0x248);
    uVar12 = 0;
    uVar11 = uVar12;
    if (0.0 <= local_218) {
      uVar11 = 4;
    }
    uVar9 = uVar12;
    if (0.0 <= local_220) {
      uVar9 = 2;
    }
    local_208 = uVar11 | uVar9 | (uint)(0.0 <= local_228);
    local_210 = ((double)CONCAT44((uint)((ulonglong)local_228 >> 0x20) ^ uVar22,
                                  SUB84(local_228,0) ^ uVar21) * dVar19 - local_220 * dVar18) -
                local_218 * (double)local_2c8;
    local_204 = ~local_208 & 7;
    local_200 = (double)*(float *)(lVar10 + 0x250);
    local_1f8 = (double)*(float *)(lVar10 + 0x254);
    local_1f0 = (double)*(float *)(lVar10 + 600);
    uVar11 = uVar12;
    if (0.0 <= local_1f0) {
      uVar11 = 4;
    }
    if (0.0 <= local_1f8) {
      uVar12 = 2;
    }
    local_1e0 = uVar11 | uVar12 | (uint)(0.0 <= local_200);
    local_1e8 = ((double)CONCAT44((uint)((ulonglong)local_200 >> 0x20) ^ uVar22,
                                  SUB84(local_200,0) ^ uVar21) * dVar19 - local_1f8 * dVar18) -
                local_1f0 * (double)local_2c8;
    local_1dc = ~local_1e0 & 7;
    pvVar15 = (vector<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>,ed::allocator<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>_>_>
               *)(this + 0x80);
    if (*(longlong **)pvVar15 != *(longlong **)(this + 0x88)) {
      FUN_7ffada62f2d0(*(longlong **)pvVar15,*(longlong **)(this + 0x88));
      *(undefined8 *)(this + 0x88) = *(undefined8 *)pvVar15;
    }
    SimpleOctTree::GetObjects(this_00,local_298,pvVar15,(SimpleOctTree_check_object *)0x0);
    plVar7 = *(longlong **)(this + 0x88);
    for (plVar14 = *(longlong **)pvVar15; plVar14 != plVar7; plVar14 = plVar14 + 2) {
      lVar10 = *plVar14;
      if (lVar10 != 0) {
        puVar8 = *(undefined8 **)(lVar10 + 0x40);
        for (puVar13 = *(undefined8 **)(lVar10 + 0x38); puVar13 != puVar8; puVar13 = puVar13 + 1) {
          (**(code **)(*(longlong *)*puVar13 + 0x20))();
        }
      }
    }
    plVar7 = *(longlong **)(this + 0x88);
    for (plVar14 = *(longlong **)pvVar15; plVar14 != plVar7; plVar14 = plVar14 + 2) {
      lVar10 = *plVar14;
      if (lVar10 != 0) {
        puVar8 = *(undefined8 **)(lVar10 + 0x40);
        for (puVar13 = *(undefined8 **)(lVar10 + 0x38); puVar13 != puVar8; puVar13 = puVar13 + 1) {
          (**(code **)(*(longlong *)*puVar13 + 0x18))((longlong *)*puVar13,param_1,param_2);
        }
      }
    }
  }
  return;
}

