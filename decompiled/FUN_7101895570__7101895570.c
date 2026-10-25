// addr:      7101895570
// offset:    0x1895570
// name:      FUN_7101895570
// mangled:   
// signature: ulong __cdecl FUN_7101895570(ulong param_1, byte * param_2, long * * * * * * * * * param_3, long * * * * * * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7101895570(ulong param_1,byte *param_2,long *********param_3,long *********param_4,
                    long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  short sVar10;
  bool bVar11;
  ulong uVar12;
  undefined **ppuVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 extraout_x1;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  ushort *puVar24;
  int *piVar25;
  uint uVar26;
  long *plVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long lVar35;
  long lVar36;
  char cVar37;
  undefined1 local_d8 [8];
  uint uStack_d0;
  ushort local_cc [5];
  short local_c2;
  short local_c0;
  short local_be;
  short local_bc;
  short local_ba;
  short local_b8;
  ulong local_b0;
  undefined4 local_a8;
  long ********local_a0;
  undefined **local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  ulong local_58;
  
  uVar32 = *(ulong *)(param_1 + 8);
  if (*(long *)(uVar32 + 0x1e8) == 0) {
    return param_1;
  }
  bVar1 = *param_2;
  uVar33 = (ulong)bVar1;
  plVar15 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x10);
  if ((plVar15 != (long *)0x0) && (uVar16 = (**(code **)(*plVar15 + 0x50))(), (uVar16 & 1) != 0)) {
    return uVar16;
  }
  if (bVar1 == 0xff) goto LAB_7101895ff4;
  lVar36 = *(long *)(DAT_71052c4c58 + 8);
  lVar35 = *(long *)(lVar36 + 0x88);
  uVar14 = 1 << (ulong)(bVar1 & 0x1f);
  if ((*(uint *)(lVar35 + 0xa000) & uVar14) == 0) {
    lVar23 = *(long *)(uVar32 + 0x1e8);
    if (*(char *)(uVar32 + 0x24d) == '\0') {
      uVar16 = _DAT_00000080;
      if ((lVar23 == 0) || (uVar16 = *(ulong *)(lVar23 + 0x80), 2 < *(int *)(uVar16 + 0x2c0) - 2U))
      {
        FUN_7101c6c910(uVar16,(uint)bVar1,param_3,(byte ****)param_4,param_5,param_6,param_7,param_8
                      );
        goto LAB_7101895ff4;
      }
    }
    else {
      uVar16 = *(ulong *)(lVar23 + 0x80);
    }
    if (bVar1 < 8) {
      cVar37 = *(char *)(uVar16 + uVar33 * 0x1e8 + 0xaf8);
    }
    else {
      cVar37 = '\0';
    }
    if ((*(uint *)(uVar32 + 0x248) & uVar14) != 0) {
      local_a0 = (long ********)
                 CONCAT44(local_a0._4_4_,*(uint *)(uVar32 + 0x248) & (uVar14 ^ 0xffffffff));
      if ((((*(long *)(lVar35 + 0x9ff8) != 0) &&
           (uVar21 = FUN_71016f6340(lVar35 + 0xa010,*(long *)(lVar35 + 0x9ff8)),
           (~uVar21 & 0xff) != 0)) && (*(long *)(DAT_710533a0a0 + 0x30) != 0)) &&
         (lVar35 = *(long *)(*(long *)(DAT_710533a0a0 + 0x30) + 0x2108), lVar35 != 0)) {
        param_5 = (long ****)&DAT_00000009;
        param_3 = &local_a0;
        param_4 = (long *********)&DAT_00000004;
        FUN_7103701910(lVar35,0x192,param_3,4,9);
        uVar16 = *(ulong *)(*(long *)(uVar32 + 0x1e8) + 0x80);
      }
    }
    uVar32 = FUN_7101c6c910(uVar16,(uint)bVar1,param_3,(byte ****)param_4,param_5,param_6,param_7,
                            param_8);
    if (cVar37 != '\x01') {
      return uVar32;
    }
    local_a0 = (long ********)CONCAT44(local_a0._4_4_,uVar14);
    lVar35 = *(long *)(*(long *)(lVar36 + 0x88) + 0x9ff8);
    if (lVar35 == 0) {
      return uVar32;
    }
    uVar14 = FUN_71016f6340(*(long *)(lVar36 + 0x88) + 0xa010,lVar35);
    if ((~uVar14 & 0xff) == 0) {
      return (ulong)uVar14;
    }
    if (*(long *)(DAT_710533a0a0 + 0x30) == 0) {
      return (ulong)uVar14;
    }
    lVar35 = *(long *)(*(long *)(DAT_710533a0a0 + 0x30) + 0x2108);
    if (lVar35 == 0) {
      return 0;
    }
    uVar14 = FUN_7103701910(lVar35,0x191,&local_a0,4,9);
    return (ulong)uVar14;
  }
  if (0xf < bVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar14 = (uint)bVar1;
  if ((bVar1 < 8) &&
     (*(char *)(*(long *)(*(long *)(uVar32 + 0x1e8) + 0x80) + uVar33 * 0x1e8 + 0xafc) != '\0')) {
    uVar17 = FUN_7101892d70(uVar32,uVar33,param_3,(byte ****)param_4,param_5,param_6,param_7,param_8
                           );
    if ((int)uVar17 == 3) {
      param_3 = (long *********)0x2;
      FUN_7101896020(uVar32,(uint)bVar1,2,(byte ****)param_4,param_5,param_6,param_7,param_8);
    }
    if (((*(char *)(uVar32 + 0x24e) == '\0') &&
        ((*(uint *)(lVar35 + uVar33 * 0x78 + 0xa080) | 4) == 0xc)) &&
       (*(int *)(uVar32 + 0x1c8) != 0x10)) {
      lVar35 = *(long *)(lVar36 + 0x88);
      if (*(long *)(lVar35 + 0x9ff8) == 0) {
        uVar33 = 0xff;
      }
      else {
        uVar14 = FUN_71016f6340(lVar35 + 0xa010,*(long *)(lVar35 + 0x9ff8));
        uVar33 = (ulong)uVar14 & 0xff;
      }
      param_3 = (long *********)&DAT_00000194;
      param_4 = &local_a0;
      param_5 = (long ****)0x1;
      param_6 = 1;
      local_a0 = (long ********)CONCAT71(local_a0._1_7_,(char)uVar33);
      FUN_7101685ac0(lVar35,uVar33,0x194,param_4,1,1);
    }
    goto LAB_7101895ff4;
  }
  if ((*(long *)(lVar35 + uVar33 * 0x78 + 0xa018) == 0) ||
     ((*(char *)(lVar35 + uVar33 * 0x78 + 0xa070) == '\0' ||
      (*(long *)(lVar35 + uVar33 * 0x78 + 0xa038) == 0)))) goto LAB_7101895ff4;
  stack0xffffffffffffff2c = 0;
  local_cc[0] = 0;
  local_a8 = 0;
  uVar16 = *(ulong *)(*DAT_710593b5f0 + 0x25998);
  if (uVar16 == 0) {
LAB_7101895904:
    plVar15 = (long *)0x0;
  }
  else {
    uVar22 = *(ulong *)(lVar35 + uVar33 * 0x78 + 0xa038);
    uVar30 = uVar16 - 1;
    if ((uVar30 & uVar16) == 0) {
      uVar29 = uVar30 & uVar22;
    }
    else {
      uVar29 = uVar22;
      if (uVar16 <= uVar22) {
        uVar29 = 0;
        if (uVar16 != 0) {
          uVar29 = uVar22 / uVar16;
        }
        uVar29 = uVar22 - uVar29 * uVar16;
      }
    }
    plVar27 = *(long **)(*(long *)(*DAT_710593b5f0 + 0x25990) + uVar29 * 8);
    plVar15 = (long *)0x0;
    if ((plVar27 != (long *)0x0) && (plVar15 = (long *)*plVar27, plVar15 != (long *)0x0)) {
      if ((uVar30 & uVar16) == 0) {
        do {
          uVar16 = plVar15[1];
          if (uVar16 != uVar22 && (uVar16 & uVar30) != uVar29) goto LAB_7101895904;
        } while (((uVar16 != uVar22) || (plVar15[2] != uVar22)) &&
                (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0));
      }
      else {
        do {
          uVar30 = plVar15[1];
          if (uVar30 == uVar22) {
            if (plVar15[2] == uVar22) break;
          }
          else {
            if (uVar16 <= uVar30) {
              uVar12 = 0;
              if (uVar16 != 0) {
                uVar12 = uVar30 / uVar16;
              }
              uVar30 = uVar30 - uVar12 * uVar16;
            }
            if (uVar30 != uVar29) goto LAB_7101895904;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  local_d8[0] = plVar15 != (long *)0x0;
  uVar9 = *(ushort *)(lVar35 + uVar33 * 0x78 + 0xa064);
  plVar27 = (long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2e8) + 0x18);
  plVar31 = (long *)*plVar27;
  local_b0 = 0x1effff0000000000;
  plVar15 = plVar27;
  if (plVar31 != (long *)0x0) {
    do {
      if (*(ushort *)(plVar31 + 4) >= uVar9) {
        plVar15 = plVar31;
      }
      plVar31 = (long *)plVar31[*(ushort *)(plVar31 + 4) < uVar9];
    } while (plVar31 != (long *)0x0);
    if ((plVar15 != plVar27) && (*(ushort *)(plVar15 + 4) <= uVar9)) {
      local_b0 = plVar15[5];
    }
  }
  if (((ulong)local_d8 | 4) != lVar35 + uVar33 * 0x78 + 0xa040) {
    uVar9 = *(ushort *)(&DAT_0000a048 + lVar35 + uVar33 * 0x78);
    uVar21 = (uint)uVar9;
    if (uVar9 != 0) {
      sVar10 = *(short *)(lVar35 + uVar33 * 0x78 + 0xa04a);
      local_cc[0] = uVar9;
      if (sVar10 == 0) {
        uVar21 = 1;
      }
      else {
        local_cc[1] = sVar10;
        sVar10 = *(short *)(lVar35 + uVar33 * 0x78 + 0xa04c);
        if (sVar10 == 0) {
          uVar21 = 2;
        }
        else {
          local_cc[2] = sVar10;
          sVar10 = *(short *)(lVar35 + uVar33 * 0x78 + 0xa04e);
          if (sVar10 == 0) {
            uVar21 = 3;
          }
          else {
            local_cc[3] = sVar10;
            sVar10 = *(short *)(lVar35 + uVar33 * 0x78 + 0xa050);
            if (sVar10 == 0) {
              uVar21 = 4;
            }
            else {
              local_cc[4] = sVar10;
              sVar10 = *(short *)(lVar35 + uVar33 * 0x78 + 0xa052);
              if (sVar10 == 0) {
                uVar21 = 5;
              }
              else {
                local_c2 = sVar10;
                sVar10 = *(short *)(lVar35 + uVar33 * 0x78 + 0xa054);
                if (sVar10 == 0) {
                  uVar21 = 6;
                }
                else {
                  local_c0 = sVar10;
                  sVar10 = *(short *)(lVar35 + uVar33 * 0x78 + 0xa056);
                  if (sVar10 == 0) {
                    uVar21 = 7;
                  }
                  else {
                    local_be = sVar10;
                    sVar10 = *(short *)(lVar35 + uVar33 * 0x78 + 0xa058);
                    if (sVar10 == 0) {
                      uVar21 = 8;
                    }
                    else {
                      local_bc = sVar10;
                      sVar10 = *(short *)(lVar35 + uVar33 * 0x78 + 0xa05a);
                      if (sVar10 == 0) {
                        uVar21 = 9;
                      }
                      else {
                        local_ba = sVar10;
                        sVar10 = *(short *)(lVar35 + uVar33 * 0x78 + 0xa05c);
                        if (sVar10 == 0) {
                          uVar21 = 10;
                        }
                        else {
                          local_b8 = sVar10;
                          uVar21 = 0xb;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_cc[uVar21] = 0;
    uVar28 = (uint)local_cc[0];
    uVar26 = 0x811c9dc5;
    if (local_cc[0] != 0) {
      puVar24 = local_cc;
      do {
        puVar24 = puVar24 + 1;
        uVar26 = uVar26 * 0x89 ^ uVar28;
        uVar28 = (uint)*puVar24;
      } while (uVar28 != 0);
    }
    stack0xffffffffffffff2c = CONCAT44(uVar21,uVar26);
  }
  local_a8 = *(undefined4 *)(lVar35 + uVar33 * 0x78 + 0xa084);
  puVar34 = *(undefined8 **)(*(long *)(uVar32 + 0x1e8) + 0x80);
  if (((*(byte *)(puVar34 + 0x324) == uVar14) || (*(byte *)((long)puVar34 + 0x1861) == uVar14)) ||
     ((7 < uVar14 || (*(char *)((long)puVar34 + uVar33 * 0x1e8 + 0xafc) != '\0'))))
  goto LAB_7101895ff4;
  ppppppppplVar19 = (long *********)(puVar34 + uVar33 * 0x3d + 0x123);
  param_5 = (long ****)0x1;
  ppppbVar20 = (byte ****)(ulong)uVar14;
  *(undefined1 *)((long)puVar34 + uVar33 * 0x1e8 + 0xafc) = 1;
  FUN_7101c60ad0((long)puVar34,uVar14,(long ****)&DAT_00000004,ppppbVar20,(long ****)0x1,param_6,
                 param_7,param_8);
  *(undefined1 *)ppppppppplVar19 = local_d8[0];
  if (ppppppppplVar19 != (long *********)local_d8) {
    if (local_cc[0] == 0) {
      puVar24 = (ushort *)((long)puVar34 + uVar33 * 0x1e8 + 0x924);
      uVar14 = 0;
    }
    else {
      *(ushort *)((long)puVar34 + uVar33 * 0x1e8 + 0x924) = local_cc[0];
      puVar24 = (ushort *)((long)puVar34 + uVar33 * 0x1e8 + 0x924);
      if (local_cc[1] == 0) {
        uVar14 = 1;
      }
      else {
        *(ushort *)((long)puVar34 + uVar33 * 0x1e8 + 0x926) = local_cc[1];
        if (local_cc[2] == 0) {
          uVar14 = 2;
        }
        else {
          *(ushort *)(puVar34 + uVar33 * 0x3d + 0x125) = local_cc[2];
          if (local_cc[3] == 0) {
            uVar14 = 3;
          }
          else {
            *(ushort *)((long)puVar34 + uVar33 * 0x1e8 + 0x92a) = local_cc[3];
            if (local_cc[4] == 0) {
              uVar14 = 4;
            }
            else {
              *(ushort *)((long)puVar34 + uVar33 * 0x1e8 + 0x92c) = local_cc[4];
              if (local_c2 == 0) {
                uVar14 = 5;
              }
              else {
                *(short *)((long)puVar34 + uVar33 * 0x1e8 + 0x92e) = local_c2;
                if (local_c0 == 0) {
                  uVar14 = 6;
                }
                else {
                  *(short *)(puVar34 + uVar33 * 0x3d + 0x126) = local_c0;
                  if (local_be == 0) {
                    uVar14 = 7;
                  }
                  else {
                    *(short *)((long)puVar34 + uVar33 * 0x1e8 + 0x932) = local_be;
                    if (local_bc == 0) {
                      uVar14 = 8;
                    }
                    else {
                      *(short *)((long)puVar34 + uVar33 * 0x1e8 + 0x934) = local_bc;
                      if (local_ba == 0) {
                        uVar14 = 9;
                      }
                      else {
                        *(short *)((long)puVar34 + uVar33 * 0x1e8 + 0x936) = local_ba;
                        if (local_b8 == 0) {
                          uVar14 = 10;
                        }
                        else {
                          *(short *)(puVar34 + uVar33 * 0x3d + 0x127) = local_b8;
                          uVar14 = 0xb;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined2 *)((long)puVar34 + (ulong)uVar14 * 2 + uVar33 * 0x1e8 + 0x924) = 0;
    *(uint *)(puVar34 + uVar33 * 0x3d + 0x124) = uVar14;
    uVar21 = (uint)*puVar24;
    uVar14 = 0x811c9dc5;
    if (*puVar24 != 0) {
      do {
        puVar24 = puVar24 + 1;
        uVar14 = uVar14 * 0x89 ^ uVar21;
        uVar21 = (uint)*puVar24;
      } while (uVar21 != 0);
    }
    *(uint *)((long)puVar34 + uVar33 * 0x1e8 + 0x91c) = uVar14;
  }
  *(undefined4 *)(puVar34 + uVar33 * 0x3d + 0x129) = local_a8;
  puVar34[uVar33 * 0x3d + 0x128] = local_b0;
  plVar15 = (long *)*puVar34;
  local_a0 = (long ********)FUN_7103239360(local_b0);
  if (((ulong)local_a0 & 0xffffffffff) != 0) {
    lVar35 = *plVar15;
    ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar35 + 0x68);
    FUN_710323c4e0(lVar35,(ulong *)&local_a0,(long *********)(long)*(int *)(lVar35 + 0x70),
                   ppppbVar20,param_5,param_6,param_7,param_8);
  }
  FUN_7101c76570((undefined8 *)puVar34[0x8a],bVar1,ppppppppplVar19,ppppbVar20,param_5,param_6,
                 param_7,param_8);
  FUN_7101c76880(puVar34[0x8a],bVar1,0);
  local_a0 = (long ********)0x0;
  FUN_7101696040((uint *)&local_a0,(ushort *)((long)puVar34 + uVar33 * 0x1e8 + 0x924));
  ppppppppplVar19 = &local_a0;
  FUN_7101c74ac0(puVar34 + 0x90,1,(long ****)ppppppppplVar19,ppppbVar20,param_5,param_6,param_7,
                 param_8);
  FUN_7101c78060(*(undefined8 **)(puVar34[0x8d] + 0x80),extraout_x1,ppppppppplVar19,ppppbVar20,
                 param_5,param_6,param_7,param_8);
  bVar1 = *(byte *)((long)puVar34 + 0xafc);
  bVar2 = *(byte *)((long)puVar34 + 0xce4);
  bVar3 = *(byte *)((long)puVar34 + 0xecc);
  bVar4 = *(byte *)((long)puVar34 + 0x10b4);
  bVar5 = *(byte *)((long)puVar34 + 0x129c);
  bVar6 = *(byte *)((long)puVar34 + 0x1484);
  bVar7 = *(byte *)((long)puVar34 + 0x166c);
  bVar8 = *(byte *)((long)puVar34 + 0x1854);
  FUN_7103776640(&local_a0,puVar34[0x8f] + 0x88,(byte ****)"set_parts_header_btn",ppppppppplVar19,
                 ppppbVar20,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_60,(long)&local_a0,(long ****)"set_txt_now",ppppppppplVar19,ppppbVar20,
                 param_5,param_6,param_7,param_8);
  param_4 = (long *********)
            (ulong)((uint)bVar2 + (uint)bVar1 + (uint)bVar3 + (uint)bVar4 + (uint)bVar5 +
                    (uint)bVar6 + (uint)bVar7 + (uint)bVar8 & 0xff);
  param_3 = (long *********)0x1;
  FUN_710377a280((long)&local_60,(byte *)"mnu_online_room_search_participants_n",1);
  uVar33 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar33 != 0) {
    FUN_710392eb40(uVar33);
  }
  ppuVar13 = local_98;
  local_a0 = (long ********)&PTR_FUN_710523d988;
  local_98 = (undefined **)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    puVar18 = ppuVar13[3];
    ppuVar13[2] = (undefined *)&PTR_FUN_710523d9a8;
    ppuVar13[3] = (undefined *)0x0;
    if (puVar18 != (undefined *)0x0) {
      FUN_710392eb40((ulong)puVar18);
    }
    FUN_710392eb40((ulong)ppuVar13);
  }
  if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
    param_3 = (long *********)&DAT_00000004;
    uVar33 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x123759d801,(long ****)&DAT_00000004,
                            (byte ****)param_4,param_5,param_6,param_7,param_8);
    if ((uVar33 & 1) == 0) goto LAB_7101895fc0;
    FUN_71024076d0((undefined4 *)&local_a0,0x123759d801);
    if (((local_90 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_88 == DAT_7106dd53ac)) {
      piVar25 = (int *)(local_90 + 0x38);
      do {
        cVar37 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar11) {
          *piVar25 = *piVar25 + -1;
          cVar37 = ExclusiveMonitorsStatus();
        }
      } while (cVar37 != '\0');
    }
  }
  else {
LAB_7101895fc0:
    local_88 = 0x87650000000000;
    local_78 = 0xffffffffffffffff;
    uStack_70 = 0;
    local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
    local_68 = 0;
  }
  local_98 = &PTR_FUN_7104f73d50;
  local_90 = 0;
  local_80 = 0;
LAB_7101895ff4:
  uVar32 = FUN_71018924f0(uVar32,0,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar32;
}

