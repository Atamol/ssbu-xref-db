// addr:      7102318650
// offset:    0x2318650
// name:      FUN_7102318650
// mangled:   
// signature: undefined __cdecl FUN_7102318650(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102318650(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long *********ppppppppplVar12;
  byte ****ppppbVar13;
  uint uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  long ***local_60;
  undefined4 local_54;
  
  pppplVar8 = &local_60;
  pppplVar9 = &local_60;
  pppplVar10 = &local_60;
  pppplVar11 = &local_60;
  lVar3 = FUN_710392e290(0x10,0x1b8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar3 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_000001b8;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar4 & 1) != 0) &&
         (lVar3 = FUN_710392e290(0x10,0x1b8,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         lVar3 != 0)) goto LAB_71023186d4;
    }
    lVar3 = 0;
  }
LAB_71023186d4:
  pppplVar8 = (long ****)0x14c;
  *(long *)lVar3 = lVar3;
  puVar19 = (undefined8 *)(lVar3 + 8);
  *puVar19 = 0;
  *(undefined4 *)(lVar3 + 0x174) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x178) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x180) = 0xffffffff;
  *(undefined1 *)(lVar3 + 0x184) = 0;
  memset((void *)(lVar3 + 0x28),0,0x14c);
  *(undefined4 *)(lVar3 + 0x198) = 0x1010000;
  *(long *)(lVar3 + 0x188) = param_1 + 0x50;
  *(undefined8 *)(lVar3 + 400) = 0xffffffff00000000;
  *(undefined2 *)(lVar3 + 0x19c) = 0;
  *(undefined8 *)(lVar3 + 0x1a8) = 0;
  *(undefined8 *)(lVar3 + 0x1b0) = 0;
  *(undefined8 *)(lVar3 + 0x1a0) = 0;
  FUN_7103723a90(param_1 + 0x50,&DAT_7105328758,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  *(code **)(lVar3 + 0x28) = FUN_710230c160;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(code **)(lVar3 + 0x38) = FUN_710230d4c0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(code **)(lVar3 + 0x58) = FUN_7102310570;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(code **)(lVar3 + 0x68) = FUN_71023108b0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(code **)(lVar3 + 0x88) = FUN_7102316b80;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(code **)(lVar3 + 0x98) = FUN_7102316e50;
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  *(code **)(lVar3 + 0x48) = FUN_7102310360;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(code **)(lVar3 + 0xb8) = FUN_71023172b0;
  *(undefined8 *)(lVar3 + 0xc0) = 0;
  *(code **)(lVar3 + 0x78) = FUN_7102314b00;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(code **)(lVar3 + 200) = FUN_7102317320;
  *(undefined8 *)(lVar3 + 0xd0) = 0;
  *(code **)(lVar3 + 0xa8) = FUN_7102317050;
  *(undefined8 *)(lVar3 + 0xb0) = 0;
  *(code **)(lVar3 + 0xe8) = FUN_7102317840;
  *(undefined8 *)(lVar3 + 0xf0) = 0;
  *(code **)(lVar3 + 0xd8) = FUN_7102317700;
  *(undefined8 *)(lVar3 + 0xe0) = 0;
  *(code **)(lVar3 + 0xf8) = FUN_7102317b80;
  *(undefined8 *)(lVar3 + 0x100) = 0;
  *(code **)(lVar3 + 0x108) = FUN_7102317d70;
  *(undefined8 *)(lVar3 + 0x110) = 0;
  *(code **)(lVar3 + 0x118) = FUN_7102318080;
  *(undefined8 *)(lVar3 + 0x120) = 0;
  if (DAT_710532f8f0 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    if (puVar6 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_60 = (long ***)&DAT_00000008;
        uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        pppplVar8 = pppplVar9;
        if (((uVar4 & 1) != 0) &&
           (puVar6 = (undefined8 *)
                     FUN_710392e290(0x10,8,pppplVar9,param_4,param_5,param_6,param_7,param_8),
           pppplVar8 = pppplVar9, puVar6 != (undefined8 *)0x0)) goto LAB_710231886c;
      }
      puVar6 = (undefined8 *)0x0;
    }
LAB_710231886c:
    plVar5 = (long *)FUN_710392e290(0x10,0x20,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    if (plVar5 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_60 = (long ***)&SUB_00000020;
        uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        pppplVar8 = pppplVar10;
        if (((uVar4 & 1) != 0) &&
           (plVar5 = (long *)FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,
                                            param_8), pppplVar8 = pppplVar10, plVar5 != (long *)0x0)
           ) goto LAB_71023188c8;
      }
      plVar5 = (long *)0x0;
    }
LAB_71023188c8:
    plVar5[3] = 0;
    lVar15 = FUN_710392e290(0x10,0x2f00,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    if (lVar15 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_60 = (long ***)0x2f00;
        uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar4 & 1) != 0) &&
           (lVar15 = FUN_710392e290(0x10,0x2f00,pppplVar11,param_4,param_5,param_6,param_7,param_8),
           lVar15 != 0)) goto LAB_7102318920;
      }
      lVar15 = 0;
    }
LAB_7102318920:
    plVar5[2] = lVar15 + 0x2f00;
    *plVar5 = lVar15;
    plVar5[1] = lVar15;
    *puVar6 = plVar5;
    puVar17 = *(undefined8 **)(param_2 + 0xa8);
    DAT_710532f8f0 = puVar6;
  }
  else {
    puVar17 = *(undefined8 **)(param_2 + 0xa8);
  }
  if (puVar17 != (undefined8 *)0x0) {
    if (((DAT_71053287c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053287c8), iVar2 != 0)) {
      if (((DAT_7105328150 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105328150), iVar2 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&DAT_7105324750), iVar2 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105328158 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105328150);
      }
      DAT_71053287d0 = &DAT_7105328158;
      __cxa_guard_release(&DAT_71053287c8);
    }
    for (puVar6 = (undefined8 *)(**(code **)*puVar17)(puVar17); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      if ((undefined8 **)puVar6 == &DAT_71053287d0) {
        *(undefined1 *)(lVar3 + 0x19a) = *(undefined1 *)((long)puVar17 + 0x52);
        *(undefined1 *)(lVar3 + 0x19b) = *(undefined1 *)((long)puVar17 + 0x53);
        *(undefined1 *)(lVar3 + 0x19c) = *(undefined1 *)((long)puVar17 + 0x54);
        *(undefined1 *)(lVar3 + 0x19d) = *(undefined1 *)((long)puVar17 + 0x55);
        uVar14 = *(uint *)(puVar17 + 1);
        if (uVar14 < 0x64769d67) goto LAB_7102318b04;
        if (uVar14 == 0x6d874d01) {
          iVar2 = strcmp((char *)(puVar17 + 2),"HomeRunContestScene");
        }
        else {
          if (uVar14 != 0x64769d67) goto LAB_7102318b04;
          iVar2 = strcmp((char *)(puVar17 + 2),"MeleeScene");
        }
        if (iVar2 != 0) goto LAB_7102318b04;
        *puVar19 = 0;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined8 *)(lVar3 + 0x16c) = 0;
        *(undefined8 *)(lVar3 + 0x164) = 0;
        *(undefined8 *)(lVar3 + 0x15c) = 0;
        *(undefined8 *)(lVar3 + 0x154) = 0;
        *(undefined8 *)(lVar3 + 0x14c) = 0;
        *(undefined8 *)(lVar3 + 0x144) = 0;
        *(undefined8 *)(lVar3 + 0x13c) = 0;
        *(undefined8 *)(lVar3 + 0x134) = 0;
        *(undefined8 *)(lVar3 + 0x17c) = 0xffffffff00000000;
        *(undefined1 *)(lVar3 + 0x184) = 0;
        *(undefined8 *)(lVar3 + 0x128) = 0xc00000004;
        *(undefined8 *)(lVar3 + 0x174) = 0xffffffff00000002;
        *(undefined4 *)(lVar3 + 0x130) = 0;
        goto LAB_7102318bfc;
      }
    }
    puVar6 = *(undefined8 **)(param_2 + 0xa8);
    if (puVar6 != (undefined8 *)0x0) {
      if (((DAT_7105328150 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105328150), iVar2 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&DAT_7105324750), iVar2 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105328158 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105328150);
      }
      for (puVar17 = (undefined8 *)(**(code **)*puVar6)(puVar6); puVar17 != (undefined8 *)0x0;
          puVar17 = (undefined8 *)*puVar17) {
        if ((undefined8 **)puVar17 == &DAT_7105328158) {
          uVar14 = *(uint *)(puVar6 + 1);
          if (uVar14 < 0x64769d67) break;
          if (uVar14 == 0x6d874d01) {
            iVar2 = strcmp((char *)(puVar6 + 2),"HomeRunContestScene");
          }
          else {
            if (uVar14 != 0x64769d67) break;
            iVar2 = strcmp((char *)(puVar6 + 2),"MeleeScene");
          }
          if (iVar2 == 0) {
            *puVar19 = 0;
            *(undefined8 *)(lVar3 + 0x10) = 0;
            *(undefined8 *)(lVar3 + 0x16c) = 0;
            *(undefined8 *)(lVar3 + 0x164) = 0;
            *(undefined8 *)(lVar3 + 0x15c) = 0;
            *(undefined8 *)(lVar3 + 0x154) = 0;
            *(undefined8 *)(lVar3 + 0x14c) = 0;
            *(undefined8 *)(lVar3 + 0x144) = 0;
            *(undefined8 *)(lVar3 + 0x13c) = 0;
            *(undefined8 *)(lVar3 + 0x134) = 0;
            *(undefined8 *)(lVar3 + 0x17c) = 0xffffffff00000000;
            *(undefined1 *)(lVar3 + 0x184) = 0;
            *(undefined8 *)(lVar3 + 0x128) = 0xc00000004;
            *(undefined8 *)(lVar3 + 0x174) = 0xffffffff00000002;
            *(undefined4 *)(lVar3 + 0x130) = 0;
            if (*(int *)(param_2 + 0x10) == 3) {
              if (((DAT_71053144d8 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
                FUN_7101764000();
                FUN_71000001c0();
                __cxa_guard_release(&DAT_71053144d8);
              }
              if (DAT_710530e394 == '\0') {
                *(undefined1 *)(lVar3 + 0x198) = 0;
              }
              else {
                DAT_710530e394 = '\0';
                if (((DAT_71053144d8 & 1) == 0) &&
                   (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
                  FUN_7101764000();
                  FUN_71000001c0();
                  __cxa_guard_release(&DAT_71053144d8);
                }
                DAT_71053083d8 = '\x01';
                *(undefined4 *)(lVar3 + 400) = 1;
                *puVar19 = 0;
                *(undefined8 *)(lVar3 + 0x10) = 0;
                *(undefined4 *)(lVar3 + 0x174) = 0;
                *(undefined8 *)(lVar3 + 300) = 0;
                *(undefined8 *)(lVar3 + 0x164) = 0;
                *(undefined8 *)(lVar3 + 0x16c) = 0;
                *(undefined8 *)(lVar3 + 0x154) = 0;
                *(undefined8 *)(lVar3 + 0x15c) = 0;
                *(undefined8 *)(lVar3 + 0x144) = 0;
                *(undefined8 *)(lVar3 + 0x14c) = 0;
                *(undefined8 *)(lVar3 + 0x134) = 0;
                *(undefined8 *)(lVar3 + 0x13c) = 0;
                *(undefined8 *)(lVar3 + 0x178) = 0xffffffff;
                *(undefined4 *)(lVar3 + 0x180) = 0xffffffff;
                *(undefined1 *)(lVar3 + 0x184) = 0;
                *(undefined4 *)(lVar3 + 0x128) = 1;
              }
            }
            else {
              *(undefined2 *)(lVar3 + 0x19a) = 0x101;
              *(undefined1 *)(lVar3 + 0x19c) = 1;
              *(undefined1 *)(lVar3 + 0x198) = 1;
            }
            goto LAB_7102318bfc;
          }
          break;
        }
      }
    }
  }
LAB_7102318b04:
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  cVar1 = DAT_71053050f4;
  if ((DAT_71053050f0 & 0x7f000000) == 0x7000000) {
    if (0x12 < *(uint *)(lVar3 + 0x174)) goto LAB_7102318f8c;
    *(undefined4 *)(lVar3 + (long)(int)*(uint *)(lVar3 + 0x174) * 4 + 0x128) = 3;
    if (cVar1 != '\0') goto LAB_7102318b78;
  }
  else {
    uVar14 = *(uint *)(lVar3 + 0x174);
    if (DAT_71053050f4 == '\0') {
      if (0x12 < uVar14) goto LAB_7102318f8c;
      *(undefined4 *)(lVar3 + (long)(int)uVar14 * 4 + 0x128) = 4;
      if (0x11 < *(int *)(lVar3 + 0x174)) goto LAB_7102318bfc;
      uVar14 = *(int *)(lVar3 + 0x174) + 1;
      *(uint *)(lVar3 + 0x174) = uVar14;
      if (0x12 < uVar14) goto LAB_7102318f8c;
      uVar16 = 0xc;
    }
    else {
      if (0x12 < uVar14) goto LAB_7102318f8c;
      *(undefined4 *)(lVar3 + (long)(int)uVar14 * 4 + 0x128) = 3;
LAB_7102318b78:
      if (0x11 < *(int *)(lVar3 + 0x174)) goto LAB_7102318bfc;
      uVar14 = *(int *)(lVar3 + 0x174) + 1;
      *(uint *)(lVar3 + 0x174) = uVar14;
      if (0x12 < uVar14) goto LAB_7102318f8c;
      uVar16 = 2;
    }
    *(undefined4 *)(lVar3 + (long)(int)uVar14 * 4 + 0x128) = uVar16;
  }
  if (*(int *)(lVar3 + 0x174) < 0x12) {
    uVar14 = *(int *)(lVar3 + 0x174) + 1;
    *(uint *)(lVar3 + 0x174) = uVar14;
    if (0x12 < uVar14) {
LAB_7102318f8c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar3 + (long)(int)uVar14 * 4 + 0x128) = 0;
  }
LAB_7102318bfc:
  uVar4 = *(ulong *)(param_1 + 0xe8);
  *(long *)(param_1 + 0xe8) = lVar3;
  puVar19 = DAT_710532f8f0;
  if (uVar4 != 0) {
    if (DAT_710532f8f0 != (undefined8 *)0x0) {
      puVar18 = (ulong *)*DAT_710532f8f0;
      *DAT_710532f8f0 = 0;
      if (puVar18 != (ulong *)0x0) {
        uVar7 = *puVar18;
        if (uVar7 != 0) {
          puVar18[1] = uVar7;
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40((ulong)puVar18);
      }
      FUN_710392eb40((ulong)puVar19);
      DAT_710532f8f0 = (undefined8 *)0x0;
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71053083d8 != '\0') {
      DAT_71053083d8 = '\0';
      DAT_71053083f4 = 0;
      DAT_71053083ec = 0;
      DAT_71053083e4 = 0;
      DAT_71053083dc = 0;
    }
    FUN_710392eb40(uVar4);
  }
  if (*(char *)(param_1 + 0xf0) != '\0') {
    lVar15 = *(long *)(DAT_710532f7b8 + 8);
    lVar3 = *(long *)(lVar15 + 0xa8);
    if (*(char *)(lVar3 + 0x78) == '\0') {
      *(undefined4 *)(lVar3 + 0x68) = 0;
      lVar3 = *(long *)(lVar15 + 0xa8);
    }
    ppppppppplVar12 = (long *********)(long)*(int *)(lVar3 + 0x70);
    ppppbVar13 = (byte ****)(ulong)*(uint *)(lVar3 + 0x68);
    pppplVar8 = (long ****)0x0;
    FUN_710323beb0(lVar3,(ulong *)&DAT_7104545d80,(long)ppppppppplVar12,(ulong)ppppbVar13,
                   (long ****)0x0,param_6,param_7,param_8);
    FUN_71032e3a80(*(long *)(DAT_710532f7b8 + 8),extraout_x1,ppppppppplVar12,ppppbVar13,pppplVar8,
                   param_6,param_7,param_8);
    return;
  }
  return;
}

