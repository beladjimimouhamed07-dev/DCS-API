/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada666b10
 * Address : 7ffada666b10
 * Role    : method
 * Vtable slots: 46
 */


avKneeboardZoneObject * FUN_7ffada666b10(avKneeboardZoneObject *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x70,*(__uint64 *)(param_1 + -8),
               cockpit::avKneeboardZoneObject::~avKneeboardZoneObject);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::avKneeboardZoneObject::~avKneeboardZoneObject(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

