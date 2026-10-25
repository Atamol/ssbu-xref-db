// addr:      7101d124b0
// offset:    0x1d124b0
// name:      FUN_7101d124b0
// mangled:   
// signature: undefined __cdecl FUN_7101d124b0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d124b0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  long ****pppplVar19;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  long ***local_c8;
  ulong local_c0 [8];
  undefined **local_80;
  ulong local_78;
  
  if (*(int *)(param_1 + 0xfc) != 0) goto LAB_7101d12dc0;
  uVar13 = FUN_7101d25d90(*(long *)(DAT_7105325d88 + 8));
  if ((uVar13 & 0xff) != 0) {
    iVar2 = FUN_7101d239c0((int)(uVar13 >> 0x20));
    plVar15 = *(long **)(*DAT_7105314510 + 0x68);
    puVar16 = *(undefined8 **)(**(long **)(*DAT_7105314510 + 0x188) + 0x30);
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar3 = 999999999;
    if (iVar2 == 1) {
      uVar12 = 999;
      if ((int)DAT_7105308400 < 0x3e6) {
        uVar12 = DAT_7105308400 + 1;
      }
      iVar2 = *(int *)(*(long *)*puVar16 + 0x30);
      uVar18 = uVar3;
      if (iVar2 + 1U < 999999999) {
        uVar18 = iVar2 + 1;
      }
      DAT_7105308400 = uVar12;
      *(uint *)(*(long *)*puVar16 + 0x30) = uVar18;
      uVar18 = *(uint *)(*(long *)*puVar16 + 0x34);
      uVar12 = DAT_7105308400;
      if (DAT_7105308400 <= uVar18) {
        uVar12 = uVar18;
      }
      if (0x3b9ac9fe < uVar12) {
        uVar12 = uVar3;
      }
      *(uint *)(*(long *)*puVar16 + 0x34) = uVar12;
    }
    else {
      if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0))
      {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      DAT_7105308400 = 0;
    }
    iVar2 = FUN_7101d23c80();
    uVar12 = *(int *)(*(long *)*puVar16 + 0x2c) + iVar2;
    uVar18 = *(int *)(*(long *)(*plVar15 + 8) + 0x10dc8) + iVar2;
    if (0x3b9ac9fe < uVar12) {
      uVar12 = uVar3;
    }
    *(uint *)(*(long *)*puVar16 + 0x2c) = uVar12;
    if (0xf423e < uVar18) {
      uVar18 = 999999;
    }
    *(uint *)(*(long *)(*plVar15 + 8) + 0x10dc8) = uVar18;
    plVar15 = (long *)(*DAT_7105314508 + 0x5b4dd8);
    plVar14 = (long *)(*DAT_7105314508 + 0x5b4de8);
    if (*plVar14 == 0) {
      plVar9 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8);
      if (plVar9 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
          local_c8 = (long ***)&SUB_00000018;
          param_3 = (undefined **)&local_c8;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
          if (((uVar13 & 1) != 0) &&
             (plVar9 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,
                                              param_7,param_8), plVar9 != (long *)0x0))
          goto LAB_7101d1269c;
        }
        plVar9 = (long *)0x0;
      }
LAB_7101d1269c:
      *(undefined1 *)(plVar9 + 2) = 0;
      plVar9[1] = (long)plVar15;
      lVar17 = *plVar15;
      *plVar9 = lVar17;
      *(long **)(lVar17 + 8) = plVar9;
      *plVar15 = (long)plVar9;
      *plVar14 = *plVar14 + 1;
    }
    else {
      *(byte *)(*plVar15 + 0x10) = *(byte *)(*plVar15 + 0x10) & 1;
    }
  }
  plVar14 = *(long **)(param_1 + 0x148);
  iVar2 = FUN_7101d24df0();
  *(int *)(plVar14 + 0x1d) = iVar2;
  FUN_7101d20930(plVar14[0x1b],0,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar17 = plVar14[0x1b];
  pcVar7 = (char *)(lVar17 + 0xe8);
  plVar15 = (long *)(lVar17 + 0x460);
  do {
    if (*pcVar7 != '\0') {
      bVar1 = pcVar7[4];
      uVar12 = (uint)bVar1;
      uVar3 = FUN_7101d239c0((uint)bVar1);
      plVar11 = (long *)*plVar15;
      pppplVar19 = (long ****)(ulong)uVar3;
      uVar18 = (uint)bVar1;
      plVar9 = plVar15;
      if (plVar11 == (long *)0x0) {
LAB_7101d1296c:
        FUN_7101d1b3f0(lVar17,extraout_x1_00,(long ****)param_3,param_4,param_5,param_6,param_7,
                       param_8);
        plVar11 = *(long **)(lVar17 + 0x460);
        plVar9 = plVar15;
        while (plVar11 != (long *)0x0) {
          while (plVar8 = plVar11, (int)uVar18 < *(int *)((long)plVar8 + 0x1c)) {
            plVar11 = (long *)*plVar8;
            plVar9 = plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_7101d129c0;
          }
          if ((int)uVar18 <= *(int *)((long)plVar8 + 0x1c)) break;
          plVar9 = plVar8 + 1;
          plVar11 = (long *)*plVar9;
        }
LAB_7101d129c0:
        plVar9 = (long *)*plVar9;
      }
      else {
        do {
          if ((int)uVar12 <= *(int *)((long)plVar11 + 0x1c)) {
            plVar9 = plVar11;
          }
          plVar11 = (long *)plVar11[*(int *)((long)plVar11 + 0x1c) < (int)uVar12];
        } while (plVar11 != (long *)0x0);
        if ((plVar9 == plVar15) ||
           (*(uint *)((long)plVar9 + 0x1c) != uVar18 &&
            (int)uVar12 <= (int)*(uint *)((long)plVar9 + 0x1c))) goto LAB_7101d1296c;
      }
      FUN_7103776640(&local_80,*(long *)(lVar17 + 0xc0),(byte ****)"set_panel_%02d",
                     (ulong)*(uint *)(plVar9 + 4),param_4,param_5,param_6,param_7,param_8);
      local_c0[0] = local_c0[0] & 0xffffffffffffff00;
      local_c8 = (long ***)0x0;
      FUN_710062dc20((uint *)&local_c8,"result_rank_%d");
      uVar13 = local_78;
      FUN_7103778300(0x3f800000,local_78,(long)local_c0);
      if (*(char *)(lVar17 + 0x4a1) != '\0') {
        plVar9 = plVar15;
        if ((long *)*plVar15 != (long *)0x0) {
          plVar11 = (long *)*plVar15;
          do {
            while( true ) {
              plVar8 = plVar11;
              if (*(int *)((long)plVar8 + 0x1c) <= (int)(uint)(byte)pcVar7[4]) break;
              plVar11 = (long *)*plVar8;
              plVar9 = plVar8;
              if ((long *)*plVar8 == (long *)0x0) goto LAB_7101d12a68;
            }
            if ((int)(uint)(byte)pcVar7[4] <= *(int *)((long)plVar8 + 0x1c)) break;
            plVar9 = plVar8 + 1;
            plVar11 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
LAB_7101d12a68:
        if (*(int *)(*plVar9 + 0x20) % 2 == 1) {
          FUN_7103778300(0x3f800000,uVar13,0x71042c4ff6);
        }
      }
      uVar6 = FUN_7101d25d90(*(long *)(DAT_7105325d88 + 8));
      param_3 = (undefined **)pppplVar19;
      if (((uVar6 & 0xff) != 0 && uVar3 == 1) && (uint)(uVar6 >> 0x20) == uVar18) {
        FUN_7103776640(&local_d8,(long)&local_80,(byte ****)"set_lct_effect",pppplVar19,param_4,
                       param_5,param_6,param_7,param_8);
        uVar6 = local_d0;
        FUN_7103778300(0x3f800000,local_d0,0x710435c0ad);
        local_d8 = &PTR_FUN_710523d988;
        local_d0 = 0;
        if (uVar6 != 0) {
          uVar5 = *(ulong *)(uVar6 + 0x18);
          *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar6 + 0x18) = 0;
          if (uVar5 != 0) {
            FUN_710392eb40(uVar5);
          }
          FUN_710392eb40(uVar6);
        }
        FUN_7103778300(0x3f800000,uVar13,0x71042a32ba);
        param_3 = (undefined **)pppplVar19;
        if (*(char *)(lVar17 + 0x4a1) != '\0') {
          plVar11 = *(long **)(lVar17 + 0x478);
          plVar9 = (long *)(lVar17 + 0x478);
          while (plVar11 != (long *)0x0) {
            while( true ) {
              plVar8 = plVar11;
              if (*(int *)((long)plVar8 + 0x1c) <= (int)(uint)bVar1) break;
              plVar11 = (long *)*plVar8;
              plVar9 = plVar8;
              if ((long *)*plVar8 == (long *)0x0) goto LAB_7101d127c8;
            }
            if ((int)(uint)bVar1 <= *(int *)((long)plVar8 + 0x1c)) break;
            plVar9 = plVar8 + 1;
            plVar11 = (long *)*plVar9;
          }
LAB_7101d127c8:
          plVar11 = (long *)*plVar15;
          iVar2 = *(int *)(*plVar9 + 0x24);
          plVar9 = plVar15;
          if (plVar11 == (long *)0x0) {
LAB_7101d12808:
            FUN_7101d1b3f0(lVar17,extraout_x1,pppplVar19,param_4,param_5,param_6,param_7,param_8);
            plVar11 = *(long **)(lVar17 + 0x460);
            plVar9 = plVar15;
            while (plVar11 != (long *)0x0) {
              while (plVar8 = plVar11, iVar2 < *(int *)((long)plVar8 + 0x1c)) {
                plVar11 = (long *)*plVar8;
                plVar9 = plVar8;
                if ((long *)*plVar8 == (long *)0x0) goto LAB_7101d1285c;
              }
              if (iVar2 <= *(int *)((long)plVar8 + 0x1c)) break;
              plVar9 = plVar8 + 1;
              plVar11 = (long *)*plVar9;
            }
LAB_7101d1285c:
            plVar9 = (long *)*plVar9;
          }
          else {
            do {
              if (iVar2 <= *(int *)((long)plVar11 + 0x1c)) {
                plVar9 = plVar11;
              }
              plVar11 = (long *)plVar11[*(int *)((long)plVar11 + 0x1c) < iVar2];
            } while (plVar11 != (long *)0x0);
            if ((plVar9 == plVar15) || (iVar2 < *(int *)((long)plVar9 + 0x1c))) goto LAB_7101d12808;
          }
          param_3 = (undefined **)(ulong)*(uint *)(plVar9 + 4);
          FUN_7103776640(&local_d8,*(long *)(lVar17 + 0xc0),(byte ****)"set_panel_%02d",param_3,
                         param_4,param_5,param_6,param_7,param_8);
          FUN_7103776640(&local_e8,(long)&local_d8,(byte ****)"set_lct_effect",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          uVar6 = local_e0;
          FUN_7103778300(0x3f800000,local_e0,0x710435c0ad);
          local_e8 = &PTR_FUN_710523d988;
          local_e0 = 0;
          if (uVar6 != 0) {
            uVar5 = *(ulong *)(uVar6 + 0x18);
            *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar6 + 0x18) = 0;
            if (uVar5 != 0) {
              FUN_710392eb40(uVar5);
            }
            FUN_710392eb40(uVar6);
          }
          uVar6 = local_d0;
          FUN_7103778300(0x3f800000,local_d0,0x71042a32ba);
          local_d8 = &PTR_FUN_710523d988;
          local_d0 = 0;
          if (uVar6 != 0) {
            uVar5 = *(ulong *)(uVar6 + 0x18);
            *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar6 + 0x18) = 0;
            if (uVar5 != 0) {
              FUN_710392eb40(uVar5);
            }
            FUN_710392eb40(uVar6);
          }
        }
      }
      local_78 = 0;
      local_80 = &PTR_FUN_710523d988;
      if (uVar13 != 0) {
        local_78 = 0;
        local_80 = &PTR_FUN_710523d988;
        uVar6 = *(ulong *)(uVar13 + 0x18);
        *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar13 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar13);
      }
    }
    pcVar7 = pcVar7 + 0x58;
  } while (pcVar7 != (char *)(lVar17 + 0x3a8));
  uVar13 = FUN_7101d25d90(*(long *)(DAT_7105325d88 + 8));
  if ((uVar13 & 0xff) != 0) {
    plVar15 = (long *)(plVar14[0x1b] + 0x460);
    plVar9 = *(long **)(plVar14[0x1b] + 0x460);
    while (plVar9 != (long *)0x0) {
      while( true ) {
        plVar11 = plVar9;
        iVar2 = (int)(uVar13 >> 0x20);
        if (*(int *)((long)plVar11 + 0x1c) <= iVar2) break;
        plVar9 = (long *)*plVar11;
        plVar15 = plVar11;
        if ((long *)*plVar11 == (long *)0x0) goto LAB_7101d12b64;
      }
      if (iVar2 <= *(int *)((long)plVar11 + 0x1c)) break;
      plVar15 = plVar11 + 1;
      plVar9 = (long *)*plVar15;
    }
LAB_7101d12b64:
    lVar17 = plVar14[0x1c];
    *(undefined4 *)(lVar17 + 0x4c8) = *(undefined4 *)(*plVar15 + 0x20);
    *(undefined1 *)(lVar17 + 0x4c4) = 1;
  }
  FUN_7103778760(*(long *)(plVar14[0x19] + 8),0x7104453107);
  switch((int)plVar14[0x1d]) {
  case 0:
    FUN_7103778300(0x3f800000,*(long *)(plVar14[0x19] + 8),0x710432a291);
    FUN_7103776910(&local_c8,plVar14[0x19],(long ****)"set_txt_result_title",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    pcVar7 = "mnu_spectate_result_right_01";
    goto LAB_7101d12c74;
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(plVar14[0x19] + 8),0x710432a291);
    FUN_7103776910(&local_c8,plVar14[0x19],(long ****)"set_txt_result_title",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    pcVar7 = "mnu_spectate_result_right_03";
LAB_7101d12c74:
    FUN_710377a120((long)&local_c8,pcVar7,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101d12cf8:
    uVar13 = local_c0[0];
    local_c8 = (long ***)&PTR_FUN_710523d9a8;
    local_c0[0] = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    break;
  case 2:
    FUN_7103778300(0x3f800000,*(long *)(plVar14[0x19] + 8),0x710432a291);
    FUN_7103778300(0x3f800000,*(long *)(plVar14[0x19] + 8),0x71043f0bf0);
    if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    FUN_7103776910(&local_c8,plVar14[0x19],(long ****)"set_txt_result_title",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    FUN_710377a280((long)&local_c8,(byte *)"mnu_spectate_result_right_02",1);
    goto LAB_7101d12cf8;
  case 3:
  case 4:
    FUN_7103776910(&local_c8,plVar14[0x19],(long ****)"set_txt_result_title",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    FUN_710377a120((long)&local_c8,"mnu_spectate_result_normal",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar13 = local_c0[0];
    local_c8 = (long ***)&PTR_FUN_710523d9a8;
    local_c0[0] = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_7103778300(0x3f800000,*(long *)(plVar14[0x19] + 8),0x710425f69d);
  }
  *(undefined4 *)((long)plVar14 + 0xec) =
       *(undefined4 *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + 0x10dc8);
  if (0x12 < *(uint *)((long)plVar14 + 0xb4)) {
LAB_7101d12f2c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)plVar14 + (long)(int)*(uint *)((long)plVar14 + 0xb4) * 4 + 0x68) = 1;
  FUN_7101d237d0(plVar14);
  plVar14[0x1f] = 0;
  lVar17 = nn::os::GetSystemTick();
  uVar6 = nn::os::ConvertToTimeSpan(lVar17 - DAT_71074470e8);
  uVar13 = ((long)uVar6 >> 0x20) * 0xe353f7cf + ((uVar6 & 0xffffffff) * 0xe353f7cf >> 0x20);
  plVar14[0x1e] =
       (((long)(((long)uVar6 >> 0x20) * 0x20c49ba5 + ((long)uVar13 >> 0x20) +
               ((uVar6 & 0xffffffff) * 0x20c49ba5 + (uVar13 & 0xffffffff) >> 0x20)) >> 7) -
       ((long)uVar6 >> 0x3f)) * 1000;
  *(undefined1 *)(plVar14 + 0x20) = 0;
LAB_7101d12dc0:
  plVar15 = *(long **)(param_1 + 0x148);
  if ((int)plVar15[0x17] != 0 && (int)plVar15[0x17] != 3) {
    FUN_7101d176e0((long *)plVar15[0x1c]);
  }
  FUN_7101d237d0(plVar15);
  if (*plVar15 != 0) {
    pcVar10 = (code *)plVar15[1];
    uVar13 = plVar15[2] & 1;
    if (uVar13 != 0 || pcVar10 != (code *)0x0) {
      if (uVar13 != 0) {
        pcVar10 = *(code **)(pcVar10 + *(long *)(*plVar15 + (plVar15[2] >> 1)));
      }
      (*pcVar10)();
    }
  }
  *(int *)((long)plVar15 + 0xbc) = *(int *)((long)plVar15 + 0xbc) + 1;
  if (*(int *)(*(long *)(param_1 + 0x148) + 0xb8) == 3) {
    *(undefined4 *)(param_1 + 0x128) = 5;
    if (0x12 < *(uint *)(param_1 + 0xf4)) goto LAB_7101d12f2c;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 5;
  }
  return;
}

