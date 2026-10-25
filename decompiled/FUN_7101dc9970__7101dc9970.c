// addr:      7101dc9970
// offset:    0x1dc9970
// name:      FUN_7101dc9970
// mangled:   
// signature: undefined __cdecl FUN_7101dc9970(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dc9970(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined **ppuVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  long ****pppplVar7;
  long lVar8;
  undefined **local_48;
  undefined **local_40;
  long ***local_38;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x124) != 0) {
    plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x5f0) + 8) + 8);
    if ((plVar4 != (long *)0x0) && (uVar5 = (**(code **)(*plVar4 + 0x138))(), (uVar5 & 1) == 0)) {
      return;
    }
    plVar4 = *(long **)*DAT_710593b8d8;
    do {
      if (plVar4 == (long *)((long *)*DAT_710593b8d8)[1]) {
        plVar4 = *(long **)(param_1 + 0x5f0);
        *(undefined8 *)(param_1 + 0x5f0) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        *(undefined1 *)(param_1 + 0x5fd) = 1;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x114) = 0;
        *(undefined8 *)(param_1 + 0x10c) = 0;
        *(undefined8 *)(param_1 + 0x104) = 0;
        *(undefined8 *)(param_1 + 0x120) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x11c) = 0;
        *(undefined8 *)(param_1 + 0xfc) = 0;
        *(undefined8 *)(param_1 + 0xf4) = 0;
        *(undefined8 *)(param_1 + 0xec) = 0;
        *(undefined8 *)(param_1 + 0xe4) = 0;
        *(undefined8 *)(param_1 + 0xdc) = 0;
        *(undefined8 *)(param_1 + 0xd4) = 0;
        *(undefined1 *)(param_1 + 300) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 9;
        return;
      }
      lVar8 = *plVar4;
      plVar4 = plVar4 + 1;
    } while (*(char *)(*(long *)(lVar8 + 8) + 0x518) == '\0');
    return;
  }
  bVar3 = *(byte *)(param_1 + 0x5f9);
  (**(code **)(**(long **)(param_1 + 0x1c0) + 0x30))(*(long **)(param_1 + 0x1c0),0);
  (**(code **)(**(long **)(param_1 + 0x1c8) + 0x30))(*(long **)(param_1 + 0x1c8),0);
  *(byte *)(param_1 + 0x1d0) = bVar3;
  if (1 < (ulong)bVar3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar3 = (**(code **)(**(long **)(param_1 + (ulong)bVar3 * 8 + 0x1c0) + 0x70))();
  *(byte *)(param_1 + 0x1d1) = bVar3 & 1;
  pcVar1 = "left_data_on";
  if ((bVar3 & 1) == 0) {
    pcVar1 = "left_data_off";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x1b8),(long)pcVar1);
  bVar3 = *(byte *)(param_1 + 0x5f9);
  pppplVar7 = (long ****)0x1;
  FUN_7103771a80((long *)(param_1 + 0x178),(uint)bVar3,1);
  *(byte *)(param_1 + 0x1a9) = bVar3;
  FUN_71037780e0(&local_48,param_1 + 0x140,(long ****)&DAT_710428ff7d,pppplVar7,param_4,param_5,
                 param_6,param_7,param_8);
  pppuVar6 = (undefined ***)
             FUN_710392e290(0x10,0x10,pppplVar7,param_4,param_5,param_6,param_7,param_8);
  if (pppuVar6 == (undefined ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_24 = 0;
      local_38 = (long ***)&DAT_00000010;
      pppplVar7 = &local_38;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
      if (((uVar5 & 1) != 0) &&
         (pppuVar6 = (undefined ***)
                     FUN_710392e290(0x10,0x10,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         pppuVar6 != (undefined ***)0x0)) goto LAB_7101dc9b50;
    }
    pppuVar6 = (undefined ***)0x0;
  }
LAB_7101dc9b50:
  ppuVar2 = local_40;
  *pppuVar6 = &PTR_FUN_710523d9e8;
  pppuVar6[1] = (undefined **)0x0;
  if (&local_48 != pppuVar6) {
    local_40 = (undefined **)0x0;
    pppuVar6[1] = ppuVar2;
  }
  plVar4 = *(long **)(param_1 + 0x5f0);
  *(undefined ****)(param_1 + 0x5f0) = pppuVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  ppuVar2 = local_40;
  local_48 = &PTR_FUN_710523d9e8;
  local_40 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar2);
  }
  FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x5f0));
  return;
}

