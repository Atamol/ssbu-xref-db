// addr:      710191fa60
// offset:    0x191fa60
// name:      FUN_710191fa60
// mangled:   
// signature: undefined __cdecl FUN_710191fa60(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710191fa60(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined ***pppuVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  long ****pppplVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined **local_48;
  undefined **local_40;
  long ***local_38;
  undefined4 local_24;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
  if (*(int *)(param_1 + 0x16c) != 0) {
    if (*(int *)(lVar9 + 0x180) != 0xf) {
      return;
    }
    if (*(int *)(lVar9 + 0x228) == 1) {
      uVar1 = *(uint *)(param_1 + 0x164);
      if (uVar1 < 0x13) {
        uVar7 = 4;
LAB_710191fc60:
        *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x118) = uVar7;
        return;
      }
    }
    else {
      if (*(int *)(lVar9 + 0x228) != 2) {
        return;
      }
      FUN_710251ad80(*(long **)(**(long **)(param_1 + 0x1a0) + 8),(uint)*(byte *)(param_1 + 0x1a8));
      FUN_7101e4ca50(*(long *)(*(long *)(param_1 + 0x180) + 0x80),extraout_x1,param_3,param_4,
                     param_5,param_6,param_7,param_8);
      if (*(uint *)(param_1 + 0x164) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x164) * 4 + 0x118) = 4;
        if (0x11 < *(int *)(param_1 + 0x164)) {
          return;
        }
        uVar1 = *(int *)(param_1 + 0x164) + 1;
        *(uint *)(param_1 + 0x164) = uVar1;
        if (uVar1 < 0x13) {
          uVar7 = 0xe;
          goto LAB_710191fc60;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = *(undefined8 **)(lVar9 + 0x1a8);
  plVar3 = (long *)*puVar8;
  (**(code **)(*plVar3 + 0x60))(plVar3,0);
  plVar3 = (long *)*puVar8;
  (**(code **)(*plVar3 + 0x70))(plVar3,0);
  *(undefined4 *)(lVar9 + 0x228) = 0;
  *(undefined1 *)(*(long *)(lVar9 + 0x220) + 0x40) = 1;
  FUN_71037780e0(&local_48,lVar9 + 0x198,(long ****)"menu_in",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  pppuVar4 = (undefined ***)
             FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pppuVar4 == (undefined ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_24 = 0;
      local_38 = (long ***)&DAT_00000010;
      pppplVar6 = &local_38;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
      if (((uVar5 & 1) != 0) &&
         (pppuVar4 = (undefined ***)
                     FUN_710392e290(0x10,0x10,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         pppuVar4 != (undefined ***)0x0)) goto LAB_710191fbb0;
    }
    pppuVar4 = (undefined ***)0x0;
  }
LAB_710191fbb0:
  ppuVar2 = local_40;
  *pppuVar4 = &PTR_FUN_710523d9e8;
  pppuVar4[1] = (undefined **)0x0;
  if (&local_48 != pppuVar4) {
    local_40 = (undefined **)0x0;
    pppuVar4[1] = ppuVar2;
  }
  plVar3 = *(long **)(lVar9 + 0x210);
  *(undefined ****)(lVar9 + 0x210) = pppuVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  ppuVar2 = local_40;
  local_48 = &PTR_FUN_710523d9e8;
  local_40 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar2);
  }
  FUN_710377aee0(0x3f800000,*(long *)(lVar9 + 0x210));
  *(undefined4 *)(lVar9 + 0x178) = 0;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined8 *)(lVar9 + 0x168) = 0;
  *(undefined8 *)(lVar9 + 0x170) = 0;
  *(undefined8 *)(lVar9 + 0x158) = 0;
  *(undefined8 *)(lVar9 + 0x160) = 0;
  *(undefined8 *)(lVar9 + 0x148) = 0;
  *(undefined8 *)(lVar9 + 0x150) = 0;
  *(undefined8 *)(lVar9 + 0x138) = 0;
  *(undefined8 *)(lVar9 + 0x140) = 0;
  *(undefined8 *)(lVar9 + 0x184) = 0xffffffff00000000;
  *(undefined8 *)(lVar9 + 0x130) = 0xe0000000c;
  *(undefined1 *)(lVar9 + 0x18c) = 0;
  *(undefined8 *)(lVar9 + 0x17c) = 0xffffffff00000001;
  return;
}

