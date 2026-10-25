// addr:      7101c9c5e0
// offset:    0x1c9c5e0
// name:      FUN_7101c9c5e0
// mangled:   
// signature: undefined __cdecl FUN_7101c9c5e0(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c9c5e0(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  char cVar4;
  ushort uVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  long ****pppplVar16;
  undefined4 uVar17;
  long lVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  byte *pbVar22;
  long *plVar23;
  byte *pbVar24;
  undefined4 *puVar25;
  undefined4 local_1c0 [2];
  undefined **local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [8];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180 [2];
  undefined **local_178;
  long local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140 [4];
  long local_130;
  int local_128;
  undefined4 local_100 [4];
  long local_f0;
  int local_e8;
  undefined4 local_c0 [4];
  long local_b0;
  int local_a8;
  undefined **local_80;
  undefined8 *local_78;
  long ***local_6c;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x70))(*(long **)(param_1 + 0x128),0);
    pppplVar16 = (long ****)0x1;
    FUN_7103771d60(&local_80,*(long *)(param_1 + 0x128),(long ****)0x1,param_4,param_5,param_6,
                   param_7,param_8);
    puVar7 = local_78;
    plVar23 = (long *)*local_78;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x1f8))(plVar23,0);
      uVar12 = (**(code **)(*plVar23 + 0x200))(plVar23);
      if ((uVar12 & 1) == 0) {
        uVar8 = 1;
      }
      else {
        uVar8 = (**(code **)(*plVar23 + 0x210))(plVar23);
        uVar8 = uVar8 ^ 1;
      }
      pppplVar16 = (long ****)0x0;
      (**(code **)(*plVar23 + 0x388))(plVar23,uVar8 & 1);
    }
    local_80 = &PTR_FUN_710523d9c8;
    local_78 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar7);
    }
    (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),1);
    FUN_7101ca1ee0(param_1,0x7104454b2a,pppplVar16,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_80,param_1 + 0x118,(long ****)"set_txt_help",pppplVar16,param_4,param_5,
                   param_6,param_7,param_8);
    puVar7 = local_78;
    if (*(long **)((long)local_78 + 0x10) != (long *)0x0) {
      pppplVar16 = (long ****)0x0;
      param_4 = (byte ****)0x0;
      local_6c._0_4_ = 0;
      FUN_71037a2270(*(long **)((long)local_78 + 0x10),(ushort *)&local_6c,0,0);
    }
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar7);
    }
    FUN_7101c9e110(param_1,*(char *)(param_1 + 0x24e),pppplVar16,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7101ca10c0(param_1,1,pppplVar16,param_4,param_5,param_6,param_7,param_8);
    uVar8 = (uint)((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228)) >> 2);
    if (0 < (int)uVar8) {
      uVar10 = 0;
      do {
        pppplVar16 = (long ****)(ulong)uVar10;
        FUN_7103771d60(&local_80,*(long *)(param_1 + 0x168),pppplVar16,param_4,param_5,param_6,
                       param_7,param_8);
        puVar7 = local_78;
        plVar23 = (long *)*local_78;
        if (plVar23 != (long *)0x0) {
          (**(code **)(*plVar23 + 0x1f8))(plVar23,0);
          uVar12 = (**(code **)(*plVar23 + 0x200))(plVar23);
          if ((uVar12 & 1) == 0) {
            uVar9 = 1;
          }
          else {
            uVar9 = (**(code **)(*plVar23 + 0x210))(plVar23);
            uVar9 = uVar9 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar23 + 0x388))(plVar23,uVar9 & 1);
        }
        local_80 = &PTR_FUN_710523d9c8;
        local_78 = (undefined8 *)0x0;
        if (puVar7 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar7);
        }
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
    }
    FUN_7101ca2050(param_1,1,pppplVar16,param_4,param_5,param_6,param_7,param_8);
    pbVar24 = *(byte **)(param_1 + 0x180);
    pbVar2 = *(byte **)(param_1 + 0x188);
    if (pbVar24 != pbVar2) {
      do {
        FUN_7101c9eb90(param_1,param_1 + 0x24c,pbVar24,param_4,param_5,param_6,param_7,param_8);
        pbVar24 = pbVar24 + 1;
      } while (pbVar2 != pbVar24);
    }
    plVar23 = *(long **)(param_1 + 0x130);
    if (*(int *)((long)plVar23 + 0x254) == -1) {
      FUN_7103771a80((long *)(param_1 + 0x130),(uint)**(byte **)(param_1 + 0x180),1);
      plVar23 = *(long **)(param_1 + 0x130);
    }
    *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
    (**(code **)(*plVar23 + 0x70))(plVar23,1);
    if ((*(uint *)(param_1 + 0x110) | 2) != 6) {
      lVar13 = *(long *)(DAT_710532f8d0 + 8);
      lVar18 = *(long *)(lVar13 + 0x40);
      uVar12 = *(long *)(lVar13 + 0x48) - lVar18 >> 3;
      if (*(char *)(param_1 + 0x26c) == '\0') {
        if (uVar12 < 2) {
          uVar12 = 0;
          cVar4 = *(char *)(lVar13 + 0x191);
        }
        else {
          uVar12 = *(ulong *)(lVar18 + 8);
          cVar4 = *(char *)(lVar13 + 0x191);
        }
        if ((((cVar4 == '\0') &&
             (uVar14 = FUN_7103313f20(lVar13,uVar12,(long ****)&DAT_00000004,param_4,param_5,param_6
                                      ,param_7,param_8), (uVar14 & 1) != 0)) &&
            (FUN_71024076d0(local_100,uVar12), local_f0 != 0)) &&
           ((DAT_7106dd53a8 == '\x01' && (local_e8 == DAT_7106dd53ac)))) {
          piVar20 = (int *)(local_f0 + 0x38);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar6) {
              *piVar20 = *piVar20 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        if (uVar12 < 3) {
          uVar12 = 0;
          cVar4 = *(char *)(lVar13 + 0x191);
        }
        else {
          uVar12 = *(ulong *)(lVar18 + 0x10);
          cVar4 = *(char *)(lVar13 + 0x191);
        }
        if (((cVar4 == '\0') &&
            (uVar14 = FUN_7103313f20(lVar13,uVar12,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                     param_7,param_8), (uVar14 & 1) != 0)) &&
           ((FUN_71024076d0(local_c0,uVar12), local_b0 != 0 &&
            ((DAT_7106dd53a8 == '\x01' && (local_a8 == DAT_7106dd53ac)))))) {
          piVar20 = (int *)(local_b0 + 0x38);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar6) {
              *piVar20 = *piVar20 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
    }
    goto LAB_7101c9cce8;
  }
  iVar11 = *(int *)(*(long *)(param_1 + 0x130) + 0x25c);
  uVar12 = (**(code **)(**(long **)(param_1 + 0x128) + 0x78))();
  if ((uVar12 & 1) == 0) {
    plVar23 = (long *)(param_1 + 0x130);
    if ((char)((long *)*plVar23)[0x50] == '\0') {
      uVar12 = (**(code **)(*(long *)*plVar23 + 0x78))();
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x178) + 0x25c) == 200) {
          if (*(int *)(param_1 + 0x104) < 0x12) {
            uVar8 = *(int *)(param_1 + 0x104) + 1;
            *(uint *)(param_1 + 0x104) = uVar8;
            if (0x12 < uVar8) {
LAB_7101c9d458:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined4 *)(param_1 + (long)(int)uVar8 * 4 + 0xb8) = 6;
          }
          goto LAB_7101c9cce8;
        }
        if (iVar11 == 6) {
          if (*(int *)(param_1 + 0x104) < 0x12) {
            uVar8 = *(int *)(param_1 + 0x104) + 1;
            *(uint *)(param_1 + 0x104) = uVar8;
            if (0x12 < uVar8) goto LAB_7101c9d458;
            *(undefined4 *)(param_1 + (long)(int)uVar8 * 4 + 0xb8) = 4;
          }
          (**(code **)(**(long **)(param_1 + 0x130) + 0x70))(*(long **)(param_1 + 0x130),0);
          (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),0);
          FUN_7101ca10c0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x120),0x7104443867);
          lVar18 = *(long *)(DAT_710532f8d0 + 8);
          if ((ulong)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 3) < 6) {
            uVar12 = 0;
            cVar4 = *(char *)(lVar18 + 0x191);
          }
          else {
            uVar12 = *(ulong *)(*(long *)(lVar18 + 0x40) + 0x28);
            cVar4 = *(char *)(lVar18 + 0x191);
          }
          if ((((cVar4 == '\0') &&
               (uVar14 = FUN_7103313f20(lVar18,uVar12,(long ****)&DAT_00000004,param_4,param_5,
                                        param_6,param_7,param_8), (uVar14 & 1) != 0)) &&
              (FUN_71024076d0(local_140,uVar12), local_130 != 0)) &&
             ((DAT_7106dd53a8 == '\x01' && (local_128 == DAT_7106dd53ac)))) {
            piVar20 = (int *)(local_130 + 0x38);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar6) {
                *piVar20 = *piVar20 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          goto LAB_7101c9cce8;
        }
        if (iVar11 == 100) {
          *(undefined1 *)(param_1 + 0x24c) = 1;
          if ((((*(char *)(param_1 + 0x242) == '\x01') &&
               (*(char *)(param_1 + 0x243) == *(char *)(param_1 + 0x24d))) &&
              ((*(char *)(param_1 + 0x244) == *(char *)(param_1 + 0x24e) &&
               (((*(char *)(param_1 + 0x245) == *(char *)(param_1 + 0x24f) &&
                 (*(char *)(param_1 + 0x246) == *(char *)(param_1 + 0x250))) &&
                (*(char *)(param_1 + 0x247) == *(char *)(param_1 + 0x251))))))) &&
             ((*(char *)(param_1 + 0x248) == *(char *)(param_1 + 0x252) &&
              (*(short *)(param_1 + 0x24a) == *(short *)(param_1 + 0x254))))) {
            uVar17 = 1;
          }
          else {
            if (((DAT_71053144d8 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
              FUN_7101764000();
              param_3 = &PTR_LOOP_7104f17000;
              FUN_71000001c0();
              __cxa_guard_release(&DAT_71053144d8);
            }
            DAT_7105306970 = *(undefined8 *)(param_1 + 0x24c);
            DAT_7105306978._0_2_ = *(undefined2 *)(param_1 + 0x254);
            uVar17 = 2;
          }
          *(undefined4 *)(param_1 + 0x268) = uVar17;
          goto LAB_7101c9c6c8;
        }
        iVar19 = *(int *)(*plVar23 + 0x254);
        if (iVar19 != 100) {
          lVar18 = *(long *)(param_2 + 8);
          if (*(char *)(lVar18 + 0x4aa) == '\0') {
LAB_7101c9cf30:
            if (iVar11 != iVar19) goto LAB_7101c9d05c;
            param_3 = (undefined **)0x1;
            bVar15 = (byte)iVar11;
          }
          else {
            bVar15 = (byte)iVar19;
            if ((*(byte *)(lVar18 + 0x1b0) >> 3 & 1) == 0) {
              if ((*(byte *)(lVar18 + 0x1b4) >> 3 & 1) == 0) goto LAB_7101c9cf30;
              param_3 = (undefined **)0x1;
            }
            else {
              param_3 = (undefined **)0x0;
            }
          }
          FUN_7101ca2300(param_1,bVar15,(ulong)param_3,param_4,param_5,param_6,param_7,param_8);
        }
LAB_7101c9d05c:
        FUN_7103776390(&local_80,(undefined8 *)(*plVar23 + 0x1f8),(long ****)param_3,param_4,param_5
                       ,param_6,param_7,param_8);
        if (*(long *)local_78[3] == 0) {
          if (iVar19 != 100) goto LAB_7101c9d0a0;
        }
        else if ((iVar19 != 100) != (bool)(*(byte *)(*(long *)local_78[3] + 0x58) & 1)) {
LAB_7101c9d0a0:
          if ((local_78[1] != 0) && (lVar18 = *(long *)(local_78[1] + 0x18), lVar18 != 0)) {
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe | iVar19 != 100;
          }
        }
        pbVar24 = *(byte **)(param_1 + 0x180);
        pbVar2 = *(byte **)(param_1 + 0x188);
        if (pbVar24 != pbVar2) {
          lVar18 = param_1 + 0x24c;
          do {
            bVar15 = *pbVar24;
            uVar12 = (ulong)bVar15;
            local_6c._0_4_ = CONCAT31(local_6c._1_3_,bVar15);
            if (7 < uVar12) goto LAB_7101c9d458;
            iVar11 = *(int *)(*(long *)(param_1 + uVar12 * 8 + 0x138) + 0x254);
            uVar14 = (ulong)iVar11;
            if (-1 < iVar11) {
              uVar8 = (uint)bVar15;
              if (bVar15 < 7 || uVar8 == 7) {
                iVar19 = 2;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch(bVar15) {
                case 0:
                  iVar19 = *(int *)(param_1 + 0x1a0);
                  iVar21 = *(int *)(param_1 + 0x198);
                  break;
                case 1:
                  iVar19 = *(int *)(param_1 + 0x1b8);
                  iVar21 = *(int *)(param_1 + 0x1b0);
                  break;
                case 2:
                  iVar19 = *(int *)(param_1 + 0x200);
                  iVar21 = *(int *)(param_1 + 0x1f8);
                  break;
                case 3:
                  iVar19 = *(int *)(param_1 + 0x1e8);
                  iVar21 = *(int *)(param_1 + 0x1e0);
                  break;
                case 4:
                  iVar19 = *(int *)(param_1 + 0x1d0);
                  iVar21 = *(int *)(param_1 + 0x1c8);
                  break;
                case 5:
                  iVar19 = *(int *)(param_1 + 0x218);
                  iVar21 = *(int *)(param_1 + 0x210);
                  break;
                case 6:
                  goto switchD_7101c9d14c_caseD_6;
                case 7:
                  goto switchD_7101c9d14c_caseD_7;
                }
                iVar19 = iVar19 - iVar21;
              }
              else {
switchD_7101c9d14c_caseD_6:
                iVar19 = 0;
              }
switchD_7101c9d14c_caseD_7:
              if (iVar11 < iVar19 && uVar8 < 8) {
                    /* WARNING: Switch is manually overridden */
                switch(uVar12) {
                case 0:
                  if ((ulong)(*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198)) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  cVar4 = *(char *)(*(long *)(param_1 + 0x198) + uVar14);
                  if (*(char *)(param_1 + 0x24d) != cVar4) {
                    *(char *)(param_1 + 0x24d) = cVar4;
LAB_7101c9d35c:
                    FUN_7101c9eb90(param_1,lVar18,(byte *)&local_6c,param_4,param_5,param_6,param_7,
                                   param_8);
LAB_7101c9d36c:
                    if (*(uint *)(*plVar23 + 0x254) != (uint)bVar15) {
                      FUN_7103771a80(plVar23,uVar8,0);
                    }
                    param_3 = (undefined **)&local_6c;
                    FUN_7101c9ed20(param_1,lVar18,(undefined1 *)param_3,param_4,param_5,param_6,
                                   param_7,param_8);
                    FUN_7101ca2050(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
                  }
                  break;
                case 1:
                  if ((ulong)(*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0)) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  cVar4 = *(char *)(*(long *)(param_1 + 0x1b0) + uVar14);
                  if (*(char *)(param_1 + 0x24e) != cVar4) {
                    *(char *)(param_1 + 0x24e) = cVar4;
                    FUN_7101c9e110(param_1,cVar4,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
                    FUN_7101ca10c0(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
                    uVar10 = FUN_7101c9ef10(param_1,lVar18,4);
                    if (uVar10 == 0xffffffff) {
                      pbVar22 = (byte *)(*(long *)(param_1 + 0x1d0) + -1);
                      iVar19 = (uint)*(byte *)(param_1 + 0x24f) - (uint)**(byte **)(param_1 + 0x1c8)
                      ;
                      iVar11 = -iVar19;
                      if (-1 < iVar19) {
                        iVar11 = iVar19;
                      }
                      iVar21 = (uint)*(byte *)(param_1 + 0x24f) - (uint)*pbVar22;
                      iVar19 = -iVar21;
                      if (-1 < iVar21) {
                        iVar19 = iVar21;
                      }
                      pbVar3 = *(byte **)(param_1 + 0x1c8);
                      if (iVar19 <= iVar11) {
                        pbVar3 = pbVar22;
                      }
                      *(byte *)(param_1 + 0x24f) = *pbVar3;
                    }
                    pbVar3 = *(byte **)(param_1 + 0x188);
                    for (pbVar22 = *(byte **)(param_1 + 0x180); pbVar22 != pbVar3;
                        pbVar22 = pbVar22 + 1) {
                      FUN_7101c9eb90(param_1,lVar18,pbVar22,param_4,param_5,param_6,param_7,param_8)
                      ;
                    }
                    goto LAB_7101c9d36c;
                  }
                  break;
                case 2:
                  if ((ulong)(*(long *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f8)) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  cVar4 = *(char *)(*(long *)(param_1 + 0x1f8) + uVar14);
                  if (*(char *)(param_1 + 0x251) != cVar4) {
                    *(char *)(param_1 + 0x251) = cVar4;
                    goto LAB_7101c9d35c;
                  }
                  break;
                case 3:
                  if ((ulong)(*(long *)(param_1 + 0x1e8) - *(long *)(param_1 + 0x1e0)) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  cVar4 = *(char *)(*(long *)(param_1 + 0x1e0) + uVar14);
                  if (*(char *)(param_1 + 0x250) != cVar4) {
                    *(char *)(param_1 + 0x250) = cVar4;
                    goto LAB_7101c9d35c;
                  }
                  break;
                case 4:
                  if ((ulong)(*(long *)(param_1 + 0x1d0) - *(long *)(param_1 + 0x1c8)) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  cVar4 = *(char *)(*(long *)(param_1 + 0x1c8) + uVar14);
                  if (*(char *)(param_1 + 0x24f) != cVar4) {
                    *(char *)(param_1 + 0x24f) = cVar4;
                    goto LAB_7101c9d35c;
                  }
                  break;
                case 5:
                  if ((ulong)(*(long *)(param_1 + 0x218) - *(long *)(param_1 + 0x210)) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  cVar4 = *(char *)(*(long *)(param_1 + 0x210) + uVar14);
                  if (*(char *)(param_1 + 0x252) != cVar4) {
                    *(char *)(param_1 + 0x252) = cVar4;
                    goto LAB_7101c9d35c;
                  }
                  break;
                case 7:
                  uVar5 = *(ushort *)(param_1 + 0x254);
                  if ((uint)(iVar11 != 0) != (uVar5 & 0x100) >> 8) {
                    uVar1 = uVar5 | 0x100;
                    if (iVar11 == 0) {
                      uVar1 = uVar5 & 0xfeff;
                    }
                    *(ushort *)(param_1 + 0x254) = uVar1;
                    goto LAB_7101c9d35c;
                  }
                }
              }
            }
            pbVar24 = pbVar24 + 1;
          } while (pbVar24 != pbVar2);
        }
        iVar11 = *(int *)(*(long *)(param_1 + 0x130) + 0x254);
        if (iVar11 != *(int *)(param_1 + 0x25c)) {
          *(int *)(param_1 + 0x25c) = iVar11;
          local_6c._0_4_ = CONCAT31(local_6c._1_3_,(char)iVar11);
          FUN_7101c9ed20(param_1,param_1 + 0x24c,(undefined1 *)&local_6c,param_4,param_5,param_6,
                         param_7,param_8);
        }
        puVar7 = local_78;
        local_80 = &PTR_FUN_710523d988;
        local_78 = (undefined8 *)0x0;
        if (puVar7 != (undefined8 *)0x0) {
          uVar12 = puVar7[3];
          puVar7[2] = &PTR_FUN_710523d9a8;
          puVar7[3] = 0;
          if (uVar12 != 0) {
            FUN_710392eb40(uVar12);
          }
          FUN_710392eb40((ulong)puVar7);
        }
        goto LAB_7101c9cce8;
      }
      uVar17 = 1;
      goto LAB_7101c9c630;
    }
    *(undefined1 *)(param_1 + 0x24c) = *(undefined1 *)(param_1 + 0x242);
    *(undefined1 *)(param_1 + 0x26c) = 1;
  }
  else {
    uVar17 = *(undefined4 *)(*(long *)(param_1 + 0x128) + 0x254);
LAB_7101c9c630:
    *(undefined4 *)(param_1 + 600) = uVar17;
  }
LAB_7101c9c6c8:
  if (*(int *)(param_1 + 600) != *(int *)(*(long *)(param_1 + 0x128) + 0x254)) {
    FUN_7101ca24d0(param_1,*(int *)(param_1 + 600),(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  FUN_7101ca2050(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710376b960(*(long *)(param_1 + 0x130));
  (**(code **)(**(long **)(param_1 + 0x130) + 0x70))(*(long **)(param_1 + 0x130),0);
  pppplVar16 = (long ****)0x1;
  FUN_7103771d60(&local_80,*(long *)(param_1 + 0x128),(long ****)0x1,param_4,param_5,param_6,param_7
                 ,param_8);
  puVar7 = local_78;
  plVar23 = (long *)*local_78;
  if (plVar23 != (long *)0x0) {
    uVar8 = 1;
    (**(code **)(*plVar23 + 0x1f8))(plVar23,1);
    uVar12 = (**(code **)(*plVar23 + 0x200))(plVar23);
    if ((uVar12 & 1) != 0) {
      uVar8 = (**(code **)(*plVar23 + 0x210))(plVar23);
      uVar8 = uVar8 ^ 1;
    }
    pppplVar16 = (long ****)0x0;
    (**(code **)(*plVar23 + 0x388))(plVar23,uVar8 & 1);
  }
  local_80 = &PTR_FUN_710523d9c8;
  local_78 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  if (*(int *)(param_1 + 0x268) == 0) {
    lVar13 = *(long *)(DAT_710532f8d0 + 8);
    lVar18 = *(long *)(lVar13 + 0x40);
    uVar12 = *(long *)(lVar13 + 0x48) - lVar18 >> 3;
    if (*(char *)(param_1 + 0x26c) == '\0') {
      if (uVar12 < 2) {
        uVar12 = 0;
        cVar4 = *(char *)(lVar13 + 0x191);
      }
      else {
        uVar12 = *(ulong *)(lVar18 + 8);
        cVar4 = *(char *)(lVar13 + 0x191);
      }
      if (cVar4 == '\0') {
        pppplVar16 = (long ****)&DAT_00000004;
        uVar14 = FUN_7103313f20(lVar13,uVar12,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                param_7,param_8);
        if ((uVar14 & 1) != 0) {
          puVar25 = local_1c0;
          FUN_71024076d0(local_1c0,uVar12);
          plVar23 = &local_1b0;
          local_1b8 = &PTR_FUN_7104f73d50;
          if (local_1b0 != 0) {
            if ((DAT_7106dd53a8 == '\x01') && ((int)local_1a8 == DAT_7106dd53ac)) {
              piVar20 = (int *)(local_1b0 + 0x38);
              do {
                puVar25 = local_1c0;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                if (bVar6) {
                  *piVar20 = *piVar20 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            else {
              puVar25 = local_1c0;
            }
          }
          goto LAB_7101c9ccc0;
        }
      }
      puVar25 = local_1c0;
      local_1b0 = 0;
      local_1a8 = 0x87650000000000;
      local_198 = 0xffffffffffffffff;
      uStack_190 = 0;
      plVar23 = &local_1b0;
      local_1a0[0] = 0;
      local_1c0[0] = 0;
      local_188 = 0;
      local_1b8 = &PTR_FUN_7104f73d50;
    }
    else {
      if (uVar12 < 4) {
        uVar12 = 0;
        cVar4 = *(char *)(lVar13 + 0x191);
      }
      else {
        uVar12 = *(ulong *)(lVar18 + 0x18);
        cVar4 = *(char *)(lVar13 + 0x191);
      }
      if (cVar4 == '\0') {
        pppplVar16 = (long ****)&DAT_00000004;
        uVar14 = FUN_7103313f20(lVar13,uVar12,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                param_7,param_8);
        if ((uVar14 & 1) != 0) {
          puVar25 = local_180;
          FUN_71024076d0(local_180,uVar12);
          plVar23 = &local_170;
          local_178 = &PTR_FUN_7104f73d50;
          if (local_170 != 0) {
            if ((DAT_7106dd53a8 == '\x01') && ((int)local_168 == DAT_7106dd53ac)) {
              piVar20 = (int *)(local_170 + 0x38);
              do {
                puVar25 = local_180;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                if (bVar6) {
                  *piVar20 = *piVar20 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            else {
              puVar25 = local_180;
            }
          }
          goto LAB_7101c9ccc0;
        }
      }
      puVar25 = local_180;
      local_170 = 0;
      local_168 = 0x87650000000000;
      local_158 = 0xffffffffffffffff;
      uStack_150 = 0;
      plVar23 = &local_170;
      local_160 = 0;
      local_180[0] = 0;
      local_148 = 0;
      local_178 = &PTR_FUN_7104f73d50;
    }
LAB_7101c9ccc0:
    *plVar23 = 0;
    *(undefined1 *)(puVar25 + 8) = 0;
  }
  FUN_7101ca2610(param_1,1,pppplVar16,param_4,param_5,param_6,param_7,param_8);
  if (0 < *(int *)(param_1 + 0x104)) {
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + -1;
  }
LAB_7101c9cce8:
  *(undefined1 *)(param_1 + 0x26c) = 0;
  return;
}

