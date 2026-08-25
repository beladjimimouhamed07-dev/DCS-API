/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada603a60
 * Address : 7ffada603a60
 * Role    : method
 */


undefined8 * FUN_7ffada603a60(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  size_t _Size;
  void *_Src;
  undefined8 *puVar3;
  void *_Dst_00;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = param_1[3];
  _Size = param_1[2];
  if (uVar2 - _Size < param_3) {
    if (0x7fffffffffffffff - _Size < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_7ffada5f0ac0();
    }
    uVar4 = _Size + param_3 | 0xf;
    uVar5 = 0x7fffffffffffffff;
    if (((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar1 = uVar2 + (uVar2 >> 1), uVar5 = uVar4, uVar4 < uVar1)) {
      uVar5 = uVar1;
    }
    _Dst_00 = malloc(uVar5 + 1);
    if (_Dst_00 == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,uVar5 + 1);
    }
    param_1[3] = uVar5;
    param_1[2] = _Size + param_3;
    _Dst = (void *)(_Size + (longlong)_Dst_00);
    if (uVar2 < 0x10) {
      memcpy(_Dst_00,param_1,_Size);
      memcpy(_Dst,param_2,param_3);
      *(undefined1 *)((longlong)_Dst + param_3) = 0;
    }
    else {
      _Src = (void *)*param_1;
      memcpy(_Dst_00,_Src,_Size);
      memcpy(_Dst,param_2,param_3);
      *(undefined1 *)((longlong)_Dst + param_3) = 0;
      free(_Src);
    }
    *param_1 = _Dst_00;
  }
  else {
    param_1[2] = _Size + param_3;
    puVar3 = param_1;
    if (0xf < uVar2) {
      puVar3 = (undefined8 *)*param_1;
    }
    memmove((void *)(_Size + (longlong)puVar3),param_2,param_3);
    *(undefined1 *)((longlong)(_Size + (longlong)puVar3) + param_3) = 0;
  }
  return param_1;
}

