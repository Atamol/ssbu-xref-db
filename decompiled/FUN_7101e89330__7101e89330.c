// addr:      7101e89330
// offset:    0x1e89330
// name:      FUN_7101e89330
// mangled:   
// signature: undefined __cdecl FUN_7101e89330(long * param_1, long * * * * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e89330(long *param_1,long ****param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar8;
  long ****pppplVar9;
  long *********ppppppppplVar10;
  byte ****ppppbVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  undefined8 local_a8;
  ulong local_a0 [8];
  undefined4 local_58;
  undefined1 local_54;
  ulong *puVar18;
  
  lVar13 = param_1[0x22];
  bVar1 = (byte)param_3;
  FUN_7101e85dc0((long)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(param_1 + 0x13) = 1;
  param_1[0x17] = 1;
  *(byte *)((long)param_1 + 0x114) = bVar1 & 1;
  FUN_71037780e0(&local_a8,*(long *)param_1[1] + 8,(long ****)"movie",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_a0[0];
  if (param_1 + 4 != &local_a8) {
    local_a0[0] = 0;
    uVar2 = param_1[5];
    param_1[5] = uVar3;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar3 = local_a0[0];
  local_a8 = &PTR_FUN_710523d9e8;
  local_a0[0] = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  FUN_7103776910(&local_a8,*(long *)param_1[1] + 8,(long ****)"movie",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_a0[0];
  if (param_1 + 9 != &local_a8) {
    local_a0[0] = 0;
    uVar2 = param_1[10];
    param_1[10] = uVar3;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar3 = local_a0[0];
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0[0] = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776640(&local_a8,*(long *)param_1[3] + 8,(byte ****)"set_parts_text",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  uVar3 = local_a0[0];
  plVar5 = param_1 + 0xb;
  if (plVar5 != &local_a8) {
    local_a0[0] = 0;
    uVar2 = param_1[0xc];
    param_1[0xc] = uVar3;
    if (uVar2 != 0) {
      uVar3 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40(uVar2);
    }
  }
  uVar3 = local_a0[0];
  local_a8 = &PTR_FUN_710523d988;
  local_a0[0] = 0;
  if (uVar3 != 0) {
    uVar2 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_a8,(long)plVar5,(long ****)"set_txt_icon",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_a8,"mnu_movie_skip_guide",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar3 = local_a0[0];
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0[0] = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_a8,(long)plVar5,(long ****)"set_txt_help",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_a8,"mnu_movie_skip",param_3,param_4,param_5,param_6,param_7,param_8);
  uVar3 = local_a0[0];
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0[0] = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  if ((*(long *)(param_1[0xc] + 8) != 0) &&
     (lVar12 = *(long *)(*(long *)(param_1[0xc] + 8) + 0x18), lVar12 != 0)) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  FUN_71037780e0(&local_a8,*(long *)param_1[3] + 8,(long ****)"help_in",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_a0[0];
  uVar8 = extraout_x1;
  if (param_1 + 6 != &local_a8) {
    local_a0[0] = 0;
    uVar2 = param_1[7];
    param_1[7] = uVar3;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
      uVar8 = extraout_x1_00;
    }
  }
  uVar3 = local_a0[0];
  local_a8 = &PTR_FUN_710523d9e8;
  local_a0[0] = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
    uVar8 = extraout_x1_01;
  }
  param_1[0x16] = (long)param_2;
  FUN_7101e86080((long)param_1,uVar8,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_1 + 0x21) = 0;
  lVar12 = DAT_71053263a8;
  lVar15 = *(long *)(DAT_71053263a8 + 8);
  lVar16 = *(long *)(lVar15 + 0xe0);
  if (((lVar16 != 0) &&
      (lVar16 = *(long *)(*(long *)(*(long *)**(undefined8 **)(lVar16 + 0x80) + 0x10) + 8),
      lVar16 != 0)) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  }
  *(undefined1 *)(lVar15 + 200) = 0;
  if ((param_1[0x16] & 0xff0000ffffffffffU) == 0x6f00000f127c83e4) {
    *(undefined1 *)(param_1 + 0x21) = 1;
    lVar15 = DAT_7105332f28;
    uVar14 = **(uint **)(*(long *)(lVar12 + 8) + 0xd0);
    if (uVar14 != 0xffffff) {
      std::recursive_mutex::lock();
      param_3 = (long ****)0x2;
      FUN_71035465b0(lVar15,uVar14,2,param_4,param_5,param_6,param_7,param_8);
      std::recursive_mutex::unlock();
    }
    *(undefined4 *)((long)param_1 + 0xbc) = 1;
  }
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (undefined **)&DAT_00000010;
      param_3 = (long ****)&local_a8;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101e896b4;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101e896b4:
  *puVar4 = &PTR_FUN_7105186398;
  plVar5 = (long *)FUN_710392e290(0x10,0x118,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar8 = extraout_x1_02;
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (undefined **)&DAT_00000118;
      param_3 = (long ****)&local_a8;
      auVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      uVar8 = auVar20._8_8_;
      if (((auVar20._0_8_ & 1) != 0) &&
         (plVar5 = (long *)FUN_710392e290(0x10,0x118,param_3,param_4,param_5,param_6,param_7,param_8
                                         ), uVar8 = extraout_x1_03, plVar5 != (long *)0x0))
      goto LAB_7101e8971c;
    }
    plVar5 = (long *)0x0;
  }
LAB_7101e8971c:
  *(undefined1 *)((long)plVar5 + 0xe4) = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined4 *)(plVar5 + 0x1c) = 0xffffffff;
  plVar5[0x1d] = 0;
  *plVar5 = (long)plVar5;
  plVar5[1] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x1b] = 0xffffffff;
  plVar5[0x18] = 0;
  plVar5[0x19] = 0;
  plVar5[0x16] = 0;
  plVar5[0x17] = 0;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  FUN_7103776290(plVar5 + 0x1e,uVar8,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(plVar5 + 0x20) = 0;
  *(undefined1 *)((long)plVar5 + 0x112) = 0;
  *(undefined2 *)(plVar5 + 0x22) = 0;
  plVar5[0x21] = 0;
  *(undefined2 *)((long)plVar5 + 0x113) = 1;
  plVar5[7] = (long)FUN_7103398d00;
  plVar5[8] = 0;
  plVar5[9] = (long)FUN_7103398d50;
  plVar5[10] = 0;
  *(undefined4 *)((long)plVar5 + 0xd4) = 0;
  *(undefined8 *)((long)plVar5 + 0xcc) = 0;
  *(undefined8 *)((long)plVar5 + 0xc4) = 0;
  *(undefined8 *)((long)plVar5 + 0xbc) = 0;
  *(undefined8 *)((long)plVar5 + 0xb4) = 0;
  *(undefined8 *)((long)plVar5 + 0xac) = 0;
  *(undefined8 *)((long)plVar5 + 0xa4) = 0;
  *(undefined8 *)((long)plVar5 + 0x9c) = 0;
  *(undefined8 *)((long)plVar5 + 0x94) = 0;
  *(undefined8 *)((long)plVar5 + 0x8c) = 0;
  plVar5[0x1b] = 0xffffffff;
  *(undefined4 *)(plVar5 + 0x1c) = 0xffffffff;
  *(undefined1 *)((long)plVar5 + 0xe4) = 0;
  *(undefined4 *)(plVar5 + 0x11) = 0;
  plVar5[5] = (long)FUN_7103398cf0;
  plVar5[6] = 0;
  plVar5[0xb] = (long)FUN_7103398e10;
  plVar5[0xc] = 0;
  plVar5[0xd] = (long)FUN_7103398f40;
  plVar5[0xe] = 0;
  plVar5[0xf] = (long)FUN_7103398cf0;
  plVar5[0x10] = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  FUN_71033991e0(plVar5);
  puVar4[1] = plVar5;
  plVar5 = (long *)param_1[0x15];
  param_1[0x15] = (long)puVar4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  lVar12 = *(long *)(DAT_710532f730 + 8);
  pppplVar9 = param_2;
  FUN_710328de50((uint *)&local_a8,*(long *)(lVar12 + 0x378),(ulong)param_2);
  uVar3 = FUN_710328e7c0(*(long *)(lVar12 + 0x378),(ulong)param_2);
  FUN_7103776640(&local_b8,*(long *)param_1[2] + 8,(byte ****)"set_moive_player",pppplVar9,param_4,
                 param_5,param_6,param_7,param_8);
  uVar2 = (ulong)(int)local_a8._4_4_;
  local_58 = (int)uVar3;
  local_54 = 1;
  if (local_a8._4_4_ == 0) {
    uVar3 = 0;
  }
  else {
    uVar14 = 0xffffffff;
    puVar18 = local_a0;
    do {
      puVar17 = (ulong *)((long)puVar18 + 1);
      bVar1 = (byte)*puVar18;
      uVar19 = bVar1 + 0x20;
      if (0x19 < bVar1 - 0x41) {
        uVar19 = (uint)bVar1;
      }
      uVar14 = (&DAT_7104754084)[(uVar19 ^ uVar14) & 0xff] ^ uVar14 >> 8;
      puVar18 = puVar17;
    } while (puVar17 < (ulong *)((long)local_a0 + (ulong)local_a8._4_4_));
    uVar3 = (ulong)~uVar14;
  }
  lVar12 = param_1[0x15];
  FUN_7103776390(&local_c8,&local_b8,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  ppppbVar11 = (byte ****)&local_58;
  FUN_71033994b0(*(long *)(lVar12 + 8),&local_c8,(long ****)(uVar3 | (uVar2 & 0xff) << 0x20),
                 ppppbVar11,param_5,param_6,param_7,param_8);
  uVar3 = local_c0;
  local_c8 = &PTR_FUN_710523d988;
  local_c0 = 0;
  if (uVar3 != 0) {
    uVar2 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = 0;
  if (uVar3 != 0) {
    uVar2 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar3);
  }
  if (((char)lVar13 != '\0') && ((char)param_1[0x22] == '\0')) {
    uVar14 = *(uint *)(param_1 + 0x14);
    if ((int)uVar14 < 0x500000) {
      if ((int)uVar14 < 0x250000) {
        if ((int)uVar14 < 0x200000) {
          if ((int)uVar14 < 0x150000) {
            if ((int)uVar14 < 0x100000) {
              if ((int)uVar14 < 0xfe000) {
                if ((int)uVar14 < 0x50000) {
                  if ((int)uVar14 < 0x10000) {
                    iVar6 = 3;
                    if (0 < (int)uVar14) {
                      iVar6 = 0;
                    }
                  }
                  else {
                    iVar6 = 1;
                  }
                }
                else {
                  iVar6 = 2;
                }
              }
              else {
                iVar6 = 8;
              }
            }
            else {
              iVar6 = 4;
            }
          }
          else {
            iVar6 = 6;
          }
        }
        else {
          iVar6 = 5;
        }
      }
      else {
        iVar6 = 7;
      }
    }
    else {
      iVar6 = 9;
    }
    FUN_7103775dc0(*(long **)param_1[1],iVar6,(long ****)(ulong)uVar14,ppppbVar11,param_5,param_6,
                   param_7,param_8);
    iVar6 = (int)param_1[0x14];
    if (iVar6 < 0x4fffff) {
      if (iVar6 < 0x24ffff) {
        if (iVar6 < 0x1fffff) {
          if (iVar6 < 0x14ffff) {
            if (iVar6 < 0xfffff) {
              if (iVar6 < 0xfdfff) {
                if (iVar6 < 0x4ffff) {
                  if (iVar6 < 0xffff) {
                    uVar14 = iVar6 >> 0x1f & 3;
                  }
                  else {
                    uVar14 = 1;
                  }
                }
                else {
                  uVar14 = 2;
                }
              }
              else {
                uVar14 = 8;
              }
            }
            else {
              uVar14 = 4;
            }
          }
          else {
            uVar14 = 6;
          }
        }
        else {
          uVar14 = 5;
        }
      }
      else {
        uVar14 = 7;
      }
    }
    else {
      uVar14 = 9;
    }
    FUN_7103775dc0(*(long **)param_1[2],uVar14,(long ****)(ulong)(iVar6 + 1),ppppbVar11,param_5,
                   param_6,param_7,param_8);
    iVar6 = (int)param_1[0x14];
    if (iVar6 < 0x4ffffe) {
      if (iVar6 < 0x24fffe) {
        if (iVar6 < 0x1ffffe) {
          if (iVar6 < 0x14fffe) {
            if (iVar6 < 0xffffe) {
              if (iVar6 < 0xfdffe) {
                if (iVar6 < 0x4fffe) {
                  if (iVar6 < 0xfffe) {
                    iVar7 = 3;
                    if (-2 < iVar6) {
                      iVar7 = 0;
                    }
                  }
                  else {
                    iVar7 = 1;
                  }
                }
                else {
                  iVar7 = 2;
                }
              }
              else {
                iVar7 = 8;
              }
            }
            else {
              iVar7 = 4;
            }
          }
          else {
            iVar7 = 6;
          }
        }
        else {
          iVar7 = 5;
        }
      }
      else {
        iVar7 = 7;
      }
    }
    else {
      iVar7 = 9;
    }
    FUN_7103775dc0(*(long **)param_1[3],iVar7,(long ****)(ulong)(iVar6 + 2),ppppbVar11,param_5,
                   param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  lVar13 = **(long **)param_1[1];
  *(undefined4 *)(*(long *)(lVar13 + 0x600) + 0x14) = 0x40000;
  *(undefined4 *)(*(long *)(lVar13 + 0x600) + 0x10) = 0xb00bffff;
  FUN_71037760f0(**(long **)param_1[1],0);
  if (((ulong)param_2 & 0xff0000ffffffffff) == 0x6f00000d626d0438) {
    local_a8 = (undefined **)FUN_710323af70(0x7104545c50,0);
    if (((ulong)local_a8 & 0xffffffffff) != 0) {
      lVar13 = *param_1;
      ppppbVar11 = (byte ****)(ulong)*(uint *)(lVar13 + 0x68);
      FUN_710323c4e0(lVar13,&local_a8,(long *********)(long)*(int *)(lVar13 + 0x70),ppppbVar11,
                     param_5,param_6,param_7,param_8);
    }
    ppppppppplVar10 = (long *********)0x0;
    plVar5 = FUN_7103240d30(param_1,0x7104545c50,(long ****)0x0,ppppbVar11,param_5,param_6,param_7,
                            param_8);
    FUN_7103776910(&local_a8,*(long *)param_1[3] + 8,(long ****)"set_rep_maintitle",ppppppppplVar10,
                   ppppbVar11,param_5,param_6,param_7,param_8);
    uVar3 = local_a0[0];
    FUN_7103778b80(local_a0[0],(long)plVar5,ppppppppplVar10,ppppbVar11,param_5,param_6,param_7,
                   param_8);
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0[0] = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    local_a8 = (undefined **)FUN_710323af70(0x71043cfb76,0);
    if (((ulong)local_a8 & 0xffffffffff) != 0) {
      lVar13 = *param_1;
      ppppbVar11 = (byte ****)(ulong)*(uint *)(lVar13 + 0x68);
      FUN_710323c4e0(lVar13,&local_a8,(long *********)(long)*(int *)(lVar13 + 0x70),ppppbVar11,
                     param_5,param_6,param_7,param_8);
    }
    ppppppppplVar10 = (long *********)0x0;
    plVar5 = FUN_7103240d30(param_1,0x71043cfb76,(long ****)0x0,ppppbVar11,param_5,param_6,param_7,
                            param_8);
    FUN_7103776910(&local_a8,*(long *)param_1[3] + 8,(long ****)"set_rep_subtitle",ppppppppplVar10,
                   ppppbVar11,param_5,param_6,param_7,param_8);
    uVar3 = local_a0[0];
    FUN_7103778b80(local_a0[0],(long)plVar5,ppppppppplVar10,ppppbVar11,param_5,param_6,param_7,
                   param_8);
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0[0] = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  return;
}

