/*
 * CockpitBase.dll class reconstruction
 * Function: FUN_7ffada794b00
 * Address : 7ffada794b00
 * Role    : method
 * Vtable slots: 17
 */


ccMapObjectsBuffer * FUN_7ffada794b00(ccMapObjectsBuffer *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x68,*(__uint64 *)(param_1 + -8),
               cockpit::ccMapObjectsBuffer::~ccMapObjectsBuffer);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  cockpit::ccMapObjectsBuffer::~ccMapObjectsBuffer(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

