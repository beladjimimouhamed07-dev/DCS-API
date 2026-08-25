/*
 * CockpitBase.dll class reconstruction
 * Function: set_page_as_shortcut
 * Address : 7ffada66a9e0
 * Role    : method
 */


/* public: void __cdecl cockpit::avKneeboard::set_page_as_shortcut(unsigned int) __ptr64 */

void __thiscall cockpit::avKneeboard::set_page_as_shortcut(avKneeboard *this,uint param_1)

{
  ulonglong uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  int *_Dst;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  
                    /* 0x25a9e0  6397  ?set_page_as_shortcut@avKneeboard@cockpit@@QEAAXI@Z */
  piVar9 = *(int **)(this + 0x480);
  if (piVar9 != *(int **)(this + 0x488)) {
    while (piVar9[1] != param_1) {
      piVar9 = piVar9 + 2;
      if (piVar9 == *(int **)(this + 0x488)) {
        return;
      }
    }
    if ((piVar9 != (int *)0x0) && (*piVar9 < 0)) {
      piVar3 = *(int **)(this + 0x468);
      iVar7 = 0;
      piVar6 = *(int **)(this + 0x470);
      uVar10 = (longlong)piVar6 - (longlong)piVar3 >> 2;
      piVar4 = piVar3;
      if (uVar10 != 0) {
        do {
          if (*piVar4 == -1) {
            piVar3[iVar7] = piVar9[1];
            *piVar9 = iVar7;
            return;
          }
          iVar7 = iVar7 + 1;
          piVar4 = piVar4 + 1;
        } while ((ulonglong)(longlong)iVar7 < uVar10);
      }
      iVar7 = piVar9[1];
      if (piVar6 == *(int **)(this + 0x478)) {
        if (uVar10 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_7ffada5f0ae0();
        }
        uVar8 = (longlong)*(int **)(this + 0x478) - (longlong)piVar3 >> 2;
        uVar1 = uVar10 + 1;
        uVar5 = 0x3fffffffffffffff;
        if ((uVar8 <= 0x3fffffffffffffff - (uVar8 >> 1)) &&
           (uVar5 = (uVar8 >> 1) + uVar8, uVar5 < uVar1)) {
          uVar5 = uVar1;
        }
        piVar3 = malloc(uVar5 * 4);
        if (piVar3 == (int *)0x0) {
          ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar5 * 4);
        }
        piVar4 = *(int **)(this + 0x468);
        piVar2 = *(int **)(this + 0x470);
        piVar3[uVar10] = iVar7;
        _Dst = piVar3;
        if (piVar6 != piVar2) {
          memmove(piVar3,piVar4,(longlong)piVar6 - (longlong)piVar4);
          _Dst = piVar3 + uVar10 + 1;
          piVar4 = piVar6;
        }
        memmove(_Dst,piVar4,(longlong)piVar2 - (longlong)piVar4);
        if (*(void **)(this + 0x468) != (void *)0x0) {
          free(*(void **)(this + 0x468));
        }
        *(int **)(this + 0x468) = piVar3;
        piVar6 = piVar3 + uVar1;
        *(int **)(this + 0x470) = piVar6;
        *(int **)(this + 0x478) = piVar3 + uVar5;
      }
      else {
        *piVar6 = iVar7;
        *(longlong *)(this + 0x470) = *(longlong *)(this + 0x470) + 4;
        piVar6 = *(int **)(this + 0x470);
      }
      *piVar9 = (int)((longlong)piVar6 - *(longlong *)(this + 0x468) >> 2) + -1;
    }
  }
  return;
}

