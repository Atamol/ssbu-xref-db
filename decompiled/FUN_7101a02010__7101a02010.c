// addr:      7101a02010
// offset:    0x1a02010
// name:      FUN_7101a02010
// mangled:   
// signature: undefined __cdecl FUN_7101a02010(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a02010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar11;
  byte ****ppppbVar12;
  uint uVar13;
  int *piVar14;
  undefined4 local_70 [2];
  undefined **local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    lVar8 = *(long *)(param_1 + 0x678);
    if (((lVar8 == 0) && (lVar8 = *(long *)(param_1 + 0x680), lVar8 == 0)) &&
       (lVar8 = *(long *)(param_1 + 0x690), lVar8 == 0)) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = *(undefined4 *)(*(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x10) + 8) + 0x488);
    }
    DAT_71050a8078 = *(undefined4 *)(param_1 + 0x150);
    lVar8 = *(long *)(param_1 + 0x668);
LAB_7101a021b0:
    FUN_71019e6830(lVar8,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar7 = *(long **)(param_1 + 0x668);
  if (*(char *)((long)plVar7 + 0x1c6) == '\0') {
    if ((*(int *)(param_1 + 0x1f8) != 2) && (*(int *)(param_1 + 0x138) == 0xb)) {
      FUN_71019e69d0(plVar7);
      FUN_71019e66d0(*(long *)(param_1 + 0x668),extraout_x1_00,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      lVar8 = *(long *)(param_1 + 0x5e8);
      *(undefined1 *)(lVar8 + 0x266) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x10),0x710437bfe8);
      DAT_71050a8078 = 0xffffffff;
      if (0x12 < *(uint *)(param_1 + 0x134)) goto LAB_7101a023ec;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 3;
    }
  }
  else {
    FUN_71019e69d0(plVar7);
    lVar8 = *(long *)(param_1 + 0x668);
    iVar3 = *(int *)(lVar8 + 0x1c0);
    if (iVar3 == -1) {
      if (*(char *)(lVar8 + 0x1c7) != '\0') {
        uVar10 = *(undefined4 *)(lVar8 + 0x178);
        goto LAB_7101a021b0;
      }
      cVar5 = *(char *)(param_1 + 0x1c3);
      FUN_71019e66d0(lVar8,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
      lVar8 = *(long *)(param_1 + 0x5e8);
      *(undefined1 *)(lVar8 + 0x266) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x10),0x710437bfe8);
      if (cVar5 == '\0') {
        uVar4 = *(uint *)(param_1 + 0x1f8);
        uVar1 = 0;
        if (uVar4 != 3) {
          uVar1 = uVar4 + 1;
        }
        do {
          if (uVar1 == 2) {
            if ((DAT_7105324ae1 & 1) != 0) goto LAB_7101a02360;
          }
          else {
            if (uVar1 == 0) {
              if ((*(char *)(param_1 + 0x6b5) == '\0') &&
                 ((*(long *)(param_1 + 0x678) == 0 ||
                  (*(int *)(*(long *)(*(long *)(param_1 + 0x678) + 8) + 0x28) !=
                   *(int *)(param_1 + 0x150))))) goto LAB_7101a0236c;
            }
            else if (3 < uVar1) goto LAB_7101a023ec;
LAB_7101a02360:
            uVar13 = uVar1;
            if (*(char *)(param_1 + (int)uVar1 + 0x1c0) != '\0') break;
          }
LAB_7101a0236c:
          uVar2 = 0;
          if (uVar1 != 3) {
            uVar2 = uVar1 + 1;
          }
          uVar13 = uVar4;
          uVar1 = uVar2;
        } while (uVar2 != uVar4);
        *(uint *)(param_1 + 0x6a0) = uVar13;
        *(undefined4 *)(param_1 + 0x698) = 1;
      }
      else {
        FUN_7101a028b0(param_1,3,param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_7101a029b0(param_1,&DAT_c1ffff0000000000,(long *********)&DAT_c1ffff0000000000,0,param_5
                       ,param_6,param_7,param_8);
      }
      *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
      DAT_71050a8078 = 0xffffffff;
      if (0x12 < *(uint *)(param_1 + 0x134)) goto LAB_7101a023ec;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 3;
      if (*(long *)(*DAT_71052c50e8 + 0x8d0) == *(long *)(*DAT_71052c50e8 + 0x8d8)) {
        *(undefined1 *)(param_1 + 0x6c3) = 1;
      }
      *(undefined4 *)(param_1 + 0x5d4) = 2;
    }
    else {
      FUN_71019e66d0(lVar8,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
      lVar8 = *(long *)(param_1 + 0x5e8);
      *(undefined1 *)(lVar8 + 0x266) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x10),0x710437bfe8);
      pppplVar11 = (long ****)(ulong)*(uint *)(param_1 + 0x1fc);
      ppppbVar12 = (byte ****)(ulong)*(byte *)(param_1 + 0x6bb);
      FUN_7101a000c0(*(long *)(param_1 + 0x5e8),*(int *)(param_1 + 0x1f8),pppplVar11,ppppbVar12,
                     param_5,param_6,param_7,param_8);
      FUN_7101a024c0(param_1,iVar3,pppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
      FUN_7103778760(*(long *)(*(long *)(param_1 + 0x5e8) + 0x10),0x710425ed91);
      lVar8 = *(long *)(param_1 + 0x5e8);
      FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x10),0x710433a9c5);
      FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0xf0),0x710433a9c5);
      FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x100),0x710433a9c5);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar9 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x12b42156ef,(long ****)&DAT_00000004
                                 ,ppppbVar12,param_5,param_6,param_7,param_8), (uVar9 & 1) != 0)) {
        FUN_71024076d0(local_70,0x12b42156ef);
        if (((local_60 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_58 == DAT_7106dd53ac)) {
          piVar14 = (int *)(local_60 + 0x38);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar6) {
              *piVar14 = *piVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
        local_58 = 0x87650000000000;
        local_48 = 0xffffffffffffffff;
        uStack_40 = 0;
        local_70[0] = 0;
        local_38 = 0;
      }
      local_68 = &PTR_FUN_7104f73d50;
      local_60 = 0;
      local_50 = 0;
      DAT_71050a8078 = 0xffffffff;
      if (0x12 < *(uint *)(param_1 + 0x134)) {
LAB_7101a023ec:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 3;
      *(undefined4 *)(param_1 + 0x698) = 10;
    }
  }
  return;
}

