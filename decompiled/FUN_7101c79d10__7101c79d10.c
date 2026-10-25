// addr:      7101c79d10
// offset:    0x1c79d10
// name:      FUN_7101c79d10
// mangled:   
// signature: undefined __cdecl FUN_7101c79d10(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c79d10(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  long ***ppplVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  long *plVar20;
  void *pvVar21;
  long ****pppplVar22;
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  ulong local_68;
  
  puVar14 = (undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *puVar14;
  plVar20 = (long *)**(undefined8 **)(param_1 + 8);
  plVar6 = (long *)*plVar20;
  pcVar10 = (char *)plVar6[1];
  if ((*pcVar10 == '\f') && (iVar16 = *(int *)(pcVar10 + 1) + -1, 0 < *(int *)(pcVar10 + 1))) {
    iVar18 = 0;
    pbVar15 = &DAT_7104742dbb;
    do {
      iVar17 = iVar16 + iVar18;
      if (iVar17 < 0) {
        iVar17 = iVar17 + 1;
      }
      iVar17 = iVar17 >> 1;
      puVar1 = (uint *)(*(long *)(*plVar6 + 0x28) + (long)*(int *)(pcVar10 + 5) + (long)iVar17 * 8);
      uVar19 = *(ulong *)(*(long *)(*plVar6 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar19 == 0x72a5a6784) {
        uVar4 = puVar1[1];
        if ((int)uVar4 < 0) goto LAB_7101c79de8;
        pbVar15 = (byte *)(pcVar10 + (int)uVar4);
        break;
      }
      iVar2 = iVar17 + -1;
      if (uVar19 < 0x72a5a6785) {
        iVar18 = iVar17 + 1;
        iVar2 = iVar16;
      }
      iVar16 = iVar2;
    } while (iVar18 <= iVar16);
  }
  else {
LAB_7101c79de8:
    pbVar15 = &DAT_7104742dbb;
  }
  if ((*pbVar15 - 0xb < 2) && (0 < *(int *)(pbVar15 + 1))) {
    iVar16 = 0;
    if ((param_2 | 4) == 4) {
      do {
        uVar19 = FUN_7101c78fb0(plVar6,iVar16);
        uVar7 = FUN_7101c79710(plVar20,uVar19);
        switch((int)uVar7) {
        case 1:
          if ((param_2 | 2) == 2) break;
          goto LAB_7101c79fc8;
        case 2:
          if ((param_2 != 0) && (param_2 != 3)) goto LAB_7101c79fc8;
          break;
        case 3:
          break;
        case 4:
          if ((param_2 != 0) && (param_2 != 5)) goto LAB_7101c79fc8;
          break;
        default:
          if (1 < param_2) goto LAB_7101c79fc8;
        }
        puVar3 = *(ulong **)(param_1 + 0x20);
        if (puVar3 == *(ulong **)(param_1 + 0x28)) {
          pvVar21 = (void *)*puVar14;
          pppplVar22 = (long ****)((long)puVar3 - (long)pvVar21);
          uVar9 = ((long)pppplVar22 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) {
LAB_7101c7a3a4:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar11 = (long)*(ulong **)(param_1 + 0x28) - (long)pvVar21;
          if ((ulong)(lVar11 >> 3) < 0xfffffffffffffff) {
            uVar12 = lVar11 >> 2;
            if (uVar9 <= uVar12) {
              uVar9 = uVar12;
            }
            if (uVar9 != 0) {
              if (uVar9 >> 0x3d != 0) {
LAB_7101c7a3ac:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_7101c79f18;
            }
            pvVar8 = (void *)0x0;
          }
          else {
            uVar9 = 0x1fffffffffffffff;
LAB_7101c79f18:
            ppplVar13 = (long ***)(uVar9 * 8);
            if (ppplVar13 == (long ***)0x0) {
              ppplVar13 = (long ***)0x1;
            }
            pvVar8 = (void *)FUN_710392e290(0x10,ppplVar13,param_3,param_4,param_5,param_6,param_7,
                                            param_8);
            if (pvVar8 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
                param_3 = &local_70;
                local_70 = ppplVar13;
                uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
                if (((uVar12 & 1) != 0) &&
                   (pvVar8 = (void *)FUN_710392e290(0x10,ppplVar13,param_3,param_4,param_5,param_6,
                                                    param_7,param_8), pvVar8 != (void *)0x0))
                goto LAB_7101c79f80;
              }
              pvVar8 = (void *)0x0;
            }
          }
LAB_7101c79f80:
          puVar3 = (ulong *)((long)pvVar8 + ((long)pppplVar22 >> 3) * 8);
          *puVar3 = uVar19;
          if (0 < (long)pppplVar22) {
            memcpy(pvVar8,pvVar21,(size_t)pppplVar22);
            param_3 = pppplVar22;
          }
          *(void **)(param_1 + 0x18) = pvVar8;
          *(ulong **)(param_1 + 0x20) = puVar3 + 1;
          *(void **)(param_1 + 0x28) = (void *)((long)pvVar8 + uVar9 * 8);
          if (pvVar21 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar21);
          }
        }
        else {
          *puVar3 = uVar19;
          *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
        }
LAB_7101c79fc8:
        pbVar15 = &DAT_7104742dbb;
        plVar20 = (long *)**(undefined8 **)(param_1 + 8);
        plVar6 = (long *)*plVar20;
        pcVar10 = (char *)plVar6[1];
        if ((*pcVar10 == '\f') && (iVar18 = *(int *)(pcVar10 + 1) + -1, 0 < *(int *)(pcVar10 + 1)))
        {
          iVar17 = 0;
          do {
            iVar2 = iVar18 + iVar17;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            iVar2 = iVar2 >> 1;
            puVar1 = (uint *)(*(long *)(*plVar6 + 0x28) + (long)*(int *)(pcVar10 + 5) +
                             (long)iVar2 * 8);
            uVar19 = *(ulong *)(*(long *)(*plVar6 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar19 == 0x72a5a6784) {
              uVar4 = puVar1[1];
              if (-1 < (int)uVar4) {
                pbVar15 = (byte *)(pcVar10 + (int)uVar4);
              }
              break;
            }
            iVar5 = iVar2 + -1;
            if (uVar19 < 0x72a5a6785) {
              iVar17 = iVar2 + 1;
              iVar5 = iVar18;
            }
            iVar18 = iVar5;
          } while (iVar17 <= iVar18);
        }
      } while ((*pbVar15 - 0xb < 2) && (iVar16 = iVar16 + 1, iVar16 < *(int *)(pbVar15 + 1)));
    }
    else {
      do {
        uVar19 = FUN_7101c78fb0(plVar6,iVar16);
        uVar7 = FUN_7101c79710(plVar20,uVar19);
        switch((int)uVar7) {
        case 1:
          if ((param_2 | 2) == 2) {
LAB_7101c7a0f8:
            puVar3 = *(ulong **)(param_1 + 0x20);
            if (puVar3 == *(ulong **)(param_1 + 0x28)) {
              pvVar21 = (void *)*puVar14;
              pppplVar22 = (long ****)((long)puVar3 - (long)pvVar21);
              uVar9 = ((long)pppplVar22 >> 3) + 1;
              if (uVar9 >> 0x3d != 0) goto LAB_7101c7a3a4;
              lVar11 = (long)*(ulong **)(param_1 + 0x28) - (long)pvVar21;
              if ((ulong)(lVar11 >> 3) < 0xfffffffffffffff) {
                uVar12 = lVar11 >> 2;
                if (uVar9 <= uVar12) {
                  uVar9 = uVar12;
                }
                if (uVar9 != 0) {
                  if (uVar9 >> 0x3d == 0) goto LAB_7101c7a168;
                  goto LAB_7101c7a3ac;
                }
                pvVar8 = (void *)0x0;
              }
              else {
                uVar9 = 0x1fffffffffffffff;
LAB_7101c7a168:
                ppplVar13 = (long ***)(uVar9 * 8);
                if (ppplVar13 == (long ***)0x0) {
                  ppplVar13 = (long ***)0x1;
                }
                pvVar8 = (void *)FUN_710392e290(0x10,ppplVar13,param_3,param_4,param_5,param_6,
                                                param_7,param_8);
                if (pvVar8 == (void *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
                    param_3 = &local_70;
                    local_70 = ppplVar13;
                    uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
                    if (((uVar12 & 1) != 0) &&
                       (pvVar8 = (void *)FUN_710392e290(0x10,ppplVar13,param_3,param_4,param_5,
                                                        param_6,param_7,param_8),
                       pvVar8 != (void *)0x0)) goto LAB_7101c7a1d0;
                  }
                  pvVar8 = (void *)0x0;
                }
              }
LAB_7101c7a1d0:
              puVar3 = (ulong *)((long)pvVar8 + ((long)pppplVar22 >> 3) * 8);
              *puVar3 = uVar19;
              if (0 < (long)pppplVar22) {
                memcpy(pvVar8,pvVar21,(size_t)pppplVar22);
                param_3 = pppplVar22;
              }
              *(void **)(param_1 + 0x18) = pvVar8;
              *(ulong **)(param_1 + 0x20) = puVar3 + 1;
              *(void **)(param_1 + 0x28) = (void *)((long)pvVar8 + uVar9 * 8);
              if (pvVar21 != (void *)0x0) {
                FUN_710392eb40((ulong)pvVar21);
              }
            }
            else {
              *puVar3 = uVar19;
              *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
            }
          }
          break;
        case 2:
          if ((param_2 == 0) || (param_2 == 3)) goto LAB_7101c7a0f8;
          break;
        case 3:
          break;
        case 4:
          if ((param_2 == 5) || (param_2 == 0)) goto LAB_7101c7a0f8;
          break;
        default:
          if (param_2 < 2) goto LAB_7101c7a0f8;
        }
        pbVar15 = &DAT_7104742dbb;
        plVar20 = (long *)**(undefined8 **)(param_1 + 8);
        plVar6 = (long *)*plVar20;
        pcVar10 = (char *)plVar6[1];
        if ((*pcVar10 == '\f') && (iVar18 = *(int *)(pcVar10 + 1) + -1, 0 < *(int *)(pcVar10 + 1)))
        {
          iVar17 = 0;
          do {
            iVar2 = iVar18 + iVar17;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            iVar2 = iVar2 >> 1;
            puVar1 = (uint *)(*(long *)(*plVar6 + 0x28) + (long)*(int *)(pcVar10 + 5) +
                             (long)iVar2 * 8);
            uVar19 = *(ulong *)(*(long *)(*plVar6 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar19 == 0x72a5a6784) {
              uVar4 = puVar1[1];
              if (-1 < (int)uVar4) {
                pbVar15 = (byte *)(pcVar10 + (int)uVar4);
              }
              break;
            }
            iVar5 = iVar2 + -1;
            if (uVar19 < 0x72a5a6785) {
              iVar17 = iVar2 + 1;
              iVar5 = iVar18;
            }
            iVar18 = iVar5;
          } while (iVar17 <= iVar18);
        }
      } while ((*pbVar15 - 0xb < 2) && (iVar16 = iVar16 + 1, iVar16 < *(int *)(pbVar15 + 1)));
    }
  }
  FUN_7103783690((long *)(param_1 + 0x120),
                 (int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3));
  FUN_7103776640(&local_80,param_1 + 0x108,(byte ****)"set_scr_sort",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_80,(long ****)"set_txt_list",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  if (param_2 - 1 < 5) {
    pcVar10 = (&PTR_s_mnu_online_room_inside_chat_sort_71050ad8d0)[(int)(param_2 - 1)];
  }
  else {
    pcVar10 = "mnu_online_room_inside_chat_sort_all";
  }
  FUN_710377a120((long)&local_70,pcVar10,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar19 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar19 != 0) {
    FUN_710392eb40(uVar19);
  }
  uVar19 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar19 != 0) {
    uVar9 = *(ulong *)(uVar19 + 0x18);
    *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar19 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar19);
  }
  return;
}

