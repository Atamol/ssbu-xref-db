// addr:      7101c3a700
// offset:    0x1c3a700
// name:      FUN_7101c3a700
// mangled:   
// signature: undefined __cdecl FUN_7101c3a700(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c3a700(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  code *pcVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  undefined4 uVar21;
  undefined **local_70;
  long *local_68;
  undefined **local_60;
  ulong local_58;
  
  lVar14 = DAT_7105329060;
  lVar20 = *(long *)(param_1 + 0x80);
  if (*(uint *)(lVar20 + 0x2018) < *(uint *)(*(long *)(DAT_7105329060 + 8) + 4)) {
    lVar10 = *(long *)(DAT_7105329060 + 8) + (ulong)*(uint *)(lVar20 + 0x2018) * 0x18;
    uVar5 = *(uint *)(lVar20 + 0x201c);
    lVar17 = *(long *)(lVar10 + 8);
    uVar18 = *(long *)(lVar10 + 0x10) - lVar17;
    if ((uint)(uVar18 >> 4) <= uVar5) goto LAB_7101c3a794;
    if ((ulong)((long)uVar18 >> 4) <= (ulong)uVar5) goto LAB_7101c3aec8;
    puVar2 = (undefined8 *)(lVar17 + (ulong)uVar5 * 0x10);
    plVar16 = (long *)*puVar2;
    plVar19 = (long *)puVar2[1];
    if (plVar19 != (long *)0x0) {
      plVar3 = plVar19 + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *plVar3 = *plVar3 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  else {
LAB_7101c3a794:
    plVar19 = (long *)0x0;
    plVar16 = (long *)0x0;
  }
  uVar5 = *(uint *)(lVar20 + 0x21b0);
  if (uVar5 < 0x10) {
    uVar6 = 1 << (ulong)(uVar5 & 0x1f);
    if ((uVar6 & 0x7c00) != 0) {
      lVar10 = *(long *)(*(long *)**(undefined8 **)(lVar20 + 0x21c8) + 0x600);
      uVar21 = 0x3f800000;
      if ((*(char *)(lVar10 + 0x4aa) != '\0') &&
         (uVar21 = 0x3f800000, (*(byte *)(lVar10 + 0x274) >> 4 & 1) != 0)) {
        uVar21 = *(undefined4 *)(*(long *)(lVar14 + 8) + 0x138);
      }
      goto LAB_7101c3a834;
    }
    if ((uVar6 & 0x8148) != 0) goto LAB_7101c3a83c;
    if (uVar5 != 0) goto LAB_7101c3aa58;
    lVar14 = *(long *)(*(long *)**(undefined8 **)(lVar20 + 0x21c0) + 0x600);
    lVar10 = *(long *)(lVar20 + 0x2208);
    if ((*(char *)(lVar14 + 0x4aa) != '\0') && ((*(byte *)(lVar14 + 0x1ac) >> 1 & 1) != 0)) {
      lVar14 = *(long *)(lVar10 + 0x80);
      if (*(char *)(lVar14 + 0xc9) == '\0') {
        iVar13 = 4;
      }
      else {
        iVar13 = 0;
      }
      param_3 = 0;
      FUN_7103771be0((long *)(lVar14 + 0x2260),iVar13,0);
      *(undefined4 *)(lVar14 + 0x2270) = *(undefined4 *)(*(long *)(lVar14 + 0x2260) + 0x25c);
      *(undefined1 *)(lVar20 + 0x2012) = 1;
    }
    pcVar4 = (char *)(lVar20 + 0x2012);
    if (*(int *)(*(long *)(lVar10 + 0x80) + 0x2270) == 0) {
      *pcVar4 = '\x01';
    }
    if (*(int *)(lVar20 + 0x21b4) == 0) {
LAB_7101c3ae7c:
      bVar9 = 0;
      cVar7 = *pcVar4;
joined_r0x007101c3ae38:
      if (cVar7 == '\0') {
LAB_7101c3ae84:
        if ((bool)(*(char *)(lVar20 + 0x2013) == '\0' & (bVar9 ^ 1))) goto LAB_7101c3a83c;
      }
    }
    else if (*pcVar4 == '\0') {
      switch(*(undefined4 *)(*(long *)(lVar20 + 0x2020) + 0x25c)) {
      case 0:
        if (0x11 < *(int *)(lVar20 + 0x21ac)) goto switchD_7101c3ab7c_default;
        uVar5 = *(int *)(lVar20 + 0x21ac) + 1;
        *(uint *)(lVar20 + 0x21ac) = uVar5;
        if (0x12 < uVar5) {
LAB_7101c3aecc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar21 = 5;
        break;
      case 1:
        if (0x11 < *(int *)(lVar20 + 0x21ac)) goto LAB_7101c3ae7c;
        uVar5 = *(int *)(lVar20 + 0x21ac) + 1;
        *(uint *)(lVar20 + 0x21ac) = uVar5;
        if (0x12 < uVar5) goto LAB_7101c3aecc;
        uVar21 = 4;
        break;
      case 2:
        if (*(int *)(lVar20 + 0x21ac) < 0x12) {
          uVar5 = *(int *)(lVar20 + 0x21ac) + 1;
          *(uint *)(lVar20 + 0x21ac) = uVar5;
          if (0x12 < uVar5) goto LAB_7101c3aecc;
          *(undefined4 *)(lVar20 + (long)(int)uVar5 * 4 + 0x2160) = 6;
        }
        bVar9 = 0;
        *(undefined1 *)(lVar20 + 0x2013) = 1;
        if (*pcVar4 != '\0') goto LAB_7101c3ae9c;
        goto LAB_7101c3ae84;
      case 3:
        if (*(int *)(lVar20 + 0x21ac) < 0x12) {
          uVar5 = *(int *)(lVar20 + 0x21ac) + 1;
          *(uint *)(lVar20 + 0x21ac) = uVar5;
          if (0x12 < uVar5) goto LAB_7101c3aecc;
          *(undefined4 *)(lVar20 + (long)(int)uVar5 * 4 + 0x2160) = 7;
        }
        FUN_7101af86a0(*(long *)(lVar20 + 0x2208),1,param_3,param_4,param_5,param_6,param_7,param_8)
        ;
        FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar20 + 0x21c8) + 0x10),0x710428ff7d);
        FUN_7103776640(&local_60,**(long **)(lVar20 + 0x21c8) + 8,(byte ****)"set_parts_header",
                       param_3,param_4,param_5,param_6,param_7,param_8);
        uVar18 = local_58;
        FUN_7103778300(0x3f800000,local_58,0x710428ff7d);
        local_60 = &PTR_FUN_710523d988;
        local_58 = 0;
        if (uVar18 != 0) {
          uVar12 = *(ulong *)(uVar18 + 0x18);
          *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar18 + 0x18) = 0;
          if (uVar12 != 0) {
            FUN_710392eb40(uVar12);
          }
          FUN_710392eb40(uVar18);
        }
        bVar9 = 1;
        cVar7 = *pcVar4;
        goto joined_r0x007101c3ae38;
      default:
switchD_7101c3ab7c_default:
        bVar9 = 0;
        cVar7 = *pcVar4;
        goto joined_r0x007101c3ae38;
      }
      bVar9 = 0;
      *(undefined4 *)(lVar20 + (long)(int)uVar5 * 4 + 0x2160) = uVar21;
      cVar7 = *pcVar4;
      goto joined_r0x007101c3ae38;
    }
LAB_7101c3ae9c:
    (**(code **)(**(long **)(lVar20 + 0x2020) + 0x60))(*(long **)(lVar20 + 0x2020),0);
    *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(lVar20 + 0x21c0) + 0x600) + 0x4aa) = 0;
  }
  else {
LAB_7101c3aa58:
    if (*(char *)(lVar20 + 0x2015) == '\0') {
      uVar21 = 0x3f800000;
      if (((*(int *)(*plVar16 + 0x1b8) != 5) &&
          (lVar10 = *(long *)(*(long *)**(undefined8 **)(lVar20 + 0x21c0) + 0x600),
          uVar21 = 0x3f800000, *(char *)(lVar10 + 0x4aa) != '\0')) &&
         ((*(byte *)(lVar10 + 0x274) >> 4 & 1) != 0)) {
        uVar21 = *(undefined4 *)(*(long *)(lVar14 + 8) + 0x138);
      }
      lVar10 = *(long *)(DAT_710532f820 + 8);
      uVar11 = FUN_7101eefe30(*(long *)(*(long *)(lVar10 + 0x110) + 0x80));
      lVar14 = DAT_7105329060;
      if ((*(int *)(lVar10 + 0xf8) != 0 || (((uint)uVar11 ^ 0xffffffff) & 1) != 0) ||
          *(char *)(lVar10 + 0x142) != '\0') {
        uVar21 = 0;
      }
LAB_7101c3a834:
      *(undefined4 *)(*(long *)(lVar14 + 8) + 0x134) = uVar21;
    }
    else {
      lVar14 = *(long *)(*(long *)**(undefined8 **)(lVar20 + 0x21c0) + 0x600);
      if ((*(char *)(lVar14 + 0x4aa) != '\0') && ((*(byte *)(lVar14 + 0x1c4) >> 1 & 1) != 0)) {
        *(undefined1 *)(lVar20 + 0x2016) = 1;
      }
    }
  }
LAB_7101c3a83c:
  FUN_7101c34420((long *)(lVar20 + 0x2038));
  lVar14 = *(long *)(lVar20 + 0x2038);
  if (lVar14 != 0) {
    pcVar15 = *(code **)(lVar20 + 0x2040);
    uVar18 = *(ulong *)(lVar20 + 0x2048) & 1;
    if (uVar18 != 0 || pcVar15 != (code *)0x0) {
      if (uVar18 != 0) {
        pcVar15 = *(code **)(pcVar15 + *(long *)(lVar14 + ((long)*(ulong *)(lVar20 + 0x2048) >> 1)))
        ;
      }
      (*pcVar15)();
    }
  }
  *(int *)(lVar20 + 0x21b4) = *(int *)(lVar20 + 0x21b4) + 1;
  lVar14 = DAT_7105329060;
  *(undefined4 *)(*(long *)**(undefined8 **)(lVar20 + 0x21c0) + 0x640) =
       *(undefined4 *)(*(long *)(DAT_7105329060 + 8) + 0x134);
  *(undefined4 *)(*(long *)**(undefined8 **)(lVar20 + 0x21d0) + 0x640) =
       *(undefined4 *)(*(long *)(lVar14 + 8) + 0x134);
  FUN_7103776640(&local_70,**(long **)(lVar20 + 0x21d0) + 8,(byte ****)"set_parts_title",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_60,(long)&local_70,(long ****)"set_txt_rule",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar16 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    uVar18 = plVar16[3];
    plVar16[2] = (long)&PTR_FUN_710523d9a8;
    plVar16[3] = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40((ulong)plVar16);
  }
  FUN_7101c321b0((long)&local_60,(byte *)"mel_tournament_chart_rule");
  FUN_7103776910(&local_70,**(long **)(lVar20 + 0x21d0) + 8,(long ****)"set_txt_tnmt_progress",
                 param_3,param_4,param_5,param_6,param_7,param_8);
  plVar16 = local_68;
  lVar14 = DAT_7105329060;
  if (*local_68 == 0) {
LAB_7101c3acb0:
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    if (plVar16 == (long *)0x0) goto LAB_7101c3acc8;
  }
  else {
    if (*(int *)(lVar20 + 0x21b0) == 3) {
      FUN_710377a120((long)&local_70,"mel_tournament_chart_final_result",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      goto LAB_7101c3acb0;
    }
    if (*(int *)(lVar20 + 0x21b0) == 2) {
      if (*(uint *)(lVar20 + 0x2018) < *(uint *)(*(long *)(DAT_7105329060 + 8) + 4)) {
        lVar10 = *(long *)(DAT_7105329060 + 8) + (ulong)*(uint *)(lVar20 + 0x2018) * 0x18;
        uVar5 = *(uint *)(lVar20 + 0x201c);
        lVar17 = *(long *)(lVar10 + 8);
        uVar18 = *(long *)(lVar10 + 0x10) - lVar17;
        if (uVar5 < (uint)(uVar18 >> 4)) {
          if ((ulong)((long)uVar18 >> 4) <= (ulong)uVar5) {
LAB_7101c3aec8:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          plVar3 = (long *)(lVar17 + (ulong)uVar5 * 0x10);
          lVar10 = *plVar3;
          plVar3 = (long *)plVar3[1];
          if (plVar3 != (long *)0x0) {
            plVar1 = plVar3 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = *plVar1 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          if (lVar10 != 0) {
            iVar13 = *(int *)(*(long *)(lVar14 + 8) + 4);
            if ((iVar13 == 0) ||
               (lVar14 = *(long *)(lVar14 + 8) + (ulong)(iVar13 - 1) * 0x18,
               plVar16 = *(long **)(lVar14 + 8), *(long **)(lVar14 + 0x10) == plVar16)) {
              if (lVar10 == 0) goto LAB_7101c3aa08;
            }
            else {
              lVar14 = *plVar16;
              plVar16 = (long *)plVar16[1];
              if (plVar16 != (long *)0x0) {
                plVar1 = plVar16 + 1;
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar8) {
                    *plVar1 = *plVar1 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                plVar1 = plVar16 + 1;
                do {
                  lVar17 = *plVar1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar8) {
                    *plVar1 = lVar17 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar17 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                  std::__shared_weak_count::__release_weak();
                }
              }
              if (lVar14 == lVar10) {
LAB_7101c3aa08:
                FUN_710377a120((long)&local_70,"mel_tournament_chart_round_final",param_3,param_4,
                               param_5,param_6,param_7,param_8);
                plVar16 = local_68;
                goto joined_r0x007101c3ac78;
              }
            }
            if ((*(uint *)(lVar20 + 0x2018) == 0) ||
               (*(uint *)(lVar20 + 0x2018) < *(int *)(*(long *)(DAT_7105329060 + 8) + 4) - 2U)) {
              FUN_710377a280((long)&local_70,(byte *)"mel_tournament_chart_round",2);
              plVar16 = local_68;
            }
            else {
              FUN_710377a280((long)&local_70,(byte *)"mel_tournament_chart_round_semifinal",1);
              plVar16 = local_68;
            }
          }
joined_r0x007101c3ac78:
          if (plVar3 != (long *)0x0) {
            plVar1 = plVar3 + 1;
            do {
              lVar14 = *plVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = lVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar14 == 0) {
              local_68 = plVar16;
              (**(code **)(*plVar3 + 0x10))(plVar3);
              std::__shared_weak_count::__release_weak();
              plVar16 = local_68;
            }
          }
        }
      }
      goto LAB_7101c3acb0;
    }
    if ((long *)local_68[2] != (long *)0x0) {
      FUN_71037a28a0((long *)local_68[2],&DAT_7104867c2e);
    }
  }
  local_68 = (long *)0x0;
  local_70 = &PTR_FUN_710523d9a8;
  FUN_710392eb40((ulong)plVar16);
LAB_7101c3acc8:
  uVar18 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar18 != 0) {
    FUN_710392eb40(uVar18);
  }
  if (plVar19 != (long *)0x0) {
    plVar16 = plVar19 + 1;
    do {
      lVar14 = *plVar16;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar8) {
        *plVar16 = lVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

