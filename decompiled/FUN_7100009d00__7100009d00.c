// addr:      7100009d00
// offset:    0x9d00
// name:      FUN_7100009d00
// mangled:   
// signature: int __cdecl FUN_7100009d00(long param_1, byte * * param_2, size_t * * * * * * * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, byte * * param_6, size_t * * * * * * * param_7, size_t * * * * * * * param_8)


/* WARNING: Type propagation algorithm not settling */

int FUN_7100009d00(long param_1,byte **param_2,size_t *******param_3,size_t *******param_4,
                  size_t *******param_5,byte **param_6,size_t *******param_7,size_t *******param_8)

{
  size_t *******pppppppsVar1;
  size_t *******pppppppsVar2;
  long *plVar3;
  size_t *******pppppppsVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte **ppbVar16;
  size_t ******ppppppsVar17;
  byte **extraout_x1;
  byte **extraout_x1_00;
  byte **extraout_x1_01;
  byte **extraout_x1_02;
  byte **extraout_x1_03;
  byte **extraout_x1_04;
  byte **extraout_x1_05;
  byte **extraout_x1_06;
  byte **extraout_x1_07;
  byte **extraout_x1_08;
  byte **extraout_x1_09;
  byte **extraout_x1_10;
  byte **extraout_x1_11;
  byte **extraout_x1_12;
  byte **extraout_x1_13;
  byte **extraout_x1_14;
  byte **extraout_x1_15;
  byte **extraout_x1_16;
  byte **extraout_x1_17;
  byte **extraout_x1_18;
  byte **extraout_x1_19;
  byte **extraout_x1_20;
  byte **extraout_x1_21;
  byte **extraout_x1_22;
  byte **extraout_x1_23;
  byte **extraout_x1_24;
  byte **extraout_x1_25;
  byte **extraout_x1_26;
  byte **extraout_x1_27;
  byte **extraout_x1_28;
  byte **extraout_x1_29;
  byte **extraout_x1_30;
  byte **extraout_x1_31;
  byte **extraout_x1_32;
  byte **extraout_x1_33;
  byte **extraout_x1_34;
  byte **extraout_x1_35;
  byte **extraout_x1_36;
  byte **extraout_x1_37;
  byte **extraout_x1_38;
  byte **extraout_x1_39;
  byte **extraout_x1_40;
  byte **extraout_x1_41;
  byte **extraout_x1_42;
  byte **extraout_x1_43;
  byte **extraout_x1_44;
  byte **extraout_x1_45;
  byte **extraout_x1_46;
  byte **extraout_x1_47;
  byte **extraout_x1_48;
  byte **extraout_x1_49;
  byte **extraout_x1_50;
  byte **extraout_x1_51;
  byte **extraout_x1_52;
  byte **extraout_x1_53;
  byte **extraout_x1_54;
  byte **extraout_x1_55;
  byte **extraout_x1_56;
  byte **extraout_x1_57;
  byte **extraout_x1_58;
  byte **extraout_x1_59;
  size_t *******pppppppsVar18;
  size_t *******pppppppsVar19;
  code *pcVar20;
  size_t ******ppppppsVar21;
  size_t *****pppppsVar22;
  long *plVar23;
  long lVar24;
  int local_98;
  char local_94 [4];
  char local_90 [4];
  undefined1 local_8c [8];
  char local_84 [4];
  byte **local_80;
  size_t *******pppppppsStack_78;
  undefined1 local_70 [8];
  size_t ******local_68;
  
  local_8c[0] = '\0';
  local_90[0] = '\0';
  local_94[0] = '\0';
  if (param_4 == (size_t *******)0x0) {
    iVar9 = 2;
  }
  else {
    iVar9 = 2;
    if (*(int *)(param_4 + 0xa27) == -0x3f212453) {
      pppppppsVar1 = param_4 + 10;
      pppppppsVar2 = param_4 + 9;
      plVar3 = (long *)(param_1 + 0x40);
      uVar12 = 0;
      pppppppsVar4 = param_4 + 2;
      pppppppsVar19 = param_4;
      local_80 = param_2;
      pppppppsStack_78 = param_3;
LAB_710000b160:
      do {
        if (*(char *)((long)param_4 + 0x4f69) != '\0') {
          pppppppsVar19 = (size_t *******)param_4[0x9f0];
          param_3 = param_4;
          FUN_7100015de0((long)param_4,(byte *)"Pipe broke: handle %p, url = %s\n",param_4,
                         pppppppsVar19,param_5,param_6,param_7,param_8);
          param_2 = extraout_x1_54;
          if (*(uint *)(param_4 + 9) < 0x11) {
            if (*(uint *)(param_4 + 9) != 2) {
              *(undefined4 *)(param_4 + 9) = 2;
              FUN_71000189d0((long)param_4);
              param_2 = extraout_x1_55;
            }
            uVar12 = 0;
            iVar9 = -1;
          }
          else {
            iVar9 = 0;
          }
          *(undefined1 *)((long)param_4 + 0x4f69) = 0;
          *pppppppsVar4 = (size_t ******)0x0;
          goto joined_r0x00710000b2e4;
        }
        if ((*pppppppsVar4 == (size_t ******)0x0) &&
           (param_3 = (size_t *******)(ulong)*(uint *)pppppppsVar2, *(uint *)pppppppsVar2 - 3 < 0xd)
           ) {
          FUN_7100016040((long)param_4,(byte *)"In state %d with no easy_conn, bail out!\n",param_3,
                         pppppppsVar19,param_5,param_6,param_7,param_8);
          return 4;
        }
        cVar5 = *(char *)(param_1 + 0xf0);
        *(undefined1 *)(param_1 + 0xf0) = 0;
        if (cVar5 != '\0') {
          plVar23 = (long *)*plVar3;
          while (plVar6 = plVar23, plVar6 != (long *)0x0) {
            lVar24 = *plVar6;
            plVar23 = (long *)plVar6[2];
            if (*(int *)(lVar24 + 0x48) == 1) {
              *(undefined4 *)(lVar24 + 0x48) = 2;
              FUN_71000189d0(lVar24);
              FUN_7100006870(plVar3,plVar6,0);
              param_3 = (size_t *******)0x6;
              FUN_71000086c0(lVar24,0,6,pppppppsVar19,param_5,param_6,param_7,param_8);
              param_2 = extraout_x1_56;
            }
          }
        }
        if ((*pppppppsVar4 != (size_t ******)0x0) &&
           ((0xd < *(uint *)pppppppsVar2 - 3 ||
            (**pppppppsVar4 = (size_t *****)param_4, param_4[2] != (size_t ******)0x0)))) {
          uVar10 = *(uint *)pppppppsVar2;
          if (0xe < uVar10 - 2) goto LAB_710000b278;
          param_3 = (size_t *******)(ulong)(uVar10 < 9);
          lVar24 = FUN_7100002af0((long)param_4,(undefined1 (*) [12])&local_80,(ulong)param_3);
          param_2 = extraout_x1_57;
          if (-1 < lVar24) goto LAB_710000b274;
          iVar9 = (int)pppppppsStack_78;
          if (*(uint *)pppppppsVar2 == 4) {
            pppppppsVar19 = (size_t *******)param_4[0x14e];
            lVar24 = FUN_7100017750((long)local_80,iVar9,(long)param_4[0x14d],(int)pppppppsVar19);
            FUN_7100016040((long)param_4,(byte *)"Connection timed out after %ld milliseconds",
                           lVar24,pppppppsVar19,param_5,param_6,param_7,param_8);
            uVar12 = *(uint *)pppppppsVar2;
joined_r0x00710000a4b4:
            if (9 < uVar12) goto LAB_710000a4b8;
LAB_710000a8a0:
            bVar7 = false;
          }
          else {
            if (*(uint *)pppppppsVar2 != 3) {
              ppppppsVar17 = param_4[0x18];
              lVar24 = FUN_7100017750((long)local_80,iVar9,(long)param_4[0x14d],(int)param_4[0x14e])
              ;
              pppppppsVar19 = (size_t *******)param_4[0x1c];
              if (ppppppsVar17 == (size_t ******)0xffffffffffffffff) {
                FUN_7100016040((long)param_4,
                               (byte *)
                               "Operation timed out after %ld milliseconds with %ld bytes received",
                               lVar24,pppppppsVar19,param_5,param_6,param_7,param_8);
              }
              else {
                param_5 = (size_t *******)param_4[0x18];
                FUN_7100016040((long)param_4,
                               (byte *)
                               "Operation timed out after %ld milliseconds with %ld out of %ld bytes received"
                               ,lVar24,pppppppsVar19,param_5,param_6,param_7,param_8);
              }
              uVar12 = *(uint *)pppppppsVar2;
              goto joined_r0x00710000a4b4;
            }
            pppppppsVar19 = (size_t *******)param_4[0x14e];
            lVar24 = FUN_7100017750((long)local_80,iVar9,(long)param_4[0x14d],(int)pppppppsVar19);
            FUN_7100016040((long)param_4,(byte *)"Resolving timed out after %ld milliseconds",lVar24
                           ,pppppppsVar19,param_5,param_6,param_7,param_8);
            if (*(uint *)pppppppsVar2 < 10) goto LAB_710000a8a0;
LAB_710000a4b8:
            FUN_7100004200((long)*pppppppsVar4,2);
            bVar7 = true;
          }
          uVar12 = 0x1c;
LAB_710000a8b4:
          param_3 = (size_t *******)0x1;
          FUN_7100008d20(pppppppsVar4,uVar12,1,pppppppsVar19,param_5,param_6,param_7,param_8);
          uVar10 = *(uint *)pppppppsVar2;
          param_2 = extraout_x1_34;
          goto joined_r0x00710000a8c4;
        }
LAB_710000b274:
        uVar10 = *(uint *)pppppppsVar2;
LAB_710000b278:
        bVar7 = false;
        iVar9 = 0;
        switch(uVar10) {
        case 0:
          uVar15 = FUN_71000189f0((long)param_4,param_2,param_3,pppppppsVar19,param_5,param_6,
                                  param_7,param_8);
          uVar12 = (uint)uVar15;
          param_2 = extraout_x1_58;
          if (uVar12 != 0) goto LAB_710000a77c;
          if (*(uint *)pppppppsVar2 != 2) {
            *(undefined4 *)(param_4 + 9) = 2;
            FUN_71000189d0((long)param_4);
          }
          FUN_7100015020((long)param_4,1);
          param_2 = extraout_x1_59;
LAB_7100009f78:
          uVar12 = 0;
LAB_710000a3f0:
          bVar7 = false;
          iVar9 = -1;
          uVar10 = *(uint *)pppppppsVar2;
          break;
        case 1:
switchD_710000b29c_caseD_1:
          uVar10 = *(uint *)pppppppsVar2;
          break;
        case 2:
          FUN_7100015020((long)param_4,2);
          param_3 = (size_t *******)(local_8c + 4);
          pppppppsVar19 = (size_t *******)local_8c;
          uVar12 = FUN_710001f290((long)param_4,pppppppsVar4,(byte **)param_3,(byte **)pppppppsVar19
                                  ,(byte **)param_5,param_6,(byte **)param_7,param_8);
          if (uVar12 != 0) {
            param_2 = extraout_x1;
            if (uVar12 != 0x59) goto LAB_710000a77c;
            if (*(uint *)pppppppsVar2 != 1) {
              *(uint *)pppppppsVar2 = 1;
            }
            param_3 = param_4;
            pppppppsVar19 = param_4 + 3;
            FUN_71000067f0(plVar3,*(long *)(param_1 + 0x48),param_4,param_4 + 3);
            param_2 = extraout_x1_00;
            goto LAB_710000ae4c;
          }
          uVar15 = FUN_7100014160((long)param_4,(long)param_4[2],param_3,pppppppsVar19,param_5,
                                  param_6,param_7,param_8);
          uVar12 = (uint)uVar15;
          param_2 = extraout_x1_33;
          if (uVar12 != 0) goto LAB_710000a164;
          if (local_8c[4] == '\0') {
            if (local_8c[0] != '\0') goto joined_r0x007100009f48;
            bVar7 = FUN_710000c920((long)*pppppppsVar4);
            param_2 = extraout_x1_46;
            if (bVar7) {
              iVar9 = -1;
              if (*(uint *)pppppppsVar2 != 5) {
                uVar12 = 5;
                goto LAB_710000a03c;
              }
            }
            else {
              iVar9 = -1;
              if (*(uint *)pppppppsVar2 != 4) {
                uVar12 = 4;
                goto LAB_710000a03c;
              }
            }
            goto LAB_710000b140;
          }
          if (*(uint *)pppppppsVar2 == 3) goto LAB_710000b110;
          uVar12 = 3;
LAB_710000b13c:
          iVar9 = 0;
          *(uint *)pppppppsVar2 = uVar12;
          goto LAB_710000b140;
        case 3:
          local_68 = (size_t ******)0x0;
          ppppppsVar17 = *pppppppsVar4;
          if (*(char *)((long)ppppppsVar17 + 0x816) == '\0') {
            if (*(char *)((long)ppppppsVar17 + 0x813) == '\0') {
              ppppppsVar21 = ppppppsVar17 + 0x1b;
            }
            else {
              ppppppsVar21 = ppppppsVar17 + 0x20;
            }
          }
          else {
            ppppppsVar21 = ppppppsVar17 + 0x2c;
          }
          param_3 = (size_t *******)*ppppppsVar21;
          pppppppsVar18 = (size_t *******)(ulong)*(uint *)(ppppppsVar17 + 0x32);
          local_68 = (size_t ******)
                     FUN_7100005c60((long *)ppppppsVar17,param_3,*(uint *)(ppppppsVar17 + 0x32),
                                    pppppppsVar19,param_5,param_6,param_7,param_8);
          if (local_68 == (size_t ******)0x0) {
LAB_710000ab1c:
            param_3 = pppppppsVar18;
            uVar12 = FUN_7100004a10((long *)*pppppppsVar4,(long *)&local_68,param_3,pppppppsVar19,
                                    param_5,param_6,param_7,param_8);
          }
          else {
            ppppppsVar17[0x149] = (size_t *****)local_68;
            *(undefined1 *)(ppppppsVar17 + 0x14a) = 1;
            FUN_7100015de0((long)param_4,(byte *)"Hostname \'%s\' was found in DNS cache\n",param_3,
                           pppppppsVar19,param_5,param_6,param_7,param_8);
            pppppppsVar18 = param_3;
            if (local_68 == (size_t ******)0x0) goto LAB_710000ab1c;
            uVar12 = 0;
          }
          FUN_7100008fc0(param_1,(long)param_4);
          if (local_68 == (size_t ******)0x0) {
            iVar9 = 0;
            param_2 = extraout_x1_40;
          }
          else {
            uVar12 = FUN_7100005a10((long *)*pppppppsVar4,local_8c,param_3,pppppppsVar19,param_5,
                                    (ulong)param_6,param_7,param_8);
            param_2 = extraout_x1_41;
            if (uVar12 == 0) {
              if (local_8c[0] == '\0') {
                bVar7 = FUN_710000c920((long)*pppppppsVar4);
                param_2 = extraout_x1_42;
                if (bVar7) {
                  if (*(uint *)pppppppsVar2 != 5) {
                    uVar12 = 5;
LAB_710000af08:
                    *(uint *)pppppppsVar2 = uVar12;
                  }
                }
                else if (*(uint *)pppppppsVar2 != 4) {
                  uVar12 = 4;
                  goto LAB_710000af08;
                }
              }
              else if (param_1 == 0) {
                uVar12 = 9;
                if (*(uint *)pppppppsVar2 != 9) goto LAB_710000ad88;
              }
              else {
                uVar12 = 8;
                if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
                  uVar12 = 9;
                }
                if (*(uint *)pppppppsVar2 != uVar12) {
LAB_710000ad88:
                  *(uint *)pppppppsVar2 = uVar12;
                  pcVar20 = *(code **)((ulong)uVar12 * 8 + 0x7104f17008);
                  if (pcVar20 != (code *)0x0) {
                    (*pcVar20)(param_4);
                    param_2 = extraout_x1_43;
                  }
                }
              }
              uVar12 = 0;
              iVar9 = -1;
            }
            else {
              iVar9 = 0;
              *pppppppsVar4 = (size_t ******)0x0;
            }
          }
          bVar7 = uVar12 != 0;
          uVar10 = *(uint *)pppppppsVar2;
          break;
        case 4:
          param_3 = (size_t *******)local_84;
          uVar12 = FUN_7100002f80((long *******)*pppppppsVar4,0,(undefined1 *)param_3,pppppppsVar19,
                                  (char *)param_5,(ulong)param_6,param_7,param_8);
          bVar7 = uVar12 != 0;
          iVar9 = 0;
          param_2 = extraout_x1_01;
          if ((uVar12 != 0) || (local_84[0] == '\0')) goto switchD_710000b29c_caseD_1;
          ppppppsVar17 = *pppppppsVar4;
          if (((*(int *)(ppppppsVar17 + 0x2f) == 2) &&
              (*(char *)((long)ppppppsVar17 + 0x831) == '\0')) ||
             (bVar7 = FUN_710000c920((long)ppppppsVar17), param_2 = extraout_x1_02, bVar7)) {
            if (*(uint *)pppppppsVar2 != 5) {
              uVar12 = 5;
              goto LAB_710000b13c;
            }
LAB_710000b110:
            iVar9 = 0;
            ppppppsVar17 = *pppppppsVar4;
          }
          else {
            uVar12 = 5;
            if (*(char *)((long)*pppppppsVar4 + 0x821) == '\0') {
              uVar12 = 6;
            }
            uVar10 = *(uint *)pppppppsVar2;
            if (uVar10 == uVar12) goto LAB_7100009fc4;
LAB_7100009f5c:
            *(uint *)pppppppsVar2 = uVar12;
            pcVar20 = *(code **)((ulong)uVar12 * 8 + 0x7104f17008);
            if (pcVar20 != (code *)0x0) {
              (*pcVar20)(param_4);
              param_2 = extraout_x1_07;
              goto LAB_7100009f78;
            }
            iVar9 = -1;
            ppppppsVar17 = *pppppppsVar4;
          }
          goto joined_r0x00710000b118;
        case 5:
          uVar14 = FUN_710000e660((size_t *)*pppppppsVar4,local_8c,param_3,pppppppsVar19,
                                  (size_t *)param_5,(size_t *)param_6,(size_t *)param_7,
                                  (size_t *)param_8);
          uVar12 = (uint)uVar14;
          ppppppsVar17 = *pppppppsVar4;
          if (*(char *)((long)ppppppsVar17 + 0x82a) == '\0') {
            param_2 = extraout_x1_03;
            if (uVar12 != 0) goto LAB_710000a77c;
            if (((*(int *)(ppppppsVar17 + 0x2f) == 2) &&
                (*(char *)((long)ppppppsVar17 + 0x831) == '\0')) ||
               (bVar7 = FUN_710000c8f0((long)ppppppsVar17), param_2 = extraout_x1_26, !bVar7))
            goto LAB_710000ae4c;
            iVar9 = -1;
            if (*(uint *)pppppppsVar2 != 6) {
              uVar12 = 6;
              goto LAB_710000a03c;
            }
          }
          else {
            param_3 = (size_t *******)0x0;
            FUN_7100008d20(pppppppsVar4,0,0,pppppppsVar19,param_5,param_6,param_7,param_8);
            iVar9 = -1;
            param_2 = extraout_x1_04;
            if (*(uint *)pppppppsVar2 != 2) {
              *(undefined4 *)(param_4 + 9) = 2;
              FUN_71000189d0((long)param_4);
              param_2 = extraout_x1_05;
              goto LAB_7100009f78;
            }
          }
          goto LAB_710000b140;
        case 6:
          uVar14 = FUN_710001efe0((size_t *)*pppppppsVar4,local_8c,param_3,pppppppsVar19,
                                  (size_t *)param_5,(size_t *)param_6,(size_t *)param_7,
                                  (size_t *)param_8);
          uVar12 = (uint)uVar14;
          param_2 = extraout_x1_06;
          if (local_8c[0] != '\0') {
            if (uVar12 != 0) {
LAB_710000a514:
              FUN_7100018bb0();
              bVar7 = true;
              goto LAB_710000a8b4;
            }
joined_r0x007100009f48:
            if (param_1 != 0) goto LAB_7100009fa8;
LAB_7100009f4c:
            uVar12 = 9;
            uVar10 = *(uint *)pppppppsVar2;
            if (uVar10 != 9) goto LAB_7100009f5c;
LAB_7100009fc4:
            bVar7 = false;
            uVar12 = 0;
            iVar9 = -1;
            break;
          }
          if (*(uint *)pppppppsVar2 != 7) {
            *(uint *)pppppppsVar2 = 7;
          }
          bVar7 = false;
          iVar9 = 0;
          goto joined_r0x00710000ad70;
        case 7:
          uVar15 = FUN_710001ef80((long)*pppppppsVar4,local_8c);
          uVar12 = (uint)uVar15;
          param_2 = extraout_x1_08;
          if ((uVar12 == 0) && (local_8c[0] != '\0')) {
            if (param_1 == 0) goto LAB_7100009f4c;
LAB_7100009fa8:
            uVar12 = 8;
            if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
              uVar12 = 9;
            }
            uVar10 = *(uint *)pppppppsVar2;
            if (uVar10 != uVar12) goto LAB_7100009f5c;
            goto LAB_7100009fc4;
          }
          if (uVar12 != 0) goto LAB_710000a514;
          goto LAB_710000a77c;
        case 8:
          uVar14 = FUN_71000145e0((long)param_4,(long)param_4[2]);
          param_2 = extraout_x1_09;
          if ((uVar14 & 1) != 0) {
            if (*(uint *)pppppppsVar2 == 9) goto joined_r0x00710000ad70;
            *(undefined4 *)(param_4 + 9) = 9;
            FUN_710000c950((long)param_4);
            param_2 = extraout_x1_10;
            goto LAB_710000a3f0;
          }
          goto LAB_710000a77c;
        case 9:
          ppppppsVar17 = param_4[2];
          if (*(char *)((long)param_4 + 0x6e1) == '\0') {
            if (ppppppsVar17[0x10b][2] == (size_t ****)0x0) {
LAB_710000b09c:
              if (local_90[0] == '\0') {
LAB_710000b0c8:
                if ((*(char *)(param_4 + 0x121) == '\0') || ((*(uint *)(param_4 + 0x9fe) | 2) != 7))
                {
                  if (*(uint *)pppppppsVar2 != 10) {
                    uVar12 = 10;
                    goto LAB_710000b13c;
                  }
                  goto LAB_710000b110;
                }
                param_3 = (size_t *******)0x0;
                FUN_7100008d20(pppppppsVar4,0,0,pppppppsVar19,param_5,param_6,param_7,param_8);
                uVar12 = *(uint *)pppppppsVar2;
                param_2 = extraout_x1_53;
                goto joined_r0x00710000b0fc;
              }
              if (*(char *)((long)*pppppppsVar4 + 0x81c) != '\0') {
                if (*(uint *)pppppppsVar2 != 0xb) {
                  uVar12 = 0xb;
                  goto LAB_710000b13c;
                }
                goto LAB_710000b110;
              }
              iVar9 = -1;
              if (*(uint *)pppppppsVar2 == 0xc) goto LAB_710000b140;
              uVar12 = 0xc;
              goto LAB_710000a03c;
            }
            pppppsVar22 = *ppppppsVar17;
            uVar12 = (*(code *)ppppppsVar17[0x10b][2])(ppppppsVar17,local_90);
            if (uVar12 != 0x37) {
              param_2 = extraout_x1_27;
              if (uVar12 != 0) goto joined_r0x00710000a684;
LAB_710000b060:
              if (local_90[0] != '\0') {
                *(undefined1 *)(*ppppppsVar17 + 0x4a) = 0;
                iVar9 = *(int *)(ppppppsVar17 + 0x10e);
                if (*(int *)(ppppppsVar17 + 0x10e) <= *(int *)((long)ppppppsVar17 + 0x874)) {
                  iVar9 = *(int *)((long)ppppppsVar17 + 0x874);
                }
                *(int *)(*ppppppsVar17 + 0x44) = iVar9 + 1;
                FUN_7100015020((long)*ppppppsVar17,6);
                param_2 = extraout_x1_52;
                goto LAB_710000b09c;
              }
              goto LAB_710000b0c8;
            }
            if ((*(byte *)((long)ppppppsVar17 + 0x812) == 0) ||
               (pppppsVar22[0x15] != (size_t ****)0x0)) {
LAB_710000a688:
              if (*(char *)((long)*pppppppsVar4 + 0x812) != '\0') {
                local_68 = (size_t ******)0x0;
                uVar14 = FUN_71000194f0((long *)*pppppppsVar4,(long *)&local_68,param_3,
                                        pppppppsVar19,param_5,param_6,param_7,param_8);
                ppppppsVar17 = local_68;
                uVar10 = (uint)uVar14;
                uVar12 = 0x37;
                if (uVar10 != 0) {
                  uVar12 = uVar10;
                }
                FUN_7100018bb0();
                param_3 = (size_t *******)0x0;
                uVar11 = FUN_7100008d20(pppppppsVar4,uVar12,0,pppppppsVar19,param_5,param_6,param_7,
                                        param_8);
                iVar9 = 0;
                bVar7 = true;
                if ((uVar10 == 0) && (ppppppsVar17 != (size_t ******)0x0)) {
                  bVar7 = false;
                  if ((uVar11 == 0x37) || (uVar11 == 0)) {
                    param_3 = (size_t *******)0x2;
                    uVar15 = FUN_7100018bc0((long)param_4,(byte *)local_68,2,pppppppsVar19,param_5,
                                            param_6,param_7,param_8);
                    if ((uint)uVar15 == 0) {
                      if (*(uint *)pppppppsVar2 != 2) {
                        *(undefined4 *)(param_4 + 9) = 2;
                        FUN_71000189d0((long)param_4);
                      }
                      iVar9 = -1;
                      uVar12 = 0;
                    }
                    else {
                      iVar9 = 0;
                      uVar12 = (uint)uVar15;
                    }
                  }
                  else {
                    iVar9 = 0;
                    uVar12 = uVar11;
                  }
                }
                FUN_71000272a0();
                uVar10 = *(uint *)pppppppsVar2;
                param_2 = extraout_x1_48;
                break;
              }
              uVar12 = 0x37;
            }
            else {
              ppppppsVar17 = *pppppppsVar4;
              pppppsVar22 = *ppppppsVar17;
              local_68 = ppppppsVar17;
              FUN_7100015de0((long)pppppsVar22,
                             (byte *)"Re-used connection seems dead, get a new one\n",param_3,
                             pppppppsVar19,param_5,param_6,param_7,param_8);
              FUN_7100004200((long)ppppppsVar17,1);
              param_3 = (size_t *******)0x0;
              uVar12 = FUN_7100008d20(&local_68,0,0,pppppppsVar19,param_5,param_6,param_7,param_8);
              *pppppppsVar4 = (size_t ******)0x0;
              if ((uVar12 == 0x37) || (param_2 = extraout_x1_28, uVar12 == 0)) {
                param_3 = (size_t *******)(local_70 + 4);
                pppppppsVar19 = (size_t *******)local_70;
                local_70[0] = 1;
                uVar12 = FUN_710001f290((long)pppppsVar22,pppppppsVar4,(byte **)param_3,
                                        (byte **)pppppppsVar19,(byte **)param_5,param_6,
                                        (byte **)param_7,param_8);
                param_2 = extraout_x1_29;
                if (uVar12 == 0) {
                  ppppppsVar17 = *pppppppsVar4;
                  local_68 = ppppppsVar17;
                  if (local_70[4] != 0) {
                    uVar12 = FUN_7100004910((long *)ppppppsVar17,(long *)0x0,param_3,pppppppsVar19,
                                            param_5,param_6,param_7,param_8);
                    param_2 = extraout_x1_49;
                    if ((uVar12 != 0) ||
                       (uVar12 = FUN_7100005a10((long *)ppppppsVar17,local_70,param_3,pppppppsVar19,
                                                param_5,(ulong)param_6,param_7,param_8),
                       param_2 = extraout_x1_50, uVar12 != 0)) goto joined_r0x00710000a684;
                    ppppppsVar17 = *pppppppsVar4;
                  }
                  uVar12 = (*(code *)ppppppsVar17[0x10b][2])(ppppppsVar17,local_90);
                  param_2 = extraout_x1_51;
                  if (uVar12 == 0) goto LAB_710000b060;
                }
              }
joined_r0x00710000a684:
              if (uVar12 == 0x37) goto LAB_710000a688;
              if (uVar12 == 0) goto LAB_710000b09c;
            }
            FUN_7100018bb0();
            param_2 = extraout_x1_45;
            if (param_4[2] == (size_t ******)0x0) goto LAB_710000a164;
LAB_710000a154:
            param_3 = (size_t *******)0x0;
            FUN_7100008d20(pppppppsVar4,uVar12,0,pppppppsVar19,param_5,param_6,param_7,param_8);
            param_2 = extraout_x1_17;
LAB_710000a164:
            bVar7 = true;
            uVar10 = *(uint *)pppppppsVar2;
joined_r0x00710000a480:
            iVar9 = 0;
            break;
          }
          FUN_7100004200((long)ppppppsVar17,0);
          uVar12 = *(uint *)pppppppsVar2;
          param_2 = extraout_x1_11;
joined_r0x00710000b0fc:
          iVar9 = -1;
          if (uVar12 != 0x10) {
            uVar12 = 0x10;
LAB_710000a03c:
            *(uint *)pppppppsVar2 = uVar12;
            iVar9 = -1;
            ppppppsVar17 = *pppppppsVar4;
            goto joined_r0x00710000b118;
          }
          goto LAB_710000b140;
        case 10:
          uVar15 = FUN_710001efb0((long)*pppppppsVar4,local_90);
          uVar12 = (uint)uVar15;
          if (uVar12 != 0) {
LAB_710000a148:
            FUN_7100018bb0();
            goto LAB_710000a154;
          }
          param_2 = extraout_x1_15;
          if (local_90[0] != '\0') {
            uVar12 = 0xb;
            if (*(char *)((long)*pppppppsVar4 + 0x81c) == '\0') {
              uVar12 = 0xc;
            }
            uVar10 = *(uint *)pppppppsVar2;
            if (uVar10 == uVar12) goto LAB_7100009fc4;
            goto LAB_7100009f5c;
          }
          goto LAB_710000ae4c;
        case 0xb:
          ppppppsVar17 = *pppppppsVar4;
          local_98 = 0;
          if (ppppppsVar17[0x10b][4] != (size_t ****)0x0) {
            uVar12 = (*(code *)ppppppsVar17[0x10b][4])(ppppppsVar17,&local_98);
            if (uVar12 != 0) goto LAB_710000a148;
            param_2 = extraout_x1_16;
            if (local_98 == 1) {
              *(undefined1 *)(*ppppppsVar17 + 0x4a) = 0;
              iVar9 = *(int *)(ppppppsVar17 + 0x10e);
              if (*(int *)(ppppppsVar17 + 0x10e) <= *(int *)((long)ppppppsVar17 + 0x874)) {
                iVar9 = *(int *)((long)ppppppsVar17 + 0x874);
              }
              *(int *)(*ppppppsVar17 + 0x44) = iVar9 + 1;
              FUN_7100015020((long)*ppppppsVar17,6);
              param_2 = extraout_x1_39;
            }
            if (local_98 != 0) {
              uVar12 = 0xc;
              if (local_98 != 1) {
                uVar12 = 10;
              }
              uVar10 = *(uint *)pppppppsVar2;
              if (uVar10 == uVar12) goto LAB_7100009fc4;
              goto LAB_7100009f5c;
            }
          }
          goto LAB_710000ae4c;
        case 0xc:
          FUN_71000141d0((long)param_4,(long)param_4[2],param_3,pppppppsVar19,param_5,param_6,
                         param_7,param_8);
          plVar23 = (long *)*plVar3;
          param_2 = extraout_x1_18;
          while (plVar6 = plVar23, plVar6 != (long *)0x0) {
            lVar24 = *plVar6;
            plVar23 = (long *)plVar6[2];
            if (*(int *)(lVar24 + 0x48) == 1) {
              *(undefined4 *)(lVar24 + 0x48) = 2;
              FUN_71000189d0(lVar24);
              FUN_7100006870(plVar3,plVar6,0);
              param_3 = (size_t *******)0x6;
              FUN_71000086c0(lVar24,0,6,pppppppsVar19,param_5,param_6,param_7,param_8);
              param_2 = extraout_x1_19;
            }
          }
          if ((*(int *)(*pppppppsVar4 + 0x10e) == -1) &&
             (*(int *)((long)*pppppppsVar4 + 0x874) == -1)) {
            if (*(uint *)pppppppsVar2 != 0x10) {
              *(uint *)pppppppsVar2 = 0x10;
            }
          }
          else if (*(uint *)pppppppsVar2 != 0xd) {
            bVar7 = false;
            *(uint *)pppppppsVar2 = 0xd;
            iVar9 = -1;
            goto joined_r0x00710000ad70;
          }
joined_r0x00710000ad70:
          bVar7 = false;
          iVar9 = -1;
          goto joined_r0x00710000ad70;
        case 0xd:
          uVar14 = FUN_7100014630((long)param_4,(long)param_4[2]);
          param_2 = extraout_x1_20;
          if ((uVar14 & 1) == 0) goto LAB_710000a77c;
          if (*(uint *)pppppppsVar2 == 0xe) goto joined_r0x00710000ad70;
          *(uint *)pppppppsVar2 = 0xe;
joined_r0x00710000a864:
          bVar7 = false;
          iVar9 = -1;
          goto joined_r0x00710000ad70;
        case 0xe:
          local_68 = (size_t ******)0x0;
          local_70[4] = 0;
          if ((long)param_4[0x7e] < 1) {
            lVar24 = 0;
            ppppppsVar17 = param_4[0x7f];
            if (0 < (long)ppppppsVar17) goto LAB_710000a28c;
LAB_710000a72c:
            lVar13 = 0;
          }
          else {
            pppppppsVar19 = (size_t *******)param_4[0x153];
            param_5 = (size_t *******)param_4[0x154];
            param_6 = local_80;
            param_7 = pppppppsStack_78;
            lVar24 = FUN_7100015160((long)param_4[0x13e],(long)param_4[0x155],(long)param_4[0x7e],
                                    (long)pppppppsVar19,(int)param_5,(long)local_80,
                                    (int)pppppppsStack_78);
            ppppppsVar17 = param_4[0x7f];
            if ((long)ppppppsVar17 < 1) goto LAB_710000a72c;
LAB_710000a28c:
            pppppppsVar19 = (size_t *******)param_4[0x156];
            param_5 = (size_t *******)param_4[0x157];
            param_6 = local_80;
            param_7 = pppppppsStack_78;
            lVar13 = FUN_7100015160((long)param_4[0x13d],(long)param_4[0x158],(long)ppppppsVar17,
                                    (long)pppppppsVar19,(int)param_5,(long)local_80,
                                    (int)pppppppsStack_78);
          }
          if ((lVar24 < 1) && (lVar13 < 1)) {
            param_3 = (size_t *******)local_94;
            pppppppsVar19 = (size_t *******)(local_70 + 4);
            uVar14 = FUN_7100017ae0((size_t *******)param_4[2],(long)param_4,(char *)param_3,
                                    pppppppsVar19,param_5,(uint *)param_6,param_7,param_8);
            uVar12 = (uint)uVar14;
            if ((*(uint *)((long)param_4 + 0x224) & 1) == 0) {
              FUN_7100014680((long)param_4[2]);
              if ((*(uint *)((long)param_4 + 0x224) >> 1 & 1) == 0) goto LAB_710000a534;
LAB_710000a2e8:
              if (uVar12 != 0x38) goto LAB_710000a2f0;
LAB_710000a544:
              uVar14 = FUN_71000194f0((long *)*pppppppsVar4,(long *)&local_68,param_3,pppppppsVar19,
                                      param_5,param_6,param_7,param_8);
              if (((int)uVar14 != 0) || (local_68 == (size_t ******)0x0)) goto LAB_710000a7f0;
              bVar7 = true;
              local_94[0] = '\x01';
LAB_710000ac04:
              FUN_7100018bb0();
              FUN_710001ebb0((long)param_4,(long *)(param_4[2] + 0x11e));
              if (param_4[2][0x11e] != (size_t *****)0x0) {
                param_3 = (size_t *******)0x6;
                FUN_71000086c0((long)*param_4[2][0x11e],0,6,pppppppsVar19,param_5,param_6,param_7,
                               param_8);
              }
              plVar23 = (long *)*plVar3;
              while (plVar6 = plVar23, plVar6 != (long *)0x0) {
                lVar24 = *plVar6;
                plVar23 = (long *)plVar6[2];
                if (*(int *)(lVar24 + 0x48) == 1) {
                  *(undefined4 *)(lVar24 + 0x48) = 2;
                  FUN_71000189d0(lVar24);
                  FUN_7100006870(plVar3,plVar6,0);
                  param_3 = (size_t *******)0x6;
                  FUN_71000086c0(lVar24,0,6,pppppppsVar19,param_5,param_6,param_7,param_8);
                }
              }
              if ((bool)(param_4[0x47] == (size_t ******)0x0 & (bVar7 ^ 1U))) {
                if (param_4[0x46] == (size_t ******)0x0) {
                  bVar7 = false;
                  uVar12 = 0;
                  uVar10 = *(uint *)pppppppsVar2;
                }
                else {
                  FUN_71000272a0();
                  local_68 = param_4[0x46];
                  param_3 = (size_t *******)0x1;
                  param_4[0x46] = (size_t ******)0x0;
                  uVar15 = FUN_7100018bc0((long)param_4,(byte *)local_68,1,pppppppsVar19,param_5,
                                          param_6,param_7,param_8);
                  uVar12 = (uint)uVar15;
                  bVar7 = uVar12 != 0;
                  uVar10 = *(uint *)pppppppsVar2;
                }
                if (uVar10 != 0x10) {
                  *(uint *)pppppppsVar2 = 0x10;
                }
              }
              else {
                if (bVar7) {
                  uVar10 = 2;
                }
                else {
                  FUN_71000272a0();
                  local_68 = param_4[0x47];
                  uVar10 = 3;
                  param_4[0x47] = (size_t ******)0x0;
                }
                param_3 = (size_t *******)0x0;
                uVar12 = FUN_7100008d20(pppppppsVar4,0,0,pppppppsVar19,param_5,param_6,param_7,
                                        param_8);
                if (uVar12 != 0) {
                  bVar7 = false;
                  iVar9 = 0;
                  goto LAB_710000af7c;
                }
                param_3 = (size_t *******)(ulong)uVar10;
                uVar15 = FUN_7100018bc0((long)param_4,(byte *)local_68,uVar10,pppppppsVar19,param_5,
                                        param_6,param_7,param_8);
                uVar12 = (uint)uVar15;
                if (uVar12 != 0) goto LAB_710000a82c;
                if (*(uint *)pppppppsVar2 != 2) {
                  *(undefined4 *)(param_4 + 9) = 2;
                  FUN_71000189d0((long)param_4);
                }
                bVar7 = false;
                uVar12 = 0;
              }
              iVar9 = -1;
            }
            else {
              if ((*(uint *)((long)param_4 + 0x224) >> 1 & 1) != 0) goto LAB_710000a2e8;
LAB_710000a534:
              FUN_71000141c0((long)*pppppppsVar4);
              if (uVar12 == 0x38) goto LAB_710000a544;
LAB_710000a2f0:
              if (local_94[0] != '\0') goto LAB_710000a544;
LAB_710000a7f0:
              if (uVar12 == 0) {
                if (local_94[0] != '\0') {
                  bVar7 = false;
                  goto LAB_710000ac04;
                }
                bVar7 = false;
                uVar12 = 0;
                iVar9 = -(local_70[4] & 1);
              }
              else {
                if ((uVar12 != 0x5c) &&
                   ((*(uint *)((long)(*pppppppsVar4)[0x10b] + 0x84) >> 1 & 1) == 0)) {
                  FUN_7100004200((long)*pppppppsVar4,2);
                }
                FUN_7100018bb0();
                param_3 = (size_t *******)0x1;
                FUN_7100008d20(pppppppsVar4,uVar12,1,pppppppsVar19,param_5,param_6,param_7,param_8);
LAB_710000a82c:
                bVar7 = false;
                iVar9 = 0;
              }
            }
LAB_710000af7c:
            FUN_71000272a0();
            param_2 = extraout_x1_47;
            goto switchD_710000b29c_caseD_1;
          }
          if (*(uint *)pppppppsVar2 != 0xf) {
            *(uint *)pppppppsVar2 = 0xf;
          }
          if (lVar13 <= lVar24) {
            lVar13 = lVar24;
          }
          param_3 = (size_t *******)&DAT_00000009;
          FUN_71000086c0((long)param_4,lVar13,9,pppppppsVar19,param_5,param_6,param_7,param_8);
          param_2 = extraout_x1_30;
          goto LAB_710000a77c;
        case 0xf:
          iVar9 = FUN_7100014700((long *)*pppppppsVar4);
          if (iVar9 != 0) {
            bVar7 = false;
            iVar9 = 0;
            uVar12 = 0x2a;
            uVar10 = *(uint *)pppppppsVar2;
            param_2 = extraout_x1_21;
            break;
          }
          param_3 = pppppppsStack_78;
          uVar15 = FUN_7100016cd0((long)param_4,(long)local_80,pppppppsStack_78,(long)pppppppsVar19,
                                  param_5,param_6,param_7,param_8);
          uVar12 = (uint)uVar15;
          param_2 = extraout_x1_31;
          if (uVar12 != 0) goto LAB_710000a77c;
          if ((long)param_4[0x7e] < 1) {
            ppbVar16 = (byte **)0x0;
            param_3 = (size_t *******)param_4[0x7f];
            if (0 < (long)param_3) goto LAB_710000abcc;
LAB_710000ae00:
            param_2 = (byte **)0x0;
          }
          else {
            pppppppsVar19 = (size_t *******)param_4[0x153];
            param_5 = (size_t *******)param_4[0x154];
            param_6 = local_80;
            param_7 = pppppppsStack_78;
            ppbVar16 = (byte **)FUN_7100015160((long)param_4[0x13e],(long)param_4[0x155],
                                               (long)param_4[0x7e],(long)pppppppsVar19,(int)param_5,
                                               (long)local_80,(int)pppppppsStack_78);
            param_3 = (size_t *******)param_4[0x7f];
            if ((long)param_3 < 1) goto LAB_710000ae00;
LAB_710000abcc:
            pppppppsVar19 = (size_t *******)param_4[0x156];
            param_5 = (size_t *******)param_4[0x157];
            param_6 = local_80;
            param_7 = pppppppsStack_78;
            param_2 = (byte **)FUN_7100015160((long)param_4[0x13d],(long)param_4[0x158],
                                              (long)param_3,(long)pppppppsVar19,(int)param_5,
                                              (long)local_80,(int)pppppppsStack_78);
          }
          if (((long)ppbVar16 < 1) && ((long)param_2 < 1)) {
            if (*(uint *)pppppppsVar2 == 0xe) goto LAB_710000b110;
            uVar12 = 0xe;
            goto LAB_710000b13c;
          }
          if ((long)param_2 <= (long)ppbVar16) {
            param_2 = ppbVar16;
          }
          param_3 = (size_t *******)&DAT_00000009;
          FUN_71000086c0((long)param_4,(long)param_2,9,pppppppsVar19,param_5,param_6,param_7,param_8
                        );
          param_2 = extraout_x1_44;
LAB_710000ae4c:
          bVar7 = false;
          uVar12 = 0;
          iVar9 = 0;
          uVar10 = *(uint *)pppppppsVar2;
          break;
        case 0x10:
          uVar10 = uVar12;
          if (*pppppppsVar4 != (size_t ******)0x0) {
            FUN_710001ebb0((long)param_4,(long *)(*pppppppsVar4 + 0x11e));
            plVar23 = (long *)*plVar3;
            while (plVar6 = plVar23, plVar6 != (long *)0x0) {
              lVar24 = *plVar6;
              plVar23 = (long *)plVar6[2];
              if (*(int *)(lVar24 + 0x48) == 1) {
                *(undefined4 *)(lVar24 + 0x48) = 2;
                FUN_71000189d0(lVar24);
                FUN_7100006870(plVar3,plVar6,0);
                FUN_71000086c0(lVar24,0,6,pppppppsVar19,param_5,param_6,param_7,param_8);
              }
            }
            param_3 = (size_t *******)0x0;
            uVar10 = FUN_7100008d20(pppppppsVar4,uVar12,0,pppppppsVar19,param_5,param_6,param_7,
                                    param_8);
            if (uVar12 != 0) {
              uVar10 = uVar12;
            }
            param_2 = extraout_x1_22;
            if (*pppppppsVar4 != (size_t ******)0x0) {
              *pppppppsVar4 = (size_t ******)0x0;
            }
          }
          uVar12 = uVar10;
          if ((*(char *)(param_4 + 0x121) != '\0') && (*(int *)(param_4 + 0x9fe) != 7)) {
            if (*(uint *)pppppppsVar2 != 0) {
              *(uint *)pppppppsVar2 = 0;
              goto joined_r0x00710000a864;
            }
            goto joined_r0x00710000ad70;
          }
          if (*(uint *)pppppppsVar2 != 0x11) {
            *(undefined4 *)(param_4 + 9) = 0x11;
            *(int *)((long)param_4[0x15] + 0x1c) = *(int *)((long)param_4[0x15] + 0x1c) + -1;
            goto LAB_710000a3f0;
          }
          goto LAB_710000a79c;
        case 0x11:
          param_3 = (size_t *******)param_4[0x15];
          param_4[2] = (size_t ******)0x0;
          if ((param_3 != (size_t *******)0x0) &&
             ((param_4[0x9a2] != (size_t ******)0x0 || (*(int *)(param_4 + 0x9a3) != 0)))) {
            param_3 = param_3 + 0x16;
            uVar14 = FUN_7100017150((long *)*param_3,(long *)(param_4 + 0x9a4),param_3);
            param_2 = extraout_x1_23;
            if ((int)uVar14 != 0) {
              param_3 = (size_t *******)(uVar14 & 0xffffffff);
              FUN_7100015de0((long)param_4,(byte *)"Internal error clearing splay node = %d\n",
                             param_3,pppppppsVar19,param_5,param_6,param_7,param_8);
              param_2 = extraout_x1_24;
            }
            ppppppsVar17 = param_4[0x9ae];
            while (ppppppsVar17 != (size_t ******)0x0) {
              param_3 = (size_t *******)0x0;
              FUN_7100006870((long *)(param_4 + 0x9ab),param_4[0x9ac],0);
              param_2 = extraout_x1_25;
              ppppppsVar17 = param_4[0x9ae];
            }
            bVar7 = false;
            param_4[0x9a2] = (size_t ******)0x0;
            *(int *)(param_4 + 0x9a3) = 0;
            uVar10 = *(uint *)pppppppsVar2;
            goto joined_r0x00710000a480;
          }
LAB_710000a77c:
          bVar7 = false;
          uVar10 = *(uint *)pppppppsVar2;
joined_r0x00710000a8c4:
          iVar9 = 0;
          break;
        case 0x12:
          iVar9 = 0;
          goto LAB_710000b2f8;
        default:
          return 4;
        }
        if (0x10 < uVar10) goto joined_r0x00710000b158;
joined_r0x00710000ad70:
        if (uVar12 != 0) {
          *(undefined1 *)((long)param_4 + 0x4f69) = 0;
          plVar23 = (long *)*plVar3;
          while (plVar6 = plVar23, plVar6 != (long *)0x0) {
            lVar24 = *plVar6;
            plVar23 = (long *)plVar6[2];
            if (*(int *)(lVar24 + 0x48) == 1) {
              *(undefined4 *)(lVar24 + 0x48) = 2;
              FUN_71000189d0(lVar24);
              FUN_7100006870(plVar3,plVar6,0);
              param_3 = (size_t *******)0x6;
              FUN_71000086c0(lVar24,0,6,pppppppsVar19,param_5,param_6,param_7,param_8);
              param_2 = extraout_x1_35;
            }
          }
          if (*pppppppsVar4 == (size_t ******)0x0) {
            uVar10 = *(uint *)pppppppsVar2;
            if (uVar10 == 2) {
              FUN_7100018bb0();
              param_2 = extraout_x1_38;
              goto LAB_710000a9b4;
            }
          }
          else {
            FUN_71000141c0((long)*pppppppsVar4);
            FUN_7100014680((long)param_4[2]);
            FUN_710001ebb0((long)param_4,(long *)(param_4[2] + 0x11a));
            FUN_710001ebb0((long)param_4,(long *)(param_4[2] + 0x11e));
            param_2 = extraout_x1_36;
            if (bVar7) {
              FUN_710001e860((long *)*pppppppsVar4,(uint)(uVar12 == 0x1c),param_3,pppppppsVar19,
                             param_5,param_6,param_7,param_8);
              *pppppppsVar4 = (size_t ******)0x0;
              param_2 = extraout_x1_37;
            }
LAB_710000a9b4:
            uVar10 = *(uint *)pppppppsVar2;
          }
          if (uVar10 == 0x11) {
            uVar10 = *(uint *)pppppppsVar2;
          }
          else {
            *(undefined4 *)(param_4 + 9) = 0x11;
            *(int *)((long)param_4[0x15] + 0x1c) = *(int *)((long)param_4[0x15] + 0x1c) + -1;
            uVar10 = *(uint *)pppppppsVar2;
          }
joined_r0x00710000aa04:
          if (uVar10 == 0x11) goto LAB_710000a79c;
joined_r0x00710000b2e4:
          if ((iVar9 != -1) && (*(char *)(param_1 + 0xf0) == '\0')) break;
          goto LAB_710000b160;
        }
LAB_710000b140:
        ppppppsVar17 = *pppppppsVar4;
joined_r0x00710000b118:
        if ((ppppppsVar17 == (size_t ******)0x0) ||
           (iVar8 = FUN_7100014700((long *)ppppppsVar17), param_2 = extraout_x1_12, iVar8 == 0)) {
          uVar12 = 0;
          uVar10 = *(uint *)pppppppsVar2;
        }
        else {
          FUN_7100004200((long)*pppppppsVar4,2);
          uVar10 = *(uint *)pppppppsVar2;
          uVar12 = 0x10;
          if (0xf < uVar10) {
            uVar12 = 0x11;
          }
          param_2 = extraout_x1_13;
          if (uVar10 != uVar12) {
            *(uint *)pppppppsVar2 = uVar12;
            if (0xf < uVar10) {
              *(int *)((long)param_4[0x15] + 0x1c) = *(int *)((long)param_4[0x15] + 0x1c) + -1;
            }
            pcVar20 = *(code **)((ulong)uVar12 * 8 + 0x7104f17008);
            if (pcVar20 != (code *)0x0) {
              (*pcVar20)(param_4);
              param_2 = extraout_x1_14;
            }
            uVar12 = 0x2a;
            iVar9 = -1;
            uVar10 = *(uint *)pppppppsVar2;
            goto joined_r0x00710000aa04;
          }
          uVar12 = 0x2a;
          iVar9 = -1;
        }
joined_r0x00710000b158:
        if (uVar10 != 0x11) goto joined_r0x00710000b2e4;
LAB_710000a79c:
        *(undefined4 *)(param_4 + 0xd) = 1;
        param_4[0xe] = (size_t ******)param_4;
        *(uint *)(param_4 + 0xf) = uVar12;
        param_3 = pppppppsVar1;
        pppppppsVar19 = pppppppsVar1;
        FUN_71000067f0((long *)(param_1 + 0x20),*(long *)(param_1 + 0x28),pppppppsVar1,pppppppsVar1)
        ;
        if (*(int *)(param_4 + 9) == 0x12) {
          cVar5 = *(char *)(param_1 + 0xf0);
        }
        else {
          *(uint *)pppppppsVar2 = 0x12;
          cVar5 = *(char *)(param_1 + 0xf0);
        }
        iVar9 = 0;
        param_2 = extraout_x1_32;
      } while (cVar5 != '\0');
LAB_710000b2f8:
      *(uint *)((long)param_4 + 0x4c) = uVar12;
    }
  }
  return iVar9;
}

