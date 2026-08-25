/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada66a530
 * Address : 7ffada66a530
 * Role    : method
 */


longlong *
FUN_7ffada66a530(longlong *param_1,ulonglong param_2,ulonglong param_3,void *param_4,size_t param_5)

{
  void *pvVar1;
  void *_Src;
  ulonglong uVar2;
  longlong *plVar3;
  size_t _Size;
  ulonglong uVar4;
  ulonglong uVar5;
  byte local_res8;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_7ffada667a20();
  }
  uVar4 = uVar2 - param_2;
  if (uVar4 < param_3) {
    param_3 = uVar4;
  }
  if (param_3 == param_5) {
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    memmove((void *)((longlong)plVar3 + param_2),param_4,param_5);
  }
  else if (param_5 < param_3) {
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    pvVar1 = (void *)((longlong)plVar3 + param_2);
    memmove(pvVar1,param_4,param_5);
    memmove((void *)((longlong)pvVar1 + param_5),(void *)((longlong)pvVar1 + param_3),
            (uVar4 - param_3) + 1);
    param_1[2] = (uVar2 - param_3) + param_5;
  }
  else {
    uVar5 = param_5 - param_3;
    if (param_1[3] - uVar2 < uVar5) {
      param_1 = FUN_7ffada6644a0(param_1,uVar5,(ulonglong)local_res8,param_2,param_3,param_4,param_5
                                );
    }
    else {
      param_1[2] = uVar2 + uVar5;
      plVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar3 = (longlong *)*param_1;
      }
      pvVar1 = (void *)((longlong)plVar3 + param_2);
      _Src = (void *)((longlong)pvVar1 + param_3);
      _Size = param_5;
      if ((pvVar1 < (void *)((longlong)param_4 + param_5)) &&
         (param_4 <= (void *)((longlong)plVar3 + uVar2))) {
        if (param_4 < _Src) {
          _Size = (longlong)_Src - (longlong)param_4;
        }
        else {
          _Size = 0;
        }
      }
      memmove((void *)((longlong)_Src + uVar5),_Src,(uVar4 - param_3) + 1);
      memmove(pvVar1,param_4,_Size);
      memcpy((void *)(_Size + (longlong)pvVar1),(void *)(_Size + uVar5 + (longlong)param_4),
             param_5 - _Size);
    }
  }
  return param_1;
}

