// addr:      7103398770
// offset:    0x3398770
// name:      FUN_7103398770
// mangled:   
// signature: undefined __cdecl FUN_7103398770(uint * param_1, ulong param_2, uint param_3, uint param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103398770(uint *param_1,ulong param_2,uint param_3,uint param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint auStack_e0 [2];
  char local_d8 [64];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  
  uVar7 = 0x811c9dc5;
  local_90 = local_90 & 0xffffffffffffff00;
  local_98 = 0;
  if ((param_2 >> 0x38 != 0xc1) || ((param_2 & 0xffffffffff) == 0)) {
    local_90 = 0x5f6c6172656e6567;
    local_88 = 0x6c6c61;
    local_98 = 0xb00000000;
    uVar5 = 0x67;
    pbVar4 = (byte *)((long)&local_90 + 1);
    do {
      uVar7 = uVar7 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
    uVar6 = 0;
    local_98 = CONCAT44(0xb,uVar7);
    goto LAB_710339897c;
  }
  lVar8 = *(long *)(DAT_710532f730 + 8);
  uVar6 = (ulong)param_3;
  FUN_7103262310(auStack_e0,*(long *)(lVar8 + 0x168),param_2);
  for (uVar3 = 0; local_d8[uVar3] != '\0'; uVar3 = uVar3 + 2) {
    *(char *)((long)&local_90 + uVar3) = local_d8[uVar3];
    if (0x3e < (int)uVar3 + 1U) {
      uVar3 = (ulong)((int)uVar3 + 1);
      break;
    }
    if (local_d8[uVar3 + 1] == '\0') {
      uVar3 = uVar3 + 1;
      break;
    }
    *(char *)((long)&local_90 + uVar3 + 1) = local_d8[uVar3 + 1];
  }
  *(undefined1 *)((long)&local_90 + (uVar3 & 0xffffffff)) = 0;
  uVar5 = (uint)(byte)local_90;
  local_98 = CONCAT44((int)uVar3,(undefined4)local_98);
  if ((byte)local_90 != 0) {
    pbVar4 = (byte *)((long)&local_90 + 1);
    do {
      uVar7 = uVar7 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
  }
  local_98 = CONCAT44((int)uVar3,uVar7);
  uVar1 = FUN_71032626e0(*(long *)(lVar8 + 0x168),param_2);
  if ((int)uVar1 == 0x3a) {
    if (param_4 != 1 && 0 < (int)param_3) {
      param_3 = 1;
    }
    uVar6 = (ulong)param_3;
    goto LAB_710339897c;
  }
  uVar1 = FUN_71032626e0(*(long *)(lVar8 + 0x168),param_2);
  if ((int)uVar1 == 0x3e) {
    uVar6 = 0;
    goto LAB_710339897c;
  }
  lVar8 = *(long *)(lVar8 + 0x168);
  puVar2 = FUN_71032631a0(lVar8,0x11b1ccb807);
  if ((((ulong)puVar2 & 0xff00000000000000) == 0xc100000000000000) &&
     (((ulong)puVar2 & 0xffffffffff) != 0)) {
    if ((((ulong)puVar2 ^ param_2) & 0xffffffffff) == 0) goto LAB_710339894c;
LAB_7103398958:
    uVar1 = FUN_71032626e0(lVar8,param_2);
    if (((int)param_3 < 1) || ((int)uVar1 != 0x38)) goto LAB_710339897c;
  }
  else {
    if ((((ulong)puVar2 & 0xffffffffff) == 0) ||
       (((ulong)puVar2 & 0xff00000000000000) != 0xc100000000000000)) goto LAB_7103398958;
LAB_710339894c:
    if ((int)param_3 < 1) goto LAB_710339897c;
  }
  uVar6 = (ulong)(param_4 == 1);
LAB_710339897c:
  FUN_71003a4ca0(param_1,"scr_appeal_angeland_%s_%02d_%d_1",&local_90,uVar6,(ulong)param_4,param_5,
                 param_6,param_7,param_8);
  return;
}

