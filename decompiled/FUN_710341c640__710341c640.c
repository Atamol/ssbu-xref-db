// addr:      710341c640
// offset:    0x341c640
// name:      FUN_710341c640
// mangled:   
// signature: undefined __cdecl FUN_710341c640(undefined8 param_1, long * param_2)


void FUN_710341c640(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_2[4];
  uVar4 = (**(code **)(*param_2 + 1000))(param_2);
  lVar5 = FUN_71003ac560(uVar4);
  if ((((lVar5 == 0) || (*(byte *)(lVar5 + 0x3a) < 4)) &&
      (lVar5 = DAT_71052b70f8, (DAT_71052b7100 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(&DAT_71052b7100), lVar5 = DAT_71052b70f8, iVar3 != 0)) {
    FUN_71003a9ab0(&DAT_71052b70f0,0);
    DAT_71052b70f0 = &PTR_FUN_7104f62078;
    __cxa_guard_release(&DAT_71052b7100);
    lVar5 = DAT_71052b70f8;
  }
  lVar5 = *(long *)(lVar5 + 0x20);
  (**(code **)(**(long **)(lVar7 + 0xd0) + 0x4d0))(0xc2b40000);
  (**(code **)(**(long **)(lVar7 + 0xd0) + 0x4e0))(0xc2b40000);
  plVar6 = *(long **)(lVar5 + 0x50);
  uVar2 = (**(code **)(*plVar6 + 0x98))(plVar6,0x100000fd);
  if (uVar2 != 0xffffffff) {
    if (7 < uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = *(long *)(DAT_7105324680 + (long)(int)uVar2 * 8 + 0xe8);
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x94);
      (**(code **)(**(long **)(lVar7 + 0x78) + 0x308))
                (*(long **)(lVar7 + 0x78),"phong0__sfx_0x92001001___NORMEXP16___VTC__A_AB_AT_ZERO_",
                 0,*(undefined4 *)(lVar5 + 0x90));
      (**(code **)(**(long **)(lVar7 + 0x78) + 0x308))
                (*(long **)(lVar7 + 0x78),"phong1__sfx_0x92001001___NORMEXP16___VTC__A_AB_AT_ZERO_",
                 0,uVar1);
    }
  }
  return;
}

