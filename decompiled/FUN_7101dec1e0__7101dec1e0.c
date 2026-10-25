// addr:      7101dec1e0
// offset:    0x1dec1e0
// name:      FUN_7101dec1e0
// mangled:   
// signature: undefined __cdecl FUN_7101dec1e0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dec1e0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  char *pcVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  ushort uVar16;
  long lVar17;
  undefined2 *puVar18;
  ulong uVar19;
  ushort *puVar20;
  long lVar21;
  undefined1 uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ushort *puVar28;
  uint uVar29;
  long *plVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulong local_128;
  ulong local_120 [8];
  long ***local_e0;
  long ***local_d8;
  undefined8 uStack_d0;
  long alStack_98 [3];
  
  if (*(int *)(param_1 + 0x134) != 0) {
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x28) + 0x80) + 0xe0) != 5) {
      return;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x70) = 1;
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 8),1);
    if ((*(int *)(param_1 + 0x144) == 4) || (*(int *)(param_1 + 0x144) == 0xd)) goto LAB_7101dec258;
    cVar2 = *(char *)(*(long *)(param_1 + 0x20) + 0x6c0);
    lVar31 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x6b8) + 0x80);
    *(char *)(lVar31 + 0x11ac) = cVar2;
    if (*(int *)(lVar31 + 0x11b0) < 6) {
      if (4 < *(int *)(lVar31 + 0x11b0) - 1U) goto LAB_7101dec258;
      lVar17 = *(long *)(*(long *)(lVar31 + 0x2268) + 0x1b8);
      if (lVar17 == 0) goto LAB_7101dec258;
      lVar26 = *(long *)(lVar31 + 0x2268) + 0x1b8;
      lVar21 = lVar26;
      lVar25 = lVar17;
      do {
        if (0 < *(int *)(lVar25 + 0x20)) {
          lVar21 = lVar25;
        }
        lVar25 = *(long *)(lVar25 + (ulong)(*(int *)(lVar25 + 0x20) < 1) * 8);
      } while (lVar25 != 0);
      if (((lVar21 != lVar26) && (*(int *)(lVar21 + 0x20) < 2)) &&
         (plVar30 = *(long **)(lVar21 + 0x28), plVar30 != (long *)0x0)) {
        (**(code **)(*plVar30 + 0x1f8))(plVar30,cVar2 != '\0');
        (**(code **)(*plVar30 + 0x388))(plVar30,cVar2 == '\0',0);
        lVar26 = *(long *)(lVar31 + 0x2268) + 0x1b8;
        lVar17 = *(long *)(*(long *)(lVar31 + 0x2268) + 0x1b8);
      }
      lVar31 = lVar26;
      if (lVar17 == 0) goto LAB_7101dec258;
      do {
        if (0 < *(int *)(lVar17 + 0x20)) {
          lVar31 = lVar17;
        }
        lVar17 = *(long *)(lVar17 + (ulong)(*(int *)(lVar17 + 0x20) < 1) * 8);
      } while (lVar17 != 0);
      if ((lVar31 == lVar26) || (1 < *(int *)(lVar31 + 0x20))) goto LAB_7101dec258;
    }
    else {
      lVar17 = *(long *)(*(long *)(lVar31 + 0x2268) + 0x1b8);
      if (lVar17 == 0) goto LAB_7101dec258;
      lVar26 = *(long *)(lVar31 + 0x2268) + 0x1b8;
      lVar21 = lVar26;
      lVar25 = lVar17;
      do {
        if (1 < *(int *)(lVar25 + 0x20)) {
          lVar21 = lVar25;
        }
        lVar25 = *(long *)(lVar25 + (ulong)(*(int *)(lVar25 + 0x20) < 2) * 8);
      } while (lVar25 != 0);
      if (((lVar21 != lVar26) && (*(int *)(lVar21 + 0x20) < 3)) &&
         (plVar30 = *(long **)(lVar21 + 0x28), plVar30 != (long *)0x0)) {
        (**(code **)(*plVar30 + 0x1f8))(plVar30,cVar2 != '\0');
        (**(code **)(*plVar30 + 0x388))(plVar30,cVar2 == '\0',0);
        lVar26 = *(long *)(lVar31 + 0x2268) + 0x1b8;
        lVar17 = *(long *)(*(long *)(lVar31 + 0x2268) + 0x1b8);
      }
      lVar31 = lVar26;
      if (lVar17 == 0) goto LAB_7101dec258;
      do {
        if (1 < *(int *)(lVar17 + 0x20)) {
          lVar31 = lVar17;
        }
        lVar17 = *(long *)(lVar17 + (ulong)(*(int *)(lVar17 + 0x20) < 2) * 8);
      } while (lVar17 != 0);
      if ((lVar31 == lVar26) || (2 < *(int *)(lVar31 + 0x20))) goto LAB_7101dec258;
    }
    plVar30 = *(long **)(lVar31 + 0x28);
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 0x208))(plVar30,cVar2 != '\0');
      (**(code **)(*plVar30 + 0x388))(plVar30,cVar2 == '\0',0);
    }
LAB_7101dec258:
    if (*(uint *)(param_1 + 300) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 300) * 4 + 0xe0) = 2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 8),0);
  lVar31 = *(long *)(param_1 + 0x20);
  iVar24 = *(int *)(*(long *)(lVar31 + 0x38) + 0x2a4);
  if (iVar24 < 0) {
LAB_7101dec3c0:
    uVar29 = 0xffff;
  }
  else {
    if ((*(uint *)(lVar31 + 0x2c8) & 0xffffff) == 0) {
      iVar23 = (int)((ulong)(*(long *)(lVar31 + 0x248) - *(long *)(lVar31 + 0x240)) >> 3);
    }
    else {
      iVar23 = *(int *)(lVar31 + 0x308);
    }
    if (iVar23 <= iVar24) goto LAB_7101dec3c0;
    uVar29 = (uint)**(ushort **)(*(long *)(lVar31 + 0x240) + (long)iVar24 * 8);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x70) = 0;
  lVar31 = *(long *)(param_1 + 0x28);
  if (uVar29 >> 4 < 0x177) {
    puVar18 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar29 * 0x50 + 72000);
  }
  else {
    puVar18 = &DAT_710532a878;
    if ((uVar29 - 6000 < 100) &&
       (lVar17 = *(long *)(*DAT_7105329f98 + 0x30) + ((ulong)(uVar29 - 6000) & 0xffff) * 0x50,
       *(short *)(lVar17 + 0x88cc8) != -1)) {
      puVar18 = (undefined2 *)(lVar17 + 0x88cc0);
    }
  }
  uVar9 = FUN_71025cba90(*(float *)(*(long *)(param_1 + 0x20) + 0x60c),puVar18[4]);
  lVar31 = *(long *)(lVar31 + 0x80);
  pppplVar14 = (long ****)0x10fff;
  FUN_7103775dc0((long *)**(undefined8 **)(lVar31 + 0xf0),1,(long ****)0x10fff,param_4,param_5,
                 param_6,param_7,param_8);
  *(short *)(lVar31 + 0x510) = (short)uVar29;
  plVar30 = DAT_7105329f98;
  if (uVar29 == 0xffff) {
    return;
  }
  lVar17 = *(long *)(*DAT_7105329f98 + 0x40);
  lVar26 = *(long *)(lVar17 + 8);
  if (lVar26 == 0) {
LAB_7101dec60c:
    lVar26 = *(long *)(lVar17 + 0x10);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 1;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 1;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 1;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101dec678;
          iVar24 = iVar24 + 0x560;
          uVar22 = 1;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101dec678:
    lVar26 = *(long *)(lVar17 + 0x18);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 2;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 2;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 2;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101dec6e4;
          iVar24 = iVar24 + 0x560;
          uVar22 = 2;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101dec6e4:
    lVar26 = *(long *)(lVar17 + 0x20);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 3;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 3;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 3;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101dec750;
          iVar24 = iVar24 + 0x560;
          uVar22 = 3;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101dec750:
    lVar26 = *(long *)(lVar17 + 0x28);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 4;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 4;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 4;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101dec7bc;
          iVar24 = iVar24 + 0x560;
          uVar22 = 4;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101dec7bc:
    lVar26 = *(long *)(lVar17 + 0x30);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 5;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 5;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 5;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101dec828;
          iVar24 = iVar24 + 0x560;
          uVar22 = 5;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101dec828:
    lVar26 = *(long *)(lVar17 + 0x38);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 6;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 6;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 6;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101dec894;
          iVar24 = iVar24 + 0x560;
          uVar22 = 6;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101dec894:
    lVar26 = *(long *)(lVar17 + 0x40);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 7;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 7;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 7;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101dec900;
          iVar24 = iVar24 + 0x560;
          uVar22 = 7;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101dec900:
    lVar26 = *(long *)(lVar17 + 0x48);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 8;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 8;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 8;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101dec96c;
          iVar24 = iVar24 + 0x560;
          uVar22 = 8;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101dec96c:
    lVar26 = *(long *)(lVar17 + 0x50);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 9;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 9;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 9;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101dec9d8;
          iVar24 = iVar24 + 0x560;
          uVar22 = 9;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101dec9d8:
    lVar26 = *(long *)(lVar17 + 0x58);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 10;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 10;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 10;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101deca44;
          iVar24 = iVar24 + 0x560;
          uVar22 = 10;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101deca44:
    lVar26 = *(long *)(lVar17 + 0x60);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 0xb;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 0xb;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 0xb;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101decab0;
          iVar24 = iVar24 + 0x560;
          uVar22 = 0xb;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101decab0:
    lVar26 = *(long *)(lVar17 + 0x68);
    if (lVar26 != 0) {
      puVar20 = (ushort *)(lVar26 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 0xc;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar26;
        if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
          uVar22 = 0xc;
        }
        else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
          uVar22 = 0xc;
        }
        else {
          if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101decb1c;
          iVar24 = iVar24 + 0x560;
          uVar22 = 0xc;
        }
      }
      goto LAB_7101decb7c;
    }
LAB_7101decb1c:
    lVar17 = *(long *)(lVar17 + 0x70);
    if (lVar17 != 0) {
      puVar20 = (ushort *)(lVar17 + 8);
      if (*puVar20 == uVar29) {
        uVar22 = 0xd;
        iVar24 = (int)puVar20;
      }
      else {
        iVar24 = (int)lVar17;
        if (*(ushort *)(lVar17 + 0x1d0) == uVar29) {
          iVar24 = iVar24 + 0x1d0;
        }
        else if (*(ushort *)(lVar17 + 0x398) == uVar29) {
          iVar24 = iVar24 + 0x398;
        }
        else {
          if (*(ushort *)(lVar17 + 0x560) != uVar29) goto LAB_7101ded93c;
          iVar24 = iVar24 + 0x560;
        }
        uVar22 = 0xd;
      }
      goto LAB_7101decb7c;
    }
LAB_7101ded93c:
    uVar11 = *(ulong *)(lVar31 + 0x350);
    *(undefined8 *)(lVar31 + 0x350) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    bVar5 = 0;
    *(undefined1 *)(lVar31 + 0x358) = 0;
    *(undefined1 *)(lVar31 + 0x35a) = 0;
  }
  else {
    puVar20 = (ushort *)(lVar26 + 8);
    if (*puVar20 == uVar29) {
      uVar22 = 0;
      iVar24 = (int)puVar20;
    }
    else {
      iVar24 = (int)lVar26;
      if (*(ushort *)(lVar26 + 0x1d0) == uVar29) {
        uVar22 = 0;
        iVar24 = iVar24 + 0x1d0;
      }
      else if (*(ushort *)(lVar26 + 0x398) == uVar29) {
        uVar22 = 0;
        iVar24 = iVar24 + 0x398;
      }
      else {
        if (*(ushort *)(lVar26 + 0x560) != uVar29) goto LAB_7101dec60c;
        uVar22 = 0;
        iVar24 = iVar24 + 0x560;
      }
    }
LAB_7101decb7c:
    *(undefined1 *)(lVar31 + 0x359) = uVar22;
    *(undefined1 *)(lVar31 + 0x358) = 1;
    *(char *)(lVar31 + 0x35b) = (char)(((uint)(iVar24 - (int)puVar20) >> 3) * -0x11f70000 >> 0x10);
    *(undefined1 *)(lVar31 + 0x35a) = 1;
    lVar17 = *plVar30;
    plVar30 = (long *)FUN_710392e290(0x10,0x10,pppplVar14,param_4,param_5,param_6,param_7,param_8);
    if (plVar30 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_128 = local_128 & 0xffffffff00000000;
        local_e0 = (long ***)&DAT_00000010;
        pppplVar14 = &local_e0;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
        if (((uVar11 & 1) != 0) &&
           (plVar30 = (long *)FUN_710392e290(0x10,0x10,pppplVar14,param_4,param_5,param_6,param_7,
                                             param_8), plVar30 != (long *)0x0)) goto LAB_7101decc0c;
      }
      plVar30 = (long *)0x0;
    }
LAB_7101decc0c:
    *plVar30 = lVar17 + 0x38;
    *(undefined1 *)(plVar30 + 1) = uVar22;
    uVar11 = *(ulong *)(lVar31 + 0x350);
    *(long **)(lVar31 + 0x350) = plVar30;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    bVar5 = 1;
  }
  if (uVar29 >> 4 < 0x177) {
    puVar18 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar29 * 0x50 + 72000);
  }
  else {
    puVar18 = &DAT_710532a878;
    if ((uVar29 - 6000 < 100) &&
       (lVar17 = *(long *)(*DAT_7105329f98 + 0x30) + ((ulong)(uVar29 - 6000) & 0xffff) * 0x50,
       *(short *)(lVar17 + 0x88cc8) != -1)) {
      puVar18 = (undefined2 *)(lVar17 + 0x88cc0);
    }
  }
  uVar16 = puVar18[4];
  *(ushort *)(lVar31 + 0x400) = uVar16;
  lVar26 = *(long *)(DAT_710532f730 + 8);
  lVar17 = *(long *)(lVar26 + 0x1d8);
  if ((long)(short)uVar16 == -1) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = (ulong)*(ushort *)(lVar17 + (long)(short)uVar16 * 2 + 0x60);
  }
  uVar27 = (*(long *)(lVar17 + 0x28) - *(long *)(lVar17 + 0x20) >> 6) * -0x3333333333333333;
  puVar1 = (undefined2 *)(*(long *)(lVar17 + 0x20) + uVar11 * 0x140);
  if (uVar27 < uVar11 || uVar27 - uVar11 == 0) {
    puVar1 = &DAT_7105182b08;
  }
  uVar11 = FUN_71032a9470(lVar17,uVar16);
  FUN_71032a9540((uint *)&local_e0,lVar17,uVar11);
  FUN_71003a4ca0((uint *)&local_128,"spi_%s",&local_d8,uVar11,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377a120(lVar31 + 0x370,(char *)local_120,uVar11,param_4,param_5,param_6,param_7,param_8);
  sVar3 = *(short *)(lVar31 + 0x400);
  lVar21 = (long)sVar3;
  lVar17 = *(long *)(lVar26 + 0x1d8);
  if (lVar21 == -1) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = (uint)*(ushort *)(lVar17 + lVar21 * 2 + 0x60);
  }
  lVar26 = *(long *)(lVar17 + 0x20);
  uVar4 = (int)((ulong)(*(long *)(lVar17 + 0x28) - lVar26) >> 6) * -0x33333333;
  if ((uVar10 < uVar4) && (*(short *)(lVar26 + (ulong)uVar10 * 0x140 + 0x90) != 0)) {
    FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x368),0x710425f9b8);
    FUN_7101e040e0(lVar31 + 0x360,lVar31 + 0x3d0,(long *********)(ulong)(ushort)puVar1[0x48],param_4
                   ,param_5,param_6,param_7,param_8);
    *(undefined1 *)(lVar31 + 0x410) = 1;
  }
  else {
    if ((sVar3 != -1) &&
       ((((sVar3 < 2000 && (uVar16 = *(ushort *)(lVar17 + lVar21 * 2 + 0x60), uVar16 < uVar4)) &&
         (uVar16 = *(ushort *)(lVar17 + (ulong)uVar16 * 2 + 0x1000), uVar16 < uVar4)) &&
        (*(short *)(lVar26 + (ulong)uVar16 * 0x140) != -1)))) {
      FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x368),0x71043beb83);
      goto LAB_7101decea0;
    }
    FUN_7101e040e0(lVar31 + 0x360,lVar31 + 0x3a0,(long *********)(ulong)(ushort)puVar1[0x35],param_4
                   ,param_5,param_6,param_7,param_8);
    switch(*(undefined1 *)(puVar1 + 0x36)) {
    case 0:
      lVar17 = *(long *)(lVar31 + 0x368);
      pcVar13 = "spirit_attacker_non";
      break;
    case 1:
      lVar17 = *(long *)(lVar31 + 0x368);
      pcVar13 = "spirit_attacker_offense";
      break;
    case 2:
      lVar17 = *(long *)(lVar31 + 0x368);
      pcVar13 = "spirit_attacker_throw";
      break;
    case 3:
      lVar17 = *(long *)(lVar31 + 0x368);
      pcVar13 = "spirit_attacker_defense";
      break;
    default:
      goto switchD_7101dece54_default;
    }
    FUN_7103778300(0x3f800000,lVar17,(long)pcVar13);
switchD_7101dece54_default:
    *(undefined1 *)(lVar31 + 0x410) = 0;
  }
LAB_7101decea0:
  uVar16 = *(ushort *)(lVar31 + 0x400);
  if (uVar16 != 0xffff) {
    lVar26 = *(long *)(*DAT_7105329f98 + 0x20);
    puVar20 = *(ushort **)(lVar26 + 0x28);
    lVar17 = *(long *)(lVar26 + 0x30) - (long)puVar20;
    uVar11 = lVar17 >> 3;
    if (0 < (int)uVar11) {
      uVar27 = 0;
      lVar17 = lVar17 * 0x20000000 >> 0x20;
      puVar28 = puVar20;
      do {
        if (uVar11 <= uVar27) goto LAB_7101ded95c;
        if (*puVar28 == uVar16) {
          if (-1 < (int)uVar27) {
            uVar27 = 0;
            goto LAB_7101decf14;
          }
          break;
        }
        uVar27 = uVar27 + 1;
        puVar28 = puVar28 + 4;
      } while ((long)uVar27 < lVar17);
      goto LAB_7101decfac;
    }
    goto LAB_7101decfb8;
  }
LAB_7101decfa4:
  *(undefined2 *)(lVar31 + 0x400) = 0xffff;
  goto LAB_7101ded024;
  while( true ) {
    uVar27 = uVar27 + 1;
    puVar20 = puVar20 + 4;
    if (lVar17 <= (long)uVar27) break;
LAB_7101decf14:
    if (uVar11 <= uVar27) {
LAB_7101ded95c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    if (*puVar20 == uVar16) {
      if (-1 < (int)uVar27) {
        uVar11 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar16);
        uVar10 = FUN_71032412a0((long *)(lVar26 + 8),uVar11,(long *********)&SUB_00000018,param_4,
                                param_5,param_6,param_7,param_8);
        uVar16 = *(ushort *)(lVar31 + 0x400);
        if ((uVar10 & 1) != 0) {
          if (uVar16 != 0xffff) {
            FUN_71025ae1b0(uVar16,(undefined8 *)(lVar31 + 0x380),3,(byte ****)0x1,param_5,param_6,
                           param_7,param_8);
            param_4 = (byte ****)0x1;
            FUN_71025ae1b0(*(ushort *)(lVar31 + 0x400),(undefined8 *)(lVar31 + 0x390),3,
                           (byte ****)0x1,param_5,param_6,param_7,param_8);
          }
          goto LAB_7101decfa4;
        }
      }
      break;
    }
  }
LAB_7101decfac:
  if (uVar16 != 0xffff) {
LAB_7101decfb8:
    lVar17 = *(long *)(*DAT_7105329f98 + 0x20);
    puVar20 = *(ushort **)(lVar17 + 0x28);
    lVar26 = *(long *)(lVar17 + 0x30) - (long)puVar20;
    uVar11 = lVar26 >> 3;
    if (0 < (int)uVar11) {
      uVar27 = 0;
      do {
        if (uVar11 <= uVar27) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if (*puVar20 == uVar16) {
          if (-1 < (int)uVar27) goto LAB_7101ded024;
          break;
        }
        uVar27 = uVar27 + 1;
        puVar20 = puVar20 + 4;
      } while ((long)uVar27 < lVar26 * 0x20000000 >> 0x20);
    }
    param_4 = (byte ****)0x2;
    FUN_710259c150(lVar17,1,uVar16,(byte ****)0x2,param_5,param_6,param_7,param_8);
  }
LAB_7101ded024:
  lVar17 = *(long *)(DAT_710532f730 + 8);
  pppplVar14 = *(long *****)(puVar18 + 0xc);
  uVar12 = FUN_71032a59b0(*(long *)(lVar17 + 0x208),(ulong)pppplVar14);
  lVar26 = *(long *)(lVar17 + 0x218);
  if (((uint)uVar12 & 0xffff) < 0x11d) {
    uVar11 = *(ulong *)(&DAT_7104547dc0 + (long)(short)uVar12 * 8);
  }
  else {
    uVar11 = 0x47f9000cf;
  }
  uVar11 = FUN_71032a0a40(*(long *)(lVar26 + 8),uVar11);
  FUN_71032a0b40((uint *)&local_e0,lVar26,uVar11);
  FUN_71003a4ca0((uint *)&local_128,"nam_spirits_skill_%s",&local_d8,uVar11,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120(lVar31 + 0x448,(char *)local_120,uVar11,param_4,param_5,param_6,param_7,param_8);
  uVar11 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8),
                          0x1530ff0e86);
  if ((((uVar11 & 0xff00000000000000) == 0x5200000000000000 && (uVar11 & 0xffffffffff) != 0) &&
      (((ulong)pppplVar14 & 0xff00000000000000) == 0x5200000000000000)) &&
     (((ulong)pppplVar14 & 0xffffffffff) != 0)) {
    if ((((ulong)pppplVar14 ^ uVar11) & 0xffffffffff) == 0) {
LAB_7101ded138:
      plVar30 = *(long **)(*(long *)(lVar31 + 0x460) + 0x10);
      if (plVar30 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        FUN_71037a2270(plVar30,(ushort *)&local_e0,0,0);
      }
      plVar30 = *(long **)(*(long *)(lVar31 + 0x470) + 0x10);
      if (plVar30 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        FUN_71037a2270(plVar30,(ushort *)&local_e0,0,0);
      }
      plVar30 = *(long **)(*(long *)(lVar31 + 0x480) + 0x10);
      if (plVar30 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        FUN_71037a2270(plVar30,(ushort *)&local_e0,0,0);
      }
      plVar30 = *(long **)(*(long *)(lVar31 + 0x490) + 0x10);
      if (plVar30 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        FUN_71037a2270(plVar30,(ushort *)&local_e0,0,0);
      }
      plVar30 = *(long **)(*(long *)(lVar31 + 0x4a0) + 0x10);
      if (plVar30 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        FUN_71037a2270(plVar30,(ushort *)&local_e0,0,0);
      }
      plVar30 = *(long **)(*(long *)(lVar31 + 0x4b0) + 0x10);
      if (plVar30 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        FUN_71037a2270(plVar30,(ushort *)&local_e0,0,0);
      }
      plVar30 = *(long **)(*(long *)(lVar31 + 0x4c0) + 0x10);
      if (plVar30 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        FUN_71037a2270(plVar30,(ushort *)&local_e0,0,0);
      }
      plVar30 = *(long **)(*(long *)(lVar31 + 0x4d0) + 0x10);
      if (plVar30 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        FUN_71037a2270(plVar30,(ushort *)&local_e0,0,0);
      }
      plVar30 = *(long **)(*(long *)(lVar31 + 0x4e0) + 0x10);
      if (plVar30 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        FUN_71037a2270(plVar30,(ushort *)&local_e0,0,0);
      }
      plVar30 = *(long **)(*(long *)(lVar31 + 0x4f0) + 0x10);
      if (plVar30 != (long *)0x0) {
        local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
        FUN_71037a2270(plVar30,(ushort *)&local_e0,0,0);
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x440),0x7104292179);
      FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x440),0x71043cf924);
      goto LAB_7101ded3b0;
    }
  }
  else if ((((ulong)pppplVar14 & 0xffffffffff) != 0 &&
           ((ulong)pppplVar14 & 0xff00000000000000) == 0x5200000000000000) ==
           ((uVar11 & 0xff00000000000000) == 0x5200000000000000 && (uVar11 & 0xffffffffff) != 0))
  goto LAB_7101ded138;
  local_d8 = (long ***)0x0;
  uStack_d0 = 0;
  local_e0 = (long ***)0x0;
  pppplVar15 = pppplVar14;
  FUN_71032a3e90((long *)&local_128,*(long *)(lVar17 + 0x208),(ulong)pppplVar14);
  FUN_71032a5330((long *)&local_128,(ulong *)&local_e0,pppplVar15,param_4,param_5,param_6,param_7,
                 param_8);
  local_120[0] = 0;
  local_120[1] = 0;
  local_128 = 0;
  pppplVar15 = pppplVar14;
  FUN_71032a40d0(alStack_98,*(long *)(lVar17 + 0x208),(ulong)pppplVar14);
  FUN_71032a5330(alStack_98,&local_128,pppplVar15,param_4,param_5,param_6,param_7,param_8);
  FUN_7101e044a0((long *)&local_e0,lVar31 + 0x458,pppplVar15,param_4,param_5,param_6,param_7,param_8
                );
  FUN_7101e044a0((long *)&local_128,lVar31 + 0x4a8,pppplVar15,param_4,param_5,param_6,param_7,
                 param_8);
  bVar8 = FUN_71032a50f0(*(long *)(lVar17 + 0x208),(ulong)pppplVar14);
  bVar6 = FUN_71032a5210(*(long *)(lVar17 + 0x208),(ulong)pppplVar14);
  pcVar13 = "caption_largeup";
  if (!bVar8) {
    pcVar13 = "caption_up";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x440),(long)pcVar13);
  pcVar13 = "caption_largedown";
  if (!bVar6) {
    pcVar13 = "caption_down";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x440),(long)pcVar13);
  if (local_128 != 0) {
    local_120[0] = local_128;
    FUN_710392eb40(local_128);
  }
  if (local_e0 != (long ***)0x0) {
    local_d8 = local_e0;
    FUN_710392eb40((ulong)local_e0);
  }
LAB_7101ded3b0:
  uVar29 = FUN_71025ca3c0((ulong)uVar29,(char)uVar9,0);
  if (uVar29 == 0) {
    uVar29 = 1;
  }
  lVar17 = 0;
  do {
    lVar26 = lVar31 + lVar17;
    uVar27 = *(ulong *)(lVar26 + 0x118);
    lVar21 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x208);
    uVar11 = FUN_71032a44b0(lVar21,uVar27);
    uVar10 = (uint)(uVar11 >> 0x1f) & 1 ^ 1;
    if ((uVar27 & 0xff00000000000000) == 0x5200000000000000 && (uVar27 & 0xffffffffff) != 0) {
      uVar19 = FUN_71032a3d90(*(long *)(lVar21 + 8),0x1530ff0e86);
      bVar6 = (uVar19 & 0xffffffffff) != 0;
      bVar7 = (uVar19 & 0xff00000000000000) == 0x5200000000000000;
      lVar21 = *(long *)(lVar26 + 0x100);
      bVar8 = bVar7 && bVar6;
      if (bVar7 && bVar6) {
        bVar8 = ((uVar27 ^ uVar19) & 0xffffffffff) == 0;
      }
      pcVar13 = "view_none";
      if (!bVar8) {
        pcVar13 = "view_open";
      }
    }
    else {
      lVar21 = *(long *)(lVar26 + 0x100);
      pcVar13 = "view_close";
    }
    FUN_7103778300(0x3f800000,lVar21,(long)pcVar13);
    lVar21 = DAT_710532f730;
    if ((((bool)(bVar5 ^ 1) || uVar10 == 0) || (*(char *)(lVar31 + 0x358) == '\0')) ||
       ((uint)*(byte *)(lVar31 + 0x359) != ((uint)uVar11 & 0xff))) {
      uVar27 = *(ulong *)(lVar26 + 0x118);
      if (((uVar27 & 0xff00000000000000) == 0x5200000000000000) && ((uVar27 & 0xffffffffff) != 0)) {
        uVar19 = *(ulong *)(puVar18 + 0xc);
        if (((uVar19 & 0xff00000000000000) == 0x5200000000000000) &&
           (((uVar19 & 0xffffffffff) != 0 && (((uVar27 ^ uVar19) & 0xffffffffff) == 0)))) {
          uVar11 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8),
                                  0x1530ff0e86);
          bVar6 = (uVar11 & 0xffffffffff) != 0;
          bVar7 = (uVar11 & 0xff00000000000000) == 0x5200000000000000;
          bVar8 = bVar7 && bVar6;
          if (bVar7 && bVar6) {
            bVar8 = ((uVar27 ^ uVar11) & 0xffffffffff) == 0;
          }
          pcVar13 = "view_none_select";
          if (!bVar8) {
            pcVar13 = "view_select";
          }
          FUN_7103778300(0x3f800000,*(long *)(lVar26 + 0x100),(long)pcVar13);
        }
        else {
          uVar19 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8),
                                  0x1530ff0e86);
          bVar6 = (uVar19 & 0xffffffffff) != 0;
          bVar7 = (uVar19 & 0xff00000000000000) == 0x5200000000000000;
          bVar8 = bVar7 && bVar6;
          if (bVar7 && bVar6) {
            bVar8 = ((uVar27 ^ uVar19) & 0xffffffffff) == 0;
          }
          if (((uVar10 != 0) && (!bVar8)) && (uVar10 = (uint)uVar11 & 0xff, uVar10 < 0xe)) {
            uVar16 = puVar18[(ulong)uVar10 + 0x10];
            bVar8 = FUN_71025ca280((ulong)*(ushort *)(lVar31 + 0x510),uVar27);
            if ((uVar16 != 0) || (bVar8)) {
              uVar27 = *(ulong *)(lVar26 + 0x118);
              uVar11 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(lVar21 + 8) + 0x208) + 8),
                                      0x1530ff0e86);
              if ((((uVar11 & 0xff00000000000000) == 0x5200000000000000) &&
                  (((uVar11 & 0xffffffffff) != 0 &&
                   ((uVar27 & 0xff00000000000000) == 0x5200000000000000)))) &&
                 ((uVar27 & 0xffffffffff) != 0)) {
                if (((uVar27 ^ uVar11) & 0xffffffffff) != 0) {
LAB_7101ded870:
                  pcVar13 = "view_expert";
                  if (!bVar8) {
                    pcVar13 = "view_student";
                  }
                  FUN_7103778300(0x3f800000,*(long *)(lVar26 + 0x100),(long)pcVar13);
                }
              }
              else if (((uVar27 & 0xffffffffff) != 0 &&
                       (uVar27 & 0xff00000000000000) == 0x5200000000000000) !=
                       ((uVar11 & 0xff00000000000000) == 0x5200000000000000 &&
                       (uVar11 & 0xffffffffff) != 0)) goto LAB_7101ded870;
              lVar26 = **(long **)(lVar26 + 0x110);
              if (lVar26 != 0) {
                fVar33 = (float)uVar16 / (float)uVar29;
                if (1.0 < fVar33) {
                  fVar33 = 1.0;
                }
                goto LAB_7101ded8b0;
              }
            }
          }
        }
      }
    }
    else {
      uVar27 = *(ulong *)(lVar26 + 0x118);
      uVar11 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8),
                              0x1530ff0e86);
      if ((((uVar11 & 0xff00000000000000) == 0x5200000000000000 && (uVar11 & 0xffffffffff) != 0) &&
          ((uVar27 & 0xff00000000000000) == 0x5200000000000000)) && ((uVar27 & 0xffffffffff) != 0))
      {
        if (((uVar27 ^ uVar11) & 0xffffffffff) != 0) {
LAB_7101ded530:
          FUN_7103778300(0x3f800000,*(long *)(lVar26 + 0x100),0x710439d92f);
        }
      }
      else if (((uVar27 & 0xffffffffff) != 0 && (uVar27 & 0xff00000000000000) == 0x5200000000000000)
               != ((uVar11 & 0xff00000000000000) == 0x5200000000000000 &&
                  (uVar11 & 0xffffffffff) != 0)) goto LAB_7101ded530;
      plVar30 = *(long **)(lVar31 + 0x350);
      fVar33 = 0.0;
      if ((plVar30 != (long *)0x0) && (*(char *)(lVar31 + 0x35a) != '\0')) {
        fVar33 = 0.0;
        if ((((ulong)*(byte *)(plVar30 + 1) < 0xe) &&
            ((*(char *)(*(long *)(*plVar30 + 8) + 0x388) != '\0' && (*(byte *)(lVar31 + 0x35b) < 4))
            )) && (lVar21 = *(long *)(*(long *)(*plVar30 + 8) + (ulong)*(byte *)(plVar30 + 1) * 8 +
                                     8), lVar21 != 0)) {
          lVar21 = lVar21 + (ulong)*(byte *)(lVar31 + 0x35b) * 0x1c8;
          uVar11 = *(ulong *)(lVar21 + 0x20);
          uVar27 = *(ulong *)(lVar21 + 0x10);
          fVar33 = 1.0;
          if (uVar11 != uVar27) {
            uVar19 = ((long)uVar27 >> 0x20) * 0xe353f7cf +
                     ((uVar27 & 0xffffffff) * 0xe353f7cf >> 0x20);
            lVar21 = ((long)(((long)uVar27 >> 0x20) * 0x20c49ba5 + ((long)uVar19 >> 0x20) +
                            ((uVar27 & 0xffffffff) * 0x20c49ba5 + (uVar19 & 0xffffffff) >> 0x20)) >>
                     7) - ((long)uVar27 >> 0x3f);
            fVar33 = 0.0;
            if (0 < lVar21) {
              uVar27 = ((long)uVar11 >> 0x20) * 0xe353f7cf +
                       ((uVar11 & 0xffffffff) * 0xe353f7cf >> 0x20);
              fVar32 = (float)(((long)(((long)uVar11 >> 0x20) * 0x20c49ba5 + ((long)uVar27 >> 0x20)
                                      + ((uVar11 & 0xffffffff) * 0x20c49ba5 + (uVar27 & 0xffffffff)
                                        >> 0x20)) >> 7) - ((long)uVar11 >> 0x3f)) / (float)lVar21;
              fVar34 = fVar32;
              if (1.0 < fVar32) {
                fVar34 = 1.0;
              }
              fVar33 = 0.0;
              if (0.0 <= fVar32) {
                fVar33 = fVar34;
              }
            }
          }
        }
      }
      lVar26 = **(long **)(lVar26 + 0x110);
      if (lVar26 != 0) {
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
LAB_7101ded8b0:
        *(undefined4 *)(lVar26 + 0x4c) = 0x3f800000;
        *(float *)(lVar26 + 0x48) = fVar33;
        *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
      }
    }
    lVar17 = lVar17 + 0x28;
    if (lVar17 == 600) {
      *(undefined8 *)(lVar31 + 0xe0) = 0xffffffff;
      *(undefined4 *)(lVar31 + 0xe8) = 0xffffffff;
      *(undefined8 *)(lVar31 + 0x10) = 0;
      *(undefined8 *)(lVar31 + 0x18) = 0;
      *(undefined4 *)(lVar31 + 0xdc) = 0;
      *(undefined8 *)(lVar31 + 0xd4) = 0;
      *(undefined8 *)(lVar31 + 0xcc) = 0;
      *(undefined8 *)(lVar31 + 0xc4) = 0;
      *(undefined8 *)(lVar31 + 0xbc) = 0;
      *(undefined8 *)(lVar31 + 0xb4) = 0;
      *(undefined8 *)(lVar31 + 0xac) = 0;
      *(undefined8 *)(lVar31 + 0xa4) = 0;
      *(undefined8 *)(lVar31 + 0x9c) = 0;
      *(undefined8 *)(lVar31 + 0x94) = 0;
      *(undefined1 *)(lVar31 + 0xec) = 0;
      *(undefined4 *)(lVar31 + 0x90) = 1;
      return;
    }
  } while( true );
}

