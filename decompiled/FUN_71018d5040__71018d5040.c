// addr:      71018d5040
// offset:    0x18d5040
// name:      FUN_71018d5040
// mangled:   
// signature: undefined __cdecl FUN_71018d5040(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018d5040(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  byte ****ppppbVar11;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong *puVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong local_2258;
  ulong local_2250;
  undefined8 uStack_2248;
  uint local_2240;
  undefined4 uStack_223c;
  undefined8 uStack_2238;
  undefined8 local_2230;
  undefined4 local_2228;
  byte local_21f8 [12];
  undefined8 local_21ec;
  undefined8 local_21e4;
  undefined1 local_21dc;
  undefined8 local_219c;
  undefined1 local_2194;
  undefined8 local_2154;
  undefined1 local_214c;
  undefined1 auStack_210c [4096];
  undefined1 uStack_110c;
  undefined4 local_1108;
  undefined1 uStack_1104;
  undefined8 local_1100;
  undefined8 local_10f8;
  undefined4 local_10f0;
  undefined2 local_10ec;
  undefined4 local_10b8;
  undefined4 local_10b4;
  undefined4 uStack_10b0;
  undefined5 uStack_10ac;
  undefined1 auStack_1068 [4104];
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar7 = *(int *)(param_1 + 0x10c);
    iVar4 = *(int *)(param_1 + 0x108);
    bVar1 = iVar7 < iVar4;
    if ((iVar4 == 0) && (0 < iVar7)) {
      bVar1 = iVar7 < 0 || *(int *)(param_1 + 0x118) - 3U < 2;
    }
    else if (iVar4 == 1) {
      if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0))
      {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      uVar14 = (**(code **)(**(long **)(param_1 + 0x100) + 0x20))();
      if (uVar14 != 0xffffffff) {
        puVar24 = &DAT_7105339830;
        if ((((9 < uVar14) || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
            (puVar24 = (undefined8 *)(&DAT_7105339860)[(int)uVar14], puVar24 != (undefined8 *)0x0))
           && (uVar22 = *(int *)(puVar24[2] + 0x9c) - 1, uVar22 < 7)) {
          DAT_7105307b68._4_4_ = *(uint *)(&DAT_7104753de0 + (long)(int)uVar22 * 4);
        }
        DAT_7105307b68._0_4_ = uVar14;
        if (DAT_710593ba90 != (long *)0x0) {
          *(uint *)(*DAT_710593ba90 + 0x3ac) = DAT_7105307b68._4_4_;
        }
        if (DAT_710532f7f0 != 0) {
          FUN_7101afe3e0(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80),
                         DAT_7105307b68._4_4_,(long ****)param_3,param_4,param_5,param_6,param_7,
                         param_8);
        }
      }
      iVar7 = *(int *)(param_1 + 0x10c);
    }
    if (iVar7 == 1) {
      if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0))
      {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      uVar14 = (DAT_71053050f0 & 0x7f000000) + 0xfe000000;
      if (uVar14 >> 0x18 < 7) {
        uVar8 = (ulong)*(uint *)(&DAT_7104544710 + (long)(char)(uVar14 >> 0x18) * 4);
      }
      else {
        uVar8 = 0xffffffff;
      }
      FUN_7101af2070(*(long **)(*(long *)(param_1 + 0xf8) + 0x80),uVar8,(long ****)param_3,param_4,
                     param_5,param_6,param_7,param_8);
      lVar25 = *(long *)(param_1 + 0x100);
      uVar15 = *(undefined8 *)(param_1 + 0x124);
      lVar19 = *(long *)(lVar25 + 0x80);
      iVar7 = *(int *)(param_1 + 0x118);
      *(undefined8 *)(lVar19 + 0x100) = *(undefined8 *)(param_1 + 0x11c);
      *(undefined8 *)(lVar19 + 0x108) = uVar15;
      uVar16 = *(undefined8 *)(param_1 + 300);
      uVar17 = *(undefined8 *)(param_1 + 0x134);
      uVar15 = *(undefined8 *)(param_1 + 0x144);
      *(undefined8 *)(lVar19 + 0x120) = *(undefined8 *)(param_1 + 0x13c);
      *(undefined8 *)(lVar19 + 0x128) = uVar15;
      *(undefined8 *)(lVar19 + 0x110) = uVar16;
      *(undefined8 *)(lVar19 + 0x118) = uVar17;
      if (iVar7 == 4) {
        uVar14 = 1;
      }
      else if (iVar7 == 3) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0xffffffff;
      }
      *(undefined4 *)(lVar19 + 0x130) = 0;
      lVar23 = DAT_710532f8d0;
      FUN_7103313da0(*(undefined8 **)(DAT_710532f8d0 + 8),0,(long ****)param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710240a7a0();
      lVar23 = *(long *)(lVar23 + 8);
      puVar24 = (undefined8 *)(lVar23 + 0x78);
      FUN_7101316520((undefined8 *)*puVar24);
      *puVar24 = 0;
      *(undefined8 *)(lVar23 + 0x80) = 0;
      *(undefined8 **)(lVar23 + 0x70) = puVar24;
      if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71053082f8 == 1) {
        if ((DAT_7105329f50 == 0) || (bVar6 = FUN_710240e4e0(), !bVar6)) {
          cVar5 = DAT_710593b534 == 0;
        }
        else {
          cVar5 = '\x02';
        }
        uVar22 = (uint)(cVar5 != '\0');
      }
      else {
        uVar22 = DAT_71053082f8;
        if (DAT_71053082f8 == 0) {
          if ((DAT_7105329f50 == 0) || (bVar6 = FUN_710240e4e0(), !bVar6)) {
            cVar5 = DAT_710593b534 == 0;
          }
          else {
            cVar5 = '\x02';
          }
          uVar22 = (uint)(cVar5 == '\x01');
        }
      }
      if ((long *)**(undefined8 **)(lVar19 + 0x40) != (long *)0x0) {
        FUN_7103375650((long *)**(undefined8 **)(lVar19 + 0x40),"last_selected_mode_",
                       &DAT_71042b2a84);
        if ((long *)**(undefined8 **)(lVar19 + 0x40) != (long *)0x0) {
          FUN_7103375650((long *)**(undefined8 **)(lVar19 + 0x40),"exit_code_",&DAT_71042b2a84);
          if ((long *)**(undefined8 **)(lVar19 + 0x40) != (long *)0x0) {
            FUN_7103375650((long *)**(undefined8 **)(lVar19 + 0x40),"IS_BACK",&DAT_71043cdb7b);
            if ((long *)**(undefined8 **)(lVar19 + 0x40) != (long *)0x0) {
              FUN_7103375650((long *)**(undefined8 **)(lVar19 + 0x40),"BUTTON_ID_INIT",
                             &DAT_71042b2a84);
              if ((long *)**(undefined8 **)(lVar19 + 0x40) != (long *)0x0) {
                FUN_7103375650((long *)**(undefined8 **)(lVar19 + 0x40),"MODE_INIT",&DAT_71042b2a84)
                ;
              }
            }
          }
        }
      }
      FUN_7101d53a00(lVar19,uVar22);
      pcVar10 = &DAT_71042b2a84;
      ppppbVar11 = (byte ****)(ulong)uVar14;
      FUN_7103375650((long *)**(undefined8 **)(lVar19 + 0x40),"EXIT_MENU_INIT",&DAT_71042b2a84);
      iVar7 = DAT_710593b534;
      plVar20 = *(long **)(lVar19 + 0x40);
      lVar21 = *(long *)*plVar20;
      *(undefined4 *)((long *)*plVar20 + 2) = 0;
      plVar12 = *(long **)(lVar21 + 0x10);
      *plVar12 = lVar21;
      *(undefined4 *)(plVar12 + 1) = 0x48;
      lVar19 = *(long *)(lVar21 + 0x10);
      *(long *)(lVar21 + 0x10) = lVar19 + 0x10;
      lVar23 = *(long *)(*(long *)(lVar21 + 0x18) + 200);
      *(long *)(lVar21 + 0x10) = lVar19;
      if (lVar23 == lVar21) {
        lVar19 = *(long *)(*(long *)(lVar21 + 0x18) + 0x40);
        if (*(uint *)(lVar19 + 0xc) < 2) {
          plVar12 = (long *)(*(long *)(lVar19 + 0x18) +
                            ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar19 + 0xb) & 0x3f))
                            & 2) * 0x20);
          do {
            if (((int)plVar12[3] == 0x13) && (plVar9 = plVar12, plVar12[2] == 2)) break;
            piVar2 = (int *)((long)plVar12 + 0x1c);
            plVar12 = plVar12 + (long)*piVar2 * 4;
            plVar9 = &DAT_7104862960;
          } while (*piVar2 != 0);
        }
        else {
          plVar9 = (long *)(*(long *)(lVar19 + 0x10) + 0x10);
        }
        pcVar10 = "update_operation_mode";
        FUN_71038f4d40(lVar21,plVar9,"update_operation_mode");
      }
      else {
        FUN_71038f4b20(lVar21,"update_operation_mode");
        FUN_71038f4fc0(lVar21,-2);
      }
      puVar24 = (undefined8 *)(*(long *)(lVar21 + 0x10) + -0x10);
      if ((puVar24 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar21 + 0x10) + -8) & 0xf) != 6)) {
        *(undefined8 **)(lVar21 + 0x10) = puVar24;
      }
      else {
        lVar19 = *(long *)*plVar20;
        puVar18 = *(ulong **)(lVar19 + 0x10);
        *puVar18 = (ulong)(iVar7 == 0);
        *(undefined4 *)(puVar18 + 1) = 0x13;
        *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 0x10;
        *(int *)(*plVar20 + 0x10) = *(int *)(*plVar20 + 0x10) + 1;
        FUN_7103377130(plVar20,0,(long ****)pcVar10,ppppbVar11,param_5,param_6,param_7,param_8);
      }
      *(undefined1 *)(lVar25 + 0x70) = 0;
      if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      uVar14 = DAT_71053050f0;
      local_21f8[8] = 0;
      local_21f8[9] = 1;
      uVar22 = 0x811c9dc5;
      local_21f8[0] = 0;
      local_21f8[1] = 0;
      local_21f8[2] = 0;
      local_21f8[3] = 0;
      local_21f8[4] = 0;
      local_21f8[5] = 0;
      local_21f8[6] = 0;
      local_21f8[7] = 0;
      local_21ec = 0x100000000;
      local_21dc = 0;
      local_21e4 = 0;
      local_2194 = 0;
      local_219c = 0;
      local_214c = 0;
      local_2154 = 0;
      memset(auStack_210c,0,0x1000);
      uStack_110c = 1;
      local_1108 = 0;
      uStack_1104 = 1;
      local_10f8 = local_10f8 & 0xffffffffffffff00;
      local_1100 = 0;
      local_10b8 = 0x20;
      memset(auStack_1068,0,0x1000);
      uStack_10ac = 0;
      local_10b4 = 0;
      uStack_10b0 = 0;
      FUN_7101af73b0((long)local_21f8,uVar14);
      local_21f8[8] = 1;
      uStack_2238 = 0x5f74706f5f756e6d;
      local_2230 = 0x69745f646e756f73;
      uVar13 = 0x6d;
      lVar19 = 9;
      local_2228 = 0x656c74;
      uVar14 = uVar22;
      do {
        uVar14 = uVar14 * 0x89 ^ uVar13;
        uVar13 = (uint)*(byte *)((long)&local_2240 + lVar19);
        lVar19 = lVar19 + 1;
      } while (uVar13 != 0);
      _local_2240 = CONCAT44(0x13,uVar14);
      local_2250 = 0;
      uStack_2248 = 0;
      local_2258 = 0;
      FUN_7101af7560((long)local_21f8,&local_2240,(long *)&local_2258);
      if (local_2258 != 0) {
        local_2250 = local_2258;
        FUN_710392eb40(local_2258);
      }
      local_10f8 = 0x746f6f665f756e6d;
      local_10f0 = 0x6f5f7265;
      local_10ec = 0x6b;
      uVar14 = 0x6d;
      lVar19 = 0x1101;
      do {
        uVar22 = uVar22 * 0x89 ^ uVar14;
        uVar14 = (uint)local_21f8[lVar19];
        lVar19 = lVar19 + 1;
      } while (uVar14 != 0);
      local_1108 = 10;
      local_10b4 = 1;
      local_1100 = CONCAT44(0xd,uVar22);
      if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x69) == '\0') {
        uVar15 = 1;
      }
      else {
        uVar15 = 2;
      }
      FUN_7101af8570(*(long *)(param_1 + 0xf0),(int *)local_21f8,(ulong)(bVar1 ^ 1),uVar15,param_5,
                     param_6,param_7,param_8);
    }
  }
  else if ((*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) != '\0') &&
          (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) == '\0')) {
    uVar14 = *(uint *)(param_1 + 0xd4);
    if (*(int *)(param_1 + 0x10c) == 1) {
      if (0x12 < uVar14) {
LAB_71018d58bc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)uVar14 * 4 + 0x88) = 1;
      uVar3 = *(undefined4 *)(param_1 + 0x10c);
      *(undefined4 *)(param_1 + 0x10c) = 0;
      *(undefined4 *)(param_1 + 0x108) = uVar3;
    }
    else {
      if (0x12 < uVar14) goto LAB_71018d58bc;
      *(undefined4 *)(param_1 + (long)(int)uVar14 * 4 + 0x88) = 5;
    }
  }
  return;
}

