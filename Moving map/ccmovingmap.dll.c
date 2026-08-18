#include "CockpitBase_dump_SCY.dll.h"


pointer[16] vftable;
string s_ed_malloc_7ff89358cbc0;
undefined4 DAT_7ff893592210;
undefined4 DAT_7ff8935a5af8;
undefined4 DAT_7ff89359b2f4;
undefined4 DAT_7ff8935a5afc;
float DAT_7ff89358cc34;
float DAT_7ff893590374;
double DAT_7ff89358cc38;
undefined DAT_00000008;
undefined DAT_7ff89358d3a4;
string s_chart_item_meta_7ff8935a59d0;
string s_____moving_map_page_handle_7ff8935a5a18;
pointer[3] vftable;
string s_create_chart_7ff8935a5a38;
string s_set_render_to_texture_7ff8935a5a48;
string s_get_render_to_texture_7ff8935a5a60;
undefined l_create_chart;
undefined l_get_render_to_texture;
undefined l_set_render_to_texture;
ulonglong DAT_7ff89368e840;
uint DAT_7ff89358cdb0;
undefined8 DAT_7ff89358cda0;

// public: __cdecl cockpit::ccMovingMap::ccMovingMap(class cockpit::ccMovingMap const & __ptr64)
// __ptr64

ccMovingMap * __thiscall cockpit::ccMovingMap::ccMovingMap(ccMovingMap *this,ccMovingMap *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  int *piVar4;
  longlong *plVar5;
  ulonglong uVar6;
  size_t sVar7;
  longlong *plVar8;
  
                    // 0x3843a0  530  ??0ccMovingMap@cockpit@@QEAA@AEBV01@@Z
  ccIndicatorPage::ccIndicatorPage((ccIndicatorPage *)this,(ccIndicatorPage *)param_1);
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  uVar6 = *(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 4;
  if (uVar6 != 0) {
    if (0xfffffffffffffff < uVar6) {
                    // WARNING: Subroutine does not return
      FUN_7ff893330ae0();
    }
    sVar7 = uVar6 * 0x10;
    pvVar3 = malloc(sVar7);
    if (pvVar3 == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ff89358cbc0,sVar7);
    }
    *(void **)(this + 0x80) = pvVar3;
    *(void **)(this + 0x88) = pvVar3;
    *(void **)(this + 0x90) = (void *)(sVar7 + (longlong)pvVar3);
    plVar1 = *(longlong **)(param_1 + 0x88);
    plVar8 = *(longlong **)(this + 0x80);
    for (plVar5 = *(longlong **)(param_1 + 0x80); plVar5 != plVar1; plVar5 = plVar5 + 2) {
      lVar2 = *plVar5;
      *plVar8 = lVar2;
      piVar4 = (int *)(lVar2 + 8);
      if (lVar2 == 0) {
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      plVar8 = plVar8 + 2;
    }
    *(longlong **)(this + 0x88) = plVar8;
  }
  this[0x98] = param_1[0x98];
  this[0x99] = param_1[0x99];
  this[0x9a] = param_1[0x9a];
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  uVar6 = *(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) >> 3;
  if (uVar6 != 0) {
    if (0x1fffffffffffffff < uVar6) {
                    // WARNING: Subroutine does not return
      FUN_7ff893330ae0();
    }
    sVar7 = uVar6 * 8;
    pvVar3 = malloc(sVar7);
    if (pvVar3 == (void *)0x0) {
      ed::fatal_out_of_memory(s_ed_malloc_7ff89358cbc0,sVar7);
    }
    *(void **)(this + 0xa0) = pvVar3;
    *(void **)(this + 0xa8) = pvVar3;
    *(void **)(this + 0xb0) = (void *)(sVar7 + (longlong)pvVar3);
    pvVar3 = *(void **)(this + 0xa0);
    sVar7 = *(longlong *)(param_1 + 0xa8) - (longlong)*(void **)(param_1 + 0xa0);
    memmove(pvVar3,*(void **)(param_1 + 0xa0),sVar7);
    *(void **)(this + 0xa8) = (void *)((longlong)pvVar3 + ((longlong)sVar7 >> 3) * 8);
  }
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  FUN_7ff89336cf50(this + 0xc0,param_1 + 0xc0);
  return this;
}



// public: __cdecl cockpit::ccMovingMap::ccMovingMap(void) __ptr64

ccMovingMap * __thiscall cockpit::ccMovingMap::ccMovingMap(ccMovingMap *this)

{
                    // 0x3845c0  531  ??0ccMovingMap@cockpit@@QEAA@XZ
  ccIndicatorPage::ccIndicatorPage((ccIndicatorPage *)this);
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined2 *)(this + 0x98) = 0x101;
  this[0x9a] = (ccMovingMap)0x1;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  return this;
}



// public: virtual __cdecl cockpit::ccMovingMap::~ccMovingMap(void) __ptr64

void __thiscall cockpit::ccMovingMap::~ccMovingMap(ccMovingMap *this)

{
  ccMovingMap *pcVar1;
  undefined8 *puVar2;
  SimpleOctTree *this_00;
  undefined8 *puVar3;
  
                    // 0x3847e0  906  ??1ccMovingMap@cockpit@@UEAA@XZ
  *(undefined ***)this = vftable;
  puVar2 = *(undefined8 **)(this + 0xa8);
  for (puVar3 = *(undefined8 **)(this + 0xa0); puVar3 != puVar2; puVar3 = puVar3 + 1) {
    if ((SimpleOctTree *)*puVar3 != (SimpleOctTree *)0x0) {
      SimpleOctTree::DeleteAll((SimpleOctTree *)*puVar3);
      this_00 = (SimpleOctTree *)*puVar3;
      if (this_00 != (SimpleOctTree *)0x0) {
        SimpleOctTree::~SimpleOctTree(this_00);
        free(this_00);
      }
      *puVar3 = 0;
    }
  }
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    free(*(void **)(this + 0xc0));
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
  }
  if (*(void **)(this + 0xa0) != (void *)0x0) {
    free(*(void **)(this + 0xa0));
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
  }
  pcVar1 = this + 0x80;
  if (*(longlong *)pcVar1 != 0) {
    FUN_7ff89336f2d0(*(longlong *)pcVar1,*(undefined8 *)(this + 0x88),pcVar1);
    free(*(void **)pcVar1);
    *(longlong *)pcVar1 = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x90) = 0;
  }
  ccIndicatorPage::~ccIndicatorPage((ccIndicatorPage *)this);
  return;
}



// public: class cockpit::ccMovingMap & __ptr64 __cdecl cockpit::ccMovingMap::operator=(class
// cockpit::ccMovingMap const & __ptr64) __ptr64

ccMovingMap * __thiscall cockpit::ccMovingMap::operator=(ccMovingMap *this,ccMovingMap *param_1)

{
  longlong lVar1;
  
                    // 0x384a00  1201  ??4ccMovingMap@cockpit@@QEAAAEAV01@AEBV01@@Z
  ccIndicatorPage::operator=((ccIndicatorPage *)this,(ccIndicatorPage *)param_1);
  if (this + 0x80 != param_1 + 0x80) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    FUN_7ff8934d3dc0(this + 0x80,lVar1,*(longlong *)(param_1 + 0x88) - lVar1 >> 4);
  }
  this[0x98] = param_1[0x98];
  this[0x99] = param_1[0x99];
  this[0x9a] = param_1[0x9a];
  FUN_7ff893351c60(this + 0xa0,param_1 + 0xa0);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  FUN_7ff893351c60(this + 0xc0,param_1 + 0xc0);
  return this;
}



// public: bool __cdecl cockpit::ccMovingMap::check_availability(unsigned int)const __ptr64

bool __thiscall cockpit::ccMovingMap::check_availability(ccMovingMap *this,uint param_1)

{
                    // 0x384e30  2664  ?check_availability@ccMovingMap@cockpit@@QEBA_NI@Z
  if ((ulonglong)param_1 < (ulonglong)(*(longlong *)(this + 0xa8) - *(longlong *)(this + 0xa0) >> 3)
     ) {
    return *(longlong *)(*(longlong *)(this + 0xa0) + (ulonglong)param_1 * 8) != 0;
  }
  return false;
}



// protected: class cockpit::SimpleOctTree * __ptr64 __cdecl
// cockpit::ccMovingMap::check_charts(unsigned int,double) __ptr64

SimpleOctTree * __thiscall
cockpit::ccMovingMap::check_charts(ccMovingMap *this,uint param_1,double param_2)

{
  ccMovingMap *pcVar1;
  SimpleOctTree *pSVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
                    // 0x384e60  2669
                    // ?check_charts@ccMovingMap@cockpit@@IEAAPEAVSimpleOctTree@2@IN@Z
  pcVar1 = this + 0xa0;
  uVar4 = (ulonglong)param_1;
  if ((ulonglong)(*(longlong *)(this + 0xa8) - *(longlong *)pcVar1 >> 3) <= uVar4) {
    local_res8 = 0;
    FUN_7ff8934d3ff0(pcVar1,param_1 + 1,&local_res8);
  }
  lVar3 = *(longlong *)pcVar1;
  if (*(longlong *)(lVar3 + uVar4 * 8) == 0) {
    if (this[0x99] == (ccMovingMap)0x0) {
      local_38 = 0xcb189680;
      local_2c = 0x4b189680;
      local_30 = 0xcb189680;
      local_24 = 0x4b189680;
    }
    else {
      local_38 = 0xc3340000;
      local_2c = 0x43340000;
      local_30 = 0xc3340000;
      local_24 = 0x43340000;
    }
    local_34 = 0xc3960000;
    local_28 = 0x46ea6000;
    pSVar2 = SimpleOctTree::create_quad_tree
                       ((BoundingBoxImpl<osg::Vec3f> *)&local_38,(float)param_2);
    *(SimpleOctTree **)(*(longlong *)pcVar1 + uVar4 * 8) = pSVar2;
    lVar3 = *(longlong *)pcVar1;
  }
  return *(SimpleOctTree **)(lVar3 + uVar4 * 8);
}



// protected: virtual void __cdecl cockpit::ccMovingMap::distribute_elements(void) __ptr64

void __thiscall cockpit::ccMovingMap::distribute_elements(ccMovingMap *this)

{
  longlong *_Src;
  longlong *plVar1;
  longlong *_Dst;
  longlong *plVar2;
  
                    // 0x384f50  2941  ?distribute_elements@ccMovingMap@cockpit@@MEAAXXZ
  ccIndicatorPage::distribute_elements((ccIndicatorPage *)this);
  plVar2 = *(longlong **)(this + 0xc0);
  if (plVar2 != *(longlong **)(this + 200)) {
    do {
      plVar1 = *(longlong **)(this + 0x58);
      if (*(longlong **)(this + 0x50) != plVar1) {
        _Dst = *(longlong **)(this + 0x50);
        do {
          _Src = _Dst + 1;
          if (*plVar2 == *_Dst) {
            memmove(_Dst,_Src,(longlong)plVar1 - (longlong)_Src);
            *(longlong *)(this + 0x58) = *(longlong *)(this + 0x58) + -8;
            break;
          }
          _Dst = _Src;
        } while (_Src != plVar1);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != *(longlong **)(this + 200));
  }
  if (*(longlong *)(this + 0xc0) != *(longlong *)(this + 200)) {
    *(longlong *)(this + 200) = *(longlong *)(this + 0xc0);
  }
  return;
}



// public: virtual void __cdecl cockpit::ccMovingMap::draw(class cockpit::ccIndicationRenderParser &
// __ptr64,unsigned char) __ptr64

void __thiscall
cockpit::ccMovingMap::draw(ccMovingMap *this,ccIndicationRenderParser *param_1,uchar param_2)

{
                    // 0x385040  2957
                    // ?draw@ccMovingMap@cockpit@@UEAAXAEAVccIndicationRenderParser@2@E@Z
  if (this[0x9a] != (ccMovingMap)0x0) {
    render(this,param_1,param_2);
  }
  ccIndicatorPage::draw((ccIndicatorPage *)this,param_1,param_2);
  return;
}



// protected: class cockpit::SimpleOctTree * __ptr64 __cdecl cockpit::ccMovingMap::get(void) __ptr64

SimpleOctTree * __thiscall cockpit::ccMovingMap::get(ccMovingMap *this)

{
                    // 0x3850f0  3121  ?get@ccMovingMap@cockpit@@IEAAPEAVSimpleOctTree@2@XZ
  if (*(longlong *)(this + 0xa0) == *(longlong *)(this + 0xa8)) {
    return (SimpleOctTree *)0x0;
  }
  return *(SimpleOctTree **)(*(longlong *)(this + 0xa0) + (ulonglong)*(uint *)(this + 0xb8) * 8);
}



// protected: class osg::BoundingBoxImpl<class osg::Vec3f> __cdecl
// cockpit::ccMovingMap::get_bound(void)const __ptr64

void __thiscall cockpit::ccMovingMap::get_bound(ccMovingMap *this)

{
  undefined4 *in_RDX;
  undefined4 uVar1;
  undefined4 uVar2;
  
                    // 0x385110  3775
                    // ?get_bound@ccMovingMap@cockpit@@IEBA?AV?$BoundingBoxImpl@VVec3f@osg@@@osg@@XZ
  *in_RDX = 0x7f7fffff;
  in_RDX[1] = 0x7f7fffff;
  in_RDX[2] = 0x7f7fffff;
  in_RDX[3] = 0xff7fffff;
  in_RDX[4] = 0xff7fffff;
  in_RDX[5] = 0xff7fffff;
  uVar1 = DAT_7ff89359b2f4;
  uVar2 = DAT_7ff8935a5afc;
  if (this[0x99] != (ccMovingMap)0x0) {
    uVar1 = DAT_7ff893592210;
    uVar2 = DAT_7ff8935a5af8;
  }
  *in_RDX = uVar2;
  in_RDX[3] = uVar1;
  in_RDX[2] = uVar2;
  in_RDX[5] = uVar1;
  in_RDX[1] = 0xc3960000;
  in_RDX[4] = 0x46ea6000;
  return;
}



// public: unsigned int __cdecl cockpit::ccMovingMap::get_current_level(void)const __ptr64

uint __thiscall cockpit::ccMovingMap::get_current_level(ccMovingMap *this)

{
                    // 0x385190  3832  ?get_current_level@ccMovingMap@cockpit@@QEBAIXZ
  return *(uint *)(this + 0xb8);
}



// protected: float __cdecl cockpit::ccMovingMap::get_minimum_cell(void)const __ptr64

float __thiscall cockpit::ccMovingMap::get_minimum_cell(ccMovingMap *this)

{
                    // 0x3851a0  4042  ?get_minimum_cell@ccMovingMap@cockpit@@IEBAMXZ
  return DAT_7ff89358cc34;
}



// protected: static int __cdecl cockpit::ccMovingMap::l_create_chart(struct lua_State * __ptr64)

int __cdecl cockpit::ccMovingMap::l_create_chart(lua_State *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  ccMovingMap *this;
  SimpleOctTreeLoad *this_00;
  SimpleOctTreeLoad *pSVar7;
  SimpleOctTree *this_01;
  SimpleOctTreeLoad *pSVar8;
  float fVar9;
  double dVar10;
  float local_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  float fStack_64;
  
                    // 0x3859c0  4831  ?l_create_chart@ccMovingMap@cockpit@@KAHPEAUlua_State@@@Z
  lua_pushstring(param_1,s_____moving_map_page_handle_7ff8935a5a18);
  lua_gettable(param_1,0xffffd8f0);
  this = (ccMovingMap *)lua_touserdata(param_1,0xffffffff);
  this_00 = (SimpleOctTreeLoad *)FUN_7ff89356b29c();
  if (this_00 == (SimpleOctTreeLoad *)0x0) {
    this_00 = (SimpleOctTreeLoad *)0x0;
    pSVar8 = (SimpleOctTreeLoad *)&DAT_00000008;
  }
  else {
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0x10) = 0x7f7fffff;
    *(undefined4 *)(this_00 + 0x14) = 0x7f7fffff;
    *(undefined4 *)(this_00 + 0x18) = 0x7f7fffff;
    *(undefined4 *)(this_00 + 0x1c) = 0xff7fffff;
    *(undefined4 *)(this_00 + 0x20) = 0xff7fffff;
    *(undefined4 *)(this_00 + 0x24) = 0xff7fffff;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined2 *)(this_00 + 0x30) = 0x100;
    *(undefined ***)this_00 = chart_item::vftable;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0xbf800000;
    *(undefined4 *)(this_00 + 0x20) = 0x3f800000;
    pSVar8 = this_00 + 8;
    pSVar7 = pSVar8;
    if (this_00 == (SimpleOctTreeLoad *)0x0) {
      pSVar7 = (SimpleOctTreeLoad *)0x0;
    }
    if (pSVar7 != (SimpleOctTreeLoad *)0x0) {
      LOCK();
      *(int *)pSVar7 = *(int *)pSVar7 + 1;
      UNLOCK();
    }
  }
  dVar2 = (double)lua_tonumber(param_1,1);
  dVar5 = (double)lua_tonumber(param_1,5);
  dVar4 = (double)lua_tonumber(param_1,4);
  dVar3 = (double)lua_tonumber(param_1,3);
  dVar10 = (double)lua_tonumber(param_1,2);
  _local_78 = CONCAT44((int)((ulonglong)*(undefined8 *)(this_00 + 0x10) >> 0x20),(float)dVar10);
  _fStack_70 = CONCAT44((float)dVar3,(float)dVar4);
  _local_68 = CONCAT44((float)dVar5,(int)*(undefined8 *)(this_00 + 0x20));
  SimpleOctTreeLoad::setBoundingBox(this_00,(BoundingBoxImpl<osg::Vec3f> *)&local_78);
  lua_createtable(param_1,0,0);
  uVar6 = lua_gettop(param_1);
  lua_pushstring(param_1,&DAT_7ff89358d3a4);
  lua_pushlightuserdata(param_1,this_00);
  lua_settable(param_1,uVar6);
  lua_getfield(param_1,0xffffd8ee,s_chart_item_meta_7ff8935a59d0);
  lua_setmetatable(param_1,0xfffffffe);
  fVar9 = (*(float *)(this_00 + 0x1c) - *(float *)(this_00 + 0x10)) *
          (*(float *)(this_00 + 0x1c) - *(float *)(this_00 + 0x10)) +
          (*(float *)(this_00 + 0x20) - *(float *)(this_00 + 0x14)) *
          (*(float *)(this_00 + 0x20) - *(float *)(this_00 + 0x14)) +
          (*(float *)(this_00 + 0x24) - *(float *)(this_00 + 0x18)) *
          (*(float *)(this_00 + 0x24) - *(float *)(this_00 + 0x18));
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  dVar10 = (double)(fVar9 * DAT_7ff893590374);
  if (DAT_7ff89358cc38 <= (double)(fVar9 * DAT_7ff893590374)) {
    dVar10 = DAT_7ff89358cc38;
  }
  this_01 = check_charts(this,(uint)(longlong)dVar2,dVar10);
  SimpleOctTree::AddObject(this_01,this_00);
  if (pSVar8 != (SimpleOctTreeLoad *)0x0) {
    LOCK();
    iVar1 = *(int *)pSVar8;
    *(int *)pSVar8 = *(int *)pSVar8 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (*(code *)**(undefined8 **)this_00)(this_00,1);
    }
  }
  return 1;
}



// protected: static int __cdecl cockpit::ccMovingMap::l_get_render_to_texture(struct lua_State *
// __ptr64)

int __cdecl cockpit::ccMovingMap::l_get_render_to_texture(lua_State *param_1)

{
  longlong lVar1;
  
                    // 0x385c80  4897
                    // ?l_get_render_to_texture@ccMovingMap@cockpit@@KAHPEAUlua_State@@@Z
  lua_pushstring(param_1,s_____moving_map_page_handle_7ff8935a5a18);
  lua_gettable(param_1,0xffffd8f0);
  lVar1 = lua_touserdata(param_1,0xffffffff);
  lua_pushboolean(param_1,*(undefined1 *)(lVar1 + 0x98));
  return 1;
}



// protected: static int __cdecl cockpit::ccMovingMap::l_set_render_to_texture(struct lua_State *
// __ptr64)

int __cdecl cockpit::ccMovingMap::l_set_render_to_texture(lua_State *param_1)

{
  int iVar1;
  longlong lVar2;
  
                    // 0x385cd0  4988
                    // ?l_set_render_to_texture@ccMovingMap@cockpit@@KAHPEAUlua_State@@@Z
  lua_pushstring(param_1,s_____moving_map_page_handle_7ff8935a5a18);
  lua_gettable(param_1,0xffffd8f0);
  lVar2 = lua_touserdata(param_1,0xffffffff);
  iVar1 = lua_toboolean(param_1,1);
  *(bool *)(lVar2 + 0x98) = iVar1 != 0;
  return 1;
}



// public: void __cdecl cockpit::ccMovingMap::push_to_remove(class cockpit::Element * __ptr64)
// __ptr64

void __thiscall cockpit::ccMovingMap::push_to_remove(ccMovingMap *this,Element *param_1)

{
  undefined8 *puVar1;
  Element *local_res10 [3];
  
                    // 0x385d30  5459  ?push_to_remove@ccMovingMap@cockpit@@QEAAXPEAVElement@2@@Z
  puVar1 = *(undefined8 **)(this + 200);
  if (puVar1 != *(undefined8 **)(this + 0xd0)) {
    *puVar1 = param_1;
    *(longlong *)(this + 200) = *(longlong *)(this + 200) + 8;
    return;
  }
  local_res10[0] = param_1;
  FUN_7ff8934bb9c0(this + 0xc0,puVar1,local_res10);
  return;
}



// protected: virtual void __cdecl cockpit::ccMovingMap::reg_in_reusable_state(struct lua_State *
// __ptr64) __ptr64

void __thiscall cockpit::ccMovingMap::reg_in_reusable_state(ccMovingMap *this,lua_State *param_1)

{
                    // 0x385dc0  5509
                    // ?reg_in_reusable_state@ccMovingMap@cockpit@@MEAAXPEAUlua_State@@@Z
  ccIndicatorPage::reg_in_reusable_state((ccIndicatorPage *)this,param_1);
  lua_pushstring(param_1,s_____moving_map_page_handle_7ff8935a5a18);
  lua_pushlightuserdata(param_1,this);
  lua_settable(param_1,0xffffd8f0);
  lua_pushcclosure(param_1,l_create_chart,0);
  lua_setfield(param_1,0xffffd8ee,s_create_chart_7ff8935a5a38);
  lua_pushcclosure(param_1,l_set_render_to_texture,0);
  lua_setfield(param_1,0xffffd8ee,s_set_render_to_texture_7ff8935a5a48);
  lua_pushcclosure(param_1,l_get_render_to_texture,0);
  lua_setfield(param_1,0xffffd8ee,s_get_render_to_texture_7ff8935a5a60);
  chart_item::register_metatable(param_1);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// protected: void __cdecl cockpit::ccMovingMap::render(class cockpit::ccIndicationRenderParser &
// __ptr64,unsigned char) __ptr64

void __thiscall
cockpit::ccMovingMap::render(ccMovingMap *this,ccIndicationRenderParser *param_1,uchar param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  SimpleOctTree *this_00;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined7 in_register_00000081;
  vector<> *pvVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_2e8 [32];
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined8 local_2b0;
  ClipVolume local_298 [32];
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  uint local_258;
  uint local_254;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  uint local_230;
  uint local_22c;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  uint local_208;
  uint local_204;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  uint local_1e0;
  uint local_1dc;
  undefined4 local_e8;
  ulonglong local_d8;
  
                    // 0x385fa0  5608
                    // ?render@ccMovingMap@cockpit@@IEAAXAEAVccIndicationRenderParser@2@E@Z
  local_d8 = DAT_7ff89368e840 ^ (ulonglong)auStack_2e8;
  if ((*(longlong *)(this + 0xa0) != *(longlong *)(this + 0xa8)) &&
     (this_00 = *(SimpleOctTree **)
                 (*(longlong *)(this + 0xa0) + (ulonglong)*(uint *)(this + 0xb8) * 8),
     this_00 != (SimpleOctTree *)0x0)) {
    lVar10 = (**(code **)(**(longlong **)(this + 0x78) + 0xa8))
                       (*(longlong **)(this + 0x78),param_1,CONCAT71(in_register_00000081,param_2));
    uVar6 = *(undefined8 *)(lVar10 + 0x2fc);
    fVar26 = (float)((ulonglong)uVar6 >> 0x20);
    fVar16 = (float)((ulonglong)*(undefined8 *)(lVar10 + 0x2f0) >> 0x20);
    fVar27 = *(float *)(lVar10 + 0x2f8);
    local_2b0._0_4_ = (float)*(undefined8 *)(lVar10 + 0x2f0);
    local_2b8 = *(float *)(lVar10 + 0x248) * fVar16 + *(float *)(lVar10 + 0x238) * fVar27 +
                *(float *)(lVar10 + 600) * (float)local_2b0 + *(float *)(lVar10 + 0x268);
    fVar1 = *(float *)(lVar10 + 0x264);
    fVar2 = *(float *)(lVar10 + 0x234);
    local_2c4 = *(float *)(lVar10 + 0x244);
    local_2bc = local_2c4 * fVar16 + fVar2 * fVar27 + *(float *)(lVar10 + 0x254) * (float)local_2b0
                + fVar1;
    fVar3 = *(float *)(lVar10 + 0x260);
    fVar4 = *(float *)(lVar10 + 0x240);
    local_2c0 = *(float *)(lVar10 + 0x230);
    fVar27 = local_2c0 * fVar27;
    fVar17 = *(float *)(lVar10 + 0x250) * (float)local_2b0;
    fVar5 = *(float *)(lVar10 + 0x304);
    local_2b0._0_4_ = (float)uVar6;
    local_2c8 = *(float *)(lVar10 + 0x248) * fVar26 + *(float *)(lVar10 + 0x238) * fVar5 +
                *(float *)(lVar10 + 600) * (float)local_2b0 + *(float *)(lVar10 + 0x268);
    fVar25 = local_2c4 * fVar26;
    fVar23 = *(float *)(lVar10 + 0x254) * (float)local_2b0;
    fVar24 = local_2c0 * fVar5;
    fVar20 = *(float *)(lVar10 + 0x250) * (float)local_2b0;
    local_2b0 = uVar6;
    FUN_7ff893568ff0(local_298);
    local_e8 = 4;
    dVar19 = (double)(fVar27 + fVar4 * fVar16 + fVar17 + fVar3);
    local_278 = (double)(float)(*(uint *)(lVar10 + 0x240) ^ DAT_7ff89358cdb0);
    local_270 = (double)(float)(*(uint *)(lVar10 + 0x244) ^ DAT_7ff89358cdb0);
    local_268 = (double)(float)(*(uint *)(lVar10 + 0x248) ^ DAT_7ff89358cdb0);
    local_230 = 0;
    uVar11 = local_230;
    if (0.0 <= local_268) {
      uVar11 = 4;
    }
    uVar21 = local_230;
    if (0.0 <= local_270) {
      uVar21 = 2;
    }
    local_258 = uVar11 | uVar21 | (uint)(0.0 <= local_278);
    uVar21 = (uint)DAT_7ff89358cda0;
    uVar22 = (uint)((ulonglong)DAT_7ff89358cda0 >> 0x20);
    local_260 = ((double)CONCAT44((uint)((ulonglong)local_278 >> 0x20) ^ uVar22,
                                  SUB84(local_278,0) ^ uVar21) * dVar19 -
                local_270 * (double)local_2bc) - local_268 * (double)local_2b8;
    local_254 = ~local_258 & 7;
    local_250 = (double)(float)(*(uint *)(lVar10 + 0x250) ^ DAT_7ff89358cdb0);
    local_248 = (double)(float)(*(uint *)(lVar10 + 0x254) ^ DAT_7ff89358cdb0);
    local_240 = (double)(float)(*(uint *)(lVar10 + 600) ^ DAT_7ff89358cdb0);
    uVar11 = local_230;
    if (0.0 <= local_240) {
      uVar11 = 4;
    }
    if (0.0 <= local_248) {
      local_230 = 2;
    }
    local_230 = 0.0 <= local_250 | uVar11 | local_230;
    local_238 = ((double)CONCAT44((uint)((ulonglong)local_250 >> 0x20) ^ uVar22,
                                  SUB84(local_250,0) ^ uVar21) * dVar19 -
                (double)local_2bc * local_248) - (double)local_2b8 * local_240;
    local_22c = ~local_230 & 7;
    dVar19 = (double)(fVar24 + fVar4 * fVar26 + fVar20 + fVar3);
    dVar18 = (double)(fVar25 + fVar2 * fVar5 + fVar23 + fVar1);
    local_228 = (double)*(float *)(lVar10 + 0x240);
    local_220 = (double)*(float *)(lVar10 + 0x244);
    local_218 = (double)*(float *)(lVar10 + 0x248);
    uVar12 = 0;
    uVar11 = uVar12;
    if (0.0 <= local_218) {
      uVar11 = 4;
    }
    uVar9 = uVar12;
    if (0.0 <= local_220) {
      uVar9 = 2;
    }
    local_208 = uVar11 | uVar9 | (uint)(0.0 <= local_228);
    local_210 = ((double)CONCAT44((uint)((ulonglong)local_228 >> 0x20) ^ uVar22,
                                  SUB84(local_228,0) ^ uVar21) * dVar19 - local_220 * dVar18) -
                local_218 * (double)local_2c8;
    local_204 = ~local_208 & 7;
    local_200 = (double)*(float *)(lVar10 + 0x250);
    local_1f8 = (double)*(float *)(lVar10 + 0x254);
    local_1f0 = (double)*(float *)(lVar10 + 600);
    uVar11 = uVar12;
    if (0.0 <= local_1f0) {
      uVar11 = 4;
    }
    if (0.0 <= local_1f8) {
      uVar12 = 2;
    }
    local_1e0 = uVar11 | uVar12 | (uint)(0.0 <= local_200);
    local_1e8 = ((double)CONCAT44((uint)((ulonglong)local_200 >> 0x20) ^ uVar22,
                                  SUB84(local_200,0) ^ uVar21) * dVar19 - local_1f8 * dVar18) -
                local_1f0 * (double)local_2c8;
    local_1dc = ~local_1e0 & 7;
    pvVar15 = (vector<> *)(this + 0x80);
    if (*(longlong *)pvVar15 != *(longlong *)(this + 0x88)) {
      FUN_7ff89336f2d0(*(longlong *)pvVar15,*(longlong *)(this + 0x88),pvVar15);
      *(undefined8 *)(this + 0x88) = *(undefined8 *)pvVar15;
    }
    SimpleOctTree::GetObjects(this_00,local_298,pvVar15,(SimpleOctTree_check_object *)0x0);
    plVar7 = *(longlong **)(this + 0x88);
    for (plVar14 = *(longlong **)pvVar15; plVar14 != plVar7; plVar14 = plVar14 + 2) {
      lVar10 = *plVar14;
      if (lVar10 != 0) {
        puVar8 = *(undefined8 **)(lVar10 + 0x40);
        for (puVar13 = *(undefined8 **)(lVar10 + 0x38); puVar13 != puVar8; puVar13 = puVar13 + 1) {
          (**(code **)(*(longlong *)*puVar13 + 0x20))();
        }
      }
    }
    plVar7 = *(longlong **)(this + 0x88);
    for (plVar14 = *(longlong **)pvVar15; plVar14 != plVar7; plVar14 = plVar14 + 2) {
      lVar10 = *plVar14;
      if (lVar10 != 0) {
        puVar8 = *(undefined8 **)(lVar10 + 0x40);
        for (puVar13 = *(undefined8 **)(lVar10 + 0x38); puVar13 != puVar8; puVar13 = puVar13 + 1) {
          (**(code **)(*(longlong *)*puVar13 + 0x18))((longlong *)*puVar13,param_1,param_2);
        }
      }
    }
  }
  return;
}



// public: void __cdecl cockpit::ccMovingMap::set_current_level(unsigned int) __ptr64

void __thiscall cockpit::ccMovingMap::set_current_level(ccMovingMap *this,uint param_1)

{
  ulonglong uVar1;
  
                    // 0x386650  6220  ?set_current_level@ccMovingMap@cockpit@@QEAAXI@Z
  if (*(longlong *)(this + 0xa0) != *(longlong *)(this + 0xa8)) {
    uVar1 = (*(longlong *)(this + 0xa8) - *(longlong *)(this + 0xa0) >> 3) - 1;
    if (uVar1 <= param_1) {
      param_1 = (uint)uVar1;
    }
    *(uint *)(this + 0xb8) = param_1;
  }
  return;
}



// public: void __cdecl cockpit::ccMovingMap::set_map_availability(bool) __ptr64

void __thiscall cockpit::ccMovingMap::set_map_availability(ccMovingMap *this,bool param_1)

{
                    // 0x3866e0  6350  ?set_map_availability@ccMovingMap@cockpit@@QEAAX_N@Z
  this[0x9a] = (ccMovingMap)param_1;
  return;
}


