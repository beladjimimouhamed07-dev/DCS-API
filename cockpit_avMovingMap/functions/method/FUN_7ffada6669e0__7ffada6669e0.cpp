/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada6669e0
 * Address : 7ffada6669e0
 * Role    : method
 * Vtable slots: 34
 */


avDrawCachedObj * FUN_7ffada6669e0(avDrawCachedObj *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x20,*(__uint64 *)(param_1 + -8),cockpit::avDrawCachedObj::~avDrawCachedObj);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::avDrawCachedObj::~avDrawCachedObj(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

