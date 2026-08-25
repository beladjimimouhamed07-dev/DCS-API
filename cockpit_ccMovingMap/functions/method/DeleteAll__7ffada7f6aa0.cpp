/*
 * CockpitBase.dll class reconstruction
 * Function: DeleteAll
 * Address : 7ffada7f6aa0
 * Role    : method
 */


/* public: void __cdecl cockpit::SimpleOctTreeNode::DeleteAll(void) __ptr64 */

void __thiscall cockpit::SimpleOctTreeNode::DeleteAll(SimpleOctTreeNode *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  SimpleOctTreeNode *this_00;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  longlong *plVar11;
  
                    /* 0x3e6aa0  1930  ?DeleteAll@SimpleOctTreeNode@cockpit@@QEAAXXZ */
  plVar2 = *(longlong **)(this + 0x38);
  piVar9 = (int *)0x0;
  if (plVar2 != *(longlong **)(this + 0x40)) {
    do {
      if (*plVar2 != 0) {
        *(undefined8 *)(*plVar2 + 0x28) = 0;
      }
      plVar3 = *(longlong **)(this + 0x40);
      if (plVar2 + 2 != plVar3) {
        piVar8 = (int *)*plVar2;
        plVar11 = plVar2;
        do {
          piVar6 = piVar8 + 2;
          if (piVar8 == (int *)0x0) {
            piVar6 = piVar9;
          }
          if (piVar6 != (int *)0x0) {
            LOCK();
            iVar7 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if ((iVar7 == 1) && (puVar4 = (undefined8 *)*plVar11, puVar4 != (undefined8 *)0x0)) {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
          *plVar11 = plVar11[2];
          plVar11[2] = 0;
          plVar1 = plVar11 + 4;
          piVar8 = piVar9;
          plVar11 = plVar11 + 2;
        } while (plVar1 != plVar3);
      }
      lVar5 = *(longlong *)(this + 0x40);
      piVar8 = (int *)(*(longlong *)(lVar5 + -0x10) + 8);
      if (*(longlong *)(lVar5 + -0x10) == 0) {
        piVar8 = piVar9;
      }
      if (piVar8 != (int *)0x0) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          puVar4 = *(undefined8 **)(lVar5 + -0x10);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          *(undefined8 *)(lVar5 + -0x10) = 0;
        }
      }
      *(longlong *)(this + 0x40) = *(longlong *)(this + 0x40) + -0x10;
    } while (plVar2 != *(longlong **)(this + 0x40));
  }
  piVar8 = piVar9;
  if (*(longlong *)(this + 0x30) != 0) {
    do {
      DeleteAll(*(SimpleOctTreeNode **)(*(longlong *)(this + 0x30) + (longlong)piVar9));
      this_00 = *(SimpleOctTreeNode **)((longlong)piVar9 + *(longlong *)(this + 0x30));
      if (this_00 != (SimpleOctTreeNode *)0x0) {
        ~SimpleOctTreeNode(this_00);
        free(this_00);
      }
      uVar10 = (int)piVar8 + 1;
      piVar9 = piVar9 + 2;
      iVar7 = 4;
      if (*(char *)(*(longlong *)(this + 0x50) + 0xc) != '\0') {
        iVar7 = 8;
      }
      piVar8 = (int *)(ulonglong)uVar10;
    } while ((int)uVar10 < iVar7);
    free(*(void **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  return;
}

