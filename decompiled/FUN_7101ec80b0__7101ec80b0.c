// addr:      7101ec80b0
// offset:    0x1ec80b0
// name:      FUN_7101ec80b0
// mangled:   
// signature: undefined __cdecl FUN_7101ec80b0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101ec8784) */
/* WARNING: Removing unreachable block (ram,0x007101ec855c) */
/* WARNING: Removing unreachable block (ram,0x007101ec8344) */
/* WARNING: Removing unreachable block (ram,0x007101ec844c) */
/* WARNING: Removing unreachable block (ram,0x007101ec866c) */
/* WARNING: Removing unreachable block (ram,0x007101ec88a4) */

void FUN_7101ec80b0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long ****pppplVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  ulong uVar17;
  uint *puVar18;
  long *plVar19;
  char cVar20;
  long *plVar21;
  uint uVar22;
  long ***local_1c0;
  byte local_1b8 [64];
  undefined8 local_178;
  byte local_170 [64];
  uint *local_130;
  uint *local_128;
  uint *local_120;
  uint *local_118;
  uint *local_110;
  uint *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  uint *local_a0;
  uint *local_98;
  uint *local_90;
  long ***local_88;
  long ***local_80;
  long ***local_78;
  undefined4 local_6c [3];
  
  local_88 = (long ***)FUN_710392e290(0x10,0x240,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_88 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_178 = (long ***)((ulong)local_178 & 0xffffffff00000000);
      local_100 = (long ***)0x240;
      param_3 = (long ****)&local_100;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_178);
      if (((uVar6 & 1) != 0) &&
         (local_88 = (long ***)
                     FUN_710392e290(0x10,0x240,param_3,param_4,param_5,param_6,param_7,param_8),
         local_88 != (long ***)0x0)) goto LAB_7101ec8128;
    }
    local_88 = (long ***)0x0;
  }
LAB_7101ec8128:
  uVar2 = 0x811c9dc5;
  local_78 = local_88 + 0x48;
  local_100 = (long ***)0xf00000000;
  local_f8 = 0x6d5f30305f746573;
  local_f0 = 0x6c616972657461;
  uVar14 = 0x73;
  local_80 = local_88;
  pbVar9 = (byte *)((long)&local_f8 + 1);
  uVar15 = uVar2;
  do {
    uVar15 = uVar15 * 0x89 ^ uVar14;
    uVar14 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (uVar14 != 0);
  local_100 = (long ***)CONCAT44(0xf,uVar15);
  uVar6 = 0;
  cVar20 = 's';
  *(uint *)local_88 = 0;
  do {
    *(char *)((long)local_88 + uVar6 + 8) = cVar20;
    if (0x3e < (int)uVar6 + 1U) {
      uVar6 = (ulong)((int)uVar6 + 1);
      break;
    }
    cVar20 = *(char *)((long)&local_f8 + uVar6 + 1);
    uVar6 = uVar6 + 1;
  } while (cVar20 != '\0');
  *(undefined1 *)((long)local_88 + (uVar6 & 0xffffffff) + 8) = 0;
  uVar14 = (uint)*(byte *)(local_88 + 1);
  *(uint *)((long)local_88 + 4) = (uint)uVar6;
  uVar15 = uVar2;
  if (*(byte *)(local_88 + 1) != 0) {
    pbVar9 = (byte *)((long)local_88 + 9);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (uVar14 != 0);
  }
  *(uint *)local_88 = uVar15;
  local_100 = (long ***)0xb00000000;
  local_f8 = 0x645f31305f746573;
  local_f0 = 0x6c616900776172;
  uVar14 = 0x73;
  local_80 = local_88 + 9;
  pbVar9 = (byte *)((long)&local_f8 + 1);
  uVar15 = uVar2;
  do {
    uVar15 = uVar15 * 0x89 ^ uVar14;
    uVar14 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (uVar14 != 0);
  uVar6 = 0;
  local_100 = (long ***)CONCAT44(0xb,uVar15);
  cVar20 = 's';
  *(uint *)(local_88 + 9) = 0;
  do {
    *(char *)((long)local_88 + uVar6 + 0x50) = cVar20;
    if (0x3e < (int)uVar6 + 1U) {
      uVar6 = (ulong)((int)uVar6 + 1);
      break;
    }
    cVar20 = *(char *)((long)&local_f8 + uVar6 + 1);
    uVar6 = uVar6 + 1;
  } while (cVar20 != '\0');
  *(undefined1 *)((long)(local_88 + 9) + (uVar6 & 0xffffffff) + 8) = 0;
  uVar14 = (uint)*(byte *)(local_88 + 10);
  *(uint *)((long)local_88 + 0x4c) = (uint)uVar6;
  uVar15 = uVar2;
  if (*(byte *)(local_88 + 10) != 0) {
    pbVar9 = (byte *)((long)local_88 + 0x51);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (uVar14 != 0);
  }
  *(uint *)(local_88 + 9) = uVar15;
  local_80 = local_88 + 0x12;
  local_100 = (long ***)0xb00000000;
  local_f8 = 0x655f32305f746573;
  uVar14 = 0x73;
  local_f0 = 0x6c616900746964;
  pbVar9 = (byte *)((long)&local_f8 + 1);
  uVar15 = uVar2;
  do {
    uVar15 = uVar15 * 0x89 ^ uVar14;
    uVar14 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (uVar14 != 0);
  uVar6 = 0;
  local_100 = (long ***)CONCAT44(0xb,uVar15);
  cVar20 = 's';
  *(uint *)local_80 = 0;
  do {
    *(char *)((long)local_88 + uVar6 + 0x98) = cVar20;
    if (0x3e < (int)uVar6 + 1U) {
      uVar6 = (ulong)((int)uVar6 + 1);
      break;
    }
    cVar20 = *(char *)((long)&local_f8 + uVar6 + 1);
    if (cVar20 == '\0') {
      uVar6 = uVar6 + 1;
      break;
    }
    *(char *)((long)local_88 + uVar6 + 0x99) = cVar20;
    cVar20 = *(char *)((long)&local_f8 + uVar6 + 2);
    uVar6 = uVar6 + 2;
  } while (cVar20 != '\0');
  *(undefined1 *)((long)local_80 + (uVar6 & 0xffffffff) + 8) = 0;
  uVar14 = (uint)*(byte *)(local_88 + 0x13);
  *(uint *)((long)local_88 + 0x94) = (uint)uVar6;
  uVar15 = uVar2;
  if (*(byte *)(local_88 + 0x13) != 0) {
    pbVar9 = (byte *)((long)local_88 + 0x99);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (uVar14 != 0);
  }
  local_80 = local_88 + 0x1b;
  *(uint *)(local_88 + 0x12) = uVar15;
  local_100 = (long ***)0xd00000000;
  local_f8 = 0x655f33305f746573;
  uVar14 = 0x73;
  lVar10 = 9;
  local_f0 = 0x6c007265736172;
  uVar15 = uVar2;
  do {
    uVar15 = uVar15 * 0x89 ^ uVar14;
    uVar14 = (uint)*(byte *)((long)&local_100 + lVar10);
    lVar10 = lVar10 + 1;
  } while (uVar14 != 0);
  local_100 = (long ***)CONCAT44(0xd,uVar15);
  if (local_80 < local_88 + 0x48) {
    uVar6 = 0;
    cVar20 = 's';
    *(uint *)local_80 = 0;
    do {
      *(char *)((long)local_88 + uVar6 + 0xe0) = cVar20;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      cVar20 = *(char *)((long)&local_f8 + uVar6 + 1);
      if (cVar20 == '\0') {
        uVar6 = uVar6 + 1;
        break;
      }
      *(char *)((long)local_88 + uVar6 + 0xe1) = cVar20;
      cVar20 = *(char *)((long)&local_f8 + uVar6 + 2);
      uVar6 = uVar6 + 2;
    } while (cVar20 != '\0');
    *(undefined1 *)((long)local_88 + (uVar6 & 0xffffffff) + 0xe0) = 0;
    *(uint *)((long)local_88 + 0xdc) = (uint)uVar6;
    uVar14 = (uint)*(byte *)(local_88 + 0x1c);
    uVar15 = uVar2;
    if (*(byte *)(local_88 + 0x1c) != 0) {
      pbVar9 = (byte *)((long)local_88 + 0xe1);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *(uint *)local_80 = uVar15;
    local_80 = local_88 + 0x24;
  }
  else {
    FUN_71019c1c50((ulong *)&local_88,(long)&local_100,param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  uVar14 = 0x73;
  local_100 = (long ***)0xb00000000;
  local_f8 = 0x675f34305f746573;
  lVar10 = 9;
  local_f0._0_4_ = 0x726165;
  uVar15 = uVar2;
  do {
    uVar15 = uVar15 * 0x89 ^ uVar14;
    uVar14 = (uint)*(byte *)((long)&local_100 + lVar10);
    lVar10 = lVar10 + 1;
  } while (uVar14 != 0);
  local_100 = (long ***)CONCAT44(0xb,uVar15);
  if (local_80 < local_78) {
    uVar6 = 0;
    cVar20 = 's';
    *(uint *)local_80 = 0;
    do {
      *(char *)((long)local_80 + uVar6 + 8) = cVar20;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      cVar20 = *(char *)((long)&local_f8 + uVar6 + 1);
      if (cVar20 == '\0') {
        uVar6 = uVar6 + 1;
        break;
      }
      *(char *)((long)local_80 + uVar6 + 9) = cVar20;
      cVar20 = *(char *)((long)&local_f8 + uVar6 + 2);
      uVar6 = uVar6 + 2;
    } while (cVar20 != '\0');
    *(undefined1 *)((long)local_80 + (uVar6 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_80 + 4) = (uint)uVar6;
    uVar14 = (uint)*(byte *)(local_80 + 1);
    uVar15 = uVar2;
    if (*(byte *)(local_80 + 1) != 0) {
      pbVar9 = (byte *)((long)local_80 + 9);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *(uint *)local_80 = uVar15;
    local_80 = local_80 + 9;
  }
  else {
    FUN_71019c1c50((ulong *)&local_88,(long)&local_100,param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  uVar14 = 0x73;
  local_100 = (long ***)0xb00000000;
  local_f8 = 0x725f35305f746573;
  lVar10 = 9;
  local_f0._0_4_ = 0x6c6961;
  uVar15 = uVar2;
  do {
    uVar15 = uVar15 * 0x89 ^ uVar14;
    uVar14 = (uint)*(byte *)((long)&local_100 + lVar10);
    lVar10 = lVar10 + 1;
  } while (uVar14 != 0);
  local_100 = (long ***)CONCAT44(0xb,uVar15);
  if (local_80 < local_78) {
    uVar6 = 0;
    cVar20 = 's';
    *(uint *)local_80 = 0;
    do {
      *(char *)((long)local_80 + uVar6 + 8) = cVar20;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      cVar20 = *(char *)((long)&local_f8 + uVar6 + 1);
      if (cVar20 == '\0') {
        uVar6 = uVar6 + 1;
        break;
      }
      *(char *)((long)local_80 + uVar6 + 9) = cVar20;
      cVar20 = *(char *)((long)&local_f8 + uVar6 + 2);
      uVar6 = uVar6 + 2;
    } while (cVar20 != '\0');
    *(undefined1 *)((long)local_80 + (uVar6 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_80 + 4) = (uint)uVar6;
    uVar14 = (uint)*(byte *)(local_80 + 1);
    uVar15 = uVar2;
    if (*(byte *)(local_80 + 1) != 0) {
      pbVar9 = (byte *)((long)local_80 + 9);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *(uint *)local_80 = uVar15;
    local_80 = local_80 + 9;
  }
  else {
    FUN_71019c1c50((ulong *)&local_88,(long)&local_100,param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  local_100 = (long ***)0xd00000000;
  local_f8 = 0x735f36305f746573;
  uVar14 = 0x73;
  lVar10 = 9;
  local_f0 = CONCAT26(local_f0._6_2_,0x6863746977);
  uVar15 = uVar2;
  do {
    uVar15 = uVar15 * 0x89 ^ uVar14;
    uVar14 = (uint)*(byte *)((long)&local_100 + lVar10);
    lVar10 = lVar10 + 1;
  } while (uVar14 != 0);
  local_100 = (long ***)CONCAT44(0xd,uVar15);
  if (local_80 < local_78) {
    uVar6 = 0;
    cVar20 = 's';
    *(uint *)local_80 = 0;
    do {
      *(char *)((long)local_80 + uVar6 + 8) = cVar20;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      cVar20 = *(char *)((long)&local_f8 + uVar6 + 1);
      if (cVar20 == '\0') {
        uVar6 = uVar6 + 1;
        break;
      }
      *(char *)((long)local_80 + uVar6 + 9) = cVar20;
      cVar20 = *(char *)((long)&local_f8 + uVar6 + 2);
      uVar6 = uVar6 + 2;
    } while (cVar20 != '\0');
    *(undefined1 *)((long)local_80 + (uVar6 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_80 + 4) = (uint)uVar6;
    uVar14 = (uint)*(byte *)(local_80 + 1);
    uVar15 = uVar2;
    if (*(byte *)(local_80 + 1) != 0) {
      pbVar9 = (byte *)((long)local_80 + 9);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *(uint *)local_80 = uVar15;
    local_80 = local_80 + 9;
  }
  else {
    FUN_71019c1c50((ulong *)&local_88,(long)&local_100,param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  local_100 = (long ***)0xf00000000;
  local_f8 = 0x615f37305f746573;
  local_f0 = 0x79726f73656363;
  uVar22 = 0x73;
  lVar10 = 9;
  uVar14 = 0x73;
  uVar15 = uVar2;
  do {
    uVar15 = uVar15 * 0x89 ^ uVar14;
    uVar14 = (uint)*(byte *)((long)&local_100 + lVar10);
    lVar10 = lVar10 + 1;
  } while (uVar14 != 0);
  local_100 = (long ***)CONCAT44(0xf,uVar15);
  if (local_80 < local_78) {
    uVar6 = 0;
    cVar20 = 's';
    *(uint *)local_80 = 0;
    do {
      *(char *)((long)local_80 + uVar6 + 8) = cVar20;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      cVar20 = *(char *)((long)&local_f8 + uVar6 + 1);
      if (cVar20 == '\0') {
        uVar6 = uVar6 + 1;
        break;
      }
      *(char *)((long)local_80 + uVar6 + 9) = cVar20;
      cVar20 = *(char *)((long)&local_f8 + uVar6 + 2);
      uVar6 = uVar6 + 2;
    } while (cVar20 != '\0');
    *(undefined1 *)((long)local_80 + (uVar6 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_80 + 4) = (uint)uVar6;
    uVar14 = (uint)*(byte *)(local_80 + 1);
    uVar15 = uVar2;
    if (*(byte *)(local_80 + 1) != 0) {
      pbVar9 = (byte *)((long)local_80 + 9);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *(uint *)local_80 = uVar15;
    local_80 = local_80 + 9;
  }
  else {
    FUN_71019c1c50((ulong *)&local_88,(long)&local_100,param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  pppplVar8 = &local_88;
  FUN_7101ec4640(param_1,(long ****)"selector_main_tool",(long *)pppplVar8,param_4,param_5,param_6,
                 param_7,param_8);
  local_e8 = 0;
  local_f0 = 0x6c6169726574616d;
  lVar10 = 9;
  uVar14 = 0x73;
  local_100 = (long ***)0x1000000000;
  local_98 = (uint *)0x0;
  local_90 = (uint *)0x0;
  local_a8 = (uint *)0x0;
  local_a0 = (uint *)0x0;
  local_f8 = 0x5f7065725f746573;
  local_b8 = (uint *)0x0;
  local_b0 = (uint *)0x0;
  uVar15 = uVar2;
  do {
    uVar15 = uVar15 * 0x89 ^ uVar14;
    uVar14 = (uint)*(byte *)((long)&local_100 + lVar10);
    lVar10 = lVar10 + 1;
  } while (uVar14 != 0);
  local_100 = (long ***)CONCAT44(0x10,uVar15);
  puVar7 = (uint *)FUN_710392e290(0x10,0x438,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (uint *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c0 = (long ***)((ulong)local_1c0 & 0xffffffff00000000);
      local_178 = (long ***)0x438;
      pppplVar8 = (long ****)&local_178;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (uint *)FUN_710392e290(0x10,0x438,pppplVar8,param_4,param_5,param_6,param_7,
                                          param_8), puVar7 != (uint *)0x0)) goto LAB_7101ec8a18;
    }
    puVar7 = (uint *)0x0;
  }
LAB_7101ec8a18:
  local_a8 = puVar7 + 0x10e;
  local_b8 = puVar7;
  local_b0 = puVar7;
  puVar7 = (uint *)FUN_710392e290(0x10,0x438,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (uint *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c0 = (long ***)((ulong)local_1c0 & 0xffffffff00000000);
      local_178 = (long ***)0x438;
      pppplVar8 = (long ****)&local_178;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (uint *)FUN_710392e290(0x10,0x438,pppplVar8,param_4,param_5,param_6,param_7,
                                          param_8), puVar7 != (uint *)0x0)) goto LAB_7101ec8a84;
    }
    puVar7 = (uint *)0x0;
  }
LAB_7101ec8a84:
  uVar6 = 0;
  local_90 = puVar7 + 0x10e;
  local_a0 = puVar7;
  local_98 = puVar7;
  do {
    puVar16 = (&PTR_s_edit_stage_submenu_material_00_71050b2a68)[uVar6];
    uVar17 = 0;
    do {
      pbVar9 = puVar16 + uVar17;
      uVar12 = uVar17;
      if (*pbVar9 == 0) break;
      local_170[uVar17] = *pbVar9;
      if (pbVar9[1] == 0) {
        uVar12 = uVar17 + 1;
        break;
      }
      local_170[uVar17 + 1] = pbVar9[1];
      if (pbVar9[2] == 0) {
        uVar12 = uVar17 + 2;
        break;
      }
      uVar12 = uVar17 + 3;
      local_170[uVar17 + 2] = pbVar9[2];
      uVar17 = uVar12;
    } while ((uint)uVar12 < 0x3f);
    local_170[uVar12 & 0xffffffff] = 0;
    local_178 = (long ***)(uVar12 << 0x20);
    uVar15 = uVar2;
    pbVar9 = local_170 + 1;
    bVar1 = local_170[0];
    while (bVar1 != 0) {
      uVar15 = uVar15 * 0x89 ^ (uint)bVar1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    local_178 = (long ***)CONCAT44((int)uVar12,uVar15);
    if (local_b0 < local_a8) {
      uVar17 = 0;
      *local_b0 = 0;
      bVar1 = local_170[0];
      while (bVar1 != 0) {
        *(byte *)((long)local_b0 + uVar17 + 8) = bVar1;
        bVar1 = (local_170 + 1)[uVar17];
        if (bVar1 == 0) {
          uVar17 = uVar17 + 1;
          break;
        }
        *(byte *)((long)local_b0 + uVar17 + 9) = bVar1;
        if (local_170[uVar17 + 2] == 0) {
          uVar17 = uVar17 + 2;
          break;
        }
        *(byte *)((long)local_b0 + uVar17 + 10) = local_170[uVar17 + 2];
        if (0x3e < (int)uVar17 + 3U) {
          uVar17 = (ulong)((int)uVar17 + 3);
          break;
        }
        lVar10 = uVar17 + 3;
        uVar17 = uVar17 + 3;
        bVar1 = local_170[lVar10];
      }
      *(undefined1 *)((long)local_b0 + (uVar17 & 0xffffffff) + 8) = 0;
      local_b0[1] = (uint)uVar17;
      uVar14 = (uint)(byte)local_b0[2];
      uVar15 = uVar2;
      if ((byte)local_b0[2] != 0) {
        pbVar9 = (byte *)((long)local_b0 + 9);
        do {
          uVar15 = uVar15 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (uVar14 != 0);
      }
      *local_b0 = uVar15;
      local_b0 = local_b0 + 0x12;
    }
    else {
      FUN_71019c1c50((ulong *)&local_b8,(long)&local_178,pppplVar8,param_4,param_5,param_6,param_7,
                     param_8);
    }
    FUN_71003a4ca0((uint *)&local_178,"mnu_stgcreate_edit_material_%02d",uVar6 & 0xffffffff,
                   pppplVar8,param_4,param_5,param_6,param_7,param_8);
    if (local_98 < local_90) {
      *local_98 = 0;
      uVar17 = 0;
      do {
        uVar12 = uVar17;
        if (local_170[uVar17] == 0) break;
        *(byte *)((long)local_98 + uVar17 + 8) = local_170[uVar17];
        if (local_170[uVar17 + 1] == 0) {
          uVar12 = uVar17 + 1;
          break;
        }
        *(byte *)((long)local_98 + uVar17 + 9) = local_170[uVar17 + 1];
        if (local_170[uVar17 + 2] == 0) {
          uVar12 = uVar17 + 2;
          break;
        }
        uVar12 = uVar17 + 3;
        *(byte *)((long)local_98 + uVar17 + 10) = local_170[uVar17 + 2];
        uVar17 = uVar12;
      } while ((uint)uVar12 < 0x3f);
      *(undefined1 *)((long)local_98 + (uVar12 & 0xffffffff) + 8) = 0;
      local_98[1] = (uint)uVar12;
      uVar14 = (uint)(byte)local_98[2];
      uVar15 = uVar2;
      if ((byte)local_98[2] != 0) {
        pbVar9 = (byte *)((long)local_98 + 9);
        do {
          uVar15 = uVar15 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (uVar14 != 0);
      }
      *local_98 = uVar15;
      local_98 = local_98 + 0x12;
    }
    else {
      FUN_71019c1c50((ulong *)&local_a0,(long)&local_178,pppplVar8,param_4,param_5,param_6,param_7,
                     param_8);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0xf);
  FUN_7101ec9fa0((long)param_1,0,(long ****)&local_100,param_4,param_5,param_6,param_7,param_8);
  local_170[8] = 0x69;
  local_170[9] = 99;
  local_170[10] = 0x6e;
  local_170[0xb] = 0x5f;
  local_170[0xc] = 0x30;
  local_170[0xd] = 0x30;
  lVar10 = 9;
  local_178 = (long ***)0xe00000000;
  local_170[0] = 0x73;
  local_170[1] = 0x65;
  local_170[2] = 0x74;
  local_170[3] = 0x5f;
  local_170[4] = 0x72;
  local_170[5] = 0x65;
  local_170[6] = 0x70;
  local_170[7] = 0x5f;
  local_110 = (uint *)0x0;
  local_108 = (uint *)0x0;
  local_170[0xe] = 0;
  local_120 = (uint *)0x0;
  local_118 = (uint *)0x0;
  local_130 = (uint *)0x0;
  local_128 = (uint *)0x0;
  uVar15 = uVar2;
  do {
    uVar15 = uVar15 * 0x89 ^ uVar22;
    uVar22 = (uint)*(byte *)((long)&local_178 + lVar10);
    lVar10 = lVar10 + 1;
  } while (uVar22 != 0);
  local_178 = (long ***)CONCAT44(0xe,uVar15);
  FUN_7101ec9fa0((long)param_1,2,(long ****)&local_178,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ec9fa0((long)param_1,3,(long ****)&local_178,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ec9fa0((long)param_1,4,(long ****)&local_178,param_4,param_5,param_6,param_7,param_8);
  pppplVar8 = (long ****)&local_178;
  FUN_7101ec9fa0((long)param_1,6,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  local_128 = local_130;
  FUN_7101ec36d0((ulong *)&local_130,extraout_x1,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  local_110 = local_118;
  FUN_7101ec36d0((ulong *)&local_118,extraout_x1_00,pppplVar8,param_4,param_5,param_6,param_7,
                 param_8);
  puVar7 = local_128;
  puVar5 = local_130;
  if ((ulong)(((long)local_120 - (long)local_130 >> 3) * -0x71c71c71c71c71c7) < 4) {
    lVar11 = (long)local_128 - (long)local_130;
    lVar10 = FUN_710392e290(0x10,0x120,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    if (lVar10 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        local_1c0 = (long ***)&DAT_00000120;
        pppplVar8 = &local_1c0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar6 & 1) != 0) &&
           (lVar10 = FUN_710392e290(0x10,0x120,pppplVar8,param_4,param_5,param_6,param_7,param_8),
           lVar10 != 0)) goto LAB_7101ec8e58;
      }
      lVar10 = 0;
    }
LAB_7101ec8e58:
    local_128 = (uint *)(lVar10 + (lVar11 >> 3) * 8);
    puVar18 = local_128;
    puVar4 = puVar5;
    while (puVar7 != puVar5) {
      puVar18[-0x12] = 0;
      uVar6 = 0;
      do {
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x40));
        uVar17 = uVar6;
        if (cVar20 == '\0') break;
        *(char *)((long)puVar18 + (uVar6 - 0x40)) = cVar20;
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x3f));
        if (cVar20 == '\0') {
          uVar17 = uVar6 + 1;
          break;
        }
        *(char *)((long)puVar18 + (uVar6 - 0x3f)) = cVar20;
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x3e));
        if (cVar20 == '\0') {
          uVar17 = uVar6 + 2;
          break;
        }
        uVar17 = uVar6 + 3;
        *(char *)((long)puVar18 + (uVar6 - 0x3e)) = cVar20;
        uVar6 = uVar17;
      } while ((uint)uVar17 < 0x3f);
      *(undefined1 *)((long)puVar18 + ((uVar17 & 0xffffffff) - 0x40)) = 0;
      uVar14 = (uint)(byte)puVar18[-0x10];
      puVar18[-0x11] = (uint)uVar17;
      uVar15 = uVar2;
      if ((byte)puVar18[-0x10] != 0) {
        lVar11 = -0x3f;
        do {
          uVar15 = uVar15 * 0x89 ^ uVar14;
          uVar14 = (uint)*(byte *)((long)puVar18 + lVar11);
          lVar11 = lVar11 + 1;
        } while (uVar14 != 0);
      }
      puVar18 = puVar18 + -0x12;
      *puVar18 = uVar15;
      puVar4 = local_130;
      puVar7 = puVar7 + -0x12;
    }
    local_130 = puVar18;
    local_120 = (uint *)(lVar10 + 0x120);
    if (puVar4 != (uint *)0x0) {
      FUN_710392eb40((ulong)puVar4);
    }
  }
  for (uVar6 = 0; "edit_stage_draw_free"[uVar6] != 0; uVar6 = uVar6 + 2) {
    bVar1 = "edit_stage_draw_free"[uVar6 + 1];
    local_1b8[uVar6] = "edit_stage_draw_free"[uVar6];
    if (bVar1 == 0) {
      uVar6 = uVar6 + 1;
      break;
    }
    local_1b8[uVar6 + 1] = bVar1;
  }
  local_1b8[uVar6 & 0xffffffff] = 0;
  uVar14 = (uint)local_1b8[0];
  uVar15 = uVar2;
  if (uVar14 != 0) {
    pbVar9 = local_1b8;
    do {
      pbVar9 = pbVar9 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar9;
    } while (uVar14 != 0);
  }
  local_1c0 = (long ***)CONCAT44((int)uVar6,uVar15);
  if (local_128 < local_120) {
    uVar6 = 0;
    *local_128 = 0;
    bVar1 = local_1b8[0];
    while (bVar1 != 0) {
      *(byte *)((long)local_128 + uVar6 + 8) = bVar1;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_1b8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      *(byte *)((long)local_128 + uVar6 + 9) = local_1b8[uVar6 + 1];
      lVar10 = uVar6 + 2;
      uVar6 = uVar6 + 2;
      bVar1 = local_1b8[lVar10];
    }
    *(undefined1 *)((long)local_128 + (uVar6 & 0xffffffff) + 8) = 0;
    uVar14 = (uint)(byte)local_128[2];
    local_128[1] = (uint)uVar6;
    uVar15 = uVar2;
    if ((byte)local_128[2] != 0) {
      pbVar9 = (byte *)((long)local_128 + 9);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *local_128 = uVar15;
    local_128 = local_128 + 0x12;
  }
  else {
    FUN_71019c1c50((ulong *)&local_130,(long)&local_1c0,pppplVar8,param_4,param_5,param_6,param_7,
                   param_8);
  }
  for (uVar6 = 0; "edit_stage_draw_oval"[uVar6] != 0; uVar6 = uVar6 + 2) {
    bVar1 = "edit_stage_draw_oval"[uVar6 + 1];
    local_1b8[uVar6] = "edit_stage_draw_oval"[uVar6];
    if (bVar1 == 0) {
      uVar6 = uVar6 + 1;
      break;
    }
    local_1b8[uVar6 + 1] = bVar1;
  }
  local_1b8[uVar6 & 0xffffffff] = 0;
  uVar14 = (uint)local_1b8[0];
  uVar15 = uVar2;
  if (uVar14 != 0) {
    pbVar9 = local_1b8;
    do {
      pbVar9 = pbVar9 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar9;
    } while (uVar14 != 0);
  }
  local_1c0 = (long ***)CONCAT44((int)uVar6,uVar15);
  if (local_128 < local_120) {
    uVar6 = 0;
    *local_128 = 0;
    bVar1 = local_1b8[0];
    while (bVar1 != 0) {
      *(byte *)((long)local_128 + uVar6 + 8) = bVar1;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_1b8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      *(byte *)((long)local_128 + uVar6 + 9) = local_1b8[uVar6 + 1];
      lVar10 = uVar6 + 2;
      uVar6 = uVar6 + 2;
      bVar1 = local_1b8[lVar10];
    }
    *(undefined1 *)((long)local_128 + (uVar6 & 0xffffffff) + 8) = 0;
    uVar14 = (uint)(byte)local_128[2];
    local_128[1] = (uint)uVar6;
    uVar15 = uVar2;
    if ((byte)local_128[2] != 0) {
      pbVar9 = (byte *)((long)local_128 + 9);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *local_128 = uVar15;
    local_128 = local_128 + 0x12;
  }
  else {
    FUN_71019c1c50((ulong *)&local_130,(long)&local_1c0,pppplVar8,param_4,param_5,param_6,param_7,
                   param_8);
  }
  for (uVar6 = 0; "edit_stage_draw_quadrangle"[uVar6] != 0; uVar6 = uVar6 + 2) {
    bVar1 = "edit_stage_draw_quadrangle"[uVar6 + 1];
    local_1b8[uVar6] = "edit_stage_draw_quadrangle"[uVar6];
    if (bVar1 == 0) {
      uVar6 = uVar6 + 1;
      break;
    }
    local_1b8[uVar6 + 1] = bVar1;
  }
  local_1b8[uVar6 & 0xffffffff] = 0;
  uVar14 = (uint)local_1b8[0];
  uVar15 = uVar2;
  if (uVar14 != 0) {
    pbVar9 = local_1b8;
    do {
      pbVar9 = pbVar9 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar9;
    } while (uVar14 != 0);
  }
  local_1c0 = (long ***)CONCAT44((int)uVar6,uVar15);
  if (local_128 < local_120) {
    uVar6 = 0;
    *local_128 = 0;
    bVar1 = local_1b8[0];
    while (bVar1 != 0) {
      *(byte *)((long)local_128 + uVar6 + 8) = bVar1;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_1b8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      *(byte *)((long)local_128 + uVar6 + 9) = local_1b8[uVar6 + 1];
      lVar10 = uVar6 + 2;
      uVar6 = uVar6 + 2;
      bVar1 = local_1b8[lVar10];
    }
    *(undefined1 *)((long)local_128 + (uVar6 & 0xffffffff) + 8) = 0;
    uVar14 = (uint)(byte)local_128[2];
    local_128[1] = (uint)uVar6;
    uVar15 = uVar2;
    if ((byte)local_128[2] != 0) {
      pbVar9 = (byte *)((long)local_128 + 9);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *local_128 = uVar15;
    local_128 = local_128 + 0x12;
  }
  else {
    FUN_71019c1c50((ulong *)&local_130,(long)&local_1c0,pppplVar8,param_4,param_5,param_6,param_7,
                   param_8);
  }
  for (uVar6 = 0; "edit_stage_draw_change"[uVar6] != 0; uVar6 = uVar6 + 2) {
    bVar1 = "edit_stage_draw_change"[uVar6 + 1];
    local_1b8[uVar6] = "edit_stage_draw_change"[uVar6];
    if (bVar1 == 0) {
      uVar6 = uVar6 + 1;
      break;
    }
    local_1b8[uVar6 + 1] = bVar1;
  }
  local_1b8[uVar6 & 0xffffffff] = 0;
  uVar14 = (uint)local_1b8[0];
  uVar15 = uVar2;
  if (uVar14 != 0) {
    pbVar9 = local_1b8;
    do {
      pbVar9 = pbVar9 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar9;
    } while (uVar14 != 0);
  }
  local_1c0 = (long ***)CONCAT44((int)uVar6,uVar15);
  if (local_128 < local_120) {
    uVar6 = 0;
    *local_128 = 0;
    bVar1 = local_1b8[0];
    while (bVar1 != 0) {
      *(byte *)((long)local_128 + uVar6 + 8) = bVar1;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_1b8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      *(byte *)((long)local_128 + uVar6 + 9) = local_1b8[uVar6 + 1];
      lVar10 = uVar6 + 2;
      uVar6 = uVar6 + 2;
      bVar1 = local_1b8[lVar10];
    }
    *(undefined1 *)((long)local_128 + (uVar6 & 0xffffffff) + 8) = 0;
    uVar14 = (uint)(byte)local_128[2];
    local_128[1] = (uint)uVar6;
    uVar15 = uVar2;
    if ((byte)local_128[2] != 0) {
      pbVar9 = (byte *)((long)local_128 + 9);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *local_128 = uVar15;
    local_128 = local_128 + 0x12;
  }
  else {
    FUN_71019c1c50((ulong *)&local_130,(long)&local_1c0,pppplVar8,param_4,param_5,param_6,param_7,
                   param_8);
  }
  pppplVar8 = (long ****)&local_178;
  FUN_7101ec9fa0((long)param_1,1,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  local_128 = local_130;
  FUN_7101ec36d0((ulong *)&local_130,extraout_x1_01,pppplVar8,param_4,param_5,param_6,param_7,
                 param_8);
  local_110 = local_118;
  FUN_7101ec36d0((ulong *)&local_118,extraout_x1_02,pppplVar8,param_4,param_5,param_6,param_7,
                 param_8);
  puVar7 = local_128;
  puVar5 = local_130;
  if ((ulong)(((long)local_120 - (long)local_130 >> 3) * -0x71c71c71c71c71c7) < 3) {
    lVar11 = (long)local_128 - (long)local_130;
    lVar10 = FUN_710392e290(0x10,0xd8,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    if (lVar10 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        local_1c0 = (long ***)&DAT_000000d8;
        pppplVar8 = &local_1c0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar6 & 1) != 0) &&
           (lVar10 = FUN_710392e290(0x10,0xd8,pppplVar8,param_4,param_5,param_6,param_7,param_8),
           lVar10 != 0)) goto LAB_7101ec94d4;
      }
      lVar10 = 0;
    }
LAB_7101ec94d4:
    local_128 = (uint *)(lVar10 + (lVar11 >> 3) * 8);
    puVar18 = local_128;
    puVar4 = puVar5;
    while (puVar7 != puVar5) {
      puVar18[-0x12] = 0;
      uVar6 = 0;
      do {
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x40));
        uVar17 = uVar6;
        if (cVar20 == '\0') break;
        *(char *)((long)puVar18 + (uVar6 - 0x40)) = cVar20;
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x3f));
        if (cVar20 == '\0') {
          uVar17 = uVar6 + 1;
          break;
        }
        *(char *)((long)puVar18 + (uVar6 - 0x3f)) = cVar20;
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x3e));
        if (cVar20 == '\0') {
          uVar17 = uVar6 + 2;
          break;
        }
        uVar17 = uVar6 + 3;
        *(char *)((long)puVar18 + (uVar6 - 0x3e)) = cVar20;
        uVar6 = uVar17;
      } while ((uint)uVar17 < 0x3f);
      *(undefined1 *)((long)puVar18 + ((uVar17 & 0xffffffff) - 0x40)) = 0;
      uVar14 = (uint)(byte)puVar18[-0x10];
      puVar18[-0x11] = (uint)uVar17;
      uVar15 = uVar2;
      if ((byte)puVar18[-0x10] != 0) {
        lVar11 = -0x3f;
        do {
          uVar15 = uVar15 * 0x89 ^ uVar14;
          uVar14 = (uint)*(byte *)((long)puVar18 + lVar11);
          lVar11 = lVar11 + 1;
        } while (uVar14 != 0);
      }
      puVar18 = puVar18 + -0x12;
      *puVar18 = uVar15;
      puVar4 = local_130;
      puVar7 = puVar7 + -0x12;
    }
    local_130 = puVar18;
    local_120 = (uint *)(lVar10 + 0xd8);
    if (puVar4 != (uint *)0x0) {
      FUN_710392eb40((ulong)puVar4);
    }
  }
  for (uVar6 = 0; "edit_stage_rail_free"[uVar6] != 0; uVar6 = uVar6 + 2) {
    bVar1 = "edit_stage_rail_free"[uVar6 + 1];
    local_1b8[uVar6] = "edit_stage_rail_free"[uVar6];
    if (bVar1 == 0) {
      uVar6 = uVar6 + 1;
      break;
    }
    local_1b8[uVar6 + 1] = bVar1;
  }
  local_1b8[uVar6 & 0xffffffff] = 0;
  uVar14 = (uint)local_1b8[0];
  uVar15 = uVar2;
  if (uVar14 != 0) {
    pbVar9 = local_1b8;
    do {
      pbVar9 = pbVar9 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar9;
    } while (uVar14 != 0);
  }
  local_1c0 = (long ***)CONCAT44((int)uVar6,uVar15);
  if (local_128 < local_120) {
    uVar6 = 0;
    *local_128 = 0;
    bVar1 = local_1b8[0];
    while (bVar1 != 0) {
      *(byte *)((long)local_128 + uVar6 + 8) = bVar1;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_1b8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      *(byte *)((long)local_128 + uVar6 + 9) = local_1b8[uVar6 + 1];
      lVar10 = uVar6 + 2;
      uVar6 = uVar6 + 2;
      bVar1 = local_1b8[lVar10];
    }
    *(undefined1 *)((long)local_128 + (uVar6 & 0xffffffff) + 8) = 0;
    uVar14 = (uint)(byte)local_128[2];
    local_128[1] = (uint)uVar6;
    uVar15 = uVar2;
    if ((byte)local_128[2] != 0) {
      pbVar9 = (byte *)((long)local_128 + 9);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *local_128 = uVar15;
    local_128 = local_128 + 0x12;
  }
  else {
    FUN_71019c1c50((ulong *)&local_130,(long)&local_1c0,pppplVar8,param_4,param_5,param_6,param_7,
                   param_8);
  }
  for (uVar6 = 0; "edit_stage_rail_oval"[uVar6] != 0; uVar6 = uVar6 + 2) {
    bVar1 = "edit_stage_rail_oval"[uVar6 + 1];
    local_1b8[uVar6] = "edit_stage_rail_oval"[uVar6];
    if (bVar1 == 0) {
      uVar6 = uVar6 + 1;
      break;
    }
    local_1b8[uVar6 + 1] = bVar1;
  }
  local_1b8[uVar6 & 0xffffffff] = 0;
  uVar14 = (uint)local_1b8[0];
  uVar15 = uVar2;
  if (uVar14 != 0) {
    pbVar9 = local_1b8;
    do {
      pbVar9 = pbVar9 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar9;
    } while (uVar14 != 0);
  }
  local_1c0 = (long ***)CONCAT44((int)uVar6,uVar15);
  if (local_128 < local_120) {
    uVar6 = 0;
    *local_128 = 0;
    bVar1 = local_1b8[0];
    while (bVar1 != 0) {
      *(byte *)((long)local_128 + uVar6 + 8) = bVar1;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_1b8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      *(byte *)((long)local_128 + uVar6 + 9) = local_1b8[uVar6 + 1];
      lVar10 = uVar6 + 2;
      uVar6 = uVar6 + 2;
      bVar1 = local_1b8[lVar10];
    }
    *(undefined1 *)((long)local_128 + (uVar6 & 0xffffffff) + 8) = 0;
    uVar14 = (uint)(byte)local_128[2];
    local_128[1] = (uint)uVar6;
    uVar15 = uVar2;
    if ((byte)local_128[2] != 0) {
      pbVar9 = (byte *)((long)local_128 + 9);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *local_128 = uVar15;
    local_128 = local_128 + 0x12;
  }
  else {
    FUN_71019c1c50((ulong *)&local_130,(long)&local_1c0,pppplVar8,param_4,param_5,param_6,param_7,
                   param_8);
  }
  for (uVar6 = 0; "edit_stage_rail_quadrangle"[uVar6] != 0; uVar6 = uVar6 + 2) {
    bVar1 = "edit_stage_rail_quadrangle"[uVar6 + 1];
    local_1b8[uVar6] = "edit_stage_rail_quadrangle"[uVar6];
    if (bVar1 == 0) {
      uVar6 = uVar6 + 1;
      break;
    }
    local_1b8[uVar6 + 1] = bVar1;
  }
  local_1b8[uVar6 & 0xffffffff] = 0;
  uVar14 = (uint)local_1b8[0];
  uVar15 = uVar2;
  if (uVar14 != 0) {
    pbVar9 = local_1b8;
    do {
      pbVar9 = pbVar9 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar9;
    } while (uVar14 != 0);
  }
  local_1c0 = (long ***)CONCAT44((int)uVar6,uVar15);
  if (local_128 < local_120) {
    uVar6 = 0;
    *local_128 = 0;
    bVar1 = local_1b8[0];
    while (bVar1 != 0) {
      *(byte *)((long)local_128 + uVar6 + 8) = bVar1;
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_1b8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      *(byte *)((long)local_128 + uVar6 + 9) = local_1b8[uVar6 + 1];
      lVar10 = uVar6 + 2;
      uVar6 = uVar6 + 2;
      bVar1 = local_1b8[lVar10];
    }
    *(undefined1 *)((long)local_128 + (uVar6 & 0xffffffff) + 8) = 0;
    uVar14 = (uint)(byte)local_128[2];
    local_128[1] = (uint)uVar6;
    uVar15 = uVar2;
    if ((byte)local_128[2] != 0) {
      pbVar9 = (byte *)((long)local_128 + 9);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar14 != 0);
    }
    *local_128 = uVar15;
    local_128 = local_128 + 0x12;
  }
  else {
    FUN_71019c1c50((ulong *)&local_130,(long)&local_1c0,pppplVar8,param_4,param_5,param_6,param_7,
                   param_8);
  }
  pppplVar8 = (long ****)&local_178;
  FUN_7101ec9fa0((long)param_1,5,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  local_128 = local_130;
  FUN_7101ec36d0((ulong *)&local_130,extraout_x1_03,pppplVar8,param_4,param_5,param_6,param_7,
                 param_8);
  local_110 = local_118;
  FUN_7101ec36d0((ulong *)&local_118,extraout_x1_04,pppplVar8,param_4,param_5,param_6,param_7,
                 param_8);
  puVar7 = local_128;
  puVar5 = local_130;
  if ((ulong)(((long)local_120 - (long)local_130 >> 3) * -0x71c71c71c71c71c7) < 8) {
    lVar11 = (long)local_128 - (long)local_130;
    lVar10 = FUN_710392e290(0x10,0x240,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    if (lVar10 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        local_1c0 = (long ***)0x240;
        pppplVar8 = &local_1c0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar6 & 1) != 0) &&
           (lVar10 = FUN_710392e290(0x10,0x240,pppplVar8,param_4,param_5,param_6,param_7,param_8),
           lVar10 != 0)) goto LAB_7101ec9a10;
      }
      lVar10 = 0;
    }
LAB_7101ec9a10:
    local_128 = (uint *)(lVar10 + (lVar11 >> 3) * 8);
    puVar18 = local_128;
    puVar4 = puVar5;
    while (puVar7 != puVar5) {
      puVar18[-0x12] = 0;
      uVar6 = 0;
      do {
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x40));
        uVar17 = uVar6;
        if (cVar20 == '\0') break;
        *(char *)((long)puVar18 + (uVar6 - 0x40)) = cVar20;
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x3f));
        if (cVar20 == '\0') {
          uVar17 = uVar6 + 1;
          break;
        }
        *(char *)((long)puVar18 + (uVar6 - 0x3f)) = cVar20;
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x3e));
        if (cVar20 == '\0') {
          uVar17 = uVar6 + 2;
          break;
        }
        uVar17 = uVar6 + 3;
        *(char *)((long)puVar18 + (uVar6 - 0x3e)) = cVar20;
        uVar6 = uVar17;
      } while ((uint)uVar17 < 0x3f);
      *(undefined1 *)((long)puVar18 + ((uVar17 & 0xffffffff) - 0x40)) = 0;
      uVar14 = (uint)(byte)puVar18[-0x10];
      puVar18[-0x11] = (uint)uVar17;
      uVar15 = uVar2;
      if ((byte)puVar18[-0x10] != 0) {
        lVar11 = -0x3f;
        do {
          uVar15 = uVar15 * 0x89 ^ uVar14;
          uVar14 = (uint)*(byte *)((long)puVar18 + lVar11);
          lVar11 = lVar11 + 1;
        } while (uVar14 != 0);
      }
      puVar18 = puVar18 + -0x12;
      *puVar18 = uVar15;
      puVar4 = local_130;
      puVar7 = puVar7 + -0x12;
    }
    local_130 = puVar18;
    local_120 = (uint *)(lVar10 + 0x240);
    if (puVar4 != (uint *)0x0) {
      FUN_710392eb40((ulong)puVar4);
    }
  }
  puVar7 = local_110;
  puVar5 = local_118;
  if ((ulong)(((long)local_108 - (long)local_118 >> 3) * -0x71c71c71c71c71c7) < 8) {
    lVar11 = (long)local_110 - (long)local_118;
    lVar10 = FUN_710392e290(0x10,0x240,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    if (lVar10 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        local_1c0 = (long ***)0x240;
        pppplVar8 = &local_1c0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar6 & 1) != 0) &&
           (lVar10 = FUN_710392e290(0x10,0x240,pppplVar8,param_4,param_5,param_6,param_7,param_8),
           lVar10 != 0)) goto LAB_7101ec9b5c;
      }
      lVar10 = 0;
    }
LAB_7101ec9b5c:
    local_110 = (uint *)(lVar10 + (lVar11 >> 3) * 8);
    puVar18 = local_110;
    puVar4 = puVar5;
    while (puVar7 != puVar5) {
      puVar18[-0x12] = 0;
      uVar6 = 0;
      do {
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x40));
        uVar17 = uVar6;
        if (cVar20 == '\0') break;
        *(char *)((long)puVar18 + (uVar6 - 0x40)) = cVar20;
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x3f));
        if (cVar20 == '\0') {
          uVar17 = uVar6 + 1;
          break;
        }
        *(char *)((long)puVar18 + (uVar6 - 0x3f)) = cVar20;
        cVar20 = *(char *)((long)puVar7 + (uVar6 - 0x3e));
        if (cVar20 == '\0') {
          uVar17 = uVar6 + 2;
          break;
        }
        uVar17 = uVar6 + 3;
        *(char *)((long)puVar18 + (uVar6 - 0x3e)) = cVar20;
        uVar6 = uVar17;
      } while ((uint)uVar17 < 0x3f);
      *(undefined1 *)((long)puVar18 + ((uVar17 & 0xffffffff) - 0x40)) = 0;
      uVar14 = (uint)(byte)puVar18[-0x10];
      puVar18[-0x11] = (uint)uVar17;
      uVar15 = uVar2;
      if ((byte)puVar18[-0x10] != 0) {
        lVar11 = -0x3f;
        do {
          uVar15 = uVar15 * 0x89 ^ uVar14;
          uVar14 = (uint)*(byte *)((long)puVar18 + lVar11);
          lVar11 = lVar11 + 1;
        } while (uVar14 != 0);
      }
      puVar18 = puVar18 + -0x12;
      *puVar18 = uVar15;
      puVar4 = local_118;
      puVar7 = puVar7 + -0x12;
    }
    local_118 = puVar18;
    local_108 = (uint *)(lVar10 + 0x240);
    if (puVar4 != (uint *)0x0) {
      FUN_710392eb40((ulong)puVar4);
    }
  }
  uVar6 = 0;
  do {
    puVar16 = (&PTR_s_edit_stage_accesory_cannon_71050b2b18)[uVar6];
    uVar17 = 0;
    do {
      pbVar9 = puVar16 + uVar17;
      uVar12 = uVar17;
      if (*pbVar9 == 0) break;
      local_1b8[uVar17] = *pbVar9;
      if (pbVar9[1] == 0) {
        uVar12 = uVar17 + 1;
        break;
      }
      local_1b8[uVar17 + 1] = pbVar9[1];
      if (pbVar9[2] == 0) {
        uVar12 = uVar17 + 2;
        break;
      }
      uVar12 = uVar17 + 3;
      local_1b8[uVar17 + 2] = pbVar9[2];
      uVar17 = uVar12;
    } while ((uint)uVar12 < 0x3f);
    local_1b8[uVar12 & 0xffffffff] = 0;
    uVar15 = uVar2;
    pbVar9 = local_1b8 + 1;
    bVar1 = local_1b8[0];
    while (bVar1 != 0) {
      uVar15 = uVar15 * 0x89 ^ (uint)bVar1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    local_1c0 = (long ***)CONCAT44((int)uVar12,uVar15);
    if (local_128 < local_120) {
      uVar17 = 0;
      *local_128 = 0;
      bVar1 = local_1b8[0];
      while (bVar1 != 0) {
        *(byte *)((long)local_128 + uVar17 + 8) = bVar1;
        bVar1 = (local_1b8 + 1)[uVar17];
        if (bVar1 == 0) {
          uVar17 = uVar17 + 1;
          break;
        }
        *(byte *)((long)local_128 + uVar17 + 9) = bVar1;
        if (local_1b8[uVar17 + 2] == 0) {
          uVar17 = uVar17 + 2;
          break;
        }
        *(byte *)((long)local_128 + uVar17 + 10) = local_1b8[uVar17 + 2];
        if (0x3e < (int)uVar17 + 3U) {
          uVar17 = (ulong)((int)uVar17 + 3);
          break;
        }
        lVar10 = uVar17 + 3;
        uVar17 = uVar17 + 3;
        bVar1 = local_1b8[lVar10];
      }
      *(undefined1 *)((long)local_128 + (uVar17 & 0xffffffff) + 8) = 0;
      local_128[1] = (uint)uVar17;
      uVar14 = (uint)(byte)local_128[2];
      uVar15 = uVar2;
      if ((byte)local_128[2] != 0) {
        pbVar9 = (byte *)((long)local_128 + 9);
        do {
          uVar15 = uVar15 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (uVar14 != 0);
      }
      *local_128 = uVar15;
      local_128 = local_128 + 0x12;
    }
    else {
      FUN_71019c1c50((ulong *)&local_130,(long)&local_1c0,pppplVar8,param_4,param_5,param_6,param_7,
                     param_8);
    }
    FUN_71003a4ca0((uint *)&local_1c0,"mnu_stgcreate_edit_gmck_%02d",uVar6 & 0xffffffff,pppplVar8,
                   param_4,param_5,param_6,param_7,param_8);
    if (local_110 < local_108) {
      *local_110 = 0;
      uVar17 = 0;
      do {
        uVar12 = uVar17;
        if (local_1b8[uVar17] == 0) break;
        *(byte *)((long)local_110 + uVar17 + 8) = local_1b8[uVar17];
        if (local_1b8[uVar17 + 1] == 0) {
          uVar12 = uVar17 + 1;
          break;
        }
        *(byte *)((long)local_110 + uVar17 + 9) = local_1b8[uVar17 + 1];
        if (local_1b8[uVar17 + 2] == 0) {
          uVar12 = uVar17 + 2;
          break;
        }
        uVar12 = uVar17 + 3;
        *(byte *)((long)local_110 + uVar17 + 10) = local_1b8[uVar17 + 2];
        uVar17 = uVar12;
      } while ((uint)uVar12 < 0x3f);
      *(undefined1 *)((long)local_110 + (uVar12 & 0xffffffff) + 8) = 0;
      local_110[1] = (uint)uVar12;
      uVar14 = (uint)(byte)local_110[2];
      uVar15 = uVar2;
      if ((byte)local_110[2] != 0) {
        pbVar9 = (byte *)((long)local_110 + 9);
        do {
          uVar15 = uVar15 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (uVar14 != 0);
      }
      *local_110 = uVar15;
      local_110 = local_110 + 0x12;
    }
    else {
      FUN_71019c1c50((ulong *)&local_118,(long)&local_1c0,pppplVar8,param_4,param_5,param_6,param_7,
                     param_8);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 8);
  FUN_7101ec9fa0((long)param_1,7,(long ****)&local_178,param_4,param_5,param_6,param_7,param_8);
  plVar13 = param_1 + 4;
  plVar19 = (long *)*plVar13;
  plVar21 = plVar13;
  if (plVar19 != (long *)0x0) {
    do {
      if (2 < (int)plVar19[4]) {
        plVar21 = plVar19;
      }
      plVar19 = (long *)plVar19[(int)plVar19[4] < 3];
    } while (plVar19 != (long *)0x0);
    if ((plVar21 != plVar13) && ((int)plVar21[4] < 4)) goto LAB_7101ec9ecc;
  }
  plVar21 = plVar13;
LAB_7101ec9ecc:
  lVar10 = plVar21[5];
  lVar11 = plVar21[6];
  if (lVar11 != 0) {
    plVar21 = (long *)(lVar11 + 8);
    do {
      cVar20 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
  }
  plVar21 = (long *)param_1[10];
  param_1[9] = lVar10;
  param_1[10] = lVar11;
  if (plVar21 != (long *)0x0) {
    plVar13 = plVar21 + 1;
    do {
      lVar10 = *plVar13;
      cVar20 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar10 + -1;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_118 != (uint *)0x0) {
    local_110 = local_118;
    FUN_710392eb40((ulong)local_118);
  }
  if (local_130 != (uint *)0x0) {
    local_128 = local_130;
    FUN_710392eb40((ulong)local_130);
  }
  if (local_a0 != (uint *)0x0) {
    local_98 = local_a0;
    FUN_710392eb40((ulong)local_a0);
  }
  if (local_b8 != (uint *)0x0) {
    local_b0 = local_b8;
    FUN_710392eb40((ulong)local_b8);
  }
  if (local_88 != (long ***)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  return;
}

