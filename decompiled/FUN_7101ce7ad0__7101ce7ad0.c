// addr:      7101ce7ad0
// offset:    0x1ce7ad0
// name:      FUN_7101ce7ad0
// mangled:   
// signature: undefined __cdecl FUN_7101ce7ad0(long param_1, ulong param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ce7ad0(long param_1,ulong param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  undefined **local_80;
  ulong local_78;
  undefined4 local_70 [2];
  undefined **local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x228) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x298) = 1;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if ((param_2 & 1) == 0) {
    FUN_7103778760(*(long *)(param_1 + 0x248),0x71043e02c9);
    uVar5 = extraout_x1;
    goto LAB_7101ce7c10;
  }
  lVar3 = *(long *)(DAT_710532f8d0 + 8);
  if ((ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40) >> 3) < 4) {
    uVar7 = 0;
    if (*(char *)(lVar3 + 0x191) == '\0') goto LAB_7101ce7b58;
LAB_7101ce7bc8:
    local_58 = 0x87650000000000;
    local_48 = 0xffffffffffffffff;
    uStack_40 = 0;
    local_70[0] = 0;
    local_38 = 0;
  }
  else {
    uVar7 = *(ulong *)(*(long *)(lVar3 + 0x40) + 0x18);
    if (*(char *)(lVar3 + 0x191) != '\0') goto LAB_7101ce7bc8;
LAB_7101ce7b58:
    param_3 = 4;
    uVar4 = FUN_7103313f20(lVar3,uVar7,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                           param_8);
    if ((uVar4 & 1) == 0) goto LAB_7101ce7bc8;
    FUN_71024076d0(local_70,uVar7);
    if (((local_60 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_58 == DAT_7106dd53ac)) {
      piVar6 = (int *)(local_60 + 0x38);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  local_68 = &PTR_FUN_7104f73d50;
  local_60 = 0;
  local_50 = 0;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x248),0x71043e02c9);
  uVar5 = extraout_x1_00;
LAB_7101ce7c10:
  if ((0 < *(int *)(*(long *)(param_1 + 0x2f0) + 0xb8)) &&
     (FUN_71032d6200(param_1 + 0x2e8,uVar5,param_3,param_4,param_5,param_6,param_7,param_8),
     (param_2 & 1) == 0)) {
    FUN_7103776640(&local_80,param_1 + 0x240,(byte ****)"set_parts_submenu",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar7 = local_78;
    FUN_7103778760(local_78,0x710428ff7d);
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar7 != 0) {
      uVar4 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar7);
    }
  }
  if (*(uint *)(param_1 + 0x224) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x224) * 4 + 0x1d8) = 0x1a;
    *(undefined1 *)(*(long *)(DAT_7105325ca0 + 8) + 0xd8) = 1;
    *(undefined1 *)(*(long *)(*(long *)(*(long *)(DAT_710532f820 + 8) + 0x110) + 0x80) + 0x14a) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

