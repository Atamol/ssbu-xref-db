// addr:      71001d46c0
// offset:    0x1d46c0
// name:      FUN_71001d46c0
// mangled:   
// signature: undefined __cdecl FUN_71001d46c0(undefined8 * param_1)


void FUN_71001d46c0(undefined8 *param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 uVar7;
  long lVar8;
  long ***ppplVar9;
  long *plVar10;
  long lVar11;
  long ****pppplVar12;
  uint uVar13;
  long ****pppplVar14;
  ulong local_80;
  long ***local_78;
  long ***local_70;
  long local_68;
  long ***local_60;
  undefined8 uStack_58;
  
  *param_1 = &PTR_FUN_710523be40;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_7104f561e8;
  if (DAT_71052af1d8 == '\0') {
    uVar13 = 0;
  }
  else {
    puVar1 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar13 = *puVar1;
  }
  param_1[6] = &PTR_FUN_7104f56208;
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  *(undefined1 *)(param_1 + 9) = 0;
  uVar6 = (ulong)uVar13;
  uVar2 = FUN_71001d5f20((long)&DAT_71052af110,(long)(param_1 + 6),3,uVar13);
  if ((uVar2 & 1) != 0) {
    *(uint *)(param_1 + 7) = uVar13;
    *(undefined4 *)((long)param_1 + 0x3c) = 3;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar5 = 1;
  param_1[6] = &PTR_FUN_7104f56410;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_71001b0350(param_1 + 0xf,0x20000000,1);
  DAT_71052af0d8 = 0;
  if (DAT_7104f54e20 == '\0') {
    FUN_71001b6a50((long *)&local_80);
  }
  else {
    FUN_71001b68a0(&local_80,0);
  }
  DAT_71052aeba8 = local_80;
  uVar7 = 0;
  switch(DAT_71052af0e0) {
  case 1:
    DAT_7104f561d0 = '\0';
    goto LAB_71001d4940;
  case 2:
    uVar7 = 1;
  case 3:
    DAT_7104f561d0 = '\0';
    DAT_7104f561d1 = '\0';
    DAT_71052af0e4 = uVar7;
LAB_71001d48c8:
    DAT_71052ae108 = 1;
    break;
  case 4:
    DAT_7104f561d0 = '\0';
    DAT_71052ae108 = 0;
    DAT_71052af0e4 = 0;
    DAT_7104f561d1 = '\x01';
    break;
  case 5:
    DAT_7104f561d0 = '\x01';
    DAT_71052af0e4 = 0;
    goto LAB_71001d4944;
  case 6:
    DAT_7104f561d0 = '\x01';
LAB_71001d4940:
    DAT_71052af0e4 = 1;
LAB_71001d4944:
    DAT_71052ae108 = 0;
    DAT_7104f561d1 = '\x01';
    break;
  default:
    if (DAT_7104f561d0 == '\0') {
      if (DAT_7104f561d1 != '\0') goto LAB_71001d4ca0;
      goto LAB_71001d48c8;
    }
    if (DAT_7104f561d1 == '\0') {
      DAT_7104f561d1 = '\x01';
      DAT_71052ae108 = 0;
    }
    else {
LAB_71001d4ca0:
      DAT_71052ae108 = 0;
    }
  }
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  DAT_71052af0dc = DAT_71052af0dc + 1;
  (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  param_1[8] = param_1;
  (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
  puVar3 = FUN_71001af850(0x1d8);
  if (puVar3 != (undefined8 *)0x0) {
    uVar5 = 8;
    uVar6 = 0;
    FUN_71001d7dd0(puVar3,extraout_x1,8,(undefined8 *)0x0);
  }
  param_1[2] = puVar3;
  if (DAT_7104f561d0 != '\0') {
    FUN_71001d8670(puVar3[3],1,uVar5,uVar6,in_x4,in_x5,in_x6,in_x7);
  }
  puVar3 = FUN_71001af850(0xa0);
  if (puVar3 != (undefined8 *)0x0) {
    local_70 = (long ***)((ulong)local_70 & 0xffffffffffffff00);
    local_60 = (long ***)&local_70;
    uStack_58 = 0x10;
    local_78 = (long ***)&PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_78,"CallContextRegister",-1);
    *puVar3 = &PTR_FUN_710523be40;
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined1 *)((long)puVar3 + 0xc) = 0;
    *puVar3 = &PTR_FUN_7104f56510;
    puVar3[2] = &PTR_FUN_710509cc08;
    *(undefined1 *)(puVar3 + 3) = 0;
    puVar3[5] = puVar3 + 3;
    puVar3[6] = 0x10;
    FUN_71001b47e0((long)(puVar3 + 2),(char *)local_60,-1);
    puVar3[7] = 1;
    puVar3[8] = 0;
    local_78 = (long ***)&PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_78);
    *puVar3 = &PTR_FUN_7104f56090;
    puVar3[10] = 0;
    puVar3[9] = puVar3 + 10;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    *(undefined4 *)(puVar3 + 0xf) = 1;
    puVar3[0xb] = 0;
    puVar3[0xc] = puVar3 + 0xd;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
  }
  param_1[3] = puVar3;
  plVar4 = FUN_71001af850(0x80);
  if (plVar4 != (long *)0x0) {
    FUN_71001dbef0(plVar4);
  }
  param_1[4] = plVar4;
  plVar10 = (long *)plVar4[0xf];
  lVar11 = param_1[3];
  plVar4 = FUN_71001b1820(0x18);
  plVar4[1] = (long)(plVar10 + 9);
  plVar4[2] = lVar11;
  *plVar4 = 0;
  lVar8 = plVar10[9];
  *plVar4 = lVar8;
  *(long **)(lVar8 + 8) = plVar4;
  plVar10[9] = (long)plVar4;
  plVar10[0xb] = plVar10[0xb] + 1;
  if ((plVar10 != (long *)0x0) || (*(long *)(lVar11 + 0x40) != 0)) {
    *(long **)(lVar11 + 0x40) = plVar10;
  }
  (**(code **)(*plVar10 + 0x70))(plVar10);
  puVar3 = FUN_71001af850(0x98);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_7104f56478;
    local_68 = 0;
    local_78 = (long ***)&local_78;
    local_70 = (long ***)&local_78;
    FUN_71001da310(puVar3 + 1,(long *)&local_78);
    if (local_68 != 0) {
      ppplVar9 = (long ***)*local_70;
      ppplVar9[1] = local_78[1];
      *local_78[1] = (long *)ppplVar9;
      local_68 = 0;
      if ((long ****)local_70 != &local_78) {
        pppplVar12 = (long ****)local_70;
        do {
          pppplVar14 = (long ****)pppplVar12[1];
          (*(code *)*pppplVar12[2])();
          FUN_71001b1870((long)pppplVar12);
          pppplVar12 = pppplVar14;
        } while (pppplVar14 != &local_78);
      }
    }
  }
  param_1[5] = puVar3;
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d4c20:
    if ((*plVar4 != 0) && (lVar8 = *(long *)(*plVar4 + 0x10), lVar8 != 0)) {
      lVar8 = *(long *)(lVar8 + 0x10);
      goto LAB_71001d4c54;
    }
  }
  else {
    puVar1 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar13 = *puVar1;
    if (uVar13 == 0) goto LAB_71001d4c20;
    if ((ulong)uVar13 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar13 * 8) + 0x20);
      goto LAB_71001d4c20;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar8 = 0;
LAB_71001d4c54:
  plVar4 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_71001d4d00(*(long **)(param_1[4] + 0x78));
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}

