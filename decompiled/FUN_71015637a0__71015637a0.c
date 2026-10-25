// addr:      71015637a0
// offset:    0x15637a0
// name:      FUN_71015637a0
// mangled:   
// signature: undefined8 __cdecl FUN_71015637a0(long param_1, ulong param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_71015637a0(long param_1,ulong param_2,undefined **param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  long ***ppplVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ushort *puVar17;
  long lVar18;
  ulong uVar19;
  long ***ppplVar20;
  ulong uVar21;
  long lVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 extraout_var;
  uint local_278;
  uint local_274;
  long ***local_268;
  uint local_260;
  ushort local_25c [4];
  short local_254;
  short local_252;
  short local_250;
  short local_24e;
  short local_24c;
  short local_24a;
  short local_248;
  undefined4 local_244;
  undefined8 uStack_240;
  int local_238;
  undefined4 local_234;
  undefined1 *local_228;
  undefined **local_a0;
  long *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (((param_2 & 1) == 0) &&
     (iVar16 = *(int *)(param_1 + 0x1a4), iVar6 = iVar16 + -1, *(int *)(param_1 + 0x1a4) = iVar6,
     iVar6 != 0 && 0 < iVar16)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1a4) = 0x3c;
  local_98 = *(long **)(**(long **)(DAT_71052c3420 + 8) + 0xb98);
  local_90 = *(undefined4 *)(**(long **)(DAT_71052c3420 + 8) + 0xba0);
  local_a0 = &PTR_FUN_7105063bc0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar8 = DAT_7105308768;
  lVar25 = *(long *)(DAT_710532f730 + 8);
  uVar26 = (ulong)DAT_7105308768;
  FUN_710138bf30((long *)&local_a0,DAT_7105308768);
  lVar24 = *(long *)(DAT_71052c4c58 + 8);
  lVar22 = *(long *)(lVar24 + 0x88);
  if (*(long *)(lVar22 + 0x30) != 0) {
    return 0;
  }
  if (*(int *)(lVar22 + 0x70) != 0) {
    return 0;
  }
  if (*(long *)(lVar22 + 0x60) != 0) {
    return 0;
  }
  lVar18 = *(long *)(lVar22 + 0x9ff8);
  puVar1 = (undefined8 *)(lVar22 + 0xa010);
  if (lVar18 == 0) {
    cVar11 = -1;
  }
  else {
    uVar14 = FUN_71016f6340((long)puVar1,lVar18);
    cVar11 = (char)uVar14;
  }
  uVar14 = FUN_71016ea290(puVar1,cVar11);
  if (((~uVar14 & 0xff) == 0) || (lVar18 = *(long *)(lVar22 + 0x9ff8), lVar18 == 0)) {
LAB_7101563964:
    local_278 = 0;
  }
  else {
    uVar15 = FUN_71016f6340((long)puVar1,lVar18);
    if ((~uVar15 & 0xff) == 0) goto LAB_7101563964;
    uVar19 = (ulong)uVar15 & 0xff;
    if ((0xf < uVar19) || (uVar21 = (ulong)uVar14 & 0xff, 7 < uVar21)) {
LAB_71015645b8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(char *)(lVar22 + uVar19 * 0x1350 + uVar21 * 0x1e0 + 0xa79a) == '\x03') {
      local_278 = (uint)((uint)*(byte *)(lVar22 + uVar19 * 0x1350 + uVar21 * 0x1e0 + 0xa798) ==
                        (uVar15 & 0xff));
    }
    else {
      local_278 = 0;
    }
  }
  if ((int)uVar8 < 1) {
    local_274 = 0;
  }
  else {
    uVar19 = 0;
    local_274 = 0;
    do {
      uVar14 = 0x811c9dc5;
      if (7 < uVar19) goto LAB_71015645b8;
      local_268 = (long ***)CONCAT71(local_268._1_7_,(&DAT_7105308770)[uVar19 * 0x1c8]);
      uVar2 = (&DAT_710530877c)[uVar19 * 0xe4];
      local_260 = (uint)uVar2;
      if (uVar2 != 0) {
        sVar3 = (&DAT_710530877e)[uVar19 * 0xe4];
        local_25c[0] = uVar2;
        if (sVar3 == 0) {
          local_260 = 1;
        }
        else {
          sVar4 = (&DAT_7105308780)[uVar19 * 0xe4];
          local_25c[1] = sVar3;
          if (sVar4 == 0) {
            local_260 = 2;
          }
          else {
            sVar3 = (&DAT_7105308782)[uVar19 * 0xe4];
            local_25c[2] = sVar4;
            if (sVar3 == 0) {
              local_260 = 3;
            }
            else {
              sVar4 = (&DAT_7105308784)[uVar19 * 0xe4];
              local_25c[3] = sVar3;
              if (sVar4 == 0) {
                local_260 = 4;
              }
              else {
                sVar3 = (&DAT_7105308786)[uVar19 * 0xe4];
                local_254 = sVar4;
                if (sVar3 == 0) {
                  local_260 = 5;
                }
                else {
                  sVar4 = (&DAT_7105308788)[uVar19 * 0xe4];
                  local_252 = sVar3;
                  if (sVar4 == 0) {
                    local_260 = 6;
                  }
                  else {
                    sVar3 = (&DAT_710530878a)[uVar19 * 0xe4];
                    local_250 = sVar4;
                    if (sVar3 == 0) {
                      local_260 = 7;
                    }
                    else {
                      sVar4 = (&DAT_710530878c)[uVar19 * 0xe4];
                      local_24e = sVar3;
                      if (sVar4 == 0) {
                        local_260 = 8;
                      }
                      else {
                        sVar3 = (&DAT_710530878e)[uVar19 * 0xe4];
                        local_24c = sVar4;
                        if (sVar3 == 0) {
                          local_260 = 9;
                        }
                        else {
                          local_24a = sVar3;
                          if ((&DAT_7105308790)[uVar19 * 0xe4] == 0) {
                            local_260 = 10;
                          }
                          else {
                            local_260 = 0xb;
                            local_248 = (&DAT_7105308790)[uVar19 * 0xe4];
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
      local_25c[local_260] = 0;
      uVar15 = (uint)local_25c[0];
      puVar17 = local_25c;
      if (local_25c[0] != 0) {
        do {
          uVar14 = uVar14 * 0x89 ^ uVar15;
          uVar15 = (uint)puVar17[1];
          puVar17 = puVar17 + 1;
        } while (uVar15 != 0);
      }
      local_244 = (&DAT_7105308794)[uVar19 * 0x72];
      local_268 = (long ***)CONCAT44(uVar14,(int)local_268);
      puVar1 = (undefined8 *)(&DAT_7105308798 + uVar19 * 0x72);
      FUN_71015547e0(&uStack_240,puVar1);
      if (local_268._0_1_ != (PosixTime)0xff) {
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
          FUN_7101764000();
          param_3 = &PTR_LOOP_7104f17000;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
          FUN_7101764000();
          param_3 = &PTR_LOOP_7104f17000;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        bVar10 = true;
        if ((int)DAT_71053050f0 < 0x7010800) {
          if (((1 < DAT_71053050f0 + 0xf8fefeff) && (DAT_71053050f0 != 0x7010400)) &&
             (DAT_71053050f0 != 0x7010700)) {
LAB_7101563cd0:
            bVar10 = false;
          }
        }
        else if (((DAT_71053050f0 != 0x7010800) && (DAT_71053050f0 != 0x7030000)) &&
                (DAT_71053050f0 != 0x7040000)) goto LAB_7101563cd0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        uVar14 = FUN_710179eec0((undefined4 *)&local_88);
        uVar21 = uVar19 & 0xffffffff;
        bVar7 = (byte)uVar19;
        if (bVar10) {
          bVar10 = FUN_710179ed00(0x7105308760,bVar7,param_3,param_4,param_5,param_6,param_7,param_8
                                 );
          if (bVar10) {
            uVar21 = uVar19 & 0xffffffff;
            if (uVar14 == 0) goto LAB_7101563d44;
            uVar21 = 0;
            do {
              if (uVar19 == *(uint *)((long)&local_88 + uVar21 * 4)) goto LAB_7101563d44;
              uVar21 = uVar21 + 1;
            } while (uVar21 < uVar14);
          }
          uVar21 = uVar19 & 0xffffffff;
          if (uVar19 < uVar14) {
            uVar21 = (ulong)(uint)((int)local_88 + (int)uVar19);
          }
        }
LAB_7101563d44:
        lVar22 = *(long *)(lVar24 + 0x88);
        cVar11 = FUN_7101686610(lVar22);
        bVar10 = FUN_710168eb40(lVar22,cVar11,bVar7,param_4,param_5,param_6,param_7,param_8);
        uVar14 = (uint)uVar21;
        if ((param_2 & 1) == 0) {
          uVar15 = *(uint *)(param_1 + 0x1a8);
          uVar5 = 1 << (ulong)(uVar14 & 0x1f);
          if ((uVar15 & uVar5) == 0 && ((bVar10 ^ 0xffU) & 1) == 0) {
            uStack_240._4_4_ = 1;
          }
          else {
            if (bVar10 || (uVar15 & uVar5) == 0) {
              if ((uVar15 & uVar5 << 0x10) == 0) {
                if (uStack_240._4_4_ == 0xb) goto LAB_7101563d74;
                goto LAB_7101563e88;
              }
              if (!bVar10) {
                uStack_240._4_4_ = 10;
                FUN_71016b6a10(puVar1,&uStack_240);
                lVar22 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
                if (*(char *)(lVar22 + 0x26a62) == '\0') {
                  *(ulong *)(lVar22 + 0x26a90) =
                       *(ulong *)(lVar22 + 0x26a90) | 0x10L << (uVar19 & 0x3f);
                }
                uVar15 = *(uint *)(param_1 + 0x1a8);
              }
              uVar15 = uVar15 & (uVar5 << 0x10 ^ 0xffffffff);
            }
            else {
              uVar15 = uVar15 | uVar5 << 0x10;
              uStack_240._4_4_ = 0xb;
            }
            *(uint *)(param_1 + 0x1a8) = uVar15;
          }
        }
        else if (!bVar10) {
LAB_7101563d74:
          uStack_240._4_4_ = 10;
          FUN_71016b6a10(puVar1,&uStack_240);
          lVar22 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
          if (*(char *)(lVar22 + 0x26a62) == '\0') {
            *(ulong *)(lVar22 + 0x26a90) = *(ulong *)(lVar22 + 0x26a90) | 0x10L << (uVar19 & 0x3f);
          }
        }
LAB_7101563e88:
        uVar21 = (ulong)local_278;
        bVar12 = FUN_71016b7b20(*(long *)(lVar24 + 0x88),bVar7,local_278);
        if ((bVar12 & 1) != 0) {
          uStack_240._4_4_ = 9;
        }
        if (local_238 == 3 && ((bVar10 ^ 0xffU) & 1) == 0) {
          local_238 = 0;
        }
        if (DAT_710530a9c0 == '\0') {
          local_234 = 0xffffffff;
        }
        bVar13 = FUN_710179ed00(0x7105308760,bVar7,uVar21,param_4,param_5,param_6,param_7,param_8);
        if (((!bVar13) && ((7 < uVar19 || ((uint)(&DAT_7105313fb4)[uVar19 * 0x2c] < 2)))) &&
           ((DAT_71053050f0 + 0xf8fefeff < 2 ||
            ((DAT_71053050f0 == 0x7010800 || (DAT_71053050f0 == 0x7010400)))))) {
          local_228 = FUN_71032631a0(*(long *)(lVar25 + 0x168),0xfd5f7fa78);
          puVar17 = (ushort *)
                    FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mel_mockbattle_name_unknown");
          FUN_71015678e0((uint *)((ulong)&local_268 | 4),puVar17);
        }
        if ((uStack_240._4_4_ == 7) &&
           ((((ulong)local_228 & 0xff00000000000000) != 0xc100000000000000 ||
            (((ulong)local_228 & 0xffffffffff) == 0)))) {
          uStack_240._4_4_ = 6;
        }
        param_3 = (undefined **)&local_268;
        FUN_710138c080((long *)&local_a0,uVar14,param_3);
        uVar27 = FUN_71016b7d80(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88),bVar7);
        FUN_710138c160(CONCAT44(extraout_var,uVar27),(long *)&local_a0,uVar14);
        uVar14 = 1 << (ulong)(uVar14 & 0x1f);
        if (bVar10) {
          *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) | uVar14;
          local_274 = 1 << (ulong)((byte)local_268._0_1_ & 0x1f) | local_274;
        }
        else {
          *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) & (uVar14 ^ 0xffffffff);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar26);
  }
  fVar28 = FUN_71016b8010(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88));
  FUN_710138bd30(fVar28,(long *)&local_a0);
  uVar26 = *(ulong *)(param_1 + 400);
  uVar14 = *(uint *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88) + 0x26a40);
  if (*(char *)(param_1 + 0x198) == '\0') {
    lVar22 = nn::os::GetSystemTick();
    uVar21 = nn::os::ConvertToTimeSpan(lVar22 - DAT_71074470e8);
    uVar19 = ((long)uVar21 >> 0x20) * 0xe353f7cf + ((uVar21 & 0xffffffff) * 0xe353f7cf >> 0x20);
    uVar26 = (uVar26 + (((long)(((long)uVar21 >> 0x20) * 0x20c49ba5 + ((long)uVar19 >> 0x20) +
                               ((uVar21 & 0xffffffff) * 0x20c49ba5 + (uVar19 & 0xffffffff) >> 0x20))
                        >> 7) - ((long)uVar21 >> 0x3f)) * 1000) - *(long *)(param_1 + 0x188);
  }
  FUN_710138bc50((long *)&local_a0);
  if (DAT_71053050f0 != 0x7010800) goto LAB_7101564280;
  if (DAT_71052c4c58 == 0) {
    uVar15 = 0;
  }
  else {
    fVar28 = (float)NEON_ucvtf(*(undefined4 *)
                                (*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0xa8) + 0x2984));
    uVar15 = (uint)(fVar28 / 100.0);
  }
  if (((((DAT_71052c3420 != 0) && (local_98 != (long *)0x0)) &&
       (uVar19 = (*(code *)local_a0[2])(&local_a0), (uVar19 & 1) != 0)) &&
      (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
       (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) &&
     (*(char *)(**(long **)(*local_98 + 0x420) + 0x14) != '\0')) {
    param_3 = (undefined **)0x1;
    param_4 = (byte ****)(ulong)uVar15;
    FUN_710377a280(*(long *)((*(long **)(*local_98 + 0x420))[0x26] + 0x80) + 0x308,
                   (byte *)"mel_result_convention_score_n",1);
  }
  iVar16 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_268);
  ppplVar9 = local_268;
  if ((iVar16 == 0) && (DAT_7105307790 != 0)) {
    iVar16 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_268);
    ppplVar20 = (long ***)0x0;
    if ((iVar16 == 0) &&
       (((long)local_268 <= DAT_71053078c8 && (DAT_71053078b0 <= (long)local_268)))) {
      if (DAT_71053078c0 < (long)local_268) goto LAB_710156421c;
      if ((long)local_268 < DAT_71053078b8) {
        lVar22 = DAT_71053078b8 - (long)ppplVar9;
      }
      else {
        lVar22 = DAT_71053078c0 - (long)ppplVar9;
      }
      ppplVar20 = (long ***)(lVar22 * 1000000000);
    }
  }
  else {
LAB_710156421c:
    ppplVar20 = (long ***)0x0;
  }
  local_268 = ppplVar20;
  if ((((DAT_71052c3420 != 0) && (local_98 != (long *)0x0)) &&
      (uVar19 = (*(code *)local_a0[2])(&local_a0), (uVar19 & 1) != 0)) &&
     (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
      (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
    FUN_71013cee40(*(long **)(*local_98 + 0x420),&local_268,(long ****)param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
LAB_7101564280:
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    uVar14 = (local_274 >> 1 & 0x55555555) + (local_274 & 0x55555555);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    if (((uVar14 + (uVar14 >> 0x10) & 0x1f) != 0) && (DAT_71053050f4 == '\0')) {
      FUN_710138bad0((long *)&local_a0);
      *(undefined1 *)(param_1 + 0x1a0) = 1;
    }
    if ((0 < (int)uVar8) && ((DAT_71053050f0 & 0x7f000000) == 0x7000000)) {
      uVar26 = 0;
      puVar23 = &DAT_7105313fb4;
      do {
        bVar10 = FUN_710179ed00(0x7105308760,(byte)uVar26,param_3,param_4,param_5,param_6,param_7,
                                param_8);
        if (((bVar10) && (uVar26 < 8)) && (1 < *puVar23)) {
          return 0;
        }
        uVar26 = uVar26 + 1;
        puVar23 = puVar23 + 0x2c;
      } while ((long)uVar26 < (long)(int)uVar8);
    }
  }
  else {
    if ((int)(uVar14 / 1000 - (int)(uVar26 / 1000000000)) < 1) {
      if (*(char *)(param_1 + 0x1a1) == '\0') {
        lVar22 = nn::os::GetSystemTick();
        uVar19 = nn::os::ConvertToTimeSpan(lVar22 - DAT_71074470e8);
        uVar26 = ((long)uVar19 >> 0x20) * 0xe353f7cf + ((uVar19 & 0xffffffff) * 0xe353f7cf >> 0x20);
        lVar24 = (((long)(((long)uVar19 >> 0x20) * 0x20c49ba5 + ((long)uVar26 >> 0x20) +
                         ((uVar19 & 0xffffffff) * 0x20c49ba5 + (uVar26 & 0xffffffff) >> 0x20)) >> 7)
                 - ((long)uVar19 >> 0x3f)) * 1000;
        lVar22 = *(long *)(param_1 + 0x188);
        *(long *)(param_1 + 0x188) = lVar24;
        *(long *)(param_1 + 400) = (lVar24 - lVar22) + *(long *)(param_1 + 400);
        *(undefined1 *)(param_1 + 0x198) = 1;
      }
      else {
        FUN_710138bb90((long *)&local_a0);
      }
      *(undefined1 *)(param_1 + 0x1a1) = 1;
      return 1;
    }
    if (*(char *)(param_1 + 0x1a1) != '\0') {
      FUN_710138bad0((long *)&local_a0);
      *(undefined1 *)(param_1 + 0x198) = 0;
      lVar22 = nn::os::GetSystemTick();
      uVar19 = nn::os::ConvertToTimeSpan(lVar22 - DAT_71074470e8);
      uVar26 = ((long)uVar19 >> 0x20) * 0xe353f7cf + ((uVar19 & 0xffffffff) * 0xe353f7cf >> 0x20);
      *(long *)(param_1 + 0x188) =
           (((long)(((long)uVar19 >> 0x20) * 0x20c49ba5 + ((long)uVar26 >> 0x20) +
                   ((uVar19 & 0xffffffff) * 0x20c49ba5 + (uVar26 & 0xffffffff) >> 0x20)) >> 7) -
           ((long)uVar19 >> 0x3f)) * 1000;
      *(undefined1 *)(param_1 + 0x1a1) = 0;
      return 0;
    }
  }
  return 0;
}

