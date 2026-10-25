// addr:      7101cf4d40
// offset:    0x1cf4d40
// name:      FUN_7101cf4d40
// mangled:   
// signature: undefined __cdecl FUN_7101cf4d40(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cf4d40(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long ****pppplVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined4 local_ae;
  undefined2 local_aa;
  undefined1 local_a8;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined **local_40;
  long *local_38;
  
  if (*(int *)(param_1 + 0x164) != 0) goto LAB_7101cf5070;
  uVar9 = *(uint *)(param_1 + 0xc);
  pppplVar8 = (long ****)(ulong)uVar9;
  if ((int)uVar9 < 0x500000) {
    if ((int)uVar9 < 0x250000) {
      if ((int)uVar9 < 0x200000) {
        if ((int)uVar9 < 0x150000) {
          if ((int)uVar9 < 0x100000) {
            if ((int)uVar9 < 0xfe000) {
              if ((int)uVar9 < 0x50000) {
                if ((int)uVar9 < 0x10000) {
                  iVar7 = 3;
                  if (0 < (int)uVar9) {
                    iVar7 = 0;
                  }
                }
                else {
                  iVar7 = 1;
                }
              }
              else {
                iVar7 = 2;
              }
            }
            else {
              iVar7 = 8;
            }
          }
          else {
            iVar7 = 4;
          }
        }
        else {
          iVar7 = 6;
        }
      }
      else {
        iVar7 = 5;
      }
    }
    else {
      iVar7 = 7;
    }
  }
  else {
    iVar7 = 9;
  }
  FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x20),iVar7,pppplVar8,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x30),0x71042a3672);
  if (*(long *)(param_1 + 0x178) != 0) {
    FUN_7103776910(&local_40,param_1 + 0x28,(long ****)"set_txt_help_00",pppplVar8,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_40,*(char **)(param_1 + 0x178),pppplVar8,param_4,param_5,param_6,
                   param_7,param_8);
    plVar5 = local_38;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar5);
    }
  }
  FUN_7101cf61b0(param_1,(long)(param_1 + 0x178),pppplVar8,param_4,param_5,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x30),0x7104421055);
  FUN_7103776910(&local_40,param_1 + 0x28,(long ****)"anim_BG_00",pppplVar8,param_4,param_5,param_6,
                 param_7,param_8);
  lVar4 = *local_38;
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | *(byte *)(param_1 + 0x181);
  }
  if (*(char *)(param_1 + 0x181) == '\0') {
    lVar4 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar4 + 0x48) - *(long *)(lVar4 + 0x40) >> 3) < 6) {
      uVar6 = 0;
      if (*(char *)(lVar4 + 0x191) == '\0') goto LAB_7101cf4f28;
LAB_7101cf4f98:
      local_68 = 0x87650000000000;
      local_58 = 0xffffffffffffffff;
      uStack_50 = 0;
      local_80[0] = 0;
      local_48 = 0;
      local_78 = &PTR_FUN_7104f73d50;
    }
    else {
      uVar6 = *(ulong *)(*(long *)(lVar4 + 0x40) + 0x28);
      if (*(char *)(lVar4 + 0x191) != '\0') goto LAB_7101cf4f98;
LAB_7101cf4f28:
      pppplVar8 = (long ****)&DAT_00000004;
      uVar3 = FUN_7103313f20(lVar4,uVar6,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar3 & 1) == 0) goto LAB_7101cf4f98;
      FUN_71024076d0(local_80,uVar6);
      local_78 = &PTR_FUN_7104f73d50;
      if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
        piVar10 = (int *)(local_70 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    local_78 = &PTR_FUN_7104f73d50;
    local_70 = 0;
    local_60 = 0;
  }
  else {
    FUN_71032d6810(param_1,0,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x2b0) = 1;
  }
  local_a8 = 0;
  uStack_c0 = 0x69696d615f756e6d;
  local_b8 = 0x69646165725f6f62;
  local_b0 = 0x676e;
  local_ae = 0x7469745f;
  uVar9 = 0x811c9dc5;
  uVar11 = 0x6d;
  local_aa = 0x656c;
  lVar4 = 9;
  do {
    uVar9 = uVar9 * 0x89 ^ uVar11;
    uVar11 = (uint)*(byte *)((long)&local_c8 + lVar4);
    lVar4 = lVar4 + 1;
  } while (uVar11 != 0);
  _local_c8 = CONCAT44(0x18,uVar9);
  FUN_71019b7de0(1,(long)&local_c8,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  plVar5 = local_38;
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
LAB_7101cf5070:
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  if ((((lVar4 == 0) || (plVar5 = (long *)FUN_71037964b0(lVar4,0x7104421055), plVar5 == (long *)0x0)
       ) || (uVar6 = (**(code **)(*plVar5 + 0x138))(), (uVar6 & 1) != 0)) &&
     (0 < *(int *)(param_1 + 0x15c))) {
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + -1;
  }
  return;
}

