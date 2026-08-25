/*
 * CockpitBase.dll class reconstruction
 * Function: AddObject
 * Address : 7ffada7f6520
 * Role    : method
 */


/* public: bool __cdecl cockpit::SimpleOctTree::AddObject(class cockpit::SimpleOctTreeLoad *
   __ptr64) __ptr64 */

bool __thiscall cockpit::SimpleOctTree::AddObject(SimpleOctTree *this,SimpleOctTreeLoad *param_1)

{
  float fVar1;
  SimpleOctTreeNode *pSVar2;
  longlong lVar3;
  float *pfVar4;
  bool bVar5;
  int iVar6;
  
                    /* 0x3e6520  1890
                       ?AddObject@SimpleOctTree@cockpit@@QEAA_NPEAVSimpleOctTreeLoad@2@@Z */
  if ((param_1 == (SimpleOctTreeLoad *)0x0) ||
     (pSVar2 = *(SimpleOctTreeNode **)(this + 0x18), pSVar2 == (SimpleOctTreeNode *)0x0)) {
    return false;
  }
  *(int *)(pSVar2 + 0x1c) = *(int *)(pSVar2 + 0x1c) + 1;
  lVar3 = *(longlong *)(pSVar2 + 0x30);
  if ((lVar3 == 0) || (iVar6 = FUN_7ffada7f6d70((float *)pSVar2,(longlong)param_1), iVar6 < 0)) {
    FUN_7ffada7f73b0((float *)pSVar2,(int *)param_1);
    bVar5 = true;
  }
  else {
    bVar5 = SimpleOctTreeNode::AddObject
                      (*(SimpleOctTreeNode **)(lVar3 + (longlong)iVar6 * 8),param_1);
  }
  pfVar4 = *(float **)(pSVar2 + 0x50);
  if (((byte)pSVar2[0x58] < (byte)*(SimpleOctTreeNode *)((longlong)pfVar4 + 0xd)) &&
     ((int)pfVar4[1] < *(int *)(pSVar2 + 0x1c))) {
    fVar1 = *pfVar4;
    if (*(char *)(pfVar4 + 3) == '\0') {
      if ((*(float *)(pSVar2 + 0xc) - *(float *)pSVar2 <= fVar1) &&
         (*(float *)(pSVar2 + 0x14) - *(float *)(pSVar2 + 8) <= fVar1)) {
        return bVar5;
      }
    }
    else if (((*(float *)(pSVar2 + 0xc) - *(float *)pSVar2 <= fVar1) &&
             (*(float *)(pSVar2 + 0x14) - *(float *)(pSVar2 + 8) <= fVar1)) &&
            (*(float *)(pSVar2 + 0x10) - *(float *)(pSVar2 + 4) <= fVar1)) {
      return bVar5;
    }
    FUN_7ffada7f7af0(pSVar2);
  }
  return bVar5;
}

