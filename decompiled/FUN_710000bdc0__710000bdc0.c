// addr:      710000bdc0
// offset:    0xbdc0
// name:      FUN_710000bdc0
// mangled:   
// signature: ulong __cdecl FUN_710000bdc0(size_t * param_1, uint param_2, size_t * param_3, size_t * param_4, size_t * param_5, size_t * param_6, size_t * param_7, size_t * param_8)


/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000bdc0(size_t *param_1,uint param_2,size_t *param_3,size_t *param_4,size_t *param_5,
                    size_t *param_6,size_t *param_7,size_t *param_8)

{
  int *piVar1;
  size_t *param3;
  size_t *psVar2;
  byte *pbVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  size_t *psVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 extraout_x1;
  byte *pbVar18;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  size_t *psVar19;
  size_t *psVar20;
  size_t sVar21;
  size_t *psVar22;
  byte *pbVar23;
  size_t *psVar24;
  ulong uVar25;
  size_t local_78;
  size_t local_70;
  undefined4 local_64;
  
  pbVar23 = (byte *)param_1[0x16e];
  psVar24 = (size_t *)((ulong)param_4 & 0xffffffff);
  pcVar14 = (char *)param_3;
  if (pbVar23 == (byte *)0x0) {
    sVar12 = FUN_71000272d0();
    if (sVar12 == 0) {
      return 0x1b;
    }
    FUN_7100015de0(*param_1,(byte *)"allocate connect buffer!\n",pcVar14,param_4,param_5,param_6,
                   param_7,param_8);
    param_1[0x16e] = sVar12;
    *(undefined4 *)(sVar12 + 0x4024) = 0;
    *(undefined4 *)(sVar12 + 0x4004) = 1;
    *(size_t *)(sVar12 + 0x4008) = sVar12;
    *(size_t *)(sVar12 + 0x4010) = sVar12;
    *(undefined8 *)(sVar12 + 0x4018) = 0;
    pbVar23 = (byte *)param_1[0x16e];
  }
  local_64 = 0;
  sVar12 = *param_1;
  iVar4 = *(int *)((long)param_1 + (long)(int)param_2 * 4 + 600);
  pbVar3 = pbVar23 + 0x4024;
  if ((pbVar23 == (byte *)0x0) || (*(int *)pbVar3 != 2)) {
    piVar1 = (int *)((long)param_1 + (long)(int)param_2 * 4 + 600);
    param3 = (size_t *)(sVar12 + 0x170);
    *(undefined1 *)((long)param_1 + 0x82a) = 0;
    psVar2 = (size_t *)(pbVar23 + 0x4000);
    do {
      if (*(int *)pbVar3 == 0) {
        psVar19 = param_3;
        param_4 = psVar24;
        FUN_7100015de0(sVar12,(byte *)"Establish HTTP proxy tunnel to %s:%hu\n",param_3,psVar24,
                       param_5,param_6,param_7,param_8);
        FUN_71000272a0();
        *(undefined8 *)(sVar12 + 0x238) = 0;
        psVar13 = (size_t *)FUN_710000f240();
        if (psVar13 != (size_t *)0x0) {
          psVar19 = psVar24;
          pcVar14 = (char *)FUN_7100007fd0((byte *)"%s:%hu");
          psVar20 = param_4;
          if ((size_t *)pcVar14 != (size_t *)0x0) {
            param_4 = (size_t *)0x1;
            uVar15 = FUN_710000ec90((long *)param_1,"CONNECT",pcVar14,1,param_5,(ulong)param_6,
                                    (ulong)param_7,param_8);
            uVar25 = uVar15 & 0xffffffff;
            FUN_71000272a0();
            if ((int)uVar15 != 0) {
              FUN_710000f250((long)psVar13);
              goto LAB_710000c8a8;
            }
            param_4 = (size_t *)&DAT_710435a19c;
            if ((int)param_1[0x2f] != 1) {
              param_4 = (size_t *)&DAT_71042c3b2f;
            }
            bVar6 = *(char *)((long)param_1 + 0x81a) != '\0';
            if ((size_t *)param_1[0x1b] != param_3) {
              pcVar14 = strchr((char *)param_3,0x3a);
              bVar6 = pcVar14 != (char *)0x0;
            }
            psVar20 = (size_t *)&DAT_7104317c74;
            if (!bVar6) {
              psVar20 = (size_t *)&DAT_71044114cc;
            }
            psVar19 = param_3;
            param_5 = psVar24;
            pcVar14 = (char *)FUN_7100007fd0((byte *)"%s%s%s:%hu");
            if ((size_t *)pcVar14 != (size_t *)0x0) {
              lVar16 = FUN_710000e790((long *)param_1,(byte *)"Host:");
              if (lVar16 == 0) {
                psVar22 = (size_t *)FUN_7100007fd0((byte *)"Host: %s\r\n");
                if (psVar22 == (size_t *)0x0) {
                  FUN_71000272a0();
                  goto LAB_710000c89c;
                }
              }
              else {
                psVar22 = (size_t *)0x0;
              }
              lVar16 = FUN_710000e790((long *)param_1,(byte *)"Proxy-Connection:");
              param_8 = (size_t *)"Proxy-Connection: Keep-Alive\r\n";
              if (lVar16 != 0) {
                param_8 = (size_t *)&DAT_71044114cc;
              }
              lVar16 = FUN_710000e790((long *)param_1,(byte *)"User-Agent:");
              param_7 = (size_t *)&DAT_71044114cc;
              if ((lVar16 == 0) && (*(long *)(sVar12 + 0x830) != 0)) {
                param_7 = (size_t *)param_1[0x110];
              }
              psVar19 = psVar22;
              if (psVar22 == (size_t *)0x0) {
                psVar19 = (size_t *)&DAT_71044114cc;
              }
              param_6 = (size_t *)&DAT_71044114cc;
              if ((size_t *)param_1[0x10f] != (size_t *)0x0) {
                param_6 = (size_t *)param_1[0x10f];
              }
              uVar25 = FUN_710000f530((long *)psVar13,(byte *)"CONNECT %s HTTP/%s\r\n%s%s%s%s",
                                      pcVar14,param_4,psVar19,param_6,param_7,param_8);
              if (psVar22 != (size_t *)0x0) {
                FUN_71000272a0();
              }
              FUN_71000272a0();
              param_5 = (size_t *)(ulong)param_2;
              if ((((int)uVar25 == 0) &&
                  (pcVar14 = (char *)psVar13,
                  uVar25 = FUN_710000f7f0((long *)param_1,1,(long *)psVar13,param_4,psVar19,param_6,
                                          param_7,param_8), (int)uVar25 == 0)) &&
                 (uVar25 = FUN_710000f530((long *)psVar13,&DAT_710426ee5d,pcVar14,param_4,psVar19,
                                          param_6,param_7,param_8), (int)uVar25 == 0)) {
                param_4 = (size_t *)0x0;
                pcVar14 = (char *)(sVar12 + 0x5068);
                uVar9 = FUN_710000f280((long *)psVar13,(long *)param_1,(long *)(sVar12 + 0x5068),0,
                                       param_2,param_6,param_7,param_8);
                uVar25 = (ulong)uVar9;
                psVar19 = param_5;
                if (uVar9 == 0) {
                  FUN_710000f250(0);
                  pbVar3[0] = 1;
                  pbVar3[1] = 0;
                  pbVar3[2] = 0;
                  pbVar3[3] = 0;
                  *(int *)psVar2 = 0;
                  goto LAB_710000c0ec;
                }
              }
              param_5 = psVar19;
              uVar25 = uVar25 & 0xffffffff;
              FUN_7100016040(sVar12,(byte *)"Failed sending CONNECT to proxy",pcVar14,param_4,
                             param_5,param_6,param_7,param_8);
              FUN_710000f250(0);
              goto LAB_710000c8a8;
            }
          }
LAB_710000c89c:
          param_4 = psVar20;
          FUN_710000f250((long)psVar13);
        }
LAB_710000c8a4:
        pcVar14 = (char *)psVar19;
        uVar25 = 0x1b;
        goto LAB_710000c8a8;
      }
LAB_710000c0ec:
      pcVar14 = (char *)0x1;
      lVar16 = FUN_7100002af0(sVar12,(undefined1 (*) [12])0x0,1);
      if (lVar16 < 1) {
        FUN_7100016040(sVar12,(byte *)"Proxy CONNECT aborted due to timeout",pcVar14,param_4,param_5
                       ,param_6,param_7,param_8);
        uVar25 = 0x1c;
        goto LAB_710000c8a8;
      }
      uVar9 = FUN_7100004270((long)param_1,param_2);
      if ((uVar9 & 1) == 0) goto LAB_710000c868;
      if (*(int *)(pbVar23 + 0x4004) == 0) {
        bVar6 = false;
        iVar10 = FUN_7100014700((long *)param_1);
        uVar17 = extraout_x1;
joined_r0x00710000c670:
        bVar7 = false;
      }
      else {
        bVar6 = false;
LAB_710000c4a8:
        do {
          pcVar14 = *(char **)(pbVar23 + 0x4010);
          if (psVar2 <= pcVar14) {
            FUN_7100016040(sVar12,(byte *)"CONNECT response too large!",pcVar14,param_4,param_5,
                           param_6,param_7,param_8);
            uVar25 = 0x38;
            goto LAB_710000c8a8;
          }
          param_4 = (size_t *)0x1;
          param_5 = &local_70;
          iVar10 = FUN_71000169e0((long *)param_1,iVar4,pcVar14,1,param_5);
          if (iVar10 == 0x51) goto LAB_710000c868;
          iVar11 = FUN_7100014700((long *)param_1);
          if (iVar11 != 0) goto LAB_710000c6bc;
          if (iVar10 != 0) {
LAB_710000c660:
            pbVar23[0x4004] = 0;
            pbVar23[0x4005] = 0;
            pbVar23[0x4006] = 0;
            pbVar23[0x4007] = 0;
            iVar10 = FUN_7100014700((long *)param_1);
            uVar17 = extraout_x1_01;
            goto joined_r0x00710000c670;
          }
          if ((long)local_70 < 1) {
            if ((*(long *)(sVar12 + 0x2b0) != 0) && (*(long *)(sVar12 + 0x4cf0) != 0)) {
              *(undefined1 *)((long)param_1 + 0x82a) = 1;
              FUN_7100015de0(sVar12,(byte *)"Proxy CONNECT connection closed\n",pcVar14,param_4,
                             param_5,param_6,param_7,param_8);
              goto LAB_710000c660;
            }
            FUN_7100016040(sVar12,(byte *)"Proxy CONNECT aborted",pcVar14,param_4,param_5,param_6,
                           param_7,param_8);
            bVar7 = true;
            pbVar23[0x4004] = 0;
            pbVar23[0x4005] = 0;
            pbVar23[0x4006] = 0;
            pbVar23[0x4007] = 0;
            iVar10 = FUN_7100014700((long *)param_1);
            uVar17 = extraout_x1_02;
            goto joined_r0x00710000c698;
          }
          if (*(int *)(pbVar23 + 0x4004) < 2) {
            param_4 = (size_t *)((long)(int)*psVar2 + 1);
            *(int *)psVar2 = (int)param_4;
            if (**(char **)(pbVar23 + 0x4010) == '\n') {
              if (*(char *)(sVar12 + 0x6c8) != '\0') {
                pcVar14 = *(char **)(pbVar23 + 0x4008);
                param_5 = param_1;
                FUN_7100015ed0(sVar12,1,pcVar14,(size_t)param_4,(long)param_1,param_6,param_7,
                               param_8);
              }
              if (*(char *)(sVar12 + 0x970) == '\0') {
                pcVar14 = *(char **)(pbVar23 + 0x4008);
                param_4 = (size_t *)(long)(int)*psVar2;
                uVar9 = 2;
                if (*(char *)(sVar12 + 0x6bd) != '\0') {
                  uVar9 = 3;
                }
                uVar25 = FUN_71000167d0((long *)param_1,uVar9,pcVar14,(size_t)param_4,param_5,
                                        param_6,param_7,param_8);
                if ((int)uVar25 != 0) goto LAB_710000c81c;
              }
              *(long *)(sVar12 + 0x5060) = *(long *)(sVar12 + 0x5060) + (long)(int)*psVar2;
              *(long *)(sVar12 + 0xf0) = *(long *)(sVar12 + 0xf0) + (long)(int)*psVar2;
              cVar5 = **(char **)(pbVar23 + 0x4008);
              if ((cVar5 == '\r') || (cVar5 == '\n')) {
                *(byte **)(pbVar23 + 0x4010) = pbVar23;
                if ((*(int *)param3 == 0x197) && (*(char *)(sVar12 + 0x4d00) == '\0')) {
                  pbVar23[0x4004] = 2;
                  pbVar23[0x4005] = 0;
                  pbVar23[0x4006] = 0;
                  pbVar23[0x4007] = 0;
                  pcVar14 = *(char **)(pbVar23 + 0x4018);
                  if ((size_t *)pcVar14 == (size_t *)0x0) {
                    if (pbVar23[0x4020] == 0) goto LAB_710000c5d8;
                    FUN_7100015de0(sVar12,(byte *)"Ignore chunked response-body\n",0,param_4,param_5
                                   ,param_6,param_7,param_8);
                    *(undefined1 *)(sVar12 + 0x229) = 1;
                    lVar16 = *(long *)(pbVar23 + 0x4008);
                    pbVar18 = (byte *)(lVar16 + 1);
                    if (*pbVar18 == 10) {
                      *(byte **)(pbVar23 + 0x4008) = pbVar18;
                      pbVar18 = (byte *)(lVar16 + 2);
                    }
                    pcVar14 = (char *)0x1;
                    param_4 = &local_70;
                    uVar17 = FUN_7100012930((long *)param_1,pbVar18,(byte *)0x1,(byte *)param_4,
                                            param_5,param_6,param_7,param_8);
                    if ((int)uVar17 == -1) {
                      FUN_7100015de0(sVar12,(byte *)"chunk reading DONE\n",pcVar14,param_4,param_5,
                                     param_6,param_7,param_8);
                      pbVar23[0x4004] = 0;
                      pbVar23[0x4005] = 0;
                      pbVar23[0x4006] = 0;
                      pbVar23[0x4007] = 0;
                      pbVar3[0] = 2;
                      pbVar3[1] = 0;
                      pbVar3[2] = 0;
                      pbVar3[3] = 0;
                      lVar16 = *(long *)(pbVar23 + 0x4018);
                      goto joined_r0x00710000c3c4;
                    }
                    goto LAB_710000c5dc;
                  }
                  FUN_7100015de0(sVar12,(byte *)"Ignore %ld bytes of response-body\n",pcVar14,
                                 param_4,param_5,param_6,param_7,param_8);
                  lVar16 = *(long *)(pbVar23 + 0x4018);
                }
                else {
LAB_710000c5d8:
                  pbVar23[0x4004] = 0;
                  pbVar23[0x4005] = 0;
                  pbVar23[0x4006] = 0;
                  pbVar23[0x4007] = 0;
LAB_710000c5dc:
                  lVar16 = *(long *)(pbVar23 + 0x4018);
                }
joined_r0x00710000c3c4:
                if (lVar16 == 0) goto LAB_710000c274;
                goto LAB_710000c61c;
              }
              (*(char **)(pbVar23 + 0x4008))[(int)*psVar2] = '\0';
              psVar19 = (size_t *)&DAT_00000011;
              bVar7 = FUN_7100017490((byte *)"WWW-Authenticate:",*(byte **)(pbVar23 + 0x4008),0x11);
              if ((bVar7) && (iVar10 = 0x191, *(int *)param3 == 0x191)) {
LAB_710000c220:
                pcVar14 = FUN_710000e840(*(byte **)(pbVar23 + 0x4008));
                if ((size_t *)pcVar14 == (size_t *)0x0) goto LAB_710000c8a4;
                uVar15 = FUN_710000f090((long *)param_1,(uint)(iVar10 == 0x197),(byte *)pcVar14,
                                        param_4,param_5,param_6,param_7,param_8);
                uVar25 = uVar15 & 0xffffffff;
                FUN_71000272a0();
                if ((int)uVar15 != 0) goto LAB_710000c8a8;
              }
              else {
                psVar19 = (size_t *)&DAT_00000013;
                bVar7 = FUN_7100017490((byte *)"Proxy-authenticate:",*(byte **)(pbVar23 + 0x4008),
                                       0x13);
                if ((bVar7) && (iVar10 = 0x197, *(int *)param3 == 0x197)) goto LAB_710000c220;
                bVar7 = FUN_7100017490((byte *)"Content-Length:",*(byte **)(pbVar23 + 0x4008),0xf);
                if (bVar7) {
                  pcVar14 = (char *)(ulong)*(uint *)param3;
                  if (*(uint *)param3 - 200 < 100) {
                    FUN_7100015de0(sVar12,(byte *)
                                          "Ignoring Content-Length in CONNECT %03d response\n",
                                   pcVar14,param_4,param_5,param_6,param_7,param_8);
                  }
                  else {
                    pcVar14 = (char *)0xa;
                    uVar17 = FUN_71039c00b0(*(long *)(pbVar23 + 0x4008) + 0xf,0);
                    *(undefined8 *)(pbVar23 + 0x4018) = uVar17;
                  }
                }
                else {
                  pcVar14 = "close";
                  bVar8 = FUN_710000f6f0(*(byte **)(pbVar23 + 0x4008),(byte *)"Connection:",
                                         (byte *)"close");
                  if ((bVar8 & 1) == 0) {
                    bVar7 = FUN_7100017490((byte *)"Transfer-Encoding:",*(byte **)(pbVar23 + 0x4008)
                                           ,0x12);
                    if (bVar7) {
                      pcVar14 = (char *)(ulong)*(uint *)param3;
                      if (*(uint *)param3 - 200 < 100) {
                        FUN_7100015de0(sVar12,(byte *)
                                              "Ignoring Transfer-Encoding in CONNECT %03d response\n"
                                       ,pcVar14,param_4,param_5,param_6,param_7,param_8);
                      }
                      else {
                        pcVar14 = "chunked";
                        bVar8 = FUN_710000f6f0(*(byte **)(pbVar23 + 0x4008),
                                               (byte *)"Transfer-Encoding:",(byte *)"chunked");
                        if ((bVar8 & 1) != 0) {
                          FUN_7100015de0(sVar12,(byte *)"CONNECT responded chunked\n",pcVar14,
                                         param_4,param_5,param_6,param_7,param_8);
                          pbVar23[0x4020] = 1;
                          FUN_7100012920((long)param_1);
                        }
                      }
                    }
                    else {
                      pcVar14 = "close";
                      bVar8 = FUN_710000f6f0(*(byte **)(pbVar23 + 0x4008),
                                             (byte *)"Proxy-Connection:",(byte *)"close");
                      if ((bVar8 & 1) == 0) {
                        pcVar14 = (char *)&local_64;
                        param_4 = param3;
                        iVar10 = sscanf(*(char **)(pbVar23 + 0x4008),"HTTP/1.%d %d",(int *)pcVar14,
                                        (int *)param3);
                        if (iVar10 == 2) {
                          *(int *)(sVar12 + 0x5044) = *(int *)param3;
                        }
                      }
                      else {
                        bVar6 = true;
                      }
                    }
                  }
                  else {
                    bVar6 = true;
                  }
                }
              }
              *(int *)psVar2 = 0;
              *(byte **)(pbVar23 + 0x4010) = pbVar23;
              *(byte **)(pbVar23 + 0x4008) = pbVar23;
              iVar10 = *(int *)(pbVar23 + 0x4004);
joined_r0x00710000c348:
              if (iVar10 == 0) break;
              goto LAB_710000c4a8;
            }
            *(char **)(pbVar23 + 0x4010) = *(char **)(pbVar23 + 0x4010) + 1;
            iVar10 = *(int *)(pbVar23 + 0x4004);
          }
          else {
            lVar16 = *(long *)(pbVar23 + 0x4018);
            *(byte **)(pbVar23 + 0x4010) = pbVar23;
            if (lVar16 == 0) {
              pcVar14 = (char *)0x1;
              param_4 = &local_78;
              local_78 = 0;
              uVar17 = FUN_7100012930((long *)param_1,pbVar23,(byte *)0x1,(byte *)param_4,param_5,
                                      param_6,param_7,param_8);
              if ((int)uVar17 == -1) {
                FUN_7100015de0(sVar12,(byte *)"chunk reading DONE\n",pcVar14,param_4,param_5,param_6
                               ,param_7,param_8);
                pbVar23[0x4004] = 0;
                pbVar23[0x4005] = 0;
                pbVar23[0x4006] = 0;
                pbVar23[0x4007] = 0;
LAB_710000c274:
                pbVar3[0] = 2;
                pbVar3[1] = 0;
                pbVar3[2] = 0;
                pbVar3[3] = 0;
                iVar10 = *(int *)(pbVar23 + 0x4004);
                goto joined_r0x00710000c348;
              }
            }
            else {
              *(long *)(pbVar23 + 0x4018) = lVar16 + -1;
              if (lVar16 + -1 == 0 || lVar16 < 1) {
                pbVar23[0x4004] = 0;
                pbVar23[0x4005] = 0;
                pbVar23[0x4006] = 0;
                pbVar23[0x4007] = 0;
                pbVar3[0] = 2;
                pbVar3[1] = 0;
                pbVar3[2] = 0;
                pbVar3[3] = 0;
                iVar10 = FUN_7100014700((long *)param_1);
                uVar17 = extraout_x1_03;
                goto joined_r0x00710000c670;
              }
            }
LAB_710000c61c:
            iVar10 = *(int *)(pbVar23 + 0x4004);
          }
        } while (iVar10 != 0);
        bVar7 = false;
        iVar10 = FUN_7100014700((long *)param_1);
        uVar17 = extraout_x1_00;
      }
joined_r0x00710000c698:
      if (iVar10 != 0) {
LAB_710000c6bc:
        uVar25 = 0x2a;
        goto LAB_710000c8a8;
      }
      if (bVar7) {
        uVar25 = 0x38;
        goto LAB_710000c8a8;
      }
      if (*(int *)(sVar12 + 0x5044) == 200) {
        if (bVar6) {
LAB_710000c7a0:
          if (*(long *)(sVar12 + 0x238) != 0) {
            FUN_7100003660((long *)param_1,*piVar1);
            *piVar1 = -1;
          }
          bVar6 = false;
          iVar4 = *(int *)param3;
          goto joined_r0x00710000c6f4;
        }
      }
      else {
        uVar25 = FUN_710000e940((long *)param_1,uVar17,pcVar14,param_4,param_5,param_6,param_7,
                                param_8);
        if ((int)uVar25 != 0) {
LAB_710000c81c:
          uVar25 = uVar25 & 0xffffffff;
          goto LAB_710000c8a8;
        }
        if (bVar6 || *(char *)((long)param_1 + 0x811) != '\0') goto LAB_710000c7a0;
      }
      lVar16 = *(long *)(sVar12 + 0x238);
      if (lVar16 == 0) break;
      if (*(int *)pbVar3 == 2) {
        sVar21 = param_1[0x16e];
        *(undefined4 *)(sVar21 + 0x4024) = 0;
        *(undefined4 *)(sVar21 + 0x4004) = 1;
        *(size_t *)(sVar21 + 0x4008) = sVar21;
        *(size_t *)(sVar21 + 0x4010) = sVar21;
        *(undefined8 *)(sVar21 + 0x4018) = 0;
        lVar16 = *(long *)(sVar12 + 0x238);
      }
    } while (lVar16 != 0);
    bVar6 = true;
    iVar4 = *(int *)param3;
joined_r0x00710000c6f4:
    if (iVar4 != 200) {
      if (bVar6 || *(long *)(sVar12 + 0x238) == 0) {
        FUN_71000272a0();
        *(undefined8 *)(sVar12 + 0x238) = 0;
        FUN_7100004200((long)param_1,2);
        FUN_7100003660((long *)param_1,*piVar1);
        *piVar1 = -1;
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        pbVar3[2] = 0;
        pbVar3[3] = 0;
        cVar5 = *(char *)((long)param_1 + 0x82a);
      }
      else {
        *(undefined1 *)((long)param_1 + 0x82a) = 1;
        FUN_7100015de0(sVar12,(byte *)"Connect me again please\n",pcVar14,param_4,param_5,param_6,
                       param_7,param_8);
        *(undefined4 *)(param_1[0x16e] + 0x4024) = 2;
        FUN_7100015de0(*param_1,(byte *)"CONNECT phase completed!\n",pcVar14,param_4,param_5,param_6
                       ,param_7,param_8);
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        pbVar3[2] = 0;
        pbVar3[3] = 0;
        cVar5 = *(char *)((long)param_1 + 0x82a);
      }
      if (cVar5 == '\0') {
        pcVar14 = (char *)(ulong)*(uint *)(sVar12 + 0x170);
        FUN_7100016040(sVar12,(byte *)"Received HTTP code %d from proxy after CONNECT",pcVar14,
                       param_4,param_5,param_6,param_7,param_8);
        uVar25 = 0x38;
        goto LAB_710000c8a8;
      }
      goto LAB_710000c868;
    }
    pbVar3[0] = 2;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    FUN_71000272a0();
    param_1[0x10f] = 0;
    *(undefined1 *)(sVar12 + 0x4cf8) = 1;
    FUN_7100015de0(sVar12,(byte *)"Proxy replied OK to CONNECT request\n",pcVar14,param_4,param_5,
                   param_6,param_7,param_8);
    *(undefined1 *)(sVar12 + 0x229) = 0;
    *(undefined1 *)((long)param_1 + 0x823) = 0;
    sVar12 = param_1[0x16e];
  }
  else {
LAB_710000c868:
    sVar12 = param_1[0x16e];
  }
  if (sVar12 == 0) {
    return 0;
  }
  uVar25 = 0;
  if (*(int *)(sVar12 + 0x4024) != 2) {
    return 0;
  }
LAB_710000c8a8:
  *(undefined4 *)(param_1[0x16e] + 0x4024) = 2;
  FUN_7100015de0(*param_1,(byte *)"CONNECT phase completed!\n",pcVar14,param_4,param_5,param_6,
                 param_7,param_8);
  return uVar25;
}

