/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada666a70
 * Address : 7ffada666a70
 * Role    : method
 * Vtable slots: 9
 */


avKneeboard * FUN_7ffada666a70(avKneeboard *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x4f8,*(__uint64 *)(param_1 + -8),cockpit::avKneeboard::~avKneeboard);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::avKneeboard::~avKneeboard(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

