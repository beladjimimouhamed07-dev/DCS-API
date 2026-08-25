/*
 * CockpitBase.dll class reconstruction
 * Function: create_quad_tree
 * Address : 7ffada7f8000
 * Role    : method
 */


/* public: static class cockpit::SimpleOctTree * __ptr64 __cdecl
   cockpit::SimpleOctTree::create_quad_tree(class osg::BoundingBoxImpl<class osg::Vec3f> const &
   __ptr64,float) */

SimpleOctTree * __cdecl
cockpit::SimpleOctTree::create_quad_tree(BoundingBoxImpl<osg::Vec3f> *param_1,float param_2)

{
  SimpleOctTree *pSVar1;
  
                    /* 0x3e8000  2890
                       ?create_quad_tree@SimpleOctTree@cockpit@@SAPEAV12@AEBV?$BoundingBoxImpl@VVec3f@osg@@@osg@@M@Z
                        */
  pSVar1 = (SimpleOctTree *)FUN_7ffada82b29c(0x78);
  if (pSVar1 == (SimpleOctTree *)0x0) {
    pSVar1 = (SimpleOctTree *)0x0;
  }
  else {
    pSVar1 = (SimpleOctTree *)SimpleOctTree(pSVar1);
  }
  pSVar1[0x6c] = (SimpleOctTree)0x0;
  *(float *)(pSVar1 + 0x60) = param_2;
  Initialize(pSVar1,param_1);
  return pSVar1;
}

