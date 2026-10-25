// addr:      71032d5130
// offset:    0x32d5130
// name:      FUN_71032d5130
// mangled:   
// signature: undefined __cdecl FUN_71032d5130(long param_1, long * param_2, undefined4 param_3, undefined4 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71032d5130(long param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  byte ****ppppbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined1 local_318;
  uint local_2d8;
  undefined4 local_2d4;
  byte local_2d0 [64];
  undefined *local_290;
  char local_288 [24];
  undefined **local_270;
  byte ***local_240;
  undefined2 local_238;
  undefined4 local_236;
  undefined2 local_232;
  undefined4 local_230;
  undefined2 local_22c;
  undefined1 local_22a;
  undefined1 *local_228;
  undefined4 local_220;
  long alStack_210 [4];
  long *local_1f0;
  long alStack_1e0 [4];
  long *local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  undefined4 local_120;
  undefined8 local_110;
  byte local_108 [64];
  uint local_c8 [2];
  byte local_c0 [64];
  undefined8 local_80;
  undefined **local_78;
  long *local_70;
  
  if (*(long *)(*(long *)(param_1 + 0xd8) + 8) == 0) goto LAB_71032d5e4c;
  FUN_7103778760(*(long *)(param_1 + 0xd8),0x710428ff7d);
  if (*param_2 == param_2[1]) {
    return;
  }
  iVar4 = (int)((ulong)(param_2[1] - *param_2) >> 3) * 0x38e38e39;
  if (2 < iVar4) {
    iVar4 = 3;
  }
  *(int *)(param_1 + 200) = iVar4;
  local_c0[0] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  FUN_710062dc20(local_c8,"set%d_");
  uVar6 = local_c8[1];
  switch(param_3) {
  case 0:
    if ((int)local_c8[1] < 0x3f) {
      iVar4 = local_c8[1] + 1;
      lVar13 = (long)(int)local_c8[1];
      local_c8[1] = iVar4;
      local_c0[lVar13] = 0x6c;
      if (uVar6 != 0x3e) {
        local_c8[1] = uVar6 + 2;
        local_c0[iVar4] = 0x65;
        if ((int)uVar6 < 0x3d) {
          local_c8[1] = uVar6 + 3;
          local_c0[(int)(uVar6 + 2)] = 0x66;
          if (uVar6 != 0x3c) {
            local_c8[1] = uVar6 + 4;
            local_c0[(int)(uVar6 + 3)] = 0x74;
          }
        }
      }
      uVar6 = local_c8[1];
    }
    local_c8[0] = 0x811c9dc5;
    local_c0[(int)uVar6] = 0;
    uVar6 = (uint)local_c0[0];
    if (local_c0[0] != 0) {
      pbVar11 = local_c0;
      local_c8[0] = 0x811c9dc5;
      do {
        pbVar11 = pbVar11 + 1;
        local_c8[0] = local_c8[0] * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar11;
      } while (uVar6 != 0);
    }
    break;
  case 1:
    if ((int)local_c8[1] < 0x3f) {
      iVar4 = local_c8[1] + 1;
      lVar13 = (long)(int)local_c8[1];
      local_c8[1] = iVar4;
      local_c0[lVar13] = 0x72;
      if (uVar6 != 0x3e) {
        local_c8[1] = uVar6 + 2;
        local_c0[iVar4] = 0x69;
        if ((int)uVar6 < 0x3d) {
          local_c8[1] = uVar6 + 3;
          local_c0[(int)(uVar6 + 2)] = 0x67;
          if (uVar6 != 0x3c) {
            local_c8[1] = uVar6 + 4;
            local_c0[(int)(uVar6 + 3)] = 0x68;
            if ((int)uVar6 < 0x3b) {
              local_c8[1] = uVar6 + 5;
              local_c0[(int)(uVar6 + 4)] = 0x74;
            }
          }
        }
      }
      uVar6 = local_c8[1];
    }
    local_c8[0] = 0x811c9dc5;
    local_c0[(int)uVar6] = 0;
    uVar6 = (uint)local_c0[0];
    if (local_c0[0] != 0) {
      pbVar11 = local_c0;
      local_c8[0] = 0x811c9dc5;
      do {
        pbVar11 = pbVar11 + 1;
        local_c8[0] = local_c8[0] * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar11;
      } while (uVar6 != 0);
    }
    break;
  case 2:
    if ((int)local_c8[1] < 0x3f) {
      iVar4 = local_c8[1] + 1;
      lVar13 = (long)(int)local_c8[1];
      local_c8[1] = iVar4;
      local_c0[lVar13] = 0x74;
      if (uVar6 != 0x3e) {
        local_c8[1] = uVar6 + 2;
        local_c0[iVar4] = 0x6f;
        if ((int)uVar6 < 0x3d) {
          local_c8[1] = uVar6 + 3;
          local_c0[(int)(uVar6 + 2)] = 0x70;
        }
      }
      uVar6 = local_c8[1];
    }
    local_c8[0] = 0x811c9dc5;
    local_c0[(int)uVar6] = 0;
    uVar6 = (uint)local_c0[0];
    if (local_c0[0] != 0) {
      pbVar11 = local_c0;
      local_c8[0] = 0x811c9dc5;
      do {
        pbVar11 = pbVar11 + 1;
        local_c8[0] = local_c8[0] * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar11;
      } while (uVar6 != 0);
    }
    break;
  case 3:
    if ((int)local_c8[1] < 0x3f) {
      iVar4 = local_c8[1] + 1;
      lVar13 = (long)(int)local_c8[1];
      local_c8[1] = iVar4;
      local_c0[lVar13] = 0x62;
      if (uVar6 != 0x3e) {
        local_c8[1] = uVar6 + 2;
        local_c0[iVar4] = 0x6f;
        if ((int)uVar6 < 0x3d) {
          local_c8[1] = uVar6 + 3;
          local_c0[(int)(uVar6 + 2)] = 0x74;
          if (uVar6 != 0x3c) {
            local_c8[1] = uVar6 + 4;
            local_c0[(int)(uVar6 + 3)] = 0x74;
            if ((int)uVar6 < 0x3b) {
              local_c8[1] = uVar6 + 5;
              local_c0[(int)(uVar6 + 4)] = 0x6f;
              if (uVar6 != 0x3a) {
                local_c8[1] = uVar6 + 6;
                local_c0[(int)(uVar6 + 5)] = 0x6d;
              }
            }
          }
        }
      }
      uVar6 = local_c8[1];
    }
    local_c8[0] = 0x811c9dc5;
    local_c0[(int)uVar6] = 0;
    uVar6 = (uint)local_c0[0];
    if (local_c0[0] != 0) {
      pbVar11 = local_c0;
      local_c8[0] = 0x811c9dc5;
      do {
        pbVar11 = pbVar11 + 1;
        local_c8[0] = local_c8[0] * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar11;
      } while (uVar6 != 0);
    }
    break;
  default:
    goto switchD_71032d51f0_default;
  }
switchD_71032d51f0_default:
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd8),(long)local_c0);
  local_108[0] = 0;
  local_110 = 0;
  FUN_710062dc20((uint *)&local_110,"shift%d_to_");
  iVar4 = local_110._4_4_;
  switch(param_4) {
  case 1:
    if (local_110._4_4_ < 0x3f) {
      uVar6 = local_110._4_4_ + 1;
      lVar13 = (long)local_110._4_4_;
      local_110 = (ulong)uVar6 << 0x20;
      local_108[lVar13] = 0x6c;
      if (iVar4 != 0x3e) {
        local_110 = (ulong)(iVar4 + 2U) << 0x20;
        local_108[(int)uVar6] = 0x65;
        if (iVar4 < 0x3d) {
          local_110 = (ulong)(iVar4 + 3U) << 0x20;
          local_108[(int)(iVar4 + 2U)] = 0x66;
          if (iVar4 != 0x3c) {
            local_110 = (ulong)(iVar4 + 4) << 0x20;
            local_108[(int)(iVar4 + 3U)] = 0x74;
          }
        }
      }
      iVar4 = local_110._4_4_;
    }
    uVar6 = 0x811c9dc5;
    local_108[iVar4] = 0;
    uVar5 = (uint)local_108[0];
    if (local_108[0] != 0) {
      pbVar11 = local_108;
      uVar6 = 0x811c9dc5;
      do {
        pbVar11 = pbVar11 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar5;
        uVar5 = (uint)*pbVar11;
      } while (uVar5 != 0);
    }
    break;
  case 2:
    if (local_110._4_4_ < 0x3f) {
      uVar6 = local_110._4_4_ + 1;
      lVar13 = (long)local_110._4_4_;
      local_110 = (ulong)uVar6 << 0x20;
      local_108[lVar13] = 0x72;
      if (iVar4 != 0x3e) {
        local_110 = (ulong)(iVar4 + 2U) << 0x20;
        local_108[(int)uVar6] = 0x69;
        if (iVar4 < 0x3d) {
          local_110 = (ulong)(iVar4 + 3U) << 0x20;
          local_108[(int)(iVar4 + 2U)] = 0x67;
          if (iVar4 != 0x3c) {
            local_110 = (ulong)(iVar4 + 4U) << 0x20;
            local_108[(int)(iVar4 + 3U)] = 0x68;
            if (iVar4 < 0x3b) {
              local_110 = (ulong)(iVar4 + 5) << 0x20;
              local_108[(int)(iVar4 + 4U)] = 0x74;
            }
          }
        }
      }
      iVar4 = local_110._4_4_;
    }
    uVar6 = 0x811c9dc5;
    local_108[iVar4] = 0;
    uVar5 = (uint)local_108[0];
    if (local_108[0] != 0) {
      pbVar11 = local_108;
      uVar6 = 0x811c9dc5;
      do {
        pbVar11 = pbVar11 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar5;
        uVar5 = (uint)*pbVar11;
      } while (uVar5 != 0);
    }
    break;
  case 3:
    if (local_110._4_4_ < 0x3f) {
      uVar6 = local_110._4_4_ + 1;
      lVar13 = (long)local_110._4_4_;
      local_110 = (ulong)uVar6 << 0x20;
      local_108[lVar13] = 0x74;
      if (iVar4 != 0x3e) {
        local_110 = (ulong)(iVar4 + 2U) << 0x20;
        local_108[(int)uVar6] = 0x6f;
        if (iVar4 < 0x3d) {
          local_110 = (ulong)(iVar4 + 3) << 0x20;
          local_108[(int)(iVar4 + 2U)] = 0x70;
        }
      }
      iVar4 = local_110._4_4_;
    }
    uVar6 = 0x811c9dc5;
    local_108[iVar4] = 0;
    uVar5 = (uint)local_108[0];
    if (local_108[0] != 0) {
      pbVar11 = local_108;
      uVar6 = 0x811c9dc5;
      do {
        pbVar11 = pbVar11 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar5;
        uVar5 = (uint)*pbVar11;
      } while (uVar5 != 0);
    }
    break;
  case 4:
    if (local_110._4_4_ < 0x3f) {
      uVar6 = local_110._4_4_ + 1;
      lVar13 = (long)local_110._4_4_;
      local_110 = (ulong)uVar6 << 0x20;
      local_108[lVar13] = 0x62;
      if (iVar4 != 0x3e) {
        local_110 = (ulong)(iVar4 + 2U) << 0x20;
        local_108[(int)uVar6] = 0x6f;
        if (iVar4 < 0x3d) {
          local_110 = (ulong)(iVar4 + 3U) << 0x20;
          local_108[(int)(iVar4 + 2U)] = 0x74;
          if (iVar4 != 0x3c) {
            local_110 = (ulong)(iVar4 + 4U) << 0x20;
            local_108[(int)(iVar4 + 3U)] = 0x74;
            if (iVar4 < 0x3b) {
              local_110 = (ulong)(iVar4 + 5U) << 0x20;
              local_108[(int)(iVar4 + 4U)] = 0x6f;
              if (iVar4 != 0x3a) {
                local_110 = (ulong)(iVar4 + 6) << 0x20;
                local_108[(int)(iVar4 + 5U)] = 0x6d;
              }
            }
          }
        }
      }
      iVar4 = local_110._4_4_;
    }
    uVar6 = 0x811c9dc5;
    local_108[iVar4] = 0;
    uVar5 = (uint)local_108[0];
    if (local_108[0] != 0) {
      pbVar11 = local_108;
      uVar6 = 0x811c9dc5;
      do {
        pbVar11 = pbVar11 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar5;
        uVar5 = (uint)*pbVar11;
      } while (uVar5 != 0);
    }
    break;
  default:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd8),0x71043488be);
    goto LAB_71032d5964;
  }
  local_110 = CONCAT44(local_110._4_4_,uVar6);
LAB_71032d5964:
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd8),(long)local_108);
  local_238 = 0x101;
  local_230 = 1;
  local_22c = 1;
  local_22a = 1;
  local_240 = (byte ***)0x0;
  local_232 = 0;
  local_236 = 0;
  local_228 = &DAT_41f0000000000000;
  local_220 = 0;
  local_1f0 = (long *)0x0;
  local_1c0 = (long *)0x0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_120 = 0;
  if (*(char *)(param_1 + 0xf4) == '\0') {
    FUN_710337df20((long)&local_240);
  }
  else {
    local_290 = &DAT_71051860d0;
    local_270 = &local_290;
    FUN_7101989a30((long *)&local_290,alStack_180);
    if (&local_290 == local_270) {
      pcVar7 = *(code **)(*local_270 + 0x20);
LAB_71032d5a14:
      (*pcVar7)();
    }
    else if (local_270 != (undefined **)0x0) {
      pcVar7 = *(code **)(*local_270 + 0x28);
      goto LAB_71032d5a14;
    }
    local_290 = &DAT_7105186118;
    local_270 = &local_290;
    FUN_7101989a30((long *)&local_290,alStack_150);
    if (&local_290 == local_270) {
      pcVar7 = *(code **)(*local_270 + 0x20);
    }
    else {
      if (local_270 == (undefined **)0x0) goto LAB_71032d5a64;
      pcVar7 = *(code **)(*local_270 + 0x28);
    }
    (*pcVar7)();
  }
LAB_71032d5a64:
  plVar1 = (long *)(param_1 + 0xe0);
  ppppbVar3 = &local_240;
  FUN_7103770b30(plVar1,(undefined8 *)(param_1 + 0xd0),(long ****)"selector_0",ppppbVar3,param_5,
                 param_6,param_7,param_8);
  uVar8 = *(long *)(*(long *)(param_1 + 0xe0) + 0x188) -
          *(long *)(*(long *)(param_1 + 0xe0) + 0x180);
  if (0 < (int)(uVar8 >> 3)) {
    uVar15 = 0;
    do {
      local_288[0] = '\0';
      local_290 = (undefined *)0x0;
      FUN_710062dc20((uint *)&local_290,"submenu_item_%02d");
      iVar4 = (int)uVar15;
      FUN_71037717d0(plVar1,iVar4,local_288,ppppbVar3,param_5,param_6,param_7,param_8);
      lVar13 = *(long *)(param_1 + 0xe0) + 0x1b8;
      lVar12 = *(long *)(*(long *)(param_1 + 0xe0) + 0x1b8);
      if ((long)uVar15 < (long)*(int *)(param_1 + 200)) {
        lVar14 = lVar13;
        if (lVar12 != 0) {
          do {
            if (iVar4 <= *(int *)(lVar12 + 0x20)) {
              lVar14 = lVar12;
            }
            lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < iVar4) * 8);
          } while (lVar12 != 0);
          if (((lVar14 != lVar13) && (*(int *)(lVar14 + 0x20) <= iVar4)) &&
             (plVar16 = *(long **)(lVar14 + 0x28), plVar16 != (long *)0x0)) {
            (**(code **)(*plVar16 + 0x1f8))(plVar16,1);
            (**(code **)(*plVar16 + 0x388))(plVar16,0,0);
          }
        }
        lVar13 = *param_2;
        uVar9 = (param_2[1] - lVar13 >> 3) * -0x71c71c71c71c71c7;
        if (uVar9 < uVar15 || uVar9 - uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        uVar9 = 0;
        do {
          pbVar11 = (byte *)(lVar13 + uVar15 * 0x48 + 8 + uVar9);
          uVar10 = uVar9;
          if (*pbVar11 == 0) break;
          local_2d0[uVar9] = *pbVar11;
          if (pbVar11[1] == 0) {
            uVar10 = uVar9 + 1;
            break;
          }
          local_2d0[uVar9 + 1] = pbVar11[1];
          if (pbVar11[2] == 0) {
            uVar10 = uVar9 + 2;
            break;
          }
          uVar10 = uVar9 + 3;
          local_2d0[uVar9 + 2] = pbVar11[2];
          uVar9 = uVar10;
        } while ((uint)uVar10 < 0x3f);
        local_2d0[uVar10 & 0xffffffff] = 0;
        local_2d4 = (undefined4)uVar10;
        uVar6 = (uint)local_2d0[0];
        local_2d8 = 0x811c9dc5;
        if (local_2d0[0] != 0) {
          local_2d8 = 0x811c9dc5;
          pbVar11 = local_2d0;
          do {
            pbVar11 = pbVar11 + 1;
            local_2d8 = local_2d8 * 0x89 ^ uVar6;
            uVar6 = (uint)*pbVar11;
          } while (uVar6 != 0);
        }
        FUN_71032d5ee0(param_1,uVar15 & 0xffffffff,(long)&local_2d8,ppppbVar3,param_5,param_6,
                       param_7,param_8);
        if (((long)uVar15 < (long)*(int *)(param_1 + 200)) && (*plVar1 != 0)) {
          FUN_7103771d60(&local_78,*plVar1,(long ****)(uVar15 & 0xffffffff),ppppbVar3,param_5,
                         param_6,param_7,param_8);
          plVar16 = local_70;
          lVar13 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
          if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar13 >> 3) < 3) {
            local_80 = 0;
          }
          else {
            local_80 = *(undefined8 *)(lVar13 + 0x10);
          }
          plVar2 = (long *)*local_70;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x2b0))(plVar2,&local_80);
          }
          local_78 = &PTR_FUN_710523d9c8;
          local_70 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar16);
          }
        }
      }
      else {
        lVar14 = lVar13;
        if (lVar12 != 0) {
          do {
            if (iVar4 <= *(int *)(lVar12 + 0x20)) {
              lVar14 = lVar12;
            }
            lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < iVar4) * 8);
          } while (lVar12 != 0);
          if (((lVar14 != lVar13) && (*(int *)(lVar14 + 0x20) <= iVar4)) &&
             (plVar16 = *(long **)(lVar14 + 0x28), plVar16 != (long *)0x0)) {
            (**(code **)(*plVar16 + 0x1f8))(plVar16,0);
            (**(code **)(*plVar16 + 0x388))(plVar16,1,0);
          }
        }
        local_318 = 0;
        local_320 = 0x811c9dc5;
        uStack_31c = 0;
        FUN_71032d5ee0(param_1,uVar15 & 0xffffffff,(long)&local_320,ppppbVar3,param_5,param_6,
                       param_7,param_8);
      }
      uVar15 = uVar15 + 1;
    } while ((long)uVar15 < (long)(uVar8 * 0x20000000) >> 0x20);
  }
  if (alStack_150 == local_130) {
    pcVar7 = *(code **)(*local_130 + 0x20);
LAB_71032d5d88:
    (*pcVar7)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar7 = *(code **)(*local_130 + 0x28);
    goto LAB_71032d5d88;
  }
  if (alStack_180 == local_160) {
    pcVar7 = *(code **)(*local_160 + 0x20);
LAB_71032d5db8:
    (*pcVar7)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar7 = *(code **)(*local_160 + 0x28);
    goto LAB_71032d5db8;
  }
  if (alStack_1b0 == local_190) {
    pcVar7 = *(code **)(*local_190 + 0x20);
LAB_71032d5de8:
    (*pcVar7)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar7 = *(code **)(*local_190 + 0x28);
    goto LAB_71032d5de8;
  }
  if (alStack_1e0 == local_1c0) {
    pcVar7 = *(code **)(*local_1c0 + 0x20);
LAB_71032d5e18:
    (*pcVar7)();
  }
  else if (local_1c0 != (long *)0x0) {
    pcVar7 = *(code **)(*local_1c0 + 0x28);
    goto LAB_71032d5e18;
  }
  if (alStack_210 == local_1f0) {
    pcVar7 = *(code **)(*local_1f0 + 0x20);
  }
  else {
    if (local_1f0 == (long *)0x0) goto LAB_71032d5e4c;
    pcVar7 = *(code **)(*local_1f0 + 0x28);
  }
  (*pcVar7)();
LAB_71032d5e4c:
  FUN_710376b960(*(long *)(param_1 + 0xe0));
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x70))(*(long **)(param_1 + 0xe0),0);
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x60))(*(long **)(param_1 + 0xe0),0);
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0xe8) + 8) + 0x4aa) = 0;
  }
  return;
}

