// addr:      7101481900
// offset:    0x1481900
// name:      FUN_7101481900
// mangled:   
// signature: undefined __cdecl FUN_7101481900(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101481900(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  undefined8 extraout_x1;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  ushort uVar18;
  int iVar19;
  ushort *puVar20;
  long *plVar21;
  ushort *puVar22;
  uint local_168;
  ushort local_164 [34];
  uint local_120 [2];
  ushort auStack_118 [44];
  long ***local_c0;
  long *local_b8;
  undefined2 local_b0;
  undefined4 local_ac;
  ushort local_a8 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined5 uStack_58;
  undefined3 local_53;
  undefined5 uStack_50;
  
  plVar21 = *(long **)(param_1 + 0x10);
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_120[0] = 0;
      local_c0 = (long ***)&DAT_00000088;
      param_3 = (undefined **)&local_c0;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_120);
      if (((uVar9 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_710148197c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_710148197c:
  FUN_7101b8d640(puVar8,plVar21,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  puVar8[2] = &DAT_7105333600;
  uVar4 = DAT_7105333664;
  *(undefined4 *)(puVar8 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar8 + 0x6c) = uVar4;
  do {
    uVar2 = DAT_7105333650;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar5) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar2 & 1) != 0);
  puVar8[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar8;
  FUN_71032caea0((long)puVar8,extraout_x1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                );
  lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  *(undefined8 **)(*(long *)(param_1 + 0x10) + 8) = puVar8;
  if (lVar10 != 0) {
    FUN_71032cad20(lVar10);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar10 = DAT_71052c3600;
  if (DAT_71052cc5d8 == '\x02') {
    bVar5 = false;
  }
  else if (DAT_71052cc5dc < '\x02') {
    bVar5 = true;
  }
  else {
    bVar5 = DAT_71052e8b4d == '\0';
  }
  uVar9 = FUN_710149e570(*(long *)(DAT_71052c3600 + 8));
  *(int *)(*(long *)(param_1 + 0x10) + 200) = (int)uVar9;
  lVar12 = *(long *)(param_1 + 0x10);
  if (bVar5) {
    *(int *)(lVar12 + 200) = *(int *)(lVar12 + 200) << 2;
    uVar9 = FUN_710149e480(*(long *)(lVar10 + 8));
    lVar12 = *(long *)(param_1 + 0x10);
    iVar7 = *(int *)(lVar12 + 200) + (int)uVar9;
  }
  else {
    iVar7 = *(int *)(lVar12 + 200) << 1;
  }
  *(int *)(lVar12 + 200) = iVar7;
  lVar10 = (**(code **)(*(long *)(DAT_71052c50f0 + 0x5b0) + 0x30))(DAT_71052c50f0 + 0x5b0);
  local_120[0] = 0;
  FUN_7101482020(local_120,(ushort *)(lVar10 + 0x110));
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_71053050f0 != 0x7070000) goto LAB_7101481d18;
  lVar10 = *(long *)(DAT_710532f8f8 + 8);
  uVar9 = *(ulong *)(lVar10 + 0xe8);
  iVar7 = *(int *)(lVar10 + 0xe0);
  param_3 = (undefined **)0x0;
  sVar6 = FUN_710334c7d0(lVar10,uVar9,0);
  if (sVar6 == 2) {
    local_ac = 0;
    local_a8[0] = 0;
    local_b0 = 0;
    local_68 = 0;
    local_c0 = (long ***)0x0;
    local_b8 = (long *)0x0;
    uStack_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_53 = 0;
    if ((*(long *)(lVar10 + 0x108) == 0) || (lVar12 = *(long *)(lVar10 + 0x100), lVar12 == 0))
    goto LAB_7101481be8;
    lVar1 = lVar10 + 0x100;
    lVar13 = lVar1;
    lVar17 = lVar12;
    do {
      if (iVar7 <= *(int *)(lVar17 + 0x20)) {
        lVar13 = lVar17;
      }
      lVar17 = *(long *)(lVar17 + (ulong)(*(int *)(lVar17 + 0x20) < iVar7) * 8);
    } while (lVar17 != 0);
    if ((lVar13 == lVar1) || (lVar17 = lVar1, iVar7 < *(int *)(lVar13 + 0x20))) goto LAB_7101481be8;
    do {
      if (iVar7 <= *(int *)(lVar12 + 0x20)) {
        lVar17 = lVar12;
      }
      lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < iVar7) * 8);
    } while (lVar12 != 0);
    if (((lVar17 == lVar1) || (iVar7 < *(int *)(lVar17 + 0x20))) || (*(int *)(lVar17 + 0x28) != 2))
    goto LAB_7101481be8;
    plVar14 = (long *)(lVar17 + 0x50);
    plVar16 = (long *)*plVar14;
    plVar21 = plVar14;
    if (plVar16 == (long *)0x0) goto LAB_7101481be8;
    do {
      if ((ulong)plVar16[4] >= uVar9) {
        plVar21 = plVar16;
      }
      plVar16 = (long *)plVar16[(ulong)plVar16[4] < uVar9];
    } while (plVar16 != (long *)0x0);
    if ((plVar21 == plVar14) || (uVar9 < (ulong)plVar21[4])) goto LAB_7101481be8;
    FUN_7103351810(&local_c0,(long)(plVar21 + 5));
    FUN_71016bc6e0(&local_168,local_a8);
    puVar22 = (ushort *)((ulong)&local_168 | 4);
  }
  else {
LAB_7101481be8:
    param_3 = (undefined **)0x0;
    sVar6 = FUN_710334c7d0(lVar10,uVar9,0);
    puVar22 = (ushort *)((ulong)&local_168 | 4);
    local_168 = 0;
    local_164[0] = 0;
    if (sVar6 == 3) {
      puVar11 = (ushort *)
                FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_play_title_spectate");
      if ((puVar11 == (ushort *)0x0) || (uVar18 = *puVar11, uVar18 == 0)) {
        iVar7 = 0;
      }
      else {
        iVar15 = 0;
        iVar7 = 0;
        puVar20 = puVar11;
        do {
          if ((uVar18 | 1) == 0xf) {
            if (uVar18 == 0xe) {
              iVar19 = (puVar20[3] >> 1) + 4;
              uVar18 = puVar20[1];
            }
            else {
              iVar19 = 3;
              if (uVar18 != 0xf) {
                iVar19 = 0;
              }
              uVar18 = puVar20[1];
            }
            if ((((uVar18 == 0) && (puVar20[2] == 2)) && (puVar11[iVar19 + iVar15] == 0x5f)) &&
               ((puVar11[(long)(iVar19 + iVar15) + 1] | 1) == 0xf)) {
              iVar19 = iVar19 + 1;
            }
          }
          else {
            lVar10 = (long)iVar7;
            iVar7 = iVar7 + 1;
            local_164[lVar10] = uVar18;
            iVar19 = 1;
          }
          if (0x1d < iVar7) break;
          iVar15 = iVar19 + iVar15;
          puVar20 = puVar11 + iVar15;
          uVar18 = *puVar20;
        } while (uVar18 != 0);
      }
      local_164[iVar7] = 0;
    }
  }
  FUN_7101482020(local_120,puVar22);
LAB_7101481d18:
  FUN_7103776910(&local_c0,*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0x80) + 8,
                 (long ****)"set_txt_header_titlename",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  plVar21 = local_b8;
  if (*(long **)((long)local_b8 + 0x10) != (long *)0x0) {
    param_3 = (undefined **)&DAT_ffffffff;
    param_4 = (byte ****)0x1;
    FUN_71037a2270(*(long **)((long)local_b8 + 0x10),auStack_118,0xffffffff,1);
  }
  local_c0 = (long ***)&PTR_FUN_710523d9a8;
  local_b8 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar21);
  }
  *(undefined4 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0x80) + 0x124) =
       *(undefined4 *)(*(long *)(param_1 + 0x10) + 200);
  lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0x80);
  *(undefined1 *)(lVar12 + 0x128) = 0;
  FUN_7103776910(&local_c0,lVar12 + 8,(long ****)"set_rep_pic_mov",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar21 = local_b8;
  lVar10 = *local_b8;
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | *(byte *)(lVar12 + 0x128);
  }
  local_c0 = (long ***)&PTR_FUN_710523d9a8;
  local_b8 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar21);
  }
  *(undefined1 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0x80) + 0x129) = 0;
  lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  lVar12 = *(long *)(lVar10 + 0x80);
  uVar2 = *(uint *)(lVar12 + 0x10c);
  if (0x12 < uVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar12 + (long)(int)uVar2 * 4 + 0xc0) = 1;
  *(undefined1 *)(lVar10 + 0x70) = 0;
  return;
}

