// addr:      710148d4e0
// offset:    0x148d4e0
// name:      FUN_710148d4e0
// mangled:   
// signature: undefined __cdecl FUN_710148d4e0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710148d4e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined **local_60;
  ulong local_58;
  
  plVar6 = DAT_7105314510;
  *(undefined1 *)(param_1 + 0x1f9) =
       *(undefined1 *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0xb);
  bVar5 = *(byte *)(*(long *)**(undefined8 **)(*plVar6 + 0xd8) + 0xc);
  *(byte *)(param_1 + 0x1fa) = bVar5;
  lVar11 = *(long *)(*(long *)(*DAT_7105329f98 + 0x50) + 0x150);
  uVar1 = *(uint *)(lVar11 + 0x118);
  uVar2 = *(uint *)(lVar11 + 0x11c);
  iVar3 = *(int *)(lVar11 + 0x120);
  uVar4 = *(uint *)(lVar11 + 0x124);
  FUN_7103776910(&local_60,*(long *)(*(long *)(param_1 + 0x1f0) + 0x80) + 0x18,
                 (long ****)"set_txt_01",param_3,param_4,param_5,param_6,param_7,param_8);
  uVar9 = 1;
  uVar10 = (ulong)bVar5;
  FUN_710377a280((long)&local_60,(byte *)"mel_spirits_roulette_slow_roulette_n",1);
  uVar7 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  if (((*(char *)(param_1 + 0x1fa) == '\0') ||
      (((uVar1 & uVar2) == 0xffffffff && iVar3 == -1) && (uVar4 & 0xf) == 0xf)) ||
     (*(char *)(param_1 + 0x1fc) != '\0')) {
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x1f0) + 0x80) + 0x20);
    pcVar8 = "unusable_r";
  }
  else {
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x1f0) + 0x80) + 0x20);
    pcVar8 = "available_r";
  }
  FUN_7103778300(0x3f800000,lVar11,(long)pcVar8);
  FUN_7103776910(&local_60,*(long *)(*(long *)(param_1 + 0x1f0) + 0x80) + 0x18,
                 (long ****)"set_txt_00_l",uVar9,uVar10,param_5,param_6,param_7,param_8);
  FUN_710377a280((long)&local_60,(byte *)"mel_spirits_roulette_good_luck_roulette_n",1);
  uVar7 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  if (((*(char *)(param_1 + 0x1f9) == '\0') ||
      ((((uVar1 & uVar2) == 0xffffffff && (iVar3 == -1)) && ((uVar4 & 0xf) == 0xf)))) ||
     (*(char *)(param_1 + 0x1fb) != '\0')) {
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x1f0) + 0x80) + 0x20);
    pcVar8 = "unusable_l";
  }
  else {
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x1f0) + 0x80) + 0x20);
    pcVar8 = "available_l";
  }
  FUN_7103778300(0x3f800000,lVar11,(long)pcVar8);
  return;
}

