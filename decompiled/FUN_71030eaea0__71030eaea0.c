// addr:      71030eaea0
// offset:    0x30eaea0
// name:      FUN_71030eaea0
// mangled:   
// signature: undefined __cdecl FUN_71030eaea0(long param_1)


void FUN_71030eaea0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0xf8) == 0) {
    if (*(uint *)(param_1 + 0x24) < 0x24) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x24) * 0x98 + 0x18);
    }
    else {
      lVar3 = DAT_710532ef38;
      if (((DAT_710532f060 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&DAT_710532f060), lVar3 = DAT_710532ef38, iVar1 != 0)) {
        DAT_710532ef30 = 0xffffffff;
        DAT_710532ef28 = 0;
        DAT_710532ef58 = 0;
        DAT_710532ef50 = &DAT_710532ef58;
        DAT_710532ef48 = 0;
        DAT_710532ef38 = 0;
        DAT_710532ef40 = 0;
        DAT_710532ef70 = 0;
        DAT_710532ef60 = 0;
        DAT_710532ef68 = &DAT_710532ef70;
        DAT_710532ef88 = 0;
        DAT_710532efa0 = 0;
        DAT_710532efbc = 0;
        DAT_710532efb4 = 0;
        DAT_710532efac = 0;
        DAT_710532efa4 = 0;
        DAT_710532ef90 = 0;
        DAT_710532ef98 = 0;
        DAT_710532ef78 = 0;
        DAT_710532ef80 = &DAT_710532ef88;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_710532f060);
        lVar3 = DAT_710532ef38;
      }
    }
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0xd8) != 0)) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar3 + 0xd8) + 8) + 8);
      (**(code **)(*plVar2 + 0x18))(plVar2,"A_SHIP_CATAPULT_COVER_O_OBJ_O_HIR");
    }
  }
  return;
}

