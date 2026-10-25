// addr:      7103374fe0
// offset:    0x3374fe0
// name:      FUN_7103374fe0
// mangled:   
// signature: bool __cdecl FUN_7103374fe0(long * * * param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

bool FUN_7103374fe0(long ***param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *********ppppppppplVar6;
  byte ****ppppbVar7;
  char *pcVar8;
  long ****pppplVar9;
  long **pplVar10;
  long **pplVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  byte *pbVar19;
  long ***ppplVar21;
  undefined8 local_490;
  undefined4 local_488;
  undefined8 local_380;
  byte local_378 [264];
  undefined8 local_270;
  byte local_268 [264];
  uint uStack_160;
  uint local_15c;
  byte abStack_158 [264];
  byte *pbVar20;
  
  ppppbVar7 = (byte ****)&local_490;
  pplVar11 = param_1[2] + -2;
  uVar18 = *(uint *)(param_1[2] + -1) & 0xf;
  pplVar10 = pplVar11;
  if (uVar18 == 4) {
LAB_7103375064:
    plVar12 = *pplVar10 + 3;
  }
  else {
    if (uVar18 == 3) {
      if (0 < (long)param_1[3][3]) {
        FUN_71038fec40((long)param_1);
        pplVar10 = param_1[2] + -2;
      }
      FUN_71039080b0(param_1,(float *)pplVar10);
      pplVar11 = param_1[2] + -2;
      goto LAB_7103375064;
    }
    plVar12 = (long *)0x0;
  }
  param_1[2] = pplVar11;
  FUN_71038f4b20((long)param_1,"key_context");
  FUN_71038f4fc0((long)param_1,-0xf4628);
  pplVar10 = param_1[2] + -2;
  uVar18 = *(uint *)(param_1[2] + -1) & 0xf;
  if (uVar18 == 2) {
    plVar16 = *pplVar10;
  }
  else {
    if (uVar18 != 7) {
      param_1[2] = pplVar10;
      return false;
    }
    plVar16 = *pplVar10 + 5;
  }
  param_1[2] = pplVar10;
  if (plVar12 == (long *)0x0) {
    return false;
  }
  if (plVar16 == (long *)0x0) {
    return false;
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    while( true ) {
      bVar2 = *(byte *)(param_2 + uVar5);
      if (bVar2 == 0) break;
      local_268[uVar5] = bVar2;
      if (0x102 < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      bVar2 = ((byte *)(param_2 + uVar5))[1];
      if (bVar2 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      local_268[uVar5 + 1] = bVar2;
      uVar5 = uVar5 + 2;
    }
  }
  uVar15 = 0x811c9dc5;
  local_268[uVar5 & 0xffffffff] = 0;
  local_270 = uVar5 << 0x20;
  uVar14 = (uint)local_268[0];
  uVar18 = uVar15;
  if (local_268[0] != 0) {
    pbVar20 = local_268;
    do {
      pbVar20 = pbVar20 + 1;
      uVar18 = uVar18 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar20;
    } while (uVar14 != 0);
  }
  local_270 = CONCAT44((int)uVar5,uVar18);
  uVar5 = 0;
  while( true ) {
    bVar2 = *(byte *)((long)plVar12 + uVar5);
    if (bVar2 == 0) break;
    local_378[uVar5] = bVar2;
    if (0x102 < (int)uVar5 + 1U) {
      uVar5 = (ulong)((int)uVar5 + 1);
      break;
    }
    bVar2 = ((byte *)((long)plVar12 + uVar5))[1];
    if (bVar2 == 0) {
      uVar5 = uVar5 + 1;
      break;
    }
    local_378[uVar5 + 1] = bVar2;
    uVar5 = uVar5 + 2;
  }
  local_378[uVar5 & 0xffffffff] = 0;
  local_380 = uVar5 << 0x20;
  uVar14 = (uint)local_378[0];
  uVar18 = uVar15;
  if (local_378[0] != 0) {
    pbVar20 = local_378;
    do {
      pbVar20 = pbVar20 + 1;
      uVar18 = uVar18 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar20;
    } while (uVar14 != 0);
  }
  local_380 = CONCAT44((int)uVar5,uVar18);
  uVar18 = 0x2e;
  lVar17 = 9;
  local_488 = 0x636c2e;
  do {
    uVar15 = uVar15 * 0x89 ^ uVar18;
    uVar18 = (uint)*(byte *)((long)&local_490 + lVar17);
    lVar17 = lVar17 + 1;
  } while (uVar18 != 0);
  local_490 = (byte ***)CONCAT44(3,uVar15);
  FUN_710323b190(&uStack_160,(long)&local_270,(long)&local_380,(long)&local_490);
  if (local_15c == 0) {
    uVar5 = 0;
  }
  else {
    uVar18 = 0xffffffff;
    pbVar20 = abStack_158;
    do {
      pbVar19 = pbVar20 + 1;
      bVar2 = *pbVar20;
      uVar15 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar15 = (uint)bVar2;
      }
      uVar18 = (&DAT_7104754084)[(uVar15 ^ uVar18) & 0xff] ^ uVar18 >> 8;
      pbVar20 = pbVar19;
    } while (pbVar19 < abStack_158 + local_15c);
    uVar5 = (ulong)~uVar18;
  }
  FUN_710353da30((uint *)&local_270,uVar5 | ((long)(int)local_15c & 0xffU) << 0x20);
  lVar17 = DAT_7105332f28;
  uVar18 = (uint)local_270;
  if ((uint)local_270 == 0xffffff) {
    return false;
  }
  if (((uint)local_270 < *(uint *)(DAT_7105332f20 + 0x18)) &&
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + (local_270 & 0xffffffff) * 8 + 4) != '\0')) {
    uVar15 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (local_270 & 0xffffffff) * 8);
    if ((uVar15 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar15)) goto LAB_7103375368;
    plVar12 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar15 * 0x18);
    if (((*(char *)((long)plVar12 + 0xc) == '\0' || plVar12 == (long *)0x0) ||
        (*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar15 * 0x18 + 0xd) != '\x03')) ||
       (*plVar12 == 0)) goto LAB_7103375368;
  }
  else {
LAB_7103375368:
    uVar5 = local_270 & 0xffffffff;
    if ((uint)local_270 != 0xffffff) {
      std::recursive_mutex::lock();
      FUN_71035465b0(lVar17,uVar18,1,ppppbVar7,param_5,param_6,param_7,param_8);
      std::recursive_mutex::unlock();
      if ((uVar18 < *(uint *)(DAT_7105332f20 + 0x18)) &&
         (*(char *)(*(long *)(DAT_7105332f20 + 8) + uVar5 * 8 + 4) != '\0')) {
        uVar18 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar5 * 8);
        if ((uVar18 != 0xffffff) && (uVar18 < *(uint *)(DAT_7105332f20 + 0x1c))) {
          plVar12 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar18 * 0x18);
          if ((((*(char *)((long)plVar12 + 0xc) != '\0') && (plVar12 != (long *)0x0)) &&
              (*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar18 * 0x18 + 0xd) == '\x03'))
             && (*plVar12 != 0)) goto LAB_71033754b4;
        }
      }
    }
    do {
      do {
        do {
          do {
            nn::os::SleepThread(1000000);
          } while ((uint)local_270 == 0xffffff);
        } while ((*(uint *)(DAT_7105332f20 + 0x18) <= (uint)local_270) ||
                (*(char *)(*(long *)(DAT_7105332f20 + 8) + (local_270 & 0xffffffff) * 8 + 4) == '\0'
                ));
        uVar18 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (local_270 & 0xffffffff) * 8);
      } while ((uVar18 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar18));
      plVar12 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar18 * 0x18);
    } while (((*(char *)((long)plVar12 + 0xc) == '\0' || plVar12 == (long *)0x0) ||
             (*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar18 * 0x18 + 0xd) != '\x03'))
            || (*plVar12 == 0));
  }
LAB_71033754b4:
  uVar18 = (uint)local_270;
  uVar5 = local_270 & 0xffffffff;
  if ((uint)local_270 == 0xffffff) {
    ppplVar21 = (long ***)0x0;
  }
  else {
    if (((uint)local_270 < *(uint *)(DAT_7105332f20 + 0x18)) &&
       (*(char *)(*(long *)(DAT_7105332f20 + 8) + uVar5 * 8 + 4) != '\0')) {
      uVar15 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar5 * 8);
      if ((uVar15 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar15)) goto LAB_7103375530;
      puVar13 = (undefined8 *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar15 * 0x18);
      ppplVar21 = (long ***)0x0;
      if ((*(char *)((long)puVar13 + 0xc) != '\0') && (puVar13 != (undefined8 *)0x0)) {
        ppplVar21 = (long ***)*puVar13;
      }
    }
    else {
LAB_7103375530:
      ppplVar21 = (long ***)0x0;
    }
    lVar17 = **(long **)(DAT_7105332f20 + 0x78);
    if ((uint)local_270 < *(uint *)(*(long *)(lVar17 + 0x40) + 4)) {
      uVar15 = (uint)((ulong)*(undefined8 *)(*(long *)(lVar17 + 0x60) + uVar5 * 0x20) >> 0x20);
      uVar14 = uVar15 >> 8;
      if ((uVar14 != 0xffffff) &&
         (uVar1 = *(uint *)(*(long *)(lVar17 + 0x40) + 8), uVar15 = uVar15 >> 8,
         uVar14 <= uVar1 && uVar1 != uVar15)) {
        lVar4 = FUN_7103541e10(lVar17,*(long *)(lVar17 + 0x90) +
                                      ((ulong)*(uint *)(*(long *)(lVar17 + 0x68) + (ulong)uVar15 * 8
                                                       + 4) & 0xffffff) * 0x10,
                               *(int *)(*(long *)(DAT_7105332f20 + 0x10) +
                                        (ulong)*(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar5 * 8)
                                        * 0x18 + 0x10));
        ppppppppplVar6 =
             (long *********)
             (ulong)*(uint *)(*(long *)(lVar17 + 0xa0) + (ulong)*(uint *)(lVar4 + 4) * 0x10 + 8);
        goto LAB_71033755c8;
      }
    }
  }
  ppppppppplVar6 = (long *********)0x0;
LAB_71033755c8:
  pcVar8 = "UiScritPlayer:require";
  pppplVar9 = (long ****)0x1;
  iVar3 = FUN_710372d730(param_1,ppplVar21,ppppppppplVar6,(byte ****)"UiScritPlayer:require",1,
                         param_6,param_7,param_8);
  if (uVar18 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar18,ppppppppplVar6,(byte ****)pcVar8,pppplVar9,param_6,param_7,
                   param_8);
  }
  return iVar3 == 0;
}

