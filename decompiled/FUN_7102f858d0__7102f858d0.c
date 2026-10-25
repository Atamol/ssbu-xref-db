// addr:      7102f858d0
// offset:    0x2f858d0
// name:      FUN_7102f858d0
// mangled:   
// signature: undefined FUN_7102f858d0(void)


void FUN_7102f858d0(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long ***ppplVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar9;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long ****pppplVar10;
  long ****pppplVar11;
  byte bVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long ***ppplStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_54;
  
  pppplVar11 = &ppplStack_70;
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)((long)param_1 + 0xcf1c) = 0;
  lVar13 = param_1[0x62];
  plVar14 = *(long **)(lVar13 + 0xd0);
  plVar15 = *(long **)(lVar13 + 0xd8);
  uVar9 = extraout_x1;
  if (plVar14 != plVar15) {
    iVar3 = (int)plVar14[1];
    while (iVar3 - 2U < 3) {
      if (plVar15 == plVar14 + 2) goto LAB_7102f85a2c;
      iVar3 = (int)plVar14[3];
      plVar14 = plVar14 + 2;
    }
  }
  if (plVar14 != plVar15) {
    do {
      lVar13 = *plVar14;
      if (lVar13 != 0) {
        if ((*(long *)(lVar13 + 0x68) == 0xc7071c266) || (*(long *)(lVar13 + 0x68) == 0x106c9108c9))
        {
          *(undefined1 *)(lVar13 + 0x110) = 1;
          FUN_71025e9d50((long *)(lVar13 + 0x108),uVar9,(long ****)param_3,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          bVar12 = *(byte *)(lVar13 + 0x118) & 0xfe;
          uVar9 = extraout_x1_00;
        }
        else {
          *(undefined1 *)(lVar13 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar13 + 0x108),uVar9,(long ****)param_3,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          bVar12 = *(byte *)(lVar13 + 0x118) | 1;
          uVar9 = extraout_x1_01;
        }
        *(byte *)(lVar13 + 0x118) = bVar12;
        if ((*(char *)(lVar13 + 0xe0) != '\0') && (*(long *)(lVar13 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar13 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar13 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar13 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar13 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar13 + 0xb0) + 0x10) = 0;
        }
      }
      do {
        plVar14 = plVar14 + 2;
        if (plVar14 == plVar15) goto LAB_7102f85a24;
      } while ((int)plVar14[1] - 2U < 3);
    } while (plVar14 != plVar15);
LAB_7102f85a24:
    lVar13 = param_1[0x62];
    plVar15 = *(long **)(lVar13 + 0xd8);
  }
LAB_7102f85a2c:
  plVar2 = param_1 + 0x19d0;
  for (plVar14 = *(long **)(lVar13 + 0xd0); plVar14 != plVar15; plVar14 = plVar14 + 2) {
    if ((*(uint *)(plVar14 + 1) < 2) &&
       (lVar13 = *plVar14, *(long *)(lVar13 + 0x68) == 0x11c81308b8)) {
      param_1[0x19cf] = lVar13;
      if (lVar13 != 0) {
        *(undefined1 *)(lVar13 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar13 + 0x108),uVar9,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        lVar13 = param_1[0x19cf];
        uVar9 = extraout_x1_03;
        if (lVar13 != 0) {
          *(byte *)(lVar13 + 0x118) = *(byte *)(lVar13 + 0x118) & 0xfe;
        }
      }
      goto LAB_7102f85a78;
    }
  }
  param_1[0x19cf] = 0;
LAB_7102f85a78:
  for (plVar14 = *(long **)(param_1[0x62] + 0xd0); plVar14 != *(long **)(param_1[0x62] + 0xd8);
      plVar14 = plVar14 + 2) {
    if ((*(uint *)(plVar14 + 1) < 2) &&
       (lVar13 = *plVar14, *(long *)(lVar13 + 0x68) == 0x14d9b86730)) {
      param_1[0x19d0] = lVar13;
      if (lVar13 != 0) {
        *(undefined1 *)(lVar13 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar13 + 0x108),uVar9,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        lVar13 = *plVar2;
        uVar9 = extraout_x1_04;
        if (lVar13 != 0) {
          if ((*(char *)(lVar13 + 0xe0) != '\0') && (*(long *)(lVar13 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar13 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar13 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar13 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar13 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar13 + 0xb0) + 0x10) = 0;
          }
          lVar13 = *plVar2;
          if (lVar13 != 0) {
            *(byte *)(lVar13 + 0x118) = *(byte *)(lVar13 + 0x118) & 0xfe;
            lVar13 = *plVar2;
            if (lVar13 != 0) {
              if ((*(char *)(lVar13 + 0xe0) != '\0') && (*(long *)(lVar13 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar13 + 200) + 0x32) = 0;
              }
              if (*(long *)(lVar13 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar13 + 0xd8) + 0x22) = 0;
              }
            }
          }
        }
      }
      goto LAB_7102f85ac4;
    }
  }
  param_1[0x19d0] = 0;
LAB_7102f85ac4:
  for (plVar14 = *(long **)(param_1[0x62] + 0xd0); plVar14 != *(long **)(param_1[0x62] + 0xd8);
      plVar14 = plVar14 + 2) {
    if ((*(uint *)(plVar14 + 1) < 2) &&
       (lVar13 = *plVar14, *(long *)(lVar13 + 0x68) == 0x1469406a90)) {
      param_1[0x19d1] = lVar13;
      if (lVar13 != 0) {
        *(undefined1 *)(lVar13 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar13 + 0x108),uVar9,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        lVar13 = param_1[0x19d1];
        if (lVar13 != 0) {
          if ((*(char *)(lVar13 + 0xe0) != '\0') && (*(long *)(lVar13 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar13 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar13 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar13 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar13 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar13 + 0xb0) + 0x10) = 0;
          }
          lVar13 = param_1[0x19d1];
          if (lVar13 != 0) {
            *(byte *)(lVar13 + 0x118) = *(byte *)(lVar13 + 0x118) | 1;
            lVar13 = param_1[0x19d1];
            if (lVar13 != 0) {
              if ((*(char *)(lVar13 + 0xe0) != '\0') && (*(long *)(lVar13 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar13 + 200) + 0x32) = 0;
              }
              if (*(long *)(lVar13 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar13 + 0xd8) + 0x22) = 0;
              }
            }
          }
        }
      }
      goto LAB_7102f85b10;
    }
  }
  param_1[0x19d1] = 0;
LAB_7102f85b10:
  FUN_7102633800(param_1[99],(long *********)"reflection_cubemap",param_3,param_4,(long ****)param_5
                 ,param_6,param_7,param_8);
  FUN_7102633a10(param_1[99],(long *********)"chara",1,param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  pppplVar10 = (long ****)0x1;
  FUN_7102633b90(param_1[99],(long *********)"stage",1,param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  puVar6 = DAT_710532ebd8;
  for (puVar1 = DAT_710532ebd0; puVar1 != puVar6; puVar1 = puVar1 + 1) {
    if ((*puVar1 & 0xffffffffff) != 0) {
      for (plVar14 = *(long **)(param_1[0x62] + 0xd0); plVar14 != *(long **)(param_1[0x62] + 0xd8);
          plVar14 = plVar14 + 2) {
        if ((*(uint *)(plVar14 + 1) < 2) &&
           (lVar13 = *plVar14, (*puVar1 & 0xffffffffff) == *(ulong *)(lVar13 + 0x68))) {
          if ((lVar13 != 0) && (*(char *)(lVar13 + 0xe0) != '\0')) {
            pppplVar10 = (long ****)0x1;
            ppplStack_70 = (long ***)0x71043174bd;
            FUN_71026527b0(*(undefined8 **)(lVar13 + 0xb8),&ppplStack_70,(long *********)0x1,
                           (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
          }
          break;
        }
      }
    }
  }
  ppplVar5 = *(long ****)(param_1[0x61] + 0xf8);
  uVar4 = *(undefined4 *)(param_1[0x61] + 0x100);
  puVar7 = (undefined4 *)
           FUN_710392e290(0x10,0x24,pppplVar10,(byte ****)param_4,(long ****)param_5,param_6,param_7
                          ,param_8);
  if (puVar7 == (undefined4 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      uStack_54 = 0;
      ppplStack_70 = (long ***)&DAT_00000024;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_54);
      pppplVar10 = pppplVar11;
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined4 *)
                   FUN_710392e290(0x10,0x24,pppplVar11,(byte ****)param_4,(long ****)param_5,param_6
                                  ,param_7,param_8), pppplVar10 = pppplVar11,
         puVar7 != (undefined4 *)0x0)) goto LAB_7102f85c44;
    }
    puVar7 = (undefined4 *)0x0;
  }
LAB_7102f85c44:
  *(undefined8 *)(puVar7 + 7) = 0;
  *(undefined8 *)(puVar7 + 5) = 0;
  *(undefined8 *)(puVar7 + 3) = 0;
  *(undefined8 *)(puVar7 + 1) = 0;
  uStack_64 = 0xc2140000;
  ppplStack_70 = ppplVar5;
  uStack_68 = uVar4;
  FUN_710318b620(puVar7,&ppplStack_70,pppplVar10,(byte ****)param_4,(long ****)param_5,param_6,
                 param_7,param_8);
  uVar8 = param_1[0x19e4];
  param_1[0x19e4] = (long)puVar7;
  if (uVar8 != 0) {
    FUN_710318b9b0(uVar8,extraout_x1_02,pppplVar10,(byte ****)param_4,(long ****)param_5,param_6,
                   param_7,param_8);
    FUN_710392eb40(uVar8);
  }
  return;
}

