// addr:      7101f1ee70
// offset:    0x1f1ee70
// name:      FUN_7101f1ee70
// mangled:   
// signature: undefined __cdecl FUN_7101f1ee70(long * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101f1ee70(long *param_1)

{
  long *********ppppppppplVar1;
  byte ****ppppbVar2;
  int iVar3;
  byte bVar4;
  undefined **ppuVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
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
  char *pcVar16;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 uVar17;
  long ****pppplVar18;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  byte ****ppppbVar21;
  byte ****ppppbVar22;
  long ****pppplVar23;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long *********ppppppppplVar24;
  code *pcVar25;
  long lVar26;
  long *plVar27;
  int *piVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  int iVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long *plVar36;
  long lVar37;
  undefined8 *puVar38;
  char cVar39;
  long *plVar40;
  long lVar41;
  long *********ppppppppplVar42;
  ulong uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined8 local_1c8;
  int *local_1c0;
  undefined4 local_180 [2];
  undefined **local_178;
  long local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined **local_140;
  undefined **local_138;
  undefined ***local_120;
  byte local_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined1 local_107;
  undefined6 uStack_106;
  ulong local_100;
  undefined8 uStack_f8;
  byte *local_f0;
  undefined **local_e0;
  undefined **local_d8;
  long *********local_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_88;
  
  ppppppppplVar1 = (long *********)(param_1 + 0x7f);
  ppppppppplVar24 = (long *********)(param_1 + 0x82);
  ppppbVar22 = (byte ****)(param_1 + 0x88);
  pppplVar23 = (long ****)(ulong)*(uint *)(param_1[0x6c] + 0x17c);
  ppppppppplVar19 = ppppppppplVar24;
  ppppbVar20 = ppppbVar22;
  FUN_7101f3a040((long *)param_1[0x68],(long *)ppppppppplVar1,ppppppppplVar24,ppppbVar22,pppplVar23,
                 in_x5,in_x6,in_x7);
  if (0x12 < *(uint *)((long)param_1 + 0x2a4)) goto LAB_7101f22044;
  uVar6 = *(uint *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x2a4) * 4 + 600);
  uVar17 = extraout_x1;
  if (*(uint *)(param_1 + 0x55) != uVar6) {
    *(uint *)(param_1 + 0x56) = *(uint *)(param_1 + 0x55);
    *(uint *)(param_1 + 0x55) = uVar6;
    if (0x22 < uVar6) goto LAB_7101f22044;
    lVar26 = param_1[(long)(int)uVar6 * 2 + 6];
    param_1[1] = param_1[(long)(int)uVar6 * 2 + 5];
    param_1[2] = lVar26;
    pcVar25 = (code *)param_1[3];
    uVar30 = param_1[4] & 1;
    if (uVar30 != 0 || pcVar25 != (code *)0x0) {
      if (uVar30 != 0) {
        pcVar25 = *(code **)(pcVar25 + *(long *)(*param_1 + (param_1[4] >> 1)));
      }
      (*pcVar25)();
      uVar17 = extraout_x1_00;
    }
    *(undefined4 *)((long)param_1 + 0x2ac) = 0;
  }
  if (*(char *)((long)param_1 + 0x2b4) != '\0') {
    pcVar25 = (code *)param_1[3];
    uVar30 = param_1[4] & 1;
    if (uVar30 != 0 || pcVar25 != (code *)0x0) {
      if (uVar30 != 0) {
        pcVar25 = *(code **)(pcVar25 + *(long *)(*param_1 + (param_1[4] >> 1)));
      }
      (*pcVar25)();
      uVar17 = extraout_x1_01;
    }
    *(undefined4 *)((long)param_1 + 0x2ac) = 0;
    *(undefined1 *)((long)param_1 + 0x2b4) = 0;
  }
  if (*param_1 != 0) {
    pcVar25 = (code *)param_1[1];
    uVar30 = param_1[2] & 1;
    if (uVar30 != 0 || pcVar25 != (code *)0x0) {
      if (uVar30 != 0) {
        pcVar25 = *(code **)(pcVar25 + *(long *)(*param_1 + (param_1[2] >> 1)));
      }
      (*pcVar25)();
      uVar17 = extraout_x1_02;
    }
  }
  lVar26 = param_1[0x65];
  *(int *)((long)param_1 + 0x2ac) = *(int *)((long)param_1 + 0x2ac) + 1;
  if ((int)lVar26 == 0) {
    if (DAT_71053263e0 == DAT_71053263d8) goto LAB_7101f22048;
    uVar6 = *DAT_71053263d8;
    pppplVar18 = (long ****)(ulong)uVar6;
    if ((int)uVar6 < 0x500000) {
      if ((int)uVar6 < 0x250000) {
        if ((int)uVar6 < 0x200000) {
          if ((int)uVar6 < 0x150000) {
            if ((int)uVar6 < 0x100000) {
              if ((int)uVar6 < 0xfe000) {
                if ((int)uVar6 < 0x50000) {
                  if ((int)uVar6 < 0x10000) {
                    iVar32 = 3;
                    if (0 < (int)uVar6) {
                      iVar32 = 0;
                    }
                  }
                  else {
                    iVar32 = 1;
                  }
                }
                else {
                  iVar32 = 2;
                }
              }
              else {
                iVar32 = 8;
              }
            }
            else {
              iVar32 = 4;
            }
          }
          else {
            iVar32 = 6;
          }
        }
        else {
          iVar32 = 5;
        }
      }
      else {
        iVar32 = 7;
      }
    }
    else {
      iVar32 = 9;
    }
    FUN_7103775dc0((long *)**(undefined8 **)param_1[0x6a],iVar32,pppplVar18,ppppbVar20,pppplVar23,
                   in_x5,in_x6,in_x7);
    FUN_7103775fa0((long *)**(undefined8 **)param_1[0x6c],extraout_x1_08,pppplVar18,ppppbVar20,
                   pppplVar23,in_x5,in_x6,in_x7);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1[0x6e] + 0xd0),extraout_x1_09,pppplVar18,
                   ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1[0x70] + 0xe8),extraout_x1_10,pppplVar18,
                   ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1[0x72] + 0x178),extraout_x1_11,pppplVar18,
                   ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1[0x74] + 0xb8),extraout_x1_12,pppplVar18,
                   ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    uVar17 = extraout_x1_13;
LAB_7101f1f958:
    FUN_7103775fa0((long *)**(undefined8 **)param_1[0x76],uVar17,pppplVar18,ppppbVar20,pppplVar23,
                   in_x5,in_x6,in_x7);
    FUN_7103775fa0((long *)**(undefined8 **)param_1[0x78],extraout_x1_15,pppplVar18,ppppbVar20,
                   pppplVar23,in_x5,in_x6,in_x7);
    FUN_7103775fa0((long *)**(undefined8 **)param_1[0x7a],extraout_x1_16,pppplVar18,ppppbVar20,
                   pppplVar23,in_x5,in_x6,in_x7);
  }
  else {
    FUN_7103775fa0((long *)**(undefined8 **)param_1[0x6a],uVar17,(long ****)ppppppppplVar19,
                   ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    if ((int)lVar26 != 0x13) {
      if ((ulong)((long)DAT_71053263e0 - (long)DAT_71053263d8 >> 2) < 2) goto LAB_7101f22048;
      uVar6 = DAT_71053263d8[1];
      if ((int)uVar6 < 0x4fffff) {
        if ((int)uVar6 < 0x24ffff) {
          if ((int)uVar6 < 0x1fffff) {
            if ((int)uVar6 < 0x14ffff) {
              if ((int)uVar6 < 0xfffff) {
                if ((int)uVar6 < 0xfdfff) {
                  if ((int)uVar6 < 0x4ffff) {
                    if ((int)uVar6 < 0xffff) {
                      uVar15 = (int)uVar6 >> 0x1f & 3;
                    }
                    else {
                      uVar15 = 1;
                    }
                  }
                  else {
                    uVar15 = 2;
                  }
                }
                else {
                  uVar15 = 8;
                }
              }
              else {
                uVar15 = 4;
              }
            }
            else {
              uVar15 = 6;
            }
          }
          else {
            uVar15 = 5;
          }
        }
        else {
          uVar15 = 7;
        }
      }
      else {
        uVar15 = 9;
      }
      FUN_7103775dc0((long *)**(undefined8 **)param_1[0x6c],uVar15,(long ****)(ulong)(uVar6 + 1),
                     ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
      uVar30 = (long)DAT_71053263e0 - (long)DAT_71053263d8 >> 2;
      if ((uVar30 < 3) || (uVar30 < 0xb)) goto LAB_7101f22048;
      uVar6 = DAT_71053263d8[2];
      uVar15 = DAT_71053263d8[10];
      lVar26 = param_1[0x6e];
      if ((int)uVar6 < 0x4ffffe) {
        if ((int)uVar6 < 0x24fffe) {
          if ((int)uVar6 < 0x1ffffe) {
            if ((int)uVar6 < 0x14fffe) {
              if ((int)uVar6 < 0xffffe) {
                if ((int)uVar6 < 0xfdffe) {
                  if ((int)uVar6 < 0x4fffe) {
                    if ((int)uVar6 < 0xfffe) {
                      iVar32 = 3;
                      if (-2 < (int)uVar6) {
                        iVar32 = 0;
                      }
                    }
                    else {
                      iVar32 = 1;
                    }
                  }
                  else {
                    iVar32 = 2;
                  }
                }
                else {
                  iVar32 = 8;
                }
              }
              else {
                iVar32 = 4;
              }
            }
            else {
              iVar32 = 6;
            }
          }
          else {
            iVar32 = 5;
          }
        }
        else {
          iVar32 = 7;
        }
      }
      else {
        iVar32 = 9;
      }
      FUN_7103775dc0((long *)**(undefined8 **)(lVar26 + 0xd0),iVar32,(long ****)(ulong)(uVar6 + 2),
                     ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
      *(uint *)(lVar26 + 0x2e1f0) = uVar15 + 10;
      if ((ulong)((long)DAT_71053263e0 - (long)DAT_71053263d8 >> 2) < 4) goto LAB_7101f22048;
      uVar6 = DAT_71053263d8[3];
      if ((int)uVar6 < 0x4ffffd) {
        if ((int)uVar6 < 0x24fffd) {
          if ((int)uVar6 < 0x1ffffd) {
            if ((int)uVar6 < 0x14fffd) {
              if ((int)uVar6 < 0xffffd) {
                if ((int)uVar6 < 0xfdffd) {
                  if ((int)uVar6 < 0x4fffd) {
                    if ((int)uVar6 < 0xfffd) {
                      iVar32 = 3;
                      if (-3 < (int)uVar6) {
                        iVar32 = 0;
                      }
                    }
                    else {
                      iVar32 = 1;
                    }
                  }
                  else {
                    iVar32 = 2;
                  }
                }
                else {
                  iVar32 = 8;
                }
              }
              else {
                iVar32 = 4;
              }
            }
            else {
              iVar32 = 6;
            }
          }
          else {
            iVar32 = 5;
          }
        }
        else {
          iVar32 = 7;
        }
      }
      else {
        iVar32 = 9;
      }
      FUN_7103775dc0((long *)**(undefined8 **)(param_1[0x70] + 0xe8),iVar32,
                     (long ****)(ulong)(uVar6 + 3),ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
      if ((ulong)((long)DAT_71053263e0 - (long)DAT_71053263d8 >> 2) < 5) goto LAB_7101f22048;
      uVar6 = DAT_71053263d8[4];
      if ((int)uVar6 < 0x4ffffc) {
        if ((int)uVar6 < 0x24fffc) {
          if ((int)uVar6 < 0x1ffffc) {
            if ((int)uVar6 < 0x14fffc) {
              if ((int)uVar6 < 0xffffc) {
                if ((int)uVar6 < 0xfdffc) {
                  if ((int)uVar6 < 0x4fffc) {
                    if ((int)uVar6 < 0xfffc) {
                      iVar32 = 3;
                      if (-4 < (int)uVar6) {
                        iVar32 = 0;
                      }
                    }
                    else {
                      iVar32 = 1;
                    }
                  }
                  else {
                    iVar32 = 2;
                  }
                }
                else {
                  iVar32 = 8;
                }
              }
              else {
                iVar32 = 4;
              }
            }
            else {
              iVar32 = 6;
            }
          }
          else {
            iVar32 = 5;
          }
        }
        else {
          iVar32 = 7;
        }
      }
      else {
        iVar32 = 9;
      }
      FUN_7103775dc0((long *)**(undefined8 **)(param_1[0x72] + 0x178),iVar32,
                     (long ****)(ulong)(uVar6 + 4),ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
      if ((ulong)((long)DAT_71053263e0 - (long)DAT_71053263d8 >> 2) < 6) goto LAB_7101f22048;
      uVar6 = DAT_71053263d8[5];
      pppplVar18 = (long ****)(ulong)(uVar6 + 5);
      if ((int)uVar6 < 0x4ffffb) {
        if ((int)uVar6 < 0x24fffb) {
          if ((int)uVar6 < 0x1ffffb) {
            if ((int)uVar6 < 0x14fffb) {
              if ((int)uVar6 < 0xffffb) {
                if ((int)uVar6 < 0xfdffb) {
                  if ((int)uVar6 < 0x4fffb) {
                    if ((int)uVar6 < 0xfffb) {
                      iVar32 = 3;
                      if (-5 < (int)uVar6) {
                        iVar32 = 0;
                      }
                    }
                    else {
                      iVar32 = 1;
                    }
                  }
                  else {
                    iVar32 = 2;
                  }
                }
                else {
                  iVar32 = 8;
                }
              }
              else {
                iVar32 = 4;
              }
            }
            else {
              iVar32 = 6;
            }
          }
          else {
            iVar32 = 5;
          }
        }
        else {
          iVar32 = 7;
        }
      }
      else {
        iVar32 = 9;
      }
      FUN_7103775dc0((long *)**(undefined8 **)(param_1[0x74] + 0xb8),iVar32,pppplVar18,ppppbVar20,
                     pppplVar23,in_x5,in_x6,in_x7);
      uVar17 = extraout_x1_14;
      goto LAB_7101f1f958;
    }
    FUN_7103775fa0((long *)**(undefined8 **)param_1[0x6c],extraout_x1_03,(long ****)ppppppppplVar19,
                   ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1[0x6e] + 0xd0),extraout_x1_04,
                   (long ****)ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1[0x70] + 0xe8),extraout_x1_05,
                   (long ****)ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1[0x72] + 0x178),extraout_x1_06,
                   (long ****)ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1[0x74] + 0xb8),extraout_x1_07,
                   (long ****)ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    if ((ulong)((long)DAT_71053263e0 - (long)DAT_71053263d8 >> 2) < 7) {
LAB_7101f22048:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar6 = DAT_71053263d8[6];
    if ((int)uVar6 < 0x4ffffa) {
      if ((int)uVar6 < 0x24fffa) {
        if ((int)uVar6 < 0x1ffffa) {
          if ((int)uVar6 < 0x14fffa) {
            if ((int)uVar6 < 0xffffa) {
              if ((int)uVar6 < 0xfdffa) {
                if ((int)uVar6 < 0x4fffa) {
                  if ((int)uVar6 < 0xfffa) {
                    iVar32 = 3;
                    if (-6 < (int)uVar6) {
                      iVar32 = 0;
                    }
                  }
                  else {
                    iVar32 = 1;
                  }
                }
                else {
                  iVar32 = 2;
                }
              }
              else {
                iVar32 = 8;
              }
            }
            else {
              iVar32 = 4;
            }
          }
          else {
            iVar32 = 6;
          }
        }
        else {
          iVar32 = 5;
        }
      }
      else {
        iVar32 = 7;
      }
    }
    else {
      iVar32 = 9;
    }
    FUN_7103775dc0((long *)**(undefined8 **)param_1[0x76],iVar32,(long ****)(ulong)(uVar6 + 6),
                   ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    if ((ulong)((long)DAT_71053263e0 - (long)DAT_71053263d8 >> 2) < 8) goto LAB_7101f22048;
    uVar6 = DAT_71053263d8[7];
    if ((int)uVar6 < 0x4ffff9) {
      if ((int)uVar6 < 0x24fff9) {
        if ((int)uVar6 < 0x1ffff9) {
          if ((int)uVar6 < 0x14fff9) {
            if ((int)uVar6 < 0xffff9) {
              if ((int)uVar6 < 0xfdff9) {
                if ((int)uVar6 < 0x4fff9) {
                  if ((int)uVar6 < 0xfff9) {
                    iVar32 = 3;
                    if (-7 < (int)uVar6) {
                      iVar32 = 0;
                    }
                  }
                  else {
                    iVar32 = 1;
                  }
                }
                else {
                  iVar32 = 2;
                }
              }
              else {
                iVar32 = 8;
              }
            }
            else {
              iVar32 = 4;
            }
          }
          else {
            iVar32 = 6;
          }
        }
        else {
          iVar32 = 5;
        }
      }
      else {
        iVar32 = 7;
      }
    }
    else {
      iVar32 = 9;
    }
    FUN_7103775dc0((long *)**(undefined8 **)param_1[0x78],iVar32,(long ****)(ulong)(uVar6 + 7),
                   ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    if ((ulong)((long)DAT_71053263e0 - (long)DAT_71053263d8 >> 2) < 9) goto LAB_7101f22048;
    uVar6 = DAT_71053263d8[8];
    if ((int)uVar6 < 0x4ffff8) {
      if ((int)uVar6 < 0x24fff8) {
        if ((int)uVar6 < 0x1ffff8) {
          if ((int)uVar6 < 0x14fff8) {
            if ((int)uVar6 < 0xffff8) {
              if ((int)uVar6 < 0xfdff8) {
                if ((int)uVar6 < 0x4fff8) {
                  if ((int)uVar6 < 0xfff8) {
                    iVar32 = 3;
                    if (-8 < (int)uVar6) {
                      iVar32 = 0;
                    }
                  }
                  else {
                    iVar32 = 1;
                  }
                }
                else {
                  iVar32 = 2;
                }
              }
              else {
                iVar32 = 8;
              }
            }
            else {
              iVar32 = 4;
            }
          }
          else {
            iVar32 = 6;
          }
        }
        else {
          iVar32 = 5;
        }
      }
      else {
        iVar32 = 7;
      }
    }
    else {
      iVar32 = 9;
    }
    FUN_7103775dc0((long *)**(undefined8 **)param_1[0x7a],iVar32,(long ****)(ulong)(uVar6 + 8),
                   ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
  }
  iVar32 = (int)param_1[0x65];
  puVar38 = (undefined8 *)param_1[0x6c];
  fVar44 = 2.10195e-44;
  if (iVar32 != 0x10) {
    fVar44 = 1.4013e-44;
  }
  ppuVar5 = (undefined **)FUN_7101f33670;
  if (iVar32 != 0x10) {
    ppuVar5 = (undefined **)FUN_7101f33680;
  }
  local_e0 = &PTR_FUN_71050a8230;
  fVar45 = fVar44;
  if (*(char *)(puVar38 + 0x50) != '\0') {
    fVar45 = 0.0;
  }
  local_d8 = ppuVar5;
  local_c0 = &local_e0;
  FUN_7101f336a0((float)*(int *)(puVar38 + 0x2f),(float *)(puVar38 + 0x32),(long *)&local_e0,fVar45)
  ;
  if (&local_e0 == local_c0) {
    pcVar25 = (code *)(*local_c0)[4];
LAB_7101f1fa0c:
    (*pcVar25)();
  }
  else if (local_c0 != (undefined ***)0x0) {
    pcVar25 = (code *)(*local_c0)[5];
    goto LAB_7101f1fa0c;
  }
  local_110 = 0x30;
  uStack_10f = 0x71050a82;
  uStack_108 = SUB81(ppuVar5,0);
  local_107 = (undefined1)((ulong)ppuVar5 >> 8);
  uStack_106 = (undefined6)((ulong)ppuVar5 >> 0x10);
  fVar45 = fVar44;
  if (*(char *)((long)puVar38 + 0x281) != '\0') {
    fVar45 = 0.0;
  }
  local_f0 = &local_110;
  FUN_7101f336a0((float)*(int *)((long)puVar38 + 0x17c),(float *)(puVar38 + 0x3c),(long *)&local_110
                 ,fVar45);
  if (&local_110 == local_f0) {
    pcVar25 = *(code **)(*(long *)local_f0 + 0x20);
LAB_7101f1fa60:
    (*pcVar25)();
  }
  else if (local_f0 != (byte *)0x0) {
    pcVar25 = *(code **)(*(long *)local_f0 + 0x28);
    goto LAB_7101f1fa60;
  }
  local_140 = &PTR_FUN_71050a8230;
  if (*(char *)((long)puVar38 + 0x282) != '\0') {
    fVar44 = 0.0;
  }
  local_138 = ppuVar5;
  local_120 = &local_140;
  FUN_7101f336a0((float)*(int *)(puVar38 + 0x31),(float *)(puVar38 + 0x46),(long *)&local_140,fVar44
                );
  if (&local_140 == local_120) {
    pcVar25 = (code *)(*local_120)[4];
LAB_7101f1fab4:
    (*pcVar25)();
  }
  else if (local_120 != (undefined ***)0x0) {
    pcVar25 = (code *)(*local_120)[5];
    goto LAB_7101f1fab4;
  }
  lVar26 = *(long *)(**(long **)*puVar38 + 0x608);
  if (*(long *)(**(long **)*puVar38 + 0x610) == lVar26) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(bool *)(*(long *)(lVar26 + 8) + 0x4aa) = iVar32 == 1;
  ppppppppplVar19 = (long *********)(ulong)*(uint *)(param_1 + 0x65);
  ppppbVar2 = (byte ****)(param_1 + 0x67);
  FUN_7101f2ded0(param_1[0x6e],ppppbVar2,ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
  plVar36 = (long *)param_1[0x70];
  if (0x12 < *(uint *)((long)plVar36 + 0xd4)) goto LAB_7101f22044;
  uVar6 = *(uint *)((long)plVar36 + (long)(int)*(uint *)((long)plVar36 + 0xd4) * 4 + 0x88);
  if (*(uint *)(plVar36 + 0x1b) != uVar6) {
    *(uint *)(plVar36 + 0x1c) = *(uint *)(plVar36 + 0x1b);
    *(uint *)(plVar36 + 0x1b) = uVar6;
    if (5 < uVar6) goto LAB_7101f22044;
    lVar26 = plVar36[(long)(int)uVar6 * 2 + 6];
    plVar36[1] = plVar36[(long)(int)uVar6 * 2 + 5];
    plVar36[2] = lVar26;
    pcVar25 = (code *)plVar36[3];
    uVar30 = plVar36[4] & 1;
    if (uVar30 != 0 || pcVar25 != (code *)0x0) {
      if (uVar30 != 0) {
        pcVar25 = *(code **)(pcVar25 + *(long *)(*plVar36 + (plVar36[4] >> 1)));
      }
      (*pcVar25)();
    }
    *(undefined4 *)((long)plVar36 + 0xdc) = 0;
  }
  if (*(char *)((long)plVar36 + 0xe4) != '\0') {
    pcVar25 = (code *)plVar36[3];
    uVar30 = plVar36[4] & 1;
    if (uVar30 != 0 || pcVar25 != (code *)0x0) {
      if (uVar30 != 0) {
        pcVar25 = *(code **)(pcVar25 + *(long *)(*plVar36 + (plVar36[4] >> 1)));
      }
      (*pcVar25)();
    }
    *(undefined4 *)((long)plVar36 + 0xdc) = 0;
    *(undefined1 *)((long)plVar36 + 0xe4) = 0;
  }
  if (*plVar36 != 0) {
    pcVar25 = (code *)plVar36[1];
    uVar30 = plVar36[2] & 1;
    if (uVar30 != 0 || pcVar25 != (code *)0x0) {
      if (uVar30 != 0) {
        pcVar25 = *(code **)(pcVar25 + *(long *)(*plVar36 + (plVar36[2] >> 1)));
      }
      (*pcVar25)();
    }
  }
  *(int *)((long)plVar36 + 0xdc) = *(int *)((long)plVar36 + 0xdc) + 1;
  if ((int)plVar36[0x1b] != 0) {
    if (*(int *)(plVar36[0x20] + 0x25c) == 1) {
      iVar9 = *(int *)(plVar36[0x1f] + 0x254);
      iVar32 = 0;
      if (iVar9 < 2) {
        iVar32 = iVar9 + 1;
      }
      iVar10 = 2;
      if (-2 < iVar9) {
        iVar10 = iVar32;
      }
      ppppppppplVar19 = (long *********)0x0;
      FUN_7103771a80(plVar36 + 0x1f,iVar10,0);
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        ppppppppplVar19 = (long *********)&DAT_00000004;
        uVar30 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,(long ****)&DAT_00000004,
                                ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
        if ((uVar30 & 1) == 0) goto LAB_7101f1fdd4;
        FUN_71024076d0((undefined4 *)&local_e0,0x10c0b65170);
        if (((local_d0 != (long *********)0x0) && (DAT_7106dd53a8 == '\x01')) &&
           ((int)local_c8 == DAT_7106dd53ac)) {
          local_d0 = local_d0 + 7;
          do {
            cVar39 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(local_d0,0x10);
            if (bVar8) {
              *(int *)local_d0 = *(int *)local_d0 + -1;
              cVar39 = ExclusiveMonitorsStatus();
            }
          } while (cVar39 != '\0');
        }
      }
      else {
LAB_7101f1fdd4:
        local_c0 = (undefined ***)((ulong)local_c0 & 0xffffffffffffff00);
        local_c8 = 0x87650000000000;
        local_b8 = 0xffffffffffffffff;
        uStack_b0 = 0;
        local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
        local_a8 = 0;
      }
      local_d8 = &PTR_FUN_7104f73d50;
      local_d0 = (long *********)0x0;
      local_c0 = (undefined ***)((ulong)local_c0 & 0xffffffffffffff00);
      lVar26 = plVar36[0x22];
      if (*(int *)(lVar26 + 0x130) != 0) {
        uVar6 = *(int *)(lVar26 + 0x130) - 1;
        if (0x10 < uVar6) goto LAB_7101f22044;
        plVar11 = *(long **)(*(long *)(lVar26 + (long)(int)uVar6 * 0x10 + 0x28) + 8);
        if (plVar11 == (long *)0x0) {
          puVar12 = &DAT_7104867c2e;
        }
        else {
          puVar12 = (undefined1 *)(**(code **)(*plVar11 + 0x110))();
        }
        lVar34 = *(long *)(lVar26 + 8);
        lVar26 = *(long *)(lVar34 + 8);
        if ((lVar26 != 0) &&
           (plVar11 = (long *)FUN_71037964b0(lVar26,(long)puVar12), plVar11 != (long *)0x0)) {
          (**(code **)(*plVar11 + 0x140))(plVar11,1);
          lVar26 = *(long *)(lVar34 + 8);
          if (lVar26 != 0) {
            plVar40 = *(long **)(lVar26 + 0x80);
            while (plVar40 != (long *)(lVar26 + 0x88)) {
              uVar30 = (**(code **)(*(long *)plVar40[0xd] + 0x148))();
              if (((uVar30 & 1) != 0) &&
                 (uVar30 = (**(code **)(*plVar11 + 0x120))(plVar11,plVar40[0xd]), (uVar30 & 1) != 0)
                 ) {
                (**(code **)(*(long *)plVar40[0xd] + 0x178))();
                (**(code **)(*(long *)plVar40[0xd] + 0x140))((long *)plVar40[0xd],0);
              }
              plVar27 = (long *)plVar40[1];
              if ((long *)plVar40[1] == (long *)0x0) {
                plVar27 = plVar40 + 2;
                bVar8 = *(long **)*plVar27 != plVar40;
                plVar40 = (long *)*plVar27;
                if (bVar8) {
                  do {
                    lVar34 = *plVar27;
                    plVar27 = (long *)(lVar34 + 0x10);
                    plVar40 = (long *)*plVar27;
                  } while (*plVar40 != lVar34);
                }
              }
              else {
                do {
                  plVar40 = plVar27;
                  plVar27 = (long *)*plVar40;
                } while ((long *)*plVar40 != (long *)0x0);
              }
            }
          }
          goto LAB_7101f20014;
        }
      }
    }
    else {
      if (*(int *)(plVar36[0x20] + 0x25c) != 0) goto LAB_7101f2003c;
      iVar9 = *(int *)(plVar36[0x1f] + 0x254);
      iVar32 = 0;
      if (iVar9 < 4) {
        iVar32 = iVar9 + -1;
      }
      iVar10 = 2;
      if (0 < iVar9) {
        iVar10 = iVar32;
      }
      ppppppppplVar19 = (long *********)0x0;
      FUN_7103771a80(plVar36 + 0x1f,iVar10,0);
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        ppppppppplVar19 = (long *********)&DAT_00000004;
        uVar30 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,(long ****)&DAT_00000004,
                                ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
        if ((uVar30 & 1) == 0) goto LAB_7101f1fd64;
        FUN_71024076d0((undefined4 *)&local_e0,0x10c0b65170);
        if (((local_d0 != (long *********)0x0) && (DAT_7106dd53a8 == '\x01')) &&
           ((int)local_c8 == DAT_7106dd53ac)) {
          local_d0 = local_d0 + 7;
          do {
            cVar39 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(local_d0,0x10);
            if (bVar8) {
              *(int *)local_d0 = *(int *)local_d0 + -1;
              cVar39 = ExclusiveMonitorsStatus();
            }
          } while (cVar39 != '\0');
        }
      }
      else {
LAB_7101f1fd64:
        local_c0 = (undefined ***)((ulong)local_c0 & 0xffffffffffffff00);
        local_c8 = 0x87650000000000;
        local_b8 = 0xffffffffffffffff;
        uStack_b0 = 0;
        local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
        local_a8 = 0;
      }
      local_d8 = &PTR_FUN_7104f73d50;
      local_d0 = (long *********)0x0;
      local_c0 = (undefined ***)((ulong)local_c0 & 0xffffffffffffff00);
      lVar26 = plVar36[0x22];
      if (*(int *)(lVar26 + 0x130) != 0) {
        uVar6 = *(int *)(lVar26 + 0x130) - 1;
        if (0x10 < uVar6) goto LAB_7101f22044;
        plVar11 = *(long **)(*(long *)(lVar26 + (long)(int)uVar6 * 0x10 + 0x28) + 8);
        if (plVar11 == (long *)0x0) {
          puVar12 = &DAT_7104867c2e;
        }
        else {
          puVar12 = (undefined1 *)(**(code **)(*plVar11 + 0x110))();
        }
        lVar34 = *(long *)(lVar26 + 8);
        lVar26 = *(long *)(lVar34 + 8);
        if ((lVar26 == 0) ||
           (plVar11 = (long *)FUN_71037964b0(lVar26,(long)puVar12), plVar11 == (long *)0x0))
        goto LAB_7101f20024;
        (**(code **)(*plVar11 + 0x140))(plVar11,1);
        lVar26 = *(long *)(lVar34 + 8);
        if (lVar26 != 0) {
          plVar40 = *(long **)(lVar26 + 0x80);
          while (plVar40 != (long *)(lVar26 + 0x88)) {
            uVar30 = (**(code **)(*(long *)plVar40[0xd] + 0x148))();
            if (((uVar30 & 1) != 0) &&
               (uVar30 = (**(code **)(*plVar11 + 0x120))(plVar11,plVar40[0xd]), (uVar30 & 1) != 0))
            {
              (**(code **)(*(long *)plVar40[0xd] + 0x178))();
              (**(code **)(*(long *)plVar40[0xd] + 0x140))((long *)plVar40[0xd],0);
            }
            plVar27 = (long *)plVar40[1];
            if ((long *)plVar40[1] == (long *)0x0) {
              plVar27 = plVar40 + 2;
              bVar8 = *(long **)*plVar27 != plVar40;
              plVar40 = (long *)*plVar27;
              if (bVar8) {
                do {
                  lVar34 = *plVar27;
                  plVar27 = (long *)(lVar34 + 0x10);
                  plVar40 = (long *)*plVar27;
                } while (*plVar40 != lVar34);
              }
            }
            else {
              do {
                plVar40 = plVar27;
                plVar27 = (long *)*plVar40;
              } while ((long *)*plVar40 != (long *)0x0);
            }
          }
        }
LAB_7101f20014:
        (**(code **)(*plVar11 + 0x178))(plVar11);
      }
    }
LAB_7101f20024:
    if (0x12 < *(uint *)((long)plVar36 + 0xd4)) goto LAB_7101f22044;
    *(undefined4 *)((long)plVar36 + (long)(int)*(uint *)((long)plVar36 + 0xd4) * 4 + 0x88) = 4;
  }
LAB_7101f2003c:
  FUN_7101f37260((long *)param_1[0x72]);
  FUN_7101f30ef0((long *)param_1[0x74]);
  puVar38 = (undefined8 *)param_1[0x7a];
  if ((*(char *)(puVar38 + 1) != '\0') &&
     (((lVar26 = *(long *)(*(long *)(*(long *)*puVar38 + 0x10) + 8), lVar26 == 0 ||
       (plVar36 = (long *)FUN_71037964b0(lVar26,0x7104421055), plVar36 == (long *)0x0)) ||
      (uVar30 = (**(code **)(*plVar36 + 0x138))(), (uVar30 & 1) != 0)))) {
    *(undefined1 *)(puVar38 + 1) = 0;
  }
  plVar36 = (long *)param_1[0x5f];
  while (plVar36 != param_1 + 0x60) {
    if (((*(int *)((long)plVar36 + 0x2c) != 0) &&
        (*(char *)(*(long *)(*(long *)**(undefined8 **)param_1[0x6c] + 0x600) + 0x4aa) != '\0')) &&
       ((*(byte *)(*(long *)(*(long *)**(undefined8 **)param_1[0x6c] + 0x600) +
                   (ulong)*(uint *)(plVar36 + 5) * 4 + 0x264) >> 4 & 1) != 0)) {
      cVar39 = '\x01';
      goto LAB_7101f20128;
    }
    plVar11 = (long *)plVar36[1];
    if ((long *)plVar36[1] == (long *)0x0) {
      plVar11 = plVar36 + 2;
      bVar8 = *(long **)*plVar11 != plVar36;
      plVar36 = (long *)*plVar11;
      if (bVar8) {
        do {
          lVar26 = *plVar11;
          plVar11 = (long *)(lVar26 + 0x10);
          plVar36 = (long *)*plVar11;
        } while (*plVar36 != lVar26);
      }
    }
    else {
      do {
        plVar36 = plVar11;
        plVar11 = (long *)*plVar36;
      } while ((long *)*plVar36 != (long *)0x0);
    }
  }
  cVar39 = '\0';
LAB_7101f20128:
  if (*(char *)((long)param_1 + 0x529) != cVar39) {
    *(char *)((long)param_1 + 0x529) = cVar39;
    if ((*(uint *)(param_1 + 0x65) < 0x13) &&
       ((1 << (ulong)(*(uint *)(param_1 + 0x65) & 0x1f) & 0x40106U) != 0)) {
      uVar30 = 0x1ae8c90632;
      if (cVar39 == '\0') {
        uVar30 = 0x1c928c8ab6;
      }
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        ppppppppplVar19 = (long *********)&DAT_00000004;
        uVar13 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),uVar30,(long ****)&DAT_00000004,
                                ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
        if ((uVar13 & 1) == 0) goto LAB_7101f20200;
        FUN_71024076d0(local_180,uVar30);
        if (((local_170 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_168 == DAT_7106dd53ac))
        {
          piVar28 = (int *)(local_170 + 0x38);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar28,0x10);
            if (bVar8) {
              *piVar28 = *piVar28 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
      }
      else {
LAB_7101f20200:
        local_168 = 0x87650000000000;
        local_158 = 0xffffffffffffffff;
        uStack_150 = 0;
        local_180[0] = 0;
        local_148 = 0;
      }
      local_178 = &PTR_FUN_7104f73d50;
      local_170 = 0;
      local_160 = 0;
    }
  }
  lVar26 = param_1[0x6a];
  auVar48 = (**(code **)(**(long **)(lVar26 + 0x38) + 0x68))();
  if ((((auVar48._0_8_ & 1) != 0) &&
      (FUN_7101f33ab0(lVar26,auVar48._8_8_,(undefined **)ppppppppplVar19,ppppbVar20,pppplVar23,in_x5
                      ,in_x6,in_x7), *(char *)(lVar26 + 0x65) != '\0')) &&
     (*(char *)(lVar26 + 0x66) != '\0')) {
    local_e0 = *(undefined ***)(lVar26 + 0x40);
    local_d8 = *(undefined ***)(lVar26 + 0x48);
    local_d0 = *(long **********)(lVar26 + 0x50);
    local_c8 = *(undefined8 *)(lVar26 + 0x58);
    lVar34 = param_1[0x68] + 0x178;
    lVar37 = *(long *)(param_1[0x68] + 0x180);
    lVar29 = lVar34;
    if (lVar34 != lVar37) {
      iVar32 = *(int *)(lVar26 + 0x60);
      do {
        ppppppppplVar19 = (long *********)&SUB_00000020;
        iVar9 = memcmp((void *)(lVar37 + 0x18),&local_e0,0x20);
        if ((iVar9 == 0) &&
           ((lVar29 = lVar37, *(int *)(lVar37 + 0x10) == 2 || (*(int *)(lVar37 + 0x38) == iVar32))))
        break;
        lVar37 = *(long *)(lVar37 + 8);
        lVar29 = lVar34;
      } while (lVar34 != lVar37);
    }
    if ((lVar34 == lVar29) || (**(long **)(lVar29 + 0x48) == 0)) {
      FUN_7103779650(*(long *)(lVar26 + 0x20));
    }
    else {
      FUN_7103779480(lVar26 + 0x18,lVar29 + 0x40,ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,in_x6,
                     in_x7);
    }
  }
  uVar6 = *(uint *)(param_1 + 0x65);
  lVar34 = param_1[0xace];
  lVar26 = param_1[0xad4];
  puVar38 = (undefined8 *)param_1[0x6c];
  local_d0 = (long *********)0x0;
  local_d8 = (undefined **)0x0;
  ppppppppplVar42 = (long *********)((ulong)&local_e0 | 1);
  local_e0 = (undefined **)0x5f65646f6d0a;
  switch(uVar6) {
  case 2:
  case 3:
    std::string::append((char *)&local_e0);
    iVar32 = *(int *)((long)param_1 + 0x4cc);
    if (iVar32 == 3) {
      ppppppppplVar19 = ppppppppplVar42;
      if (((ulong)local_e0 & 1) != 0) {
        ppppppppplVar19 = local_d0;
      }
      FUN_7103778430(*(long *)*puVar38 + 8,"%s_copy",ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,
                     in_x6,in_x7);
    }
    else if (iVar32 == 2) {
      ppppppppplVar19 = ppppppppplVar42;
      if (((ulong)local_e0 & 1) != 0) {
        ppppppppplVar19 = local_d0;
      }
      FUN_7103778430(*(long *)*puVar38 + 8,"%s_add",ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,
                     in_x6,in_x7);
    }
    else if (iVar32 == 1) {
      ppppppppplVar19 = ppppppppplVar42;
      if (((ulong)local_e0 & 1) != 0) {
        ppppppppplVar19 = local_d0;
      }
      FUN_7103778430(*(long *)*puVar38 + 8,"%s_pickup",ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,
                     in_x6,in_x7);
    }
    break;
  case 4:
  case 7:
    std::string::append((char *)&local_e0);
    std::string::append((char *)&local_e0);
    break;
  default:
    goto LAB_7101f20428;
  case 8:
    std::string::append((char *)&local_e0);
    if (*(int *)((long)param_1 + 0x4cc) == 5) {
      ppppppppplVar19 = ppppppppplVar42;
      if (((ulong)local_e0 & 1) != 0) {
        ppppppppplVar19 = local_d0;
      }
      FUN_7103778430(*(long *)*puVar38 + 8,"%s_right",ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,
                     in_x6,in_x7);
    }
    else if (*(int *)((long)param_1 + 0x4cc) == 4) {
      ppppppppplVar19 = ppppppppplVar42;
      if (((ulong)local_e0 & 1) != 0) {
        ppppppppplVar19 = local_d0;
      }
      FUN_7103778430(*(long *)*puVar38 + 8,"%s_left",ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,
                     in_x6,in_x7);
    }
    break;
  case 0x10:
LAB_7101f20428:
    std::string::append((char *)&local_e0);
    break;
  case 0x12:
    std::string::append((char *)&local_e0);
    ppppppppplVar19 = ppppppppplVar42;
    if (((ulong)local_e0 & 1) != 0) {
      ppppppppplVar19 = local_d0;
    }
    FUN_7103778430(*(long *)*puVar38 + 8,"%s_select",ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,
                   in_x6,in_x7);
  }
  if (((ulong)local_e0 & 1) != 0) {
    ppppppppplVar42 = local_d0;
  }
  FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar38 + 0x10),(long)ppppppppplVar42);
  uStack_106 = 0;
  local_110 = 0x10;
  local_100 = 0;
  local_107 = 0;
  uStack_10f = 0x6c745f74696465;
  uStack_108 = 0x5f;
  std::string::append((char *)&local_110);
  uVar30 = (ulong)&local_110 | 1;
  if ((local_110 & 1) != 0) {
    uVar30 = local_100;
  }
  FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar38 + 0x10),uVar30);
  uVar15 = *(uint *)((long)puVar38 + 0x174);
  if ((*(uint *)(puVar38 + 100) != uVar6) || (uVar15 != *(uint *)((long)puVar38 + 0x324))) {
    if (uVar15 == 0) {
LAB_7101f2057c:
      lVar29 = *(long *)*puVar38;
      pcVar16 = "keyhelp_add";
    }
    else {
      if (2 < uVar15) goto LAB_7101f22044;
      if (param_1[(ulong)uVar15 * 3 + 0x7f] == param_1[(ulong)uVar15 * 3 + 0x80])
      goto LAB_7101f2057c;
      lVar29 = *(long *)*puVar38;
      pcVar16 = "keyhelp_change";
    }
    FUN_7103778430(lVar29 + 8,pcVar16,ppppppppplVar19,ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
  }
  if (*(uint *)(puVar38 + 100) != uVar6) {
    pcVar16 = "playing_on";
    if (uVar6 != 0x10) {
      pcVar16 = "playing_off";
    }
    FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar38 + 0x10),(long)pcVar16);
    if (uVar6 == 0x12) {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar38 + 0x10),0x710435c063);
    }
  }
  iVar32 = *(int *)((long)puVar38 + 0x174);
  *(uint *)(puVar38 + 100) = uVar6;
  if (iVar32 != *(int *)((long)puVar38 + 0x324)) {
    uVar30 = (ulong)&local_110 | 1;
    if ((local_110 & 1) != 0) {
      uVar30 = local_100;
    }
    FUN_7103778430(*(long *)*puVar38 + 8,"%s_anim",uVar30,ppppbVar20,pppplVar23,in_x5,in_x6,in_x7);
    iVar32 = *(int *)((long)puVar38 + 0x174);
  }
  *(int *)((long)puVar38 + 0x324) = iVar32;
  if (cVar39 != *(char *)(puVar38 + 0x65)) {
    pcVar16 = "shift_in";
    if (cVar39 == '\0') {
      pcVar16 = "shift_out";
    }
    FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar38 + 0x10),(long)pcVar16);
  }
  uVar15 = *(uint *)(puVar38 + 0x30);
  *(char *)(puVar38 + 0x65) = cVar39;
  if (uVar15 != *(uint *)((long)puVar38 + 0x184)) {
    FUN_7103778430(*(long *)*puVar38 + 8,"measure_%02d",(ulong)uVar15,ppppbVar20,pppplVar23,in_x5,
                   in_x6,in_x7);
    uVar15 = *(uint *)(puVar38 + 0x30);
  }
  *(uint *)((long)puVar38 + 0x184) = uVar15;
  pcVar16 = "undo_disable";
  if (lVar34 != 0) {
    pcVar16 = "undo_enable";
  }
  FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar38 + 0x10),(long)pcVar16);
  pcVar16 = "redo_disable";
  if (lVar26 != 0) {
    pcVar16 = "redo_enable";
  }
  FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar38 + 0x10),(long)pcVar16);
  lVar26 = *(long *)puVar38[2];
  fVar44 = (*(float *)(puVar38 + 0x32) * *(float *)(puVar38 + 0x2d)) /
           (*(float *)(puVar38 + 0x46) * 60.0);
  fVar45 = -fVar44;
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x30) = fVar45;
    *(undefined4 *)(lVar26 + 0x34) = 0;
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  lVar26 = *(long *)puVar38[4];
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x30) = fVar45;
    *(undefined4 *)(lVar26 + 0x34) = 0;
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  lVar26 = *(long *)puVar38[6];
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x30) = fVar45;
    *(undefined4 *)(lVar26 + 0x34) = 0;
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  fVar44 = fmodf(fVar44,*(float *)(puVar38 + 0x2d));
  lVar26 = *(long *)puVar38[8];
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x30) = -fVar44;
    *(undefined4 *)(lVar26 + 0x34) = 0;
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  lVar26 = *(long *)puVar38[0x1c];
  if (*(int *)ppppbVar22 == 1) {
    if (lVar26 != 0) {
      lVar34 = param_1[0x91];
      fVar44 = *(float *)(puVar38 + 0x2d);
      fVar45 = *(float *)(puVar38 + 0x46);
      *(undefined4 *)(lVar26 + 0x34) = 0;
      *(float *)(lVar26 + 0x30) = (fVar44 * (float)(int)lVar34) / (fVar45 * -60.0);
LAB_7101f207fc:
      *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
    }
  }
  else if (lVar26 != 0) {
    *(undefined8 *)(lVar26 + 0x30) = 0;
    goto LAB_7101f207fc;
  }
  fVar44 = *(float *)(puVar38 + 0x46);
  fVar46 = *(float *)(puVar38 + 0x2d);
  fVar45 = 3600.0;
  fVar47 = (fVar46 * 3600.0) / (fVar44 * 60.0);
  lVar26 = *(long *)puVar38[0x1e];
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x30) = fVar47;
    *(undefined4 *)(lVar26 + 0x34) = 0;
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  lVar26 = *(long *)puVar38[0x20];
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x30) = fVar47;
    *(undefined4 *)(lVar26 + 0x34) = 0;
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  fVar44 = (fVar46 * 7200.0) / (fVar44 * 60.0);
  lVar26 = *(long *)puVar38[0x22];
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x50) = fVar44;
    *(float *)(lVar26 + 0x54) = ABS(*(float *)(lVar26 + 0x54));
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  lVar26 = *(long *)puVar38[0x24];
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x50) = fVar44;
    *(float *)(lVar26 + 0x54) = ABS(*(float *)(lVar26 + 0x54));
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  lVar26 = param_1[0x80] - param_1[0x7f];
  if (lVar26 == 0) {
    FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar38 + 0x10),0x71042e7b35);
    fVar45 = 0.0;
    fVar44 = fVar45;
  }
  else {
    uVar13 = (lVar26 >> 3) * -0x70a3d70a3d70a3d7;
    uVar30 = 0;
    iVar32 = 0;
    piVar28 = (int *)(param_1[0x7f] + 0x2c);
    do {
      uVar30 = uVar30 + 1;
      iVar32 = *piVar28 + iVar32;
      piVar28 = piVar28 + 0x32;
    } while (uVar30 <= uVar13 && uVar13 - uVar30 != 0);
    if (iVar32 < 0xe11) {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar38 + 0x10),0x71042e7b35);
      fVar45 = (float)iVar32;
      if (iVar32 < 1) {
        fVar44 = 0.0;
        goto LAB_7101f2098c;
      }
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar38 + 0x10),0x7104443fee);
    }
    fVar44 = *(float *)(puVar38 + 0x2e) / (float)iVar32;
  }
LAB_7101f2098c:
  fVar45 = fVar45 * fVar44;
  lVar26 = *(long *)puVar38[10];
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x50) = fVar45;
    *(float *)(lVar26 + 0x54) = ABS(*(float *)(lVar26 + 0x54));
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  lVar34 = *(long *)puVar38[0xc];
  lVar26 = 0;
  if (lVar34 != 0) {
    fVar46 = *(float *)(puVar38 + 0x32);
    *(undefined4 *)(lVar34 + 0x34) = 0;
    *(byte *)(lVar34 + 0x58) = *(byte *)(lVar34 + 0x58) | 0x10;
    *(float *)(lVar34 + 0x30) = fVar44 * fVar46;
    lVar26 = *(long *)puVar38[0xc];
  }
  if (lVar26 != 0) {
    fVar46 = *(float *)(puVar38 + 0x46);
    fVar47 = *(float *)((long)puVar38 + 0x16c);
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
    *(float *)(lVar26 + 0x50) = fVar44 * fVar46 * 60.0 * fVar47;
    *(float *)(lVar26 + 0x54) = ABS(*(float *)(lVar26 + 0x54));
  }
  lVar26 = *(long *)puVar38[0xe];
  if (lVar26 != 0) {
    fVar46 = *(float *)(puVar38 + 0x3c);
    *(undefined4 *)(lVar26 + 0x34) = 0;
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
    *(float *)(lVar26 + 0x30) = fVar44 * fVar46;
  }
  lVar26 = *(long *)puVar38[0x26];
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x30) = fVar45;
    *(undefined4 *)(lVar26 + 0x34) = 0;
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  lVar26 = *(long *)puVar38[0x28];
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x30) = fVar45;
    *(undefined4 *)(lVar26 + 0x34) = 0;
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  FUN_710377a310((long)(puVar38 + 0x29),2);
  lVar26 = (param_1[0x80] - param_1[0x7f] >> 3) * -0x70a3d70a3d70a3d7;
  if (lVar26 - *(int *)((long)puVar38 + 0x32c) != 0) {
    *(int *)((long)puVar38 + 0x32c) = (int)lVar26;
    FUN_710377a310((long)(puVar38 + 0xf),2);
  }
  lVar26 = (param_1[0x83] - param_1[0x82] >> 3) * -0x70a3d70a3d70a3d7;
  if (lVar26 - *(int *)(puVar38 + 0x66) != 0) {
    *(int *)(puVar38 + 0x66) = (int)lVar26;
    FUN_710377a310((long)(puVar38 + 0x11),2);
  }
  lVar26 = (param_1[0x86] - param_1[0x85] >> 3) * -0x70a3d70a3d70a3d7;
  if (lVar26 - *(int *)((long)puVar38 + 0x334) != 0) {
    *(int *)((long)puVar38 + 0x334) = (int)lVar26;
    FUN_710377a310((long)(puVar38 + 0x13),2);
  }
  if (uVar6 == 8) {
    fVar44 = (*(float *)(puVar38 + 0x2d) * (float)*(int *)((long)param_1 + 0x46c)) /
             (*(float *)(puVar38 + 0x46) * 60.0);
    if (*(int *)((long)param_1 + 0x4cc) == 5) {
      lVar26 = *(long *)puVar38[0x16];
      fVar44 = -fVar44;
      if (lVar26 != 0) {
        *(float *)(lVar26 + 0x30) = fVar44;
        *(undefined4 *)(lVar26 + 0x34) = 0;
        *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
      }
      lVar26 = *(long *)puVar38[0x18];
      if (lVar26 != 0) {
        *(undefined8 *)(lVar26 + 0x30) = 0;
        *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
      }
      lVar26 = *(long *)puVar38[0x1a];
      if (lVar26 != 0) {
        *(float *)(lVar26 + 0x30) = fVar44;
        *(undefined4 *)(lVar26 + 0x34) = 0;
        *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
      }
      uVar15 = *(uint *)ppppbVar22;
      if (2 < uVar15) goto LAB_7101f22044;
      lVar26 = param_1[(ulong)uVar15 * 3 + 0x7f];
      uVar30 = (param_1[(ulong)uVar15 * 3 + 0x80] - lVar26 >> 3) * -0x70a3d70a3d70a3d7;
      if (param_1[(ulong)uVar15 * 3 + 0x80] - lVar26 != 0) {
        uVar13 = 0;
        iVar9 = 0;
        iVar32 = (int)param_1[0x8d] + 1;
        piVar28 = (int *)(lVar26 + 0x2c);
        do {
          iVar10 = iVar9;
          if (piVar28[-0xb] != 0) {
            iVar10 = piVar28[-1];
          }
          iVar9 = *piVar28 + iVar10;
          if ((iVar10 <= iVar32) && (iVar32 < iVar9)) break;
          uVar13 = uVar13 + 1;
          piVar28 = piVar28 + 0x32;
        } while (uVar13 <= uVar30 && uVar30 - uVar13 != 0);
        iVar32 = (int)uVar13;
        if ((ulong)(long)iVar32 <= uVar30 && uVar30 - (long)iVar32 != 0) {
          uVar13 = (long)iVar32 + 1;
          if (uVar30 < uVar13 || uVar30 - uVar13 == 0) {
            iVar32 = 0x1e00;
          }
          else {
            iVar32 = *(int *)(lVar26 + uVar13 * 200 + 0x28) + -1;
          }
          iVar9 = (int)param_1[0x8d] + 4;
          goto LAB_7101f22024;
        }
      }
      goto LAB_7101f20e98;
    }
    if (*(int *)((long)param_1 + 0x4cc) != 4) goto LAB_7101f20e98;
    lVar26 = *(long *)puVar38[0x16];
    if (lVar26 != 0) {
      *(undefined8 *)(lVar26 + 0x30) = 0;
      *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
    }
    lVar26 = *(long *)puVar38[0x18];
    if (lVar26 != 0) {
      *(float *)(lVar26 + 0x30) = fVar44;
      *(undefined4 *)(lVar26 + 0x34) = 0;
      *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
    }
    lVar26 = *(long *)puVar38[0x1a];
    if (lVar26 != 0) {
      *(undefined8 *)(lVar26 + 0x30) = 0;
      *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
    }
    uVar15 = *(uint *)ppppbVar22;
    if (2 < uVar15) goto LAB_7101f22044;
    lVar26 = param_1[(ulong)uVar15 * 3 + 0x7f];
    uVar30 = (param_1[(ulong)uVar15 * 3 + 0x80] - lVar26 >> 3) * -0x70a3d70a3d70a3d7;
    if (param_1[(ulong)uVar15 * 3 + 0x80] - lVar26 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
      iVar32 = *(int *)((long)param_1 + 0x46c) + (int)param_1[0x8d];
      piVar28 = (int *)(lVar26 + 0x2c);
      do {
        iVar10 = iVar9;
        if (piVar28[-0xb] != 0) {
          iVar10 = piVar28[-1];
        }
        iVar9 = *piVar28 + iVar10;
        if ((iVar10 < iVar32) && (iVar32 <= iVar9)) break;
        uVar13 = uVar13 + 1;
        piVar28 = piVar28 + 0x32;
      } while (uVar13 <= uVar30 && uVar30 - uVar13 != 0);
    }
    uVar33 = (ulong)(int)uVar13;
    if (uVar30 < uVar33 || uVar30 - uVar33 == 0) goto LAB_7101f20e98;
    if ((int)uVar13 < 0) {
      uVar13 = uVar33 - 1;
      if (uVar30 < uVar13 || uVar30 - uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar34 = lVar26 + uVar13 * 200;
      iVar9 = *(int *)(lVar34 + 0x2c) + *(int *)(lVar34 + 0x28);
    }
    else {
      iVar9 = 0;
    }
    iVar32 = *(int *)(lVar26 + uVar33 * 200 + 0x28) + -4;
LAB_7101f22024:
    local_1c8 = (ulong)CONCAT14(*(int *)((long)puVar38 + 0x17c) < iVar32,
                                (uint)(iVar9 < *(int *)((long)puVar38 + 0x17c)));
  }
  else {
LAB_7101f20e98:
    local_1c8 = 0;
  }
  ppppbVar20 = (byte ****)(param_1 + 0xad5);
  if (*(int *)((long)param_1 + 0x444) == 1) {
    iVar32 = *(int *)((long)puVar38 + 0x17c);
    if (*(char *)((long)param_1 + 0x4fe) == '\0') {
      lVar26 = param_1[0x82];
      if (lVar26 != param_1[0x83]) {
        iVar9 = *(int *)((long)param_1 + 0x46c) + iVar32;
        do {
          iVar10 = *(int *)(lVar26 + 0x48) + *(int *)(lVar26 + 0x28);
          iVar3 = iVar10 + *(int *)(lVar26 + 0x4c);
          if ((iVar10 < iVar9 && iVar3 != iVar32) && (iVar9 <= iVar10 || iVar32 <= iVar3))
          goto LAB_7101f20f6c;
          lVar26 = lVar26 + 200;
        } while (param_1[0x83] != lVar26);
      }
    }
    else {
      lVar26 = param_1[0x82];
      if (lVar26 != param_1[0x83]) {
        iVar9 = iVar32 - *(int *)((long)param_1 + 0x46c);
        do {
          iVar10 = *(int *)(lVar26 + 0x48) + *(int *)(lVar26 + 0x28);
          iVar3 = iVar10 + *(int *)(lVar26 + 0x4c);
          if ((iVar10 < iVar9 + iVar32 && iVar3 != iVar9) &&
              (iVar9 + iVar32 <= iVar10 || iVar9 <= iVar3)) goto LAB_7101f20f6c;
          lVar26 = lVar26 + 200;
        } while (param_1[0x83] != lVar26);
      }
    }
    local_88 = 0;
  }
  else {
    local_88 = 0;
  }
LAB_7101f20f74:
  local_1c0 = (int *)((long)puVar38 + 0x17c);
  lVar34 = *(long *)puVar38[0x53];
  lVar29 = ((long *)puVar38[0x53])[1];
  fVar44 = *(float *)(puVar38 + 0x32);
  fVar45 = *(float *)(puVar38 + 0x46);
  fVar46 = *(float *)(puVar38 + 0x2d);
  lVar26 = 0;
  do {
    iVar32 = *(int *)((long)&DAT_7104545e1c + lVar26) * 4;
    if ((float)(*(int *)(puVar38 + 0x31) * 0x3c) /
        (float)((lVar29 - lVar34 >> 3) * 0x6db6db6db6db6db7 - 1) <= (float)iVar32) break;
    bVar8 = lVar26 != 0x20;
    lVar26 = lVar26 + 4;
  } while (bVar8);
  if (lVar34 != lVar29) {
    iVar9 = 0;
    if (iVar32 != 0) {
      iVar9 = *(int *)(puVar38 + 0x2f) / iVar32;
    }
    iVar9 = iVar32 * (int)((float)(int)((float)(*(int *)(puVar38 + 0x2f) - iVar9 * iVar32) /
                                       (float)iVar32) + (float)iVar9);
    do {
      fVar47 = (fVar46 * (float)iVar9) / (fVar45 * 60.0);
      lVar26 = **(long **)(lVar34 + 0x18);
      if (lVar26 != 0) {
        *(float *)(lVar26 + 0x30) = fVar47;
        *(undefined4 *)(lVar26 + 0x34) = 0;
        *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
      }
      puVar14 = &DAT_710429257e;
      if (fVar47 < (fVar44 * fVar46) / (fVar45 * 60.0)) {
        puVar14 = &DAT_71043cd335;
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar34 + 8),(long)puVar14);
      if (iVar9 != *(int *)(lVar34 + 0x30)) {
        *(int *)(lVar34 + 0x30) = iVar9;
        FUN_710377a310(lVar34 + 0x20,1);
      }
      lVar34 = lVar34 + 0x38;
      iVar9 = iVar9 + iVar32;
    } while (lVar29 != lVar34);
    fVar45 = *(float *)(puVar38 + 0x46);
    fVar46 = *(float *)(puVar38 + 0x2d);
  }
  if (*(long *)(puVar38[0x61] + 0x38) == 0) {
    uVar30 = 1;
  }
  else {
    uVar30 = (ulong)*(uint *)(*(long *)(puVar38[0x61] + 0x38) + 0x254);
  }
  FUN_7101f41a50(*(float *)(puVar38 + 0x3c),fVar45,fVar46,(int *)puVar38[0x55],
                 (long *)ppppppppplVar1,(long *********)(param_1[0x68] + 0x178),
                 (ulong)*(uint *)((long)puVar38 + 0x17c),(long ****)(ulong)uVar6,uVar30,
                 (ulong)*(uint *)((long)puVar38 + 0x174),(long *)ppppppppplVar24);
  if (*(long *)(puVar38[0x61] + 0x38) == 0) {
    uVar30 = 1;
  }
  else {
    uVar30 = (ulong)*(uint *)(*(long *)(puVar38[0x61] + 0x38) + 0x254);
  }
  FUN_7101f41a50(*(float *)(puVar38 + 0x3c),*(float *)(puVar38 + 0x46),*(float *)(puVar38 + 0x2d),
                 (int *)puVar38[0x57],(long *)ppppppppplVar24,
                 (long *********)(param_1[0x68] + 0x178),(ulong)*(uint *)((long)puVar38 + 0x17c),
                 (long ****)(ulong)uVar6,uVar30,(ulong)*(uint *)((long)puVar38 + 0x174),
                 (long *)ppppppppplVar24);
  ppppppppplVar19 = (long *********)(param_1[0x68] + 0x178);
  uVar30 = (ulong)*(uint *)((long)puVar38 + 0x17c);
  if (*(long *)(puVar38[0x61] + 0x38) == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = (ulong)*(uint *)(*(long *)(puVar38[0x61] + 0x38) + 0x254);
  }
  uVar33 = (ulong)*(uint *)((long)puVar38 + 0x174);
  pppplVar23 = (long ****)(ulong)uVar6;
  FUN_7101f41a50(*(float *)(puVar38 + 0x3c),*(float *)(puVar38 + 0x46),*(float *)(puVar38 + 0x2d),
                 (int *)puVar38[0x59],param_1 + 0x85,ppppppppplVar19,uVar30,pppplVar23,uVar13,uVar33
                 ,(long *)ppppppppplVar24);
  lVar26 = puVar38[0x5b];
  fVar44 = *(float *)(puVar38 + 0x3c);
  fVar45 = *(float *)(puVar38 + 0x46);
  fVar46 = *(float *)(puVar38 + 0x2d);
  iVar32 = *(int *)((long)puVar38 + 0x17c);
  uVar17 = extraout_x1_17;
  if (cVar39 != *(char *)(lVar26 + 0x44)) {
    pcVar16 = "shift_in";
    if (cVar39 == '\0') {
      pcVar16 = "shift_out";
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar26 + 8),(long)pcVar16);
    uVar17 = extraout_x1_18;
  }
  fVar44 = (fVar44 * fVar46) / (fVar45 * 60.0);
  *(char *)(lVar26 + 0x44) = cVar39;
  lVar34 = **(long **)(lVar26 + 0x18);
  if (lVar34 != 0) {
    *(float *)(lVar34 + 0x30) = fVar44;
    *(undefined4 *)(lVar34 + 0x34) = 0;
    *(byte *)(lVar34 + 0x58) = *(byte *)(lVar34 + 0x58) | 0x10;
  }
  lVar34 = **(long **)(lVar26 + 0x28);
  if (lVar34 != 0) {
    *(float *)(lVar34 + 0x30) = fVar44;
    *(undefined4 *)(lVar34 + 0x34) = 0;
    *(byte *)(lVar34 + 0x58) = *(byte *)(lVar34 + 0x58) | 0x10;
  }
  if (*(int *)(lVar26 + 0x40) != iVar32) {
    iVar9 = iVar32 + 3;
    if (-1 < iVar32) {
      iVar9 = iVar32;
    }
    *(int *)(lVar26 + 0x40) = iVar32;
    uVar30 = (ulong)(uint)((iVar32 % 4) * 0x19);
    lVar34 = (long)(iVar32 / 0xf0);
    if (0x3e6 < lVar34) {
      lVar34 = 999;
    }
    ppppppppplVar19 = (long *********)(lVar34 * 1000 + (long)((iVar9 >> 2) % 0x3c));
    FUN_710377a310(lVar26 + 0x30,2);
    uVar17 = extraout_x1_19;
  }
  uVar15 = *(uint *)(param_1 + 0x88);
  if (2 < uVar15) {
LAB_7101f22044:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  fVar44 = *(float *)(puVar38 + 0x2d);
  lVar34 = puVar38[0x5d];
  fVar45 = *(float *)(puVar38 + 0x46) * 60.0;
  fVar46 = (fVar44 * (float)*(int *)((long)param_1 + 0x46c)) / fVar45;
  lVar26 = param_1[0x68];
  if (uVar15 == 0) {
    plVar36 = (long *)(lVar34 + 8);
    FUN_7101f3d820(fVar46,*plVar36);
  }
  else {
    plVar36 = (long *)(lVar34 + (ulong)uVar15 * 0x18 + 8);
    FUN_7101f3da50(fVar46,(fVar44 * (float)(int)param_1[0x91]) / fVar45,
                   (((float)(int)param_1[0x91] + (float)*(int *)((long)param_1 + 0x48c)) * fVar44) /
                   fVar45,*plVar36,uVar17,ppppppppplVar19,uVar30,pppplVar23,uVar13,uVar33,
                   ppppppppplVar24);
  }
  lVar29 = *plVar36;
  fVar45 = 0.0;
  fVar44 = 0.0;
  if (*(char *)((long)param_1 + 0x4fe) != '\0') {
    fVar44 = -fVar46;
  }
  ppppppppplVar19 = (long *********)(lVar26 + 0x178);
  if (*(float *)(lVar29 + 0x214) != fVar44) {
    *(float *)(lVar29 + 0x214) = fVar44;
    lVar26 = **(long **)(lVar29 + 0x18);
    if (lVar26 != 0) {
      *(float *)(lVar26 + 0x30) = fVar44;
      *(undefined4 *)(lVar26 + 0x34) = 0;
      *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
    }
  }
  if (uVar6 == 2) {
    if (*(char *)(lVar34 + 0x48) == '\0') {
      *(undefined1 *)(lVar34 + 0x48) = 1;
      if (*(int *)((long)param_1 + 0x4cc) == 3) {
        lVar26 = *(long *)(*plVar36 + 8);
        pcVar16 = "copy_in";
      }
      else if (*(int *)((long)param_1 + 0x4cc) == 2) {
        lVar26 = *(long *)(*plVar36 + 8);
        pcVar16 = "add_in";
      }
      else {
        lVar26 = *(long *)(*plVar36 + 8);
        pcVar16 = "pickup_in";
      }
LAB_7101f21464:
      FUN_7103778300(0x3f800000,lVar26,(long)pcVar16);
    }
  }
  else if (*(char *)(lVar34 + 0x48) != '\0') {
    *(undefined1 *)(lVar34 + 0x48) = 0;
    lVar26 = *(long *)(*plVar36 + 8);
    pcVar16 = "pickup_out";
    goto LAB_7101f21464;
  }
  pppplVar23 = (long ****)(ulong)(uVar15 == 0 & local_88);
  ppppbVar21 = (byte ****)(ulong)uVar6;
  FUN_7101f3d240(*plVar36,(int *)ppppbVar22,ppppppppplVar19,ppppbVar21,(ulong)pppplVar23,uVar13,
                 uVar33,ppppppppplVar24);
  fVar44 = *(float *)(puVar38 + 0x2d);
  fVar46 = *(float *)(puVar38 + 0x46) * 60.0;
  lVar34 = puVar38[0x5f];
  lVar26 = param_1[0x68];
  FUN_7101f3da50((fVar44 * (float)*(int *)((long)param_1 + 0x46c)) / fVar46,
                 (fVar44 * (float)(int)param_1[0x91]) / fVar46,
                 (((float)(int)param_1[0x91] + (float)*(int *)((long)param_1 + 0x48c)) * fVar44) /
                 fVar46,*(long *)(lVar34 + 8),extraout_x1_20,ppppppppplVar19,ppppbVar21,pppplVar23,
                 uVar13,uVar33,ppppppppplVar24);
  if (uVar6 == 8) {
    if (*(char *)(lVar34 + 0x20) == '\0') {
      plVar36 = *(long **)(lVar34 + 0x18);
      if (0 < (int)((ulong)(plVar36[0x31] - plVar36[0x30]) >> 3)) {
        iVar32 = 0;
        uVar17 = extraout_x1_21;
        do {
          plVar11 = (long *)plVar36[0x37];
          if (plVar11 == (long *)0x0) {
LAB_7101f21588:
            FUN_7103776290(&local_140,uVar17,(long ****)ppppppppplVar19,ppppbVar21,pppplVar23,uVar13
                           ,uVar33,ppppppppplVar24);
          }
          else {
            plVar40 = plVar36 + 0x37;
            do {
              if (iVar32 <= (int)plVar11[4]) {
                plVar40 = plVar11;
              }
              plVar11 = (long *)plVar11[(int)plVar11[4] < iVar32];
            } while (plVar11 != (long *)0x0);
            if (((plVar40 == plVar36 + 0x37) || (iVar32 < (int)plVar40[4])) || (plVar40[5] == 0))
            goto LAB_7101f21588;
            FUN_7103776640(&local_140,(long)(plVar36 + 0x2c),*(byte *****)(plVar40[5] + 0x88),
                           ppppppppplVar19,ppppbVar21,pppplVar23,uVar13,uVar33,ppppppppplVar24);
          }
          ppuVar5 = local_138;
          FUN_7103778300(0x3f800000,(long)local_138,0x7104328277);
          local_140 = &PTR_FUN_710523d988;
          local_138 = (undefined **)0x0;
          uVar17 = extraout_x1_22;
          if (ppuVar5 != (undefined **)0x0) {
            puVar14 = ppuVar5[3];
            ppuVar5[2] = (undefined *)&PTR_FUN_710523d9a8;
            ppuVar5[3] = (undefined *)0x0;
            if (puVar14 != (undefined *)0x0) {
              FUN_710392eb40((ulong)puVar14);
            }
            FUN_710392eb40((ulong)ppuVar5);
            uVar17 = extraout_x1_23;
          }
          plVar36 = *(long **)(lVar34 + 0x18);
          iVar32 = iVar32 + 1;
        } while (iVar32 < (int)((ulong)(plVar36[0x31] - plVar36[0x30]) >> 3));
      }
      (**(code **)(*plVar36 + 0x70))(plVar36,1);
      *(undefined1 *)(lVar34 + 0x20) = 1;
    }
    FUN_7103771d60(&local_140,*(long *)(lVar34 + 0x18),(long ****)0x0,ppppbVar21,pppplVar23,uVar13,
                   uVar33,ppppppppplVar24);
    ppuVar5 = local_138;
    plVar36 = (long *)*local_138;
    if (plVar36 != (long *)0x0) {
      (**(code **)(*plVar36 + 0x388))(plVar36,(uint)local_1c8 ^ 1,0);
    }
    local_140 = &PTR_FUN_710523d9c8;
    local_138 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    lVar29 = *(long *)(lVar34 + 0x18);
    lVar37 = *(long *)(lVar29 + 0x1b8);
    if (lVar37 != 0) {
      lVar41 = lVar29 + 0x1b8;
      do {
        bVar8 = *(int *)(lVar37 + 0x20) < 0;
        if (!bVar8) {
          lVar41 = lVar37;
        }
        lVar37 = *(long *)(lVar37 + (ulong)bVar8 * 8);
      } while (lVar37 != 0);
      if (((lVar41 != lVar29 + 0x1b8) && (*(int *)(lVar41 + 0x20) < 1)) &&
         (plVar36 = *(long **)(lVar41 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x208))(plVar36,local_1c8 & 0xffffffff);
        (**(code **)(*plVar36 + 0x388))(plVar36,(uint)local_1c8 ^ 1,0);
        lVar29 = *(long *)(lVar34 + 0x18);
      }
    }
    FUN_7103771d60(&local_140,lVar29,(long ****)0x1,ppppbVar21,pppplVar23,uVar13,uVar33,
                   ppppppppplVar24);
    ppuVar5 = local_138;
    plVar36 = (long *)*local_138;
    if (plVar36 != (long *)0x0) {
      (**(code **)(*plVar36 + 0x388))(plVar36,local_1c8._4_4_ ^ 1,0);
    }
    local_140 = &PTR_FUN_710523d9c8;
    local_138 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    lVar29 = *(long *)(*(long *)(lVar34 + 0x18) + 0x1b8);
    if (lVar29 != 0) {
      lVar37 = *(long *)(lVar34 + 0x18) + 0x1b8;
      lVar41 = lVar37;
      do {
        if (0 < *(int *)(lVar29 + 0x20)) {
          lVar41 = lVar29;
        }
        lVar29 = *(long *)(lVar29 + (ulong)(*(int *)(lVar29 + 0x20) < 1) * 8);
      } while (lVar29 != 0);
      if (((lVar41 != lVar37) && (*(int *)(lVar41 + 0x20) < 2)) &&
         (plVar36 = *(long **)(lVar41 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x208))(plVar36,local_1c8._4_4_);
        (**(code **)(*plVar36 + 0x388))(plVar36,local_1c8._4_4_ ^ 1,0);
      }
    }
  }
  else if (*(char *)(lVar34 + 0x20) != '\0') {
    (**(code **)(**(long **)(lVar34 + 0x18) + 0x70))(*(long **)(lVar34 + 0x18),0);
    *(undefined1 *)(lVar34 + 0x20) = 0;
  }
  FUN_7101f3d240(*(long *)(lVar34 + 8),(int *)ppppbVar22,(long *********)(lVar26 + 0x178),
                 (ulong)uVar6,0,uVar13,uVar33,ppppppppplVar24);
  lVar26 = puVar38[0x61];
  lVar34 = **(long **)(lVar26 + 0x18);
  if (lVar34 != 0) {
    *(undefined8 *)(lVar34 + 0x30) = _ConstantZero;
    *(byte *)(lVar34 + 0x58) = *(byte *)(lVar34 + 0x58) | 0x10;
  }
  lVar34 = **(long **)(lVar26 + 0x28);
  if (lVar34 == 0) {
    fVar46 = 0.0;
    fVar44 = _ConstantZero;
  }
  else {
    fVar44 = *(float *)(lVar34 + 0x30);
    fVar46 = ABS(*(float *)(lVar34 + 0x50) * *(float *)(lVar34 + 0x48));
    bVar4 = *(byte *)(lVar34 + 0x5b) & 3;
    if (bVar4 == 2) {
      fVar44 = fVar44 - fVar46 * 0.5;
    }
    else if (bVar4 == 1) {
      fVar44 = fVar44 + fVar46 * 0.5;
    }
    for (lVar34 = *(long *)(lVar34 + 0x18); lVar34 != 0; lVar34 = *(long *)(lVar34 + 0x18)) {
      fVar44 = fVar44 + *(float *)(lVar34 + 0x30);
    }
  }
  fVar47 = (fVar44 + 960.0) - fVar46 * 0.5;
  if (0.0 <= fVar47) {
    fVar44 = fVar44 + 960.0 + fVar46 * 0.5;
    if (1920.0 < fVar44) {
      fVar45 = (1920.0 - fVar44) + 0.0;
    }
  }
  else {
    fVar45 = 0.0 - fVar47;
  }
  lVar26 = **(long **)(lVar26 + 0x18);
  if (lVar26 != 0) {
    *(float *)(lVar26 + 0x30) = fVar45;
    *(undefined4 *)(lVar26 + 0x34) = 0;
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) | 0x10;
  }
  if (uVar6 == 0x10) {
LAB_7101f2197c:
    uVar30 = 1;
  }
  else {
    piVar28 = (int *)param_1[0x7f];
    iVar32 = *local_1c0;
    if (piVar28 == (int *)param_1[0x80]) {
      iVar9 = 0;
    }
    else {
      lVar26 = param_1[0x80] - (long)piVar28;
      if (lVar26 == 0) goto LAB_7101f2205c;
      uVar30 = (lVar26 >> 3) * -0x70a3d70a3d70a3d7;
      if (*piVar28 != 0) {
        uVar31 = 0;
        piVar28 = piVar28 + 0xb;
        do {
          if ((piVar28[-1] <= iVar32) && (iVar32 < *piVar28 + piVar28[-1])) goto LAB_7101f2197c;
          uVar31 = uVar31 + 1;
          piVar28 = piVar28 + 0x32;
        } while (uVar31 <= uVar30 && uVar30 - uVar31 != 0);
        uVar30 = 0;
        goto LAB_7101f21a1c;
      }
      uVar31 = 0;
      iVar9 = 0;
      piVar28 = piVar28 + 0xb;
      do {
        uVar31 = uVar31 + 1;
        iVar9 = *piVar28 + iVar9;
        piVar28 = piVar28 + 0x32;
      } while (uVar31 <= uVar30 && uVar30 - uVar31 != 0);
    }
    uVar30 = (ulong)(iVar32 < iVar9);
  }
LAB_7101f21a1c:
  ppppppppplVar19 = ppppppppplVar1;
  ppppbVar22 = ppppbVar2;
  ppppbVar21 = ppppbVar20;
  FUN_7101f3e830(puVar38[99],uVar30,ppppppppplVar1,ppppbVar2,(long ****)ppppbVar20,uVar13,uVar33,
                 ppppppppplVar24);
  if (((local_110 & 1) != 0) && (local_100 != 0)) {
    FUN_710392eb40(local_100);
  }
  if ((((ulong)local_e0 & 1) != 0) && (local_d0 != (long *********)0x0)) {
    FUN_710392eb40((ulong)local_d0);
  }
  lVar26 = param_1[0x70];
  if (*(int *)(lVar26 + 0xd8) != 0) {
    lVar29 = param_1[0x7f];
    lVar37 = param_1[0x68];
    lVar34 = lVar37 + 0x178;
    uVar30 = (param_1[0x80] - lVar29 >> 3) * -0x70a3d70a3d70a3d7;
    if (param_1[0x80] - lVar29 == 0) {
      uVar31 = 0;
    }
    else {
      uVar31 = 0;
      iVar32 = 0;
      piVar28 = (int *)(lVar29 + 0x2c);
      do {
        iVar9 = iVar32;
        if (piVar28[-0xb] != 0) {
          iVar9 = piVar28[-1];
        }
        iVar32 = *piVar28 + iVar9;
        if ((iVar9 <= *(int *)(param_1[0x6c] + 0x17c)) && (*(int *)(param_1[0x6c] + 0x17c) < iVar32)
           ) break;
        uVar31 = uVar31 + 1;
        piVar28 = piVar28 + 0x32;
      } while (uVar31 <= uVar30 && uVar30 - uVar31 != 0);
    }
    uVar43 = (ulong)(int)uVar31;
    uVar31 = uVar43 + 1;
    if (uVar31 <= uVar30 && uVar30 - uVar31 != 0) {
      lVar29 = lVar29 + uVar31 * 200;
      uVar17 = *(undefined8 *)(lVar29 + 0x10);
      local_100 = *(ulong *)(lVar29 + 0x18);
      uStack_f8 = *(undefined8 *)(lVar29 + 0x20);
      local_110 = (byte)*(undefined8 *)(lVar29 + 8);
      uStack_10f = (undefined7)((ulong)*(undefined8 *)(lVar29 + 8) >> 8);
      uStack_108 = (undefined1)uVar17;
      local_107 = (undefined1)((ulong)uVar17 >> 8);
      uStack_106 = (undefined6)((ulong)uVar17 >> 0x10);
      lVar35 = *(long *)(lVar37 + 0x180);
      lVar41 = lVar34;
      if (lVar34 != lVar35) {
        iVar32 = *(int *)(lVar29 + 0x28);
        do {
          ppppppppplVar19 = (long *********)&SUB_00000020;
          iVar9 = memcmp((void *)(lVar35 + 0x18),&local_110,0x20);
          if ((iVar9 == 0) &&
             ((lVar41 = lVar35, *(int *)(lVar35 + 0x10) == 2 || (*(int *)(lVar35 + 0x38) == iVar32))
             )) break;
          lVar35 = *(long *)(lVar35 + 8);
          lVar41 = lVar34;
        } while (lVar34 != lVar35);
      }
      if ((lVar34 == lVar41) || (**(long **)(lVar41 + 0x48) == 0)) {
        FUN_7103779650(*(long *)(lVar26 + 0x120));
      }
      else {
        FUN_7103779480(lVar26 + 0x118,lVar41 + 0x40,ppppppppplVar19,ppppbVar22,(long ****)ppppbVar21
                       ,uVar13,uVar33,ppppppppplVar24);
      }
    }
    uVar30 = (param_1[0x80] - param_1[0x7f] >> 3) * -0x70a3d70a3d70a3d7;
    if (uVar30 < uVar43 || uVar30 - uVar43 == 0) {
LAB_7101f2205c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar29 = param_1[0x7f] + uVar43 * 200;
    lVar41 = *(long *)(lVar26 + 0x110);
    local_e0 = *(undefined ***)(lVar29 + 8);
    local_d8 = *(undefined ***)(lVar29 + 0x10);
    local_d0 = *(long **********)(lVar29 + 0x18);
    local_c8 = *(undefined8 *)(lVar29 + 0x20);
    lVar26 = *(long *)(lVar37 + 0x180);
    if (lVar34 != lVar26) {
      iVar32 = *(int *)(lVar29 + 0x28);
      iVar9 = *(int *)(lVar29 + 0x2c);
      do {
        ppppppppplVar19 = (long *********)&SUB_00000020;
        iVar10 = memcmp((void *)(lVar26 + 0x18),&local_e0,0x20);
        if ((iVar10 == 0) &&
           ((lVar29 = lVar26, *(int *)(lVar26 + 0x10) == 2 ||
            (*(int *)(lVar26 + 0x38) == iVar32 + iVar9 + -1)))) break;
        lVar26 = *(long *)(lVar26 + 8);
        lVar29 = lVar34;
      } while (lVar34 != lVar26);
      if ((lVar34 != lVar29) && (**(long **)(lVar29 + 0x48) != 0)) {
        FUN_7103779480(lVar41 + 0x10,lVar29 + 0x40,ppppppppplVar19,ppppbVar22,(long ****)ppppbVar21,
                       uVar13,uVar33,ppppppppplVar24);
        goto LAB_7101f21c70;
      }
    }
    FUN_7103779650(*(long *)(lVar41 + 0x18));
  }
LAB_7101f21c70:
  FUN_7101f37360(param_1[0x72],ppppppppplVar1,ppppbVar2,ppppbVar20,(long ****)ppppbVar21,uVar13,
                 uVar33,ppppppppplVar24);
  FUN_7101f30ff0(param_1[0x74],ppppppppplVar1,ppppbVar2,ppppbVar20,(long ****)ppppbVar21,uVar13,
                 uVar33,ppppppppplVar24);
  FUN_7101f3e830(*(long *)(param_1[0x76] + 0x10),1,ppppppppplVar1,ppppbVar2,(long ****)ppppbVar20,
                 uVar13,uVar33,ppppppppplVar24);
  lVar29 = param_1[0x68];
  puVar38 = (undefined8 *)param_1[0x78];
  lVar26 = **(long **)(lVar29 + 0x138);
  lVar34 = (*(long **)(lVar29 + 0x138))[1];
  if (lVar34 - lVar26 == 0) {
    iVar32 = 0;
  }
  else {
    uVar13 = (lVar34 - lVar26 >> 3) * -0x70a3d70a3d70a3d7;
    uVar30 = 0;
    iVar32 = 0;
    piVar28 = (int *)(lVar26 + 0x2c);
    do {
      uVar30 = uVar30 + 1;
      iVar32 = *piVar28 + iVar32;
      piVar28 = piVar28 + 0x32;
    } while (uVar30 <= uVar13 && uVar13 - uVar30 != 0);
  }
  if (*(int *)(puVar38 + 5) != iVar32) {
    *(int *)(puVar38 + 5) = iVar32;
    FUN_710377a310((long)(puVar38 + 1),1);
    lVar29 = param_1[0x68];
    lVar26 = **(long **)(lVar29 + 0x138);
    lVar34 = (*(long **)(lVar29 + 0x138))[1];
  }
  uVar30 = (lVar34 - lVar26 >> 3) * -0x70a3d70a3d70a3d7;
  uVar13 = (ulong)*(int *)(lVar29 + 0x1b8);
  if ((uVar30 < uVar13 || uVar30 - uVar13 == 0) || (*(int *)(lVar26 + uVar13 * 200) == 0)) {
    if (*(int *)(lVar29 + 0x1b8) < 1) {
      iVar9 = 0;
    }
    else {
      uVar33 = 0;
      iVar9 = 0;
      piVar28 = (int *)(lVar26 + 0x2c);
      do {
        if (uVar30 < uVar33 || uVar30 - uVar33 == 0) break;
        uVar33 = uVar33 + 1;
        iVar9 = *piVar28 + iVar9;
        piVar28 = piVar28 + 0x32;
      } while ((long)uVar33 < (long)uVar13);
    }
  }
  else {
    iVar9 = *(int *)(lVar26 + uVar13 * 200 + 0x28);
  }
  iVar9 = *(int *)(lVar29 + 0x1bc) + iVar9;
  if (*(int *)((long)puVar38 + 0x2c) != iVar9) {
    *(int *)((long)puVar38 + 0x2c) = iVar9;
    FUN_710377a310((long)(puVar38 + 3),1);
  }
  if (iVar32 < 1) {
    fVar44 = 0.0;
  }
  else {
    uVar30 = FUN_7101f3b1c0(*(long **)(param_1[0x68] + 0x138),*(int *)(param_1[0x68] + 0x1b8));
    fVar44 = ((float)uVar30 / (float)((ulong)((long)iVar32 * 1000000) >> 2)) * 100.0;
  }
  if (100.0 < fVar44) {
    fVar44 = 100.0;
  }
  FUN_7103778630((ulong)(uint)fVar44,*(long *)(*(long *)*puVar38 + 0x10),0x71042a3845);
  lVar34 = param_1[0x80];
  for (lVar26 = param_1[0x7f]; lVar26 != lVar34; lVar26 = lVar26 + 200) {
    *(bool *)(lVar26 + 0xc1) = *(int *)(lVar26 + 0x30) != 0;
  }
  return;
LAB_7101f20f6c:
  local_88 = 1;
  goto LAB_7101f20f74;
}

