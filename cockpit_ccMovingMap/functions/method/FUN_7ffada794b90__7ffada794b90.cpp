/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada794b90
 * Address : 7ffada794b90
 * Role    : method
 * Vtable slots: 0
 */


ccMovingMap * FUN_7ffada794b90(ccMovingMap *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0xd8,*(__uint64 *)(param_1 + -8),cockpit::ccMovingMap::~ccMovingMap);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::ccMovingMap::~ccMovingMap(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

