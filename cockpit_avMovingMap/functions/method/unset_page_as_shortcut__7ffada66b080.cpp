/*
 * CockpitBase.dll class reconstruction
 * Function: unset_page_as_shortcut
 * Address : 7ffada66b080
 * Role    : method
 */


/* public: void __cdecl cockpit::avKneeboard::unset_page_as_shortcut(unsigned int) __ptr64 */

void __thiscall cockpit::avKneeboard::unset_page_as_shortcut(avKneeboard *this,uint param_1)

{
  int *piVar1;
  
                    /* 0x25b080  6785  ?unset_page_as_shortcut@avKneeboard@cockpit@@QEAAXI@Z */
  piVar1 = *(int **)(this + 0x480);
  if (piVar1 != *(int **)(this + 0x488)) {
    while (piVar1[1] != param_1) {
      piVar1 = piVar1 + 2;
      if (piVar1 == *(int **)(this + 0x488)) {
        return;
      }
    }
    if (-1 < *piVar1) {
      *(undefined4 *)(*(longlong *)(this + 0x468) + (longlong)*piVar1 * 4) = 0xffffffff;
      *piVar1 = -1;
      piVar1 = *(int **)(this + 0x470);
      while ((*(int **)(this + 0x468) != piVar1 &&
             (piVar1 = (int *)(*(longlong *)(this + 0x470) + -4), *piVar1 == -1))) {
        *(int **)(this + 0x470) = piVar1;
      }
    }
  }
  return;
}

