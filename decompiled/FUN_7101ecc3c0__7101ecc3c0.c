// addr:      7101ecc3c0
// offset:    0x1ecc3c0
// name:      FUN_7101ecc3c0
// mangled:   
// signature: undefined __cdecl FUN_7101ecc3c0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101ecc590) */

void FUN_7101ecc3c0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  undefined **local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ushort local_a8;
  uint local_a6;
  undefined2 local_a2;
  undefined1 local_a0;
  undefined8 local_78;
  uint *local_70;
  uint *local_68;
  
  puVar2 = (uint *)FUN_710392e290(0x10,0x2d0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar2 == (uint *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_78 = (uint *)((ulong)local_78._4_4_ << 0x20);
      local_c0 = (undefined **)0x2d0;
      param_3 = (long ****)&local_c0;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (uint *)FUN_710392e290(0x10,0x2d0,param_3,param_4,param_5,param_6,param_7,param_8
                                         ), puVar2 != (uint *)0x0)) goto LAB_7101ecc438;
    }
    puVar2 = (uint *)0x0;
  }
LAB_7101ecc438:
  local_68 = puVar2 + 0xb4;
  uVar13 = 0x811c9dc5;
  local_b8 = 0x5f6e74625f746573;
  local_b0 = CONCAT35(local_b0._5_3_,0x64697267);
  local_78 = puVar2;
  local_70 = puVar2;
  pcVar7 = (char *)((long)&local_b8 + 1);
  do {
    cVar12 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar12 != '\0');
  uVar3 = 0;
  cVar12 = 's';
  *puVar2 = 0;
  do {
    *(char *)((long)puVar2 + uVar3 + 8) = cVar12;
    if (0x3e < (int)uVar3 + 1U) {
      uVar3 = (ulong)((int)uVar3 + 1);
      break;
    }
    cVar12 = *(char *)((long)&local_b8 + uVar3 + 1);
    uVar3 = uVar3 + 1;
  } while (cVar12 != '\0');
  *(undefined1 *)((long)puVar2 + (uVar3 & 0xffffffff) + 8) = 0;
  uVar6 = (uint)(byte)puVar2[2];
  puVar2[1] = (uint)uVar3;
  uVar11 = uVar13;
  if ((byte)puVar2[2] != 0) {
    pbVar9 = (byte *)((long)puVar2 + 9);
    do {
      uVar11 = uVar11 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (uVar6 != 0);
  }
  local_70 = puVar2 + 0x12;
  *puVar2 = uVar11;
  local_b8 = 0x5f6e74625f746573;
  local_b0 = 0x6c6f63726579616c;
  local_a8 = 0x726f;
  local_a6 = local_a6 & 0xffffff00;
  pcVar7 = (char *)((long)&local_b8 + 1);
  do {
    cVar12 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar12 != '\0');
  uVar3 = 0;
  cVar12 = 's';
  *local_70 = 0;
  do {
    *(char *)((long)puVar2 + uVar3 + 0x50) = cVar12;
    if (0x3e < (int)uVar3 + 1U) {
      uVar3 = (ulong)((int)uVar3 + 1);
      break;
    }
    cVar12 = *(char *)((long)&local_b8 + uVar3 + 1);
    if (cVar12 == '\0') {
      uVar3 = uVar3 + 1;
      break;
    }
    *(char *)((long)puVar2 + uVar3 + 0x51) = cVar12;
    cVar12 = *(char *)((long)&local_b8 + uVar3 + 2);
    uVar3 = uVar3 + 2;
  } while (cVar12 != '\0');
  *(undefined1 *)((long)local_70 + (uVar3 & 0xffffffff) + 8) = 0;
  uVar6 = (uint)(byte)puVar2[0x14];
  puVar2[0x13] = (uint)uVar3;
  uVar11 = uVar13;
  if ((byte)puVar2[0x14] != 0) {
    pbVar9 = (byte *)((long)puVar2 + 0x51);
    do {
      uVar11 = uVar11 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (uVar6 != 0);
  }
  local_70 = puVar2 + 0x24;
  puVar2[0x12] = uVar11;
  local_b8 = 0x5f6e74625f746573;
  uVar6 = 0x73;
  lVar8 = 9;
  local_b0 = 0x34305f726579616c;
  local_a8 = 0x765f;
  local_a6 = 0x62697369;
  local_a2 = 0x656c;
  local_a0 = 0;
  uVar11 = uVar13;
  do {
    uVar11 = uVar11 * 0x89 ^ uVar6;
    uVar6 = (uint)*(byte *)((long)&local_c0 + lVar8);
    lVar8 = lVar8 + 1;
  } while (uVar6 != 0);
  local_c0 = (undefined **)CONCAT44(0x18,uVar11);
  if (local_70 < puVar2 + 0xb4) {
    *local_70 = 0;
    for (uVar3 = 0; *(char *)((long)&local_b8 + uVar3) != '\0'; uVar3 = uVar3 + 2) {
      *(char *)((long)local_70 + uVar3 + 8) = *(char *)((long)&local_b8 + uVar3);
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar12 = *(char *)((long)&local_b8 + uVar3 + 1);
      if (cVar12 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)local_70 + uVar3 + 9) = cVar12;
    }
    *(undefined1 *)((long)puVar2 + (uVar3 & 0xffffffff) + 0x98) = 0;
    puVar2[0x25] = (uint)uVar3;
    uVar6 = (uint)(byte)puVar2[0x26];
    uVar11 = uVar13;
    if ((byte)puVar2[0x26] != 0) {
      pbVar9 = (byte *)((long)puVar2 + 0x99);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar6 != 0);
    }
    *local_70 = uVar11;
    local_70 = puVar2 + 0x36;
  }
  else {
    FUN_71019c1c50(&local_78,(long)&local_c0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  local_b8 = 0x5f6e74625f746573;
  uVar6 = 0x73;
  lVar8 = 9;
  local_b0 = 0x33305f726579616c;
  local_a8 = 0x765f;
  local_a6 = 0x62697369;
  local_a2 = 0x656c;
  local_a0 = 0;
  uVar11 = uVar13;
  do {
    uVar11 = uVar11 * 0x89 ^ uVar6;
    uVar6 = (uint)*(byte *)((long)&local_c0 + lVar8);
    lVar8 = lVar8 + 1;
  } while (uVar6 != 0);
  local_c0 = (undefined **)CONCAT44(0x18,uVar11);
  if (local_70 < local_68) {
    *local_70 = 0;
    for (uVar3 = 0; *(char *)((long)&local_b8 + uVar3) != '\0'; uVar3 = uVar3 + 2) {
      *(char *)((long)local_70 + uVar3 + 8) = *(char *)((long)&local_b8 + uVar3);
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar12 = *(char *)((long)&local_b8 + uVar3 + 1);
      if (cVar12 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)local_70 + uVar3 + 9) = cVar12;
    }
    *(undefined1 *)((long)local_70 + (uVar3 & 0xffffffff) + 8) = 0;
    local_70[1] = (uint)uVar3;
    uVar6 = (uint)(byte)local_70[2];
    uVar11 = uVar13;
    if ((byte)local_70[2] != 0) {
      pbVar9 = (byte *)((long)local_70 + 9);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar6 != 0);
    }
    *local_70 = uVar11;
    local_70 = local_70 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_78,(long)&local_c0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  local_b8 = 0x5f6e74625f746573;
  uVar6 = 0x73;
  lVar8 = 9;
  local_b0 = 0x32305f726579616c;
  local_a8 = 0x765f;
  local_a6 = 0x62697369;
  local_a2 = 0x656c;
  local_a0 = 0;
  uVar11 = uVar13;
  do {
    uVar11 = uVar11 * 0x89 ^ uVar6;
    uVar6 = (uint)*(byte *)((long)&local_c0 + lVar8);
    lVar8 = lVar8 + 1;
  } while (uVar6 != 0);
  local_c0 = (undefined **)CONCAT44(0x18,uVar11);
  if (local_70 < local_68) {
    *local_70 = 0;
    for (uVar3 = 0; *(char *)((long)&local_b8 + uVar3) != '\0'; uVar3 = uVar3 + 2) {
      *(char *)((long)local_70 + uVar3 + 8) = *(char *)((long)&local_b8 + uVar3);
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar12 = *(char *)((long)&local_b8 + uVar3 + 1);
      if (cVar12 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)local_70 + uVar3 + 9) = cVar12;
    }
    *(undefined1 *)((long)local_70 + (uVar3 & 0xffffffff) + 8) = 0;
    local_70[1] = (uint)uVar3;
    uVar6 = (uint)(byte)local_70[2];
    uVar11 = uVar13;
    if ((byte)local_70[2] != 0) {
      pbVar9 = (byte *)((long)local_70 + 9);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar6 != 0);
    }
    *local_70 = uVar11;
    local_70 = local_70 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_78,(long)&local_c0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  local_b8 = 0x5f6e74625f746573;
  uVar6 = 0x73;
  lVar8 = 9;
  local_b0 = 0x31305f726579616c;
  local_a8 = 0x765f;
  local_a6 = 0x62697369;
  local_a2 = 0x656c;
  local_a0 = 0;
  uVar11 = uVar13;
  do {
    uVar11 = uVar11 * 0x89 ^ uVar6;
    uVar6 = (uint)*(byte *)((long)&local_c0 + lVar8);
    lVar8 = lVar8 + 1;
  } while (uVar6 != 0);
  local_c0 = (undefined **)CONCAT44(0x18,uVar11);
  if (local_70 < local_68) {
    *local_70 = 0;
    for (uVar3 = 0; *(char *)((long)&local_b8 + uVar3) != '\0'; uVar3 = uVar3 + 2) {
      *(char *)((long)local_70 + uVar3 + 8) = *(char *)((long)&local_b8 + uVar3);
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar12 = *(char *)((long)&local_b8 + uVar3 + 1);
      if (cVar12 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)local_70 + uVar3 + 9) = cVar12;
    }
    *(undefined1 *)((long)local_70 + (uVar3 & 0xffffffff) + 8) = 0;
    local_70[1] = (uint)uVar3;
    uVar6 = (uint)(byte)local_70[2];
    uVar11 = uVar13;
    if ((byte)local_70[2] != 0) {
      pbVar9 = (byte *)((long)local_70 + 9);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar6 != 0);
    }
    *local_70 = uVar11;
    local_70 = local_70 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_78,(long)&local_c0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar6 = 0x73;
  local_b8 = 0x5f6e74625f746573;
  lVar8 = 9;
  local_b0 = 0x34305f726579616c;
  local_a8 = local_a8 & 0xff00;
  uVar11 = uVar13;
  do {
    uVar11 = uVar11 * 0x89 ^ uVar6;
    uVar6 = (uint)*(byte *)((long)&local_c0 + lVar8);
    lVar8 = lVar8 + 1;
  } while (uVar6 != 0);
  local_c0 = (undefined **)CONCAT44(0x10,uVar11);
  if (local_70 < local_68) {
    *local_70 = 0;
    for (uVar3 = 0; *(char *)((long)&local_b8 + uVar3) != '\0'; uVar3 = uVar3 + 2) {
      *(char *)((long)local_70 + uVar3 + 8) = *(char *)((long)&local_b8 + uVar3);
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar12 = *(char *)((long)&local_b8 + uVar3 + 1);
      if (cVar12 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)local_70 + uVar3 + 9) = cVar12;
    }
    *(undefined1 *)((long)local_70 + (uVar3 & 0xffffffff) + 8) = 0;
    local_70[1] = (uint)uVar3;
    uVar6 = (uint)(byte)local_70[2];
    uVar11 = uVar13;
    if ((byte)local_70[2] != 0) {
      pbVar9 = (byte *)((long)local_70 + 9);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar6 != 0);
    }
    *local_70 = uVar11;
    local_70 = local_70 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_78,(long)&local_c0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar6 = 0x73;
  local_b8 = 0x5f6e74625f746573;
  lVar8 = 9;
  local_b0 = 0x33305f726579616c;
  local_a8 = local_a8 & 0xff00;
  uVar11 = uVar13;
  do {
    uVar11 = uVar11 * 0x89 ^ uVar6;
    uVar6 = (uint)*(byte *)((long)&local_c0 + lVar8);
    lVar8 = lVar8 + 1;
  } while (uVar6 != 0);
  local_c0 = (undefined **)CONCAT44(0x10,uVar11);
  if (local_70 < local_68) {
    *local_70 = 0;
    for (uVar3 = 0; *(char *)((long)&local_b8 + uVar3) != '\0'; uVar3 = uVar3 + 2) {
      *(char *)((long)local_70 + uVar3 + 8) = *(char *)((long)&local_b8 + uVar3);
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar12 = *(char *)((long)&local_b8 + uVar3 + 1);
      if (cVar12 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)local_70 + uVar3 + 9) = cVar12;
    }
    *(undefined1 *)((long)local_70 + (uVar3 & 0xffffffff) + 8) = 0;
    local_70[1] = (uint)uVar3;
    uVar6 = (uint)(byte)local_70[2];
    uVar11 = uVar13;
    if ((byte)local_70[2] != 0) {
      pbVar9 = (byte *)((long)local_70 + 9);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar6 != 0);
    }
    *local_70 = uVar11;
    local_70 = local_70 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_78,(long)&local_c0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar6 = 0x73;
  local_b8 = 0x5f6e74625f746573;
  lVar8 = 9;
  local_b0 = 0x32305f726579616c;
  local_a8 = local_a8 & 0xff00;
  uVar11 = uVar13;
  do {
    uVar11 = uVar11 * 0x89 ^ uVar6;
    uVar6 = (uint)*(byte *)((long)&local_c0 + lVar8);
    lVar8 = lVar8 + 1;
  } while (uVar6 != 0);
  local_c0 = (undefined **)CONCAT44(0x10,uVar11);
  if (local_70 < local_68) {
    *local_70 = 0;
    for (uVar3 = 0; *(char *)((long)&local_b8 + uVar3) != '\0'; uVar3 = uVar3 + 2) {
      *(char *)((long)local_70 + uVar3 + 8) = *(char *)((long)&local_b8 + uVar3);
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar12 = *(char *)((long)&local_b8 + uVar3 + 1);
      if (cVar12 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)local_70 + uVar3 + 9) = cVar12;
    }
    *(undefined1 *)((long)local_70 + (uVar3 & 0xffffffff) + 8) = 0;
    local_70[1] = (uint)uVar3;
    uVar6 = (uint)(byte)local_70[2];
    uVar11 = uVar13;
    if ((byte)local_70[2] != 0) {
      pbVar9 = (byte *)((long)local_70 + 9);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar6 != 0);
    }
    *local_70 = uVar11;
    local_70 = local_70 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_78,(long)&local_c0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar6 = 0x73;
  local_b8 = 0x5f6e74625f746573;
  lVar8 = 9;
  local_b0 = 0x31305f726579616c;
  local_a8 = local_a8 & 0xff00;
  uVar11 = uVar13;
  do {
    uVar11 = uVar11 * 0x89 ^ uVar6;
    uVar6 = (uint)*(byte *)((long)&local_c0 + lVar8);
    lVar8 = lVar8 + 1;
  } while (uVar6 != 0);
  local_c0 = (undefined **)CONCAT44(0x10,uVar11);
  if (local_70 < local_68) {
    *local_70 = 0;
    for (uVar3 = 0; *(char *)((long)&local_b8 + uVar3) != '\0'; uVar3 = uVar3 + 2) {
      *(char *)((long)local_70 + uVar3 + 8) = *(char *)((long)&local_b8 + uVar3);
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar12 = *(char *)((long)&local_b8 + uVar3 + 1);
      if (cVar12 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)local_70 + uVar3 + 9) = cVar12;
    }
    *(undefined1 *)((long)local_70 + (uVar3 & 0xffffffff) + 8) = 0;
    uVar11 = (uint)(byte)local_70[2];
    local_70[1] = (uint)uVar3;
    if ((byte)local_70[2] != 0) {
      pbVar9 = (byte *)((long)local_70 + 9);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar11;
        uVar11 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar11 != 0);
    }
    *local_70 = uVar13;
    local_70 = local_70 + 0x12;
  }
  else {
    FUN_71019c1c50(&local_78,(long)&local_c0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  plVar14 = &local_78;
  FUN_7101ec4640(param_1,(long ****)"selector_function",plVar14,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7101ecda10((long)param_1,0,plVar14,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ecda10((long)param_1,1,plVar14,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ecda10((long)param_1,2,plVar14,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ecad70((long)param_1,6,plVar14,param_4,param_5,param_6,param_7,param_8);
  uVar5 = 4;
  FUN_7103776640(&local_c0,param_1[1],(byte ****)"set_btn_layer_0%d_visible",4,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7101ecb480((undefined1 *)(param_1 + 7),(long)&local_c0,uVar5,param_4,param_5,param_6,param_7,
                 param_8);
  uVar3 = local_b8;
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  FUN_7101ecda10((long)param_1,3,uVar5,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ecad70((long)param_1,7,uVar5,param_4,param_5,param_6,param_7,param_8);
  uVar5 = 3;
  FUN_7103776640(&local_c0,param_1[1],(byte ****)"set_btn_layer_0%d_visible",3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7101ecb480((undefined1 *)(param_1 + 0x13),(long)&local_c0,uVar5,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_b8;
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  FUN_7101ecda10((long)param_1,4,uVar5,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ecad70((long)param_1,8,uVar5,param_4,param_5,param_6,param_7,param_8);
  uVar5 = 2;
  FUN_7103776640(&local_c0,param_1[1],(byte ****)"set_btn_layer_0%d_visible",2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7101ecb480((undefined1 *)(param_1 + 0x1f),(long)&local_c0,uVar5,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_b8;
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  FUN_7101ecda10((long)param_1,5,uVar5,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ecad70((long)param_1,9,uVar5,param_4,param_5,param_6,param_7,param_8);
  uVar5 = 1;
  FUN_7103776640(&local_c0,param_1[1],(byte ****)"set_btn_layer_0%d_visible",1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7101ecb480((undefined1 *)(param_1 + 0x2b),(long)&local_c0,uVar5,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_b8;
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  plVar15 = param_1 + 4;
  plVar10 = (long *)*plVar15;
  plVar14 = plVar15;
  if (plVar10 == (long *)0x0) goto LAB_7101ecd31c;
  do {
    bVar1 = (int)plVar10[4] < 0;
    if (!bVar1) {
      plVar14 = plVar10;
    }
    plVar10 = (long *)plVar10[bVar1];
  } while (plVar10 != (long *)0x0);
  if (((plVar14 == plVar15) || (0 < (int)plVar14[4])) ||
     (lVar8 = plVar14[5], *(int *)(lVar8 + 8) != 1)) {
LAB_7101ecd074:
    plVar14 = (long *)*plVar15;
  }
  else {
    plVar14 = (long *)plVar14[6];
    if (plVar14 == (long *)0x0) {
      *(undefined1 *)(lVar8 + 0x57) = 1;
      goto LAB_7101ecd074;
    }
    plVar10 = plVar14 + 1;
    do {
      cVar12 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar1) {
        *plVar10 = *plVar10 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    *(undefined1 *)(lVar8 + 0x57) = 1;
    do {
      lVar8 = *plVar10;
      cVar12 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar1) {
        *plVar10 = lVar8 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar8 != 0) goto LAB_7101ecd074;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    std::__shared_weak_count::__release_weak();
    plVar14 = (long *)*plVar15;
  }
  plVar10 = plVar15;
  if (plVar14 == (long *)0x0) goto LAB_7101ecd31c;
  do {
    if (1 < (int)plVar14[4]) {
      plVar10 = plVar14;
    }
    plVar14 = (long *)plVar14[(int)plVar14[4] < 2];
  } while (plVar14 != (long *)0x0);
  if (((plVar10 == plVar15) || (2 < (int)plVar10[4])) ||
     (lVar8 = plVar10[5], *(int *)(lVar8 + 8) != 1)) {
LAB_7101ecd120:
    plVar14 = (long *)*plVar15;
  }
  else {
    plVar14 = (long *)plVar10[6];
    if (plVar14 == (long *)0x0) {
      *(undefined1 *)(lVar8 + 0x57) = 1;
      goto LAB_7101ecd120;
    }
    plVar10 = plVar14 + 1;
    do {
      cVar12 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar1) {
        *plVar10 = *plVar10 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    *(undefined1 *)(lVar8 + 0x57) = 1;
    do {
      lVar8 = *plVar10;
      cVar12 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar1) {
        *plVar10 = lVar8 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar8 != 0) goto LAB_7101ecd120;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    std::__shared_weak_count::__release_weak();
    plVar14 = (long *)*plVar15;
  }
  plVar10 = plVar15;
  if (plVar14 == (long *)0x0) goto LAB_7101ecd31c;
  do {
    if (2 < (int)plVar14[4]) {
      plVar10 = plVar14;
    }
    plVar14 = (long *)plVar14[(int)plVar14[4] < 3];
  } while (plVar14 != (long *)0x0);
  if (((plVar10 == plVar15) || (3 < (int)plVar10[4])) ||
     (lVar8 = plVar10[5], *(int *)(lVar8 + 8) != 1)) {
LAB_7101ecd1cc:
    plVar14 = (long *)*plVar15;
  }
  else {
    plVar14 = (long *)plVar10[6];
    if (plVar14 == (long *)0x0) {
      *(undefined1 *)(lVar8 + 0x57) = 1;
      goto LAB_7101ecd1cc;
    }
    plVar10 = plVar14 + 1;
    do {
      cVar12 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar1) {
        *plVar10 = *plVar10 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    *(undefined1 *)(lVar8 + 0x57) = 1;
    do {
      lVar8 = *plVar10;
      cVar12 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar1) {
        *plVar10 = lVar8 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar8 != 0) goto LAB_7101ecd1cc;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    std::__shared_weak_count::__release_weak();
    plVar14 = (long *)*plVar15;
  }
  plVar10 = plVar15;
  if (plVar14 == (long *)0x0) goto LAB_7101ecd31c;
  do {
    if (3 < (int)plVar14[4]) {
      plVar10 = plVar14;
    }
    plVar14 = (long *)plVar14[(int)plVar14[4] < 4];
  } while (plVar14 != (long *)0x0);
  if (((plVar10 == plVar15) || (4 < (int)plVar10[4])) ||
     (lVar8 = plVar10[5], *(int *)(lVar8 + 8) != 1)) {
LAB_7101ecd278:
    plVar14 = (long *)*plVar15;
  }
  else {
    plVar14 = (long *)plVar10[6];
    if (plVar14 == (long *)0x0) {
      *(undefined1 *)(lVar8 + 0x57) = 1;
      goto LAB_7101ecd278;
    }
    plVar10 = plVar14 + 1;
    do {
      cVar12 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar1) {
        *plVar10 = *plVar10 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    *(undefined1 *)(lVar8 + 0x57) = 1;
    do {
      lVar8 = *plVar10;
      cVar12 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar1) {
        *plVar10 = lVar8 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar8 != 0) goto LAB_7101ecd278;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    std::__shared_weak_count::__release_weak();
    plVar14 = (long *)*plVar15;
  }
  plVar10 = plVar15;
  if (plVar14 != (long *)0x0) {
    do {
      if (4 < (int)plVar14[4]) {
        plVar10 = plVar14;
      }
      plVar14 = (long *)plVar14[(int)plVar14[4] < 5];
    } while (plVar14 != (long *)0x0);
    if (((plVar10 != plVar15) && ((int)plVar10[4] < 6)) &&
       (lVar8 = plVar10[5], *(int *)(lVar8 + 8) == 1)) {
      plVar14 = (long *)plVar10[6];
      if (plVar14 == (long *)0x0) {
        *(undefined1 *)(lVar8 + 0x57) = 1;
      }
      else {
        plVar10 = plVar14 + 1;
        do {
          cVar12 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar1) {
            *plVar10 = *plVar10 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        *(undefined1 *)(lVar8 + 0x57) = 1;
        do {
          lVar8 = *plVar10;
          cVar12 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar1) {
            *plVar10 = lVar8 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
LAB_7101ecd31c:
  FUN_71037780e0(&local_c0,param_1[1],(long ****)"function_in",uVar5,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar3 = local_b8;
  if (param_1 + 0x37 != &local_c0) {
    local_b8 = 0;
    uVar4 = param_1[0x38];
    param_1[0x38] = uVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar3 = local_b8;
  local_c0 = &PTR_FUN_710523d9e8;
  local_b8 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_71037780e0(&local_c0,param_1[1],(long ****)"function_in_out",uVar5,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_b8;
  if (param_1 + 0x39 != &local_c0) {
    local_b8 = 0;
    uVar4 = param_1[0x3a];
    param_1[0x3a] = uVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar3 = local_b8;
  local_c0 = &PTR_FUN_710523d9e8;
  local_b8 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_71037780e0(&local_c0,param_1[1],(long ****)"function_fadeout",uVar5,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_b8;
  if (param_1 + 0x3b != &local_c0) {
    local_b8 = 0;
    uVar4 = param_1[0x3c];
    param_1[0x3c] = uVar3;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  uVar3 = local_b8;
  local_c0 = &PTR_FUN_710523d9e8;
  local_b8 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776640(&local_d0,param_1[1],(byte ****)"set_btn_grid",uVar5,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_txt_key",uVar5,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_b8;
  if (*(int *)(*DAT_710593ba90 + 0x3ac) == 6) {
    if (*(long **)(local_b8 + 0x10) != (long *)0x0) {
      local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_b8 + 0x10),(ushort *)&local_d0,0,0);
    }
  }
  else {
    FUN_710377a120((long)&local_c0,"mnu_stgcreate_edit_grid_guide",uVar5,param_4,param_5,param_6,
                   param_7,param_8);
    uVar3 = local_b8;
  }
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  if (local_78 != (uint *)0x0) {
    local_70 = local_78;
    FUN_710392eb40((ulong)local_78);
  }
  return;
}

