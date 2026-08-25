/*
 * CockpitBase.dll class reconstruction
 * Function: force_update
 * Address : 7ffada5f92a0
 * Role    : method
 */


/* public: void __cdecl cockpit::clickableElementData::force_update(void) __ptr64 */

void __thiscall cockpit::clickableElementData::force_update(clickableElementData *this)

{
  clickableElementData *pcVar1;
  longlong *plVar2;
  uint uVar3;
  float *pfVar4;
  clickableElementData *pcVar5;
  BoundingBoxImpl<osg::Vec3f> *pBVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_110;
  float local_108;
  float local_104;
  float local_f8 [58];
  
                    /* 0x1e92a0  3095  ?force_update@clickableElementData@cockpit@@QEAAXXZ */
  if ((*(longlong *)(this + 0x198) != 0) &&
     (plVar2 = *(longlong **)(this + 0xd8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_168);
    fVar10 = *(float *)(this + 0x130);
    fVar11 = *(float *)(this + 300);
    fVar17 = *(float *)(this + 0x134);
    fVar7 = *(float *)(this + 0x13c);
    fVar13 = local_158 * fVar10 + local_168 * fVar11 + local_148 * fVar17;
    local_118 = local_158;
    local_104 = local_144;
    local_120 = local_160;
    local_124 = local_158;
    local_110 = local_144;
    local_108 = local_160;
    fVar8 = local_164 * fVar11 + local_154 * fVar10 + local_144 * fVar17;
    fVar9 = *(float *)(this + 0x140);
    fVar14 = *(float *)(this + 0x144);
    fVar12 = local_150 * fVar10 + local_160 * fVar11 + local_140 * fVar17;
    fVar15 = local_158 * fVar9 + fVar7 * local_168 + local_148 * fVar14;
    fVar16 = local_164 * fVar7 + fVar9 * local_154 + local_144 * fVar14;
    fVar10 = *(float *)(this + 0x150);
    fVar11 = *(float *)(this + 0x14c);
    fVar9 = local_160 * fVar7 + local_150 * fVar9 + fVar14 * local_140;
    fVar17 = *(float *)(this + 0x154);
    fVar7 = fVar10 * local_158 + fVar11 * local_168 + fVar17 * local_148;
    fVar14 = local_164 * fVar11 + fVar10 * local_154 + fVar17 * local_144;
    fVar11 = local_150 * fVar10 + fVar11 * local_160 + fVar17 * local_140;
    fVar10 = fVar8 * fVar8 + fVar13 * fVar13 + fVar12 * fVar12;
    local_168 = fVar13;
    local_164 = fVar8;
    local_160 = fVar12;
    local_158 = fVar15;
    local_154 = fVar16;
    local_150 = fVar9;
    local_148 = fVar7;
    local_144 = fVar14;
    local_140 = fVar11;
    if (fVar10 < 0.0) {
      fVar10 = sqrtf(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    fVar17 = fVar16 * fVar16 + fVar15 * fVar15 + fVar9 * fVar9;
    if (fVar17 < 0.0) {
      fVar17 = sqrtf(fVar17);
    }
    else {
      fVar17 = SQRT(fVar17);
    }
    fVar11 = fVar14 * fVar14 + fVar7 * fVar7 + fVar11 * fVar11;
    if (fVar11 < 0.0) {
      fVar11 = sqrtf(fVar11);
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    if (DAT_7ffada84d3e0 < fVar10) {
      fVar10 = DAT_7ffada84d3dc;
    }
    if (DAT_7ffada84d3e0 < fVar17) {
      fVar17 = DAT_7ffada84d3dc;
    }
    if (DAT_7ffada84d3e0 < fVar11) {
      fVar11 = DAT_7ffada84d3dc;
    }
    FUN_7ffada5fcc80(&local_168);
    FUN_7ffada5fcc80(&local_158);
    FUN_7ffada5fcc80(&local_148);
    pfVar4 = (float *)(**(code **)(**(longlong **)(this + 0x198) + 0x78))();
    pcVar5 = (clickableElementData *)FUN_7ffada5f0030(&local_168,local_f8,pfVar4);
    uVar3 = DAT_7ffada84cdb0;
    pcVar1 = this + 0x74;
    *(uint *)(this + 0xb8) = (uint)fVar10 ^ DAT_7ffada84cdb0;
    *(uint *)(this + 0xbc) = (uint)fVar17 ^ uVar3;
    *(uint *)(this + 0xc0) = (uint)fVar11 ^ uVar3;
    *(float *)(this + 0xc4) = fVar10;
    *(float *)(this + 200) = fVar17;
    *(float *)(this + 0xcc) = fVar11;
    if (pcVar1 != pcVar5) {
      *(float *)pcVar1 = *(float *)pcVar5;
      *(float *)(this + 0x78) = *(float *)(pcVar5 + 4);
      *(float *)(this + 0x7c) = *(float *)(pcVar5 + 8);
      *(float *)(this + 0x84) = *(float *)(pcVar5 + 0x10);
      *(float *)(this + 0x88) = *(float *)(pcVar5 + 0x14);
      *(float *)(this + 0x8c) = *(float *)(pcVar5 + 0x18);
      *(float *)(this + 0x94) = *(float *)(pcVar5 + 0x20);
      *(float *)(this + 0x98) = *(float *)(pcVar5 + 0x24);
      *(float *)(this + 0x9c) = *(float *)(pcVar5 + 0x28);
      *(float *)(this + 0xa4) = *(float *)(pcVar5 + 0x30);
      *(float *)(this + 0xa8) = *(float *)(pcVar5 + 0x34);
      *(float *)(this + 0xac) = *(float *)(pcVar5 + 0x38);
    }
    pBVar6 = (BoundingBoxImpl<osg::Vec3f> *)
             FUN_7ffada5f7fe0((float *)(this + 0xb8),&local_128,(float *)pcVar1);
    SimpleOctTreeLoad::setBoundingBox((SimpleOctTreeLoad *)this,pBVar6);
  }
  return;
}

