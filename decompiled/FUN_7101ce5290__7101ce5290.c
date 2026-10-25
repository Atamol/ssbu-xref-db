// addr:      7101ce5290
// offset:    0x1ce5290
// name:      FUN_7101ce5290
// mangled:   
// signature: undefined __cdecl FUN_7101ce5290(long param_1, long param_2, undefined8 * param_3, byte * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ce5290(long param_1,long param_2,undefined8 *param_3,byte *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint6 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long ****pppplVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  uint uVar15;
  ushort uVar16;
  long lVar17;
  ushort uVar18;
  char *pcVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  
  if (*(long *)(*(long *)(param_2 + 8) + 8) != 0) {
    puVar9 = param_3;
    pbVar12 = param_4;
    FUN_7103776640(&local_60,param_2,(byte ****)"set_parts_det_panel",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    local_a8 = (undefined **)0x0;
    FUN_7103741810(param_3[0xb],&local_a8);
    uVar6 = (ulong)local_a8;
    FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_txt_date_num",puVar9,pbVar12,param_5,
                   param_6,param_7,param_8);
    lVar17 = (uVar6 & 0xfff) * 1000000 + (uVar6 >> 0xc & 0xf) * 1000 + (uVar6 >> 0x10 & 0x1f);
    pppplVar14 = (long ****)((uVar6 >> 0x15 & 0x1f) * 1000000 + (uVar6 >> 0x1a & 0x3f) * 1000);
    FUN_710377a280((long)&local_70,(byte *)"mnu_share_detail_data_date_n",2);
    uVar6 = local_68;
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_7101cdfc50(param_2,(ulong)*param_4,0,lVar17,pppplVar14,param_6,param_7,param_8);
    puVar9 = param_3;
    FUN_7101ce1320(param_2,(ulong)(*(int *)(param_3 + 0xd) != 0),param_3,lVar17,pppplVar14,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_a8,param_2,(long ****)"set_txt_num_like",puVar9,lVar17,pppplVar14,param_6,
                   param_7,param_8);
    uVar15 = (uint)param_3[0xc];
    if (0xf423e < (ulong)param_3[0xc]) {
      uVar15 = 999999;
    }
    ppppbVar13 = (byte ****)(ulong)uVar15;
    pppplVar10 = (long ****)0x1;
    FUN_710377a280((long)&local_a8,(byte *)"mnu_share_detail_good_n",1);
    uVar6 = local_a0;
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0 = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_7103776640(&local_a8,(long)&local_60,(byte ****)"set_parts_text_scroll",pppplVar10,
                   ppppbVar13,pppplVar14,param_6,param_7,param_8);
    uVar6 = local_a0;
    if ((undefined8 *)(param_1 + 0x338) != &local_a8) {
      local_a0 = 0;
      uVar22 = *(ulong *)(param_1 + 0x340);
      *(ulong *)(param_1 + 0x340) = uVar6;
      if (uVar22 != 0) {
        uVar6 = *(ulong *)(uVar22 + 0x18);
        *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar22 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar22);
      }
    }
    uVar6 = local_a0;
    local_a8 = &PTR_FUN_710523d988;
    local_a0 = 0;
    if (uVar6 != 0) {
      uVar22 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      FUN_710392eb40(uVar6);
    }
    FUN_7103776390(&local_80,(undefined8 *)(param_1 + 0x338),pppplVar10,ppppbVar13,pppplVar14,
                   param_6,param_7,param_8);
    puVar9 = param_3 + 3;
    FUN_7103776910(&local_a8,(long)&local_80,(long ****)"set_txt_main",pppplVar10,ppppbVar13,
                   pppplVar14,param_6,param_7,param_8);
    uVar11 = 1;
    puVar21 = puVar9;
    FUN_710377a280((long)&local_a8,(byte *)"mnu_share_detail_data_title",1);
    uVar6 = local_a0;
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0 = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_7103776910(&local_a8,(long)&local_80,(long ****)"set_txt_mask",uVar11,puVar21,pppplVar14,
                   param_6,param_7,param_8);
    uVar11 = 1;
    FUN_710377a280((long)&local_a8,(byte *)"mnu_share_detail_data_title",1);
    uVar6 = local_a0;
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0 = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_7103778950(*(long *)(local_78 + 8));
    if (*(long *)(local_78 + 8) != 0) {
      puVar21 = *(undefined8 **)(*(long *)(local_78 + 8) + 0x78);
      if (((DAT_710593ba40 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710593ba40), iVar5 != 0))
      {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&DAT_710593ba48), iVar5 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      if (puVar21 != (undefined8 *)0x0) {
        for (puVar7 = (undefined8 *)(**(code **)*puVar21)(puVar21); puVar7 != (undefined8 *)0x0;
            puVar7 = (undefined8 *)*puVar7) {
          if ((undefined8 **)puVar7 == &DAT_710593ba58) {
            lVar17 = puVar21[3];
            *(undefined4 *)(puVar21 + 0xb) = *(undefined4 *)((long)puVar21 + 0x54);
            if (lVar17 != 0) {
              *(undefined4 *)(lVar17 + 0x30) = *(undefined4 *)((long)puVar21 + 0x54);
              *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
            }
            lVar17 = puVar21[4];
            if (lVar17 != 0) {
              *(undefined4 *)(lVar17 + 0x30) = *(undefined4 *)(puVar21 + 0xb);
              *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
            }
            if ((long *)puVar21[5] != (long *)0x0) {
              (**(code **)(*(long *)puVar21[5] + 0x180))(0);
            }
            plVar8 = (long *)puVar21[6];
            if (plVar8 != (long *)0x0) {
              if (*(char *)((long)puVar21 + 99) == '\0') {
                (**(code **)(*plVar8 + 0x180))(0);
              }
              else {
                (**(code **)(*plVar8 + 400))();
              }
            }
            *(undefined2 *)((long)puVar21 + 100) = 0;
            break;
          }
        }
      }
    }
    uVar6 = local_78;
    if (*(long *)(local_78 + 8) != 0) {
      puVar21 = *(undefined8 **)(*(long *)(local_78 + 8) + 0x78);
      if (((DAT_710593ba40 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710593ba40), iVar5 != 0))
      {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&DAT_710593ba48), iVar5 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      uVar6 = local_78;
      if (puVar21 != (undefined8 *)0x0) {
        for (puVar7 = (undefined8 *)(**(code **)*puVar21)(puVar21); uVar6 = local_78,
            puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
          if ((undefined8 **)puVar7 == &DAT_710593ba58) {
            *(undefined1 *)(puVar21 + 0xc) = 1;
            break;
          }
        }
      }
    }
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar6 != 0) {
      uVar22 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      FUN_710392eb40(uVar6);
    }
    FUN_7103776910(&local_90,param_2,(long ****)"set_txt_idnum",uVar11,puVar9,pppplVar14,param_6,
                   param_7,param_8);
    local_a8 = (undefined **)0x0;
    local_a0 = 0;
    bVar2 = *(byte *)((long)param_3 + 0x74);
    if (bVar2 == 0) {
      lVar17 = 0;
    }
    else {
      uVar15 = 0xffffffff;
      pcVar19 = (char *)((long)param_3 + 0x75);
      do {
        cVar1 = *pcVar19;
        uVar15 = uVar15 + 1;
        pcVar19 = pcVar19 + 1;
      } while (cVar1 != '\0');
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0xe0) == 0xc0) {
          pbVar12 = (byte *)((long)param_3 + 0x76);
          uVar18 = *(byte *)((long)param_3 + 0x75) & 0x3f | (bVar2 & 0x3f) << 6;
        }
        else {
          uVar18 = (ushort)bVar2 << 0xc | (*(byte *)((long)param_3 + 0x75) & 0x3f) << 6 |
                   *(byte *)((long)param_3 + 0x76) & 0x3f;
          pbVar12 = (byte *)((long)param_3 + 0x77);
        }
      }
      else {
        pbVar12 = (byte *)((long)param_3 + 0x75);
        uVar18 = bVar2 & 0x7f;
      }
      lVar17 = 1;
      local_a8 = (undefined **)(ulong)uVar18;
      if ((uVar15 != 0) && (bVar2 = *pbVar12, bVar2 != 0)) {
        if ((char)bVar2 < '\0') {
          if ((bVar2 & 0xe0) == 0xc0) {
            pbVar20 = pbVar12 + 2;
            uVar16 = pbVar12[1] & 0x3f | (bVar2 & 0x3f) << 6;
          }
          else {
            pbVar20 = pbVar12 + 3;
            uVar16 = (ushort)bVar2 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
          }
        }
        else {
          pbVar20 = pbVar12 + 1;
          uVar16 = bVar2 & 0x7f;
        }
        local_a8._0_4_ = CONCAT22(uVar16,uVar18);
        uVar3 = (uint)local_a8;
        local_a8 = (undefined **)(ulong)(uint)local_a8;
        lVar17 = 2;
        if ((1 < uVar15) && (bVar2 = *pbVar20, bVar2 != 0)) {
          if ((char)bVar2 < '\0') {
            if ((bVar2 & 0xe0) == 0xc0) {
              pbVar12 = pbVar20 + 2;
              uVar18 = pbVar20[1] & 0x3f | (bVar2 & 0x3f) << 6;
            }
            else {
              pbVar12 = pbVar20 + 3;
              uVar18 = (ushort)bVar2 << 0xc | (pbVar20[1] & 0x3f) << 6 | pbVar20[2] & 0x3f;
            }
          }
          else {
            pbVar12 = pbVar20 + 1;
            uVar18 = bVar2 & 0x7f;
          }
          local_a8._0_6_ = CONCAT24(uVar18,uVar3);
          uVar4 = (uint6)local_a8;
          local_a8 = (undefined **)(ulong)(uint6)local_a8;
          lVar17 = 3;
          if ((2 < uVar15) && (bVar2 = *pbVar12, bVar2 != 0)) {
            if ((char)bVar2 < '\0') {
              if ((bVar2 & 0xe0) == 0xc0) {
                pbVar20 = pbVar12 + 2;
                uVar18 = pbVar12[1] & 0x3f | (bVar2 & 0x3f) << 6;
              }
              else {
                pbVar20 = pbVar12 + 3;
                uVar18 = (ushort)bVar2 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
              }
            }
            else {
              pbVar20 = pbVar12 + 1;
              uVar18 = bVar2 & 0x7f;
            }
            local_a8 = (undefined **)CONCAT26(uVar18,uVar4);
            lVar17 = 4;
            if ((3 < uVar15) && (bVar2 = *pbVar20, bVar2 != 0)) {
              if ((char)bVar2 < '\0') {
                if ((bVar2 & 0xe0) == 0xc0) {
                  pbVar12 = pbVar20 + 2;
                  uVar18 = pbVar20[1] & 0x3f | (bVar2 & 0x3f) << 6;
                }
                else {
                  pbVar12 = pbVar20 + 3;
                  uVar18 = (ushort)bVar2 << 0xc | (pbVar20[1] & 0x3f) << 6 | pbVar20[2] & 0x3f;
                }
              }
              else {
                pbVar12 = pbVar20 + 1;
                uVar18 = bVar2 & 0x7f;
              }
              local_a0 = (ulong)uVar18;
              lVar17 = 5;
              if ((4 < uVar15) && (bVar2 = *pbVar12, bVar2 != 0)) {
                if ((char)bVar2 < '\0') {
                  if ((bVar2 & 0xe0) == 0xc0) {
                    pbVar20 = pbVar12 + 2;
                    uVar16 = pbVar12[1] & 0x3f | (bVar2 & 0x3f) << 6;
                  }
                  else {
                    pbVar20 = pbVar12 + 3;
                    uVar16 = (ushort)bVar2 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
                  }
                }
                else {
                  pbVar20 = pbVar12 + 1;
                  uVar16 = bVar2 & 0x7f;
                }
                local_a0._0_4_ = CONCAT22(uVar16,uVar18);
                uVar3 = (uint)local_a0;
                local_a0 = (ulong)(uint)local_a0;
                lVar17 = 6;
                if ((5 < uVar15) && (bVar2 = *pbVar20, bVar2 != 0)) {
                  if ((char)bVar2 < '\0') {
                    if ((bVar2 & 0xe0) == 0xc0) {
                      pbVar12 = pbVar20 + 2;
                      uVar18 = pbVar20[1] & 0x3f | (bVar2 & 0x3f) << 6;
                    }
                    else {
                      pbVar12 = pbVar20 + 3;
                      uVar18 = (ushort)bVar2 << 0xc | (pbVar20[1] & 0x3f) << 6 | pbVar20[2] & 0x3f;
                    }
                  }
                  else {
                    pbVar12 = pbVar20 + 1;
                    uVar18 = bVar2 & 0x7f;
                  }
                  local_a0._0_6_ = CONCAT24(uVar18,uVar3);
                  uVar4 = (uint6)local_a0;
                  local_a0 = (ulong)(uint6)local_a0;
                  lVar17 = 7;
                  if ((6 < uVar15) && (bVar2 = *pbVar12, bVar2 != 0)) {
                    if ((char)bVar2 < '\0') {
                      if ((bVar2 & 0xe0) == 0xc0) {
                        uVar18 = pbVar12[1] & 0x3f | (bVar2 & 0x3f) << 6;
                      }
                      else {
                        uVar18 = (ushort)bVar2 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f
                        ;
                      }
                    }
                    else {
                      uVar18 = bVar2 & 0x7f;
                    }
                    local_a0 = CONCAT26(uVar18,uVar4);
                    lVar17 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined2 *)((long)&local_a8 + lVar17 * 2) = 0;
    local_98 = 0;
    FUN_710377a280((long)&local_90,(byte *)"mnu_share_id",1);
    uVar6 = local_88;
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    uVar6 = local_58;
    local_60 = &PTR_FUN_710523d988;
    local_58 = 0;
    if (uVar6 != 0) {
      uVar22 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      FUN_710392eb40(uVar6);
    }
  }
  return;
}

