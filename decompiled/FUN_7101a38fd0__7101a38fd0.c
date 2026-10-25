// addr:      7101a38fd0
// offset:    0x1a38fd0
// name:      FUN_7101a38fd0
// mangled:   
// signature: undefined __cdecl FUN_7101a38fd0(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a38fd0(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  undefined4 *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  undefined1 *puVar7;
  long *********ppppppppplVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long **pplVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *********ppppppppplVar19;
  long ****pppplVar20;
  long *plVar21;
  ulong uVar22;
  undefined4 local_a0 [2];
  undefined **local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x198);
  lVar3 = *(long *)(param_1 + 0x1a0);
  if (lVar11 != lVar3) {
    uVar15 = 0xffffffff;
    do {
      lVar10 = *(long *)(lVar11 + 8);
      if (*(uint *)(*(long *)(*(long *)(lVar10 + 0x10) + 8) + 0x488) == param_2) {
        if ((*(int *)(lVar10 + 0x30) != -1) &&
           (iVar5 = *(int *)(lVar10 + 0x30) / 5, *(int *)(lVar10 + 0x28) != iVar5)) {
          if ((ulong)(*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 4) <=
              (ulong)(long)iVar5) goto LAB_7101a395d8;
          pppplVar1 = (long ****)(*(long *)(param_1 + 0x1b0) + (long)iVar5 * 0x10);
          pppplVar20 = pppplVar1 + 1;
          FUN_7101a4e410((long)*pppplVar20,-1);
          if (0 < *(int *)(param_1 + 0x13c)) {
            uVar22 = 0;
            lVar16 = 8;
            lVar10 = 0x3f5;
            do {
              lVar17 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
              ppppppppplVar19 = *(long **********)(param_1 + 0x1c8);
              puVar7 = FUN_71032631a0(lVar17,0x11b1ccb807);
              ppppppppplVar8 = ppppppppplVar19;
              if ((((ulong)ppppppppplVar19 & 0xff00000000000000) == 0xc100000000000000 &&
                   ((ulong)ppppppppplVar19 & 0xffffffffff) != 0) &&
                 (((ulong)puVar7 & 0xff00000000000000) == 0xc100000000000000 &&
                  ((ulong)puVar7 & 0xffffffffff) != 0)) {
                if ((((ulong)puVar7 ^ (ulong)ppppppppplVar19) & 0xffffffffff) == 0) {
LAB_7101a39158:
                  ppppppppplVar8 = (long *********)FUN_7103263030(lVar17,(ulong)ppppppppplVar19);
                }
              }
              else if ((((ulong)puVar7 & 0xffffffffff) != 0 &&
                       ((ulong)puVar7 & 0xff00000000000000) == 0xc100000000000000) ==
                       (((ulong)ppppppppplVar19 & 0xff00000000000000) == 0xc100000000000000 &&
                       ((ulong)ppppppppplVar19 & 0xffffffffff) != 0)) goto LAB_7101a39158;
              FUN_7101a48700((long)*pppplVar20,(int)uVar22,(undefined1 *)ppppppppplVar19,
                             ppppppppplVar8,0,param_6,param_7,param_8);
              pplVar13 = (*pppplVar20)[0x4a];
              uVar14 = ((long)(*pppplVar20)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar14 < uVar22 || uVar14 - uVar22 == 0) {
LAB_7101a395c8:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              *(undefined1 *)((long)pplVar13 + lVar10) = 1;
              pplVar13 = (*pppplVar20)[0x4a];
              uVar14 = ((long)(*pppplVar20)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar14 < uVar22 || uVar14 - uVar22 == 0) goto LAB_7101a395c8;
              *(undefined1 *)((long)pplVar13 + lVar10 + -1) = 1;
              pplVar13 = (*pppplVar20)[0x76];
              if ((ulong)((long)(*pppplVar20)[0x77] - (long)pplVar13 >> 4) <= uVar22) {
LAB_7101a395d0:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              FUN_7103778760(*(long *)(*(long *)((long)pplVar13 + lVar16) + 0x20),0x710425ed91);
              pplVar13 = (*pppplVar20)[0x76];
              if ((ulong)((long)(*pppplVar20)[0x77] - (long)pplVar13 >> 4) <= uVar22)
              goto LAB_7101a395d0;
              lVar17 = *(long *)((long)pplVar13 + lVar16);
              FUN_7103778760(*(long *)(lVar17 + 0x20),0x710433a9c5);
              FUN_7103778760(*(long *)(lVar17 + 0xb0),0x710433a9c5);
              FUN_7103778760(*(long *)(lVar17 + 0xc0),0x710433a9c5);
              pplVar13 = (*pppplVar20)[0x4a];
              uVar14 = ((long)(*pppplVar20)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar14 < uVar22 || uVar14 - uVar22 == 0) goto LAB_7101a395c8;
              param_5 = (long ****)0x1;
              param_4 = (byte ****)(uVar22 & 0xffffffff);
              *(undefined4 *)((long)pplVar13 + lVar10 + -0xd) = 2;
              param_3 = pppplVar1;
              FUN_7101a35300(param_1,lVar11,pppplVar1,param_4,(long ****)0x1,param_6,param_7,param_8
                            );
              uVar22 = uVar22 + 1;
              lVar10 = lVar10 + 0x3f8;
              lVar16 = lVar16 + 0x10;
            } while ((long)uVar22 < (long)*(int *)(param_1 + 0x13c));
          }
        }
        uVar22 = (ulong)*(int *)(*(long *)(lVar11 + 8) + 0x28);
        if ((ulong)(*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 4) <= uVar22) {
LAB_7101a395d8:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar10 = *(long *)(param_1 + 0x1b0) + uVar22 * 0x10;
        FUN_7101a3a120(lVar10,0,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar9 = 0;
        FUN_7101a39c20(param_1,lVar10,(long ****)0x0,param_4,param_5,param_6,param_7,param_8);
        FUN_7101a3a120(lVar10,1,uVar9,param_4,param_5,param_6,param_7,param_8);
        uVar9 = 1;
        FUN_7101a39c20(param_1,lVar10,(long ****)0x1,param_4,param_5,param_6,param_7,param_8);
        FUN_7101a3a120(lVar10,2,uVar9,param_4,param_5,param_6,param_7,param_8);
        uVar9 = 2;
        FUN_7101a39c20(param_1,lVar10,(long ****)0x2,param_4,param_5,param_6,param_7,param_8);
        FUN_7101a3a120(lVar10,3,uVar9,param_4,param_5,param_6,param_7,param_8);
        uVar9 = 3;
        FUN_7101a39c20(param_1,lVar10,(long ****)0x3,param_4,param_5,param_6,param_7,param_8);
        FUN_7101a3a120(lVar10,4,uVar9,param_4,param_5,param_6,param_7,param_8);
        param_3 = (long ****)&DAT_00000004;
        FUN_7101a39c20(param_1,lVar10,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7101a395f0(param_1,lVar11,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar15 = *(uint *)(*(long *)(lVar11 + 8) + 0x28);
        plVar21 = (long *)(lVar10 + 8);
        lVar16 = *plVar21;
        lVar10 = *(long *)(lVar16 + 0x250);
        lVar17 = *(long *)(lVar16 + 600);
        if (lVar10 != lVar17) {
          do {
            *(undefined4 *)(lVar10 + 0xc) = 0;
            lVar10 = lVar10 + 0x3f8;
          } while (lVar17 != lVar10);
          lVar16 = *plVar21;
        }
        **(undefined8 **)(lVar16 + 0x310) = 0;
        *(undefined8 *)(*(long *)(lVar16 + 0x310) + 8) = 0;
        **(undefined8 **)(lVar16 + 800) = 0;
        *(undefined8 *)(*(long *)(lVar16 + 800) + 8) = 0;
        if (*(int *)(lVar16 + 0x26c) != 0) {
          *(undefined4 *)(lVar16 + 0x26c) = 0;
          *(undefined1 *)(lVar16 + 0x41b) = 1;
          if (0 < *(int *)(lVar16 + 0x150)) {
            lVar10 = *(long *)(*(long *)(lVar16 + 0x328) + 0x1b8);
            if (lVar10 != 0) {
              lVar16 = *(long *)(lVar16 + 0x328) + 0x1b8;
              lVar17 = lVar16;
              do {
                bVar6 = *(int *)(lVar10 + 0x20) < 0;
                if (!bVar6) {
                  lVar17 = lVar10;
                }
                lVar10 = *(long *)(lVar10 + (ulong)bVar6 * 8);
              } while (lVar10 != 0);
              if (((lVar17 != lVar16) && (*(int *)(lVar17 + 0x20) < 1)) &&
                 (plVar18 = *(long **)(lVar17 + 0x28), plVar18 != (long *)0x0)) {
                (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
                param_3 = (long ****)0x0;
                (**(code **)(*plVar18 + 0x388))(plVar18,0);
              }
            }
          }
        }
        FUN_7101a4e410(*plVar21,-1);
      }
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != lVar3);
    if (uVar15 != 0xffffffff) {
      if ((7 < uVar15) ||
         (*(undefined4 *)(*(long *)(DAT_710593b990 + 8) + (long)(int)uVar15 * 4) = 0xffffffff,
         9 < param_2)) goto LAB_7101a395e0;
      lVar11 = *(long *)(param_1 + 0x148);
      puVar2 = (undefined4 *)(lVar11 + (long)(int)param_2 * 4);
      *puVar2 = 0;
      puVar2[10] = 0;
      *(undefined1 *)(lVar11 + (int)param_2 + 0x50) = 0;
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar22 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1bb4830208,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8),
         (uVar22 & 1) != 0)) {
        FUN_71024076d0(local_a0,0x1bb4830208);
        if (((local_90 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_88 == DAT_7106dd53ac)) {
          piVar12 = (int *)(local_90 + 0x38);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar6) {
              *piVar12 = *piVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        local_88 = 0x87650000000000;
        local_78 = 0xffffffffffffffff;
        uStack_70 = 0;
        local_a0[0] = 0;
        local_68 = 0;
      }
      local_98 = &PTR_FUN_7104f73d50;
      local_90 = 0;
      local_80 = 0;
      goto LAB_7101a395a0;
    }
  }
  if (9 < param_2) {
LAB_7101a395e0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar11 = *(long *)(param_1 + 0x148);
  puVar2 = (undefined4 *)(lVar11 + (long)(int)param_2 * 4);
  *puVar2 = 0;
  puVar2[10] = 0;
  *(undefined1 *)(lVar11 + (int)param_2 + 0x50) = 0;
LAB_7101a395a0:
  FUN_7101a397a0(param_1);
  return;
}

