// addr:      7101480160
// offset:    0x1480160
// name:      FUN_7101480160
// mangled:   
// signature: undefined __cdecl FUN_7101480160(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101480160(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar10;
  char *pcVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  code *pcVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  ulong local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  uint local_28 [2];
  
  lVar18 = DAT_7105337ce8;
  puVar22 = *(ulong **)(param_1 + 0x10);
  if (*(char *)(DAT_7105337ce8 + 0x58d) != '\0') {
    pcVar11 = (char *)(DAT_7105337ce8 + 0x540);
    *(undefined1 *)(DAT_7105337ce8 + 0x58d) = 0;
    if (*pcVar11 != '\0') {
      lVar16 = *(long *)(lVar18 + 0x528);
      lVar19 = *(long *)(lVar18 + 0x530);
      if (lVar16 != lVar19) {
        lVar17 = 0;
        do {
          lVar2 = lVar16 + lVar17;
          lVar17 = lVar17 + 0xa0;
          lVar20 = *(long *)(lVar2 + 8);
          fVar25 = *(float *)(lVar2 + 0x50);
          fVar26 = *(float *)(lVar2 + 0x54);
          lVar21 = *(long *)(lVar2 + 0x28);
          *(float *)(lVar20 + 0xa8) = fVar25;
          *(float *)(lVar20 + 0xac) = fVar26;
          *(undefined8 *)(lVar20 + 0xd8) = 0;
          *(undefined1 **)(lVar20 + 0xd0) = &DAT_3f8000003f800000;
          *(float *)(lVar20 + 0xc0) = *(float *)(lVar20 + 0xb8) + fVar25;
          *(float *)(lVar20 + 0xc4) = *(float *)(lVar20 + 0xbc) + fVar26;
          uVar10 = *(undefined8 *)(lVar2 + 0x68);
          *(undefined8 *)(lVar20 + 0xd0) = *(undefined8 *)(lVar2 + 0x60);
          *(undefined8 *)(lVar20 + 0xd8) = uVar10;
          *(undefined1 *)(lVar20 + 0xe0) = *(undefined1 *)(lVar2 + 0x90);
          uVar10 = *(undefined8 *)(lVar2 + 0x78);
          *(undefined8 *)(lVar20 + 0xb8) = *(undefined8 *)(lVar2 + 0x70);
          *(undefined8 *)(lVar20 + 0xc0) = uVar10;
          uVar10 = *(undefined8 *)(lVar2 + 0x88);
          *(undefined8 *)(lVar21 + 0xb8) = *(undefined8 *)(lVar2 + 0x80);
          *(undefined8 *)(lVar21 + 0xc0) = uVar10;
        } while (lVar19 - lVar16 != lVar17);
      }
      *(undefined1 *)(lVar18 + 0x540) = 0;
    }
    uVar23 = puVar22[0xc];
    if (((DAT_710532f4d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_710532f4d8), iVar7 != 0)) {
      DAT_710532f4a4 = 0xffffff;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_710532f4d8);
      lVar18 = *(long *)(uVar23 + 0x28);
      if (lVar18 == 0) goto LAB_710148026c;
LAB_7101480228:
      lVar16 = uVar23 + 0x28;
      do {
        bVar6 = (*(ulong *)(lVar18 + 0x20) & 0xfffffffffc) < 0x15cc37f68c;
        if (!bVar6) {
          lVar16 = lVar18;
        }
        lVar18 = *(long *)(lVar18 + (ulong)bVar6 * 8);
      } while (lVar18 != 0);
      if ((lVar16 == uVar23 + 0x28) || (0x15cc37f68c < (*(ulong *)(lVar16 + 0x20) & 0xffffffffff)))
      goto LAB_710148026c;
      puVar9 = (uint *)(lVar16 + 0x28);
    }
    else {
      lVar18 = *(long *)(uVar23 + 0x28);
      if (lVar18 != 0) goto LAB_7101480228;
LAB_710148026c:
      puVar9 = &DAT_710532f4a4;
    }
    pcVar11 = "model.numdlb";
    FUN_710353e1d0((uint *)&local_70,puVar9,(byte *)"model.numdlb");
    if ((uint)local_70 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,(uint)local_70,(long *********)pcVar11,param_4,param_5,param_6,
                     param_7,param_8);
    }
    if (((uint)local_70 == 0xffffff) ||
       (lVar18 = **(long **)(DAT_7105332f20 + 0x78),
       *(uint *)(*(long *)(lVar18 + 0x40) + 4) <= (uint)local_70)) {
      local_70 = 0;
    }
    else {
      local_70 = *(ulong *)(*(long *)(lVar18 + 0x60) + (local_70 & 0xffffffff) * 0x20) &
                 0xffffffffff;
    }
    lVar18 = (*(long **)(DAT_7105332f20 + 0x78))[1];
    pcVar14 = FUN_7103542240;
    ppppbVar13 = (byte ****)&DAT_00000008;
    puVar8 = bsearch(&local_70,*(void **)(lVar18 + 0x20),(ulong)*(uint *)(*(long *)(lVar18 + 8) + 8)
                     ,8,FUN_7103542240);
    local_28[0] = 0xffffff;
    if (puVar8 != (undefined8 *)0x0) {
      uVar5 = (uint)((ulong)*puVar8 >> 0x20);
      uVar15 = uVar5 >> 8;
      if ((uVar15 != 0xffffff) &&
         (uVar3 = *(uint *)(*(long *)(lVar18 + 8) + 4), local_28[0] = uVar5 >> 8,
         uVar3 < uVar15 || uVar3 == local_28[0])) {
        local_28[0] = 0xffffff;
      }
    }
    pppplVar12 = (long ****)&DAT_00000004;
    FUN_71035c2890(&local_70,local_28,(long *********)&DAT_00000004,ppppbVar13,(long ****)pcVar14,
                   param_6,param_7,param_8);
    plVar1 = plStack_68;
    uVar23 = local_70;
    local_70 = 0;
    plStack_68 = (long *)0x0;
    plVar24 = (long *)puVar22[1];
    *puVar22 = uVar23;
    puVar22[1] = (ulong)plVar1;
    uVar10 = extraout_x1;
    if (plVar24 != (long *)0x0) {
      plVar1 = plVar24 + 1;
      do {
        lVar18 = *plVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        std::__shared_weak_count::__release_weak();
        uVar10 = extraout_x1_00;
      }
    }
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar18 = *plVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        std::__shared_weak_count::__release_weak();
        uVar10 = extraout_x1_01;
      }
    }
    FUN_71035597d0(puVar22,uVar10,pppplVar12,ppppbVar13,(long ****)pcVar14,param_6,param_7,param_8);
    plStack_68 = (long *)0x0;
    local_70 = 0x3f400000;
    uStack_58 = 0;
    local_60 = 0x3f40000000000000;
    uStack_48 = 0x3f400000;
    local_50 = 0;
    uStack_38 = 0x3f800000c1a00000;
    local_40 = 0;
    (**(code **)(*(long *)*puVar22 + 0x148))((long *)*puVar22,&local_70);
    (**(code **)(*(long *)*puVar22 + 0xa8))((long *)*puVar22,1);
    (**(code **)(*(long *)*puVar22 + 0x408))((long *)*puVar22,0,1);
    (**(code **)(*(long *)*puVar22 + 0x408))((long *)*puVar22,1,1);
    FUN_7103564030(*lib::Singleton<lib::EffectManager>::instance_);
  }
  lVar18 = DAT_7105328d88;
  if (DAT_7105328d88 != 0) {
    lVar16 = *(long *)(DAT_7105328d88 + 8);
    *(undefined4 *)(lVar16 + 0x40) = 0;
    if ((*(char *)(lVar16 + 0x44) != '\0') &&
       (lVar16 = *(long *)(*(long *)(lVar16 + 0x30) + 0x80), *(int *)(lVar16 + 200) - 1U < 2)) {
      if (0x12 < *(uint *)(lVar16 + 0xc4)) goto LAB_710148056c;
      *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar16 + 0xc4) * 4 + 0x78) = 3;
    }
    lVar18 = *(long *)(lVar18 + 8);
    if (*(char *)(lVar18 + 0x44) != '\0') {
      if ((*(int *)(lVar18 + 0x40) != 0) &&
         (lVar16 = *(long *)(*(long *)(lVar18 + 0x30) + 0x80), *(int *)(lVar16 + 200) - 1U < 2)) {
        if (0x12 < *(uint *)(lVar16 + 0xc4)) {
LAB_710148056c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar16 + 0xc4) * 4 + 0x78) = 3;
      }
      *(undefined1 *)(lVar18 + 0x44) = 0;
    }
  }
  *(undefined1 *)((long)puVar22 + 0x84) = 0;
  return;
}

