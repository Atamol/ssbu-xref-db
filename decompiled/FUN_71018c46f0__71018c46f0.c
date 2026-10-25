// addr:      71018c46f0
// offset:    0x18c46f0
// name:      FUN_71018c46f0
// mangled:   
// signature: undefined __cdecl FUN_71018c46f0(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018c46f0(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long **pplVar2;
  long ***ppplVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long ****pppplVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long **pplVar15;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar10 = &local_50;
  if (*(int *)(param_1 + 0x150) != 1) goto LAB_71018c4930;
  puVar13 = *(undefined8 **)(*DAT_7105314510 + 0x78);
  lVar11 = *(long *)(*(long *)(param_1 + 0x178) + 0x80);
  plVar12 = *(long **)(lVar11 + 0x40);
  if (plVar12 == (long *)0x0) {
    bVar4 = *(char *)(lVar11 + 0xc0) != '\0';
  }
  else {
    if (*plVar12 != 0) {
      local_50 = (long ***)0x0;
      FUN_71037aea50((ulong *)&local_50,"b",(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      plVar12 = (long *)*plVar12;
      lVar5 = *plVar12;
      lVar11 = 0;
      if (lVar5 != 0) {
        lVar11 = *(long *)(*(long *)(lVar5 + 0x18) + 0x40);
        if (*(uint *)(lVar11 + 0xc) < 2) {
          plVar9 = (long *)(*(long *)(lVar11 + 0x18) +
                           ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar11 + 0xb) & 0x3f)) &
                           2) * 0x20);
          do {
            if (((int)plVar9[3] == 0x13) && (plVar6 = plVar9, plVar9[2] == 2)) break;
            piVar1 = (int *)((long)plVar9 + 0x1c);
            plVar9 = plVar9 + (long)*piVar1 * 4;
            plVar6 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar6 = (long *)(*(long *)(lVar11 + 0x10) + 0x10);
        }
        param_3 = "edited_menu_vibration";
        FUN_71038f4d40(lVar5,plVar6,"edited_menu_vibration");
        lVar11 = *plVar12;
      }
      FUN_710372d940(lVar11,(long *)&local_50,param_3,param_4,param_5,param_6,param_7,param_8);
      ppplVar3 = local_50;
      if (local_50 != (long ***)0x0) {
        pplVar2 = local_50[2];
        bVar4 = *(char *)local_50[1] != '\0';
        lVar11 = 0;
        do {
          if (*(char *)((long)pplVar2 + lVar11) == 's') {
            pplVar15 = ppplVar3[1];
            plVar12 = pplVar15[lVar11];
            if (plVar12 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar12);
            }
            pplVar15[lVar11] = (long *)0x0;
          }
          else if (*(char *)((long)pplVar2 + lVar11) == '\0') goto LAB_71018c4848;
          lVar11 = lVar11 + 1;
        } while( true );
      }
    }
    bVar4 = false;
  }
  goto LAB_71018c4854;
LAB_71018c4848:
  FUN_710392eb40((ulong)ppplVar3);
  local_50 = (long ***)0x0;
LAB_71018c4854:
  if (!(bool)(bVar4 ^ *(char *)(*(long *)*puVar13 + 0x67) != '\0')) goto LAB_71018c4930;
  *(bool *)(*(long *)*puVar13 + 0x67) = bVar4;
  plVar12 = (long *)(*DAT_7105314508 + 0x5b4dd8);
  plVar9 = (long *)(*DAT_7105314508 + 0x5b4de8);
  if (*plVar9 != 0) {
    *(byte *)(*plVar12 + 0x10) = *(byte *)(*plVar12 + 0x10) & 1;
    goto LAB_71018c4930;
  }
  plVar6 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&SUB_00000018;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar7 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,0x18,pppplVar10,param_4,param_5,param_6,param_7,
                                          param_8), plVar6 != (long *)0x0)) goto LAB_71018c490c;
    }
    plVar6 = (long *)0x0;
  }
LAB_71018c490c:
  *(undefined1 *)(plVar6 + 2) = 0;
  plVar6[1] = (long)plVar12;
  lVar11 = *plVar12;
  *plVar6 = lVar11;
  *(long **)(lVar11 + 8) = plVar6;
  *plVar12 = (long)plVar6;
  *plVar9 = *plVar9 + 1;
LAB_71018c4930:
  lVar11 = DAT_710532f8b0;
  puVar13 = DAT_710532f7a0;
  if (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) != 0) {
    if (DAT_710532f7a0 != (undefined8 *)0x0) {
      puVar14 = (uint *)*DAT_710532f7a0;
      if (((byte)*puVar14 >> 1 & 1) != 0) {
        lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
          FUN_7100653490(lVar5,0);
        }
        puVar14[0x12] = 3;
        if ((((puVar14[0x26] != 2) && (puVar14[0x3a] != 2)) && (puVar14[0x4e] != 2)) &&
           (((puVar14[0x62] != 2 && (puVar14[0x76] != 2)) &&
            ((puVar14[0x8a] != 2 && (puVar14[0x9e] != 2)))))) {
          *puVar14 = *puVar14 | 0x20;
        }
      }
      puVar14 = (uint *)*puVar13;
      if (((byte)*puVar14 >> 1 & 1) != 0) {
        lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x28);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
          FUN_7100653490(lVar5,0);
        }
        puVar14[0x26] = 3;
        if (((((puVar14[0x12] != 2) && (puVar14[0x3a] != 2)) && (puVar14[0x4e] != 2)) &&
            ((puVar14[0x62] != 2 && (puVar14[0x76] != 2)))) &&
           ((puVar14[0x8a] != 2 && (puVar14[0x9e] != 2)))) {
          *puVar14 = *puVar14 | 0x20;
        }
      }
      puVar14 = (uint *)*puVar13;
      if (((byte)*puVar14 >> 1 & 1) != 0) {
        lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x30);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
          FUN_7100653490(lVar5,0);
        }
        puVar14[0x3a] = 3;
        if ((((puVar14[0x12] != 2) && (puVar14[0x26] != 2)) && (puVar14[0x4e] != 2)) &&
           (((puVar14[0x62] != 2 && (puVar14[0x76] != 2)) &&
            ((puVar14[0x8a] != 2 && (puVar14[0x9e] != 2)))))) {
          *puVar14 = *puVar14 | 0x20;
        }
      }
      puVar14 = (uint *)*puVar13;
      if (((byte)*puVar14 >> 1 & 1) != 0) {
        lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x38);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
          FUN_7100653490(lVar5,0);
        }
        puVar14[0x4e] = 3;
        if ((((puVar14[0x12] != 2) && (puVar14[0x26] != 2)) && (puVar14[0x3a] != 2)) &&
           (((puVar14[0x62] != 2 && (puVar14[0x76] != 2)) &&
            ((puVar14[0x8a] != 2 && (puVar14[0x9e] != 2)))))) {
          *puVar14 = *puVar14 | 0x20;
        }
      }
      puVar14 = (uint *)*puVar13;
      if (((byte)*puVar14 >> 1 & 1) != 0) {
        lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x40);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
          FUN_7100653490(lVar5,0);
        }
        puVar14[0x62] = 3;
        if (((((puVar14[0x12] != 2) && (puVar14[0x26] != 2)) && (puVar14[0x3a] != 2)) &&
            ((puVar14[0x4e] != 2 && (puVar14[0x76] != 2)))) &&
           ((puVar14[0x8a] != 2 && (puVar14[0x9e] != 2)))) {
          *puVar14 = *puVar14 | 0x20;
        }
      }
      puVar14 = (uint *)*puVar13;
      if (((byte)*puVar14 >> 1 & 1) != 0) {
        lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x48);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
          FUN_7100653490(lVar5,0);
        }
        puVar14[0x76] = 3;
        if ((((puVar14[0x12] != 2) && (puVar14[0x26] != 2)) && (puVar14[0x3a] != 2)) &&
           (((puVar14[0x4e] != 2 && (puVar14[0x62] != 2)) &&
            ((puVar14[0x8a] != 2 && (puVar14[0x9e] != 2)))))) {
          *puVar14 = *puVar14 | 0x20;
        }
      }
      puVar14 = (uint *)*puVar13;
      if (((byte)*puVar14 >> 1 & 1) != 0) {
        lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x50);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
          FUN_7100653490(lVar5,0);
        }
        puVar14[0x8a] = 3;
        if ((((puVar14[0x12] != 2) && (puVar14[0x26] != 2)) && (puVar14[0x3a] != 2)) &&
           (((puVar14[0x4e] != 2 && (puVar14[0x62] != 2)) &&
            ((puVar14[0x76] != 2 && (puVar14[0x9e] != 2)))))) {
          *puVar14 = *puVar14 | 0x20;
        }
      }
      puVar14 = (uint *)*puVar13;
      if (((byte)*puVar14 >> 1 & 1) != 0) {
        lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x58);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x5920) == '\x06')) {
          FUN_7100653490(lVar5,0);
        }
        puVar14[0x9e] = 3;
        if ((((((puVar14[0x12] != 2) && (puVar14[0x26] != 2)) && (puVar14[0x3a] != 2)) &&
             ((puVar14[0x4e] != 2 && (puVar14[0x62] != 2)))) && (puVar14[0x76] != 2)) &&
           (puVar14[0x8a] != 2)) {
          *puVar14 = *puVar14 | 0x20;
        }
      }
    }
    lVar11 = *(long *)(lVar11 + 8);
    *(undefined8 *)(lVar11 + 0x318) = *(undefined8 *)(lVar11 + 0x310);
    *(undefined1 *)(lVar11 + 0x328) = 0;
    if (-1 < *(int *)(lVar11 + 0x134)) {
      uVar7 = 0;
      do {
        if (0x12 < uVar7) goto LAB_71018c4f48;
        if (*(int *)(lVar11 + 0xe8 + uVar7 * 4) == 9) goto LAB_71018c4ed0;
        bVar4 = (long)uVar7 < (long)*(int *)(lVar11 + 0x134);
        uVar7 = uVar7 + 1;
      } while (bVar4);
    }
    if (*(int *)(lVar11 + 0x138) != 0) {
      *(undefined8 *)(lVar11 + 0x128) = 0;
      *(undefined8 *)(lVar11 + 0x130) = 0x300000000;
      *(undefined8 *)(lVar11 + 0x138) = 0xffffffff;
      *(undefined4 *)(lVar11 + 0x140) = 0xffffffff;
      *(undefined8 *)(lVar11 + 8) = 0;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined1 *)(lVar11 + 0x144) = 0;
      *(undefined8 *)(lVar11 + 0x118) = 0;
      *(undefined8 *)(lVar11 + 0x120) = 0;
      *(undefined8 *)(lVar11 + 0x108) = 0;
      *(undefined8 *)(lVar11 + 0x110) = 0;
      *(undefined8 *)(lVar11 + 0xf8) = 0;
      *(undefined8 *)(lVar11 + 0x100) = 0;
      *(undefined8 *)(lVar11 + 0xe8) = 0x900000000;
      *(undefined8 *)(lVar11 + 0xf0) = 0x400000008;
    }
  }
LAB_71018c4ed0:
  lVar11 = *(long *)(DAT_710532f820 + 8);
  uVar8 = FUN_7101eefe30(*(long *)(*(long *)(lVar11 + 0x110) + 0x80));
  if ((*(int *)(lVar11 + 0xf8) != 0 || (((uint)uVar8 ^ 0xffffffff) & 1) != 0) ||
      *(char *)(lVar11 + 0x142) != '\0') {
    lVar11 = *(long *)(DAT_710532f820 + 8);
    *(undefined1 *)(lVar11 + 0x142) = 0;
    *(undefined4 *)(lVar11 + 0x11c) = 0;
    if (0x12 < *(uint *)(lVar11 + 0xf4)) {
LAB_71018c4f48:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar11 + (long)(int)*(uint *)(lVar11 + 0xf4) * 4 + 0xa8) = 5;
  }
  return;
}

