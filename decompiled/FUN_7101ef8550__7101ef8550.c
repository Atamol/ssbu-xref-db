// addr:      7101ef8550
// offset:    0x1ef8550
// name:      FUN_7101ef8550
// mangled:   
// signature: undefined __cdecl FUN_7101ef8550(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ef8550(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  ushort *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined **local_1078;
  ulong local_1070;
  undefined **local_1068;
  ulong local_1060;
  undefined **local_1058;
  ulong local_1050;
  uint local_1048 [2];
  undefined1 local_1040 [4088];
  int local_48 [2];
  
  FUN_7103776640(&local_1058,param_1 + 0x118,(byte ****)"set_part_controller",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  puVar10 = &DAT_7105339830;
  if ((((param_2 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
      (puVar10 = (undefined8 *)(&DAT_7105339860)[(int)param_2], puVar10 == (undefined8 *)0x0)) ||
     ((char)((long *)puVar10[2])[0x17] == '\0')) {
LAB_7101ef861c:
    local_1040[0] = 0;
    local_1048[0] = 0x811c9dc5;
    local_1048[1] = 0;
  }
  else {
    cVar3 = (**(code **)(*(long *)puVar10[2] + 0x20))();
    bVar1 = cVar3 - 1;
    if ((0xe < bVar1) || ((0x2e8aUL >> ((long)(char)bVar1 & 0x3fU) & 1) != 0)) goto LAB_7101ef861c;
    FUN_71003a4ca0(local_1048,"indicator_%d",
                   (ulong)(*(int *)(&DAT_7104753e00 + (long)(char)bVar1 * 4) + 1),param_3,param_4,
                   param_5,param_6,param_7,param_8);
  }
  uVar2 = local_1050;
  FUN_7103778300(0x3f800000,local_1050,(long)local_1040);
  if ((param_2 == 0xffffffff) ||
     ((((puVar10 = &DAT_7105339830, param_2 < 10 && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
       (puVar10 = (undefined8 *)(&DAT_7105339860)[(int)param_2], puVar10 == (undefined8 *)0x0)) ||
      (uVar4 = *(int *)(puVar10[2] + 0x9c) - 1, 6 < uVar4)))) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar4 * 4);
  }
  FUN_710339d9f0(local_1048,uVar8);
  FUN_7103778300(0x3f800000,local_1050,(long)local_1040);
  FUN_7103776640(&local_1068,param_1 + 0x118,(byte ****)"set_part_key_help",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1078,(long)&local_1068,(long ****)"set_txt_icon",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_1070;
  if (param_2 != 0xffffffff) {
    puVar10 = &DAT_7105339830;
    if (((param_2 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
       (puVar10 = (undefined8 *)(&DAT_7105339860)[(int)param_2], uVar8 = 0,
       puVar10 == (undefined8 *)0x0)) goto LAB_7101ef8740;
    uVar4 = *(int *)(puVar10[2] + 0x9c) - 1;
    if (uVar4 < 7) {
      uVar8 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar4 * 4);
      goto LAB_7101ef8740;
    }
  }
  uVar8 = 0;
LAB_7101ef8740:
  plVar11 = *(long **)(local_1070 + 0x10);
  if (plVar11 != (long *)0x0) {
    pbVar9 = (byte *)plVar11[0x1c];
    *(undefined4 *)((long)plVar11 + 0x25c) = uVar8;
    if (((pbVar9 != (byte *)0x0) && (*pbVar9 != 0x23)) && (*pbVar9 != 0x40)) {
      puVar5 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar9);
      local_48[0] = *(int *)((long)plVar11 + 0x25c);
      memset(local_1048,0,0x1000);
      uVar4 = FUN_71037ae170((long)local_1048,puVar5,local_48);
      FUN_71037a2270(plVar11,(ushort *)local_1048,uVar4,0);
    }
  }
  local_1078 = &PTR_FUN_710523d9a8;
  local_1070 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_1060;
  local_1068 = &PTR_FUN_710523d988;
  local_1060 = 0;
  if (uVar7 != 0) {
    uVar6 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar7);
  }
  local_1058 = &PTR_FUN_710523d988;
  local_1050 = 0;
  if (uVar2 != 0) {
    uVar7 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

