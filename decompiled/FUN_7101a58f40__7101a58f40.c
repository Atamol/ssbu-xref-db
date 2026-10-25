// addr:      7101a58f40
// offset:    0x1a58f40
// name:      FUN_7101a58f40
// mangled:   
// signature: undefined __cdecl FUN_7101a58f40(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101a590d8) */
/* WARNING: Removing unreachable block (ram,0x007101a591f8) */

void FUN_7101a58f40(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  bool bVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  long *plVar14;
  uint uVar15;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined **local_60;
  ulong local_58;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0xac) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xac) = param_2;
  if (param_2 != 3) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  FUN_7103776910(&local_60,param_1 + 0x10,(long ****)"set_txt_early",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  uVar1 = local_58;
  if (*(long **)(local_58 + 0x10) != (long *)0x0) {
    param_3 = (long ****)0x0;
    param_4 = (byte ****)0x0;
    local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
    FUN_71037a2270(*(long **)(local_58 + 0x10),(ushort *)&local_a8,0,0);
  }
  FUN_7101a587e0(param_1,param_2);
  FUN_7103776910(&local_a8,param_1 + 0x70,(long ****)"disable_onoff",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar14 = local_a0;
  lVar4 = *local_a0;
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  }
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar14);
  }
  FUN_7103776910(&local_a8,param_1 + 0x30,(long ****)"disable_size",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar14 = local_a0;
  lVar4 = *local_a0;
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  }
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar14);
  }
  uVar15 = 0x811c9dc5;
  if (param_2 == 0) {
    FUN_71003a4ca0((uint *)&local_f0,"player_color_%dp",1,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    local_a8 = (undefined **)0x0;
    for (uVar7 = 0; *(char *)((long)&local_e8 + uVar7) != '\0'; uVar7 = uVar7 + 2) {
      *(char *)((long)&local_a0 + uVar7) = *(char *)((long)&local_e8 + uVar7);
      if (0x3e < (int)uVar7 + 1U) {
        uVar7 = (ulong)((int)uVar7 + 1);
        break;
      }
      cVar13 = *(char *)((long)&local_e8 + uVar7 + 1);
      if (cVar13 == '\0') {
        uVar7 = uVar7 + 1;
        break;
      }
      *(char *)((long)&local_a0 + uVar7 + 1) = cVar13;
    }
    *(undefined1 *)((long)&local_a0 + (uVar7 & 0xffffffff)) = 0;
    uVar10 = (uint)(byte)local_a0;
    local_a8 = (undefined **)(uVar7 << 0x20);
    if ((byte)local_a0 != 0) {
      pbVar6 = (byte *)((long)&local_a0 + 1);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar10;
        uVar10 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar10 != 0);
    }
    local_a8 = (undefined **)CONCAT44((int)uVar7,uVar15);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),(long)&local_a0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),(long)&local_a0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x88),(long)&local_a0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x98),(long)&local_a0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x78),0x71044017b0);
    lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
      lVar11 = lVar5;
      lVar12 = lVar4;
      do {
        if (0 < *(int *)(lVar12 + 0x20)) {
          lVar11 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 1) * 8);
      } while (lVar12 != 0);
      if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 2)) &&
         (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
        (**(code **)(*plVar14 + 0x1f8))(plVar14,1);
        param_3 = (long ****)0x0;
        (**(code **)(*plVar14 + 0x388))(plVar14,0);
        lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
        lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
      }
      lVar11 = lVar5;
      lVar12 = lVar4;
      if (lVar4 != 0) {
        do {
          if (1 < *(int *)(lVar12 + 0x20)) {
            lVar11 = lVar12;
          }
          lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 2) * 8);
        } while (lVar12 != 0);
        if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 3)) &&
           (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
          (**(code **)(*plVar14 + 0x1f8))(plVar14,1);
          param_3 = (long ****)0x0;
          (**(code **)(*plVar14 + 0x388))(plVar14,0);
          lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
          lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
        }
        if (lVar4 != 0) {
          lVar11 = lVar5;
          do {
            if (2 < *(int *)(lVar4 + 0x20)) {
              lVar11 = lVar4;
            }
            lVar4 = *(long *)(lVar4 + (ulong)(*(int *)(lVar4 + 0x20) < 3) * 8);
          } while (lVar4 != 0);
          if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 4)) &&
             (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
            bVar2 = *(char *)(param_1 + 0xbe) == '\0';
            (**(code **)(*plVar14 + 0x1f8))(plVar14,!bVar2);
            param_3 = (long ****)0x0;
            (**(code **)(*plVar14 + 0x388))(plVar14,bVar2);
          }
        }
      }
    }
    if (*(int *)(param_1 + 0xac) == 0) {
      FUN_7103778ab0(&local_f0,(undefined8 *)(param_1 + 0x40),param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar15 = *(uint *)(param_1 + 0xb0);
      if (uVar15 + 1 < 2) {
        FUN_710377a280((long)&local_f0,(byte *)"mel_tournament_guest_n",1);
        uVar7 = local_e8;
      }
      else {
        pcVar8 = &DAT_7105314518;
        if ((uVar15 < 0x3d) && (*(char *)*DAT_7105314510 == '\0')) {
          pcVar8 = (char *)(*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) +
                           (ulong)uVar15 * 0xf7d8);
        }
        plVar14 = *(long **)(local_e8 + 0x10);
        uVar7 = local_e8;
        if (*pcVar8 == '\0') {
          if (plVar14 != (long *)0x0) {
            puVar3 = (ushort *)&local_44;
            uVar15 = 0;
            uVar7 = 0;
            local_44 = 0;
            goto LAB_7101a59bf4;
          }
        }
        else if (plVar14 != (long *)0x0) {
          puVar3 = (ushort *)(pcVar8 + 0xc);
          uVar15 = 0xffffffff;
          uVar7 = 1;
LAB_7101a59bf4:
          FUN_71037a2270(plVar14,puVar3,uVar15,uVar7);
          uVar7 = local_e8;
        }
      }
      local_f0 = &PTR_FUN_710523d9a8;
      local_e8 = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
    }
    pcVar8 = "mel_tournament_guest_n";
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        local_e8 = 0x635f726579616c70;
        local_e0 = 0x70665f726f6c6f;
        uVar9 = 0x70;
        pbVar6 = (byte *)((long)&local_e8 + 1);
        uVar10 = uVar15;
        do {
          uVar10 = uVar10 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (uVar9 != 0);
        local_f0 = (undefined **)CONCAT44(0xf,uVar10);
        uVar7 = 0;
        cVar13 = 'p';
        local_a8 = (undefined **)0x0;
        do {
          *(char *)((long)&local_a0 + uVar7) = cVar13;
          if (0x3e < (int)uVar7 + 1U) {
            uVar7 = (ulong)((int)uVar7 + 1);
            break;
          }
          cVar13 = *(char *)((long)&local_e8 + uVar7 + 1);
          if (cVar13 == '\0') {
            uVar7 = uVar7 + 1;
            break;
          }
          *(char *)((long)&local_a0 + uVar7 + 1) = cVar13;
          cVar13 = *(char *)((long)&local_e8 + uVar7 + 2);
          uVar7 = uVar7 + 2;
        } while (cVar13 != '\0');
        *(undefined1 *)((long)&local_a0 + (uVar7 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_a0;
        local_a8 = (undefined **)(uVar7 << 0x20);
        if ((byte)local_a0 != 0) {
          pbVar6 = (byte *)((long)&local_a0 + 1);
          do {
            uVar15 = uVar15 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar6;
            pbVar6 = pbVar6 + 1;
          } while (uVar10 != 0);
        }
        local_a8 = (undefined **)CONCAT44((int)uVar7,uVar15);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),(long)&local_a0);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),(long)&local_a0);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x88),(long)&local_a0);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x98),(long)&local_a0);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x78),0x71042f8480);
        lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
        if (lVar4 != 0) {
          lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
          lVar11 = lVar5;
          lVar12 = lVar4;
          do {
            if (0 < *(int *)(lVar12 + 0x20)) {
              lVar11 = lVar12;
            }
            lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 1) * 8);
          } while (lVar12 != 0);
          if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 2)) &&
             (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
            (**(code **)(*plVar14 + 0x1f8))(plVar14,0);
            (**(code **)(*plVar14 + 0x388))(plVar14,1,0);
            lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
            lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
          }
          lVar11 = lVar5;
          lVar12 = lVar4;
          if (lVar4 != 0) {
            do {
              if (1 < *(int *)(lVar12 + 0x20)) {
                lVar11 = lVar12;
              }
              lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 2) * 8);
            } while (lVar12 != 0);
            if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 3)) &&
               (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
              (**(code **)(*plVar14 + 0x1f8))(plVar14,0);
              (**(code **)(*plVar14 + 0x388))(plVar14,1,0);
              lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
              lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
            }
            lVar11 = lVar5;
            if (lVar4 != 0) {
              do {
                if (2 < *(int *)(lVar4 + 0x20)) {
                  lVar11 = lVar4;
                }
                lVar4 = *(long *)(lVar4 + (ulong)(*(int *)(lVar4 + 0x20) < 3) * 8);
              } while (lVar4 != 0);
              if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 4)) &&
                 (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
                (**(code **)(*plVar14 + 0x1f8))(plVar14,0);
                (**(code **)(*plVar14 + 0x388))(plVar14,1,0);
              }
            }
          }
        }
        plVar14 = *(long **)(*(long *)(param_1 + 0x48) + 0x10);
        if (plVar14 != (long *)0x0) {
          local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
          FUN_71037a2270(plVar14,(ushort *)&local_f0,0,0);
        }
      }
      else {
        FUN_71003a4ca0((uint *)&local_f0,"player_color_%dp",1,param_3,param_4,param_5,param_6,
                       param_7,param_8);
        local_a8 = (undefined **)0x0;
        for (uVar7 = 0; *(char *)((long)&local_e8 + uVar7) != '\0'; uVar7 = uVar7 + 2) {
          *(char *)((long)&local_a0 + uVar7) = *(char *)((long)&local_e8 + uVar7);
          if (0x3e < (int)uVar7 + 1U) {
            uVar7 = (ulong)((int)uVar7 + 1);
            break;
          }
          cVar13 = *(char *)((long)&local_e8 + uVar7 + 1);
          if (cVar13 == '\0') {
            uVar7 = uVar7 + 1;
            break;
          }
          *(char *)((long)&local_a0 + uVar7 + 1) = cVar13;
        }
        *(undefined1 *)((long)&local_a0 + (uVar7 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_a0;
        local_a8 = (undefined **)(uVar7 << 0x20);
        if ((byte)local_a0 != 0) {
          pbVar6 = (byte *)((long)&local_a0 + 1);
          do {
            uVar15 = uVar15 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar6;
            pbVar6 = pbVar6 + 1;
          } while (uVar10 != 0);
        }
        local_a8 = (undefined **)CONCAT44((int)uVar7,uVar15);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),(long)&local_a0);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),(long)&local_a0);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x88),(long)&local_a0);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x98),(long)&local_a0);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x78),0x710432a22d);
        lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
        if (lVar4 != 0) {
          lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
          lVar11 = lVar5;
          lVar12 = lVar4;
          do {
            if (0 < *(int *)(lVar12 + 0x20)) {
              lVar11 = lVar12;
            }
            lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 1) * 8);
          } while (lVar12 != 0);
          if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 2)) &&
             (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
            (**(code **)(*plVar14 + 0x1f8))(plVar14,1);
            (**(code **)(*plVar14 + 0x388))(plVar14,0,0);
            lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
            lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
          }
          lVar11 = lVar5;
          lVar12 = lVar4;
          if (lVar4 != 0) {
            do {
              if (1 < *(int *)(lVar12 + 0x20)) {
                lVar11 = lVar12;
              }
              lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 2) * 8);
            } while (lVar12 != 0);
            if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 3)) &&
               (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
              (**(code **)(*plVar14 + 0x1f8))(plVar14,0);
              (**(code **)(*plVar14 + 0x388))(plVar14,1,0);
              lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
              lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
            }
            lVar11 = lVar5;
            if (lVar4 != 0) {
              do {
                if (2 < *(int *)(lVar4 + 0x20)) {
                  lVar11 = lVar4;
                }
                lVar4 = *(long *)(lVar4 + (ulong)(*(int *)(lVar4 + 0x20) < 3) * 8);
              } while (lVar4 != 0);
              if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 4)) &&
                 (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
                (**(code **)(*plVar14 + 0x1f8))(plVar14,0);
                (**(code **)(*plVar14 + 0x388))(plVar14,1,0);
              }
            }
          }
        }
      }
      goto joined_r0x007101a59c2c;
    }
    local_e8 = 0x635f726579616c70;
    local_e0 = 0x70635f726f6c6f;
    uVar9 = 0x70;
    pbVar6 = (byte *)((long)&local_e8 + 1);
    uVar10 = uVar15;
    do {
      uVar10 = uVar10 * 0x89 ^ uVar9;
      uVar9 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (uVar9 != 0);
    local_f0 = (undefined **)CONCAT44(0xf,uVar10);
    uVar7 = 0;
    cVar13 = 'p';
    local_a8 = (undefined **)0x0;
    do {
      *(char *)((long)&local_a0 + uVar7) = cVar13;
      if (0x3e < (int)uVar7 + 1U) {
        uVar7 = (ulong)((int)uVar7 + 1);
        break;
      }
      cVar13 = *(char *)((long)&local_e8 + uVar7 + 1);
      if (cVar13 == '\0') {
        uVar7 = uVar7 + 1;
        break;
      }
      *(char *)((long)&local_a0 + uVar7 + 1) = cVar13;
      cVar13 = *(char *)((long)&local_e8 + uVar7 + 2);
      uVar7 = uVar7 + 2;
    } while (cVar13 != '\0');
    *(undefined1 *)((long)&local_a0 + (uVar7 & 0xffffffff)) = 0;
    uVar10 = (uint)(byte)local_a0;
    local_a8 = (undefined **)(uVar7 << 0x20);
    if ((byte)local_a0 != 0) {
      pbVar6 = (byte *)((long)&local_a0 + 1);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar10;
        uVar10 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar10 != 0);
    }
    local_a8 = (undefined **)CONCAT44((int)uVar7,uVar15);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),(long)&local_a0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),(long)&local_a0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x88),(long)&local_a0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x98),(long)&local_a0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x78),0x71044017b0);
    lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
      lVar11 = lVar5;
      lVar12 = lVar4;
      do {
        if (0 < *(int *)(lVar12 + 0x20)) {
          lVar11 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 1) * 8);
      } while (lVar12 != 0);
      if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 2)) &&
         (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
        (**(code **)(*plVar14 + 0x1f8))(plVar14,1);
        (**(code **)(*plVar14 + 0x388))(plVar14,0,0);
        lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
        lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
      }
      lVar11 = lVar5;
      lVar12 = lVar4;
      if (lVar4 != 0) {
        do {
          if (1 < *(int *)(lVar12 + 0x20)) {
            lVar11 = lVar12;
          }
          lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 2) * 8);
        } while (lVar12 != 0);
        if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 3)) &&
           (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
          (**(code **)(*plVar14 + 0x1f8))(plVar14,1);
          (**(code **)(*plVar14 + 0x388))(plVar14,0,0);
          lVar5 = *(long *)(param_1 + 0xa0) + 0x1b8;
          lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1b8);
        }
        if (lVar4 != 0) {
          lVar11 = lVar5;
          do {
            if (2 < *(int *)(lVar4 + 0x20)) {
              lVar11 = lVar4;
            }
            lVar4 = *(long *)(lVar4 + (ulong)(*(int *)(lVar4 + 0x20) < 3) * 8);
          } while (lVar4 != 0);
          if (((lVar11 != lVar5) && (*(int *)(lVar11 + 0x20) < 4)) &&
             (plVar14 = *(long **)(lVar11 + 0x28), plVar14 != (long *)0x0)) {
            bVar2 = *(char *)(param_1 + 0xbe) == '\0';
            (**(code **)(*plVar14 + 0x1f8))(plVar14,!bVar2);
            (**(code **)(*plVar14 + 0x388))(plVar14,bVar2,0);
          }
        }
      }
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x48) + 0x10);
    if (plVar14 != (long *)0x0) {
      local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
      FUN_71037a2270(plVar14,(ushort *)&local_f0,0,0);
    }
    if (*(int *)(param_1 + 0xac) == 1) {
      uVar15 = *(uint *)(param_1 + 0xb4);
      uVar7 = (ulong)uVar15;
      FUN_710377a280(param_1 + 0x50,(byte *)"mel_chara_select_lv_n",1);
      FUN_7103778430(param_1 + 0x30,"cp_level_%d",(ulong)uVar15,uVar7,param_5,param_6,param_7,
                     param_8);
    }
    pcVar8 = "mel_tournament_cp_n";
  }
  FUN_710377a280((long)&local_60,(byte *)pcVar8,1);
joined_r0x007101a59c2c:
  if (local_58 != 0) {
    local_58 = 0;
    local_60 = &PTR_FUN_710523d9a8;
    FUN_710392eb40(uVar1);
  }
  return;
}

