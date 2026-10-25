// addr:      7101ba5a60
// offset:    0x1ba5a60
// name:      FUN_7101ba5a60
// mangled:   
// signature: undefined __cdecl FUN_7101ba5a60(long param_1, long * param_2, ulong param_3)


void FUN_7101ba5a60(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  int iVar10;
  
  puVar2 = (ulong *)*param_2;
  puVar3 = (ulong *)param_2[1];
  puVar7 = puVar2;
  if (puVar2 != puVar3) {
    if (((param_3 & 0xff00000000000000) == 0xc100000000000000) && ((param_3 & 0xffffffffff) != 0)) {
      while (uVar9 = *puVar7,
            ((uVar9 & 0xff00000000000000) != 0xc100000000000000 || (uVar9 & 0xffffffffff) == 0) ||
            ((uVar9 ^ param_3) & 0xffffffffff) != 0) {
        puVar7 = puVar7 + 1;
        if (puVar3 == puVar7) {
          return;
        }
      }
    }
    else {
      puVar8 = puVar2;
      if ((*puVar2 & 0xff00000000000000) == 0xc100000000000000 && (*puVar2 & 0xffffffffff) != 0) {
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar3;
          if ((puVar3 == puVar8) ||
             (puVar7 = puVar8, (*puVar8 & 0xff00000000000000) != 0xc100000000000000)) break;
        } while ((*puVar8 & 0xffffffffff) != 0);
      }
    }
  }
  if (puVar3 == puVar7) {
    return;
  }
  iVar10 = (int)((ulong)((long)puVar7 - (long)puVar2) >> 3);
  uVar6 = (uint)(double)(iVar10 / 0x24);
  uVar1 = 0;
  if (uVar6 < 3) {
    uVar1 = uVar6;
  }
  *(uint *)(param_1 + 0x1538) = uVar1;
  FUN_710377a280(param_1 + 0x1518,(byte *)"mel_wazalist_open_guide_01",1);
  iVar4 = *(int *)(param_1 + 0x1538);
  if (iVar4 == 2) {
    lVar5 = param_1 + 0x728;
  }
  else if (iVar4 == 1) {
    lVar5 = param_1 + 0x718;
  }
  else {
    if (iVar4 != 0) goto LAB_7101ba5bb4;
    lVar5 = param_1 + 0x708;
  }
  FUN_710377aee0(0x3f800000,lVar5);
LAB_7101ba5bb4:
  *(int *)(param_1 + 0x1548) = iVar10;
  return;
}

