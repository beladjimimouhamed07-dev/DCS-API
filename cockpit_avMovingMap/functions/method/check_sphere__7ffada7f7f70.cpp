/*
 * CockpitBase.dll class reconstruction
 * Function: check_sphere
 * Address : 7ffada7f7f70
 * Role    : method
 * Vtable slots: 38, 48
 */


/* protected: virtual bool __cdecl cockpit::SimpleOctTreeLoad::check_sphere(class osg::Vec3f const &
   __ptr64,float const & __ptr64) __ptr64 */

bool __thiscall
cockpit::SimpleOctTreeLoad::check_sphere(SimpleOctTreeLoad *this,Vec3f *param_1,float *param_2)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  
                    /* 0x3e7f70  2699
                       ?check_sphere@SimpleOctTreeLoad@cockpit@@MEAA_NAEBVVec3f@osg@@AEBM@Z */
  if (this[0x30] == (SimpleOctTreeLoad)0x0) {
    uVar1 = FUN_7ffada5fa0c0((float *)(this + 0x10),(float *)param_1,*param_2);
    return CONCAT31(extraout_var,uVar1) != 3;
  }
  return false;
}

