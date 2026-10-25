// addr:      710339a620
// offset:    0x339a620
// name:      FUN_710339a620
// mangled:   
// signature: undefined __cdecl FUN_710339a620(short * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710339a620(short *param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long ***ppplVar8;
  ulong uVar9;
  char *pcVar10;
  int *piVar11;
  long ***ppplVar12;
  long **pplVar13;
  long **pplVar14;
  long *plVar15;
  long lVar16;
  long **pplVar17;
  undefined8 *puVar18;
  long **pplVar19;
  undefined8 *puVar20;
  long ****pppplVar21;
  long ****pppplVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 auStack_108 [2];
  undefined **local_100;
  long local_f8;
  int local_f0;
  undefined1 local_e8;
  long ***local_c8;
  long ***local_c0;
  long local_b8;
  int local_b0;
  undefined1 local_a8;
  long ***local_78;
  
  if (*(char *)((long)param_1 + 0x61) != '\0') {
    puVar20 = *(undefined8 **)(param_1 + 0x58);
    puVar18 = *(undefined8 **)(param_1 + 0x5c);
    while (puVar18 != puVar20) {
      puVar18 = puVar18 + -2;
      (**(code **)*puVar18)(puVar18);
    }
    *(undefined8 **)(param_1 + 0x5c) = puVar20;
    FUN_71037780e0(&local_c8,(long)(param_1 + 8),(long ****)"txt_up_anim",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    ppplVar12 = local_c0;
    pppplVar22 = *(long *****)(param_1 + 0x5c);
    if (pppplVar22 < *(long *****)(param_1 + 0x60)) {
      *pppplVar22 = (long ***)&PTR_FUN_710523d9e8;
      pppplVar22[1] = (long ***)0x0;
      if (pppplVar22 != &local_c8) {
        local_c0 = (long ***)0x0;
        ppplVar8 = pppplVar22[1];
        pppplVar22[1] = ppplVar12;
        if (ppplVar8 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar8);
        }
      }
      *(long *)(param_1 + 0x5c) = *(long *)(param_1 + 0x5c) + 0x10;
    }
    else {
      FUN_7101b09e60((long *)(param_1 + 0x58),&local_c8,param_3,param_4,param_5,param_6,param_7,
                     param_8);
    }
    ppplVar12 = local_c0;
    local_c8 = (long ***)&PTR_FUN_710523d9e8;
    local_c0 = (long ***)0x0;
    if (ppplVar12 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar12);
    }
    FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x58));
    if ((**(long **)(param_1 + 0x1c) != 0) && ((*(long **)(param_1 + 0x1c))[1] != 0)) {
      FUN_710377aee0(0x3f800000,(long)(param_1 + 0x18));
    }
    *(undefined1 *)((long)param_1 + 0x61) = 0;
    if (((char)param_1[0x54] != '\0') && (*(uint *)(param_1 + 0x2a) < 99)) {
      local_c8 = (long ***)0x19f2450f4a;
      param_4 = (byte ****)0xa;
      param_3 = &local_c8;
      FUN_7103314db0(auStack_108,*(long *)(DAT_710532f8d0 + 8),(ulong *)param_3,(byte ****)0xa,
                     param_5,param_6,param_7,param_8);
      local_100 = &PTR_FUN_7104f73d50;
      if ((local_f8 != 0) && ((DAT_7106dd53a8 == '\x01' && (local_f0 == DAT_7106dd53ac)))) {
        piVar11 = (int *)(local_f8 + 0x38);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar6) {
            *piVar11 = *piVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      local_f8 = 0;
      local_e8 = 0;
    }
  }
  if ((*(int *)(param_1 + 0x2a) != 99) || ((char)param_1[0x31] != '\0'))
  goto joined_r0x00710339a7e4;
  if (*(long *)(*(long *)(param_1 + 0xc) + 8) != 0) {
    sVar3 = *param_1;
    if ((sVar3 == -1) || (1999 < sVar3)) {
LAB_710339aca4:
      pcVar10 = "level_line_max";
    }
    else {
      lVar16 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar2 = *(ushort *)(lVar16 + (long)(int)sVar3 * 2 + 0x60);
      uVar4 = (int)((ulong)(*(long *)(lVar16 + 0x28) - *(long *)(lVar16 + 0x20)) >> 6) * -0x33333333
      ;
      if ((uVar4 <= uVar2) ||
         ((uVar2 = *(ushort *)(lVar16 + (ulong)uVar2 * 2 + 0x1000), uVar4 <= uVar2 ||
          (*(short *)(*(long *)(lVar16 + 0x20) + (ulong)uVar2 * 0x140) == -1))))
      goto LAB_710339aca4;
      pcVar10 = "level_evo_loop";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xc),(long)pcVar10);
  }
  if (*(long *)(*(long *)(param_1 + 0xc) + 8) != 0) {
    sVar3 = *param_1;
    if ((sVar3 != -1) && (sVar3 < 2000)) {
      lVar16 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar2 = *(ushort *)(lVar16 + (long)(int)sVar3 * 2 + 0x60);
      uVar4 = (int)((ulong)(*(long *)(lVar16 + 0x28) - *(long *)(lVar16 + 0x20)) >> 6) * -0x33333333
      ;
      if ((uVar2 < uVar4) &&
         ((uVar2 = *(ushort *)(lVar16 + (ulong)uVar2 * 2 + 0x1000), uVar2 < uVar4 &&
          (*(short *)(*(long *)(lVar16 + 0x20) + (ulong)uVar2 * 0x140) != -1)))) {
        FUN_71037780e0(&local_c8,(long)(param_1 + 8),(long ****)"level_evo_1s",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        ppplVar12 = local_c0;
        pppplVar22 = *(long *****)(param_1 + 0x5c);
        if (pppplVar22 < *(long *****)(param_1 + 0x60)) {
          *pppplVar22 = (long ***)&PTR_FUN_710523d9e8;
          pppplVar22[1] = (long ***)0x0;
          if (pppplVar22 != &local_c8) {
            local_c0 = (long ***)0x0;
            ppplVar8 = pppplVar22[1];
            pppplVar22[1] = ppplVar12;
            if (ppplVar8 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar8);
            }
          }
          *(long *)(param_1 + 0x5c) = *(long *)(param_1 + 0x5c) + 0x10;
        }
        else {
          FUN_7101b09e60((long *)(param_1 + 0x58),&local_c8,param_3,param_4,param_5,param_6,param_7,
                         param_8);
        }
        ppplVar12 = local_c0;
        local_c8 = (long ***)&PTR_FUN_710523d9e8;
        local_c0 = (long ***)0x0;
        if (ppplVar12 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar12);
        }
      }
    }
    FUN_710339a520((long)param_1,"mnu_spirit_lv_max",param_3,param_4,param_5,param_6,param_7,param_8
                  );
    if ((char)param_1[0x54] != '\0') {
      local_78 = (long ***)0x17d622bce9;
      param_4 = (byte ****)0xa;
      param_3 = &local_78;
      FUN_7103314db0((undefined4 *)&local_c8,*(long *)(DAT_710532f8d0 + 8),(ulong *)param_3,
                     (byte ****)0xa,param_5,param_6,param_7,param_8);
      local_c0 = (long ***)&PTR_FUN_7104f73d50;
      if (((local_b8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_b0 == DAT_7106dd53ac)) {
        piVar11 = (int *)(local_b8 + 0x38);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar6) {
            *piVar11 = *piVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      local_b8 = 0;
      local_a8 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x31) = 1;
joined_r0x00710339a7e4:
  if ((param_2 & 1) != 0) {
    pppplVar22 = *(long *****)(param_1 + 0x58);
    pppplVar21 = *(long *****)(param_1 + 0x5c);
    if (pppplVar22 != pppplVar21) {
      ppplVar12 = pppplVar22[1];
      pplVar17 = ppplVar12[1];
      if (pplVar17 != (long **)0x0) {
        if (*(char *)(ppplVar12 + 2) != '\0') {
          pplVar19 = (long **)(*ppplVar12)[0x10];
          pplVar1 = *ppplVar12 + 0x11;
          if (pplVar19 != pplVar1) {
            do {
              while( true ) {
                uVar9 = (**(code **)(*pplVar19[0xd] + 0x148))();
                if (((uVar9 & 1) != 0) &&
                   (uVar9 = (*(code *)(*pplVar17)[0x24])(pplVar17,pplVar19[0xd]), (uVar9 & 1) != 0))
                {
                  (**(code **)(*pplVar19[0xd] + 0x178))();
                  (**(code **)(*pplVar19[0xd] + 0x140))(pplVar19[0xd],0);
                }
                pplVar13 = (long **)pplVar19[1];
                if ((long **)pplVar19[1] == (long **)0x0) break;
                do {
                  pplVar19 = pplVar13;
                  pplVar13 = (long **)*pplVar19;
                } while ((long **)*pplVar19 != (long **)0x0);
LAB_710339a8b0:
                if (pplVar19 == pplVar1) goto LAB_710339a8c8;
              }
              pplVar13 = pplVar19 + 2;
              pplVar14 = (long **)*pplVar13;
              if ((long **)*pplVar14 != pplVar19) {
                do {
                  plVar15 = *pplVar13;
                  pplVar13 = (long **)(plVar15 + 2);
                  pplVar19 = (long **)*pplVar13;
                } while (*pplVar19 != plVar15);
                goto LAB_710339a8b0;
              }
              pplVar19 = pplVar14;
            } while (pplVar14 != pplVar1);
LAB_710339a8c8:
            pplVar17 = pppplVar22[1][1];
          }
        }
        (*(code *)(*pplVar17)[0x2f])(pplVar17);
        pppplVar22 = *(long *****)(param_1 + 0x58);
        pppplVar21 = *(long *****)(param_1 + 0x5c);
      }
      if (pppplVar22 != pppplVar21) {
        fVar26 = 0.0;
        do {
          pcVar10 = "";
          if (pppplVar22[1][1] != (long **)0x0) {
            pcVar10 = (char *)(*(code *)(*pppplVar22[1][1])[0x22])();
          }
          iVar7 = strcmp(pcVar10,"txt_up_anim");
          if (iVar7 == 0) {
            FUN_71037780e0(&local_c8,(long)(param_1 + 8),(long ****)"txt_up_anim_skip",param_3,
                           param_4,param_5,param_6,param_7,param_8);
            fVar23 = fVar26;
            if (local_c0[1] != (long **)0x0) {
              fVar23 = (float)(*(code *)(*local_c0[1])[0x35])();
            }
            fVar24 = fVar26;
            fVar25 = fVar26;
            if (pppplVar22[1][1] != (long **)0x0) {
              fVar24 = (float)(*(code *)(*pppplVar22[1][1])[0x35])();
              if (pppplVar22[1][1] == (long **)0x0) {
                fVar25 = 0.0;
              }
              else {
                fVar25 = (float)(*(code *)(*pppplVar22[1][1])[0x33])();
              }
            }
            if (fVar23 <= fVar24 - fVar25) {
              if (pppplVar22 != &local_c8) {
                *pppplVar22[1] = *local_c0;
                pppplVar22[1][1] = local_c0[1];
                *(undefined1 *)(pppplVar22[1] + 2) = *(undefined1 *)(local_c0 + 2);
              }
              ppplVar12 = pppplVar22[1];
              pplVar17 = ppplVar12[1];
              if (pplVar17 != (long **)0x0) {
                if (*(char *)(ppplVar12 + 2) != '\0') {
                  pplVar19 = (long **)(*ppplVar12)[0x10];
                  pplVar1 = *ppplVar12 + 0x11;
                  if (pplVar19 != pplVar1) {
                    do {
                      while( true ) {
                        uVar9 = (**(code **)(*pplVar19[0xd] + 0x148))();
                        if (((uVar9 & 1) != 0) &&
                           (uVar9 = (*(code *)(*pplVar17)[0x24])(pplVar17,pplVar19[0xd]),
                           (uVar9 & 1) != 0)) {
                          (**(code **)(*pplVar19[0xd] + 0x178))();
                          (**(code **)(*pplVar19[0xd] + 0x140))(pplVar19[0xd],0);
                        }
                        pplVar13 = (long **)pplVar19[1];
                        if ((long **)pplVar19[1] == (long **)0x0) break;
                        do {
                          pplVar19 = pplVar13;
                          pplVar13 = (long **)*pplVar19;
                        } while ((long **)*pplVar19 != (long **)0x0);
LAB_710339aac0:
                        if (pplVar19 == pplVar1) goto LAB_710339aad8;
                      }
                      pplVar13 = pplVar19 + 2;
                      pplVar14 = (long **)*pplVar13;
                      if ((long **)*pplVar14 != pplVar19) {
                        do {
                          plVar15 = *pplVar13;
                          pplVar13 = (long **)(plVar15 + 2);
                          pplVar19 = (long **)*pplVar13;
                        } while (*pplVar19 != plVar15);
                        goto LAB_710339aac0;
                      }
                      pplVar19 = pplVar14;
                    } while (pplVar14 != pplVar1);
LAB_710339aad8:
                    pplVar17 = pppplVar22[1][1];
                  }
                }
                (*(code *)(*pplVar17)[0x31])(pplVar17);
              }
            }
            ppplVar12 = local_c0;
            local_c8 = (long ***)&PTR_FUN_710523d9e8;
            local_c0 = (long ***)0x0;
            if (ppplVar12 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar12);
            }
          }
          pppplVar22 = pppplVar22 + 2;
        } while (pppplVar22 != pppplVar21);
        pppplVar21 = *(long *****)(param_1 + 0x58);
      }
      ppplVar12 = pppplVar21[1];
      pplVar17 = ppplVar12[1];
      if (pplVar17 != (long **)0x0) {
        if (*(char *)(ppplVar12 + 2) != '\0') {
          pplVar19 = (long **)(*ppplVar12)[0x10];
          pplVar1 = *ppplVar12 + 0x11;
          if (pplVar19 != pplVar1) {
            do {
              while( true ) {
                uVar9 = (**(code **)(*pplVar19[0xd] + 0x148))();
                if (((uVar9 & 1) != 0) &&
                   (uVar9 = (*(code *)(*pplVar17)[0x24])(pplVar17,pplVar19[0xd]), (uVar9 & 1) != 0))
                {
                  (**(code **)(*pplVar19[0xd] + 0x178))();
                  (**(code **)(*pplVar19[0xd] + 0x140))(pplVar19[0xd],0);
                }
                pplVar13 = (long **)pplVar19[1];
                if ((long **)pplVar19[1] == (long **)0x0) break;
                do {
                  pplVar19 = pplVar13;
                  pplVar13 = (long **)*pplVar19;
                } while ((long **)*pplVar19 != (long **)0x0);
LAB_710339abe0:
                if (pplVar19 == pplVar1) goto LAB_710339abf8;
              }
              pplVar13 = pplVar19 + 2;
              pplVar14 = (long **)*pplVar13;
              if ((long **)*pplVar14 != pplVar19) {
                do {
                  plVar15 = *pplVar13;
                  pplVar13 = (long **)(plVar15 + 2);
                  pplVar19 = (long **)*pplVar13;
                } while (*pplVar19 != plVar15);
                goto LAB_710339abe0;
              }
              pplVar19 = pplVar14;
            } while (pplVar14 != pplVar1);
LAB_710339abf8:
            pplVar17 = pppplVar21[1][1];
          }
        }
        (*(code *)(*pplVar17)[0x2d])(0x3f800000,pplVar17);
      }
    }
  }
  return;
}

