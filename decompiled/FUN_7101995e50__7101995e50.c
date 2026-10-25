// addr:      7101995e50
// offset:    0x1995e50
// name:      FUN_7101995e50
// mangled:   
// signature: undefined __cdecl FUN_7101995e50(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * * param_7, long * * param_8)


void FUN_7101995e50(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ****param_7,long **param_8)

{
  ulong *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined1 uVar15;
  ushort uVar16;
  int iVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_14;
  long ****pppplVar18;
  undefined8 uVar19;
  byte ****ppppbVar20;
  undefined2 uVar21;
  uint uVar22;
  long *plVar23;
  undefined2 *puVar24;
  ushort *puVar25;
  int *piVar26;
  undefined4 uVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  long *plVar37;
  byte ****ppppbVar38;
  ulong unaff_x28;
  float fVar39;
  undefined1 auVar40 [16];
  undefined4 local_2d0 [2];
  undefined **local_2c8;
  long local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_290 [2];
  undefined **local_288;
  long local_280;
  undefined8 local_278;
  undefined1 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 local_250 [2];
  undefined **local_248;
  long local_240;
  undefined8 local_238;
  undefined1 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 local_210 [2];
  undefined **local_208;
  long local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0 [2];
  undefined **local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  long ********local_190;
  ulong local_188;
  undefined **local_180;
  ulong local_178;
  undefined **local_170;
  uint local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined **local_148;
  ulong local_140;
  long ***local_138;
  undefined8 *local_130 [8];
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  long *local_c8;
  undefined **local_c0;
  long *local_b8 [9];
  undefined8 extraout_x1_13;
  
  if (*(char *)(param_1 + 0x3a4) != '\0') {
    FUN_7101df6680(*(long *)(param_1 + 0x388),6,(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    if (*(int *)(param_1 + 0x3a8) == 0) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x2a4) = 0;
      *(undefined8 *)(param_1 + 0x29c) = 0;
      *(undefined8 *)(param_1 + 0x294) = 0;
      *(undefined8 *)(param_1 + 0x28c) = 0;
      *(undefined8 *)(param_1 + 0x284) = 0;
      *(undefined8 *)(param_1 + 0x27c) = 0;
      *(undefined8 *)(param_1 + 0x274) = 0;
      *(undefined8 *)(param_1 + 0x26c) = 0;
      *(undefined8 *)(param_1 + 0x264) = 0;
      *(undefined8 *)(param_1 + 0x2b4) = 0xffffffff00000000;
      *(undefined1 *)(param_1 + 700) = 0;
      *(undefined4 *)(param_1 + 0x260) = 0xb;
      *(undefined8 *)(param_1 + 0x2ac) = 0xffffffff00000001;
      uVar22 = 1;
    }
    else {
      if (0x11 < *(int *)(param_1 + 0x2ac)) {
        return;
      }
      uVar22 = *(int *)(param_1 + 0x2ac) + 1;
      *(uint *)(param_1 + 0x2ac) = uVar22;
      if (0x12 < uVar22) goto LAB_7101995eb0;
    }
    lVar10 = param_1 + (long)(int)uVar22 * 4;
    uVar27 = 10;
    goto LAB_710199609c;
  }
  if (*(char *)(param_1 + 0x39c) != '\0') {
    lVar10 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    if ((lVar10 != 0) &&
       (plVar11 = (long *)FUN_71037964b0(lVar10,0x71042914b5), param_2 = extraout_x1,
       plVar11 != (long *)0x0)) {
      auVar40 = (**(code **)(*plVar11 + 0x138))();
      param_2 = auVar40._8_8_;
      if ((auVar40._0_8_ & 1) == 0) goto LAB_7101995f64;
    }
    *(undefined1 *)(param_1 + 0x39c) = 0;
    lVar10 = *(long *)(*(long *)(param_1 + 0x388) + 0x28);
    lVar29 = *(long *)(lVar10 + 0x1b8);
    if (lVar29 != 0) {
      lVar10 = lVar10 + 0x1b8;
      lVar34 = lVar10;
      do {
        if (99 < *(int *)(lVar29 + 0x20)) {
          lVar34 = lVar29;
        }
        lVar29 = *(long *)(lVar29 + (ulong)(*(int *)(lVar29 + 0x20) < 100) * 8);
      } while (lVar29 != 0);
      if (((lVar34 != lVar10) && (*(int *)(lVar34 + 0x20) < 0x65)) &&
         (plVar11 = *(long **)(lVar34 + 0x28), plVar11 != (long *)0x0)) {
        (**(code **)(*plVar11 + 0x208))(plVar11,1);
        param_3 = (long *********)0x0;
        (**(code **)(*plVar11 + 0x388))(plVar11,0);
        param_2 = extraout_x1_00;
      }
    }
  }
LAB_7101995f64:
  if (*(char *)(param_1 + 0x39b) != '\0') {
    lVar10 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    if ((lVar10 != 0) &&
       (plVar11 = (long *)FUN_71037964b0(lVar10,0x71042914b5), plVar11 != (long *)0x0)) {
      auVar40 = (**(code **)(*plVar11 + 0x138))();
      param_2 = auVar40._8_8_;
      if ((auVar40._0_8_ & 1) == 0) goto LAB_7101995ff8;
    }
    *(undefined1 *)(param_1 + 0x39b) = 0;
    FUN_7103776640(&local_c0,param_1 + 0x48,(byte ****)"set_parts_aw",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar11 = local_b8[0];
    FUN_7103778630(0,(long)local_b8[0],0x7104400c4b);
    local_c0 = &PTR_FUN_710523d988;
    local_b8[0] = (long *)0x0;
    param_2 = extraout_x1_01;
    if (plVar11 != (long *)0x0) {
      uVar12 = plVar11[3];
      plVar11[2] = (long)&PTR_FUN_710523d9a8;
      plVar11[3] = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40((ulong)plVar11);
      param_2 = extraout_x1_02;
    }
  }
LAB_7101995ff8:
  if (*(int *)(param_1 + 0x2b4) == 0) {
    *(undefined2 *)(param_1 + 0x396) = 0xffff;
    FUN_71019a0940(param_1,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  iVar17 = *(int *)(*(long *)(param_1 + 0x120) + 0x25c);
  if (iVar17 == 1) {
    iVar17 = 1;
LAB_71019960c0:
    param_3 = (long *********)0x0;
    FUN_7103771a80((long *)(param_1 + 0x118),iVar17,0);
  }
  else if (iVar17 == 0) {
    iVar17 = 0;
    goto LAB_71019960c0;
  }
  uVar22 = *(uint *)(param_1 + 0x390);
  uVar12 = (ulong)uVar22;
  if (*(uint *)(*(long *)(param_1 + 0x118) + 0x254) == uVar22) {
    bVar8 = false;
  }
  else {
    FUN_71019a0b60(param_1,uVar22,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    iVar17 = *(int *)(*(long *)(param_1 + 0x118) + 0x254);
    param_3 = (long *********)0x1;
    param_4 = (byte ****)0x1;
    *(int *)(param_1 + 0x390) = iVar17;
    FUN_71019a0ce0(param_1,iVar17,1,(byte ****)0x1,param_5,param_6,param_7,param_8);
    uVar12 = extraout_x1_03;
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = (long *********)&DAT_00000004;
      uVar14 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      uVar12 = extraout_x1_04;
      if ((uVar14 & 1) == 0) goto LAB_7101996198;
      FUN_71024076d0(local_1d0,0x151ca6c028);
      uVar12 = extraout_x1_05;
      if (((local_1c0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1b8 == DAT_7106dd53ac)) {
        piVar26 = (int *)(local_1c0 + 0x38);
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar8) {
            *piVar26 = *piVar26 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    else {
LAB_7101996198:
      local_1b8 = 0x87650000000000;
      local_1a8 = 0xffffffffffffffff;
      uStack_1a0 = 0;
      local_1d0[0] = 0;
      local_198 = 0;
    }
    local_1c8 = &PTR_FUN_7104f73d50;
    bVar8 = true;
    local_1c0 = 0;
    local_1b0 = 0;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x388);
  if (*(int *)(param_1 + 0x720) != *(int *)(puVar13 + 0xd1)) {
    *(int *)(param_1 + 0x720) = *(int *)(puVar13 + 0xd1);
    FUN_71019a0b60(param_1,*(int *)(param_1 + 0x390),(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    puVar13 = *(undefined8 **)(param_1 + 0x388);
    uVar12 = extraout_x1_06;
  }
  iVar17 = *(int *)(puVar13[7] + 0x2a4);
  if (iVar17 < 0) {
LAB_7101996244:
    uVar22 = 0xffff;
  }
  else {
    if ((*(uint *)(puVar13 + 0x59) & 0xffffff) == 0) {
      iVar28 = (int)((ulong)(puVar13[0x49] - puVar13[0x48]) >> 3);
    }
    else {
      iVar28 = *(int *)(puVar13 + 0x61);
    }
    if (iVar28 <= iVar17) goto LAB_7101996244;
    uVar22 = (uint)**(ushort **)(puVar13[0x48] + (long)iVar17 * 8);
  }
  if (uVar22 != *(ushort *)(param_1 + 0x396)) {
    *(short *)(param_1 + 0x396) = (short)uVar22;
    FUN_7103776640(&local_d0,param_1 + 0x30,(byte ****)"set_parts_aw_bg",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar16 = *(ushort *)(param_1 + 0x396);
    if ((ulong)uVar16 != 0xffff) {
      if (uVar16 >> 4 < 0x177) {
        puVar24 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar16 * 0x50 + 72000);
      }
      else {
        puVar24 = &DAT_710532a878;
        if (((ushort)(uVar16 + 0xe890) < 100) &&
           (lVar10 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar16 + 0xe890) * 0x50,
           *(short *)(lVar10 + 0x88cc8) != -1)) {
          puVar24 = (undefined2 *)(lVar10 + 0x88cc0);
        }
      }
      uVar12 = (ulong)(short)puVar24[4];
      lVar10 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if (uVar12 != 0xffffffffffffffff) {
        uVar12 = (ulong)*(ushort *)(lVar10 + uVar12 * 2 + 0x60);
      }
      uVar14 = (*(long *)(lVar10 + 0x28) - *(long *)(lVar10 + 0x20) >> 6) * -0x3333333333333333;
      puVar2 = (undefined2 *)(*(long *)(lVar10 + 0x20) + uVar12 * 0x140);
      if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
        puVar2 = &DAT_7105182b08;
      }
      if (*(char *)(puVar2 + 0x2f) == '\0') {
        if (*(byte *)(puVar2 + 0x36) - 1 < 3) {
          uVar22 = 0x20301 >> (ulong)((*(byte *)(puVar2 + 0x36) - 1 & 3) << 3);
        }
        else {
          uVar22 = 0;
        }
      }
      else {
        uVar22 = 4;
      }
      pppplVar18 = (long ****)0x0;
      FUN_710339dde0((uint *)&local_c0,(char)uVar22,'\0');
      FUN_7103778300(0x3f800000,(long)local_c8,(long)local_b8);
      FUN_7103776910(&local_138,(long)&local_d0,(long ****)"set_fxui_back_nothing",pppplVar18,
                     param_4,param_5,param_6,param_7,param_8);
      puVar13 = local_130[0];
      FUN_710377abf0((long *)*local_130[0],(uVar22 & 0xff) == 0);
      local_138 = (long ***)&PTR_FUN_710523d9a8;
      local_130[0] = (undefined8 *)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar13);
      }
      FUN_7103776910(&local_138,(long)&local_d0,(long ****)"set_fxui_back_attack",pppplVar18,param_4
                     ,param_5,param_6,param_7,param_8);
      puVar13 = local_130[0];
      FUN_710377abf0((long *)*local_130[0],(uVar22 & 0xff) == 1);
      local_138 = (long ***)&PTR_FUN_710523d9a8;
      local_130[0] = (undefined8 *)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar13);
      }
      FUN_7103776910(&local_138,(long)&local_d0,(long ****)"set_fxui_back_defence",pppplVar18,
                     param_4,param_5,param_6,param_7,param_8);
      puVar13 = local_130[0];
      FUN_710377abf0((long *)*local_130[0],(uVar22 & 0xff) == 2);
      local_138 = (long ***)&PTR_FUN_710523d9a8;
      local_130[0] = (undefined8 *)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar13);
      }
      FUN_7103776910(&local_138,(long)&local_d0,(long ****)"set_fxui_back_throw",pppplVar18,param_4,
                     param_5,param_6,param_7,param_8);
      puVar13 = local_130[0];
      FUN_710377abf0((long *)*local_130[0],(uVar22 & 0xff) == 3);
      local_138 = (long ***)&PTR_FUN_710523d9a8;
      local_130[0] = (undefined8 *)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar13);
      }
      FUN_7103776910(&local_138,(long)&local_d0,(long ****)"set_fxui_back_supporter",pppplVar18,
                     param_4,param_5,param_6,param_7,param_8);
      puVar13 = local_130[0];
      FUN_710377abf0((long *)*local_130[0],(uVar22 & 0xff) == 4);
      local_138 = (long ***)&PTR_FUN_710523d9a8;
      local_130[0] = (undefined8 *)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar13);
      }
      FUN_7103776910(&local_138,(long)&local_d0,(long ****)"set_fxui_ef_mirage",pppplVar18,param_4,
                     param_5,param_6,param_7,param_8);
      puVar13 = local_130[0];
      FUN_710377aa20((long *)*local_130[0],0);
      local_138 = (long ***)&PTR_FUN_710523d9a8;
      local_130[0] = (undefined8 *)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar13);
      }
      sVar4 = puVar24[4];
      uVar14 = (ulong)sVar4;
      puVar1 = (ulong *)(param_1 + 0x3e0);
      lVar10 = *DAT_7105329f98;
      uVar12 = *(ulong *)(param_1 + 1000);
      if (uVar12 != 0) {
        uVar32 = uVar12 - 1;
        if ((uVar32 & uVar12) == 0) {
          uVar30 = uVar32 & uVar14;
        }
        else {
          uVar30 = uVar14;
          if (uVar12 <= uVar14) {
            uVar30 = 0;
            if (uVar12 != 0) {
              uVar30 = uVar14 / uVar12;
            }
            uVar30 = uVar14 - uVar30 * uVar12;
          }
        }
        plVar11 = *(long **)(*puVar1 + uVar30 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          if ((uVar32 & uVar12) == 0) {
            do {
              uVar31 = plVar11[1];
              if (uVar31 != uVar14 && (uVar31 & uVar32) != uVar30) break;
              if ((uVar31 == uVar14) && ((short)plVar11[2] == sVar4)) goto LAB_710199786c;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              uVar32 = plVar11[1];
              if (uVar32 == uVar14) {
                if ((short)plVar11[2] == sVar4) goto LAB_710199786c;
              }
              else {
                if (uVar12 <= uVar32) {
                  uVar31 = 0;
                  if (uVar12 != 0) {
                    uVar31 = uVar32 / uVar12;
                  }
                  uVar32 = uVar32 - uVar31 * uVar12;
                }
                if (uVar32 != uVar30) break;
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      plVar11 = *(long **)(param_1 + 0x710);
      uVar16 = *(ushort *)(plVar11 + 2);
      uVar32 = (ulong)(short)uVar16;
      if (uVar32 != 0xffffffffffffffff && uVar12 != 0) {
        uVar31 = uVar12 - 1;
        uVar30 = uVar31 & uVar12;
        if (uVar30 == 0) {
          uVar35 = uVar31 & uVar32;
        }
        else {
          uVar35 = uVar32;
          if (uVar12 <= uVar32) {
            uVar35 = 0;
            if (uVar12 != 0) {
              uVar35 = uVar32 / uVar12;
            }
            uVar35 = uVar32 - uVar35 * uVar12;
          }
        }
        uVar33 = *puVar1;
        puVar13 = *(undefined8 **)(uVar33 + uVar35 * 8);
        if ((puVar13 != (undefined8 *)0x0) && (plVar23 = (long *)*puVar13, plVar23 != (long *)0x0))
        {
          if (uVar30 == 0) {
            do {
              uVar36 = plVar23[1];
              if (uVar36 != uVar32 && (uVar36 & uVar31) != uVar35) break;
              if ((uVar36 == uVar32) && (*(ushort *)(plVar23 + 2) == uVar16)) goto LAB_7101997940;
              plVar23 = (long *)*plVar23;
            } while (plVar23 != (long *)0x0);
          }
          else {
            do {
              uVar36 = plVar23[1];
              if (uVar36 == uVar32) {
                if (*(ushort *)(plVar23 + 2) == uVar16) goto LAB_7101997940;
              }
              else {
                if (uVar12 <= uVar36) {
                  uVar6 = 0;
                  if (uVar12 != 0) {
                    uVar6 = uVar36 / uVar12;
                  }
                  uVar36 = uVar36 - uVar6 * uVar12;
                }
                if (uVar36 != uVar35) break;
              }
              plVar23 = (long *)*plVar23;
            } while (plVar23 != (long *)0x0);
          }
        }
      }
      goto LAB_71019968a8;
    }
    FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_fxui_back_nothing",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    plVar11 = local_b8[0];
    FUN_710377abf0((long *)*local_b8[0],0);
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_fxui_back_attack",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    plVar11 = local_b8[0];
    FUN_710377abf0((long *)*local_b8[0],0);
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_fxui_back_defence",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    plVar11 = local_b8[0];
    FUN_710377abf0((long *)*local_b8[0],0);
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_fxui_back_throw",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    plVar11 = local_b8[0];
    FUN_710377abf0((long *)*local_b8[0],0);
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_fxui_back_supporter",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    plVar11 = local_b8[0];
    FUN_710377abf0((long *)*local_b8[0],0);
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    FUN_7103776640(&local_c0,param_1 + 0x48,(byte ****)"set_parts_aw",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_138,(long)&local_c0,(long ****)"set_rep_spirit_aw",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    puVar13 = local_130[0];
    FUN_71037790a0((long)local_130[0],1,param_3,param_4,param_5,param_6,param_7,param_8);
    local_138 = (long ***)&PTR_FUN_710523d9a8;
    local_130[0] = (undefined8 *)0x0;
    if (puVar13 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar13);
    }
    FUN_7103776910(&local_138,(long)&local_c0,(long ****)"set_rep_aura_00",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    puVar13 = local_130[0];
    FUN_71037790a0((long)local_130[0],1,param_3,param_4,param_5,param_6,param_7,param_8);
    local_138 = (long ***)&PTR_FUN_710523d9a8;
    local_130[0] = (undefined8 *)0x0;
    if (puVar13 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar13);
    }
    FUN_71025ae530((long)&local_c0,0,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar11 = local_b8[0];
    local_c0 = &PTR_FUN_710523d988;
    local_b8[0] = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      uVar12 = plVar11[3];
      plVar11[2] = (long)&PTR_FUN_710523d9a8;
      plVar11[3] = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40((ulong)plVar11);
    }
    goto LAB_7101996f08;
  }
  if (!bVar8) {
    FUN_7101df7af0(puVar13,uVar12,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    lVar10 = *(long *)(param_1 + 0x388);
    if (-1 < *(int *)(*(long *)(lVar10 + 0x38) + 0x2b4)) {
      iVar17 = *(int *)(*(long *)(lVar10 + 0x38) + 0x2a4);
      if (iVar17 < 0) {
LAB_7101996bf4:
        uVar21 = 0xffff;
      }
      else {
        if ((*(uint *)(lVar10 + 0x2c8) & 0xffffff) == 0) {
          iVar28 = (int)((ulong)(*(long *)(lVar10 + 0x248) - *(long *)(lVar10 + 0x240)) >> 3);
        }
        else {
          iVar28 = *(int *)(lVar10 + 0x308);
        }
        if (iVar28 <= iVar17) goto LAB_7101996bf4;
        uVar21 = **(undefined2 **)(*(long *)(lVar10 + 0x240) + (long)iVar17 * 8);
      }
      *(undefined2 *)(param_1 + 0x396) = uVar21;
      FUN_710199def0(param_1,extraout_x1_07,(undefined **)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_71019a0a70(param_1,extraout_x1_10,(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar16 = *(ushort *)(param_1 + 0x396);
      lVar10 = *DAT_7105329f98;
      uVar12 = FUN_710251a7e0(lVar10 + 0x38,uVar16);
      if ((uVar12 & 1) == 0) {
        lVar10 = *(long *)(lVar10 + 0x30);
        if (uVar16 >> 4 < 0x177) {
          puVar24 = (undefined2 *)(lVar10 + (ulong)uVar16 * 0x50 + 72000);
LAB_7101996ca8:
          bVar3 = *(byte *)(puVar24 + 0x1f);
        }
        else {
          puVar24 = &DAT_710532a878;
          if (99 < (ushort)(uVar16 + 0xe890)) goto LAB_7101996ca8;
          lVar10 = lVar10 + (ulong)(ushort)(uVar16 + 0xe890) * 0x50;
          if (*(short *)(lVar10 + 0x88cc8) != -1) {
            puVar24 = (undefined2 *)(lVar10 + 0x88cc0);
          }
          bVar3 = *(byte *)(puVar24 + 0x1f);
        }
        if (((bVar3 & 1) == 0) &&
           (uVar12 = FUN_71003a4f40(*DAT_71052b7950,*(int *)(puVar24 + 2)), (uVar12 & 1) == 0)) {
          lVar10 = *(long *)(DAT_710532f8d0 + 8);
          if ((ulong)(*(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40) >> 3) < 3) {
            uVar12 = 0;
            if (*(char *)(lVar10 + 0x191) == '\0') goto LAB_7101997968;
LAB_71019979d8:
            local_1f8 = 0x87650000000000;
            local_1e8 = 0xffffffffffffffff;
            uStack_1e0 = 0;
            local_210[0] = 0;
            local_1d8 = 0;
          }
          else {
            uVar12 = *(ulong *)(*(long *)(lVar10 + 0x40) + 0x10);
            if (*(char *)(lVar10 + 0x191) != '\0') goto LAB_71019979d8;
LAB_7101997968:
            param_3 = (long *********)&DAT_00000004;
            uVar14 = FUN_7103313f20(lVar10,uVar12,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                    param_7,param_8);
            if ((uVar14 & 1) == 0) goto LAB_71019979d8;
            FUN_71024076d0(local_210,uVar12);
            if (((local_200 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_1f8 == DAT_7106dd53ac)) {
              piVar26 = (int *)(local_200 + 0x38);
              do {
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
                if (bVar8) {
                  *piVar26 = *piVar26 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
          local_208 = &PTR_FUN_7104f73d50;
          local_200 = 0;
          local_1f0 = 0;
          if (*(uint *)(param_1 + 0x2ac) < 0x13) {
            *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2ac) * 4 + 0x260) = 5;
            *(undefined1 *)(param_1 + 0x39b) = 0;
            FUN_7103776640(&local_c0,param_1 + 0x48,(byte ****)"set_parts_aw",param_3,param_4,
                           param_5,param_6,param_7,param_8);
            plVar11 = local_b8[0];
            FUN_7103778630(0,(long)local_b8[0],0x7104400c4b);
            local_c0 = &PTR_FUN_710523d988;
            local_b8[0] = (long *)0x0;
            if (plVar11 == (long *)0x0) {
              return;
            }
            uVar12 = plVar11[3];
            plVar11[2] = (long)&PTR_FUN_710523d9a8;
            plVar11[3] = 0;
            if (uVar12 != 0) {
              FUN_710392eb40(uVar12);
            }
            FUN_710392eb40((ulong)plVar11);
            return;
          }
          goto LAB_7101995eb0;
        }
      }
      if (0x11 < *(int *)(param_1 + 0x2ac)) {
        return;
      }
      uVar22 = *(int *)(param_1 + 0x2ac) + 1;
      *(uint *)(param_1 + 0x2ac) = uVar22;
      if (0x12 < uVar22) goto LAB_7101995eb0;
      lVar10 = param_1 + (long)(int)uVar22 * 4;
      uVar27 = 2;
      goto LAB_710199609c;
    }
    iVar17 = *(int *)(*(long *)(param_1 + 0x130) + 0x25c);
    uVar19 = extraout_x1_07;
    if (iVar17 == 1) {
      if (*(int *)(param_1 + 0x378) != 2) goto LAB_7101997ad4;
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = (long *********)&DAT_00000004;
        uVar12 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x13c06f8281,(long ****)&DAT_00000004,
                                param_4,param_5,param_6,param_7,param_8);
        uVar19 = extraout_x1_11;
        if ((uVar12 & 1) == 0) goto LAB_71019978f4;
        FUN_71024076d0(local_290,0x13c06f8281);
        uVar19 = extraout_x1_12;
        if (((local_280 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_278 == DAT_7106dd53ac))
        {
          piVar26 = (int *)(local_280 + 0x38);
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar8) {
              *piVar26 = *piVar26 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
LAB_71019978f4:
        local_278 = 0x87650000000000;
        local_268 = 0xffffffffffffffff;
        uStack_260 = 0;
        local_290[0] = 0;
        local_258 = 0;
      }
      local_288 = &PTR_FUN_7104f73d50;
      local_280 = 0;
      local_270 = 0;
      uVar22 = *(uint *)(param_1 + 0x374);
      if (0x12 < uVar22) goto LAB_7101995eb0;
      uVar27 = 1;
LAB_7101997ad0:
      *(undefined4 *)(param_1 + (long)(int)uVar22 * 4 + 0x328) = uVar27;
    }
    else if ((iVar17 == 0) && (*(int *)(param_1 + 0x378) == 0)) {
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = (long *********)&DAT_00000004;
        uVar12 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1206bb3247,(long ****)&DAT_00000004,
                                param_4,param_5,param_6,param_7,param_8);
        uVar19 = extraout_x1_08;
        if ((uVar12 & 1) == 0) goto LAB_7101997a88;
        FUN_71024076d0(local_250,0x1206bb3247);
        uVar19 = extraout_x1_09;
        if (((local_240 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_238 == DAT_7106dd53ac))
        {
          piVar26 = (int *)(local_240 + 0x38);
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
            if (bVar8) {
              *piVar26 = *piVar26 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
LAB_7101997a88:
        local_238 = 0x87650000000000;
        local_228 = 0xffffffffffffffff;
        uStack_220 = 0;
        local_250[0] = 0;
        local_218 = 0;
      }
      local_248 = &PTR_FUN_7104f73d50;
      local_240 = 0;
      local_230 = 0;
      uVar22 = *(uint *)(param_1 + 0x374);
      if (0x12 < uVar22) goto LAB_7101995eb0;
      uVar27 = 3;
      goto LAB_7101997ad0;
    }
LAB_7101997ad4:
    lVar29 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
    lVar10 = *(long *)(param_1 + 0x388);
    if ((1 < *(int *)(lVar10 + 0x65c) - 3U) &&
       ((*(char *)(*(long *)(lVar10 + 0x28) + 0x280) != '\0' ||
        (*(char *)(*(long *)(lVar10 + 0x38) + 0x316) != '\0')))) {
      lVar10 = *(long *)(lVar29 + 0x80);
      if (*(char *)(lVar10 + 0xc9) == '\0') {
        iVar17 = 4;
      }
      else {
        iVar17 = 0;
      }
      param_3 = (long *********)0x0;
      FUN_7103771be0((long *)(lVar10 + 0x2260),iVar17,0);
      *(undefined4 *)(lVar10 + 0x2270) = *(undefined4 *)(*(long *)(lVar10 + 0x2260) + 0x25c);
      uVar19 = extraout_x1_14;
    }
    if (*(int *)(*(long *)(lVar29 + 0x80) + 0x2270) != 0) {
      return;
    }
    FUN_71019a0a70(param_1,uVar19,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    lVar10 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40) >> 3) < 4) {
      uVar12 = 0;
      if (*(char *)(lVar10 + 0x191) == '\0') goto LAB_7101997b94;
LAB_7101997c04:
      local_2b8 = 0x87650000000000;
      local_2a8 = 0xffffffffffffffff;
      uStack_2a0 = 0;
      local_2d0[0] = 0;
      local_298 = 0;
    }
    else {
      uVar12 = *(ulong *)(*(long *)(lVar10 + 0x40) + 0x18);
      if (*(char *)(lVar10 + 0x191) != '\0') goto LAB_7101997c04;
LAB_7101997b94:
      uVar14 = FUN_7103313f20(lVar10,uVar12,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                              ,param_8);
      if ((uVar14 & 1) == 0) goto LAB_7101997c04;
      FUN_71024076d0(local_2d0,uVar12);
      if (((local_2c0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_2b8 == DAT_7106dd53ac)) {
        piVar26 = (int *)(local_2c0 + 0x38);
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar8) {
            *piVar26 = *piVar26 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    local_2c8 = &PTR_FUN_7104f73d50;
    local_2c0 = 0;
    local_2b0 = 0;
    if (0x12 < *(uint *)(param_1 + 0x2ac)) {
LAB_7101995eb0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar10 = param_1 + (long)(int)*(uint *)(param_1 + 0x2ac) * 4;
    uVar27 = 0xb;
LAB_710199609c:
    *(undefined4 *)(lVar10 + 0x260) = uVar27;
    return;
  }
  goto LAB_7101997650;
LAB_710199786c:
  plVar11 = (long *)plVar11[3];
  *(long *)plVar11[1] = *plVar11;
  *(long *)(*plVar11 + 8) = plVar11[1];
  *plVar11 = *(long *)(param_1 + 0x708);
  plVar11[1] = param_1 + 0x708;
  *(long **)(*(long *)(param_1 + 0x708) + 8) = plVar11;
  *(long **)(param_1 + 0x708) = plVar11;
  goto LAB_7101996dd0;
LAB_7101997940:
  if (uVar30 == 0) {
    uVar32 = uVar31 & uVar32;
  }
  else if (uVar12 <= uVar32) {
    uVar35 = 0;
    if (uVar12 != 0) {
      uVar35 = uVar32 / uVar12;
    }
    uVar32 = uVar32 - uVar35 * uVar12;
  }
  plVar7 = *(long **)(uVar33 + uVar32 * 8);
  do {
    plVar37 = plVar7;
    plVar7 = (long *)*plVar37;
  } while ((long *)*plVar37 != plVar23);
  if (plVar37 == (long *)(param_1 + 0x3f0)) {
LAB_7101997ca4:
    if (*plVar23 != 0) {
      uVar35 = *(ulong *)(*plVar23 + 8);
      if (uVar30 == 0) {
        uVar35 = uVar35 & uVar31;
      }
      else if (uVar12 <= uVar35) {
        uVar36 = 0;
        if (uVar12 != 0) {
          uVar36 = uVar35 / uVar12;
        }
        uVar35 = uVar35 - uVar36 * uVar12;
      }
      if (uVar35 == uVar32) goto LAB_7101997ce0;
    }
    *(undefined8 *)(uVar33 + uVar32 * 8) = 0;
  }
  else {
    uVar35 = plVar37[1];
    if (uVar30 == 0) {
      uVar35 = uVar35 & uVar31;
    }
    else if (uVar12 <= uVar35) {
      uVar36 = 0;
      if (uVar12 != 0) {
        uVar36 = uVar35 / uVar12;
      }
      uVar35 = uVar35 - uVar36 * uVar12;
    }
    if (uVar35 != uVar32) goto LAB_7101997ca4;
  }
LAB_7101997ce0:
  lVar29 = *plVar23;
  if (lVar29 != 0) {
    uVar35 = *(ulong *)(lVar29 + 8);
    if (uVar30 == 0) {
      uVar35 = uVar35 & uVar31;
    }
    else if (uVar12 <= uVar35) {
      uVar30 = 0;
      if (uVar12 != 0) {
        uVar30 = uVar35 / uVar12;
      }
      uVar35 = uVar35 - uVar30 * uVar12;
    }
    if (uVar35 != uVar32) {
      *(long **)(*puVar1 + uVar35 * 8) = plVar37;
      lVar29 = *plVar23;
    }
  }
  *plVar37 = lVar29;
  *plVar23 = 0;
  *(long *)(param_1 + 0x3f8) = *(long *)(param_1 + 0x3f8) + -1;
  if (plVar23 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar23);
  }
LAB_71019968a8:
  *(long *)plVar11[1] = *plVar11;
  *(long *)(*plVar11 + 8) = plVar11[1];
  *plVar11 = *(long *)(param_1 + 0x708);
  plVar11[1] = param_1 + 0x708;
  *(long **)(*(long *)(param_1 + 0x708) + 8) = plVar11;
  *(long **)(param_1 + 0x708) = plVar11;
  *(short *)(plVar11 + 2) = sVar4;
  uVar12 = *(ulong *)(param_1 + 1000);
  if (uVar12 == 0) {
LAB_71019969a8:
    plVar23 = (long *)FUN_710392e290(0x10,0x20,pppplVar18,param_4,param_5,param_6,param_7,param_8);
    if (plVar23 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_170 = (undefined **)((ulong)local_170 & 0xffffffff00000000);
        local_138 = (long ***)&SUB_00000020;
        pppplVar18 = &local_138;
        uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_170);
        if (((uVar32 & 1) != 0) &&
           (plVar23 = (long *)FUN_710392e290(0x10,0x20,pppplVar18,param_4,param_5,param_6,param_7,
                                             param_8), plVar23 != (long *)0x0)) goto LAB_7101996a04;
      }
      plVar23 = (long *)0x0;
    }
LAB_7101996a04:
    *(short *)(plVar23 + 2) = sVar4;
    plVar23[3] = (long)plVar11;
    *plVar23 = 0;
    plVar23[1] = uVar14;
    fVar39 = (float)(*(long *)(param_1 + 0x3f8) + 1);
    if ((uVar12 == 0) || (*(float *)(param_1 + 0x400) * (float)uVar12 < fVar39)) {
      if (uVar12 < 3) {
        uVar32 = 1;
      }
      else {
        uVar32 = (ulong)((uVar12 - 1 & uVar12) != 0);
      }
      uVar32 = uVar32 | uVar12 << 1;
      uVar30 = (ulong)(fVar39 / *(float *)(param_1 + 0x400));
      if (uVar30 <= uVar32) {
        uVar30 = uVar32;
      }
      if (uVar30 - 1 == 0) {
        uVar30 = 2;
        bVar8 = uVar12 < 3;
        uVar32 = uVar30;
        if (uVar12 < 2) goto LAB_7101996ac0;
LAB_7101996a7c:
        if (!bVar8) {
          uVar30 = (ulong)((float)*(ulong *)(param_1 + 0x3f8) / *(float *)(param_1 + 0x400));
          if (uVar12 < 3 || (uVar12 - 1 & uVar12) != 0) {
            uVar30 = std::__next_prime(uVar30);
          }
          else if (1 < uVar30) {
            uVar30 = 1L << (-LZCOUNT(uVar30 - 1) & 0x3fU);
          }
          if (uVar30 <= uVar32) {
            uVar30 = uVar32;
          }
          if (uVar30 < uVar12) goto LAB_7101996ac0;
        }
      }
      else {
        if ((uVar30 - 1 & uVar30) != 0) {
          uVar30 = std::__next_prime(uVar30);
          uVar12 = *(ulong *)(param_1 + 1000);
        }
        bVar8 = uVar12 <= uVar30;
        uVar32 = uVar30;
        if (uVar30 <= uVar12) goto LAB_7101996a7c;
LAB_7101996ac0:
        FUN_71019a1450(puVar1,uVar30,pppplVar18,param_4,param_5,param_6,param_7,param_8);
      }
      uVar12 = *(ulong *)(param_1 + 1000);
      if ((uVar12 - 1 & uVar12) == 0) {
        unaff_x28 = uVar12 - 1 & uVar14;
      }
      else {
        unaff_x28 = uVar14;
        if (uVar12 <= uVar14) {
          uVar32 = 0;
          if (uVar12 != 0) {
            uVar32 = uVar14 / uVar12;
          }
          unaff_x28 = uVar14 - uVar32 * uVar12;
        }
      }
    }
    uVar14 = *puVar1;
    plVar11 = *(long **)(uVar14 + unaff_x28 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar23 = *(long *)(param_1 + 0x3f0);
      *(long **)(param_1 + 0x3f0) = plVar23;
      *(long *)(uVar14 + unaff_x28 * 8) = param_1 + 0x3f0;
      if (*plVar23 != 0) {
        uVar14 = *(ulong *)(*plVar23 + 8);
        if ((uVar12 - 1 & uVar12) == 0) {
          uVar14 = uVar14 & uVar12 - 1;
        }
        else if (uVar12 <= uVar14) {
          uVar32 = 0;
          if (uVar12 != 0) {
            uVar32 = uVar14 / uVar12;
          }
          uVar14 = uVar14 - uVar32 * uVar12;
        }
        plVar11 = (long *)(*puVar1 + uVar14 * 8);
        goto LAB_7101996d98;
      }
    }
    else {
      *plVar23 = *plVar11;
LAB_7101996d98:
      *plVar11 = (long)plVar23;
    }
    *(long *)(param_1 + 0x3f8) = *(long *)(param_1 + 0x3f8) + 1;
  }
  else {
    uVar32 = uVar12 - 1;
    if ((uVar32 & uVar12) == 0) {
      unaff_x28 = uVar32 & uVar14;
    }
    else {
      unaff_x28 = uVar14;
      if (uVar12 <= uVar14) {
        uVar30 = 0;
        if (uVar12 != 0) {
          uVar30 = uVar14 / uVar12;
        }
        unaff_x28 = uVar14 - uVar30 * uVar12;
      }
    }
    plVar23 = *(long **)(*puVar1 + unaff_x28 * 8);
    if (plVar23 == (long *)0x0) goto LAB_71019969a8;
    if ((uVar32 & uVar12) == 0) {
      do {
        plVar23 = (long *)*plVar23;
        if ((plVar23 == (long *)0x0) || (plVar23[1] != uVar14 && (plVar23[1] & uVar32) != unaff_x28)
           ) goto LAB_71019969a8;
      } while ((short)plVar23[2] != sVar4);
    }
    else {
      do {
        plVar23 = (long *)*plVar23;
        if (plVar23 == (long *)0x0) goto LAB_71019969a8;
        uVar32 = plVar23[1];
        if (uVar32 != uVar14) {
          if (uVar12 <= uVar32) {
            uVar30 = 0;
            if (uVar12 != 0) {
              uVar30 = uVar32 / uVar12;
            }
            uVar32 = uVar32 - uVar30 * uVar12;
          }
          if (uVar32 != unaff_x28) goto LAB_71019969a8;
        }
      } while (*(short *)(plVar23 + 2) != sVar4);
    }
  }
  if (uVar16 != 0xffff) {
    param_4 = (byte ****)0x1;
    FUN_710259c720(*(long *)(lVar10 + 0x20),0,uVar16,1,param_5,param_6,param_7,param_8);
  }
LAB_7101996dd0:
  uVar16 = puVar24[4];
  param_3 = (long *********)(ulong)uVar16;
  lVar29 = *(long *)(lVar10 + 0x20);
  if (param_3 == (long *********)0xffff) {
    param_3 = (long *********)0xffff;
  }
  else {
    puVar25 = *(ushort **)(lVar29 + 0x10);
    lVar34 = *(long *)(lVar29 + 0x18) - (long)puVar25;
    uVar12 = lVar34 >> 3;
    if (0 < (int)uVar12) {
      uVar14 = 0;
      do {
        if (uVar12 <= uVar14) goto LAB_7101997d44;
        if (*puVar25 == uVar16) {
          if (-1 < (int)uVar14) {
            uVar12 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar16);
            uVar22 = FUN_71032412a0((long *)(lVar29 + 8),uVar12,(long *********)0x17,param_4,param_5
                                    ,param_6,param_7,param_8);
            param_3 = (long *********)&DAT_00000019;
            uVar9 = FUN_71032412a0((long *)(lVar29 + 8),uVar12,(long *********)&DAT_00000019,param_4
                                   ,param_5,param_6,param_7,param_8);
            if (((uVar22 & 1) != 0) && ((uVar9 & 1) != 0)) goto LAB_7101996e44;
            param_3 = (long *********)(ulong)(ushort)puVar24[4];
            lVar29 = *(long *)(lVar10 + 0x20);
          }
          break;
        }
        uVar14 = uVar14 + 1;
        puVar25 = puVar25 + 4;
      } while ((long)uVar14 < lVar34 * 0x20000000 >> 0x20);
    }
  }
  param_4 = (byte ****)0x1;
  FUN_710259c150(lVar29,0,(ushort)param_3,(byte ****)0x1,param_5,param_6,param_7,param_8);
LAB_7101996e44:
  if ((*(char *)(param_1 + 0x39b) == '\0') && (uVar16 = puVar24[4], uVar16 != 0xffff)) {
    lVar29 = *(long *)(lVar10 + 0x20);
    puVar25 = *(ushort **)(lVar29 + 0x10);
    lVar10 = *(long *)(lVar29 + 0x18) - (long)puVar25;
    uVar12 = lVar10 >> 3;
    if (0 < (int)uVar12) {
      uVar14 = 0;
      do {
        if (uVar12 <= uVar14) {
LAB_7101997d44:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if (*puVar25 == uVar16) {
          if (-1 < (int)uVar14) {
            uVar12 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar16);
            uVar22 = FUN_71032412a0((long *)(lVar29 + 8),uVar12,(long *********)0x17,param_4,param_5
                                    ,param_6,param_7,param_8);
            param_3 = (long *********)&DAT_00000019;
            uVar9 = FUN_71032412a0((long *)(lVar29 + 8),uVar12,(long *********)&DAT_00000019,param_4
                                   ,param_5,param_6,param_7,param_8);
            if (((uVar22 & 1) != 0) && ((uVar9 & 1) != 0)) {
              uVar16 = puVar24[4];
              FUN_7103776640(&local_138,param_1 + 0x48,(byte ****)"set_parts_aw",param_3,param_4,
                             param_5,param_6,param_7,param_8);
              param_3 = (long *********)0x1;
              param_4 = (byte ****)0x1;
              param_7 = (long ****)0x2;
              param_5 = (long ****)0x0;
              param_6 = 0;
              FUN_71025ad150(uVar16,(long)&local_138,1,1,0,0,2,param_8);
              FUN_71025ae530((long)&local_138,1,param_3,param_4,param_5,param_6,param_7,param_8);
              puVar13 = local_130[0];
              local_138 = (long ***)&PTR_FUN_710523d988;
              local_130[0] = (undefined8 *)0x0;
              if (puVar13 != (undefined8 *)0x0) {
                uVar12 = puVar13[3];
                puVar13[2] = &PTR_FUN_710523d9a8;
                puVar13[3] = 0;
                if (uVar12 != 0) {
                  FUN_710392eb40(uVar12);
                }
                FUN_710392eb40((ulong)puVar13);
              }
              uVar21 = 0xffff;
              goto LAB_7101996f04;
            }
          }
          break;
        }
        uVar14 = uVar14 + 1;
        puVar25 = puVar25 + 4;
      } while ((long)uVar14 < lVar10 * 0x20000000 >> 0x20);
    }
  }
  FUN_7103776640(&local_138,param_1 + 0x48,(byte ****)"set_parts_aw",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_170,(long)&local_138,(long ****)"set_rep_spirit_aw",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar12 = CONCAT44(uStack_164,local_168);
  FUN_71037790a0(uVar12,1,param_3,param_4,param_5,param_6,param_7,param_8);
  local_170 = &PTR_FUN_710523d9a8;
  local_168 = 0;
  uStack_164 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  FUN_7103776910(&local_170,(long)&local_138,(long ****)"set_rep_aura_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar12 = CONCAT44(uStack_164,local_168);
  FUN_71037790a0(uVar12,1,param_3,param_4,param_5,param_6,param_7,param_8);
  local_170 = &PTR_FUN_710523d9a8;
  local_168 = 0;
  uStack_164 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  FUN_71025ae530((long)&local_138,0,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar13 = local_130[0];
  local_138 = (long ***)&PTR_FUN_710523d988;
  local_130[0] = (undefined8 *)0x0;
  if (puVar13 != (undefined8 *)0x0) {
    uVar12 = puVar13[3];
    puVar13[2] = &PTR_FUN_710523d9a8;
    puVar13[3] = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)puVar13);
  }
  uVar21 = puVar24[4];
LAB_7101996f04:
  *(undefined2 *)(param_1 + 0x394) = uVar21;
LAB_7101996f08:
  plVar11 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    uVar12 = plVar11[3];
    plVar11[2] = (long)&PTR_FUN_710523d9a8;
    plVar11[3] = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)plVar11);
  }
  lVar10 = param_1 + 0x18;
  if (*(short *)(param_1 + 0x396) == -1) {
    FUN_7103776910(&local_c0,lVar10,(long ****)"spirits_param",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar11 = local_b8[0];
    lVar29 = *local_b8[0];
    if (lVar29 != 0) {
      *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
    }
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    FUN_7103776910(&local_c0,lVar10,(long ****)"power_set",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    plVar11 = local_b8[0];
    lVar10 = *local_b8[0];
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
    }
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar11 != (long *)0x0) goto LAB_7101997648;
  }
  else {
    FUN_7103776910(&local_c0,lVar10,(long ****)"spirits_param",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar11 = local_b8[0];
    lVar29 = *local_b8[0];
    if (lVar29 != 0) {
      *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
    }
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    FUN_7103776910(&local_c0,lVar10,(long ****)"power_set",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    plVar11 = local_b8[0];
    lVar29 = *local_b8[0];
    if (lVar29 != 0) {
      *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
    }
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    lVar29 = *(long *)(DAT_710532f730 + 8);
    uVar16 = *(ushort *)(param_1 + 0x396);
    if (uVar16 >> 4 < 0x177) {
      puVar24 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar16 * 0x50 + 72000);
    }
    else {
      puVar24 = &DAT_710532a878;
      if (((ushort)(uVar16 + 0xe890) < 100) &&
         (lVar34 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar16 + 0xe890) * 0x50,
         *(short *)(lVar34 + 0x88cc8) != -1)) {
        puVar24 = (undefined2 *)(lVar34 + 0x88cc0);
      }
    }
    uVar12 = (ulong)(short)puVar24[4];
    lVar34 = *(long *)(lVar29 + 0x1d8);
    if (uVar12 != 0xffffffffffffffff) {
      uVar12 = (ulong)*(ushort *)(lVar34 + uVar12 * 2 + 0x60);
    }
    uVar14 = (*(long *)(lVar34 + 0x28) - *(long *)(lVar34 + 0x20) >> 6) * -0x3333333333333333;
    puVar2 = (undefined2 *)(*(long *)(lVar34 + 0x20) + uVar12 * 0x140);
    if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    FUN_7103776640(&local_d0,lVar10,(byte ****)"set_parts_param_00",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_e0,lVar10,(byte ****)"set_parts_param_01",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_f0,param_1 + 0x48,(byte ****)"set_parts_base",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    param_4 = (byte ****)(ulong)(ushort)puVar24[4];
    param_5 = (long ****)(ulong)*(ushort *)(param_1 + 0x396);
    FUN_71025c7b60((long *)(param_1 + 8),(long)&local_d0,(long)&local_e0,param_4,(ulong)param_5,
                   param_6,param_7,param_8);
    lVar34 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar12 = FUN_71032a9470(lVar34,puVar24[4]);
    FUN_71032a9540((uint *)&local_c0,lVar34,uVar12);
    FUN_71003a4ca0((uint *)&local_138,"spi_%s",local_b8,uVar12,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103776910(&local_c0,lVar10,(long ****)"set_txt_name_spirit",uVar12,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_c0,(char *)local_130,uVar12,param_4,param_5,param_6,param_7,param_8)
    ;
    plVar11 = local_b8[0];
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    if (*(char *)(puVar2 + 0x2f) == '\0') {
      if (*(byte *)(puVar2 + 0x36) - 1 < 3) {
        uVar15 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar2 + 0x36) - 1 & 3) << 3));
      }
      else {
        uVar15 = 0;
      }
    }
    else {
      uVar15 = 4;
    }
    param_3 = (long *********)0x0;
    FUN_710339dde0((uint *)&local_c0,uVar15,'\0');
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),(long)local_b8);
    uVar12 = local_e8;
    FUN_7103778300(0x3f800000,local_e8,(long)local_b8);
    FUN_7103776640(&local_148,lVar10,(byte ****)"set_parts_class",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_71025b10e0((long)&local_148,*(undefined1 *)(puVar2 + 0x34));
    FUN_71025b10e0((long)&local_f0,*(undefined1 *)(puVar2 + 0x34));
    if (*(char *)(puVar2 + 0x2f) == '\x01') {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x710436a273);
      *(undefined4 *)(param_1 + 0x3ac) = 0x5a;
    }
    else {
      local_170 = (undefined **)0x1;
      local_168 = local_168 & 0xffffff00;
      uStack_164 = 0;
      uStack_160 = 0;
      local_158 = 0x52ffff0000000000;
      local_150 = 0;
      uVar14 = (ulong)(ushort)puVar24[8];
      FUN_71025ca840((int *)&local_170,puVar24[4],(uint)(ushort)puVar24[8]);
      uVar22 = FUN_71025cb8d0((long)&local_170);
      ppppbVar38 = (byte ****)(ulong)uVar22;
      FUN_7103776910(&local_180,lVar10,(long ****)"set_txt_pow_num_sdw",uVar14,param_4,param_5,
                     param_6,param_7,param_8);
      uVar19 = 1;
      ppppbVar20 = ppppbVar38;
      FUN_710377a280((long)&local_180,(byte *)"mnu_spirits_select_power_n",1);
      uVar14 = local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_7103776910(&local_180,lVar10,(long ****)"set_txt_pow_num",uVar19,ppppbVar20,param_5,
                     param_6,param_7,param_8);
      param_3 = (long *********)0x1;
      FUN_710377a280((long)&local_180,(byte *)"mnu_spirits_select_power_n",1);
      uVar14 = local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_7103776640(&local_180,lVar10,(byte ****)"set_parts_icon_super",param_3,ppppbVar38,param_5,
                     param_6,param_7,param_8);
      if (puVar2[0x48] == 0) {
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x7104327e86);
        uVar14 = local_178;
        sVar4 = puVar24[4];
        if ((sVar4 != -1) && (sVar4 < 2000)) {
          lVar29 = *(long *)(lVar29 + 0x1d8);
          uVar16 = *(ushort *)(lVar29 + (long)(int)sVar4 * 2 + 0x60);
          uVar22 = (int)((ulong)(*(long *)(lVar29 + 0x28) - *(long *)(lVar29 + 0x20)) >> 6) *
                   -0x33333333;
          if ((uVar16 < uVar22) &&
             ((uVar16 = *(ushort *)(lVar29 + (ulong)uVar16 * 2 + 0x1000), uVar16 < uVar22 &&
              (*(short *)(*(long *)(lVar29 + 0x20) + (ulong)uVar16 * 0x140) != -1)))) {
            FUN_7103778300(0x3f800000,local_178,0x710437a53a);
            FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x7104348163);
            FUN_7103776640(&local_190,lVar10,(byte ****)"set_parts_pre_super",param_3,ppppbVar38,
                           param_5,param_6,param_7,param_8);
            param_4 = (byte ****)0x1;
            goto LAB_7101997484;
          }
        }
        FUN_7103778300(0x3f800000,local_178,0x71043cd335);
        param_4 = ppppbVar38;
      }
      else {
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71043ddf43);
        uVar14 = local_178;
        FUN_7103778300(0x3f800000,local_178,0x710446392a);
        FUN_7103776640(&local_190,lVar10,(byte ****)"set_parts_super",param_3,ppppbVar38,param_5,
                       param_6,param_7,param_8);
        param_4 = (byte ****)0x0;
LAB_7101997484:
        param_3 = &local_190;
        FUN_71019a0fa0(param_1,(long)puVar2,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar32 = local_188;
        local_190 = (long ********)&PTR_FUN_710523d988;
        local_188 = 0;
        if (uVar32 != 0) {
          uVar30 = *(ulong *)(uVar32 + 0x18);
          *(undefined ***)(uVar32 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar32 + 0x18) = 0;
          if (uVar30 != 0) {
            FUN_710392eb40(uVar30);
          }
          FUN_710392eb40(uVar32);
        }
      }
      local_178 = 0;
      local_180 = &PTR_FUN_710523d988;
      if (uVar14 != 0) {
        local_178 = 0;
        local_180 = &PTR_FUN_710523d988;
        uVar32 = *(ulong *)(uVar14 + 0x18);
        *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar14 + 0x18) = 0;
        if (uVar32 != 0) {
          FUN_710392eb40(uVar32);
        }
        FUN_710392eb40(uVar14);
      }
    }
    uVar14 = local_140;
    local_148 = &PTR_FUN_710523d988;
    local_140 = 0;
    if (uVar14 != 0) {
      uVar32 = *(ulong *)(uVar14 + 0x18);
      *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar14 + 0x18) = 0;
      if (uVar32 != 0) {
        FUN_710392eb40(uVar32);
      }
      FUN_710392eb40(uVar14);
    }
    local_f0 = &PTR_FUN_710523d988;
    local_e8 = 0;
    if (uVar12 != 0) {
      uVar14 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40(uVar12);
    }
    uVar12 = local_d8;
    local_e0 = &PTR_FUN_710523d988;
    local_d8 = 0;
    if (uVar12 != 0) {
      uVar14 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40(uVar12);
    }
    plVar11 = local_c8;
    local_d0 = &PTR_FUN_710523d988;
    local_c8 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      uVar12 = plVar11[3];
      plVar11[2] = (long)&PTR_FUN_710523d9a8;
      plVar11[3] = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
LAB_7101997648:
      FUN_710392eb40((ulong)plVar11);
    }
  }
  uVar22 = (uint)*(ushort *)(param_1 + 0x396);
LAB_7101997650:
  if (uVar22 != 0xffff) {
    if (uVar22 >> 4 < 0x177) {
      puVar24 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar22 * 0x50 + 72000);
    }
    else {
      puVar24 = &DAT_710532a878;
      if ((uVar22 - 6000 < 100) &&
         (lVar10 = *(long *)(*DAT_7105329f98 + 0x30) + ((ulong)(uVar22 - 6000) & 0xffff) * 0x50,
         *(short *)(lVar10 + 0x88cc8) != -1)) {
        puVar24 = (undefined2 *)(lVar10 + 0x88cc0);
      }
    }
    uVar12 = (ulong)(short)puVar24[4];
    lVar10 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (uVar12 != 0xffffffffffffffff) {
      uVar12 = (ulong)*(ushort *)(lVar10 + uVar12 * 2 + 0x60);
    }
    uVar14 = (*(long *)(lVar10 + 0x28) - *(long *)(lVar10 + 0x20) >> 6) * -0x3333333333333333;
    puVar24 = (undefined2 *)(*(long *)(lVar10 + 0x20) + uVar12 * 0x140);
    if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
      puVar24 = &DAT_7105182b08;
    }
    if (*(char *)(puVar24 + 0x2f) == '\x01') {
      uVar16 = puVar24[0x35];
      goto LAB_7101997748;
    }
  }
  uVar16 = 0;
LAB_7101997748:
  FUN_710199c100(param_1,uVar16);
  FUN_710199def0(param_1,extraout_x1_13,(undefined **)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  return;
}

