/*
 * CockpitBase.dll class reconstruction
 * Function: check_segment
 * Address : 7ffada7f7f40
 * Role    : method
 * Vtable slots: 37, 47
 */


/* protected: virtual bool __cdecl cockpit::SimpleOctTreeLoad::check_segment(class osg::Vec3f const
   & __ptr64,class osg::Vec3f const & __ptr64) __ptr64 */

bool __thiscall
cockpit::SimpleOctTreeLoad::check_segment(SimpleOctTreeLoad *this,Vec3f *param_1,Vec3f *param_2)

{
  ulonglong uVar1;
  
                    /* 0x3e7f40  2691
                       ?check_segment@SimpleOctTreeLoad@cockpit@@MEAA_NAEBVVec3f@osg@@0@Z */
  if (this[0x30] == (SimpleOctTreeLoad)0x0) {
    uVar1 = FUN_7ffada5f9fc0((float *)(this + 0x10),(float *)param_1,(float *)param_2);
    return (char)uVar1 != '\0';
  }
  return false;
}

