// addr:      71037a4bc0
// offset:    0x37a4bc0
// name:      FUN_71037a4bc0
// mangled:   
// signature: undefined __cdecl FUN_71037a4bc0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71037a4bc0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort *puVar1;
  ushort *puVar2;
  ulong uVar3;
  undefined2 *puVar4;
  long ****pppplVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  long ***ppplVar10;
  ulong uVar11;
  long ***local_48;
  undefined4 local_34;
  
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_a");
  if (DAT_710593be88 != &DAT_710593be48 && DAT_710593be88 != (undefined2 *)0x0) {
    FUN_710392eb40((ulong)DAT_710593be88);
  }
  DAT_710593be48 = 0;
  DAT_710593be88 = &DAT_710593be48;
  DAT_710593be90 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593be88;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593be90 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593be90 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593be90;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593be90) {
        uVar6 = DAT_710593be90 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a4d0c;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a4d0c:
    DAT_710593be88 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593be88,puVar1,(size_t)param_3);
    DAT_710593be88[(int)DAT_710593be90] = 0;
  }
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_b");
  if ((DAT_710593bed8 != &DAT_710593be98) && (DAT_710593bed8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593bed8);
  }
  DAT_710593be98 = 0;
  DAT_710593bed8 = &DAT_710593be98;
  DAT_710593bee0 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593bed8;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593bee0 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593bee0 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593bee0;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593bee0) {
        uVar6 = DAT_710593bee0 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a4e60;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a4e60:
    DAT_710593bed8 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593bed8,puVar1,(size_t)param_3);
    DAT_710593bed8[(int)DAT_710593bee0] = 0;
  }
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_x");
  if ((DAT_710593bf28 != &DAT_710593bee8) && (DAT_710593bf28 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593bf28);
  }
  DAT_710593bee8 = 0;
  DAT_710593bf28 = &DAT_710593bee8;
  DAT_710593bf30 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593bf28;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593bf30 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593bf30 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593bf30;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593bf30) {
        uVar6 = DAT_710593bf30 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a4fb4;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a4fb4:
    DAT_710593bf28 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593bf28,puVar1,(size_t)param_3);
    DAT_710593bf28[(int)DAT_710593bf30] = 0;
  }
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_y");
  if ((DAT_710593bf78 != &DAT_710593bf38) && (DAT_710593bf78 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593bf78);
  }
  DAT_710593bf38 = 0;
  DAT_710593bf78 = &DAT_710593bf38;
  DAT_710593bf80 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593bf78;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593bf80 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593bf80 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593bf80;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593bf80) {
        uVar6 = DAT_710593bf80 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a5108;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a5108:
    DAT_710593bf78 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593bf78,puVar1,(size_t)param_3);
    DAT_710593bf78[(int)DAT_710593bf80] = 0;
  }
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_l");
  if ((DAT_710593bfc8 != &DAT_710593bf88) && (DAT_710593bfc8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593bfc8);
  }
  DAT_710593bf88 = 0;
  DAT_710593bfc8 = &DAT_710593bf88;
  DAT_710593bfd0 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593bfc8;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593bfd0 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593bfd0 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593bfd0;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593bfd0) {
        uVar6 = DAT_710593bfd0 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a525c;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a525c:
    DAT_710593bfc8 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593bfc8,puVar1,(size_t)param_3);
    DAT_710593bfc8[(int)DAT_710593bfd0] = 0;
  }
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_r");
  if ((DAT_710593c018 != &DAT_710593bfd8) && (DAT_710593c018 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c018);
  }
  DAT_710593bfd8 = 0;
  DAT_710593c018 = &DAT_710593bfd8;
  DAT_710593c020 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593c018;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593c020 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593c020 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593c020;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593c020) {
        uVar6 = DAT_710593c020 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a53b0;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a53b0:
    DAT_710593c018 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c018,puVar1,(size_t)param_3);
    DAT_710593c018[(int)DAT_710593c020] = 0;
  }
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_z");
  if ((DAT_710593c0b8 != &DAT_710593c078) && (DAT_710593c0b8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c0b8);
  }
  DAT_710593c078 = 0;
  DAT_710593c0b8 = &DAT_710593c078;
  DAT_710593c0c0 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593c0b8;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593c0c0 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593c0c0 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593c0c0;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593c0c0) {
        uVar6 = DAT_710593c0c0 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a5504;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a5504:
    DAT_710593c0b8 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c0b8,puVar1,(size_t)param_3);
    DAT_710593c0b8[(int)DAT_710593c0c0] = 0;
  }
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_start");
  if ((DAT_710593c108 != &DAT_710593c0c8) && (DAT_710593c108 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c108);
  }
  DAT_710593c0c8 = 0;
  DAT_710593c108 = &DAT_710593c0c8;
  DAT_710593c110 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593c108;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593c110 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593c110 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593c110;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593c110) {
        uVar6 = DAT_710593c110 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a5658;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a5658:
    DAT_710593c108 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c108,puVar1,(size_t)param_3);
    DAT_710593c108[(int)DAT_710593c110] = 0;
  }
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_start");
  if ((DAT_710593c158 != &DAT_710593c118) && (DAT_710593c158 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c158);
  }
  DAT_710593c118 = 0;
  DAT_710593c158 = &DAT_710593c118;
  DAT_710593c160 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593c158;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593c160 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593c160 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593c160;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593c160) {
        uVar6 = DAT_710593c160 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a57ac;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a57ac:
    DAT_710593c158 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c158,puVar1,(size_t)param_3);
    DAT_710593c158[(int)DAT_710593c160] = 0;
  }
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_stick_l");
  if ((DAT_710593c248 != &DAT_710593c208) && (DAT_710593c248 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c248);
  }
  DAT_710593c208 = 0;
  DAT_710593c248 = &DAT_710593c208;
  DAT_710593c250 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593c248;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593c250 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593c250 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593c250;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593c250) {
        uVar6 = DAT_710593c250 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a5900;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a5900:
    DAT_710593c248 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c248,puVar1,(size_t)param_3);
    DAT_710593c248[(int)DAT_710593c250] = 0;
  }
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_stick_l");
  if ((DAT_710593c298 != &DAT_710593c258) && (DAT_710593c298 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c298);
  }
  DAT_710593c258 = 0;
  DAT_710593c298 = &DAT_710593c258;
  DAT_710593c2a0 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593c298;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593c2a0 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593c2a0 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593c2a0;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593c2a0) {
        uVar6 = DAT_710593c2a0 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a5a54;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a5a54:
    DAT_710593c298 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c298,puVar1,(size_t)param_3);
    DAT_710593c298[(int)DAT_710593c2a0] = 0;
  }
  puVar1 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"cmn_button_gc_stick_c");
  if ((DAT_710593c2e8 != &DAT_710593c2a8) && (DAT_710593c2e8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c2e8);
  }
  DAT_710593c2a8 = 0;
  DAT_710593c2e8 = &DAT_710593c2a8;
  DAT_710593c2f0 = 0;
  if (puVar1 != (ushort *)0x0) {
    uVar7 = *puVar1;
    puVar2 = DAT_710593c2e8;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593c2f0 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      puVar9 = puVar1;
      do {
        if ((uVar7 | 1) == 0xf) {
          if (uVar7 == 0xe) {
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar8 = 3;
            if (uVar7 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 1;
        }
        uVar6 = iVar8 + uVar6;
        puVar9 = puVar1 + uVar6;
        DAT_710593c2f0 = iVar8 + (int)uVar11;
        uVar11 = (ulong)DAT_710593c2f0;
        uVar7 = *puVar9;
      } while (uVar7 != 0);
      if (0x1f < DAT_710593c2f0) {
        uVar6 = DAT_710593c2f0 * 2 + 2;
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        ppplVar10 = (long ***)(ulong)uVar6;
        puVar2 = (ushort *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar2 == (ushort *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar2 = (ushort *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar2 != (ushort *)0x0)) goto LAB_71037a5ba8;
          }
          puVar2 = (ushort *)0x0;
        }
      }
    }
LAB_71037a5ba8:
    DAT_710593c2e8 = puVar2;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c2e8,puVar1,(size_t)param_3);
    DAT_710593c2e8[(int)DAT_710593c2f0] = 0;
  }
  uVar6 = DAT_710593bcb0;
  puVar1 = DAT_710593bca8;
  uVar11 = (ulong)DAT_710593bcb0;
  if ((DAT_710593c428 != &DAT_710593c3e8) && (DAT_710593c428 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c428);
  }
  DAT_710593c3e8 = 0;
  DAT_710593c428 = &DAT_710593c3e8;
  DAT_710593c430 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c428;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a5c78;
      }
      uVar11 = 0;
      DAT_710593c430 = 0;
    }
    else {
LAB_71037a5c78:
      DAT_710593c430 = (int)uVar11;
      if (0x1f < DAT_710593c430) {
        uVar3 = (ulong)(DAT_710593c430 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a5d00;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a5d00:
    DAT_710593c428 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c428,puVar1,(size_t)param_3);
    DAT_710593c428[DAT_710593c430] = 0;
  }
  uVar6 = DAT_710593bd00;
  puVar1 = DAT_710593bcf8;
  uVar11 = (ulong)DAT_710593bd00;
  if ((DAT_710593c478 != &DAT_710593c438) && (DAT_710593c478 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c478);
  }
  DAT_710593c438 = 0;
  DAT_710593c478 = &DAT_710593c438;
  DAT_710593c480 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c478;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a5dcc;
      }
      uVar11 = 0;
      DAT_710593c480 = 0;
    }
    else {
LAB_71037a5dcc:
      DAT_710593c480 = (int)uVar11;
      if (0x1f < DAT_710593c480) {
        uVar3 = (ulong)(DAT_710593c480 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a5e54;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a5e54:
    DAT_710593c478 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c478,puVar1,(size_t)param_3);
    DAT_710593c478[DAT_710593c480] = 0;
  }
  uVar6 = DAT_710593bd50;
  puVar1 = DAT_710593bd48;
  uVar11 = (ulong)DAT_710593bd50;
  if ((DAT_710593c4c8 != &DAT_710593c488) && (DAT_710593c4c8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c4c8);
  }
  DAT_710593c488 = 0;
  DAT_710593c4c8 = &DAT_710593c488;
  DAT_710593c4d0 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c4c8;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a5f20;
      }
      uVar11 = 0;
      DAT_710593c4d0 = 0;
    }
    else {
LAB_71037a5f20:
      DAT_710593c4d0 = (int)uVar11;
      if (0x1f < DAT_710593c4d0) {
        uVar3 = (ulong)(DAT_710593c4d0 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a5fa8;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a5fa8:
    DAT_710593c4c8 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c4c8,puVar1,(size_t)param_3);
    DAT_710593c4c8[DAT_710593c4d0] = 0;
  }
  uVar6 = DAT_710593bda0;
  puVar1 = DAT_710593bd98;
  uVar11 = (ulong)DAT_710593bda0;
  if ((DAT_710593c518 != &DAT_710593c4d8) && (DAT_710593c518 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c518);
  }
  DAT_710593c4d8 = 0;
  DAT_710593c518 = &DAT_710593c4d8;
  DAT_710593c520 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c518;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a6074;
      }
      uVar11 = 0;
      DAT_710593c520 = 0;
    }
    else {
LAB_71037a6074:
      DAT_710593c520 = (int)uVar11;
      if (0x1f < DAT_710593c520) {
        uVar3 = (ulong)(DAT_710593c520 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a60fc;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a60fc:
    DAT_710593c518 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c518,puVar1,(size_t)param_3);
    DAT_710593c518[DAT_710593c520] = 0;
  }
  uVar6 = DAT_710593bdf0;
  puVar1 = DAT_710593bde8;
  uVar11 = (ulong)DAT_710593bdf0;
  if ((DAT_710593c568 != &DAT_710593c528) && (DAT_710593c568 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c568);
  }
  DAT_710593c528 = 0;
  DAT_710593c568 = &DAT_710593c528;
  DAT_710593c570 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c568;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a61c8;
      }
      uVar11 = 0;
      DAT_710593c570 = 0;
    }
    else {
LAB_71037a61c8:
      DAT_710593c570 = (int)uVar11;
      if (0x1f < DAT_710593c570) {
        uVar3 = (ulong)(DAT_710593c570 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a6250;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a6250:
    DAT_710593c568 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c568,puVar1,(size_t)param_3);
    DAT_710593c568[DAT_710593c570] = 0;
  }
  uVar6 = DAT_710593be40;
  puVar1 = DAT_710593be38;
  uVar11 = (ulong)DAT_710593be40;
  if ((DAT_710593c5b8 != &DAT_710593c578) && (DAT_710593c5b8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c5b8);
  }
  DAT_710593c578 = 0;
  DAT_710593c5b8 = &DAT_710593c578;
  DAT_710593c5c0 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c5b8;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a631c;
      }
      uVar11 = 0;
      DAT_710593c5c0 = 0;
    }
    else {
LAB_71037a631c:
      DAT_710593c5c0 = (int)uVar11;
      if (0x1f < DAT_710593c5c0) {
        uVar3 = (ulong)(DAT_710593c5c0 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a63a4;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a63a4:
    DAT_710593c5b8 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c5b8,puVar1,(size_t)param_3);
    DAT_710593c5b8[DAT_710593c5c0] = 0;
  }
  uVar6 = DAT_710593be90;
  puVar1 = DAT_710593be88;
  uVar11 = (ulong)DAT_710593be90;
  if ((DAT_710593c608 != &DAT_710593c5c8) && (DAT_710593c608 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c608);
  }
  DAT_710593c5c8 = 0;
  DAT_710593c608 = &DAT_710593c5c8;
  DAT_710593c610 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c608;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a6470;
      }
      uVar11 = 0;
      DAT_710593c610 = 0;
    }
    else {
LAB_71037a6470:
      DAT_710593c610 = (int)uVar11;
      if (0x1f < DAT_710593c610) {
        uVar3 = (ulong)(DAT_710593c610 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a64f8;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a64f8:
    DAT_710593c608 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c608,puVar1,(size_t)param_3);
    DAT_710593c608[DAT_710593c610] = 0;
  }
  uVar6 = DAT_710593bee0;
  puVar1 = DAT_710593bed8;
  uVar11 = (ulong)DAT_710593bee0;
  if ((DAT_710593c658 != &DAT_710593c618) && (DAT_710593c658 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c658);
  }
  DAT_710593c618 = 0;
  DAT_710593c658 = &DAT_710593c618;
  DAT_710593c660 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c658;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a65c4;
      }
      uVar11 = 0;
      DAT_710593c660 = 0;
    }
    else {
LAB_71037a65c4:
      DAT_710593c660 = (int)uVar11;
      if (0x1f < DAT_710593c660) {
        uVar3 = (ulong)(DAT_710593c660 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a664c;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a664c:
    DAT_710593c658 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c658,puVar1,(size_t)param_3);
    DAT_710593c658[DAT_710593c660] = 0;
  }
  uVar6 = DAT_710593bf30;
  puVar1 = DAT_710593bf28;
  uVar11 = (ulong)DAT_710593bf30;
  if ((DAT_710593c6a8 != &DAT_710593c668) && (DAT_710593c6a8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c6a8);
  }
  DAT_710593c668 = 0;
  DAT_710593c6a8 = &DAT_710593c668;
  DAT_710593c6b0 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c6a8;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a6718;
      }
      uVar11 = 0;
      DAT_710593c6b0 = 0;
    }
    else {
LAB_71037a6718:
      DAT_710593c6b0 = (int)uVar11;
      if (0x1f < DAT_710593c6b0) {
        uVar3 = (ulong)(DAT_710593c6b0 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a67a0;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a67a0:
    DAT_710593c6a8 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c6a8,puVar1,(size_t)param_3);
    DAT_710593c6a8[DAT_710593c6b0] = 0;
  }
  uVar6 = DAT_710593bf80;
  puVar1 = DAT_710593bf78;
  uVar11 = (ulong)DAT_710593bf80;
  if ((DAT_710593c6f8 != &DAT_710593c6b8) && (DAT_710593c6f8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c6f8);
  }
  DAT_710593c6b8 = 0;
  DAT_710593c6f8 = &DAT_710593c6b8;
  DAT_710593c700 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c6f8;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a686c;
      }
      uVar11 = 0;
      DAT_710593c700 = 0;
    }
    else {
LAB_71037a686c:
      DAT_710593c700 = (int)uVar11;
      if (0x1f < DAT_710593c700) {
        uVar3 = (ulong)(DAT_710593c700 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a68f4;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a68f4:
    DAT_710593c6f8 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c6f8,puVar1,(size_t)param_3);
    DAT_710593c6f8[DAT_710593c700] = 0;
  }
  uVar6 = DAT_710593bfd0;
  puVar1 = DAT_710593bfc8;
  uVar11 = (ulong)DAT_710593bfd0;
  if ((DAT_710593c748 != &DAT_710593c708) && (DAT_710593c748 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c748);
  }
  DAT_710593c708 = 0;
  DAT_710593c748 = &DAT_710593c708;
  DAT_710593c750 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c748;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a69c0;
      }
      uVar11 = 0;
      DAT_710593c750 = 0;
    }
    else {
LAB_71037a69c0:
      DAT_710593c750 = (int)uVar11;
      if (0x1f < DAT_710593c750) {
        uVar3 = (ulong)(DAT_710593c750 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a6a48;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a6a48:
    DAT_710593c748 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c748,puVar1,(size_t)param_3);
    DAT_710593c748[DAT_710593c750] = 0;
  }
  uVar6 = DAT_710593c020;
  puVar1 = DAT_710593c018;
  uVar11 = (ulong)DAT_710593c020;
  if ((DAT_710593c798 != &DAT_710593c758) && (DAT_710593c798 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c798);
  }
  DAT_710593c758 = 0;
  DAT_710593c798 = &DAT_710593c758;
  DAT_710593c7a0 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c798;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a6b14;
      }
      uVar11 = 0;
      DAT_710593c7a0 = 0;
    }
    else {
LAB_71037a6b14:
      DAT_710593c7a0 = (int)uVar11;
      if (0x1f < DAT_710593c7a0) {
        uVar3 = (ulong)(DAT_710593c7a0 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a6b9c;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a6b9c:
    DAT_710593c798 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c798,puVar1,(size_t)param_3);
    DAT_710593c798[DAT_710593c7a0] = 0;
  }
  uVar6 = DAT_710593c070;
  puVar1 = DAT_710593c068;
  uVar11 = (ulong)DAT_710593c070;
  if ((DAT_710593c7e8 != &DAT_710593c7a8) && (DAT_710593c7e8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c7e8);
  }
  DAT_710593c7a8 = 0;
  DAT_710593c7e8 = &DAT_710593c7a8;
  DAT_710593c7f0 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c7e8;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a6c68;
      }
      uVar11 = 0;
      DAT_710593c7f0 = 0;
    }
    else {
LAB_71037a6c68:
      DAT_710593c7f0 = (int)uVar11;
      if (0x1f < DAT_710593c7f0) {
        uVar3 = (ulong)(DAT_710593c7f0 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a6cf0;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a6cf0:
    DAT_710593c7e8 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c7e8,puVar1,(size_t)param_3);
    DAT_710593c7e8[DAT_710593c7f0] = 0;
  }
  uVar6 = DAT_710593c0c0;
  puVar1 = DAT_710593c0b8;
  uVar11 = (ulong)DAT_710593c0c0;
  if ((DAT_710593c838 != &DAT_710593c7f8) && (DAT_710593c838 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c838);
  }
  DAT_710593c7f8 = 0;
  DAT_710593c838 = &DAT_710593c7f8;
  DAT_710593c840 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c838;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a6dbc;
      }
      uVar11 = 0;
      DAT_710593c840 = 0;
    }
    else {
LAB_71037a6dbc:
      DAT_710593c840 = (int)uVar11;
      if (0x1f < DAT_710593c840) {
        uVar3 = (ulong)(DAT_710593c840 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a6e44;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a6e44:
    DAT_710593c838 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c838,puVar1,(size_t)param_3);
    DAT_710593c838[DAT_710593c840] = 0;
  }
  uVar6 = DAT_710593c110;
  puVar1 = DAT_710593c108;
  uVar11 = (ulong)DAT_710593c110;
  if ((DAT_710593c888 != &DAT_710593c848) && (DAT_710593c888 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c888);
  }
  DAT_710593c848 = 0;
  DAT_710593c888 = &DAT_710593c848;
  DAT_710593c890 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c888;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a6f10;
      }
      uVar11 = 0;
      DAT_710593c890 = 0;
    }
    else {
LAB_71037a6f10:
      DAT_710593c890 = (int)uVar11;
      if (0x1f < DAT_710593c890) {
        uVar3 = (ulong)(DAT_710593c890 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a6f98;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a6f98:
    DAT_710593c888 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c888,puVar1,(size_t)param_3);
    DAT_710593c888[DAT_710593c890] = 0;
  }
  uVar6 = DAT_710593c160;
  puVar1 = DAT_710593c158;
  uVar11 = (ulong)DAT_710593c160;
  if ((DAT_710593c8d8 != &DAT_710593c898) && (DAT_710593c8d8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c8d8);
  }
  DAT_710593c898 = 0;
  DAT_710593c8d8 = &DAT_710593c898;
  DAT_710593c8e0 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c8d8;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a7064;
      }
      uVar11 = 0;
      DAT_710593c8e0 = 0;
    }
    else {
LAB_71037a7064:
      DAT_710593c8e0 = (int)uVar11;
      if (0x1f < DAT_710593c8e0) {
        uVar3 = (ulong)(DAT_710593c8e0 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a70ec;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a70ec:
    DAT_710593c8d8 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c8d8,puVar1,(size_t)param_3);
    DAT_710593c8d8[DAT_710593c8e0] = 0;
  }
  uVar6 = DAT_710593c1b0;
  puVar1 = DAT_710593c1a8;
  uVar11 = (ulong)DAT_710593c1b0;
  if ((DAT_710593c928 != &DAT_710593c8e8) && (DAT_710593c928 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c928);
  }
  DAT_710593c8e8 = 0;
  DAT_710593c928 = &DAT_710593c8e8;
  DAT_710593c930 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c928;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a71b8;
      }
      uVar11 = 0;
      DAT_710593c930 = 0;
    }
    else {
LAB_71037a71b8:
      DAT_710593c930 = (int)uVar11;
      if (0x1f < DAT_710593c930) {
        uVar3 = (ulong)(DAT_710593c930 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a7240;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a7240:
    DAT_710593c928 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c928,puVar1,(size_t)param_3);
    DAT_710593c928[DAT_710593c930] = 0;
  }
  uVar6 = DAT_710593c200;
  puVar1 = DAT_710593c1f8;
  uVar11 = (ulong)DAT_710593c200;
  if ((DAT_710593c978 != &DAT_710593c938) && (DAT_710593c978 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c978);
  }
  DAT_710593c938 = 0;
  DAT_710593c978 = &DAT_710593c938;
  DAT_710593c980 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c978;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a730c;
      }
      uVar11 = 0;
      DAT_710593c980 = 0;
    }
    else {
LAB_71037a730c:
      DAT_710593c980 = (int)uVar11;
      if (0x1f < DAT_710593c980) {
        uVar3 = (ulong)(DAT_710593c980 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a7394;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a7394:
    DAT_710593c978 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c978,puVar1,(size_t)param_3);
    DAT_710593c978[DAT_710593c980] = 0;
  }
  uVar6 = DAT_710593c250;
  puVar1 = DAT_710593c248;
  uVar11 = (ulong)DAT_710593c250;
  if ((DAT_710593c9c8 != &DAT_710593c988) && (DAT_710593c9c8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593c9c8);
  }
  DAT_710593c988 = 0;
  DAT_710593c9c8 = &DAT_710593c988;
  DAT_710593c9d0 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593c9c8;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a7460;
      }
      uVar11 = 0;
      DAT_710593c9d0 = 0;
    }
    else {
LAB_71037a7460:
      DAT_710593c9d0 = (int)uVar11;
      if (0x1f < DAT_710593c9d0) {
        uVar3 = (ulong)(DAT_710593c9d0 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a74e8;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a74e8:
    DAT_710593c9c8 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593c9c8,puVar1,(size_t)param_3);
    DAT_710593c9c8[DAT_710593c9d0] = 0;
  }
  uVar6 = DAT_710593c2a0;
  puVar1 = DAT_710593c298;
  uVar11 = (ulong)DAT_710593c2a0;
  if ((DAT_710593ca18 != &DAT_710593c9d8) && (DAT_710593ca18 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593ca18);
  }
  DAT_710593c9d8 = 0;
  DAT_710593ca18 = &DAT_710593c9d8;
  DAT_710593ca20 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593ca18;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a75b4;
      }
      uVar11 = 0;
      DAT_710593ca20 = 0;
    }
    else {
LAB_71037a75b4:
      DAT_710593ca20 = (int)uVar11;
      if (0x1f < DAT_710593ca20) {
        uVar3 = (ulong)(DAT_710593ca20 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a763c;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a763c:
    DAT_710593ca18 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593ca18,puVar1,(size_t)param_3);
    DAT_710593ca18[DAT_710593ca20] = 0;
  }
  uVar6 = DAT_710593c2f0;
  puVar1 = DAT_710593c2e8;
  uVar11 = (ulong)DAT_710593c2f0;
  if ((DAT_710593ca68 != &DAT_710593ca28) && (DAT_710593ca68 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593ca68);
  }
  DAT_710593ca28 = 0;
  DAT_710593ca68 = &DAT_710593ca28;
  DAT_710593ca70 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593ca68;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a7708;
      }
      uVar11 = 0;
      DAT_710593ca70 = 0;
    }
    else {
LAB_71037a7708:
      DAT_710593ca70 = (int)uVar11;
      if (0x1f < DAT_710593ca70) {
        uVar3 = (ulong)(DAT_710593ca70 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a7790;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a7790:
    DAT_710593ca68 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593ca68,puVar1,(size_t)param_3);
    DAT_710593ca68[DAT_710593ca70] = 0;
  }
  uVar6 = DAT_710593c340;
  puVar1 = DAT_710593c338;
  uVar11 = (ulong)DAT_710593c340;
  if ((DAT_710593cab8 != &DAT_710593ca78) && (DAT_710593cab8 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593cab8);
  }
  DAT_710593ca78 = 0;
  DAT_710593cab8 = &DAT_710593ca78;
  DAT_710593cac0 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593cab8;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a785c;
      }
      uVar11 = 0;
      DAT_710593cac0 = 0;
    }
    else {
LAB_71037a785c:
      DAT_710593cac0 = (int)uVar11;
      if (0x1f < DAT_710593cac0) {
        uVar3 = (ulong)(DAT_710593cac0 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a78e4;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a78e4:
    DAT_710593cab8 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593cab8,puVar1,(size_t)param_3);
    DAT_710593cab8[DAT_710593cac0] = 0;
  }
  uVar6 = DAT_710593c390;
  puVar1 = DAT_710593c388;
  uVar11 = (ulong)DAT_710593c390;
  if ((DAT_710593cb08 != &DAT_710593cac8) && (DAT_710593cb08 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593cb08);
  }
  DAT_710593cac8 = 0;
  DAT_710593cb08 = &DAT_710593cac8;
  DAT_710593cb10 = 0;
  if (puVar1 != (ushort *)0x0) {
    puVar4 = DAT_710593cb08;
    if ((int)uVar6 < 0) {
      uVar7 = *puVar1;
      if (uVar7 != 0) {
        uVar6 = 0;
        uVar11 = 0;
        puVar2 = puVar1;
        do {
          if ((uVar7 | 1) == 0xf) {
            if (uVar7 == 0xe) {
              iVar8 = (puVar2[3] >> 1) + 4;
            }
            else {
              iVar8 = 3;
              if (uVar7 != 0xf) {
                iVar8 = 0;
              }
            }
          }
          else {
            iVar8 = 1;
          }
          uVar6 = iVar8 + uVar6;
          puVar2 = puVar1 + uVar6;
          uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
          uVar7 = *puVar2;
        } while (uVar7 != 0);
        goto LAB_71037a79b0;
      }
      uVar11 = 0;
      DAT_710593cb10 = 0;
    }
    else {
LAB_71037a79b0:
      DAT_710593cb10 = (int)uVar11;
      if (0x1f < DAT_710593cb10) {
        uVar3 = (ulong)(DAT_710593cb10 + 1);
        ppplVar10 = (long ***)(uVar3 * 2);
        if (CARRY8(uVar3,uVar3)) {
          ppplVar10 = (long ***)0xffffffffffffffff;
        }
        if (ppplVar10 == (long ***)0x0) {
          ppplVar10 = (long ***)0x1;
        }
        puVar4 = (undefined2 *)
                 FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        if (puVar4 == (undefined2 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_34 = 0;
            pppplVar5 = &local_48;
            local_48 = ppplVar10;
            uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
            if (((uVar3 & 1) != 0) &&
               (puVar4 = (undefined2 *)
                         FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,
                                        param_8), puVar4 != (undefined2 *)0x0)) goto LAB_71037a7a38;
          }
          puVar4 = (undefined2 *)0x0;
        }
      }
    }
LAB_71037a7a38:
    DAT_710593cb08 = puVar4;
    param_3 = (long ****)(-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
    memcpy(DAT_710593cb08,puVar1,(size_t)param_3);
    DAT_710593cb08[DAT_710593cb10] = 0;
  }
  uVar6 = DAT_710593c3e0;
  puVar1 = DAT_710593c3d8;
  uVar11 = (ulong)DAT_710593c3e0;
  if ((DAT_710593cb58 != &DAT_710593cb18) && (DAT_710593cb58 != (undefined2 *)0x0)) {
    FUN_710392eb40((ulong)DAT_710593cb58);
  }
  DAT_710593cb18 = 0;
  DAT_710593cb58 = &DAT_710593cb18;
  if (puVar1 == (ushort *)0x0) {
    DAT_710593cb18 = 0;
    DAT_710593cb60 = 0;
    return;
  }
  puVar4 = DAT_710593cb58;
  if ((int)uVar6 < 0) {
    uVar7 = *puVar1;
    if (uVar7 == 0) {
      uVar11 = 0;
      DAT_710593cb60 = 0;
      goto LAB_71037a7b8c;
    }
    uVar6 = 0;
    uVar11 = 0;
    puVar2 = puVar1;
    do {
      if ((uVar7 | 1) == 0xf) {
        if (uVar7 == 0xe) {
          iVar8 = (puVar2[3] >> 1) + 4;
        }
        else {
          iVar8 = 3;
          if (uVar7 != 0xf) {
            iVar8 = 0;
          }
        }
      }
      else {
        iVar8 = 1;
      }
      uVar6 = iVar8 + uVar6;
      puVar2 = puVar1 + uVar6;
      uVar11 = (ulong)(uint)(iVar8 + (int)uVar11);
      uVar7 = *puVar2;
    } while (uVar7 != 0);
  }
  DAT_710593cb60 = (int)uVar11;
  if (0x1f < DAT_710593cb60) {
    uVar3 = (ulong)(DAT_710593cb60 + 1);
    ppplVar10 = (long ***)(uVar3 * 2);
    if (CARRY8(uVar3,uVar3)) {
      ppplVar10 = (long ***)0xffffffffffffffff;
    }
    if (ppplVar10 == (long ***)0x0) {
      ppplVar10 = (long ***)0x1;
    }
    puVar4 = (undefined2 *)
             FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar4 == (undefined2 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_34 = 0;
        pppplVar5 = &local_48;
        local_48 = ppplVar10;
        uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
        if (((uVar3 & 1) != 0) &&
           (puVar4 = (undefined2 *)
                     FUN_710392e290(0x10,ppplVar10,pppplVar5,param_4,param_5,param_6,param_7,param_8
                                   ), puVar4 != (undefined2 *)0x0)) goto LAB_71037a7b8c;
      }
      puVar4 = (undefined2 *)0x0;
    }
  }
LAB_71037a7b8c:
  DAT_710593cb58 = puVar4;
  memcpy(DAT_710593cb58,puVar1,-(uVar11 >> 0x1f) & 0xfffffffe00000000 | uVar11 << 1);
  DAT_710593cb58[DAT_710593cb60] = 0;
  return;
}

