/*
 * CockpitBase.dll class reconstruction
 * Function: GetObjects
 * Address : 7ffada7f71e0
 * Role    : method
 */


/* public: void __cdecl cockpit::SimpleOctTree::GetObjects(class ClipVolume const * __ptr64,class
   ed::vector<class ed::Ptr<class cockpit::SimpleOctTreeLoad,struct ed::DefaultDeleter>,class
   ed::allocator<class ed::Ptr<class cockpit::SimpleOctTreeLoad,struct ed::DefaultDeleter> > > &
   __ptr64,class cockpit::SimpleOctTree_check_object * __ptr64) __ptr64 */

void __thiscall
cockpit::SimpleOctTree::GetObjects
          (SimpleOctTree *this,ClipVolume *param_1,
          vector<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>,ed::allocator<ed::Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>_>_>
          *param_2,SimpleOctTree_check_object *param_3)

{
  float fVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  uint uVar10;
  int *piVar11;
  int *apiStack_48 [4];
  
                    /* 0x3e71e0  1987
                       ?GetObjects@SimpleOctTree@cockpit@@QEAAXPEBVClipVolume@@AEAV?$vector@V?$Ptr@VSimpleOctTreeLoad@cockpit@@UDefaultDeleter@ed@@@ed@@V?$allocator@V?$Ptr@VSimpleOctTreeLoad@cockpit@@UDefaultDeleter@ed@@@ed@@@2@@ed@@PEAVSimpleOctTree_check_object@2@@Z
                        */
  lVar4 = *(longlong *)(this + 0x18);
  if (lVar4 == 0) {
    return;
  }
  if ((0 < *(int *)(lVar4 + 0x1c)) &&
     ((param_3 == (SimpleOctTree_check_object *)0x0 ||
      (param_3[8] == (SimpleOctTree_check_object)0x0)))) {
    piVar11 = (int *)0x0;
    piVar8 = piVar11;
    piVar7 = piVar11;
    if (*(longlong *)(lVar4 + 0x30) != 0) {
      do {
        pfVar2 = *(float **)((longlong)piVar8 + *(longlong *)(lVar4 + 0x30));
        fVar1 = pfVar2[6];
        iVar6 = (**(code **)(*(longlong *)param_1 + 0x10))
                          (param_1,*pfVar2 - fVar1,pfVar2[1] - fVar1,pfVar2[2] - fVar1,
                           fVar1 + pfVar2[3],fVar1 + pfVar2[4],fVar1 + pfVar2[5]);
        if (iVar6 != 3) {
          SimpleOctTreeNode::GetObjectList
                    (*(SimpleOctTreeNode **)((longlong)piVar8 + *(longlong *)(lVar4 + 0x30)),param_1
                     ,param_2,param_3);
        }
        uVar10 = (int)piVar7 + 1;
        iVar6 = 4;
        if (*(char *)(*(longlong *)(lVar4 + 0x50) + 0xc) != '\0') {
          iVar6 = 8;
        }
        piVar8 = piVar8 + 2;
        piVar7 = (int *)(ulonglong)uVar10;
      } while ((int)uVar10 < iVar6);
    }
    plVar9 = *(longlong **)(lVar4 + 0x38);
    piVar8 = piVar11;
    if (plVar9 != *(longlong **)(lVar4 + 0x40)) {
      do {
        piVar7 = (int *)(*plVar9 + 8);
        if (*plVar9 == 0) {
          piVar7 = piVar11;
        }
        if (piVar7 != (int *)0x0) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        if ((piVar8 != (int *)0x0) && (piVar7 = piVar8 + 2, piVar7 != (int *)0x0)) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if ((iVar6 == 1) && (piVar8 != (int *)0x0)) {
            (*(code *)**(undefined8 **)piVar8)(piVar8,1);
          }
        }
        piVar8 = (int *)*plVar9;
        apiStack_48[0] = piVar8;
        if (((char)piVar8[0xc] == '\0') &&
           ((param_1 == (ClipVolume *)0x0 ||
            (iVar6 = (**(code **)(*(longlong *)param_1 + 0x10))
                               (param_1,piVar8[4],piVar8[5],piVar8[6],piVar8[7],piVar8[8],piVar8[9])
            , iVar6 != 3)))) {
          if (param_3 != (SimpleOctTree_check_object *)0x0) {
            if (param_3[8] != (SimpleOctTree_check_object)0x0) break;
            cVar5 = (*(code *)**(undefined8 **)param_3)(param_3,piVar8);
            if (cVar5 == '\0') goto LAB_7ffada7f7176;
          }
          plVar3 = *(longlong **)(param_2 + 8);
          if (plVar3 == *(longlong **)(param_2 + 0x10)) {
            FUN_7ffada7f5880((longlong *)param_2,plVar3,(longlong *)apiStack_48);
          }
          else {
            *plVar3 = (longlong)piVar8;
            piVar7 = piVar8 + 2;
            if (piVar8 == (int *)0x0) {
              piVar7 = piVar11;
            }
            if (piVar7 != (int *)0x0) {
              LOCK();
              *piVar7 = *piVar7 + 1;
              UNLOCK();
            }
            *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x10;
          }
        }
LAB_7ffada7f7176:
        plVar9 = plVar9 + 2;
      } while (plVar9 != *(longlong **)(lVar4 + 0x40));
    }
    if ((piVar8 != (int *)0x0) && (piVar7 = piVar8 + 2, piVar7 != (int *)0x0)) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if ((iVar6 == 1) && (piVar8 != (int *)0x0)) {
        (*(code *)**(undefined8 **)piVar8)(piVar8,1);
      }
    }
  }
  return;
}

