// addr:      710023bd70
// offset:    0x23bd70
// name:      FUN_710023bd70
// mangled:   
// signature: undefined __cdecl FUN_710023bd70(undefined8 * param_1)


void FUN_710023bd70(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_710023bdd8:
    if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
      uVar4 = *(undefined8 *)(lVar5 + 0xe8);
      goto LAB_710023be0c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710023bdd8;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      goto LAB_710023bdd8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  uVar4 = 0;
LAB_710023be0c:
  FUN_7100230750(param_1,10,uVar4);
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_7104f5b700;
  puVar3 = FUN_71001af850(0xd0);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710022ec10(puVar3);
    *puVar3 = &PTR_FUN_7104f5b660;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x11] = puVar3 + 0x12;
    puVar3[0x15] = &DAT_7104f56b58;
    *(undefined4 *)(puVar3 + 0x16) = 0;
    *(undefined4 *)(puVar3 + 0x18) = 1;
    puVar3[0x14] = 0;
    puVar3[0x17] = 0xffffffffffffffff;
    puVar3[0x19] = 0xffffffffffffffff;
    FUN_71001daff0((long)(puVar3 + 0x15),3);
  }
  FUN_71002315f0((long)param_1,puVar3);
  return;
}

