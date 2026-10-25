// addr:      7101af97f0
// offset:    0x1af97f0
// name:      FUN_7101af97f0
// mangled:   
// signature: undefined __cdecl FUN_7101af97f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101af97f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  long ****pppplVar7;
  undefined *puVar8;
  int *piVar9;
  undefined4 uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  long ***local_a0;
  undefined **local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  undefined **local_48;
  
  pppplVar7 = &local_a0;
  if (*(int *)(param_1 + 0xec) == 0) {
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    if (*(int *)(param_1 + 0x1fc) != 1) {
      lVar11 = **(long **)(param_1 + 0x130);
      FUN_7103776910(&local_a0,lVar11 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      ppuVar4 = local_98;
      puVar8 = *local_98;
      if (puVar8 != (undefined *)0x0) {
        puVar8[0x58] = puVar8[0x58] | 1;
      }
      local_a0 = (long ***)&PTR_FUN_710523d9a8;
      local_98 = (undefined **)0x0;
      if (ppuVar4 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar4);
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),0x71042a3672);
      *(undefined4 *)(param_1 + 0x1fc) = 1;
    }
    FUN_710376b960(*(long *)(param_1 + 0x138));
    param_2 = extraout_x1;
  }
  FUN_7101afd490(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  auVar14 = (**(code **)(**(long **)(param_1 + 0x138) + 0x78))();
  uVar6 = auVar14._8_8_;
  if ((auVar14._0_8_ & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x70))(*(long **)(param_1 + 0x138),0);
    uVar6 = extraout_x1_00;
  }
  if (*(long *)(param_1 + 0x120) == 0) {
    return;
  }
  auVar14 = FUN_7101afa660(param_1,uVar6,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar13 = auVar14._4_4_;
  switch(auVar14._0_4_) {
  case 2:
    FUN_7101afdbe0(param_1,(ulong)(iVar13 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(char *)(param_1 + 500) != '\0') {
      if (*(int *)(param_1 + 0x1e4) == 1) {
        FUN_7101afb9a0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_7101afdcf0(param_1,(ulong)(iVar13 != 0),param_3,param_4,param_5,param_6,param_7,param_8)
        ;
        uVar1 = *(uint *)(param_1 + 0xe4);
        if (0x12 < uVar1) goto LAB_7101af9c5c;
        uVar10 = 5;
        goto LAB_7101af9c3c;
      }
      FUN_7101afbc50(param_1,(ulong)(iVar13 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
    }
    if (0x12 < *(uint *)(param_1 + 0xe4)) {
LAB_7101af9c5c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 0;
    break;
  case 3:
    iVar12 = auVar14._8_4_;
    if (iVar12 != 0) {
      param_3 = (long ****)(ulong)(iVar13 != 0);
      FUN_7103771a80((long *)(param_1 + 0x138),iVar12,(uint)(iVar13 != 0));
      *(int *)(param_1 + 0x1e0) = iVar12;
    }
    **(uint **)(DAT_710593b988 + 8) =
         **(uint **)(DAT_710593b988 + 8) |
         1 << (ulong)(*(uint *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x128) + 0x600) +
                               0x494) & 0x1f);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x128),*(byte *)(param_1 + 0x1f1));
    local_50 = &PTR_FUN_710523d9e8;
    ppuVar4 = (undefined **)
              FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
    if (ppuVar4 == (undefined **)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_60 = (undefined **)((ulong)local_60 & 0xffffffff00000000);
        local_a0 = (long ***)&SUB_00000018;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
        param_3 = pppplVar7;
        if (((uVar5 & 1) != 0) &&
           (ppuVar4 = (undefined **)
                      FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
           param_3 = pppplVar7, ppuVar4 != (undefined **)0x0)) goto LAB_7101af9a48;
      }
      ppuVar4 = (undefined **)0x0;
    }
LAB_7101af9a48:
    *ppuVar4 = (undefined *)0x0;
    ppuVar4[1] = (undefined *)0x0;
    *(undefined1 *)(ppuVar4 + 2) = 1;
    local_48 = ppuVar4;
    if (*(char *)(param_1 + 500) != '\0') {
      FUN_71037780e0(&local_a0,**(long **)(param_1 + 0x130) + 8,(long ****)"plt_on",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      local_48 = local_98;
      local_98 = (undefined **)0x0;
      if (ppuVar4 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar4);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      local_98 = (undefined **)0x0;
    }
    FUN_71037780e0(&local_60,**(long **)(param_1 + 0x128) + 8,(long ****)"plt_on",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    if (iVar13 == 0) {
      FUN_710377b140((long)&local_60);
      FUN_710377b140((long)&local_50);
    }
    else {
      FUN_710377aee0(0x3f800000,(long)&local_60);
      FUN_710377aee0(0x3f800000,(long)&local_50);
    }
    (**(code **)(**(long **)(param_1 + 0x138) + 0x70))(*(long **)(param_1 + 0x138),1);
    if (*(char *)(param_1 + 499) == '\0') {
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x15d3feab34,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar5 & 1) != 0)) {
        FUN_71024076d0((undefined4 *)&local_a0,0x15d3feab34);
        if (((local_90 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_88 == DAT_7106dd53ac)) {
          piVar9 = (int *)(local_90 + 0x38);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = *piVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      else {
        local_88 = 0x87650000000000;
        local_78 = 0xffffffffffffffff;
        uStack_70 = 0;
        local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
        local_68 = 0;
      }
      local_98 = &PTR_FUN_7104f73d50;
      local_90 = 0;
      local_80 = 0;
    }
    uVar5 = local_58;
    *(undefined1 *)(param_1 + 499) = 1;
    local_60 = &PTR_FUN_710523d9e8;
    local_58 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    ppuVar4 = local_48;
    local_50 = &PTR_FUN_710523d9e8;
    local_48 = (undefined **)0x0;
    if (ppuVar4 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar4);
    }
    uVar1 = *(uint *)(param_1 + 0xe4);
    if (0x12 < uVar1) goto LAB_7101af9c5c;
    uVar10 = 3;
LAB_7101af9c3c:
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x98) = uVar10;
    break;
  case 5:
    FUN_7101afdcf0(param_1,(ulong)(iVar13 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 6:
    FUN_7101afbc50(param_1,(ulong)(iVar13 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

