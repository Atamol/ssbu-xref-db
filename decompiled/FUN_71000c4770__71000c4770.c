// addr:      71000c4770
// offset:    0xc4770
// name:      FUN_71000c4770
// mangled:   
// signature: undefined __cdecl FUN_71000c4770(int * param_1, long param_2)


void FUN_71000c4770(int *param_1,long param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_158;
  undefined4 local_150;
  int local_d8 [32];
  undefined4 local_58 [2];
  
  piVar11 = (int *)(param_2 + 0xd8);
  if ((*piVar11 == 1) || (*(char *)(param_2 + 0xb0) == '\0')) {
LAB_71000c4850:
    local_d8[0] = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_d8 | 4));
    local_158 = (ulong)local_158._4_4_ << 0x20;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_d8 | 4),(Result *)&local_158);
    FUN_71000bce50(param_1,local_d8);
    return;
  }
  lVar4 = FUN_7100162410(DAT_71052add68);
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar6 = lVar4 + -0x18;
  }
  *(long *)(param_2 + 0xa0) = lVar6;
  if (lVar4 == 0) goto LAB_71000c4850;
  lVar4 = FUN_71001623f0(DAT_71052add68);
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar6 = lVar4 + -0x18;
  }
  *(long *)(param_2 + 0xa8) = lVar6;
  if (lVar4 == 0) goto LAB_71000c4850;
  plVar12 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_71000c4840:
    if (*plVar12 == 0) goto LAB_71000c48bc;
    lVar6 = *(long *)(*plVar12 + 0x10);
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar5;
    if (uVar3 == 0) goto LAB_71000c4840;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
      goto LAB_71000c4840;
    }
    FUN_71001b1300("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x47,0xe0000003,0);
LAB_71000c48bc:
    lVar6 = 0;
  }
  lVar4 = FUN_71001ef600(lVar6);
  FUN_710015fd60((undefined8 *)local_d8);
  for (lVar6 = *(long *)(lVar4 + 0x58); lVar4 + 0x50 != lVar6; lVar6 = *(long *)(lVar6 + 8)) {
    lVar9 = lVar6 + 0x10;
    lVar7 = FUN_71001f16c0(lVar9);
    lVar8 = 0;
    if (*(long **)(param_2 + 0x50) != (long *)0x0) {
      lVar8 = (**(code **)(**(long **)(param_2 + 0x50) + 0x18))();
    }
    if (lVar7 == lVar8) {
      uVar3 = FUN_71001f2e90(lVar9);
      if ((uVar3 >> 1 & 1) == 0) {
        FUN_710015fd60(&local_158);
        FUN_71000c2890(lVar9,(long)&local_158);
        lVar9 = FUN_7100160220((long)&local_158);
        bVar2 = FUN_71000b2850(lVar9);
        if (!bVar2) {
LAB_71000c4b0c:
          local_170 = 0;
          local_178 = 1;
          FUN_7100160990();
          local_178 = CONCAT44(local_178._4_4_,0x6434);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)&local_178 | 4));
          local_58[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)&local_178 | 4),(Result *)local_58);
          FUN_71000bce50(param_1,(int *)&local_178);
          FUN_710015ff20(&local_158);
          goto LAB_71000c4b60;
        }
        lVar9 = FUN_7100160220((long)&local_158);
        FUN_71000b1c60(&local_178,lVar9);
      }
      else {
        FUN_710015fd60(&local_158);
        FUN_71000c2890(lVar9,(long)&local_158);
        lVar9 = FUN_7100160210((long)&local_158);
        bVar2 = FUN_71000b2850(lVar9);
        if (!bVar2) goto LAB_71000c4b0c;
        lVar9 = FUN_7100160220((long)local_d8);
        FUN_71000b1c60(&local_178,lVar9);
        FUN_710015ffc0((long)local_d8,(long)&local_158);
      }
      FUN_7100160450((long)local_d8,(long)&local_178);
      FUN_71000b1cf0();
      FUN_710015ff20(&local_158);
    }
  }
  lVar6 = param_2 + 400;
  *(undefined1 *)(param_2 + 0x210) = 0;
  bVar2 = FUN_71001603e0(lVar6,(long)local_d8);
  if (bVar2) {
    bVar2 = FUN_7100160360(lVar6);
    if ((bVar2) && (bVar2 = FUN_7100160360((long)local_d8), bVar2)) {
      bVar2 = FUN_71001603a0(lVar6,(long)local_d8);
    }
    else {
      lVar4 = FUN_7100160210(lVar6);
      lVar9 = FUN_7100160210((long)local_d8);
      uVar10 = FUN_71000b2b10(lVar4,lVar9);
      if ((uVar10 & 1) == 0) goto LAB_71000c4a38;
      bVar2 = FUN_71001603b0(lVar6,(long)local_d8);
    }
    if (bVar2) goto LAB_71000c4a40;
  }
LAB_71000c4a38:
  *(undefined1 *)(param_2 + 0x210) = 1;
LAB_71000c4a40:
  local_150 = 0;
  local_158 = 0x20000;
  FUN_7100160990();
  local_150 = 0;
  local_158 = 0x20000;
  FUN_7100160990();
  FUN_71000b40e0(piVar11);
  FUN_71000b40e0((undefined4 *)(param_2 + 0x108));
  puVar1 = (undefined4 *)(param_2 + 0x138);
  FUN_71000b40e0(puVar1);
  *(undefined1 *)(param_2 + 0xd0) = 1;
  FUN_71000b4150((long)puVar1,FUN_71000c3bd0,0);
  FUN_71000d2ca0((int *)&local_158,*(long *)(param_2 + 0x168),puVar1);
  if ((int)local_158 == 0) {
    FUN_71000b4160(piVar11);
    FUN_71000b4820(*(long *)(param_2 + 0x168),1);
    local_178 = (ulong)local_178._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_178 | 4));
    local_58[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&local_178 | 4),(Result *)local_58);
    piVar11 = (int *)&local_178;
  }
  else {
    piVar11 = (int *)&local_158;
  }
  FUN_71000bce50(param_1,piVar11);
LAB_71000c4b60:
  FUN_710015ff20((undefined8 *)local_d8);
  return;
}

