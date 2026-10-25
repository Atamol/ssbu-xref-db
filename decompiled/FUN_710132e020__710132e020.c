// addr:      710132e020
// offset:    0x132e020
// name:      FUN_710132e020
// mangled:   
// signature: undefined __cdecl FUN_710132e020(undefined4 * param_1, long * * * * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x00710132e12c) */

void FUN_710132e020(undefined4 *param_1,long ****param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  long ****pppplVar9;
  long *plVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  long ***local_7a8 [115];
  long *local_410;
  long *local_408;
  long *local_400;
  long local_78;
  undefined4 local_6c [3];
  
  *param_1 = *(undefined4 *)param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(long *)(param_1 + 2) = 0;
  FUN_710132da30((undefined8 *)(param_1 + 6));
  uVar2 = *(uint *)param_2;
  if (((uVar2 != 0xffffff) && (uVar2 < *(uint *)(DAT_7105332f20 + 0x18))) &&
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar2 * 8 + 4) != '\0')) {
    uVar2 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar2 * 8);
    if ((uVar2 != 0xffffff) && (uVar2 < *(uint *)(DAT_7105332f20 + 0x1c))) {
      plVar10 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar2 * 0x18);
      if ((*(char *)((long)plVar10 + 0xc) != '\0' && plVar10 != (long *)0x0) &&
         ((*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar2 * 0x18 + 0xd) == '\x03' &&
          (*plVar10 != 0)))) {
        lVar15 = 0x110;
        local_400 = (long *)0x0;
        local_408 = (long *)0x0;
        local_410 = (long *)0x0;
        uVar8 = extraout_x1;
LAB_710132e17c:
        FUN_710132e5f0((long *)&local_410,uVar8,param_3,param_4,param_5,param_6,param_7,param_8);
        plVar12 = local_408 + -6;
        plVar10 = local_408;
        do {
          local_408 = plVar10;
          if (lVar15 == 0) {
            std::string::assign((char *)(plVar10 + -3));
            lVar15 = 0;
            uVar8 = extraout_x1_04;
            do {
              puVar6 = (undefined8 *)plVar10[-5];
              if (puVar6 < (undefined8 *)plVar10[-4]) {
                *(undefined4 *)(puVar6 + 3) = 0;
                puVar6[1] = 0;
                puVar6[2] = 0;
                *puVar6 = 0;
                lVar13 = plVar10[-5] + 0x20;
                plVar10[-5] = lVar13;
              }
              else {
                FUN_710132e830(plVar12,uVar8,param_3,param_4,param_5,param_6,param_7,param_8);
                lVar13 = plVar10[-5];
              }
              std::string::assign((char *)(lVar13 + -0x20));
              puVar1 = (undefined4 *)((long)&DAT_71050600d0 + lVar15);
              lVar15 = lVar15 + 0x20;
              *(undefined4 *)(lVar13 + -8) = *puVar1;
              uVar8 = extraout_x1_05;
            } while (lVar15 != 0x280);
            if (local_408 < local_400) {
              local_408[4] = 0;
              local_408[5] = 0;
              local_408[2] = 0;
              local_408[3] = 0;
              *local_408 = 0;
              local_408[1] = 0;
              local_408 = local_408 + 6;
            }
            else {
              FUN_710132e5f0((long *)&local_410,extraout_x1_05,param_3,param_4,param_5,param_6,
                             param_7,param_8);
            }
            plVar10 = local_408;
            plVar12 = local_408 + -6;
            std::string::assign((char *)(local_408 + -3));
            puVar6 = (undefined8 *)plVar10[-5];
            if (puVar6 < (undefined8 *)plVar10[-4]) {
              *(undefined4 *)(puVar6 + 3) = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
              *puVar6 = 0;
              lVar15 = plVar10[-5] + 0x20;
              plVar10[-5] = lVar15;
            }
            else {
              FUN_710132e830(plVar12,extraout_x1_06,param_3,param_4,param_5,param_6,param_7,param_8)
              ;
              lVar15 = plVar10[-5];
            }
            std::string::assign((char *)(lVar15 + -0x20));
            *(undefined4 *)(lVar15 + -8) = 9;
            puVar6 = (undefined8 *)plVar10[-5];
            if (puVar6 < (undefined8 *)plVar10[-4]) {
              *(undefined4 *)(puVar6 + 3) = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
              *puVar6 = 0;
              lVar15 = plVar10[-5] + 0x20;
              plVar10[-5] = lVar15;
            }
            else {
              FUN_710132e830(plVar12,extraout_x1_07,param_3,param_4,param_5,param_6,param_7,param_8)
              ;
              lVar15 = plVar10[-5];
            }
            std::string::assign((char *)(lVar15 + -0x20));
            *(undefined4 *)(lVar15 + -8) = 1;
            puVar6 = (undefined8 *)plVar10[-5];
            if (puVar6 < (undefined8 *)plVar10[-4]) {
              *(undefined4 *)(puVar6 + 3) = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
              *puVar6 = 0;
              lVar15 = plVar10[-5] + 0x20;
              plVar10[-5] = lVar15;
            }
            else {
              FUN_710132e830(plVar12,extraout_x1_08,param_3,param_4,param_5,param_6,param_7,param_8)
              ;
              lVar15 = plVar10[-5];
            }
            std::string::assign((char *)(lVar15 + -0x20));
            *(undefined4 *)(lVar15 + -8) = 0xc;
            FUN_710367a9f0(&local_78,(long *)&local_410,param_2,param_4,param_5,param_6,param_7,
                           param_8);
            if (local_78 == 0) {
              puVar6 = (undefined8 *)0x0;
              plVar10 = local_410;
              goto joined_r0x00710132e4a4;
            }
            puVar6 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,param_2,param_4,param_5,param_6,param_7,param_8);
            if (puVar6 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_6c[0] = 0;
                local_7a8[0] = (long ***)&SUB_00000020;
                pppplVar9 = local_7a8;
                uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                if (((uVar7 & 1) != 0) &&
                   (puVar6 = (undefined8 *)
                             FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,
                                            param_8), puVar6 != (undefined8 *)0x0))
                goto LAB_710132e480;
              }
              puVar6 = (undefined8 *)0x0;
            }
LAB_710132e480:
            *puVar6 = &DAT_7105060348;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar6[3] = local_78;
            plVar10 = local_410;
joined_r0x00710132e4a4:
            local_410 = plVar10;
            plVar12 = local_408;
            if (plVar10 != (long *)0x0) {
              while (plVar5 = plVar12, plVar5 != plVar10) {
                plVar12 = plVar5 + -6;
                if (((*(byte *)(plVar5 + -3) & 1) != 0) && (plVar5[-1] != 0)) {
                  FUN_710392eb40(plVar5[-1]);
                }
                pbVar14 = (byte *)*plVar12;
                if (pbVar14 != (byte *)0x0) {
                  pbVar11 = (byte *)plVar5[-5];
                  if (pbVar11 == pbVar14) {
                    plVar5[-5] = (long)pbVar14;
                    pbVar11 = pbVar14;
                  }
                  else {
                    do {
                      pbVar16 = pbVar11 + -0x20;
                      if (((*pbVar16 & 1) != 0) && (*(ulong *)(pbVar11 + -0x10) != 0)) {
                        FUN_710392eb40(*(ulong *)(pbVar11 + -0x10));
                      }
                      pbVar11 = pbVar16;
                    } while (pbVar14 != pbVar16);
                    pbVar11 = (byte *)*plVar12;
                    plVar5[-5] = (long)pbVar14;
                  }
                  if (pbVar11 != (byte *)0x0) {
                    FUN_710392eb40((ulong)pbVar11);
                  }
                }
              }
              local_408 = plVar10;
              if (local_410 != (long *)0x0) {
                FUN_710392eb40((ulong)local_410);
              }
            }
            *(long *)(param_1 + 2) = local_78;
            plVar10 = *(long **)(param_1 + 4);
            *(undefined8 **)(param_1 + 4) = puVar6;
            if (plVar10 != (long *)0x0) {
              plVar12 = plVar10 + 1;
              do {
                lVar15 = *plVar12;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar4) {
                  *plVar12 = lVar15 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (*(long *)(param_1 + 2) == 0) {
              return;
            }
            FUN_710132da30(local_7a8);
            FUN_710132ea40(&local_410,(long)param_1,0,(long)local_7a8);
            memcpy(param_1 + 6,&local_410,0x394);
            return;
          }
          std::string::assign((char *)(plVar10 + -3));
          puVar6 = (undefined8 *)plVar10[-5];
          if (puVar6 < (undefined8 *)plVar10[-4]) {
            *(undefined4 *)(puVar6 + 3) = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *puVar6 = 0;
            lVar13 = plVar10[-5] + 0x20;
            plVar10[-5] = lVar13;
          }
          else {
            FUN_710132e830(plVar12,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
            lVar13 = plVar10[-5];
          }
          std::string::assign((char *)(lVar13 + -0x20));
          *(undefined4 *)(lVar13 + -8) = 2;
          puVar6 = (undefined8 *)plVar10[-5];
          if (puVar6 < (undefined8 *)plVar10[-4]) {
            *(undefined4 *)(puVar6 + 3) = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *puVar6 = 0;
            lVar13 = plVar10[-5] + 0x20;
            plVar10[-5] = lVar13;
          }
          else {
            FUN_710132e830(plVar12,extraout_x1_02,param_3,param_4,param_5,param_6,param_7,param_8);
            lVar13 = plVar10[-5];
          }
          std::string::assign((char *)(lVar13 + -0x20));
          *(undefined4 *)(lVar13 + -8) = 0xc;
          puVar6 = (undefined8 *)plVar10[-5];
          if (puVar6 < (undefined8 *)plVar10[-4]) {
            *(undefined4 *)(puVar6 + 3) = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *puVar6 = 0;
            lVar13 = plVar10[-5] + 0x20;
            plVar10[-5] = lVar13;
          }
          else {
            FUN_710132e830(plVar12,extraout_x1_03,param_3,param_4,param_5,param_6,param_7,param_8);
            lVar13 = plVar10[-5];
          }
          std::string::assign((char *)(lVar13 + -0x20));
          *(undefined4 *)(lVar13 + -8) = 5;
          lVar15 = lVar15 + -0x10;
          uVar8 = extraout_x1_00;
          if (local_400 <= local_408) goto LAB_710132e17c;
          plVar10 = local_408 + 6;
          local_408[4] = 0;
          local_408[5] = 0;
          local_408[2] = 0;
          local_408[3] = 0;
          *local_408 = 0;
          local_408[1] = 0;
          plVar12 = local_408;
        } while( true );
      }
    }
  }
  return;
}

