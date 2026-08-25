/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada666c40
 * Address : 7ffada666c40
 * Role    : method
 * Vtable slots: 36
 */


avMovingMapPoint * FUN_7ffada666c40(avMovingMapPoint *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x140,*(__uint64 *)(param_1 + -8),
               cockpit::avMovingMapPoint::~avMovingMapPoint);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::avMovingMapPoint::~avMovingMapPoint(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

