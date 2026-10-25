// addr:      7102dd1720
// offset:    0x2dd1720
// name:      FUN_7102dd1720
// mangled:   
// signature: undefined __cdecl FUN_7102dd1720(undefined8 param_1, long param_2, undefined8 param_3, undefined * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, long * * * param_8, long * * * param_9)


/* WARNING: Removing unreachable block (ram,0x007102dd2c88) */
/* WARNING: Removing unreachable block (ram,0x007102dd28cc) */
/* WARNING: Removing unreachable block (ram,0x007102dd2df0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102dd1720(undefined8 param_1,long param_2,undefined8 param_3,undefined **param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   long ***param_8,long ***param_9)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined5 uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  ulong uVar25;
  void *__dest;
  long *plVar26;
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
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 uVar27;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  byte bVar28;
  uint *puVar29;
  float *pfVar30;
  long lVar31;
  ulong uVar32;
  long ***ppplVar33;
  char cVar34;
  int *piVar35;
  undefined4 uVar36;
  int *piVar37;
  undefined8 *puVar38;
  int *piVar39;
  long *plVar40;
  ulong *puVar41;
  ulong uVar42;
  long *plVar43;
  ulong *puVar44;
  long lVar45;
  int *piVar46;
  void *__src;
  long ****__n;
  long lVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined4 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 local_100 [16];
  ulong local_f0 [3];
  long **local_d8;
  long *local_d0;
  long local_c8;
  undefined8 local_c0;
  long **local_b8;
  long local_b0;
  
  fVar51 = (float)param_1;
  if (*(int *)(param_2 + 0x98c) != -1) {
    if (*(char *)(param_2 + 0x973) != '\0') {
      *(int *)(*(long *)(param_2 + 0x740) + 0x2d0) = *(int *)(param_2 + 0x98c);
    }
    if ((fVar51 <= 1e-05) && (*(char *)(param_2 + 0x990) != '\0')) {
      (**(code **)(**(long **)(param_2 + 0x968) + 0x30))();
      param_3 = extraout_x1;
      if (*(char *)(param_2 + 0x973) != '\0') {
        lVar45 = *(long *)(param_2 + 0x740);
        plVar43 = *(long **)(lVar45 + 0x370);
        plVar40 = (long *)plVar43[6];
        if (plVar40 == (long *)0x0) {
          cVar34 = (char)plVar43[8];
LAB_7102dd17c8:
          if (cVar34 != '\0') goto LAB_7102dd17e0;
          uVar52 = 0;
        }
        else {
          cVar34 = (char)plVar43[8];
          if ((char)plVar40[2] == '\0') goto LAB_7102dd17c8;
LAB_7102dd17e0:
          if (cVar34 != '\0') {
            if (((plVar40 != (long *)0x0) && ((char)plVar40[2] != '\0')) &&
               (*(undefined1 *)(plVar40 + 2) = 0, (char)plVar40[10] != '\0')) {
              plVar26 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar40 + 8));
              (**(code **)(*plVar26 + 0x48))(plVar26,0);
              *(undefined1 *)(plVar40 + 10) = 0;
            }
            (**(code **)(*plVar43 + 0x30))(plVar43);
            param_3 = extraout_x1_00;
          }
          uVar52 = 1;
          *(undefined1 *)(plVar43 + 8) = 0;
        }
        plVar43 = *(long **)(lVar45 + 0x378);
        *(undefined1 *)(lVar45 + 0x2ce) = uVar52;
        plVar40 = (long *)plVar43[6];
        if (plVar40 == (long *)0x0) {
          cVar34 = (char)plVar43[8];
LAB_7102dd1858:
          if (cVar34 != '\0') goto LAB_7102dd1870;
          uVar52 = 0;
        }
        else {
          cVar34 = (char)plVar43[8];
          if ((char)plVar40[2] == '\0') goto LAB_7102dd1858;
LAB_7102dd1870:
          if (cVar34 != '\0') {
            if (((plVar40 != (long *)0x0) && ((char)plVar40[2] != '\0')) &&
               (*(undefined1 *)(plVar40 + 2) = 0, (char)plVar40[10] != '\0')) {
              plVar26 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar40 + 8));
              (**(code **)(*plVar26 + 0x48))(plVar26,0);
              *(undefined1 *)(plVar40 + 10) = 0;
            }
            (**(code **)(*plVar43 + 0x30))(plVar43);
            param_3 = extraout_x1_01;
          }
          uVar52 = 1;
          *(undefined1 *)(plVar43 + 8) = 0;
        }
        *(undefined1 *)(lVar45 + 0x2cf) = uVar52;
      }
      *(undefined2 *)(param_2 + 0x990) = 0x100;
    }
    uVar5 = *(uint *)(param_2 + 0x98c);
    if (uVar5 != 0xffffffff) {
      if (7 < uVar5) {
LAB_7102dd3e7c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar45 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + (long)(int)uVar5 * 8 +
                        0x20);
      if ((lVar45 != 0) && (*(char *)(lVar45 + 0x5920) == '\x06')) {
        if ((ulong)*(byte *)(lVar45 + 0x5918) < *(ulong *)(lVar45 + 0x4150)) {
          lVar45 = lVar45 + (ulong)*(byte *)(lVar45 + 0x5918) * 8;
          plVar40 = *(long **)(lVar45 + 0x4160);
          if ((plVar40 == (long *)0x0) ||
             (uVar25 = (**(code **)(*plVar40 + 0x518))(), (uVar25 & 1) == 0)) goto LAB_7102dd1950;
          lVar45 = *(long *)(lVar45 + 0x4160);
        }
        else {
LAB_7102dd1950:
          lVar45 = 0;
        }
        FUN_71003a9ab0(&local_c0,lVar45);
        param_3 = extraout_x1_02;
        if ((3 < *(byte *)((long)local_b8 + 0x3a)) &&
           ((iVar24 = (**(code **)(*(long *)local_b8[4][8] + 0x110))(), param_3 = extraout_x1_03,
            iVar24 == 0xb5 ||
            (*(char *)(*lib::Singleton<app::FighterManager>::instance_ + 0xbc) < '\x01')))) {
          *(undefined4 *)(param_2 + 0x98c) = 0xffffffff;
          if (*(char *)(param_2 + 0x973) != '\0') {
            *(undefined4 *)(*(long *)(param_2 + 0x740) + 0x2d0) = 0xffffffff;
          }
          if (*(char *)(param_2 + 0x991) != '\0') {
            if (*(char *)(param_2 + 0x973) != '\0') {
              lVar45 = *(long *)(param_2 + 0x740);
              if (*(char *)(lVar45 + 0x2ce) != '\0') {
                FUN_710313ef20(*(long **)(lVar45 + 0x370));
              }
              if (*(char *)(lVar45 + 0x2cf) != '\0') {
                FUN_710313ef20(*(long **)(lVar45 + 0x378));
              }
            }
            (**(code **)(**(long **)(param_2 + 0x968) + 0x28))();
            param_3 = extraout_x1_04;
          }
        }
      }
    }
  }
  FUN_71025dd540(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  uVar27 = extraout_x1_05;
  if (*(char *)(param_2 + 0x976) == '\0') goto LAB_7102dd1f5c;
  iVar24 = *(int *)(param_2 + 0x978);
  if (iVar24 == 2) {
    switch(*(undefined4 *)(param_2 + 0x980)) {
    case 0:
      puVar29 = *(uint **)(param_2 + 0x340);
      uVar5 = *puVar29;
      fVar49 = *(float *)(param_2 + 0x934);
      fVar48 = *(float *)(param_2 + 0x938);
      *puVar29 = puVar29[1];
      uVar2 = puVar29[3];
      uVar5 = uVar5 ^ uVar5 << 0xb;
      uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      puVar29[1] = puVar29[2];
      puVar29[2] = uVar2;
      puVar29[3] = uVar5;
      *(float *)(param_2 + 0x9a4) = fVar49 + (fVar48 - fVar49) * (float)uVar5 * 2.3283064e-10;
LAB_7102dd1e64:
      uVar36 = 1;
LAB_7102dd1e68:
      *(undefined4 *)(param_2 + 0x980) = uVar36;
      break;
    case 1:
      if (*(float *)(param_2 + 0x9a4) <= 0.0) {
        *(undefined4 *)(param_2 + 0x9a0) = 1;
        uVar36 = 2;
        goto LAB_7102dd1e68;
      }
      break;
    case 2:
      if (*(int *)(param_2 + 0x9a0) == 0) {
        *(undefined4 *)(param_2 + 0x9a0) = 6;
        *(undefined4 *)(param_2 + 0x980) = 3;
        puVar29 = *(uint **)(param_2 + 0x340);
        fVar49 = *(float *)(param_2 + 0x934);
        uVar5 = *puVar29;
        fVar48 = *(float *)(param_2 + 0x938);
        *puVar29 = puVar29[1];
        uVar2 = puVar29[3];
        uVar5 = uVar5 ^ uVar5 << 0xb;
        uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
        puVar29[1] = puVar29[2];
        puVar29[2] = uVar2;
        puVar29[3] = uVar5;
        *(float *)(param_2 + 0x9a4) = fVar49 + (fVar48 - fVar49) * (float)uVar5 * 2.3283064e-10;
      }
      break;
    case 3:
      if (*(float *)(param_2 + 0x9a4) <= 0.0) goto LAB_7102dd1e64;
    }
    switch(*(undefined4 *)(param_2 + 0x984)) {
    case 0:
      puVar29 = *(uint **)(param_2 + 0x340);
      uVar5 = *puVar29;
      fVar49 = *(float *)(param_2 + 0x92c);
      fVar48 = *(float *)(param_2 + 0x930);
      *puVar29 = puVar29[1];
      uVar2 = puVar29[3];
      uVar5 = uVar5 ^ uVar5 << 0xb;
      uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      puVar29[1] = puVar29[2];
      puVar29[2] = uVar2;
      puVar29[3] = uVar5;
      *(float *)(param_2 + 0x9d4) = fVar49 + (fVar48 - fVar49) * (float)uVar5 * 2.3283064e-10;
LAB_7102dd1f30:
      uVar36 = 1;
LAB_7102dd1f34:
      *(undefined4 *)(param_2 + 0x984) = uVar36;
      break;
    case 1:
      if (*(float *)(param_2 + 0x9d4) <= 0.0) {
        *(undefined4 *)(param_2 + 0x9d0) = 1;
        uVar36 = 2;
        goto LAB_7102dd1f34;
      }
      break;
    case 2:
      plVar40 = *(long **)(param_2 + 0x770);
      do {
        if (plVar40 == *(long **)(param_2 + 0x778)) goto switchD_7102dd1e88_default;
        lVar45 = *plVar40;
        plVar40 = plVar40 + 1;
      } while (*(int *)(lVar45 + 0x68) != 0);
      *(undefined4 *)(param_2 + 0x9d0) = 2;
      *(undefined4 *)(param_2 + 0x984) = 3;
      puVar29 = *(uint **)(param_2 + 0x340);
      fVar49 = *(float *)(param_2 + 0x92c);
      uVar5 = *puVar29;
      fVar48 = *(float *)(param_2 + 0x930);
      *puVar29 = puVar29[1];
      uVar2 = puVar29[3];
      uVar5 = uVar5 ^ uVar5 << 0xb;
      uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      puVar29[1] = puVar29[2];
      puVar29[2] = uVar2;
      puVar29[3] = uVar5;
      *(float *)(param_2 + 0x9d4) = fVar49 + (fVar48 - fVar49) * (float)uVar5 * 2.3283064e-10;
      break;
    case 3:
      if (*(float *)(param_2 + 0x9d4) <= 0.0) goto LAB_7102dd1f30;
    }
switchD_7102dd1e88_default:
    if ((*(int *)(param_2 + 0x980) == 3) && (*(int *)(param_2 + 0x984) == 3)) {
      *(undefined4 *)(param_2 + 0x978) = 0;
      *(undefined8 *)(param_2 + 0x980) = 0x400000004;
    }
LAB_7102dd1f5c:
    cVar34 = *(char *)(param_2 + 0x970);
  }
  else {
    if (iVar24 != 1) {
      if (iVar24 == 0) {
        puVar29 = *(uint **)(param_2 + 0x340);
        uVar5 = *puVar29;
        *puVar29 = puVar29[1];
        uVar2 = puVar29[3];
        uVar5 = uVar5 ^ uVar5 << 0xb;
        uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
        puVar29[1] = puVar29[2];
        puVar29[2] = uVar2;
        puVar29[3] = uVar5;
        if ((float)uVar5 * 100.0 * 2.3283064e-10 + 0.0 <= *(float *)(param_2 + 0x988)) {
          fVar48 = *(float *)(param_2 + 0x944);
          *(undefined8 *)(param_2 + 0x978) = 1;
        }
        else {
          fVar48 = *(float *)(param_2 + 0x988) + *(float *)(param_2 + 0x948);
          *(undefined4 *)(param_2 + 0x978) = 2;
          *(undefined8 *)(param_2 + 0x980) = 0;
        }
        *(float *)(param_2 + 0x988) = fVar48;
        cVar34 = *(char *)(param_2 + 0x970);
        goto joined_r0x007102dd1c54;
      }
      goto LAB_7102dd1f5c;
    }
    iVar24 = *(int *)(param_2 + 0x97c);
    if (iVar24 == 3) {
      if (*(int *)(param_2 + 0x9c4) == 0) {
        lVar45 = *(long *)(param_2 + 0x740);
        *(undefined4 *)(param_2 + 0x9c4) = 5;
        *(undefined8 *)(param_2 + 0x978) = 0x400000000;
        if (lVar45 != 0) {
          lVar47 = *(long *)(lVar45 + 0x10);
          if (lVar47 != 0) {
            *(undefined1 *)(lVar47 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar47 + 0x108),extraout_x1_05,(long ****)param_4,
                           (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
            lVar47 = *(long *)(lVar45 + 0x10);
            if (lVar47 != 0) {
              *(byte *)(lVar47 + 0x118) = *(byte *)(lVar47 + 0x118) | 1;
            }
            lVar47 = *(long *)(lVar45 + 0x20);
            *(undefined1 *)(lVar47 + 0x130) = *(undefined1 *)(lVar47 + 299);
            *(undefined1 *)(lVar47 + 0x128) = 0;
            *(undefined4 *)(lVar47 + 299) = 0;
            uVar62 = *(undefined8 *)(lVar47 + 0x100);
            *(undefined8 *)(lVar47 + 0x100) = *(undefined8 *)(lVar47 + 0x88);
            *(undefined8 *)(lVar47 + 0x108) = *(undefined8 *)(lVar47 + 0x90);
            uVar27 = *(undefined8 *)(lVar47 + 0x98);
            *(undefined8 *)(lVar47 + 0x88) = uVar62;
            *(undefined8 *)(lVar47 + 0x90) = uVar62;
            *(undefined8 *)(lVar47 + 0x98) = *(undefined8 *)(lVar47 + 0x110);
            *(undefined8 *)(lVar47 + 0xd8) = *(undefined8 *)(lVar47 + 0xd0);
            *(undefined8 *)(lVar47 + 0xc0) = *(undefined8 *)(lVar47 + 0xb8);
            *(undefined8 *)(lVar47 + 0xf0) = *(undefined8 *)(lVar47 + 0xe8);
            *(undefined8 *)(lVar47 + 0x110) = uVar27;
            *(undefined1 *)(lVar47 + 0x12f) = 0;
            *(undefined8 *)(lVar47 + 0xa8) = *(undefined8 *)(lVar47 + 0xa0);
            uVar27 = extraout_x1_11;
            if (*(long *)(lVar47 + 8) != 0) {
              *(undefined8 *)(*(long *)(lVar47 + 8) + 0xd8) = 0;
              lVar47 = *(long *)(lVar47 + 8);
              if (*(char *)(lVar47 + 0xe0) != '\0') {
                plVar40 = *(long **)(lVar47 + 0x80);
                *(undefined2 *)(lVar47 + 0xe0) = 0;
                *(undefined2 *)(lVar47 + 0xe7) = 0;
                for (; (long *)(lVar47 + 0x80) != plVar40; plVar40 = (long *)*plVar40) {
                  *(undefined1 *)(plVar40 + 0x20) = 0;
                  if (*(uint *)((long)plVar40 + 0xfc) != 0) {
                    plVar43 = (long *)plVar40[0x1e];
                    *(undefined1 *)(*plVar43 + (ulong)*(uint *)((long)plVar40 + 0xfc) * 0x18 + 0x10)
                         = 0;
                    param_4 = (undefined **)0x0;
                    (**(code **)(*(long *)plVar43[3] + 0x18))();
                  }
                  *(undefined4 *)(plVar40 + 0x10) = 0;
                  plVar40[0xe] = 0;
                  plVar40[0xf] = 0;
                  plVar40[0xc] = 0;
                  plVar40[0xd] = 0;
                }
                for (plVar40 = *(long **)(lVar47 + 0x68); (long *)(lVar47 + 0x68) != plVar40;
                    plVar40 = (long *)*plVar40) {
                  *(undefined1 *)(plVar40 + 10) = 0;
                }
                FUN_7100525010(DAT_71052b9298,lVar47);
                uVar27 = extraout_x1_12;
              }
            }
          }
          plVar43 = *(long **)(lVar45 + 0x370);
          *(undefined1 *)(lVar45 + 0x2cd) = 0;
          plVar40 = (long *)plVar43[6];
          if (plVar40 == (long *)0x0) {
            cVar34 = (char)plVar43[8];
LAB_7102dd380c:
            if (cVar34 != '\0') goto LAB_7102dd3810;
          }
          else {
            cVar34 = (char)plVar43[8];
            if ((char)plVar40[2] == '\0') goto LAB_7102dd380c;
LAB_7102dd3810:
            if (cVar34 != '\0') {
              if (((plVar40 != (long *)0x0) && ((char)plVar40[2] != '\0')) &&
                 (*(undefined1 *)(plVar40 + 2) = 0, (char)plVar40[10] != '\0')) {
                plVar26 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar40 + 8));
                (**(code **)(*plVar26 + 0x48))(plVar26,0);
                *(undefined1 *)(plVar40 + 10) = 0;
              }
              (**(code **)(*plVar43 + 0x30))(plVar43);
              uVar27 = extraout_x1_29;
            }
            *(undefined1 *)(plVar43 + 8) = 0;
          }
          plVar43 = *(long **)(lVar45 + 0x378);
          plVar40 = (long *)plVar43[6];
          if (plVar40 == (long *)0x0) {
            cVar34 = (char)plVar43[8];
LAB_7102dd3890:
            if (cVar34 == '\0') goto LAB_7102dd1f5c;
          }
          else {
            cVar34 = (char)plVar43[8];
            if ((char)plVar40[2] == '\0') goto LAB_7102dd3890;
          }
          if (cVar34 != '\0') {
            if (((plVar40 != (long *)0x0) && ((char)plVar40[2] != '\0')) &&
               (*(undefined1 *)(plVar40 + 2) = 0, (char)plVar40[10] != '\0')) {
              plVar26 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar40 + 8));
              (**(code **)(*plVar26 + 0x48))(plVar26,0);
              *(undefined1 *)(plVar40 + 10) = 0;
            }
            (**(code **)(*plVar43 + 0x30))(plVar43);
            uVar27 = extraout_x1_30;
          }
          *(undefined1 *)(plVar43 + 8) = 0;
          cVar34 = *(char *)(param_2 + 0x970);
          goto joined_r0x007102dd1c54;
        }
      }
      goto LAB_7102dd1f5c;
    }
    if (iVar24 == 1) {
      if (0.0 < *(float *)(param_2 + 0x9c8)) goto LAB_7102dd1f5c;
      lVar45 = *(long *)(param_2 + 0x740);
      if (lVar45 != 0) {
        lVar47 = *(long *)(lVar45 + 0x10);
        if (lVar47 != 0) {
          *(undefined1 *)(lVar47 + 0x110) = 1;
          FUN_71025e9d50((long *)(lVar47 + 0x108),extraout_x1_05,(long ****)param_4,
                         (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
          lVar47 = *(long *)(lVar45 + 0x10);
          if (lVar47 != 0) {
            *(byte *)(lVar47 + 0x118) = *(byte *)(lVar47 + 0x118) & 0xfe;
          }
          lVar47 = *(long *)(lVar45 + 0x20);
          *(undefined1 *)(lVar47 + 0x128) = 1;
          uVar27 = extraout_x1_09;
          if (*(long *)(lVar47 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar47 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar47 + 8),0);
            uVar27 = extraout_x1_10;
          }
        }
        *(undefined1 *)(lVar45 + 0x2cd) = 1;
        *(undefined4 *)(lVar45 + 0x364) = 0;
      }
      *(undefined4 *)(param_2 + 0x9c4) = 1;
      *(undefined4 *)(param_2 + 0x97c) = 3;
      cVar34 = *(char *)(param_2 + 0x970);
    }
    else {
      if (iVar24 != 0) goto LAB_7102dd1f5c;
      puVar29 = *(uint **)(param_2 + 0x340);
      uVar5 = *puVar29;
      fVar49 = *(float *)(param_2 + 0x93c);
      fVar48 = *(float *)(param_2 + 0x940);
      *puVar29 = puVar29[1];
      uVar2 = puVar29[3];
      uVar5 = uVar5 ^ uVar5 << 0xb;
      uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      puVar29[1] = puVar29[2];
      puVar29[2] = uVar2;
      puVar29[3] = uVar5;
      *(undefined4 *)(param_2 + 0x97c) = 1;
      *(float *)(param_2 + 0x9c8) = fVar49 + (fVar48 - fVar49) * (float)uVar5 * 2.3283064e-10;
      cVar34 = *(char *)(param_2 + 0x970);
    }
  }
joined_r0x007102dd1c54:
  if (cVar34 != '\0') {
    if (*(long *)(param_2 + 0x750) != 0) {
      FUN_7102dd7b20(fVar51,*(long *)(param_2 + 0x750),uVar27,param_4,(byte ****)param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      uVar27 = extraout_x1_06;
    }
    if (*(long *)(param_2 + 0x758) != 0) {
      FUN_7102dd7b20(fVar51,*(long *)(param_2 + 0x758),uVar27,param_4,(byte ****)param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      uVar27 = extraout_x1_07;
    }
    if (*(long *)(param_2 + 0x760) != 0) {
      FUN_7102dd7b20(fVar51,*(long *)(param_2 + 0x760),uVar27,param_4,(byte ****)param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      uVar27 = extraout_x1_08;
    }
  }
  if (*(char *)(param_2 + 0x972) == '\0' && *(char *)(param_2 + 0x971) == '\0')
  goto switchD_7102dd2448_default;
  if (*(char *)(param_2 + 0x971) == '\0') {
    fVar48 = *(float *)(param_2 + 0x9bc) - fVar51;
    fVar63 = *(float *)(param_2 + 0x9b8) - fVar51;
    fVar49 = fVar63;
    if (fVar63 <= 0.0) {
      fVar49 = 0.0;
    }
    fVar50 = fVar48;
    if (fVar48 <= 0.0) {
      fVar50 = 0.0;
    }
    *(float *)(param_2 + 0x9b8) = fVar49;
    *(float *)(param_2 + 0x9bc) = fVar50;
    switch(*(undefined4 *)(param_2 + 0x9b4)) {
    case 0:
      if (fVar63 <= 0.0) {
        *(undefined4 *)(*(long *)(param_2 + 0x7a8) + 0x10) = 2;
        puVar29 = *(uint **)(param_2 + 0x340);
        if (*(char *)(param_2 + 0x9c0) == '\0') {
          uVar5 = *puVar29;
          fVar49 = *(float *)(param_2 + 0x89c);
          fVar48 = *(float *)(param_2 + 0x8a0);
          *puVar29 = puVar29[1];
          uVar5 = uVar5 ^ uVar5 << 0xb;
          uVar2 = puVar29[3];
          fVar48 = fVar48 - fVar49;
          uVar52 = SUB41(fVar48,0);
          uVar53 = (undefined1)((uint)fVar48 >> 8);
          uVar54 = (undefined1)((uint)fVar48 >> 0x10);
          uVar55 = (undefined1)((uint)fVar48 >> 0x18);
          uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
          puVar29[1] = puVar29[2];
          puVar29[2] = uVar2;
          puVar29[3] = uVar5;
        }
        else {
          uVar5 = *puVar29;
          fVar49 = *(float *)(param_2 + 0x894);
          fVar48 = *(float *)(param_2 + 0x898);
          *puVar29 = puVar29[1];
          uVar5 = uVar5 ^ uVar5 << 0xb;
          uVar2 = puVar29[3];
          fVar48 = fVar48 - fVar49;
          uVar52 = SUB41(fVar48,0);
          uVar53 = (undefined1)((uint)fVar48 >> 8);
          uVar54 = (undefined1)((uint)fVar48 >> 0x10);
          uVar55 = (undefined1)((uint)fVar48 >> 0x18);
          uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
          puVar29[1] = puVar29[2];
          puVar29[2] = uVar2;
          puVar29[3] = uVar5;
          *(undefined1 *)(param_2 + 0x9c0) = 0;
        }
        *(float *)(param_2 + 0x9b8) =
             fVar49 + (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) *
                      (float)uVar5 * 2.3283064e-10;
        fVar50 = *(float *)(param_2 + 0x9bc);
        *(undefined4 *)(param_2 + 0x9b4) = 1;
      }
      if ((fVar50 <= 1e-05) && (*(char *)(param_2 + 0x9c1) != '\0')) {
        if (*(int *)(*(long *)(param_2 + 0x768) + 0x28) - 1U < 3) {
          *(undefined1 *)(*(long *)(param_2 + 0x768) + 0x20) = 1;
        }
        *(undefined1 *)(param_2 + 0x9c1) = 0;
      }
      break;
    case 1:
      if (fVar63 <= 0.0) {
        puVar29 = *(uint **)(param_2 + 0x340);
        uVar5 = *puVar29;
        *puVar29 = puVar29[1];
        uVar2 = puVar29[3];
        uVar5 = uVar5 ^ uVar5 << 0xb;
        uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
        puVar29[1] = puVar29[2];
        puVar29[2] = uVar2;
        puVar29[3] = uVar5;
        if ((float)uVar5 * 2.3283064e-10 < *(float *)(param_2 + 0x8a4)) {
          uVar36 = 2;
          goto LAB_7102dd2310;
        }
        puVar29 = *(uint **)(param_2 + 0x340);
        uVar5 = *puVar29;
        fVar48 = *(float *)(param_2 + 0x89c);
        fVar49 = *(float *)(param_2 + 0x8a0);
        *puVar29 = puVar29[1];
        uVar2 = puVar29[3];
        uVar5 = uVar5 ^ uVar5 << 0xb;
        uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
        puVar29[1] = puVar29[2];
        puVar29[2] = uVar2;
        puVar29[3] = uVar5;
        *(float *)(param_2 + 0x9b8) = fVar48 + (fVar49 - fVar48) * (float)uVar5 * 2.3283064e-10;
        *(undefined4 *)(param_2 + 0x9b4) = 0;
      }
      break;
    case 2:
      fVar48 = (*(float **)(param_2 + 0x748))[1];
      if ((fVar48 <= 1e-05) || (fVar48 * 0.85 <= **(float **)(param_2 + 0x748))) {
        *(undefined4 *)(*(long *)(param_2 + 0x7a8) + 0x10) = 3;
        lVar45 = *(long *)(param_2 + 0x748);
        if (*(int *)(lVar45 + 0xc) - 1U < 3) {
          *(undefined1 *)(lVar45 + 8) = 1;
        }
        else if (*(int *)(lVar45 + 0xc) == 0) {
          *(undefined4 *)(lVar45 + 0xc) = 4;
        }
        *(float *)(param_2 + 0x9b8) = *(float *)(param_2 + 0x8bc);
        FUN_71025f74f0(*(float *)(param_2 + 0x8bc),*(long *)(*(long *)(param_2 + 0x318) + 0x10),
                       (byte *)"light01");
        FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara_rain",1,param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        param_4 = (undefined **)0x1;
        FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage_rain",1,param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        *(undefined4 *)(param_2 + 0x9bc) = *(undefined4 *)(param_2 + 0x8a8);
        *(undefined1 *)(param_2 + 0x9c1) = 0;
        uVar27 = extraout_x1_14;
        goto LAB_7102dd22e8;
      }
      break;
    case 3:
      if (fVar63 <= 0.0) {
        *(undefined4 *)(*(long *)(param_2 + 0x7a8) + 0x10) = 0;
        puVar29 = *(uint **)(param_2 + 0x340);
        uVar5 = *puVar29;
        fVar49 = *(float *)(param_2 + 0x8b4);
        fVar48 = *(float *)(param_2 + 0x8b8);
        *puVar29 = puVar29[1];
        uVar2 = puVar29[3];
        uVar5 = uVar5 ^ uVar5 << 0xb;
        uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
        puVar29[1] = puVar29[2];
        puVar29[2] = uVar2;
        puVar29[3] = uVar5;
        *(undefined4 *)(param_2 + 0x9b4) = 4;
        *(float *)(param_2 + 0x9b8) = fVar49 + (fVar48 - fVar49) * (float)uVar5 * 2.3283064e-10;
      }
      break;
    case 4:
      if (fVar63 <= 0.0) {
        *(undefined4 *)(param_2 + 0x9b4) = 5;
      }
      if ((fVar48 <= 0.0) && (*(char *)(param_2 + 0x9c1) == '\0')) goto LAB_7102dd1fa0;
      break;
    case 5:
      fVar48 = (*(float **)(param_2 + 0x748))[1];
      if ((fVar48 <= 1e-05) || (fVar48 * 0.85 <= **(float **)(param_2 + 0x748))) {
        *(undefined4 *)(*(long *)(param_2 + 0x7a8) + 0x10) = 1;
        lVar45 = *(long *)(param_2 + 0x748);
        if (*(int *)(lVar45 + 0xc) - 4U < 3) {
          *(undefined1 *)(lVar45 + 8) = 1;
        }
        else if (*(int *)(lVar45 + 0xc) == 0) {
          *(undefined4 *)(lVar45 + 0xc) = 1;
        }
        *(float *)(param_2 + 0x9b8) = *(float *)(param_2 + 0x8bc);
        FUN_71025f74f0(*(float *)(param_2 + 0x8bc),*(long *)(*(long *)(param_2 + 0x318) + 0x10),
                       (byte *)"light00");
        FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara_sunny",1,param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        param_4 = (undefined **)0x1;
        FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage_sunny",1,param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        *(float *)(param_2 + 0x9bc) = *(float *)(param_2 + 0x9b8) * 0.0;
        uVar27 = extraout_x1_27;
        if ((*(char *)(param_2 + 0x9c0) == '\0') &&
           (plVar40 = *(long **)(**(long **)(param_2 + 0x338) + 8), plVar40 != (long *)0x0)) {
          param_4 = (undefined **)&DAT_ffffffff;
          (**(code **)(*plVar40 + 0x58))(plVar40,0x12);
          uVar27 = extraout_x1_28;
        }
        *(undefined4 *)(param_2 + 0x9b4) = 0;
      }
    }
  }
  else if (*(int *)(param_2 + 0x9b4) != 4) {
    if (*(int *)(param_2 + 0x9b4) == 3) {
      *(undefined4 *)(*(long *)(param_2 + 0x7a8) + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x9b4) = 4;
LAB_7102dd1fa0:
      uVar5 = *(uint *)(*(long *)(param_2 + 0x768) + 0x28);
      if ((uVar5 < 6) && ((1 << (ulong)(uVar5 & 0x1f) & 0x31U) != 0)) {
        *(undefined4 *)(*(long *)(param_2 + 0x768) + 0x28) = 1;
      }
      *(undefined1 *)(param_2 + 0x9c1) = 1;
    }
    else {
      *(undefined4 *)(*(long *)(param_2 + 0x7a8) + 0x10) = 3;
      lVar45 = *(long *)(param_2 + 0x748);
      if (*(int *)(lVar45 + 0xc) - 1U < 3) {
        *(undefined1 *)(lVar45 + 8) = 1;
      }
      else if (*(int *)(lVar45 + 0xc) == 0) {
        *(undefined4 *)(lVar45 + 0xc) = 4;
      }
      FUN_71025f74f0(*(float *)(param_2 + 0x9b8),*(long *)(*(long *)(param_2 + 0x318) + 0x10),
                     (byte *)"light01");
      FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara_rain",1,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      param_4 = (undefined **)0x1;
      FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage_rain",1,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      uVar27 = extraout_x1_13;
LAB_7102dd22e8:
      plVar40 = *(long **)(**(long **)(param_2 + 0x338) + 8);
      if (plVar40 != (long *)0x0) {
        param_4 = (undefined **)&DAT_ffffffff;
        (**(code **)(*plVar40 + 0x58))(plVar40,0x11);
        uVar27 = extraout_x1_15;
      }
      uVar36 = 3;
LAB_7102dd2310:
      *(undefined4 *)(param_2 + 0x9b4) = uVar36;
    }
  }
  pfVar30 = *(float **)(param_2 + 0x748);
  fVar48 = pfVar30[4] - fVar51;
  pfVar30[4] = fVar48;
  switch(pfVar30[3]) {
  case 1.4013e-45:
    uVar25 = 2;
    goto LAB_7102dd23ac;
  case 2.8026e-45:
    if (fVar48 <= 0.0) {
      if (*(char *)(pfVar30 + 2) != '\0') {
        pfVar30[1] = 0.0;
        fVar48 = 5.60519e-45;
        goto LAB_7102dd23d8;
      }
      pfVar30[0] = 0.0;
      pfVar30[1] = 540.0;
      uVar25 = 3;
LAB_7102dd23fc:
      *(ulong *)(pfVar30 + 3) = uVar25 | 0x4407000000000000;
    }
    break;
  case 4.2039e-45:
    if ((*(char *)(pfVar30 + 2) != '\0') && (*pfVar30 <= pfVar30[1])) {
      fVar48 = 5.60519e-45;
LAB_7102dd23d8:
      pfVar30[3] = fVar48;
    }
    break;
  case 5.60519e-45:
    uVar25 = 5;
LAB_7102dd23ac:
    pfVar30[0] = 0.0;
    pfVar30[1] = 0.0;
    *(undefined1 *)(pfVar30 + 2) = 0;
    *(ulong *)(pfVar30 + 3) = uVar25 | 0x4407000000000000;
    break;
  case 7.00649e-45:
    if (fVar48 <= 0.0) {
      if (*(char *)(pfVar30 + 2) == '\0') {
        pfVar30[0] = 0.0;
        pfVar30[1] = 540.0;
        uVar25 = 6;
        goto LAB_7102dd23fc;
      }
      pfVar30[1] = 0.0;
LAB_7102dd23d4:
      fVar48 = 1.4013e-45;
      goto LAB_7102dd23d8;
    }
    break;
  case 8.40779e-45:
    if ((*(char *)(pfVar30 + 2) != '\0') && (*pfVar30 <= pfVar30[1])) goto LAB_7102dd23d4;
  }
  fVar48 = *pfVar30 + fVar51;
  if (540.0 < *pfVar30 + fVar51) {
    fVar48 = 540.0;
  }
  *pfVar30 = fVar48;
  FUN_7102dda740(*(long *)(param_2 + 0x768),uVar27,(long ****)param_4,(byte ****)param_5,
                 (long ****)param_6,param_7,param_8,param_9);
  lVar45 = *(long *)(param_2 + 0x7a8);
  uVar27 = extraout_x1_16;
  switch(*(undefined4 *)(lVar45 + 0x14)) {
  case 0:
    *(undefined4 *)(lVar45 + 0x14) = 1;
    *(undefined1 *)(lVar45 + 0x18) = 0;
    cVar34 = *(char *)(param_2 + 0x973);
    goto joined_r0x007102dd251c;
  case 1:
    if (*(int *)(lVar45 + 0x10) - 1U < 2) break;
    uVar36 = 3;
LAB_7102dd2514:
    *(undefined4 *)(lVar45 + 0x14) = uVar36;
    cVar34 = *(char *)(param_2 + 0x973);
joined_r0x007102dd251c:
    if (cVar34 != '\0') goto LAB_7102dd2628;
    goto switchD_7102dd2658_caseD_5;
  case 2:
    *(undefined4 *)(lVar45 + 0x14) = 1;
    lVar45 = *(long *)(lVar45 + 0x30);
    if ((lVar45 == 0) || (*(char *)(lVar45 + 0x35) == '\0')) break;
    uVar5 = *(uint *)(lVar45 + 0x3c);
    lVar45 = *lib::Singleton<lib::EffectManager>::instance_;
    std::mutex::lock();
    if ((0 < (int)uVar5) &&
       ((lVar45 = lVar45 + (ulong)(uVar5 >> 0x18) * 0x300, lVar45 != 0 &&
        (*(uint *)(lVar45 + 4) == uVar5)))) {
      param_4 = (undefined **)0x0;
      param_5 = (undefined1 (*) [16])0x0;
      FUN_71035707d0(lVar45,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
    }
    std::mutex::unlock();
    cVar34 = *(char *)(param_2 + 0x973);
    uVar27 = extraout_x1_17;
    goto joined_r0x007102dd24f8;
  case 3:
    *(undefined1 *)(lVar45 + 0x18) = 1;
    *(undefined4 *)(lVar45 + 0x14) = 4;
    param_4 = (undefined **)0x10ab7d0575;
    param_5 = (undefined1 (*) [16])0x8e7b7e985;
    FUN_71025efaa0((long ***)&local_c0,(long *)(*(long *)(*(long *)(lVar45 + 8) + 800) + 0x48),
                   0x10ab7d0575,(byte ****)0x8e7b7e985,(long ****)param_6,param_7,param_8,param_9);
    plVar40 = (long *)(lVar45 + 0x20);
    if ((plVar40 != &local_c0) && (lVar47 = *(long *)(lVar45 + 0x30), lVar47 != local_b0)) {
      if (local_b0 == 0) {
        if (lVar47 != 0) {
          lVar31 = *(long *)(lVar45 + 0x20);
          plVar43 = *(long **)(lVar45 + 0x28);
          *plVar43 = lVar31;
          *(long **)(lVar31 + 8) = plVar43;
          *(long *)(lVar47 + 0x10) = *(long *)(lVar47 + 0x10) + -1;
          *(undefined8 *)(lVar45 + 0x28) = 0;
          *(undefined8 *)(lVar45 + 0x30) = 0;
          *plVar40 = 0;
        }
      }
      else {
        if (lVar47 != 0) {
          lVar31 = *plVar40;
          plVar43 = *(long **)(lVar45 + 0x28);
          *plVar43 = lVar31;
          *(long **)(lVar31 + 8) = plVar43;
          *(long *)(lVar47 + 0x10) = *(long *)(lVar47 + 0x10) + -1;
          *(undefined8 *)(lVar45 + 0x28) = 0;
          *(undefined8 *)(lVar45 + 0x30) = 0;
          *plVar40 = 0;
        }
        puVar38 = *(undefined8 **)(local_b0 + 0x20);
        *(long *)(lVar45 + 0x20) = local_b0 + 0x18;
        *(undefined8 **)(lVar45 + 0x28) = puVar38;
        *(long **)(local_b0 + 0x20) = plVar40;
        *puVar38 = plVar40;
        *(long *)(local_b0 + 0x10) = *(long *)(local_b0 + 0x10) + 1;
        *(long *)(lVar45 + 0x30) = local_b0;
      }
    }
    uVar27 = extraout_x1_18;
    if (local_b0 != 0) {
      *local_b8 = (long *)local_c0;
      local_c0[1] = local_b8;
      *(long *)(local_b0 + 0x10) = *(long *)(local_b0 + 0x10) + -1;
      local_b8 = (long **)0x0;
      local_b0 = 0;
      local_c0 = (long ***)0x0;
    }
    break;
  case 4:
    if ((*(int *)(lVar45 + 0x10) != 0) && (*(int *)(lVar45 + 0x10) != 3)) {
      uVar36 = 2;
      goto LAB_7102dd2514;
    }
  }
switchD_7102dd2448_default:
  cVar34 = *(char *)(param_2 + 0x973);
joined_r0x007102dd24f8:
  if (cVar34 == '\0') goto switchD_7102dd2658_caseD_5;
LAB_7102dd2628:
  fVar48 = *(float *)(param_2 + 0x9c8) - fVar51;
  *(float *)(param_2 + 0x9c8) = fVar48;
  switch(*(undefined4 *)(param_2 + 0x9c4)) {
  case 0:
    puVar29 = *(uint **)(param_2 + 0x340);
    if (*(char *)(param_2 + 0x9cc) == '\0') {
      uVar5 = *puVar29;
      fVar49 = *(float *)(param_2 + 0x848);
      fVar48 = *(float *)(param_2 + 0x84c);
      *puVar29 = puVar29[1];
      uVar5 = uVar5 ^ uVar5 << 0xb;
      uVar2 = puVar29[3];
      fVar48 = fVar48 - fVar49;
      uVar52 = SUB41(fVar48,0);
      uVar53 = (undefined1)((uint)fVar48 >> 8);
      uVar54 = (undefined1)((uint)fVar48 >> 0x10);
      uVar55 = (undefined1)((uint)fVar48 >> 0x18);
      uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      puVar29[1] = puVar29[2];
      puVar29[2] = uVar2;
      puVar29[3] = uVar5;
    }
    else {
      uVar5 = *puVar29;
      fVar49 = *(float *)(param_2 + 0x840);
      fVar48 = *(float *)(param_2 + 0x844);
      *puVar29 = puVar29[1];
      uVar5 = uVar5 ^ uVar5 << 0xb;
      uVar2 = puVar29[3];
      fVar48 = fVar48 - fVar49;
      uVar52 = SUB41(fVar48,0);
      uVar53 = (undefined1)((uint)fVar48 >> 8);
      uVar54 = (undefined1)((uint)fVar48 >> 0x10);
      uVar55 = (undefined1)((uint)fVar48 >> 0x18);
      uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      puVar29[1] = puVar29[2];
      puVar29[2] = uVar2;
      puVar29[3] = uVar5;
      *(undefined1 *)(param_2 + 0x9cc) = 0;
    }
    *(float *)(param_2 + 0x9c8) =
         fVar49 + (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) * (float)uVar5 *
                  2.3283064e-10;
    uVar36 = 1;
LAB_7102dd27e4:
    *(undefined4 *)(param_2 + 0x9c4) = uVar36;
    break;
  case 1:
    if ((fVar48 <= 0.0) &&
       (uVar25 = (**(code **)(**(long **)(param_2 + 0x740) + 0x20))(), (uVar25 & 1) != 0)) {
      puVar29 = *(uint **)(param_2 + 0x340);
      uVar5 = *puVar29;
      fVar49 = *(float *)(param_2 + 0x850);
      fVar48 = *(float *)(param_2 + 0x854);
      *puVar29 = puVar29[1];
      uVar2 = puVar29[3];
      uVar5 = uVar5 ^ uVar5 << 0xb;
      uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      puVar29[1] = puVar29[2];
      puVar29[2] = uVar2;
      puVar29[3] = uVar5;
      *(undefined4 *)(param_2 + 0x9c4) = 2;
      *(float *)(param_2 + 0x9c8) = fVar49 + (fVar48 - fVar49) * (float)uVar5 * 2.3283064e-10;
    }
    break;
  case 2:
    uVar25 = (**(code **)(**(long **)(param_2 + 0x740) + 0x40))();
    if ((uVar25 & 1) != 0) {
      uVar36 = 3;
      goto LAB_7102dd27e4;
    }
    break;
  case 3:
    if ((fVar48 <= 0.0) &&
       (uVar25 = (**(code **)(**(long **)(param_2 + 0x740) + 0x28))(), (uVar25 & 1) != 0)) {
      *(undefined4 *)(param_2 + 0x9c4) = 4;
    }
    uVar25 = (**(code **)(**(long **)(param_2 + 0x740) + 0x50))();
    goto joined_r0x007102dd2788;
  case 4:
    uVar25 = (**(code **)(**(long **)(param_2 + 0x740) + 0x48))();
joined_r0x007102dd2788:
    if ((uVar25 & 1) != 0) {
      *(undefined4 *)(param_2 + 0x9c4) = 0;
    }
    break;
  case 5:
    goto switchD_7102dd2658_caseD_5;
  }
  (**(code **)(**(long **)(param_2 + 0x740) + 0x10))(param_1);
  uVar27 = extraout_x1_19;
switchD_7102dd2658_caseD_5:
  bVar28 = *(byte *)(param_2 + 0x7f4);
  if (bVar28 != 0) {
    uVar62 = NEON_frsqrte(0x47bd944747bd9447,4);
    fVar48 = (float)((ulong)uVar62 >> 0x20);
    uVar61 = NEON_frsqrts(CONCAT44(fVar48 * 97064.555,(float)uVar62 * 97064.555),uVar62,4);
    fVar49 = (float)uVar62 * (float)uVar61;
    fVar48 = fVar48 * (float)((ulong)uVar61 >> 0x20);
    uVar62 = NEON_frsqrts(CONCAT44(fVar48 * 97064.555,fVar49 * 97064.555),
                          CONCAT17((char)((uint)fVar48 >> 0x18),
                                   CONCAT16((char)((uint)fVar48 >> 0x10),
                                            CONCAT15((char)((uint)fVar48 >> 8),
                                                     CONCAT14(SUB41(fVar48,0),fVar49)))),4);
    lVar45 = 0;
    uVar25 = 0;
    do {
      lVar47 = *(long *)(param_2 + 0x9d8) + lVar45;
      if (*(int *)(lVar47 + 0xc) == 3) {
        fVar48 = *(float *)(lVar47 + 0x34);
        uVar52 = SUB41(fVar48,0);
        uVar53 = (undefined1)((uint)fVar48 >> 8);
        uVar54 = (undefined1)((uint)fVar48 >> 0x10);
        uVar55 = (undefined1)((uint)fVar48 >> 0x18);
        if (1.0 < fVar48) {
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0x80;
          uVar55 = 0x3f;
        }
        fVar63 = 0.0;
        if (0.0 <= fVar48) {
          fVar63 = (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)));
        }
        fVar63 = fVar63 * fVar49 * (float)uVar62 * 97064.555;
        *(undefined8 *)(lVar47 + 0x28) = 0xc1200000;
        *(ulong *)(lVar47 + 0x20) =
             CONCAT44(fVar63 * -0.40340957 + 97.537,fVar63 * 0.91501945 + -307.928);
        bVar28 = *(byte *)(param_2 + 0x7f4);
      }
      uVar25 = uVar25 + 1;
      lVar45 = lVar45 + 0x90;
    } while (uVar25 < bVar28);
  }
  if (*(char *)(param_2 + 0x974) != '\0') {
    plVar43 = *(long **)(param_2 + 0x790);
    for (plVar40 = *(long **)(param_2 + 0x788); plVar40 != plVar43; plVar40 = plVar40 + 1) {
      FUN_7102ddb6f0(fVar51,*plVar40,uVar27,(long ****)param_4,(byte ****)param_5,(long ****)param_6
                     ,param_7,param_8,param_9);
      uVar27 = extraout_x1_20;
    }
    iVar24 = *(int *)(param_2 + 0x9d0);
    if (iVar24 != 2) {
      if (iVar24 == 1) {
        if ((*(int *)(param_2 + 0x9a0) == 4) ||
           ((*(int *)(param_2 + 0x9a0) == 3 &&
            ((*(float *)(param_2 + 0x9a4) <= *(float *)(param_2 + 0x7f8) ||
             (*(float *)(*(long *)(param_2 + 0x738) + 0xb0) <= *(float *)(param_2 + 0x7fc))))))) {
          *(undefined4 *)(param_2 + 0x9d0) = 0;
        }
        else {
          fVar48 = *(float *)(param_2 + 0x9d4) - fVar51;
          *(float *)(param_2 + 0x9d4) = fVar48;
          if (fVar48 <= 0.0) {
            if (((DAT_71053144d8 & 1) == 0) &&
               (iVar24 = __cxa_guard_acquire(&DAT_71053144d8), uVar27 = extraout_x1_37, iVar24 != 0)
               ) {
              FUN_7101764000();
              param_4 = &PTR_LOOP_7104f17000;
              FUN_71000001c0();
              __cxa_guard_release(&DAT_71053144d8);
              uVar27 = extraout_x1_38;
            }
            if ('\0' < DAT_71052c5204) {
              puVar29 = *(uint **)(param_2 + 0x340);
              fVar49 = *(float *)(param_2 + 0x7c0);
              fVar48 = *(float *)(param_2 + 0x7c4);
              uVar5 = *puVar29 ^ *puVar29 << 0xb;
              *puVar29 = puVar29[1];
              uVar2 = puVar29[3];
              uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
              puVar29[1] = puVar29[2];
              puVar29[2] = uVar2;
              puVar29[3] = uVar5;
              puVar29 = *(uint **)(param_2 + 0x340);
              *(float *)(param_2 + 0x9d4) =
                   fVar49 + (fVar48 - fVar49) * (float)uVar5 * 2.3283064e-10;
              uVar5 = *puVar29;
              *puVar29 = puVar29[1];
              uVar2 = puVar29[3];
              uVar5 = uVar5 ^ uVar5 << 0xb;
              uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
              puVar29[1] = puVar29[2];
              puVar29[2] = uVar2;
              puVar29[3] = uVar5;
              if (((float)uVar5 * 2.3283064e-10 <= *(float *)(param_2 + 0x7c8)) &&
                 (bVar28 = *(byte *)(param_2 + 0x7f4), (ulong)bVar28 != 0)) {
                uVar61 = NEON_frsqrte(0x47bd944747bd9447,4);
                fVar63 = (float)((ulong)uVar61 >> 0x20);
                fVar48 = fVar63 * 97064.555;
                uVar62 = NEON_frsqrts(CONCAT17((char)((uint)fVar48 >> 0x18),
                                               CONCAT16((char)((uint)fVar48 >> 0x10),
                                                        CONCAT15((char)((uint)fVar48 >> 8),
                                                                 CONCAT14(SUB41(fVar48,0),
                                                                          (float)uVar61 * 97064.555)
                                                                ))),uVar61,4);
                fVar49 = (float)uVar61 * (float)uVar62;
                fVar63 = fVar63 * (float)((ulong)uVar62 >> 0x20);
                fVar48 = fVar63 * 97064.555;
                uVar62 = NEON_frsqrts(CONCAT17((char)((uint)fVar48 >> 0x18),
                                               CONCAT16((char)((uint)fVar48 >> 0x10),
                                                        CONCAT15((char)((uint)fVar48 >> 8),
                                                                 CONCAT14(SUB41(fVar48,0),
                                                                          fVar49 * 97064.555)))),
                                      CONCAT44(fVar63,fVar49),4);
                uVar25 = 0;
                do {
                  piVar46 = *(int **)(param_2 + 0x9d8);
                  piVar37 = piVar46 + uVar25 * 0x24;
                  if (*piVar37 == 1) {
                    piVar35 = piVar46;
                    if (piVar46 == (int *)0x0) {
LAB_7102dd2c8c:
                      iVar24 = 0;
                    }
                    else {
LAB_7102dd2c64:
                      bVar4 = *(byte *)(param_2 + 0x7f4);
                      uVar42 = (ulong)bVar4;
                      if (uVar42 == 0) goto LAB_7102dd2c8c;
                      if (bVar4 == 1) {
                        lVar45 = 0;
                        iVar24 = 0;
LAB_7102dd2ce8:
                        if ((piVar35[lVar45 * 0x24] == 3) && ((uint)piVar35[lVar45 * 0x24 + 3] < 3))
                        {
                          iVar24 = iVar24 + 1;
                        }
                      }
                      else {
                        lVar45 = 0;
                        iVar24 = 0;
                        piVar39 = piVar35;
                        do {
                          if ((*piVar39 == 3) && ((uint)piVar39[3] < 3)) {
                            iVar24 = iVar24 + 1;
                          }
                          if ((piVar39[0x24] == 3) && ((uint)piVar39[0x27] < 3)) {
                            iVar24 = iVar24 + 1;
                          }
                          lVar45 = lVar45 + 2;
                          piVar39 = piVar39 + 0x48;
                        } while (uVar42 - (uVar42 & 1) != lVar45);
                        if ((bVar4 & 1) != 0) goto LAB_7102dd2ce8;
                      }
                    }
                    puVar29 = *(uint **)(param_2 + 0x340);
                    uVar5 = *puVar29;
                    *puVar29 = puVar29[1];
                    uVar2 = puVar29[3];
                    uVar5 = uVar5 ^ uVar5 << 0xb;
                    uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
                    fVar48 = (float)uVar5 * 2.3283064e-10;
                    puVar29[1] = puVar29[2];
                    puVar29[2] = uVar2;
                    puVar29[3] = uVar5;
                    if (0.25 <= fVar48) {
                      if (0.5 <= fVar48) {
                        if (0.75 <= fVar48) {
                          puVar29 = *(uint **)(param_2 + 0x340);
                          uVar5 = *puVar29 ^ *puVar29 << 0xb;
                          *puVar29 = puVar29[1];
                          uVar2 = puVar29[3];
                          uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
                          puVar29[1] = puVar29[2];
                          puVar29[2] = uVar2;
                          puVar29[3] = uVar5;
                          if (*(long *)(param_2 + 0x9d8) != 0) {
                            fVar48 = (float)uVar5 * 2.3283064e-10 * 0.15 + 0.7;
                            uVar42 = (ulong)*(byte *)(param_2 + 0x7f4);
                            if (uVar42 == 0) {
LAB_7102dd38f0:
                              piVar46[(uVar25 & 0xffffffff) * 0x24 + 3] = 3;
                              goto LAB_7102dd3908;
                            }
                            fVar63 = fVar48;
                            if (1.0 < fVar48) {
                              fVar63 = 1.0;
                            }
                            pfVar30 = (float *)(*(long *)(param_2 + 0x9d8) + 0x20);
                            while ((pfVar30[-8] != 4.2039e-45 ||
                                   (*(float *)(param_2 + 0x7f0) <=
                                    ABS((fVar63 * fVar49 * (float)uVar62 * 97064.555 * 0.91501945 +
                                        -307.928) - *pfVar30)))) {
                              pfVar30 = pfVar30 + 0x24;
                              uVar42 = uVar42 - 1;
                              if (uVar42 == 0) goto LAB_7102dd38f0;
                            }
                          }
                        }
                        else if ((iVar24 == 0) && (*(int *)(param_2 + 0x9b0) != 2)) {
                          iVar24 = 2;
                          goto LAB_7102dd3d60;
                        }
                      }
                      else if ((iVar24 == 0) && (*(int *)(param_2 + 0x9b0) != 1)) {
                        iVar24 = 1;
LAB_7102dd3d60:
                        piVar46[(uVar25 & 0xffffffff) * 0x24 + 3] = iVar24;
                        goto LAB_7102dd3d64;
                      }
                    }
                    else if ((iVar24 == 0) && (*(int *)(param_2 + 0x9b0) != 0)) {
                      piVar46[(uVar25 & 0xffffffff) * 0x24 + 3] = 0;
LAB_7102dd3d64:
                      puVar29 = *(uint **)(param_2 + 0x340);
                      uVar5 = *puVar29;
                      *puVar29 = puVar29[1];
                      uVar2 = puVar29[3];
                      uVar5 = uVar5 ^ uVar5 << 0xb;
                      uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
                      puVar29[1] = puVar29[2];
                      puVar29[2] = uVar2;
                      puVar29[3] = uVar5;
                      fVar48 = (float)uVar5 * 2.3283064e-10 * 0.6 + 0.2;
LAB_7102dd3908:
                      piVar46[(uVar25 & 0xffffffff) * 0x24 + 0xd] = (int)fVar48;
                      iVar24 = *(int *)(param_2 + 0x9e0);
                      fVar49 = *(float *)(param_2 + 0x7cc);
                      fVar63 = *(float *)(param_2 + 2000);
                      fVar48 = *(float *)(param_2 + 0x7d4);
                      uVar52 = SUB41(fVar48,0);
                      uVar53 = (undefined1)((uint)fVar48 >> 8);
                      uVar54 = (undefined1)((uint)fVar48 >> 0x10);
                      uVar55 = (undefined1)((uint)fVar48 >> 0x18);
                      if (iVar24 == 2) {
                        fVar48 = fVar48 * *(float *)(param_2 + 0x7d8);
                        uVar52 = SUB41(fVar48,0);
                        uVar53 = (undefined1)((uint)fVar48 >> 8);
                        uVar54 = (undefined1)((uint)fVar48 >> 0x10);
                        uVar55 = (undefined1)((uint)fVar48 >> 0x18);
                      }
                      else if (iVar24 == 1) {
                        fVar63 = fVar63 * *(float *)(param_2 + 0x7d8);
                      }
                      else if (iVar24 == 0) {
                        fVar49 = fVar49 * *(float *)(param_2 + 0x7d8);
                      }
                      puVar29 = *(uint **)(param_2 + 0x340);
                      uVar5 = *puVar29;
                      *puVar29 = puVar29[1];
                      uVar2 = puVar29[3];
                      uVar5 = uVar5 ^ uVar5 << 0xb;
                      uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
                      puVar29[1] = puVar29[2];
                      puVar29[2] = uVar2;
                      puVar29[3] = uVar5;
                      fVar48 = ((float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) +
                               fVar63 + fVar49) * (float)uVar5 * 2.3283064e-10;
                      iVar24 = 2;
                      if (fVar48 < fVar63 + fVar49) {
                        iVar24 = 1;
                      }
                      iVar3 = 0;
                      if (fVar49 <= fVar48) {
                        iVar3 = iVar24;
                      }
                      *(int *)(param_2 + 0x9e0) = iVar3;
                      piVar46[(uVar25 & 0xffffffff) * 0x24 + 4] = iVar3;
                      *piVar37 = 2;
                      break;
                    }
                  }
                  else if (*piVar37 == 0) {
                    *piVar37 = 0;
                    (piVar46 + uVar25 * 0x24 + 1)[0] = 0;
                    (piVar46 + uVar25 * 0x24 + 1)[1] = 0;
                    (piVar46 + uVar25 * 0x24 + 3)[0] = 4;
                    (piVar46 + uVar25 * 0x24 + 3)[1] = 3;
                    piVar46[uVar25 * 0x24 + 5] = 0;
                    piVar46[uVar25 * 0x24 + 6] = *(int *)(param_2 + 0x7ec);
                    piVar46[uVar25 * 0x24 + 7] = *(int *)(param_2 + 0x7e8);
                    (piVar46 + uVar25 * 0x24 + 8)[0] = 0;
                    (piVar46 + uVar25 * 0x24 + 8)[1] = 0;
                    (piVar46 + uVar25 * 0x24 + 10)[0] = 0;
                    (piVar46 + uVar25 * 0x24 + 10)[1] = 0;
                    puVar29 = *(uint **)(param_2 + 0x340);
                    uVar5 = *puVar29;
                    fVar48 = *(float *)(param_2 + 0x8c0);
                    *puVar29 = puVar29[1];
                    uVar5 = uVar5 ^ uVar5 << 0xb;
                    uVar2 = puVar29[3];
                    uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
                    puVar29[1] = puVar29[2];
                    puVar29[2] = uVar2;
                    puVar29[3] = uVar5;
                    (piVar46 + uVar25 * 0x24 + 0x12)[0] = 0;
                    (piVar46 + uVar25 * 0x24 + 0x12)[1] = 0;
                    (piVar46 + uVar25 * 0x24 + 0x10)[0] = 0x3f800000;
                    (piVar46 + uVar25 * 0x24 + 0x10)[1] = 0;
                    (piVar46 + uVar25 * 0x24 + 0x16)[0] = 0;
                    (piVar46 + uVar25 * 0x24 + 0x16)[1] = 0;
                    (piVar46 + uVar25 * 0x24 + 0x14)[0] = 0;
                    (piVar46 + uVar25 * 0x24 + 0x14)[1] = 0x3f800000;
                    piVar46[uVar25 * 0x24 + 0xc] =
                         (int)(fVar48 * (float)uVar5 * 2.3283064e-10 + 45.0);
                    (piVar46 + uVar25 * 0x24 + 0x1a)[0] = 0x3f800000;
                    (piVar46 + uVar25 * 0x24 + 0x1a)[1] = 0;
                    (piVar46 + uVar25 * 0x24 + 0x18)[0] = 0;
                    (piVar46 + uVar25 * 0x24 + 0x18)[1] = 0;
                    (piVar46 + uVar25 * 0x24 + 0x1e)[0] = 0;
                    (piVar46 + uVar25 * 0x24 + 0x1e)[1] = 0x3f800000;
                    (piVar46 + uVar25 * 0x24 + 0x1c)[0] = 0;
                    (piVar46 + uVar25 * 0x24 + 0x1c)[1] = 0;
                    piVar46[uVar25 * 0x24 + 0xd] = 0x3f000000;
                    *(undefined1 *)(piVar46 + uVar25 * 0x24 + 0x20) = 0;
                    piVar46[uVar25 * 0x24 + 0x21] = 0x50000000;
                    *piVar37 = 1;
                    piVar35 = *(int **)(param_2 + 0x9d8);
                    if (*(int **)(param_2 + 0x9d8) != (int *)0x0) goto LAB_7102dd2c64;
                    goto LAB_7102dd2c8c;
                  }
                  uVar25 = uVar25 + 1;
                } while (uVar25 < bVar28);
              }
            }
          }
        }
      }
      else if ((iVar24 == 0) && (*(int *)(param_2 + 0x9a0) == 2)) {
        puVar29 = *(uint **)(param_2 + 0x340);
        uVar5 = *puVar29;
        fVar49 = *(float *)(param_2 + 0x7b8);
        fVar48 = *(float *)(param_2 + 0x7bc);
        *puVar29 = puVar29[1];
        uVar2 = puVar29[3];
        uVar5 = uVar5 ^ uVar5 << 0xb;
        uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
        puVar29[1] = puVar29[2];
        puVar29[2] = uVar2;
        puVar29[3] = uVar5;
        *(undefined4 *)(param_2 + 0x9d0) = 1;
        *(float *)(param_2 + 0x9d4) = fVar49 + (fVar48 - fVar49) * (float)uVar5 * 2.3283064e-10;
      }
      puVar44 = *(ulong **)(param_2 + 0x778);
      for (puVar41 = *(ulong **)(param_2 + 0x770); puVar41 != puVar44; puVar41 = puVar41 + 1) {
        if (*puVar41 != 0) {
          FUN_7102ddad90(fVar51,*puVar41,uVar27,(long ****)param_4,(byte ****)param_5,
                         (long ****)param_6,(ulong)param_7,param_8,param_9);
          uVar27 = extraout_x1_21;
        }
      }
    }
    lVar45 = *(long *)(param_2 + 0x9d8);
    if ((lVar45 != 0) && (bVar28 = *(byte *)(param_2 + 0x7f4), bVar28 != 0)) {
      uVar25 = 1;
      lVar47 = 0x84;
      do {
        iVar24 = *(int *)(lVar45 + lVar47);
        if (iVar24 != 0x50000000) {
          piVar37 = *(int **)(param_2 + 0x9f0);
          if (piVar37 == *(int **)(param_2 + 0x9f8)) {
            __src = *(void **)(param_2 + 0x9e8);
            __n = (long ****)((long)piVar37 - (long)__src);
            uVar42 = ((long)__n >> 2) + 1;
            if (uVar42 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar31 = (long)*(int **)(param_2 + 0x9f8) - (long)__src;
            if ((ulong)(lVar31 >> 2) < 0x1fffffffffffffff) {
              uVar32 = lVar31 >> 1;
              if (uVar42 <= uVar32) {
                uVar42 = uVar32;
              }
              if (uVar42 != 0) {
                if (uVar42 >> 0x3e == 0) goto LAB_7102dd2fc0;
                goto LAB_7102dd3e7c;
              }
              __dest = (void *)0x0;
            }
            else {
              uVar42 = 0x3fffffffffffffff;
LAB_7102dd2fc0:
              ppplVar33 = (long ***)(uVar42 * 4);
              if (ppplVar33 == (long ***)0x0) {
                ppplVar33 = (long ***)0x1;
              }
              __dest = (void *)FUN_710392e290(0x10,ppplVar33,(long ****)param_4,(byte ****)param_5,
                                              (long ****)param_6,param_7,param_8,param_9);
              uVar27 = extraout_x1_22;
              if (__dest == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_f0[0] = local_f0[0] & 0xffffffff00000000;
                  param_4 = (undefined **)&local_c0;
                  local_c0 = ppplVar33;
                  auVar64 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_f0);
                  uVar27 = auVar64._8_8_;
                  if (((auVar64._0_8_ & 1) != 0) &&
                     (__dest = (void *)FUN_710392e290(0x10,ppplVar33,(long ****)param_4,
                                                      (byte ****)param_5,(long ****)param_6,param_7,
                                                      param_8,param_9), uVar27 = extraout_x1_23,
                     __dest != (void *)0x0)) goto LAB_7102dd3024;
                }
                __dest = (void *)0x0;
              }
LAB_7102dd3024:
              iVar24 = *(int *)(lVar45 + lVar47);
            }
            piVar37 = (int *)((long)__dest + ((long)__n >> 2) * 4);
            *piVar37 = iVar24;
            if (0 < (long)__n) {
              memcpy(__dest,__src,(size_t)__n);
              uVar27 = extraout_x1_24;
              param_4 = (undefined **)__n;
            }
            *(void **)(param_2 + 0x9e8) = __dest;
            *(int **)(param_2 + 0x9f0) = piVar37 + 1;
            *(void **)(param_2 + 0x9f8) = (void *)((long)__dest + uVar42 * 4);
            if (__src != (void *)0x0) {
              FUN_710392eb40((ulong)__src);
              uVar27 = extraout_x1_25;
            }
          }
          else {
            *piVar37 = iVar24;
            *(long *)(param_2 + 0x9f0) = *(long *)(param_2 + 0x9f0) + 4;
          }
          *(undefined4 *)(*(long *)(param_2 + 0x9d8) + lVar47) = 0x50000000;
          bVar28 = *(byte *)(param_2 + 0x7f4);
        }
        if (bVar28 <= uVar25) break;
        lVar45 = *(long *)(param_2 + 0x9d8);
        uVar25 = uVar25 + 1;
        lVar47 = lVar47 + 0x90;
      } while( true );
    }
    if ((*(int *)(param_2 + 0xdc) == 2) &&
       (lVar45 = *(long *)(param_2 + 0x9e8), *(long *)(param_2 + 0x9f0) != lVar45)) {
      lVar47 = *(long *)(lib::Singleton<app::ItemManager>::instance_ + 0x18) -
               *(long *)(lib::Singleton<app::ItemManager>::instance_ + 0x10);
      if (lVar47 != 0) {
        lVar45 = 0;
        while( true ) {
          plVar40 = *(long **)(*(long *)(lib::Singleton<app::ItemManager>::instance_ + 0x10) +
                              lVar45 * 8);
          if ((plVar40 != (long *)0x0) && (*(int *)((long)plVar40 + 0xc) == 0x9f)) {
            if (3 < *(byte *)((long)plVar40 + 0x3a)) {
              plVar43 = (long *)(**(code **)(*(long *)plVar40[0x1a] + 0x60))();
              local_c0 = (long ***)*plVar43;
              local_b8 = (long **)plVar43[1];
              local_f0[1]._4_4_ = uRam000000710752100c;
              local_f0[1]._0_4_ = _DAT_7107521008;
              local_f0[0] = _ConstantZero;
              param_5 = (undefined1 (*) [16])&local_c0;
              local_100._8_8_ = uRam0000007107558008;
              local_100._0_8_ = _ConstantOne;
              param_6 = (undefined1 (*) [16])local_f0;
              param_7 = &local_100;
              param_4 = (undefined **)(long ****)0xfa06bb067;
              FUN_71026277a0(&local_d8,*(ulong **)(param_2 + 800),(long ****)0xfa06bb067,
                             (undefined1 (*) [12])param_5,(undefined1 (*) [12])param_6,
                             (undefined1 (*) [12])param_7,param_8,param_9);
              if (local_c8 != 0) {
                *local_d0 = (long)local_d8;
                local_d8[1] = local_d0;
                *(long *)(local_c8 + 0x10) = *(long *)(local_c8 + 0x10) + -1;
                local_d0 = (long *)0x0;
                local_c8 = 0;
                local_d8 = (long **)0x0;
              }
            }
            (**(code **)(*plVar40 + 0x520))(plVar40,0);
            uVar27 = extraout_x1_26;
          }
          if ((lVar47 >> 3) + -1 == lVar45) break;
          lVar45 = lVar45 + 1;
        }
        lVar45 = *(long *)(param_2 + 0x9e8);
      }
      *(long *)(param_2 + 0x9f0) = lVar45;
    }
  }
  if (*(char *)(param_2 + 0x975) != '\0') {
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar24 = __cxa_guard_acquire(&DAT_71053144d8), uVar27 = extraout_x1_35, iVar24 != 0)) {
      FUN_7101764000();
      param_4 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      uVar27 = extraout_x1_36;
    }
    if (('\0' < DAT_71052c5204) && (*(char *)(param_2 + 0x975) != '\0')) {
      fVar48 = *(float *)(param_2 + 0x9a4) - fVar51;
      uVar52 = SUB41(fVar48,0);
      uVar53 = (undefined1)((uint)fVar48 >> 8);
      uVar54 = (undefined1)((uint)fVar48 >> 0x10);
      uVar55 = (undefined1)((uint)fVar48 >> 0x18);
      if (fVar48 <= 0.0) {
        uVar52 = 0;
        uVar53 = 0;
        uVar54 = 0;
        uVar55 = 0;
      }
      *(uint *)(param_2 + 0x9a4) = CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)));
      switch(*(undefined4 *)(param_2 + 0x9a0)) {
      case 0:
        puVar29 = *(uint **)(param_2 + 0x340);
        if (*(char *)(param_2 + 0x9ac) == '\0') {
          uVar5 = *puVar29;
          fVar49 = *(float *)(param_2 + 0x808);
          fVar48 = *(float *)(param_2 + 0x80c);
          *puVar29 = puVar29[1];
          uVar5 = uVar5 ^ uVar5 << 0xb;
          uVar2 = puVar29[3];
          fVar48 = fVar48 - fVar49;
          uVar52 = SUB41(fVar48,0);
          uVar53 = (undefined1)((uint)fVar48 >> 8);
          uVar54 = (undefined1)((uint)fVar48 >> 0x10);
          uVar55 = (undefined1)((uint)fVar48 >> 0x18);
          uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
          puVar29[1] = puVar29[2];
          puVar29[2] = uVar2;
          puVar29[3] = uVar5;
        }
        else {
          uVar5 = *puVar29;
          fVar49 = *(float *)(param_2 + 0x800);
          fVar48 = *(float *)(param_2 + 0x804);
          *puVar29 = puVar29[1];
          uVar5 = uVar5 ^ uVar5 << 0xb;
          uVar2 = puVar29[3];
          fVar48 = fVar48 - fVar49;
          uVar52 = SUB41(fVar48,0);
          uVar53 = (undefined1)((uint)fVar48 >> 8);
          uVar54 = (undefined1)((uint)fVar48 >> 0x10);
          uVar55 = (undefined1)((uint)fVar48 >> 0x18);
          uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
          puVar29[1] = puVar29[2];
          puVar29[2] = uVar2;
          puVar29[3] = uVar5;
          *(undefined1 *)(param_2 + 0x9ac) = 0;
        }
        *(float *)(param_2 + 0x9a4) =
             fVar49 + (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) *
                      (float)uVar5 * 2.3283064e-10;
        *(undefined4 *)(param_2 + 0x9a0) = 1;
        break;
      case 1:
        if (!NAN((float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)))) &&
            (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) == 0.0) {
          puVar29 = *(uint **)(param_2 + 0x340);
          uVar5 = *puVar29;
          fVar48 = *(float *)(param_2 + 0x810);
          *puVar29 = puVar29[1];
          uVar5 = uVar5 ^ uVar5 << 0xb;
          uVar2 = puVar29[3];
          uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
          puVar29[1] = puVar29[2];
          puVar29[2] = uVar2;
          puVar29[3] = uVar5;
          puVar29 = *(uint **)(param_2 + 0x340);
          if ((float)uVar5 * 2.3283064e-10 < fVar48) {
LAB_7102dd377c:
            uVar5 = *puVar29;
            fVar48 = *(float *)(param_2 + 0x808);
            fVar49 = *(float *)(param_2 + 0x80c);
            *puVar29 = puVar29[1];
            uVar5 = uVar5 ^ uVar5 << 0xb;
            uVar2 = puVar29[3];
            uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
            puVar29[1] = puVar29[2];
            puVar29[2] = uVar2;
            puVar29[3] = uVar5;
            *(float *)(param_2 + 0x9a4) =
                 (fVar48 + (fVar49 - fVar48) * (float)uVar5 * 2.3283064e-10) * 0.5;
          }
          else {
            uVar5 = *puVar29;
            *puVar29 = puVar29[1];
            uVar2 = puVar29[3];
            uVar5 = uVar5 ^ uVar5 << 0xb;
            uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
            puVar29[1] = puVar29[2];
            puVar29[2] = uVar2;
            puVar29[3] = uVar5;
            fVar48 = (float)uVar5 * 2.3283064e-10;
            if (0.33333334 <= fVar48) {
              if (0.6666667 <= fVar48) {
                iVar24 = 2;
                bVar28 = *(byte *)(param_2 + 0x7f4);
              }
              else {
                iVar24 = 1;
                bVar28 = *(byte *)(param_2 + 0x7f4);
              }
            }
            else {
              iVar24 = 0;
              bVar28 = *(byte *)(param_2 + 0x7f4);
            }
            if ((ulong)bVar28 != 0) {
              bVar22 = iVar24 == 0;
              bVar23 = iVar24 == 2;
              uVar25 = 1;
              piVar37 = (int *)(*(long *)(param_2 + 0x9d8) + 0xc);
              do {
                iVar3 = *piVar37;
                if (iVar3 == 2) {
                  bVar20 = bVar23;
                  if (bVar23) break;
                }
                else {
                  bVar20 = iVar24 == 1;
                  if (iVar3 != 1) {
                    if (iVar3 == 0) {
                      bVar20 = bVar22;
                      if (!bVar22) goto LAB_7102dd3764;
                      break;
                    }
                    bVar20 = false;
                  }
                  if (bVar20) break;
                }
LAB_7102dd3764:
                bVar21 = uVar25 < bVar28;
                uVar25 = uVar25 + 1;
                piVar37 = piVar37 + 0x24;
              } while (bVar21);
              if (bVar20) {
                puVar29 = *(uint **)(param_2 + 0x340);
                goto LAB_7102dd377c;
              }
            }
            lVar45 = *(long *)(param_2 + 0x738);
            lVar47 = *(long *)(lVar45 + 0x28);
            iVar3 = *(int *)(param_2 + 0x9a8);
            fVar48 = *(float *)(lVar47 + 100);
            uVar52 = SUB41(fVar48,0);
            uVar53 = (undefined1)((uint)fVar48 >> 8);
            uVar54 = (undefined1)((uint)fVar48 >> 0x10);
            uVar55 = (undefined1)((uint)fVar48 >> 0x18);
            fVar63 = *(float *)(lVar47 + 0x68);
            fVar49 = *(float *)(lVar47 + 0x6c);
            if (iVar3 == 2) {
              fVar49 = fVar49 * *(float *)(lVar47 + 0x70);
            }
            else if (iVar3 == 1) {
              fVar63 = fVar63 * *(float *)(lVar47 + 0x70);
            }
            else if (iVar3 == 0) {
              fVar48 = fVar48 * *(float *)(lVar47 + 0x70);
              uVar52 = SUB41(fVar48,0);
              uVar53 = (undefined1)((uint)fVar48 >> 8);
              uVar54 = (undefined1)((uint)fVar48 >> 0x10);
              uVar55 = (undefined1)((uint)fVar48 >> 0x18);
            }
            puVar29 = *(uint **)(*(long *)(lVar45 + 8) + 0x340);
            fVar63 = fVar63 + (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)));
            uVar5 = *puVar29;
            *puVar29 = puVar29[1];
            uVar2 = puVar29[3];
            uVar5 = uVar5 ^ uVar5 << 0xb;
            uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
            fVar48 = (fVar49 + fVar63) * (float)uVar5 * 2.3283064e-10;
            puVar29[1] = puVar29[2];
            puVar29[2] = uVar2;
            puVar29[3] = uVar5;
            uVar36 = 2;
            if (fVar48 < fVar63) {
              uVar36 = 1;
            }
            uVar17 = 0;
            if ((float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) <= fVar48) {
              uVar17 = uVar36;
            }
            *(undefined4 *)(lVar45 + 0x58) = uVar17;
            *(undefined4 *)(param_2 + 0x9a8) = uVar17;
            *(undefined4 *)(param_2 + 0x9a0) = 2;
            *(int *)(param_2 + 0x9b0) = iVar24;
          }
        }
        break;
      case 2:
        lVar45 = *(long *)(param_2 + 0x738);
        if (*(int *)(lVar45 + 0xbc) == 1) {
          *(undefined4 *)(lVar45 + 0x68) = *(undefined4 *)(param_2 + 0x9b0);
          *(undefined4 *)(lVar45 + 0xbc) = 2;
          lVar45 = *(long *)(param_2 + 0x738);
        }
        if (*(uint *)(lVar45 + 0x68) < 3) {
          lVar47 = *(long *)(param_2 + (ulong)*(uint *)(lVar45 + 0x68) * 8 + 0x750);
          pauVar1 = (undefined1 (*) [12])(lVar47 + 0x40);
          uVar36 = (undefined4)((ulong)*(undefined8 *)(lVar47 + 0x48) >> 0x20);
          uVar62 = *(undefined8 *)*pauVar1;
          uVar52 = (undefined1)uVar62;
          uVar53 = (undefined1)((ulong)uVar62 >> 8);
          uVar54 = (undefined1)((ulong)uVar62 >> 0x10);
          uVar55 = (undefined1)((ulong)uVar62 >> 0x18);
          uVar56 = (undefined1)((ulong)uVar62 >> 0x20);
          uVar57 = (undefined1)((ulong)uVar62 >> 0x28);
          uVar58 = (undefined1)((ulong)uVar62 >> 0x30);
          uVar59 = (undefined1)((ulong)uVar62 >> 0x38);
          auVar11._12_4_ = uVar36;
          auVar11._0_12_ = *pauVar1;
          auVar12._12_4_ = uVar36;
          auVar12._0_12_ = *pauVar1;
          auVar64 = NEON_ext(auVar11,auVar12,8,1);
          fVar48 = auVar64._0_4_;
          fVar49 = 0.0;
          if (3 < *(int *)(lVar45 + 0xbc)) {
            fVar49 = (float)uVar62 + *(float *)(lVar47 + 0xc0);
            uVar52 = SUB41(fVar49,0);
            uVar53 = (undefined1)((uint)fVar49 >> 8);
            uVar54 = (undefined1)((uint)fVar49 >> 0x10);
            uVar55 = (undefined1)((uint)fVar49 >> 0x18);
            fVar49 = (float)((ulong)uVar62 >> 0x20) + *(float *)(lVar47 + 0xc4);
            uVar56 = SUB41(fVar49,0);
            uVar57 = (undefined1)((uint)fVar49 >> 8);
            uVar58 = (undefined1)((uint)fVar49 >> 0x10);
            uVar59 = (undefined1)((uint)fVar49 >> 0x18);
            fVar48 = fVar48 + *(float *)(lVar47 + 200);
            fVar49 = *(float *)(lVar47 + 0xcc) + 0.0;
          }
        }
        else {
          auVar16._8_4_ = _DAT_7107521008;
          auVar16._0_8_ = _ConstantZero;
          auVar15._8_4_ = _DAT_7107521008;
          auVar15._0_8_ = _ConstantZero;
          uVar52 = (undefined1)_ConstantZero;
          uVar53 = (undefined1)(_ConstantZero >> 8);
          uVar54 = (undefined1)(_ConstantZero >> 0x10);
          uVar55 = (undefined1)(_ConstantZero >> 0x18);
          uVar56 = (undefined1)(_ConstantZero >> 0x20);
          uVar57 = (undefined1)(_ConstantZero >> 0x28);
          uVar58 = (undefined1)(_ConstantZero >> 0x30);
          uVar59 = (undefined1)(_ConstantZero >> 0x38);
          auVar15._12_4_ = uRam000000710752100c;
          auVar16._12_4_ = uRam000000710752100c;
          auVar64 = NEON_ext(auVar15,auVar16,8,1);
          fVar48 = auVar64._0_4_;
          fVar49 = 0.0;
        }
        auVar13[1] = uVar53;
        auVar13[0] = uVar52;
        auVar13[2] = uVar54;
        auVar13[3] = uVar55;
        auVar13[4] = uVar56;
        auVar13[5] = uVar57;
        auVar13[6] = uVar58;
        auVar13[7] = uVar59;
        auVar13._8_4_ = fVar48;
        auVar13._12_4_ = fVar49;
        auVar14[1] = uVar53;
        auVar14[0] = uVar52;
        auVar14[2] = uVar54;
        auVar14[3] = uVar55;
        auVar14[4] = uVar56;
        auVar14[5] = uVar57;
        auVar14[6] = uVar58;
        auVar14[7] = uVar59;
        auVar14._8_4_ = fVar48;
        auVar14._12_4_ = fVar49;
        auVar64 = NEON_ext(auVar13,auVar14,8,1);
        *(ulong *)(lVar45 + 0x88) = (ulong)auVar64._0_4_;
        *(ulong *)(lVar45 + 0x80) =
             CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14(uVar56,CONCAT13(uVar55,
                                                  CONCAT12(uVar54,CONCAT11(uVar53,uVar52)))))));
        if (*(int *)(*(long *)(param_2 + 0x738) + 0xbc) == 5) {
          puVar29 = *(uint **)(param_2 + 0x340);
          uVar5 = *puVar29;
          fVar49 = *(float *)(param_2 + 0x828);
          fVar48 = *(float *)(param_2 + 0x82c);
          *puVar29 = puVar29[1];
          uVar2 = puVar29[3];
          uVar5 = uVar5 ^ uVar5 << 0xb;
          uVar5 = uVar5 ^ uVar5 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
          puVar29[1] = puVar29[2];
          puVar29[2] = uVar2;
          puVar29[3] = uVar5;
          *(undefined4 *)(param_2 + 0x9a0) = 3;
          *(float *)(param_2 + 0x9a4) = fVar49 + (fVar48 - fVar49) * (float)uVar5 * 2.3283064e-10;
        }
        break;
      case 3:
        lVar45 = *(long *)(param_2 + 0x738);
        if (*(uint *)(lVar45 + 0x68) < 3) {
          lVar47 = *(long *)(param_2 + (ulong)*(uint *)(lVar45 + 0x68) * 8 + 0x750);
          pauVar1 = (undefined1 (*) [12])(lVar47 + 0x40);
          uVar36 = (undefined4)((ulong)*(undefined8 *)(lVar47 + 0x48) >> 0x20);
          auVar6._12_4_ = uVar36;
          auVar6._0_12_ = *pauVar1;
          auVar7._12_4_ = uVar36;
          auVar7._0_12_ = *pauVar1;
          auVar64 = NEON_ext(auVar6,auVar7,8,1);
          fVar48 = (float)*(undefined8 *)*pauVar1 + *(float *)(lVar47 + 0xc0);
          uVar52 = SUB41(fVar48,0);
          uVar53 = (undefined1)((uint)fVar48 >> 8);
          uVar54 = (undefined1)((uint)fVar48 >> 0x10);
          uVar55 = (undefined1)((uint)fVar48 >> 0x18);
          fVar48 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) + *(float *)(lVar47 + 0xc4);
          uVar56 = SUB41(fVar48,0);
          uVar57 = (undefined1)((uint)fVar48 >> 8);
          uVar58 = (undefined1)((uint)fVar48 >> 0x10);
          uVar59 = (undefined1)((uint)fVar48 >> 0x18);
          fVar48 = auVar64._0_4_ + *(float *)(lVar47 + 200);
          fVar49 = *(float *)(lVar47 + 0xcc) + 0.0;
        }
        else {
          auVar10._8_4_ = _DAT_7107521008;
          auVar10._0_8_ = _ConstantZero;
          auVar64._8_4_ = _DAT_7107521008;
          auVar64._0_8_ = _ConstantZero;
          uVar52 = (undefined1)_ConstantZero;
          uVar53 = (undefined1)(_ConstantZero >> 8);
          uVar54 = (undefined1)(_ConstantZero >> 0x10);
          uVar55 = (undefined1)(_ConstantZero >> 0x18);
          uVar56 = (undefined1)(_ConstantZero >> 0x20);
          uVar57 = (undefined1)(_ConstantZero >> 0x28);
          uVar58 = (undefined1)(_ConstantZero >> 0x30);
          uVar59 = (undefined1)(_ConstantZero >> 0x38);
          auVar64._12_4_ = uRam000000710752100c;
          auVar10._12_4_ = uRam000000710752100c;
          auVar64 = NEON_ext(auVar64,auVar10,8,1);
          fVar48 = auVar64._0_4_;
          fVar49 = 0.0;
        }
        auVar8[1] = uVar53;
        auVar8[0] = uVar52;
        auVar8[2] = uVar54;
        auVar8[3] = uVar55;
        auVar8[4] = uVar56;
        auVar8[5] = uVar57;
        auVar8[6] = uVar58;
        auVar8[7] = uVar59;
        auVar8._8_4_ = fVar48;
        auVar8._12_4_ = fVar49;
        auVar9[1] = uVar53;
        auVar9[0] = uVar52;
        auVar9[2] = uVar54;
        auVar9[3] = uVar55;
        auVar9[4] = uVar56;
        auVar9[5] = uVar57;
        auVar9[6] = uVar58;
        auVar9[7] = uVar59;
        auVar9._8_4_ = fVar48;
        auVar9._12_4_ = fVar49;
        auVar64 = NEON_ext(auVar8,auVar9,8,1);
        *(ulong *)(lVar45 + 0x88) = (ulong)auVar64._0_4_;
        *(ulong *)(lVar45 + 0x80) =
             CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14(uVar56,CONCAT13(uVar55,
                                                  CONCAT12(uVar54,CONCAT11(uVar53,uVar52)))))));
        if ((*(int *)(*(long *)(param_2 + 0x738) + 0xbc) == 7) ||
           (*(float *)(param_2 + 0x9a4) <= 1e-05)) {
          *(undefined4 *)(param_2 + 0x9a0) = 4;
        }
        break;
      case 4:
        iVar24 = *(int *)(*(long *)(param_2 + 0x738) + 0xbc);
        if (iVar24 == 5) {
          *(undefined4 *)(*(long *)(param_2 + 0x738) + 0xbc) = 6;
          iVar24 = *(int *)(*(long *)(param_2 + 0x738) + 0xbc);
        }
        if (iVar24 == 1) {
          *(undefined4 *)(param_2 + 0x9a0) = 0;
        }
        break;
      case 6:
        goto switchD_7102dd3208_caseD_6;
      }
      FUN_7102dd8b10(fVar51,*(long *)(param_2 + 0x738),uVar27,(long ****)param_4,(byte ****)param_5,
                     (long ****)param_6,(ulong)param_7,param_8,param_9);
    }
  }
switchD_7102dd3208_caseD_6:
  if (*(char *)(param_2 + 0x972) != '\0') {
    lVar45 = *(long *)(param_2 + 0x968);
    if ((*(char *)(lVar45 + 0x43) != '\0') && (*(long *)(lVar45 + 0x38) != 0)) {
      uVar60 = *(undefined4 *)(param_2 + 0x94c);
      uVar18 = *(undefined4 *)(param_2 + 0x950);
      uVar19 = *(undefined5 *)(param_2 + 0x94c);
      uVar17 = *(undefined4 *)(param_2 + 0x958);
      uVar27 = *(undefined8 *)(param_2 + 0x954);
      uVar36 = *(undefined4 *)(*(long *)(param_2 + 0x768) + 0x24);
      lVar45 = (**(code **)(**(long **)(*(long *)(lVar45 + 0x38) + 0x130) + 0x1c8))();
      *(undefined8 *)(lVar45 + 0x2d8) = 0;
      *(undefined8 *)(lVar45 + 0x2d0) = uVar27;
      *(undefined2 *)(lVar45 + 0x2c0) = 4;
      *(undefined4 *)(lVar45 + 0x300) = 0;
      *(undefined8 *)(lVar45 + 0x2e8) = 0;
      *(ulong *)(lVar45 + 0x2e0) =
           CONCAT17((char)((uint)uVar18 >> 0x18),
                    CONCAT16((char)((uint)uVar18 >> 0x10),CONCAT15((char)((uint)uVar18 >> 8),uVar19)
                            ));
      *(undefined1 *)(lVar45 + 0x304) = 1;
      *(undefined8 *)(lVar45 + 0x2f8) = 0;
      *(ulong *)(lVar45 + 0x2f0) = CONCAT44(uVar17,uVar60);
      *(undefined2 *)(lVar45 + 0x305) = (undefined2)local_c0;
      *(undefined1 *)(lVar45 + 0x307) = local_c0._2_1_;
      *(undefined4 *)(lVar45 + 0x308) = uVar36;
      *(undefined1 *)(lVar45 + 0x310) = 0;
      *(undefined2 *)(lVar45 + 0x268) = 4;
      *(undefined4 *)(lVar45 + 0x26c) = uVar36;
      *(undefined1 *)(lVar45 + 0x288) = 0;
      *(undefined4 *)(lVar45 + 0x30c) = 0xc2340000;
      *(undefined4 *)(lVar45 + 0x270) = 0xc2340000;
      lVar45 = *(long *)(param_2 + 0x968);
    }
    if (*(long *)(lVar45 + 0x38) != 0) {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar24 = __cxa_guard_acquire(&DAT_71053144d8), iVar24 != 0)) {
        FUN_7101764000();
        param_4 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052c518a == '\0') {
        (**(code **)(**(long **)(*(long *)(lVar45 + 0x38) + 0x130) + 0x1c8))();
      }
    }
  }
  if (*(char *)(param_2 + 0x970) != '\0') {
    FUN_7102ddd9e0(fVar51,*(long *)(param_2 + 0x7a0));
  }
  lVar45 = *(long *)(param_2 + 0xa00);
  if (lVar45 == 0) {
    return;
  }
  switch(*(undefined4 *)(param_2 + 0xa08)) {
  case 0:
    bVar22 = FUN_710260ffb0(lVar45);
    if (!bVar22) {
      return;
    }
    uVar25 = 1;
    uVar27 = extraout_x1_31;
    goto LAB_7102dd3b2c;
  case 1:
    fVar51 = *(float *)(param_2 + 0xa0c) - fVar51;
    *(float *)(param_2 + 0xa0c) = fVar51;
    if (fVar51 <= 0.0) {
      FUN_7102610220(lVar45,0x1cce80b1cb);
      if (*(long *)(param_2 + 0xa00) != 0) {
        param_4 = (undefined **)0x0;
        FUN_71025ee2a0(*(long *)(param_2 + 0xa00) + 0x60,0x1cce80b1cb,0);
        lVar45 = *(long *)(param_2 + 0xa00);
        if (lVar45 != 0) {
          if ((*(char *)(lVar45 + 0xe0) != '\0') && (*(long *)(lVar45 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar45 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar45 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar45 + 0xd8) + 0x22) = 0;
          }
        }
      }
      FUN_710260fdd0(0,*(long *)(param_2 + 0xa00),1);
      lVar45 = *(long *)(param_2 + 0xa00);
      if (lVar45 != 0) {
        *(undefined1 *)(lVar45 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar45 + 0x108),extraout_x1_34,(long ****)param_4,(byte ****)param_5
                       ,(long ****)param_6,param_7,param_8,param_9);
      }
      *(undefined4 *)(param_2 + 0xa08) = 2;
    }
    break;
  case 2:
    bVar22 = FUN_710260ffb0(lVar45);
    if (!bVar22) {
      return;
    }
    uVar25 = 3;
    uVar27 = extraout_x1_32;
LAB_7102dd3b2c:
    *(ulong *)(param_2 + 0xa08) = uVar25 | 0x4396000000000000;
    lVar45 = *(long *)(param_2 + 0xa00);
    if (lVar45 != 0) {
      *(undefined1 *)(lVar45 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar45 + 0x108),uVar27,(long ****)param_4,(byte ****)param_5,
                     (long ****)param_6,param_7,param_8,param_9);
    }
    break;
  case 3:
    fVar51 = *(float *)(param_2 + 0xa0c) - fVar51;
    *(float *)(param_2 + 0xa0c) = fVar51;
    if (fVar51 <= 0.0) {
      FUN_7102610220(lVar45,0x1a3e2f3f14);
      if (*(long *)(param_2 + 0xa00) != 0) {
        param_4 = (undefined **)0x0;
        FUN_71025ee2a0(*(long *)(param_2 + 0xa00) + 0x60,0x1a3e2f3f14,0);
        lVar45 = *(long *)(param_2 + 0xa00);
        if (lVar45 != 0) {
          if ((*(char *)(lVar45 + 0xe0) != '\0') && (*(long *)(lVar45 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar45 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar45 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar45 + 0xd8) + 0x22) = 0;
          }
        }
      }
      FUN_710260fdd0(0,*(long *)(param_2 + 0xa00),1);
      lVar45 = *(long *)(param_2 + 0xa00);
      if (lVar45 != 0) {
        *(undefined1 *)(lVar45 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar45 + 0x108),extraout_x1_33,(long ****)param_4,(byte ****)param_5
                       ,(long ****)param_6,param_7,param_8,param_9);
      }
      *(undefined4 *)(param_2 + 0xa08) = 0;
    }
  }
  return;
}

