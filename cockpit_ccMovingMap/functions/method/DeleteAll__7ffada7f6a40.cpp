/*
 * CockpitBase.dll class reconstruction
 * Function: DeleteAll
 * Address : 7ffada7f6a40
 * Role    : method
 */


/* public: void __cdecl cockpit::SimpleOctTree::DeleteAll(void) __ptr64 */

void __thiscall cockpit::SimpleOctTree::DeleteAll(SimpleOctTree *this)

{
  SimpleOctTreeNode *this_00;
  
                    /* 0x3e6a40  1929  ?DeleteAll@SimpleOctTree@cockpit@@QEAAXXZ */
  if (*(SimpleOctTreeNode **)(this + 0x18) != (SimpleOctTreeNode *)0x0) {
    SimpleOctTreeNode::DeleteAll(*(SimpleOctTreeNode **)(this + 0x18));
    this_00 = *(SimpleOctTreeNode **)(this + 0x18);
    if (this_00 != (SimpleOctTreeNode *)0x0) {
      SimpleOctTreeNode::~SimpleOctTreeNode(this_00);
      free(this_00);
    }
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x70) = 0;
  }
  FUN_7ffada5f0c40((longlong)(this + 0x20));
  return;
}

