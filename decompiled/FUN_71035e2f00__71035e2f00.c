// addr:      71035e2f00
// offset:    0x35e2f00
// name:      FUN_71035e2f00
// mangled:   
// signature: undefined __cdecl FUN_71035e2f00(undefined1 * param_1, char * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71035e2f00(undefined1 *param_1,char *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  ulong uVar26;
  char *pcVar27;
  long ****pppplVar28;
  undefined1 uVar29;
  long *plVar30;
  long *plVar31;
  uint uVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  char *pcVar38;
  uint uVar39;
  int iVar40;
  ulong uVar41;
  int iVar42;
  double dVar43;
  int local_270;
  int local_260;
  int local_250;
  int local_240;
  int local_238;
  int local_230;
  int local_218;
  char *local_1e8;
  char *local_1d8;
  int local_1d0;
  int local_1c8;
  char *local_1a0;
  ulong local_198;
  int local_180;
  int local_178;
  undefined4 local_16c;
  long ***local_168 [33];
  
  puVar25 = (undefined8 *)FUN_710392e290(0x10,0x40,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar25 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_16c = 0;
      local_168[0] = (long ***)&DAT_00000040;
      pppplVar28 = local_168;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_16c);
      if (((uVar26 & 1) != 0) &&
         (puVar25 = (undefined8 *)
                    FUN_710392e290(0x10,0x40,pppplVar28,param_4,param_5,param_6,param_7,param_8),
         puVar25 != (undefined8 *)0x0)) goto LAB_71035e2f7c;
    }
    puVar25 = (undefined8 *)0x0;
  }
LAB_71035e2f7c:
  plVar30 = puVar25 + 7;
  *plVar30 = 0;
  plVar31 = puVar25 + 4;
  *plVar31 = 0;
  puVar25[5] = 0;
  puVar25[6] = 0;
  puVar25[2] = 0;
  puVar25[3] = 0;
  *puVar25 = param_2;
  puVar25[1] = param_2;
  if ((((*param_2 == 'X') && (param_2[1] == 'M')) && (param_2[2] == 'B')) && (param_2[3] == ' ')) {
    pcVar27 = param_2 + *(uint *)(param_2 + 0x14);
    local_1d8 = param_2 + *(uint *)(param_2 + 0x18);
    puVar25[2] = pcVar27;
    puVar25[3] = local_1d8;
    local_1a0 = param_2 + *(uint *)(param_2 + 0x1c);
    puVar25[4] = local_1a0;
    puVar25[5] = param_2 + *(uint *)(param_2 + 0x20);
    pcVar38 = param_2 + *(uint *)(param_2 + 0x24);
    local_1e8 = param_2 + *(uint *)(param_2 + 0x28);
    puVar25[6] = pcVar38;
    puVar25[7] = local_1e8;
  }
  else {
    local_1d8 = (char *)0x0;
    local_1a0 = (char *)0x0;
    pcVar27 = (char *)0x0;
    local_1e8 = (char *)0x0;
    pcVar38 = (char *)0x0;
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar42 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar5 = strcmp(pcVar38 + iVar42,"shadow");
  if (iVar5 != 0) {
    uVar34 = 0;
    do {
      iVar42 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar5 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar42 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar5 = strcmp(pcVar38 + iVar42,"shadow");
    } while (iVar5 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar5 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar6 = strcmp(pcVar38 + iVar5,"lightset");
  if (iVar6 != 0) {
    uVar34 = 0;
    do {
      iVar5 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar6 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar5 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar6 = strcmp(pcVar38 + iVar5,"lightset");
    } while (iVar6 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar6 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar7 = strcmp(pcVar38 + iVar6,"type");
  if (iVar7 != 0) {
    uVar34 = 0;
    local_198._0_4_ = -1;
    do {
      iVar6 = (int)local_198;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar7 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar6 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar7 = strcmp(pcVar38 + iVar6,"type");
    } while (iVar7 != 0);
  }
  local_198._0_4_ = iVar6;
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar6 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar7 = strcmp(pcVar38 + iVar6,"caster");
  if (iVar7 != 0) {
    uVar34 = 0;
    local_178 = -1;
    do {
      iVar6 = local_178;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar7 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar6 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar7 = strcmp(pcVar38 + iVar6,"caster");
    } while (iVar7 != 0);
  }
  local_178 = iVar6;
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar6 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar7 = strcmp(pcVar38 + iVar6,"number");
  if (iVar7 != 0) {
    uVar34 = 0;
    local_180 = -1;
    do {
      iVar6 = local_180;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar7 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar6 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar7 = strcmp(pcVar38 + iVar6,"number");
    } while (iVar7 != 0);
  }
  local_180 = iVar6;
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar6 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar7 = strcmp(pcVar38 + iVar6,"action");
  if (iVar7 != 0) {
    uVar34 = 0;
    do {
      iVar6 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar7 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar6 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar7 = strcmp(pcVar38 + iVar6,"action");
    } while (iVar7 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  local_1d0 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar7 = strcmp(pcVar38 + local_1d0,"this_light");
  if (iVar7 != 0) {
    uVar34 = 0;
    do {
      if (uVar34 == uVar39) {
        local_1d0 = -1;
        break;
      }
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar7 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      local_1d0 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar7 = strcmp(pcVar38 + local_1d0,"this_light");
    } while (iVar7 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar7 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar8 = strcmp(pcVar38 + iVar7,"color");
  if (iVar8 != 0) {
    uVar34 = 0;
    do {
      iVar7 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar8 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar7 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar8 = strcmp(pcVar38 + iVar7,"color");
    } while (iVar8 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar8 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar9 = strcmp(pcVar38 + iVar8,"radius");
  if (iVar9 != 0) {
    uVar34 = 0;
    do {
      iVar8 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar9 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar8 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar9 = strcmp(pcVar38 + iVar8,"radius");
    } while (iVar9 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar9 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar10 = strcmp(pcVar38 + iVar9,"offset");
  if (iVar10 != 0) {
    uVar34 = 0;
    local_1c8 = -1;
    do {
      iVar9 = local_1c8;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar10 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar9 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar10 = strcmp(pcVar38 + iVar9,"offset");
    } while (iVar10 != 0);
  }
  local_1c8 = iVar9;
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar9 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar10 = strcmp(pcVar38 + iVar9,"local_offset");
  if (iVar10 != 0) {
    uVar34 = 0;
    do {
      iVar9 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar10 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar9 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar10 = strcmp(pcVar38 + iVar9,"local_offset");
    } while (iVar10 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar10 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar11 = strcmp(pcVar38 + iVar10,"opaque_sort");
  if (iVar11 != 0) {
    uVar34 = 0;
    do {
      iVar10 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar11 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar10 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar11 = strcmp(pcVar38 + iVar10,"opaque_sort");
    } while (iVar11 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar11 = strcmp(pcVar38 + *(int *)(pcVar27 + (ulong)uVar32 * 4),"order");
  if (iVar11 != 0) {
    uVar34 = 0;
    do {
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar11 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar11 = strcmp(pcVar38 + *(int *)(pcVar27 + (ulong)uVar32 * 4),"order");
    } while (iVar11 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar11 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar12 = strcmp(pcVar38 + iVar11,"draw_range");
  if (iVar12 != 0) {
    uVar34 = 0;
    do {
      iVar11 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar12 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar11 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar12 = strcmp(pcVar38 + iVar11,"draw_range");
    } while (iVar12 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  local_218 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar12 = strcmp(pcVar38 + local_218,"drawing_order");
  if (iVar12 != 0) {
    uVar34 = 0;
    do {
      if (uVar34 == uVar39) {
        local_218 = -1;
        break;
      }
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar12 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      local_218 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar12 = strcmp(pcVar38 + local_218,"drawing_order");
    } while (iVar12 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar12 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar13 = strcmp(pcVar38 + iVar12,"compress_type");
  if (iVar13 != 0) {
    uVar34 = 0;
    do {
      iVar12 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar13 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar12 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar13 = strcmp(pcVar38 + iVar12,"compress_type");
    } while (iVar13 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  local_240 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar13 = strcmp(pcVar38 + local_240,"stage_visible_type");
  if (iVar13 != 0) {
    uVar34 = 0;
    do {
      if (uVar34 == uVar39) {
        local_240 = -1;
        break;
      }
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar13 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      local_240 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar13 = strcmp(pcVar38 + local_240,"stage_visible_type");
    } while (iVar13 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar13 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar14 = strcmp(pcVar38 + iVar13,"mirror");
  if (iVar14 != 0) {
    uVar34 = 0;
    do {
      iVar13 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar14 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar13 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar14 = strcmp(pcVar38 + iVar13,"mirror");
    } while (iVar14 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  local_250 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar14 = strcmp(pcVar38 + local_250,"instancing");
  if (iVar14 != 0) {
    uVar34 = 0;
    do {
      if (uVar34 == uVar39) {
        local_250 = -1;
        break;
      }
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar14 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      local_250 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar14 = strcmp(pcVar38 + local_250,"instancing");
    } while (iVar14 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar14 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar15 = strcmp(pcVar38 + iVar14,"aurora_vision");
  if (iVar15 != 0) {
    uVar34 = 0;
    do {
      iVar14 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar15 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar14 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar15 = strcmp(pcVar38 + iVar14,"aurora_vision");
    } while (iVar15 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  local_260 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar15 = strcmp(pcVar38 + local_260,"stage_transition_type");
  if (iVar15 != 0) {
    uVar34 = 0;
    do {
      if (uVar34 == uVar39) {
        local_260 = -1;
        break;
      }
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar15 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      local_260 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar15 = strcmp(pcVar38 + local_260,"stage_transition_type");
    } while (iVar15 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar15 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar16 = strcmp(pcVar38 + iVar15,"stage_transition_visible");
  if (iVar16 != 0) {
    uVar34 = 0;
    do {
      iVar15 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar16 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar15 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar16 = strcmp(pcVar38 + iVar15,"stage_transition_visible");
    } while (iVar16 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  local_270 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar16 = strcmp(pcVar38 + local_270,"bounding_scale");
  if (iVar16 != 0) {
    uVar34 = 0;
    do {
      if (uVar34 == uVar39) {
        local_270 = -1;
        break;
      }
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar16 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      local_270 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar16 = strcmp(pcVar38 + local_270,"bounding_scale");
    } while (iVar16 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar16 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar17 = strcmp(pcVar38 + iVar16,"stage_expansion_type");
  if (iVar17 != 0) {
    uVar34 = 0;
    do {
      iVar16 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar17 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar16 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar17 = strcmp(pcVar38 + iVar16,"stage_expansion_type");
    } while (iVar17 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar17 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar18 = strcmp(pcVar38 + iVar17,"stage_sh_priority");
  if (iVar18 != 0) {
    uVar34 = 0;
    do {
      iVar17 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar18 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar17 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar18 = strcmp(pcVar38 + iVar17,"stage_sh_priority");
    } while (iVar18 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar18 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar19 = strcmp(pcVar38 + iVar18,"is_multi_sh");
  if (iVar19 != 0) {
    uVar34 = 0;
    local_230 = -1;
    do {
      iVar18 = local_230;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar19 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar18 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar19 = strcmp(pcVar38 + iVar18,"is_multi_sh");
    } while (iVar19 != 0);
  }
  local_230 = iVar18;
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar18 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar19 = strcmp(pcVar38 + iVar18,"poison");
  if (iVar19 != 0) {
    uVar34 = 0;
    local_238 = -1;
    do {
      iVar18 = local_238;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar19 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar18 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar19 = strcmp(pcVar38 + iVar18,"poison");
    } while (iVar19 != 0);
  }
  local_238 = iVar18;
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar18 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar19 = strcmp(pcVar38 + iVar18,"stencil_type");
  if (iVar19 != 0) {
    uVar34 = 0;
    do {
      iVar18 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar19 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar18 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar19 = strcmp(pcVar38 + iVar18,"stencil_type");
    } while (iVar19 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar19 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar20 = strcmp(pcVar38 + iVar19,"stage_ink_type");
  if (iVar20 != 0) {
    uVar34 = 0;
    do {
      iVar19 = -1;
      if (uVar34 == uVar39) break;
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar20 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar19 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar20 = strcmp(pcVar38 + iVar19,"stage_ink_type");
    } while (iVar20 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar20 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar21 = strcmp(pcVar38 + iVar20,"force_opaque");
  if (iVar21 != 0) {
    uVar34 = 0;
    do {
      if (uVar34 == uVar39) {
        iVar20 = -1;
        break;
      }
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar21 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar20 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar21 = strcmp(pcVar38 + iVar20,"force_opaque");
    } while (iVar21 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar21 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar22 = strcmp(pcVar38 + iVar21,"shadow_bounding_box_offset");
  if (iVar22 != 0) {
    uVar34 = 0;
    do {
      if (uVar34 == uVar39) {
        iVar21 = -1;
        break;
      }
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar22 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar21 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar22 = strcmp(pcVar38 + iVar21,"shadow_bounding_box_offset");
    } while (iVar22 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar22 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar23 = strcmp(pcVar38 + iVar22,"silhouette_type");
  if (iVar23 != 0) {
    uVar34 = 0;
    do {
      if (uVar34 == uVar39) {
        iVar22 = -1;
        break;
      }
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar23 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar22 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar23 = strcmp(pcVar38 + iVar22,"silhouette_type");
    } while (iVar23 != 0);
  }
  uVar39 = *(int *)(param_2 + 0xc) - 1;
  uVar32 = uVar39 >> 1;
  iVar23 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
  iVar24 = strcmp(pcVar38 + iVar23,"pre_depth");
  if (iVar24 != 0) {
    uVar34 = 0;
    do {
      if (uVar34 == uVar39) {
        iVar23 = -1;
        break;
      }
      uVar1 = uVar34;
      uVar3 = uVar32;
      if (iVar24 < 1) {
        uVar1 = uVar32;
        uVar3 = uVar39;
      }
      bVar4 = uVar32 != uVar34;
      uVar34 = uVar39;
      if (bVar4) {
        uVar34 = uVar1;
        uVar39 = uVar3;
      }
      uVar32 = uVar34 + uVar39 >> 1;
      iVar23 = *(int *)(pcVar27 + (ulong)uVar32 * 4);
      iVar24 = strcmp(pcVar38 + iVar23,"pre_depth");
    } while (iVar24 != 0);
  }
  if (*(int *)(param_2 + 4) < 1) {
    uVar26 = 0;
  }
  else {
    uVar26 = (ulong)*(ushort *)(local_1d8 + 4);
  }
  if (*(int *)(param_2 + 4) < 1) {
    uVar41 = 0xffffffffffffffff;
  }
  else {
    uVar41 = (ulong)*(ushort *)(local_1d8 + 8);
  }
  if ((int)uVar26 != 0) {
    lVar33 = uVar41 << 3;
    do {
      if ((long)uVar41 < 0) {
        if ((int)local_198 == -1) goto LAB_71035e412c;
      }
      else {
        iVar24 = -1;
        if ((long)uVar41 < (long)*(int *)(param_2 + 8)) {
          iVar24 = *(int *)(local_1a0 + lVar33);
        }
        if ((int)local_198 == iVar24) {
LAB_71035e412c:
          if ((long)uVar41 < 0) {
            pcVar27 = "[NO VALUE]";
          }
          else {
            pcVar27 = "[NO VALUE]";
            if ((long)uVar41 < (long)*(int *)(param_2 + 8)) {
              pcVar27 = local_1e8 + *(int *)(local_1a0 + lVar33 + 4);
            }
          }
          iVar24 = strcmp(pcVar27,"fighter");
          if (iVar24 == 0) {
            uVar29 = 0;
          }
          else {
            iVar24 = strcmp(pcVar27,"stage");
            if (iVar24 == 0) {
              uVar29 = 1;
            }
            else {
              iVar24 = strcmp(pcVar27,"effect");
              uVar29 = 2;
              if (iVar24 != 0) {
                uVar29 = 3;
              }
            }
          }
          *param_1 = uVar29;
        }
      }
      uVar41 = uVar41 + 1;
      lVar33 = lVar33 + 8;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  if (*(int *)(param_2 + 4) < 1) {
    local_198 = 0;
  }
  else {
    local_198 = (ulong)*(ushort *)(local_1d8 + 6);
  }
  if ((*(int *)(param_2 + 4) < 1) || (*(short *)(local_1d8 + 6) == 0)) {
    uVar26 = 0xffffffffffffffff;
  }
  else {
    uVar26 = (ulong)*(ushort *)(local_1d8 + 10);
  }
  if ((int)local_198 != 0) {
    uVar41 = 0;
    do {
      lVar33 = uVar41 + uVar26;
      iVar40 = -1;
      iVar24 = iVar40;
      if (lVar33 < 0) {
        if (iVar42 != -1) goto LAB_71035e50d4;
LAB_71035e50a8:
        if (-1 < lVar33) {
          if (lVar33 < *(int *)(param_2 + 4)) {
            uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
          }
          else {
            uVar35 = 0;
          }
          uVar36 = 0xffffffffffffffff;
          if (lVar33 < *(int *)(param_2 + 4)) {
            uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
          }
          if ((int)uVar35 != 0) {
            lVar33 = uVar36 << 3;
            do {
              if ((long)uVar36 < 0) {
                if (local_178 == -1) goto LAB_71035e5178;
              }
              else {
                iVar24 = -1;
                if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                  iVar24 = *(int *)(*plVar31 + lVar33);
                }
                if (iVar24 == local_178) {
LAB_71035e5178:
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  param_1[1] = (char)iVar24;
                }
              }
              uVar36 = uVar36 + 1;
              lVar33 = lVar33 + 8;
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
          }
        }
      }
      else {
        if (lVar33 < *(int *)(param_2 + 4)) {
          iVar24 = *(int *)(local_1d8 + lVar33 * 0x10);
        }
        if (iVar42 == iVar24) goto LAB_71035e50a8;
LAB_71035e50d4:
        if (iVar5 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if ((long)uVar36 < 0) {
                  if (local_180 == -1) goto LAB_71035e5260;
                }
                else {
                  iVar24 = -1;
                  if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                    iVar24 = *(int *)(*plVar31 + lVar33);
                  }
                  if (iVar24 == local_180) {
LAB_71035e5260:
                    if ((long)uVar36 < 0) {
                      pcVar27 = "0";
                    }
                    else {
                      pcVar27 = "0";
                      if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                        pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                      }
                    }
                    iVar24 = atoi(pcVar27);
                    *(int *)(param_1 + 4) = iVar24;
                  }
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (local_1d0 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              uVar37 = 0;
              do {
                lVar33 = uVar37 + uVar36;
                if (lVar33 < 0) {
                  iVar24 = -1;
                }
                else {
                  iVar24 = -1;
                  if (lVar33 < *(int *)(param_2 + 8)) {
                    iVar24 = *(int *)(*plVar31 + lVar33 * 8);
                  }
                }
                if (iVar6 == iVar24) {
                  if (lVar33 < 0) {
                    iVar24 = atoi("0");
                  }
                  else {
                    pcVar27 = "0";
                    if (lVar33 < *(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 * 8 + 4));
                    }
                    iVar24 = atoi(pcVar27);
                  }
                  if (iVar24 != 0) {
                    param_1[8] = 1;
                  }
                }
                else if (iVar8 == iVar24) {
                  if (lVar33 < 0) {
                    pcVar27 = "0.0";
                  }
                  else {
                    pcVar27 = "0.0";
                    if (lVar33 < *(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 * 8 + 4));
                    }
                  }
                  dVar43 = atof(pcVar27);
                  *(float *)(param_1 + 0xc) = (float)dVar43;
                }
                else if (local_1c8 == iVar24) {
                  if (lVar33 < 0) {
                    pcVar27 = "0.0";
                  }
                  else {
                    pcVar27 = "0.0";
                    if (lVar33 < *(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 * 8 + 4));
                    }
                  }
                  dVar43 = atof(pcVar27);
                  *(float *)(param_1 + 0x1c) = (float)dVar43;
                }
                else if (iVar7 == iVar24) {
                  *(undefined4 *)(param_1 + 0x18) = 0;
                  *(undefined8 *)(param_1 + 0x10) = 0;
                  if (((-1 < lVar33) && (lVar33 < *(int *)(param_2 + 8))) &&
                     (lVar33 = *plVar30 + (long)*(int *)(*plVar31 + lVar33 * 8 + 4), lVar33 != 0)) {
                    uVar34 = 0;
                    uVar39 = 0;
                    uVar32 = 0;
                    do {
                      bVar2 = *(byte *)(lVar33 + (ulong)uVar34);
                      if (bVar2 < 0x2d) {
                        if ((1L << ((ulong)bVar2 & 0x3f) & 0x100000600U) == 0) {
                          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100000000001U) == 0)
                          goto LAB_71035e54ec;
                          *(undefined1 *)((long)local_168 + (ulong)uVar39) = 0;
                          dVar43 = atof((char *)local_168);
                          *(float *)(param_1 + (ulong)uVar32 * 4 + 0x10) = (float)dVar43;
                          if (*(char *)(lVar33 + (ulong)uVar34) == '\0') break;
                          uVar39 = 0;
                          uVar32 = uVar32 + 1;
                        }
                      }
                      else {
LAB_71035e54ec:
                        *(byte *)((long)local_168 + (ulong)uVar39) = bVar2;
                        uVar39 = uVar39 + 1;
                      }
                      uVar34 = uVar34 + 1;
                    } while (uVar32 < 3);
                  }
                }
                else if (iVar9 == iVar24) {
                  *(undefined4 *)(param_1 + 0x28) = 0;
                  *(undefined8 *)(param_1 + 0x20) = 0;
                  if (((-1 < lVar33) && (lVar33 < *(int *)(param_2 + 8))) &&
                     (lVar33 = *plVar30 + (long)*(int *)(*plVar31 + lVar33 * 8 + 4), lVar33 != 0)) {
                    uVar34 = 0;
                    uVar39 = 0;
                    uVar32 = 0;
                    do {
                      bVar2 = *(byte *)(lVar33 + (ulong)uVar34);
                      if (bVar2 < 0x2d) {
                        if ((1L << ((ulong)bVar2 & 0x3f) & 0x100000600U) == 0) {
                          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100000000001U) == 0)
                          goto LAB_71035e55dc;
                          *(undefined1 *)((long)local_168 + (ulong)uVar39) = 0;
                          dVar43 = atof((char *)local_168);
                          *(float *)(param_1 + (ulong)uVar32 * 4 + 0x20) = (float)dVar43;
                          if (*(char *)(lVar33 + (ulong)uVar34) == '\0') break;
                          uVar39 = 0;
                          uVar32 = uVar32 + 1;
                        }
                      }
                      else {
LAB_71035e55dc:
                        *(byte *)((long)local_168 + (ulong)uVar39) = bVar2;
                        uVar39 = uVar39 + 1;
                      }
                      uVar34 = uVar34 + 1;
                    } while (uVar32 < 3);
                  }
                }
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar35);
            }
          }
        }
        else if (iVar10 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if ((long)uVar36 < 0) {
                  if (local_180 == -1) goto LAB_71035e56a0;
                }
                else {
                  iVar24 = -1;
                  if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                    iVar24 = *(int *)(*plVar31 + lVar33);
                  }
                  if (iVar24 == local_180) {
LAB_71035e56a0:
                    if ((long)uVar36 < 0) {
                      pcVar27 = "0";
                    }
                    else {
                      pcVar27 = "0";
                      if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                        pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                      }
                    }
                    iVar24 = atoi(pcVar27);
                    *(int *)(param_1 + 0x34) = iVar24;
                  }
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (iVar11 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if ((long)uVar36 < 0) {
                  if (local_180 == -1) goto LAB_71035e5788;
                }
                else {
                  iVar24 = -1;
                  if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                    iVar24 = *(int *)(*plVar31 + lVar33);
                  }
                  if (iVar24 == local_180) {
LAB_71035e5788:
                    if ((long)uVar36 < 0) {
                      pcVar27 = "0";
                    }
                    else {
                      pcVar27 = "0";
                      if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                        pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                      }
                    }
                    iVar24 = atoi(pcVar27);
                    param_1[0x38] = (char)iVar24;
                  }
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (local_218 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if ((long)uVar36 < 0) {
                  if (local_180 == -1) goto LAB_71035e5870;
                }
                else {
                  iVar24 = -1;
                  if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                    iVar24 = *(int *)(*plVar31 + lVar33);
                  }
                  if (iVar24 == local_180) {
LAB_71035e5870:
                    if ((long)uVar36 < 0) {
                      pcVar27 = "0";
                    }
                    else {
                      pcVar27 = "0";
                      if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                        pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                      }
                    }
                    iVar24 = atoi(pcVar27);
                    param_1[0x39] = (char)iVar24;
                  }
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (iVar12 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if ((long)uVar36 < 0) {
                  if (local_180 == -1) goto LAB_71035e5958;
                }
                else {
                  iVar24 = -1;
                  if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                    iVar24 = *(int *)(*plVar31 + lVar33);
                  }
                  if (iVar24 == local_180) {
LAB_71035e5958:
                    if ((long)uVar36 < 0) {
                      pcVar27 = "0";
                    }
                    else {
                      pcVar27 = "0";
                      if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                        pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                      }
                    }
                    iVar24 = atoi(pcVar27);
                    param_1[0x3a] = (char)iVar24;
                  }
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (local_240 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if ((long)uVar36 < 0) {
                  if (local_180 == -1) goto LAB_71035e5a3c;
                }
                else {
                  iVar24 = -1;
                  if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                    iVar24 = *(int *)(*plVar31 + lVar33);
                  }
                  if (iVar24 == local_180) {
LAB_71035e5a3c:
                    if ((long)uVar36 < 0) {
                      pcVar27 = "0";
                    }
                    else {
                      pcVar27 = "0";
                      if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                        pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                      }
                    }
                    iVar24 = atoi(pcVar27);
                    param_1[0x3b] = (char)iVar24;
                  }
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (iVar13 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if ((long)uVar36 < 0) {
                  if (local_180 == -1) goto LAB_71035e5b20;
                }
                else {
                  iVar24 = -1;
                  if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                    iVar24 = *(int *)(*plVar31 + lVar33);
                  }
                  if (iVar24 == local_180) {
LAB_71035e5b20:
                    if ((long)uVar36 < 0) {
                      pcVar27 = "0";
                    }
                    else {
                      pcVar27 = "0";
                      if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                        pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                      }
                    }
                    iVar24 = atoi(pcVar27);
                    *(short *)(param_1 + 0x40) = (short)iVar24;
                  }
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (local_250 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if ((long)uVar36 < 0) {
                  if (local_180 == -1) goto LAB_71035e42d0;
                }
                else {
                  iVar24 = -1;
                  if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                    iVar24 = *(int *)(*plVar31 + lVar33);
                  }
                  if (iVar24 == local_180) {
LAB_71035e42d0:
                    if ((long)uVar36 < 0) {
                      pcVar27 = "0";
                    }
                    else {
                      pcVar27 = "0";
                      if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                        pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                      }
                    }
                    iVar24 = atoi(pcVar27);
                    param_1[0x3c] = (char)iVar24;
                  }
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (iVar14 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if (((long)uVar36 < 0) || ((long)*(int *)(param_2 + 8) <= (long)uVar36)) {
                  if (local_180 == -1) goto LAB_71035e43c8;
                }
                else if (*(int *)(*plVar31 + lVar33) == local_180) {
LAB_71035e43c8:
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  param_1[0x3d] = (char)iVar24;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (local_260 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if (((long)uVar36 < 0) || ((long)*(int *)(param_2 + 8) <= (long)uVar36)) {
                  if (local_180 == -1) goto LAB_71035e44b0;
                }
                else if (*(int *)(*plVar31 + lVar33) == local_180) {
LAB_71035e44b0:
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  param_1[0x3e] = (char)iVar24;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (iVar15 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if (((long)uVar36 < 0) || ((long)*(int *)(param_2 + 8) <= (long)uVar36)) {
                  if (local_180 == -1) goto LAB_71035e4598;
                }
                else if (*(int *)(*plVar31 + lVar33) == local_180) {
LAB_71035e4598:
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  param_1[0x3f] = (char)iVar24;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (local_270 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if (((long)uVar36 < 0) || ((long)*(int *)(param_2 + 8) <= (long)uVar36)) {
                  if (local_180 == -1) goto LAB_71035e4680;
                }
                else if (*(int *)(*plVar31 + lVar33) == local_180) {
LAB_71035e4680:
                  if ((long)uVar36 < 0) {
                    pcVar27 = "1.0";
                  }
                  else {
                    pcVar27 = "1.0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  dVar43 = atof(pcVar27);
                  *(float *)(param_1 + 0x2c) = (float)dVar43;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (iVar16 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if (((long)uVar36 < 0) || ((long)*(int *)(param_2 + 8) <= (long)uVar36)) {
                  if (local_180 == -1) goto LAB_71035e4770;
                }
                else if (*(int *)(*plVar31 + lVar33) == local_180) {
LAB_71035e4770:
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  param_1[0x42] = (char)iVar24;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (iVar17 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if (((long)uVar36 < 0) || ((long)*(int *)(param_2 + 8) <= (long)uVar36)) {
                  if (local_180 == -1) goto LAB_71035e4858;
                }
                else if (*(int *)(*plVar31 + lVar33) == local_180) {
LAB_71035e4858:
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  *(short *)(param_1 + 0x44) = (short)iVar24;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (local_230 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if (((long)uVar36 < 0) || ((long)*(int *)(param_2 + 8) <= (long)uVar36)) {
                  if (local_180 == -1) goto LAB_71035e4954;
                }
                else if (*(int *)(*plVar31 + lVar33) == local_180) {
LAB_71035e4954:
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  param_1[0x46] = (char)iVar24;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (local_238 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if (((long)uVar36 < 0) || ((long)*(int *)(param_2 + 8) <= (long)uVar36)) {
                  if (local_180 == -1) goto LAB_71035e4a50;
                }
                else if (*(int *)(*plVar31 + lVar33) == local_180) {
LAB_71035e4a50:
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  param_1[0x47] = (char)iVar24;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (iVar18 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if (((long)uVar36 < 0) || ((long)*(int *)(param_2 + 8) <= (long)uVar36)) {
                  if (local_180 == -1) goto LAB_71035e4b50;
                }
                else if (*(int *)(*plVar31 + lVar33) == local_180) {
LAB_71035e4b50:
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  param_1[0x48] = (char)iVar24;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (iVar19 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if (((long)uVar36 < 0) || ((long)*(int *)(param_2 + 8) <= (long)uVar36)) {
                  if (local_180 == -1) goto LAB_71035e4c40;
                }
                else if (*(int *)(*plVar31 + lVar33) == local_180) {
LAB_71035e4c40:
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  param_1[0x49] = (char)iVar24;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (iVar20 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                iVar24 = iVar40;
                if ((-1 < (long)uVar36) && (iVar24 = -1, (long)uVar36 < (long)*(int *)(param_2 + 8))
                   ) {
                  iVar24 = *(int *)(*plVar31 + lVar33);
                }
                if (iVar24 == local_180) {
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  param_1[0x4a] = (char)iVar24;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if (iVar21 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              uVar37 = 0;
              do {
                lVar33 = uVar37 + uVar36;
                if (lVar33 < 0) {
                  iVar24 = -1;
                }
                else {
                  iVar24 = -1;
                  if (lVar33 < *(int *)(param_2 + 8)) {
                    iVar24 = *(int *)(*plVar31 + lVar33 * 8);
                  }
                }
                if (iVar24 == local_1c8) {
                  *(undefined4 *)(param_1 + 0x58) = 0;
                  *(undefined8 *)(param_1 + 0x50) = 0;
                  if (((-1 < lVar33) && (lVar33 < *(int *)(param_2 + 8))) &&
                     (lVar33 = *plVar30 + (long)*(int *)(*plVar31 + lVar33 * 8 + 4), lVar33 != 0)) {
                    uVar34 = 0;
                    uVar39 = 0;
                    uVar32 = 0;
                    do {
                      bVar2 = *(byte *)(lVar33 + (ulong)uVar34);
                      if (bVar2 < 0x2d) {
                        if ((1L << ((ulong)bVar2 & 0x3f) & 0x30100000600U) == 0) {
                          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100000000001U) == 0)
                          goto LAB_71035e4ed4;
                          *(undefined1 *)((long)local_168 + (ulong)uVar39) = 0;
                          dVar43 = atof((char *)local_168);
                          *(float *)(param_1 + (ulong)uVar32 * 4 + 0x50) = (float)dVar43;
                          if (*(char *)(lVar33 + (ulong)uVar34) == '\0') break;
                          uVar39 = 0;
                          uVar32 = uVar32 + 1;
                        }
                      }
                      else {
LAB_71035e4ed4:
                        *(byte *)((long)local_168 + (ulong)uVar39) = bVar2;
                        uVar39 = uVar39 + 1;
                      }
                      uVar34 = uVar34 + 1;
                    } while (uVar32 < 3);
                  }
                }
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar35);
            }
          }
        }
        else if (iVar22 == iVar24) {
          if (-1 < lVar33) {
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
            }
            else {
              uVar35 = 0;
            }
            uVar36 = 0xffffffffffffffff;
            if (lVar33 < *(int *)(param_2 + 4)) {
              uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
            }
            if ((int)uVar35 != 0) {
              lVar33 = uVar36 << 3;
              do {
                if ((long)uVar36 < 0) {
                  iVar24 = -1;
                }
                else {
                  iVar24 = -1;
                  if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                    iVar24 = *(int *)(*plVar31 + lVar33);
                  }
                }
                if (iVar24 == local_180) {
                  if ((long)uVar36 < 0) {
                    pcVar27 = "0";
                  }
                  else {
                    pcVar27 = "0";
                    if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                      pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                    }
                  }
                  iVar24 = atoi(pcVar27);
                  param_1[0x4b] = (char)iVar24;
                }
                uVar36 = uVar36 + 1;
                lVar33 = lVar33 + 8;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
          }
        }
        else if ((iVar23 == iVar24) && (-1 < lVar33)) {
          if (lVar33 < *(int *)(param_2 + 4)) {
            uVar35 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 4);
          }
          else {
            uVar35 = 0;
          }
          uVar36 = 0xffffffffffffffff;
          if (lVar33 < *(int *)(param_2 + 4)) {
            uVar36 = (ulong)*(ushort *)(local_1d8 + lVar33 * 0x10 + 8);
          }
          if ((int)uVar35 != 0) {
            lVar33 = uVar36 << 3;
            do {
              if ((long)uVar36 < 0) {
                iVar24 = -1;
              }
              else {
                iVar24 = -1;
                if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                  iVar24 = *(int *)(*plVar31 + lVar33);
                }
              }
              if (iVar24 == local_180) {
                if ((long)uVar36 < 0) {
                  pcVar27 = "0";
                }
                else {
                  pcVar27 = "0";
                  if ((long)uVar36 < (long)*(int *)(param_2 + 8)) {
                    pcVar27 = (char *)(*plVar30 + (long)*(int *)(*plVar31 + lVar33 + 4));
                  }
                }
                iVar24 = atoi(pcVar27);
                param_1[0x4c] = (char)iVar24;
              }
              uVar36 = uVar36 + 1;
              lVar33 = lVar33 + 8;
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
          }
        }
      }
      uVar41 = uVar41 + 1;
    } while (uVar41 != local_198);
    if (puVar25 == (undefined8 *)0x0) {
      return;
    }
  }
  FUN_710392eb40((ulong)puVar25);
  return;
}

