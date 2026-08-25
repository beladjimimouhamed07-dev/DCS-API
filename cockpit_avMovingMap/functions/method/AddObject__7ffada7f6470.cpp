/*
 * CockpitBase.dll class reconstruction
 * Function: AddObject
 * Address : 7ffada7f6470
 * Role    : method
 */


/* public: bool __cdecl cockpit::SimpleOctTree::AddObject(class ed::basic_string<char> const &
   __ptr64,class cockpit::SimpleOctTreeLoad * __ptr64) __ptr64 */

bool __thiscall
cockpit::SimpleOctTree::AddObject
          (SimpleOctTree *this,basic_string<char> *param_1,SimpleOctTreeLoad *param_2)

{
  SimpleOctTreeLoad *pSVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong *plVar6;
  int *piVar7;
  longlong local_18 [2];
  
                    /* 0x3e6470  1889
                       ?AddObject@SimpleOctTree@cockpit@@QEAA_NAEBV?$basic_string@D@ed@@PEAVSimpleOctTreeLoad@2@@Z
                        */
  if ((param_2 != (SimpleOctTreeLoad *)0x0) && (*(longlong *)(this + 0x18) != 0)) {
    plVar6 = FUN_7ffada7f5b90((float *)(this + 0x20),local_18,(undefined8 *)param_1);
    lVar3 = *plVar6;
    pSVar1 = param_2 + 8;
    if (pSVar1 != (SimpleOctTreeLoad *)0x0) {
      LOCK();
      *(int *)pSVar1 = *(int *)pSVar1 + 1;
      UNLOCK();
    }
    piVar7 = (int *)(*(longlong *)(lVar3 + 0x30) + 8);
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      piVar7 = (int *)0x0;
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar4 = *(undefined8 **)(lVar3 + 0x30), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    *(SimpleOctTreeLoad **)(lVar3 + 0x30) = param_2;
    bVar5 = SimpleOctTreeNode::AddObject(*(SimpleOctTreeNode **)(this + 0x18),param_2);
    return bVar5;
  }
  return false;
}

