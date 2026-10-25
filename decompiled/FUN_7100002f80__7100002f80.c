// addr:      7100002f80
// offset:    0x2f80
// name:      FUN_7100002f80
// mangled:   
// signature: int __cdecl FUN_7100002f80(long * * * * * * * param_1, uint param_2, undefined1 * param_3, undefined8 param_4, char * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

int FUN_7100002f80(long *******param_1,uint param_2,undefined1 *param_3,undefined8 param_4,
                  char *param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  int iVar13;
  long *****ppppplVar14;
  long ******pppppplVar15;
  undefined8 uVar16;
  long ******pppppplVar17;
  long *****ppppplVar18;
  long *******ppppppplVar19;
  long *****ppppplVar20;
  long ******pppppplVar21;
  long ******pppppplVar22;
  long ******pppppplVar23;
  long ******pppppplVar24;
  long ******pppppplVar25;
  long lVar26;
  ulong uVar27;
  undefined1 auVar28 [12];
  int local_dc;
  long *****local_9c [6];
  undefined4 local_6c [3];
  
  lVar26 = (long)(int)param_2;
  pppppplVar25 = *param_1;
  *param_3 = 0;
  if (*(char *)((long)param_1 + lVar26 + 0x81d) != '\0') {
    *param_3 = 1;
    return 0;
  }
  auVar28 = FUN_7100017740();
  iVar13 = auVar28._8_4_;
  lVar9 = auVar28._0_8_;
  ppppplVar18 = pppppplVar25[0x75];
  ppppplVar20 = pppppplVar25[0x76];
  ppppplVar14 = pppppplVar25[0x14d];
  bVar1 = 0 < (long)ppppplVar18 | 2;
  if ((long)ppppplVar20 < 1) {
    bVar1 = 0 < (long)ppppplVar18;
  }
  pppppplVar17 = (long ******)pppppplVar25[0x14e];
  ppppplVar3 = ppppplVar18;
  if ((long)ppppplVar20 <= (long)ppppplVar18) {
    ppppplVar3 = ppppplVar20;
  }
  ppppplVar2 = (long *****)0x493e0;
  if (bVar1 == 2) {
    ppppplVar2 = ppppplVar20;
  }
  if (bVar1 != 3) {
    ppppplVar3 = ppppplVar2;
  }
  if (bVar1 != 1) {
    ppppplVar18 = ppppplVar3;
  }
  lVar10 = FUN_7100017750(lVar9,iVar13,(long)ppppplVar14,(int)pppppplVar17);
  uVar11 = (long)ppppplVar18 - lVar10;
  if (uVar11 == 0) {
    uVar11 = 0xffffffffffffffff;
  }
  if ((long)uVar11 < 0) {
    FUN_7100016040((long)pppppplVar25,(byte *)"Connection time-out",ppppplVar14,pppppplVar17,param_5
                   ,param_6,param_7,param_8);
    return 0x1c;
  }
  uVar27 = 0;
  uVar7 = 0;
  pppppplVar23 = (long ******)((long)param_1 + 0x264);
  local_dc = 0;
  do {
    uVar5 = *(uint *)((long)param_1 + uVar27 * 4 + 0x260);
    pppppplVar15 = (long ******)(ulong)uVar5;
    if (uVar5 != 0xffffffff) {
      pppppplVar17 = (long ******)0x0;
      uVar4 = (uint)uVar27 ^ 1;
      pppppplVar24 = (long ******)((long)param_1 + uVar27 * 4 + 0x260);
      uVar5 = FUN_7100015800(0xffffffff,0xffffffff,uVar5,0);
      if (uVar5 == 2) {
LAB_7100003234:
        pppppplVar17 = local_9c;
        param_5 = (char *)local_6c;
        pppppplVar15 = (long ******)0x1007;
        local_9c[0]._0_4_ = 0;
        local_6c[0] = 4;
        iVar6 = nnsocketGetSockOpt(*(uint *)pppppplVar24,0xffff);
        uVar7 = (uint)local_9c[0];
        if (iVar6 != 0) {
          uVar7 = nnsocketGetLastErrno();
        }
        local_9c[0]._0_4_ = uVar7;
        if ((uVar7 != 0x6a) && (uVar7 != 0)) {
          FUN_7100015de0((long)pppppplVar25,(byte *)"Connection failed\n",pppppplVar15,pppppplVar17,
                         param_5,param_6,param_7,param_8);
          goto LAB_71000032fc;
        }
        *(uint *)((long)param_1 + lVar26 * 4 + 600) = *(uint *)pppppplVar24;
        param_1[0xf] = param_1[(uVar27 & 0xffffffff) + 0x10];
        *(uint *)pppppplVar24 = 0xffffffff;
        iVar13 = *(int *)((long)param_1 + (ulong)uVar4 * 4 + 0x260);
        if (iVar13 == -1) goto LAB_7100003588;
        if (param_1[10] == (long ******)0x0) {
LAB_7100003550:
          FUN_710000b540((long *)param_1,iVar13);
          nnsocketClose(iVar13);
        }
        else {
          if ((*(int *)((long)param_1 + 0x25c) == iVar13) &&
             (*(char *)((long)param_1 + 0x269) != '\0')) {
            *(undefined1 *)((long)param_1 + 0x269) = 0;
            goto LAB_7100003550;
          }
          FUN_710000b540((long *)param_1,iVar13);
          (*(code *)param_1[10])(param_1[0xb],iVar13);
        }
        *(undefined4 *)((long)param_1 + (ulong)uVar4 * 4 + 0x260) = 0xffffffff;
LAB_7100003588:
        uVar11 = FUN_710001edb0(param_1,param_2);
        if ((int)uVar11 != 0) {
          return (int)uVar11;
        }
        *(undefined1 *)((long)param_1 + lVar26 + 0x81d) = 1;
        *param_3 = 1;
        if (param_2 == 0) {
          FUN_7100015020((long)pppppplVar25,4);
        }
        FUN_7100002c90((long *)param_1,*(undefined4 *)((long)param_1 + lVar26 * 4 + 600),
                       pppppplVar15,pppppplVar17,param_5,param_6,param_7,param_8);
        FUN_710001eed0((long *)param_1);
        return 0;
      }
      if (uVar5 == 0) {
        pppppplVar17 = param_1[0x108];
        lVar10 = FUN_7100017750(lVar9,iVar13,(long)param_1[0x107],(int)pppppplVar17);
        pppppplVar15 = param_1[0x10a];
        if (lVar10 < (long)pppppplVar15) {
          uVar7 = 0;
        }
        else {
          FUN_7100015de0((long)pppppplVar25,(byte *)"After %ldms connect time, move on!\n",
                         pppppplVar15,pppppplVar17,param_5,param_6,param_7,param_8);
          uVar7 = 0x6e;
        }
        if ((uVar27 == 0) && (param_1[0x11] == (long ******)0x0)) {
          pppppplVar15 = param_1[0x107];
          pppppplVar17 = param_1[0x108];
          lVar10 = FUN_7100017750(lVar9,iVar13,(long)pppppplVar15,(int)pppppplVar17);
          if (199 < lVar10) {
            uVar5 = *(uint *)pppppplVar23;
            *(uint *)pppppplVar23 = 0xffffffff;
            if (((param_2 == 0) && (pppppplVar21 = param_1[0x11], pppppplVar21 != (long ******)0x0))
               && (pppppplVar22 = (long ******)pppppplVar21[5], pppppplVar22 != (long ******)0x0)) {
              iVar6 = *(int *)((long)pppppplVar21 + 4);
              do {
                if (param_1[0x10] != (long ******)0x0) {
                  while (*(int *)((long)pppppplVar22 + 4) != iVar6) {
                    pppppplVar22 = (long ******)pppppplVar22[5];
                    if (pppppplVar22 == (long ******)0x0) goto joined_r0x007100003144;
                  }
                }
                pppppplVar15 = pppppplVar23;
                iVar8 = FUN_7100003840((long *)param_1,(long)pppppplVar22,(uint *)pppppplVar23,
                                       pppppplVar17,param_5,param_6,param_7,param_8);
                if (iVar8 != 7) {
                  param_1[0x11] = pppppplVar22;
                  break;
                }
                pppppplVar22 = (long ******)pppppplVar22[5];
              } while (pppppplVar22 != (long ******)0x0);
            }
joined_r0x007100003144:
            if (uVar5 != 0xffffffff) {
              if (param_1[10] != (long ******)0x0) {
                if ((*(uint *)((long)param_1 + 0x25c) != uVar5) ||
                   (*(char *)((long)param_1 + 0x269) == '\0')) {
                  FUN_710000b540((long *)param_1,uVar5);
                  (*(code *)param_1[10])(param_1[0xb],uVar5);
                  goto joined_r0x00710000314c;
                }
                *(undefined1 *)((long)param_1 + 0x269) = 0;
              }
              FUN_710000b540((long *)param_1,uVar5);
              nnsocketClose(uVar5);
            }
          }
        }
      }
      else {
        if (*(char *)((long)param_1 + 0x82e) != '\0') goto LAB_7100003234;
        if ((uVar5 >> 2 & 1) != 0) {
          pppppplVar17 = local_9c;
          param_5 = (char *)local_6c;
          pppppplVar15 = (long ******)0x1007;
          local_9c[0]._0_4_ = 0;
          local_6c[0] = 4;
          iVar6 = nnsocketGetSockOpt(*(uint *)pppppplVar24,0xffff);
          uVar7 = (uint)local_9c[0];
          if (iVar6 != 0) {
            local_9c[0]._0_4_ = nnsocketGetLastErrno();
            uVar7 = (uint)local_9c[0];
          }
        }
      }
joined_r0x00710000314c:
      if (uVar7 != 0) {
LAB_71000032fc:
        *(uint *)((long)pppppplVar25 + 0x4c34) = uVar7;
        nnsocketSetLastErrno(uVar7);
        ppppppplVar19 = param_1 + uVar27 + 0x10;
        if (*ppppppplVar19 != (long ******)0x0) {
          uVar16 = 0x2e;
          FUN_7100005ba0((long)*ppppppplVar19,(char *)local_9c,0x2e);
          pppppplVar21 = param_1[0x32];
          param_5 = FUN_71000175d0((long)param_1,uVar7,uVar16,pppppplVar17,param_5,param_6,param_7,
                                   param_8);
          pppppplVar15 = local_9c;
          FUN_7100015de0((long)pppppplVar25,(byte *)"connect to %s port %ld failed: %s\n",
                         pppppplVar15,pppppplVar21,param_5,param_6,param_7,param_8);
          param_1[0x10a] = (long ******)(uVar11 >> ((*ppppppplVar19)[5] != (long *****)0x0));
          uVar5 = *(uint *)pppppplVar24;
          *(uint *)pppppplVar24 = 0xffffffff;
          if (param_2 == 0) {
            pppppplVar17 = *ppppppplVar19;
            if ((pppppplVar17 == (long ******)0x0) ||
               (pppppplVar22 = (long ******)pppppplVar17[5], pppppplVar22 == (long ******)0x0)) {
LAB_7100003434:
              iVar8 = 7;
              pppppplVar17 = pppppplVar21;
            }
            else {
              iVar6 = *(int *)((long)pppppplVar17 + 4);
              do {
                if (param_1[(ulong)uVar4 + 0x10] != (long ******)0x0) {
                  while (*(int *)((long)pppppplVar22 + 4) != iVar6) {
                    pppppplVar22 = (long ******)pppppplVar22[5];
                    if (pppppplVar22 == (long ******)0x0) goto LAB_7100003434;
                  }
                }
                pppppplVar15 = pppppplVar24;
                iVar8 = FUN_7100003840((long *)param_1,(long)pppppplVar22,(uint *)pppppplVar24,
                                       pppppplVar21,param_5,param_6,param_7,param_8);
                pppppplVar17 = pppppplVar21;
                if (iVar8 != 7) {
                  *ppppppplVar19 = pppppplVar22;
                  break;
                }
                pppppplVar22 = (long ******)pppppplVar22[5];
              } while (pppppplVar22 != (long ******)0x0);
            }
          }
          else {
            iVar8 = 7;
            pppppplVar17 = pppppplVar21;
          }
          if (uVar5 != 0xffffffff) {
            if (param_1[10] != (long ******)0x0) {
              if ((*(uint *)((long)param_1 + 0x25c) != uVar5) ||
                 (*(char *)((long)param_1 + 0x269) == '\0')) {
                FUN_710000b540((long *)param_1,uVar5);
                (*(code *)param_1[10])(param_1[0xb],uVar5);
                goto joined_r0x0071000033c4;
              }
              *(undefined1 *)((long)param_1 + 0x269) = 0;
            }
            FUN_710000b540((long *)param_1,uVar5);
            nnsocketClose(uVar5);
          }
joined_r0x0071000033c4:
          if ((iVar8 != 7) || (*(int *)((long)param_1 + (ulong)uVar4 * 4 + 0x260) == -1)) {
            local_dc = iVar8;
          }
        }
      }
    }
    uVar27 = uVar27 + 1;
  } while (uVar27 < 2);
  if (local_dc == 0) {
    return 0;
  }
  if (param_1[0x11] != (long ******)0x0) goto LAB_71000035f8;
  uVar5 = *(uint *)pppppplVar23;
  *(uint *)pppppplVar23 = 0xffffffff;
  if (uVar5 != 0xffffffff) {
    if (param_1[10] != (long ******)0x0) {
      if ((*(uint *)((long)param_1 + 0x25c) != uVar5) || (*(char *)((long)param_1 + 0x269) == '\0'))
      {
        FUN_710000b540((long *)param_1,uVar5);
        (*(code *)param_1[10])(param_1[0xb],uVar5);
        goto LAB_71000035f4;
      }
      *(undefined1 *)((long)param_1 + 0x269) = 0;
    }
    FUN_710000b540((long *)param_1,uVar5);
    nnsocketClose(uVar5);
  }
LAB_71000035f4:
  local_dc = 7;
LAB_71000035f8:
  if (*(char *)((long)param_1 + 0x817) == '\0') {
    if (*(char *)((long)param_1 + 0x816) == '\0') {
      if (*(char *)((long)param_1 + 0x813) == '\0') {
        ppppppplVar19 = param_1 + 0x1b;
      }
      else {
        ppppppplVar19 = param_1 + 0x20;
      }
    }
    else {
      ppppppplVar19 = param_1 + 0x2c;
    }
  }
  else {
    ppppppplVar19 = param_1 + 0x24;
  }
  pppppplVar23 = *ppppppplVar19;
  pppppplVar24 = param_1[0x32];
  pcVar12 = FUN_71000175d0((long)param_1,uVar7,pppppplVar15,pppppplVar17,param_5,param_6,param_7,
                           param_8);
  FUN_7100016040((long)pppppplVar25,(byte *)"Failed to connect to %s port %ld: %s",pppppplVar23,
                 pppppplVar24,pcVar12,param_6,param_7,param_8);
  return local_dc;
}

