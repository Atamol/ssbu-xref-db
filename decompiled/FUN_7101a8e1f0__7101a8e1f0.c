// addr:      7101a8e1f0
// offset:    0x1a8e1f0
// name:      FUN_7101a8e1f0
// mangled:   
// signature: undefined __cdecl FUN_7101a8e1f0(long param_1, undefined8 param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a8e1f0(long param_1,undefined8 param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  void *__dest;
  undefined8 uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  ulong uVar14;
  long ****pppplVar15;
  ulong uVar16;
  byte ****ppppbVar17;
  long *plVar18;
  int *piVar19;
  long ***ppplVar20;
  undefined4 uVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  void *__src;
  size_t __n;
  long *plVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined4 local_1f8 [2];
  undefined **local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8 [2];
  undefined **local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178 [2];
  undefined **local_170;
  long local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138 [2];
  undefined **local_130;
  long local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined **local_f8;
  ulong local_f0;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  long ***local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  FUN_7103776640(&local_d8,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_parts_cur_hammer",
                 param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x120),1);
    uVar9 = *(uint *)(param_1 + 0x377c);
    *(undefined4 *)(param_1 + 0x3830) = 0xffffffff;
    if (uVar9 < 8) {
      uVar11 = 0;
      lVar28 = param_1 + 0x138;
      do {
        if (0x1d < uVar11) {
          FUN_7101a8fdf0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
          goto LAB_7101a8f270;
        }
        if (*(int *)(lVar28 + (long)(int)uVar9 * 0x6c8) == 2) {
          lVar23 = (long)(int)uVar9;
LAB_7101a8e3f8:
          if (*(char *)(lVar28 + lVar23 * 0x6c8 + 9) == '\0') {
            FUN_7103776640(&local_b8,**(long **)(param_1 + 0x120) + 8,
                           (byte ****)"set_parts_in_%d%02d",(ulong)uVar9,uVar11 & 0xffffffff,param_5
                           ,param_6,param_7,param_8);
            FUN_7103776640(&local_c8,**(long **)(param_1 + 0x120) + 8,
                           (byte ****)"set_parts_out_%d%02d",(ulong)uVar9,uVar11 & 0xffffffff,
                           param_5,param_6,param_7,param_8);
            plVar12 = local_b0;
            FUN_7103778300(0x3f800000,(long)local_b0,0x71042a29fc);
            uVar14 = local_c0;
            FUN_7103778300(0x3f800000,local_c0,0x71042a29fc);
            local_c8 = &PTR_FUN_710523d988;
            local_c0 = 0;
            if (uVar14 != 0) {
              uVar16 = *(ulong *)(uVar14 + 0x18);
              *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar14 + 0x18) = 0;
              if (uVar16 != 0) {
                FUN_710392eb40(uVar16);
              }
              FUN_710392eb40(uVar14);
            }
            local_b8 = (long ***)&PTR_FUN_710523d988;
            local_b0 = (long *)0x0;
            if (plVar12 != (long *)0x0) {
              uVar14 = plVar12[3];
              plVar12[2] = (long)&PTR_FUN_710523d9a8;
              plVar12[3] = 0;
              if (uVar14 != 0) {
                FUN_710392eb40(uVar14);
              }
              FUN_710392eb40((ulong)plVar12);
            }
            uVar9 = *(uint *)(param_1 + 0x377c);
            FUN_7103776640(&local_b8,**(long **)(param_1 + 0x120) + 8,
                           (byte ****)"set_parts_in_%d%02d",(ulong)uVar9,uVar11 & 0xffffffff,param_5
                           ,param_6,param_7,param_8);
            param_3 = (ulong)uVar9;
            param_4 = (byte ****)(uVar11 & 0xffffffff);
            FUN_7103776640(&local_c8,**(long **)(param_1 + 0x120) + 8,
                           (byte ****)"set_parts_out_%d%02d",param_3,param_4,param_5,param_6,param_7
                           ,param_8);
            plVar12 = local_b0;
            FUN_7103778300(0x3f800000,(long)local_b0,0x71044123e5);
            uVar14 = local_c0;
            FUN_7103778300(0x3f800000,local_c0,0x71044123e5);
            local_c8 = &PTR_FUN_710523d988;
            local_c0 = 0;
            if (uVar14 != 0) {
              uVar16 = *(ulong *)(uVar14 + 0x18);
              *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar14 + 0x18) = 0;
              if (uVar16 != 0) {
                FUN_710392eb40(uVar16);
              }
              FUN_710392eb40(uVar14);
            }
            local_b8 = (long ***)&PTR_FUN_710523d988;
            local_b0 = (long *)0x0;
            if (plVar12 != (long *)0x0) {
              uVar14 = *(ulong *)((long)plVar12 + 0x18);
              *(undefined ***)((long)plVar12 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)((long)plVar12 + 0x18) = 0;
              if (uVar14 != 0) {
                FUN_710392eb40(uVar14);
              }
              FUN_710392eb40((ulong)plVar12);
            }
            uVar9 = *(uint *)(param_1 + 0x377c);
          }
        }
        else {
          FUN_7103776640(&local_b8,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_parts_in_%d%02d"
                         ,(ulong)uVar9,uVar11 & 0xffffffff,param_5,param_6,param_7,param_8);
          param_3 = (ulong)uVar9;
          param_4 = (byte ****)(uVar11 & 0xffffffff);
          FUN_7103776640(&local_c8,**(long **)(param_1 + 0x120) + 8,
                         (byte ****)"set_parts_out_%d%02d",param_3,param_4,param_5,param_6,param_7,
                         param_8);
          plVar12 = local_b0;
          FUN_7103778300(0x3f800000,(long)local_b0,0x71044123e5);
          uVar14 = local_c0;
          FUN_7103778300(0x3f800000,local_c0,0x71044123e5);
          local_c8 = &PTR_FUN_710523d988;
          local_c0 = 0;
          if (uVar14 != 0) {
            uVar16 = *(ulong *)(uVar14 + 0x18);
            *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar14 + 0x18) = 0;
            if (uVar16 != 0) {
              FUN_710392eb40(uVar16);
            }
            FUN_710392eb40(uVar14);
          }
          local_b8 = (long ***)&PTR_FUN_710523d988;
          local_b0 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            uVar14 = plVar12[3];
            plVar12[2] = (long)&PTR_FUN_710523d9a8;
            plVar12[3] = 0;
            if (uVar14 != 0) {
              FUN_710392eb40(uVar14);
            }
            FUN_710392eb40((ulong)plVar12);
          }
          uVar9 = *(uint *)(param_1 + 0x377c);
          if (7 < uVar9) break;
          lVar23 = (long)(int)uVar9;
          if (*(int *)(lVar28 + lVar23 * 0x6c8) == 2) goto LAB_7101a8e3f8;
        }
        uVar11 = uVar11 + 1;
        lVar28 = lVar28 + 0x38;
      } while (uVar9 < 8);
    }
    goto LAB_7101a8e5a4;
  }
  iVar8 = *(int *)(param_1 + 0x3828);
  if (iVar8 != 1) {
    if (iVar8 != 2) {
      if (iVar8 == 3) {
        uVar16 = (ulong)*(uint *)(param_1 + 0x3830);
        uVar14 = (ulong)*(uint *)(param_1 + 0x377c);
        FUN_7103776640(&local_b8,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_parts_in_%d%02d",
                       uVar14,uVar16,param_5,param_6,param_7,param_8);
        FUN_71037780e0(&local_c8,(long)&local_b8,(long ****)&DAT_71043fffcb,uVar14,uVar16,param_5,
                       param_6,param_7,param_8);
        uVar11 = local_c0;
        if (*(long **)(local_c0 + 8) == (long *)0x0) {
          uVar26 = 1;
          uVar13 = extraout_x1;
        }
        else {
          auVar36 = (**(code **)(**(long **)(local_c0 + 8) + 0x138))();
          uVar13 = auVar36._8_8_;
          uVar26 = auVar36._0_8_ & 0xffffffff;
        }
        local_c8 = &PTR_FUN_710523d9e8;
        local_c0 = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
          uVar13 = extraout_x1_00;
        }
        plVar12 = local_b0;
        local_b8 = (long ***)&PTR_FUN_710523d988;
        local_b0 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          uVar11 = plVar12[3];
          plVar12[2] = (long)&PTR_FUN_710523d9a8;
          plVar12[3] = 0;
          if (uVar11 != 0) {
            FUN_710392eb40(uVar11);
          }
          FUN_710392eb40((ulong)plVar12);
          uVar13 = extraout_x1_01;
        }
        if ((uVar26 & 1) != 0) {
          FUN_7101a90280(param_1,uVar13,uVar14,uVar16,param_5,param_6,param_7,param_8);
          (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),1);
          if (*(uint *)(param_1 + 0x377c) < 8) {
            plVar12 = *(long **)(param_1 + (long)(int)*(uint *)(param_1 + 0x377c) * 8 + 0x3780);
            (**(code **)(*plVar12 + 0x60))(plVar12,1);
            if (*(uint *)(param_1 + 0x377c) < 8) {
              FUN_7103771a80((long *)(param_1 + (long)(int)*(uint *)(param_1 + 0x377c) * 8 + 0x3780)
                             ,*(int *)(param_1 + 0x3830),0);
              *(undefined4 *)(param_1 + 0x3828) = 0;
              goto LAB_7101a8f270;
            }
          }
          goto LAB_7101a8e5a4;
        }
        goto LAB_7101a8f270;
      }
      pcVar2 = (char *)(param_1 + 0x3779);
      lVar28 = *(long *)**(undefined8 **)(param_1 + 0x120);
      bVar5 = *(byte *)(param_1 + 0x3910);
      if (*pcVar2 == '\0') {
        plVar12 = *(long **)(param_1 + 0x128);
        lVar23 = plVar12[7];
        if (lVar23 != 0) {
          *(byte *)(lVar23 + 0x58) = (bVar5 | *(byte *)(lVar23 + 0x58) & 0xfe) ^ 1;
          plVar12 = *(long **)(param_1 + 0x128);
        }
      }
      else {
        plVar12 = *(long **)(param_1 + 0x130);
        lVar23 = plVar12[7];
        if (lVar23 != 0) {
          *(byte *)(lVar23 + 0x58) = (bVar5 | *(byte *)(lVar23 + 0x58) & 0xfe) ^ 1;
          plVar12 = *(long **)(param_1 + 0x130);
        }
      }
      (**(code **)(*plVar12 + 0x60))(plVar12,bVar5 == 0);
      uVar11 = local_d0;
      lVar23 = (long)(int)*(uint *)(param_1 + 0x377c);
      if (7 < *(uint *)(param_1 + 0x377c)) goto LAB_7101a8e5a4;
      lVar25 = *(long *)(param_1 + lVar23 * 8 + 0x3780);
      iVar8 = *(int *)(lVar25 + 0x25c);
      uVar13 = extraout_x1_02;
      if (iVar8 == -1) {
        lVar23 = *(long *)(lVar28 + 0x600);
        cVar6 = *(char *)(lVar23 + 0x4aa);
        if (((cVar6 == '\0') || ((*(byte *)(lVar23 + 0x1b4) >> 1 & 1) == 0)) &&
           (iVar8 = *(int *)(*(long *)(param_1 + 0x3808) + 0x25c), iVar8 != 0)) {
          if (cVar6 == '\0') {
            if (iVar8 == 1) goto LAB_7101a8f244;
LAB_7101a8f2e4:
            if ((*(int *)(param_1 + 0x3834) < 1) ||
               (*(int *)(*(long *)(param_1 + 0x3800) + 0x25c) != -1)) goto LAB_7101a8f300;
            if (*(int *)(*(long *)(param_1 + 0x3810) + 0x25c) != -1) {
              if (*pcVar2 == '\0') {
                plVar12 = *(long **)(param_1 + 0x128);
                lVar28 = plVar12[7];
                if (lVar28 != 0) {
                  *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe;
                  plVar12 = *(long **)(param_1 + 0x128);
                }
              }
              else {
                plVar12 = *(long **)(param_1 + 0x130);
                lVar28 = plVar12[7];
                if (lVar28 != 0) {
                  *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe;
                  plVar12 = *(long **)(param_1 + 0x130);
                }
              }
              (**(code **)(*plVar12 + 0x60))(plVar12,0);
              if (0x12 < *(uint *)(param_1 + 0x104)) goto LAB_7101a8e5a4;
              lVar28 = param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4;
              uVar21 = 7;
              uVar13 = extraout_x1_12;
              goto LAB_7101a8f264;
            }
            goto LAB_7101a8f268;
          }
          if (((*(uint *)(lVar23 + 0x1b0) >> 1 & 1) != 0) || (iVar8 == 1)) {
LAB_7101a8f244:
            uVar11 = 1;
            goto LAB_7101a8f24c;
          }
          if ((*(byte *)(lVar23 + 0x1ac) >> 1 & 1) == 0) goto LAB_7101a8f2e4;
LAB_7101a8f300:
          if (*(int *)(*(long *)(param_1 + 0x3800) + 0x25c) != -1) {
            if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
               (uVar11 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,
                                        (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                        param_8), (uVar11 & 1) != 0)) {
              FUN_71024076d0(local_1b8,0xf57a523f5);
              if (((local_1a8 != 0) && (DAT_7106dd53a8 == '\x01')) &&
                 ((int)local_1a0 == DAT_7106dd53ac)) {
                piVar19 = (int *)(local_1a8 + 0x38);
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar7) {
                    *piVar19 = *piVar19 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
            }
            else {
              local_1a0 = 0x87650000000000;
              local_190 = 0xffffffffffffffff;
              uStack_188 = 0;
              local_1b8[0] = 0;
              local_180 = 0;
            }
            local_1b0 = &PTR_FUN_7104f73d50;
            local_1a8 = 0;
            local_198 = 0;
            lVar23 = *(long *)(lVar28 + 0x600);
            cVar6 = *(char *)(lVar23 + 0x4aa);
          }
          if ((cVar6 != '\0') && ((*(byte *)(lVar23 + 0x1ac) >> 1 & 1) != 0)) {
            if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
               (uVar11 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1053dffe8c,
                                        (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                        param_8), (uVar11 & 1) != 0)) {
              FUN_71024076d0(local_1f8,0x1053dffe8c);
              if (((local_1e8 != 0) && (DAT_7106dd53a8 == '\x01')) &&
                 ((int)local_1e0 == DAT_7106dd53ac)) {
                piVar19 = (int *)(local_1e8 + 0x38);
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                  if (bVar7) {
                    *piVar19 = *piVar19 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
            }
            else {
              local_1e0 = 0x87650000000000;
              local_1d0 = 0xffffffffffffffff;
              uStack_1c8 = 0;
              local_1f8[0] = 0;
              local_1c0 = 0;
            }
            local_1f0 = &PTR_FUN_7104f73d50;
            local_1e8 = 0;
            local_1d8 = 0;
          }
          if (*pcVar2 != '\0') {
            lVar28 = *(long *)(param_1 + 0x128);
            uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x130) + 0x60);
            fVar32 = *(float *)(lVar28 + 0x90);
            fVar33 = *(float *)(lVar28 + 0x94);
            fVar35 = (float)uVar13;
            fVar30 = (float)((ulong)uVar13 >> 0x20);
            fVar29 = fVar32;
            if (fVar32 <= fVar35) {
              fVar29 = fVar35;
            }
            fVar34 = *(float *)(lVar28 + 0x98);
            fVar35 = *(float *)(lVar28 + 0x9c);
            fVar31 = fVar33;
            if (fVar29 <= fVar33) {
              fVar31 = fVar29;
            }
            fVar29 = fVar34;
            if (fVar34 <= fVar30) {
              fVar29 = fVar30;
            }
            fVar30 = fVar35;
            if (fVar29 <= fVar35) {
              fVar30 = fVar29;
            }
            *(undefined8 *)(lVar28 + 0x78) = 0;
            *(ulong *)(lVar28 + 0x70) = CONCAT44(fVar30,fVar31);
            *(undefined8 *)(lVar28 + 0x60) = *(undefined8 *)(lVar28 + 0x70);
            *(undefined8 *)(lVar28 + 0x68) = *(undefined8 *)(lVar28 + 0x78);
            fVar29 = (float)*(undefined8 *)(lVar28 + 0x60);
            fVar30 = (float)((ulong)*(undefined8 *)(lVar28 + 0x60) >> 0x20);
            if (fVar32 <= fVar29) {
              fVar32 = fVar29;
            }
            if (fVar32 <= fVar33) {
              fVar33 = fVar32;
            }
            if (fVar34 <= fVar30) {
              fVar34 = fVar30;
            }
            if (fVar34 <= fVar35) {
              fVar35 = fVar34;
            }
            *(undefined8 *)(lVar28 + 0x68) = 0;
            *(ulong *)(lVar28 + 0x60) = CONCAT44(fVar35,fVar33);
            lVar28 = *(long *)(lVar28 + 0x38);
            if (lVar28 != 0) {
              *(float *)(lVar28 + 0x30) = fVar33;
              *(float *)(lVar28 + 0x34) = fVar35;
              *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) | 0x10;
            }
            (**(code **)(**(long **)(param_1 + 0x128) + 0x60))(*(long **)(param_1 + 0x128),1);
            lVar28 = *(long *)(*(long *)(param_1 + 0x128) + 0x38);
            if (lVar28 != 0) {
              *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) | 1;
            }
            (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),0);
            lVar28 = *(long *)(*(long *)(param_1 + 0x130) + 0x38);
            if (lVar28 != 0) {
              *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe;
            }
            *pcVar2 = '\0';
          }
          lVar28 = param_1 + 0x138;
          lVar23 = param_1;
          do {
            lVar25 = 0x144;
            do {
              uVar9 = *(uint *)(lVar28 + 0x694);
              uVar4 = *(uint *)(lVar23 + lVar25);
              FUN_7103776640(&local_b8,**(long **)(param_1 + 0x120) + 8,
                             (byte ****)"set_parts_in_%d%02d",(ulong)uVar9,(ulong)uVar4,param_5,
                             param_6,param_7,param_8);
              FUN_7103776640(&local_c8,**(long **)(param_1 + 0x120) + 8,
                             (byte ****)"set_parts_out_%d%02d",(ulong)uVar9,(ulong)uVar4,param_5,
                             param_6,param_7,param_8);
              plVar12 = local_b0;
              FUN_7103778300(0x3f800000,(long)local_b0,0x710436bd69);
              uVar11 = local_c0;
              FUN_7103778300(0x3f800000,local_c0,0x710436bd69);
              local_c8 = &PTR_FUN_710523d988;
              local_c0 = 0;
              if (uVar11 != 0) {
                uVar14 = *(ulong *)(uVar11 + 0x18);
                *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)(uVar11 + 0x18) = 0;
                if (uVar14 != 0) {
                  FUN_710392eb40(uVar14);
                }
                FUN_710392eb40(uVar11);
              }
              local_b8 = (long ***)&PTR_FUN_710523d988;
              local_b0 = (long *)0x0;
              if (plVar12 != (long *)0x0) {
                uVar11 = plVar12[3];
                plVar12[2] = (long)&PTR_FUN_710523d9a8;
                plVar12[3] = 0;
                if (uVar11 != 0) {
                  FUN_710392eb40(uVar11);
                }
                FUN_710392eb40((ulong)plVar12);
              }
              uVar9 = *(uint *)(lVar28 + 0x694);
              uVar4 = *(uint *)(lVar23 + lVar25);
              FUN_7103776640(&local_b8,**(long **)(param_1 + 0x120) + 8,
                             (byte ****)"set_parts_in_%d%02d",(ulong)uVar9,(ulong)uVar4,param_5,
                             param_6,param_7,param_8);
              param_3 = (ulong)uVar9;
              param_4 = (byte ****)(ulong)uVar4;
              FUN_7103776640(&local_c8,**(long **)(param_1 + 0x120) + 8,
                             (byte ****)"set_parts_out_%d%02d",param_3,param_4,param_5,param_6,
                             param_7,param_8);
              plVar12 = local_b0;
              FUN_7103778300(0x3f800000,(long)local_b0,0x7104400eb0);
              uVar11 = local_c0;
              FUN_7103778300(0x3f800000,local_c0,0x7104400eb0);
              local_c8 = &PTR_FUN_710523d988;
              local_c0 = 0;
              uVar13 = extraout_x1_09;
              if (uVar11 != 0) {
                uVar14 = *(ulong *)(uVar11 + 0x18);
                *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)(uVar11 + 0x18) = 0;
                if (uVar14 != 0) {
                  FUN_710392eb40(uVar14);
                }
                FUN_710392eb40(uVar11);
                uVar13 = extraout_x1_10;
              }
              local_b8 = (long ***)&PTR_FUN_710523d988;
              local_b0 = (long *)0x0;
              if (plVar12 != (long *)0x0) {
                uVar11 = *(ulong *)((long)plVar12 + 0x18);
                *(undefined ***)((long)plVar12 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)((long)plVar12 + 0x18) = 0;
                if (uVar11 != 0) {
                  FUN_710392eb40(uVar11);
                }
                FUN_710392eb40((ulong)plVar12);
                uVar13 = extraout_x1_11;
              }
              lVar25 = lVar25 + 0x38;
            } while (lVar25 != 0x7d4);
            lVar28 = lVar28 + 0x6c8;
            lVar23 = lVar23 + 0x6c8;
          } while (lVar28 != param_1 + 0x3778);
          if (0x12 < *(uint *)(param_1 + 0x104)) goto LAB_7101a8e5a4;
          lVar28 = param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4;
          uVar21 = 2;
        }
        else {
          uVar11 = 0;
LAB_7101a8f24c:
          FUN_7101a905b0(param_1,uVar11,param_3,param_4,param_5,param_6,param_7,param_8);
          if (0x12 < *(uint *)(param_1 + 0x104)) goto LAB_7101a8e5a4;
          lVar28 = param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4;
          uVar21 = 6;
          uVar13 = extraout_x1_08;
        }
LAB_7101a8f264:
        *(undefined4 *)(lVar28 + 0xb8) = uVar21;
      }
      else {
        uVar9 = *(uint *)(lVar25 + 0x254);
        if (0x1d < uVar9) goto LAB_7101a8e5a4;
        if (((*(int *)(param_1 + lVar23 * 0x6c8 + (long)(int)uVar9 * 0x38 + 0x138) == 2) &&
            (*(char *)(param_1 + lVar23 * 0x6c8 + (long)(int)uVar9 * 0x38 + 0x141) != '\0')) &&
           (0 < *(int *)(param_1 + 0x3834))) {
          *(int *)(param_1 + 0x3830) = iVar8;
          FUN_7103778300(0x3f800000,local_d0,0x7104349de4);
          FUN_7103778300(0x3f800000,uVar11,0x71042916b7);
          *(undefined1 *)(param_1 + 0x3911) = 0;
          (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),0);
          if (7 < *(uint *)(param_1 + 0x377c)) goto LAB_7101a8e5a4;
          plVar12 = *(long **)(param_1 + (long)(int)*(uint *)(param_1 + 0x377c) * 8 + 0x3780);
          (**(code **)(*plVar12 + 0x60))(plVar12,0);
          uVar13 = extraout_x1_03;
          if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
            param_3 = 4;
            uVar11 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1ae7841bb1,
                                    (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8
                                   );
            uVar13 = extraout_x1_04;
            if ((uVar11 & 1) == 0) goto LAB_7101a8f180;
            FUN_71024076d0(local_138,0x1ae7841bb1);
            uVar13 = extraout_x1_05;
            if (((local_128 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_120 == DAT_7106dd53ac)) {
              piVar19 = (int *)(local_128 + 0x38);
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
                if (bVar7) {
                  *piVar19 = *piVar19 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
          }
          else {
LAB_7101a8f180:
            local_120 = 0x87650000000000;
            local_110 = 0xffffffffffffffff;
            uStack_108 = 0;
            local_138[0] = 0;
            local_100 = 0;
          }
          local_130 = &PTR_FUN_7104f73d50;
          local_128 = 0;
          local_118 = 0;
          *(undefined4 *)(param_1 + 0x3828) = 1;
          goto LAB_7101a8f268;
        }
        if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
          param_3 = 4;
          uVar11 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xed63546f2,(long ****)&DAT_00000004
                                  ,param_4,param_5,param_6,param_7,param_8);
          uVar13 = extraout_x1_06;
          if ((uVar11 & 1) == 0) goto LAB_7101a8ec00;
          FUN_71024076d0(local_178,0xed63546f2);
          uVar13 = extraout_x1_07;
          if (((local_168 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_160 == DAT_7106dd53ac)
             ) {
            piVar19 = (int *)(local_168 + 0x38);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar7) {
                *piVar19 = *piVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
        }
        else {
LAB_7101a8ec00:
          local_160 = 0x87650000000000;
          local_150 = 0xffffffffffffffff;
          uStack_148 = 0;
          local_178[0] = 0;
          local_140 = 0;
        }
        local_170 = &PTR_FUN_7104f73d50;
        local_168 = 0;
        local_158 = 0;
      }
LAB_7101a8f268:
      FUN_7101a90b10(param_1,uVar13,param_3,param_4,param_5,param_6,param_7,param_8);
      goto LAB_7101a8f270;
    }
    FUN_71037780e0(&local_b8,(long)&local_d8,(long ****)"hammer_swing",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar12 = local_b0;
    if ((long *)local_b0[1] == (long *)0x0) {
      uVar11 = 1;
    }
    else {
      uVar11 = (**(code **)(*(long *)local_b0[1] + 0x138))();
      uVar11 = uVar11 & 0xffffffff;
    }
    local_b8 = (long ***)&PTR_FUN_710523d9e8;
    local_b0 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar12);
    }
    if ((uVar11 & 1) == 0) goto LAB_7101a8f270;
    FUN_7103778300(0x3f800000,local_d0,0x71042b3deb);
    pppplVar15 = (long ****)(ulong)*(uint *)(param_1 + 0x377c);
    ppppbVar17 = (byte ****)(ulong)*(uint *)(param_1 + 0x3830);
    FUN_7103776640(&local_c8,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_parts_in_%d%02d",
                   pppplVar15,ppppbVar17,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_b8,(long)&local_c8,(long ****)"set_fxui_break",pppplVar15,ppppbVar17,
                   param_5,param_6,param_7,param_8);
    plVar12 = local_b0;
    lVar28 = *local_b0;
    if (lVar28 != 0) {
      *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) | 1;
    }
    local_b8 = (long ***)&PTR_FUN_710523d9a8;
    local_b0 = (undefined8 *)0x0;
    if (plVar12 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar12);
    }
    FUN_7103776910(&local_b8,(long)&local_c8,(long ****)"set_fxui_break",pppplVar15,ppppbVar17,
                   param_5,param_6,param_7,param_8);
    plVar12 = local_b0;
    plVar10 = FUN_710377aae0((long *)*local_b0);
    if (plVar10 != (long *)0x0) {
      *(undefined1 *)((long)plVar10 + 0x13a) = 1;
    }
    local_b8 = (long ***)&PTR_FUN_710523d9a8;
    local_b0 = (long *)0x0;
    if (plVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)plVar12);
    }
    uVar21 = *(undefined4 *)(param_1 + 0x377c);
    puVar24 = *(undefined8 **)(param_1 + 0x3850);
    uVar3 = *(undefined4 *)(param_1 + 0x3830);
    if (puVar24 < *(undefined8 **)(param_1 + 0x3858)) {
      *puVar24 = CONCAT44(uVar3,uVar21);
      *(long *)(param_1 + 0x3850) = *(long *)(param_1 + 0x3850) + 8;
    }
    else {
      __src = *(void **)(param_1 + 0x3848);
      __n = (long)puVar24 - (long)__src;
      uVar11 = ((long)__n >> 3) + 1;
      if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar28 = (long)*(undefined8 **)(param_1 + 0x3858) - (long)__src;
      if ((ulong)(lVar28 >> 3) < 0xfffffffffffffff) {
        uVar14 = lVar28 >> 2;
        if (uVar11 <= uVar14) {
          uVar11 = uVar14;
        }
        if (uVar11 != 0) {
          if (uVar11 >> 0x3d != 0) goto LAB_7101a8e5a4;
          goto LAB_7101a8ef18;
        }
LAB_7101a8ef78:
        __dest = (void *)0x0;
      }
      else {
        uVar11 = 0x1fffffffffffffff;
LAB_7101a8ef18:
        ppplVar20 = (long ***)(uVar11 * 8);
        if (ppplVar20 == (long ***)0x0) {
          ppplVar20 = (long ***)0x1;
        }
        __dest = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,ppppbVar17,param_5,param_6,param_7
                                        ,param_8);
        if (__dest == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_e8 = (undefined **)((ulong)local_e8 & 0xffffffff00000000);
            pppplVar15 = &local_b8;
            local_b8 = ppplVar20;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e8);
            if (((uVar14 & 1) != 0) &&
               (__dest = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,ppppbVar17,param_5,param_6
                                                ,param_7,param_8), __dest != (void *)0x0))
            goto LAB_7101a8ef7c;
          }
          goto LAB_7101a8ef78;
        }
      }
LAB_7101a8ef7c:
      puVar24 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
      *puVar24 = CONCAT44(uVar3,uVar21);
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(param_1 + 0x3858) = (void *)((long)__dest + uVar11 * 8);
      *(void **)(param_1 + 0x3848) = __dest;
      *(undefined8 **)(param_1 + 0x3850) = puVar24 + 1;
      if (__src != (void *)0x0) {
        FUN_710392eb40((ulong)__src);
      }
    }
    if (0x12 < *(uint *)(param_1 + 0x104)) {
LAB_7101a8e5a4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4 + 0xb8) = 3;
    iVar8 = *(int *)(param_1 + 0x3834) + -1;
    *(int *)(param_1 + 0x3834) = iVar8;
    puVar24 = *(undefined8 **)(*DAT_7105314510 + 0x248);
    *(char *)(*(long *)*puVar24 + 0x2a4) = (char)iVar8;
    uVar14 = (ulong)*(uint *)(param_1 + 0x3830);
    uVar11 = FUN_7103267660(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x348),
                            *(uint *)(param_1 + 0x377c),*(uint *)(param_1 + 0x3830));
    uVar13 = FUN_7103268810(uVar11);
    uVar9 = (int)uVar13 * 3 + 2;
    if (uVar9 < 0x1e0) {
      lVar28 = *(long *)*puVar24;
      lVar23 = (ulong)(uVar9 >> 5) * 4;
      *(uint *)(lVar28 + lVar23) = *(uint *)(lVar28 + lVar23) | 1 << (ulong)(uVar9 & 0x1f);
    }
    if ((7 < *(uint *)(param_1 + 0x377c)) || (0x1d < *(uint *)(param_1 + 0x3830)))
    goto LAB_7101a8e5a4;
    *(undefined1 *)
     (param_1 + (long)(int)*(uint *)(param_1 + 0x377c) * 0x6c8 +
      (long)(int)*(uint *)(param_1 + 0x3830) * 0x38 + 0x168) = 1;
    FUN_7103776640(&local_f8,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_parts_btn_hammer",
                   uVar14,ppppbVar17,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_e8,(long)&local_f8,(long ****)"set_txt_hammer_n",uVar14,ppppbVar17,param_5
                   ,param_6,param_7,param_8);
    uVar11 = local_e0;
    plVar12 = *(long **)(local_e0 + 0x10);
    if (plVar12 != (long *)0x0) {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (long ***)0x0;
      local_b0 = (long *)0x0;
      uVar9 = FUN_71037ad940((long)&local_b8,0x20,0,*(uint *)(param_1 + 0x3834),0,0);
      FUN_71037a2270(plVar12,(ushort *)&local_b8,uVar9,0);
    }
    local_e8 = &PTR_FUN_710523d9a8;
    local_e0 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    uVar11 = local_f0;
    local_f8 = &PTR_FUN_710523d988;
    local_f0 = 0;
    if (uVar11 != 0) {
      uVar14 = *(ulong *)(uVar11 + 0x18);
      *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar11 + 0x18) = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40(uVar11);
    }
    uVar11 = local_c0;
    *(undefined4 *)(param_1 + 0x3828) = 3;
    local_c8 = &PTR_FUN_710523d988;
    local_c0 = 0;
    if (uVar11 != 0) {
      uVar14 = *(ulong *)(uVar11 + 0x18);
      *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar11 + 0x18) = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40(uVar11);
    }
    goto LAB_7101a8f270;
  }
  lVar28 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x120) + 0x600);
  if ((*(char *)(lVar28 + 0x4aa) != '\0') && ((*(byte *)(lVar28 + 0x274) >> 4 & 1) != 0)) {
    FUN_71037780e0(&local_b8,(long)&local_d8,(long ****)"hammer_standby",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar12 = local_b0;
    if (((long *)local_b0[1] == (long *)0x0) ||
       (uVar11 = (**(code **)(*(long *)local_b0[1] + 0x138))(), (uVar11 & 1) != 0)) {
      cVar6 = *(char *)(param_1 + 0x3911);
      local_b8 = (long ***)&PTR_FUN_710523d9e8;
      local_b0 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar12);
      }
      if (cVar6 != '\0') {
        uVar9 = *(uint *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x120) + 0x600) + 0x48c);
        if (uVar9 != 0xffffffff) {
          if (9 < uVar9) goto LAB_7101a8e5a4;
          lVar28 = *(long *)(*(long *)(DAT_71053398d8 + 8) + (long)(int)uVar9 * 8 + 8);
          if ((*(int *)(lVar28 + 0xa8) == 1) || (*(char *)(lVar28 + 0xdd) != '\0')) {
            *(undefined2 *)(lVar28 + 0xdd) = 0x100;
            if (0x12 < *(uint *)(lVar28 + 0xa4)) goto LAB_7101a8e5a4;
            *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar28 + 0xa4) * 4 + 0x58) = 2;
          }
        }
        FUN_7103778300(0x3f800000,local_d0,0x71042f7cc8);
        if (*(uint *)(param_1 + 0x377c) < 8) {
          lVar28 = *(long *)(param_1 + (long)(int)*(uint *)(param_1 + 0x377c) * 8 + 0x3780);
          lVar23 = *(long *)(lVar28 + 0x1b8);
          if (lVar23 != 0) {
            iVar8 = *(int *)(param_1 + 0x3830);
            lVar28 = lVar28 + 0x1b8;
            lVar25 = lVar28;
            do {
              if (iVar8 <= *(int *)(lVar23 + 0x20)) {
                lVar25 = lVar23;
              }
              lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < iVar8) * 8);
            } while (lVar23 != 0);
            if (((lVar25 != lVar28) && (*(int *)(lVar25 + 0x20) <= iVar8)) &&
               (plVar12 = *(long **)(lVar25 + 0x28), plVar12 != (long *)0x0)) {
              (**(code **)(*plVar12 + 0x218))(plVar12,0);
              (**(code **)(*plVar12 + 0x410))(plVar12);
              (**(code **)(*plVar12 + 0x3f0))(plVar12,0);
              iVar8 = (**(code **)(*plVar12 + 0x140))(plVar12);
              if ((iVar8 != 6) && (iVar8 = (**(code **)(*plVar12 + 0x140))(plVar12), iVar8 != 1)) {
                (**(code **)(*plVar12 + 0x400))(plVar12);
              }
              uVar11 = (**(code **)(*plVar12 + 0x158))(plVar12);
              if ((uVar11 & 1) == 0) {
                (**(code **)(*plVar12 + 0x370))(plVar12);
              }
            }
          }
          *(undefined1 *)(param_1 + 0x3890) = 1;
          *(undefined4 *)(param_1 + 0x3828) = 2;
          goto LAB_7101a8f270;
        }
        goto LAB_7101a8e5a4;
      }
    }
    else {
      local_b8 = (long ***)&PTR_FUN_710523d9e8;
      local_b0 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar12);
      }
    }
    FUN_71037780e0(&local_b8,(long)&local_d8,(long ****)"hammer_start",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar12 = local_b0;
    if (((long *)local_b0[1] == (long *)0x0) ||
       (uVar11 = (**(code **)(*(long *)local_b0[1] + 0x138))(), (uVar11 & 1) != 0)) {
      FUN_71037780e0(&local_c8,(long)&local_d8,(long ****)"hammer_standby",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar11 = local_c0;
      if (*(long **)(local_c0 + 8) == (long *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (**(code **)(**(long **)(local_c0 + 8) + 0x130))();
        uVar14 = uVar14 & 0xffffffff;
      }
      local_c8 = &PTR_FUN_710523d9e8;
      local_c0 = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      local_b8 = (long ***)&PTR_FUN_710523d9e8;
      local_b0 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar12);
      }
      if ((uVar14 & 1) == 0) {
        uVar9 = *(uint *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x120) + 0x600) + 0x48c);
        if (uVar9 != 0xffffffff) {
          FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),uVar9,0x24e51bb73d,0,0,0,0,0);
        }
        FUN_7103778300(0x3f800000,local_d0,0x71042804d8);
        *(undefined1 *)(param_1 + 0x3911) = 1;
      }
    }
    else {
      local_b8 = (long ***)&PTR_FUN_710523d9e8;
      local_b0 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar12);
      }
    }
    goto LAB_7101a8f270;
  }
  uVar9 = *(uint *)(lVar28 + 0x48c);
  if (uVar9 != 0xffffffff) {
    if (9 < uVar9) goto LAB_7101a8e5a4;
    lVar28 = *(long *)(*(long *)(DAT_71053398d8 + 8) + (long)(int)uVar9 * 8 + 8);
    if ((*(int *)(lVar28 + 0xa8) == 1) || (*(char *)(lVar28 + 0xdd) != '\0')) {
      *(undefined2 *)(lVar28 + 0xdd) = 0x100;
      if (0x12 < *(uint *)(lVar28 + 0xa4)) goto LAB_7101a8e5a4;
      *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar28 + 0xa4) * 4 + 0x58) = 2;
    }
  }
  (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),1);
  if (7 < *(uint *)(param_1 + 0x377c)) goto LAB_7101a8e5a4;
  plVar12 = *(long **)(param_1 + (long)(int)*(uint *)(param_1 + 0x377c) * 8 + 0x3780);
  (**(code **)(*plVar12 + 0x60))(plVar12,1);
  FUN_71037780e0(&local_b8,(long)&local_d8,(long ****)"hammer_start",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar12 = local_b0;
  plVar10 = (long *)local_b0[1];
  if (plVar10 == (long *)0x0) {
    local_b8 = (long ***)&PTR_FUN_710523d9e8;
    local_b0 = (long *)0x0;
    if (plVar12 != (long *)0x0) goto LAB_7101a8ee70;
  }
  else {
    if ((char)local_b0[2] != '\0') {
      plVar27 = *(long **)(*local_b0 + 0x80);
      plVar1 = (long *)(*local_b0 + 0x88);
      if (plVar27 != plVar1) {
        do {
          while( true ) {
            uVar11 = (**(code **)(*(long *)plVar27[0xd] + 0x148))();
            if (((uVar11 & 1) != 0) &&
               (uVar11 = (**(code **)(*plVar10 + 0x120))(plVar10,plVar27[0xd]), (uVar11 & 1) != 0))
            {
              (**(code **)(*(long *)plVar27[0xd] + 0x178))();
              (**(code **)(*(long *)plVar27[0xd] + 0x140))((long *)plVar27[0xd],0);
            }
            plVar18 = (long *)plVar27[1];
            if ((long *)plVar27[1] == (long *)0x0) break;
            do {
              plVar27 = plVar18;
              plVar18 = (long *)*plVar27;
            } while ((long *)*plVar27 != (long *)0x0);
LAB_7101a8e770:
            if (plVar27 == plVar1) goto LAB_7101a8e788;
          }
          plVar18 = plVar27 + 2;
          plVar22 = (long *)*plVar18;
          if ((long *)*plVar22 != plVar27) {
            do {
              lVar28 = *plVar18;
              plVar18 = (long *)(lVar28 + 0x10);
              plVar27 = (long *)*plVar18;
            } while (*plVar27 != lVar28);
            goto LAB_7101a8e770;
          }
          plVar27 = plVar22;
        } while (plVar22 != plVar1);
LAB_7101a8e788:
        plVar10 = (long *)local_b0[1];
      }
    }
    (**(code **)(*plVar10 + 0x168))(0xbf800000,plVar10);
LAB_7101a8ee70:
    local_b0 = (long *)0x0;
    local_b8 = (long ***)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar12);
  }
  FUN_7103778300(0x3f800000,local_d0,0x71042b3deb);
  lVar28 = DAT_710532f8d0;
  FUN_710240a7a0();
  lVar28 = *(long *)(lVar28 + 8);
  puVar24 = (undefined8 *)(lVar28 + 0x78);
  FUN_7101316520((undefined8 *)*puVar24);
  *puVar24 = 0;
  *(undefined8 *)(lVar28 + 0x80) = 0;
  *(undefined8 **)(lVar28 + 0x70) = puVar24;
  *(undefined4 *)(param_1 + 0x3828) = 0;
LAB_7101a8f270:
  uVar11 = local_d0;
  local_d8 = &PTR_FUN_710523d988;
  local_d0 = 0;
  if (uVar11 != 0) {
    uVar14 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar11);
  }
  return;
}

