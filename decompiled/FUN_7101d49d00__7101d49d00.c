// addr:      7101d49d00
// offset:    0x1d49d00
// name:      FUN_7101d49d00
// mangled:   
// signature: undefined __cdecl FUN_7101d49d00(long param_1, uint param_2, int param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d49d00(long param_1,uint param_2,int param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long ****pppplVar6;
  uint uVar7;
  char *pcVar8;
  byte bVar9;
  byte *pbVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  byte ****ppppbVar19;
  uint uVar20;
  long lVar21;
  undefined **local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_b8;
  byte local_b0 [68];
  undefined4 local_6c [3];
  
  if (param_3 == 1) {
    plVar18 = (long *)(param_1 + 0x200);
    local_6c[0] = *(undefined4 *)(param_1 + 0x2d5);
  }
  else {
    local_6c[0] = *(undefined4 *)(param_1 + 0x2d1);
    plVar18 = (long *)(param_1 + 0x1f8);
  }
  local_b0[0] = 0;
  local_b8 = 0;
  lVar21 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x308);
  lVar5 = *(long *)(lVar21 + 8);
  pcVar8 = *(char **)(lVar5 + 0x20);
  bVar9 = *(byte *)((long)local_6c + (ulong)param_2);
  if ((*pcVar8 == '\f') && (iVar12 = *(int *)(pcVar8 + 1) + -1, 0 < *(int *)(pcVar8 + 1))) {
    uVar16 = *(ulong *)(lVar5 + 0x48) & 0xffffffffff;
    iVar15 = 0;
    pbVar10 = &DAT_7104742dbb;
    do {
      iVar13 = iVar12 + iVar15;
      if (iVar13 < 0) {
        iVar13 = iVar13 + 1;
      }
      iVar13 = iVar13 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x28) + (long)*(int *)(pcVar8 + 5) +
                       (long)iVar13 * 8);
      uVar17 = *(ulong *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar17 == uVar16) {
        uVar20 = puVar1[1];
        if ((int)uVar20 < 0) goto LAB_7101d49e0c;
        pbVar10 = (byte *)(pcVar8 + (int)uVar20);
        break;
      }
      iVar2 = iVar13 + -1;
      if (uVar17 <= uVar16) {
        iVar15 = iVar13 + 1;
        iVar2 = iVar12;
      }
      iVar12 = iVar2;
    } while (iVar15 <= iVar12);
  }
  else {
LAB_7101d49e0c:
    pbVar10 = &DAT_7104742dbb;
  }
  if ((*pbVar10 - 0xb < 2) && (iVar12 = *(int *)(pbVar10 + 1), 0 < iVar12)) {
    uVar20 = 0;
    pcVar8 = "";
    do {
      FUN_710326a3e0(&local_100,lVar5,uVar20);
      pcVar11 = pcVar8;
      if (((char)*local_f8 == '\f') &&
         (iVar15 = *(int *)((long)local_f8 + 1) + -1, 0 < *(int *)((long)local_f8 + 1))) {
        iVar13 = 0;
        do {
          iVar2 = iVar15 + iVar13;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)((long)local_100 + 0x28) + (long)*(int *)((long)local_f8 + 5) +
                           (long)iVar2 * 8);
          uVar16 = *(ulong *)(*(long *)((long)local_100 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar16 == 0xa8be95c66) {
            uVar14 = puVar1[1];
            if (-1 < (int)uVar14) {
              pcVar11 = (char *)((long)local_f8 + (long)(int)uVar14);
            }
            break;
          }
          iVar4 = iVar2 + -1;
          if (uVar16 < 0xa8be95c67) {
            iVar13 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar13 <= iVar15);
      }
      uVar14 = (uint)bVar9;
      switch(*pcVar11) {
      case '\x01':
      case '\x03':
        uVar7 = (uint)(byte)pcVar11[1];
        break;
      case '\x02':
        uVar7 = (uint)pcVar11[1];
        break;
      case '\x04':
        uVar7 = (uint)*(short *)(pcVar11 + 1);
        break;
      case '\x05':
        uVar7 = (uint)*(ushort *)(pcVar11 + 1);
        break;
      case '\x06':
      case '\a':
        uVar7 = *(uint *)(pcVar11 + 1);
        break;
      default:
        if (uVar14 == 0) goto LAB_7101d4a154;
        goto LAB_7101d49f64;
      }
      if (uVar7 == uVar14) {
LAB_7101d4a154:
        lVar21 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x308);
        lVar5 = *(long *)(lVar21 + 8);
        pcVar8 = *(char **)(lVar5 + 0x20);
        if ((*pcVar8 != '\f') || (iVar12 = *(int *)(pcVar8 + 1) + -1, *(int *)(pcVar8 + 1) < 1))
        goto LAB_7101d4a1f4;
        uVar16 = *(ulong *)(lVar5 + 0x48) & 0xffffffffff;
        iVar15 = 0;
        pbVar10 = &DAT_7104742dbb;
        goto LAB_7101d4a1a4;
      }
LAB_7101d49f64:
      uVar20 = uVar20 + 1;
      if (iVar12 <= (int)uVar20) break;
      lVar5 = *(long *)(lVar21 + 8);
    } while( true );
  }
  uVar16 = 0;
  while( true ) {
    if ("mnu_opt_shortmsg_blank"[uVar16] == '\0') break;
    cVar3 = "mnu_opt_shortmsg_blank"[uVar16 + 1];
    *(char *)((long)&local_f8 + uVar16) = "mnu_opt_shortmsg_blank"[uVar16];
    if (cVar3 == '\0') {
      uVar16 = uVar16 + 1;
      break;
    }
    *(char *)((long)&local_f8 + uVar16 + 1) = cVar3;
    uVar16 = uVar16 + 2;
  }
  *(undefined1 *)((long)&local_f8 + (uVar16 & 0xffffffff)) = 0;
  uVar20 = 0x811c9dc5;
  uVar14 = (uint)(byte)local_f8;
  local_100._4_4_ = (undefined4)uVar16;
  if (uVar14 == 0) {
    uVar16 = 0;
    local_100 = (undefined **)CONCAT44(local_100._4_4_,0x811c9dc5);
  }
  else {
    pbVar10 = (byte *)((long)&local_f8 + 1);
    uVar7 = uVar20;
    do {
      uVar7 = uVar7 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (uVar14 != 0);
    local_100 = (undefined **)CONCAT44(local_100._4_4_,uVar7);
    uVar16 = 0;
    bVar9 = (byte)local_f8;
    do {
      local_b0[uVar16] = bVar9;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      bVar9 = *(byte *)((long)&local_f8 + uVar16 + 1);
      uVar16 = uVar16 + 1;
    } while (bVar9 != 0);
  }
  local_b0[uVar16 & 0xffffffff] = 0;
  uVar14 = (uint)local_b0[0];
  local_b8 = CONCAT44((int)uVar16,(undefined4)local_b8);
  if (local_b0[0] != 0) {
    pbVar10 = local_b0;
    do {
      pbVar10 = pbVar10 + 1;
      uVar20 = uVar20 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar10;
    } while (uVar14 != 0);
  }
  local_b8 = CONCAT44((int)uVar16,uVar20);
LAB_7101d4a07c:
  pppplVar6 = (long ****)(ulong)param_2;
  FUN_7103771d60(&local_100,*plVar18,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  plVar18 = local_f8;
  if (*local_f8 == 0) {
    ppppbVar19 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar19 = *(byte *****)(*local_f8 + 0x88);
  }
  local_100 = &PTR_FUN_710523d9c8;
  local_f8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar18);
  }
  FUN_7103776640(&local_110,**(long **)(param_1 + 0xa0) + 8,ppppbVar19,pppplVar6,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_100,(long)&local_110,(long ****)"set_txt_title",pppplVar6,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_100,(char *)local_b0,pppplVar6,param_4,param_5,param_6,param_7,param_8
                );
  uVar16 = (ulong)local_f8;
  local_100 = &PTR_FUN_710523d9a8;
  local_f8 = (long *)0x0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  uVar16 = local_108;
  local_110 = &PTR_FUN_710523d988;
  local_108 = 0;
  if (uVar16 != 0) {
    uVar17 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar16);
  }
  return;
  while( true ) {
    iVar2 = iVar13 + -1;
    if (uVar17 <= uVar16) {
      iVar15 = iVar13 + 1;
      iVar2 = iVar12;
    }
    iVar12 = iVar2;
    if (iVar12 < iVar15) break;
LAB_7101d4a1a4:
    iVar13 = iVar12 + iVar15;
    if (iVar13 < 0) {
      iVar13 = iVar13 + 1;
    }
    iVar13 = iVar13 >> 1;
    puVar1 = (uint *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x28) + (long)*(int *)(pcVar8 + 5) +
                     (long)iVar13 * 8);
    uVar17 = *(ulong *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
    if (uVar17 == uVar16) {
      uVar20 = puVar1[1];
      if ((int)uVar20 < 0) {
LAB_7101d4a1f4:
        pbVar10 = &DAT_7104742dbb;
      }
      else {
        pbVar10 = (byte *)(pcVar8 + (int)uVar20);
      }
      break;
    }
  }
  if ((*pbVar10 - 0xb < 2) && (iVar12 = *(int *)(pbVar10 + 1), 0 < iVar12)) {
    uVar20 = 0;
    pcVar8 = "";
    do {
      uVar16 = (ulong)uVar20;
      FUN_710326a3e0(&local_100,lVar5,uVar20);
      pcVar11 = pcVar8;
      if (((char)*local_f8 == '\f') &&
         (iVar15 = *(int *)((long)local_f8 + 1) + -1, 0 < *(int *)((long)local_f8 + 1))) {
        iVar13 = 0;
        do {
          iVar2 = iVar15 + iVar13;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)((long)local_100 + 0x28) + (long)*(int *)((long)local_f8 + 5) +
                           (long)iVar2 * 8);
          uVar17 = *(ulong *)(*(long *)((long)local_100 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar17 == 0xa8be95c66) {
            uVar7 = puVar1[1];
            if (-1 < (int)uVar7) {
              pcVar11 = (char *)((long)local_f8 + (long)(int)uVar7);
            }
            break;
          }
          iVar4 = iVar2 + -1;
          if (uVar17 < 0xa8be95c67) {
            iVar13 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar13 <= iVar15);
      }
      switch(*pcVar11) {
      case '\x01':
      case '\x03':
        uVar7 = (uint)(byte)pcVar11[1];
        break;
      case '\x02':
        uVar7 = (uint)pcVar11[1];
        break;
      case '\x04':
        uVar7 = (uint)*(short *)(pcVar11 + 1);
        break;
      case '\x05':
        uVar7 = (uint)*(ushort *)(pcVar11 + 1);
        break;
      case '\x06':
      case '\a':
        uVar7 = *(uint *)(pcVar11 + 1);
        break;
      default:
        if (uVar14 == 0) goto LAB_7101d4a3ec;
        goto LAB_7101d4a340;
      }
      if (uVar7 == uVar14) {
LAB_7101d4a3ec:
        FUN_71003a4ca0((uint *)&local_100,"mel_shortmsg_%d",(ulong)bVar9,uVar16,param_4,param_5,
                       param_6,param_7,param_8);
        goto LAB_7101d4a354;
      }
LAB_7101d4a340:
      uVar20 = uVar20 + 1;
      if (iVar12 <= (int)uVar20) break;
      lVar5 = *(long *)(lVar21 + 8);
    } while( true );
  }
  local_f8 = (long *)((ulong)local_f8 & 0xffffffffffffff00);
  local_100 = (undefined **)0x0;
LAB_7101d4a354:
  for (uVar16 = 0; *(byte *)((long)&local_f8 + uVar16) != 0; uVar16 = uVar16 + 2) {
    local_b0[uVar16] = *(byte *)((long)&local_f8 + uVar16);
    if (0x3e < (int)uVar16 + 1U) {
      uVar16 = (ulong)((int)uVar16 + 1);
      break;
    }
    bVar9 = *(byte *)((long)&local_f8 + uVar16 + 1);
    if (bVar9 == 0) {
      uVar16 = uVar16 + 1;
      break;
    }
    local_b0[uVar16 + 1] = bVar9;
  }
  uVar20 = 0x811c9dc5;
  local_b0[uVar16 & 0xffffffff] = 0;
  uVar14 = (uint)local_b0[0];
  local_b8 = CONCAT44((int)uVar16,(undefined4)local_b8);
  if (local_b0[0] != 0) {
    pbVar10 = local_b0;
    do {
      pbVar10 = pbVar10 + 1;
      uVar20 = uVar20 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar10;
    } while (uVar14 != 0);
  }
  local_b8 = CONCAT44((int)uVar16,uVar20);
  goto LAB_7101d4a07c;
}

