/*
 * CockpitBase.dll class reconstruction
 * Function: ~SimpleOctTreeNode
 * Address : 7ffada7f62d0
 * Role    : destructor
 */


/* public: __cdecl cockpit::SimpleOctTreeNode::~SimpleOctTreeNode(void) __ptr64 */

void __thiscall cockpit::SimpleOctTreeNode::~SimpleOctTreeNode(SimpleOctTreeNode *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  longlong *plVar11;
  SimpleOctTreeNode *pSVar12;
  int *piVar10;
  
                    /* 0x3e62d0  702  ??1SimpleOctTreeNode@cockpit@@QEAA@XZ */
  plVar2 = *(longlong **)(this + 0x38);
  piVar10 = (int *)0x0;
  if (plVar2 != *(longlong **)(this + 0x40)) {
    do {
      *(undefined8 *)(*plVar2 + 0x28) = 0;
      plVar3 = *(longlong **)(this + 0x40);
      if (plVar2 + 2 != plVar3) {
        piVar8 = (int *)*plVar2;
        plVar11 = plVar2;
        do {
          piVar6 = piVar8 + 2;
          if (piVar8 == (int *)0x0) {
            piVar6 = piVar10;
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
          piVar8 = piVar10;
          plVar11 = plVar11 + 2;
        } while (plVar1 != plVar3);
      }
      lVar5 = *(longlong *)(this + 0x40);
      piVar8 = (int *)(*(longlong *)(lVar5 + -0x10) + 8);
      if (*(longlong *)(lVar5 + -0x10) == 0) {
        piVar8 = piVar10;
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
  piVar8 = piVar10;
  if (*(longlong *)(this + 0x30) != 0) {
    do {
      pSVar12 = *(SimpleOctTreeNode **)((longlong)piVar8 + *(longlong *)(this + 0x30));
      if (pSVar12 != (SimpleOctTreeNode *)0x0) {
        ~SimpleOctTreeNode(pSVar12);
        free(pSVar12);
      }
      uVar9 = (int)piVar10 + 1;
      piVar10 = (int *)(ulonglong)uVar9;
      iVar7 = 4;
      if (*(char *)(*(longlong *)(this + 0x50) + 0xc) != '\0') {
        iVar7 = 8;
      }
      piVar8 = piVar8 + 2;
    } while ((int)uVar9 < iVar7);
    free(*(void **)(this + 0x30));
  }
  pSVar12 = this + 0x38;
  if (*(longlong **)pSVar12 != (longlong *)0x0) {
    FUN_7ffada62f2d0(*(longlong **)pSVar12,*(longlong **)(this + 0x40));
    free(*(void **)pSVar12);
    *(undefined8 *)pSVar12 = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  return;
}

