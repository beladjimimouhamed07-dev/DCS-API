/*
 * CockpitBase.dll class reconstruction
 * Function: setRotate
 * Address : 7ffada674800
 * Role    : method
 */


/* public: void __cdecl cockpit::avMovingMapPoint::setRotate(float) __ptr64 */

void __thiscall cockpit::avMovingMapPoint::setRotate(avMovingMapPoint *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
                    /* 0x264800  6049  ?setRotate@avMovingMapPoint@cockpit@@QEAAXM@Z */
  fVar4 = (float)((uint)param_1 ^ DAT_7ffada84cdb0);
  *(undefined8 *)(this + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3ff0000000000000;
  dVar2 = sin((double)fVar4);
  dVar3 = cos((double)fVar4);
  dVar1 = *(double *)(this + 0xa0);
  *(double *)(this + 0xa0) = dVar1 * dVar3 - *(double *)(this + 0xe0) * dVar2;
  *(double *)(this + 0xe0) = *(double *)(this + 0xe0) * dVar3 + dVar1 * dVar2;
  dVar1 = *(double *)(this + 0xa8);
  *(double *)(this + 0xa8) = dVar1 * dVar3 - *(double *)(this + 0xe8) * dVar2;
  *(double *)(this + 0xe8) = *(double *)(this + 0xe8) * dVar3 + dVar1 * dVar2;
  dVar1 = *(double *)(this + 0xb0);
  *(double *)(this + 0xb0) = dVar1 * dVar3 - *(double *)(this + 0xf0) * dVar2;
  *(double *)(this + 0xf0) = *(double *)(this + 0xf0) * dVar3 + dVar1 * dVar2;
  return;
}

