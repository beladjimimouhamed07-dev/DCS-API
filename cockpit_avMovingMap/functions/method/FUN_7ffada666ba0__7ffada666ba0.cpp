/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada666ba0
 * Address : 7ffada666ba0
 * Role    : method
 * Vtable slots: 0
 */


undefined8 * FUN_7ffada666ba0(undefined8 *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_(param_1,0x330,param_1[-1],cockpit::avMovingMap::~avMovingMap);
    if ((param_2 & 1) != 0) {
      free(param_1 + -1);
    }
    return param_1 + -1;
  }
  *param_1 = cockpit::avMovingMap::vftable;
  param_1[0x42] = ClipVolume::vftable;
  param_1[2] = ClipVolume::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

