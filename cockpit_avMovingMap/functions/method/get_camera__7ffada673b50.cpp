/*
 * CockpitBase.dll class reconstruction
 * Function: get_camera
 * Address : 7ffada673b50
 * Role    : method
 */


/* public: class Graphics::Camera const & __ptr64 __cdecl
   cockpit::avMovingMap::get_camera(bool,float,float,float,float) __ptr64 */

Camera * __thiscall
cockpit::avMovingMap::get_camera
          (avMovingMap *this,bool param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 local_38 [48];
  
                    /* 0x263b50  3784
                       ?get_camera@avMovingMap@cockpit@@QEAAAEBVCamera@Graphics@@_NMMMM@Z */
  dVar4 = wTime::GetModelTime();
  if (dVar4 != *(double *)(this + 0x318)) {
    dVar4 = wTime::GetModelTime();
    *(double *)(this + 0x318) = dVar4;
    (**(code **)(*(longlong *)this + 0x28))(this);
    check_camera_orientation(this);
    check_camera_volume(this,param_1,param_2,param_3,param_4,param_5);
    (**(code **)(*(longlong *)this + 0x30))(this);
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)this + 0x20))(this,local_38);
    uVar1 = *puVar3;
    uVar2 = *(undefined4 *)(puVar3 + 1);
    this[0x310] = (avMovingMap)0x1;
    *(undefined8 *)(this + 0x268) = uVar1;
    *(undefined4 *)(this + 0x270) = uVar2;
  }
  return (Camera *)(this + 8);
}

