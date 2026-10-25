// addr:      7101c44cf0
// offset:    0x1c44cf0
// name:      FUN_7101c44cf0
// mangled:   
// signature: undefined __cdecl FUN_7101c44cf0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c44cf0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x528),0);
    FUN_71032e5bf0(DAT_710532f7c8,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1_00;
  }
  if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) == '\0') {
    return;
  }
  if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) != '\0') {
    return;
  }
  FUN_7101c44ff0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (0x12 < *(uint *)(param_1 + 0x134)) goto LAB_7101c44fe0;
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 3;
  if ((*(uint *)(param_1 + 0x520) & 0xfffffffe) == 2) {
    lVar7 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80);
    if (*(char *)(lVar7 + 200) == '\0') {
      if (*(char *)(lVar7 + 0x2253) != '\0') goto LAB_7101c44da8;
    }
    else {
      *(undefined1 *)(lVar7 + 200) = 0;
LAB_7101c44da8:
      if (*(char *)(lVar7 + 0x2250) != '\0') {
        FUN_7101af4c80(lVar7,0,0,param_4,param_5,param_6,param_7,param_8);
        if (*(char *)(lVar7 + 200) == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = *(char *)(lVar7 + 0xc9) != '\0';
        }
        lVar5 = *(long *)(*(long *)(lVar7 + 0x2260) + 0x1b8);
        if (lVar5 != 0) {
          lVar7 = *(long *)(lVar7 + 0x2260) + 0x1b8;
          lVar4 = lVar7;
          do {
            bVar1 = *(int *)(lVar5 + 0x20) < 0;
            if (!bVar1) {
              lVar4 = lVar5;
            }
            lVar5 = *(long *)(lVar5 + (ulong)bVar1 * 8);
          } while (lVar5 != 0);
          if (((lVar4 != lVar7) && (*(int *)(lVar4 + 0x20) < 1)) &&
             (plVar8 = *(long **)(lVar4 + 0x28), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x1f8))(plVar8,bVar2);
            (**(code **)(*plVar8 + 0x388))(plVar8,bVar2 ^ 1,0);
          }
        }
      }
    }
    FUN_7103778630(0,*(long *)(**(long **)(param_1 + 0x528) + 0x10),0x710434a2f6);
    FUN_7101c456b0(param_1,-1,0,param_4,param_5,param_6,param_7,param_8);
    (**(code **)(**(long **)(param_1 + 0x530) + 0x70))(*(long **)(param_1 + 0x530),0);
    if (*(int *)(param_1 + 0x134) < 0x12) {
      uVar3 = *(int *)(param_1 + 0x134) + 1;
      *(uint *)(param_1 + 0x134) = uVar3;
      if (0x12 < uVar3) goto LAB_7101c44fe0;
      *(undefined4 *)(param_1 + (long)(int)uVar3 * 4 + 0xe8) = 8;
    }
  }
  FUN_7103778630(0,*(long *)(**(long **)(param_1 + 0x528) + 0x10),0x7104421055);
  if (*(int *)(param_1 + 0x134) < 0x12) {
    uVar3 = *(int *)(param_1 + 0x134) + 1;
    *(uint *)(param_1 + 0x134) = uVar3;
    if (0x12 < uVar3) goto LAB_7101c44fe0;
    *(undefined4 *)(param_1 + (long)(int)uVar3 * 4 + 0xe8) = 2;
  }
  if (*(int *)(param_1 + 0x520) == 4) {
    *(undefined4 *)(param_1 + 0x53c) = 1;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    iVar6 = 0;
    *(undefined8 *)(param_1 + 300) = 0;
    *(undefined8 *)(param_1 + 0x124) = 0;
    *(undefined8 *)(param_1 + 0x11c) = 0;
    *(undefined8 *)(param_1 + 0x114) = 0;
    *(undefined8 *)(param_1 + 0x10c) = 0;
    *(undefined8 *)(param_1 + 0x104) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xe8) = 0xb;
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined8 *)(param_1 + 0xfc) = 0;
    *(undefined8 *)(param_1 + 0xf4) = 0;
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x134);
  }
  fVar9 = (float)FUN_71033112b0(0x42700000,*(long *)(DAT_710532f8c0 + 8),0x1f148ee4b1);
  *(int *)(param_1 + 0x64c) = (int)fVar9;
  if (iVar6 < 0x12) {
    uVar3 = (uint)((long)iVar6 + 1);
    *(uint *)(param_1 + 0x134) = uVar3;
    if (0x12 < uVar3) {
LAB_7101c44fe0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + ((long)iVar6 + 1) * 4 + 0xe8) = 1;
  }
  return;
}

