/*
 * CockpitBase.dll class reconstruction
 * Function: check_camera_volume
 * Address : 7ffada673a40
 * Role    : method
 */


/* protected: void __cdecl cockpit::avMovingMap::check_camera_volume(bool,float,float,float,float)
   __ptr64 */

void __thiscall
cockpit::avMovingMap::check_camera_volume
          (avMovingMap *this,bool param_1,float param_2,float param_3,float param_4,float param_5)

{
  double dVar1;
  float fVar2;
  
                    /* 0x263a40  2668  ?check_camera_volume@avMovingMap@cockpit@@IEAAX_NMMMM@Z */
  if ((((*(float *)(this + 0x304) < *(float *)(this + 0x2f8)) ||
       (*(float *)(this + 0x308) < *(float *)(this + 0x2fc))) ||
      (*(float *)(this + 0x30c) < *(float *)(this + 0x300))) || (param_1)) {
    dVar1 = (double)(**(code **)(*(longlong *)this + 0x10))();
    *(undefined4 *)(this + 0x300) = 0xbdcccccd;
    fVar2 = (float)dVar1;
    this[0x310] = (avMovingMap)0x1;
    *(undefined4 *)(this + 0x30c) = 0x462be000;
    *(float *)(this + 0x2fc) = fVar2 * param_4;
    *(float *)(this + 0x2f8) = fVar2 * param_2;
    *(float *)(this + 0x308) = fVar2 * param_5;
    *(float *)(this + 0x304) = fVar2 * param_3;
  }
  return;
}

