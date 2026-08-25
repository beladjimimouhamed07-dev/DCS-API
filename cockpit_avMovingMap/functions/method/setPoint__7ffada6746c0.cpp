/*
 * CockpitBase.dll class reconstruction
 * Function: setPoint
 * Address : 7ffada6746c0
 * Role    : method
 */


/* public: void __cdecl cockpit::avMovingMapPoint::setPoint(class osg::Vec3d const & __ptr64)
   __ptr64 */

void __thiscall cockpit::avMovingMapPoint::setPoint(avMovingMapPoint *this,Vec3d *param_1)

{
  undefined8 uVar1;
  BoundingBoxImpl<osg::Vec3f> *pBVar2;
  float local_28 [8];
  
                    /* 0x2646c0  6025  ?setPoint@avMovingMapPoint@cockpit@@QEAAXAEBVVec3d@osg@@@Z */
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = uVar1;
  pBVar2 = (BoundingBoxImpl<osg::Vec3f> *)
           FUN_7ffada673fd0((float *)(this + 0x120),local_28,(double *)(this + 0xa0));
  SimpleOctTreeLoad::setBoundingBox((SimpleOctTreeLoad *)this,pBVar2);
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 8);
  return;
}

