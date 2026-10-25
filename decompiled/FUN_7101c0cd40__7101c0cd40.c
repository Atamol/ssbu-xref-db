// addr:      7101c0cd40
// offset:    0x1c0cd40
// name:      FUN_7101c0cd40
// mangled:   
// signature: undefined __cdecl FUN_7101c0cd40(long * * * * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101c0cd40(long ****param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  char *pcVar16;
  long *********ppppppppplVar17;
  long ****pppplVar18;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  byte ****ppppbVar21;
  long ****pppplVar22;
  long ***ppplVar23;
  int *piVar24;
  long **pplVar25;
  code *pcVar26;
  undefined4 uVar27;
  long ***ppplVar28;
  ushort *puVar29;
  undefined8 uVar30;
  long **pplVar31;
  uint uVar32;
  long ***ppplVar33;
  long *plVar34;
  long lVar35;
  byte *pbVar36;
  long lVar37;
  long ***ppplVar38;
  long ***ppplVar39;
  ulong uVar40;
  int iVar41;
  int iVar42;
  long ***ppplVar43;
  int iVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  undefined4 local_640 [4];
  long local_630;
  int local_628;
  undefined4 local_600 [4];
  long local_5f0;
  int local_5e8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined2 local_5a8;
  undefined2 uStack_5a6;
  undefined4 uStack_5a4;
  undefined1 local_5a0;
  undefined1 uStack_59f;
  undefined2 uStack_59e;
  undefined2 uStack_59c;
  undefined2 local_59a;
  undefined8 local_598;
  long lStack_590;
  undefined8 local_588;
  undefined8 local_570;
  undefined4 local_568;
  ushort local_564 [2];
  long alStack_560 [4];
  long *local_540;
  long alStack_530 [4];
  long *local_510;
  long alStack_500 [4];
  long *local_4e0;
  long alStack_4d0 [4];
  long *local_4b0;
  undefined4 local_4a0;
  long ***local_164;
  undefined4 local_15c;
  uint local_158 [14];
  long ***local_120;
  long ***local_118;
  long ***local_110;
  char local_108;
  undefined8 local_104;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  long ***local_b8;
  long ***local_b0;
  long ***local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if (*(int *)((long)param_1 + 0x144) == 0) {
    FUN_71037760f0((long)**param_1[0xd5],1);
    (*(code *)(*param_1[0xd7])[0xc])(param_1[0xd7],1);
    iVar12 = *(int *)((long)param_1 + 0x714);
  }
  else {
    iVar12 = *(int *)((long)param_1 + 0x714);
  }
  if (iVar12 != 0) {
    return;
  }
  if (*(char *)((long)param_1[0xd7] + 0x316) != '\0') {
    ppplVar23 = param_1[200];
    ppplVar28 = param_1[0xc9];
    if (ppplVar28 != ppplVar23) {
      cVar1 = *(char *)ppplVar23;
      ppplVar33 = ppplVar23;
      while (cVar1 != '\x1a') {
        ppplVar33 = (long ***)((long)ppplVar33 + 1);
        if (ppplVar28 == ppplVar33) goto LAB_7101c0ce14;
        cVar1 = *(char *)ppplVar33;
      }
      if ((ppplVar33 != ppplVar28) && (iVar12 = (int)ppplVar33 - (int)ppplVar23, iVar12 != -1)) {
        param_3 = (undefined **)0x0;
        FUN_7103783da0((long *)(param_1 + 0xd7),iVar12,0,param_4,param_5,param_6,param_7,param_8);
        goto LAB_7101c0ce4c;
      }
    }
LAB_7101c0ce14:
    pplVar25 = param_1[0xd4][0x10];
    if (*(char *)((long)pplVar25 + 0xc9) == '\0') {
      iVar12 = 4;
    }
    else {
      iVar12 = 0;
    }
    param_3 = (undefined **)0x0;
    FUN_7103771be0((long *)(pplVar25 + 0x44c),iVar12,0);
    *(undefined4 *)(pplVar25 + 0x44e) = *(undefined4 *)((long)pplVar25[0x44c] + 0x25c);
  }
LAB_7101c0ce4c:
  lVar14 = local_5b0;
  if (*(int *)(param_1[0xd4][0x10] + 0x44e) == 0) {
    if (*(char *)((long)param_1 + 0x732) == '\0') {
      local_5c0 = *(byte ****)((long)param_1 + 0x15c);
      uVar27 = *(undefined4 *)((long)param_1 + 0x164);
      uVar40 = 0;
      while( true ) {
        cVar1 = *(char *)((long)param_1 + uVar40 + 0x170);
        if (cVar1 == '\0') break;
        *(char *)((long)&local_5b0 + uVar40 + 4) = cVar1;
        if (0x3e < (int)uVar40 + 1U) {
          uVar40 = (ulong)((int)uVar40 + 1);
          break;
        }
        cVar1 = *(char *)((long)param_1 + uVar40 + 0x171);
        if (cVar1 == '\0') {
          uVar40 = uVar40 + 1;
          break;
        }
        *(char *)((long)&local_5b0 + uVar40 + 5) = cVar1;
        uVar40 = uVar40 + 2;
      }
      uVar32 = 0x811c9dc5;
      *(undefined1 *)((long)&local_5b0 + (uVar40 & 0xffffffff) + 4) = 0;
      uVar7 = (uint)local_570;
      uVar11 = local_5b0._4_4_;
      local_5b0 = CONCAT44(local_5b0._4_4_,(int)uVar40);
      lVar35 = local_5b0;
      local_5b0._4_1_ = SUB81(lVar14,4);
      uVar11 = uVar11 & 0xff;
      uVar9 = uVar32;
      if (local_5b0._4_1_ != '\0') {
        pbVar36 = (byte *)((long)&local_5b0 + 5);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar11 != 0);
      }
      uVar40 = 0;
      local_5b8 = (undefined **)CONCAT44(uVar9,uVar27);
      local_570 = (long *)(ulong)(uint)local_570;
      while (uVar4 = *(ushort *)((long)param_1 + uVar40 * 2 + 0x1b8), uVar4 != 0) {
        lVar14 = uVar40 * 2;
        local_564[uVar40] = uVar4;
        if (0x1fe < (int)uVar40 + 1U) {
          uVar40 = (ulong)((int)uVar40 + 1);
          break;
        }
        sVar5 = *(short *)((long)param_1 + uVar40 * 2 + 0x1ba);
        if (sVar5 == 0) {
          uVar40 = uVar40 + 1;
          break;
        }
        uVar40 = uVar40 + 2;
        *(short *)((long)alStack_560 + lVar14 + -2) = sVar5;
      }
      local_564[uVar40 & 0xffffffff] = 0;
      local_568 = (int)uVar40;
      uVar9 = (uint)local_564[0];
      if (local_564[0] != 0) {
        puVar29 = local_564;
        do {
          puVar29 = puVar29 + 1;
          uVar32 = uVar32 * 0x89 ^ uVar9;
          uVar9 = (uint)*puVar29;
        } while (uVar9 != 0);
      }
      local_570 = (long *)CONCAT44(uVar32,uVar7);
      local_15c = *(undefined4 *)(param_1 + 0xb8);
      local_164 = param_1[0xb7];
      local_158[0] = 0;
      local_5b0 = lVar35;
      FUN_7101696040(local_158,(ushort *)((long)param_1 + 0x5cc));
      local_120 = param_1[0xcb];
      local_118 = param_1[0xcc];
      local_110 = param_1[0xcd];
      cVar1 = *(char *)(param_1 + 0xce);
      iVar12 = *(int *)((long)param_1 + 0x67c);
      uVar30 = *(undefined8 *)((long)param_1 + 0x674);
      ppplVar23 = param_1[0xd0];
      ppplVar28 = param_1[0xd1];
      local_b8 = param_1[0xcb];
      local_b0 = param_1[0xcc];
      local_a8 = param_1[0xcd];
      local_104._0_4_ = (int)uVar30;
      iVar13 = (int)local_104;
      local_104._4_4_ = (int)((ulong)uVar30 >> 0x20);
      iVar10 = local_104._4_4_;
      local_f8._0_4_ = (int)ppplVar23;
      iVar41 = (int)local_f8;
      local_f8._4_4_ = (int)((ulong)ppplVar23 >> 0x20);
      iVar42 = local_f8._4_4_;
      local_f0._0_4_ = (int)ppplVar28;
      iVar44 = (int)local_f0;
      local_f0._4_4_ = (int)((ulong)ppplVar28 >> 0x20);
      iVar6 = local_f0._4_4_;
      local_108 = cVar1;
      local_104 = uVar30;
      local_fc = iVar12;
      local_f8 = ppplVar23;
      local_f0 = ppplVar28;
      bVar8 = FUN_71017abe20((char *)((long)param_1 + 0x5fc),(char *)&local_b8);
      if ((((((!bVar8) || (*(char *)((long)param_1 + 0x614) != cVar1)) ||
            ((*(int *)(param_1 + 0xc3) != iVar13 ||
             ((*(int *)((long)param_1 + 0x61c) != iVar10 || (*(int *)(param_1 + 0xc4) != iVar12)))))
            ) || (*(int *)((long)param_1 + 0x624) != iVar41)) ||
          (((((*(int *)(param_1 + 0xc5) != iVar42 || (*(int *)((long)param_1 + 0x62c) != iVar44)) ||
             (*(int *)(param_1 + 0xc6) != iVar6)) ||
            ((uVar9 = (uint)param_1[0xd2], (uVar9 & 1) != (uint)*(byte *)((long)param_1 + 0x634) ||
             ((uVar9 >> 8 & 1) != (uint)*(byte *)((long)param_1 + 0x635))))) ||
           (((uVar9 >> 0x10 & 1) != (uint)*(byte *)((long)param_1 + 0x636) ||
            ((uVar9 = *(uint *)(param_1 + 0xd3),
             (uVar9 & 1) != (uint)*(byte *)((long)param_1 + 0x63c) ||
             ((uint)*(byte *)((long)param_1 + 0x63d) != (uVar9 >> 8 & 0xff))))))))) ||
         ((uint)*(byte *)((long)param_1 + 0x63e) != (uVar9 >> 0x10 & 0xff))) goto LAB_7101c0d4d8;
      FUN_7101c10b80((long)param_1,2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71053050f0 != 0x2030300) {
        if (DAT_71053050f4 != '\0') {
          lVar35 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
          lVar14 = *(long *)(lVar35 + 0x9ff8);
          if ((lVar14 != 0) &&
             (uVar9 = FUN_71016f6340(lVar35 + 0xa010,lVar14), (~uVar9 & 0xff) != 0)) {
            uVar9 = *(uint *)((long)param_1 + 0x13c);
            if (0x12 < uVar9) goto LAB_7101c0e800;
            uVar27 = 7;
            goto LAB_7101c0d4ec;
          }
        }
        *(undefined4 *)((long)param_1 + 0x714) = 2;
        goto LAB_7101c0d4fc;
      }
LAB_7101c0d4d8:
      uVar9 = *(uint *)((long)param_1 + 0x13c);
      if (0x12 < uVar9) goto LAB_7101c0e800;
      uVar27 = 6;
LAB_7101c0d4ec:
      *(undefined4 *)((long)param_1 + (long)(int)uVar9 * 4 + 0xf0) = uVar27;
    }
    if (*(int *)((long)param_1 + 0x714) != 2) {
      return;
    }
LAB_7101c0d4fc:
    lVar14 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 3) < 4) {
      uVar40 = 0;
      cVar1 = *(char *)(lVar14 + 0x191);
    }
    else {
      uVar40 = *(ulong *)(*(long *)(lVar14 + 0x40) + 0x18);
      cVar1 = *(char *)(lVar14 + 0x191);
    }
    if ((((cVar1 == '\0') &&
         (uVar15 = FUN_7103313f20(lVar14,uVar40,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                  param_7,param_8), (uVar15 & 1) != 0)) &&
        (FUN_71024076d0(local_600,uVar40), local_5f0 != 0)) &&
       ((DAT_7106dd53a8 == '\x01' && (local_5e8 == DAT_7106dd53ac)))) {
      piVar24 = (int *)(local_5f0 + 0x38);
      do {
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar8) {
          *piVar24 = *piVar24 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    return;
  }
  if (*(int *)(param_1[0xd4][0x10] + 0x44e) - 1U < 2) {
    FUN_7101c10b80((long)param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar14 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 3) < 3) {
      uVar40 = 0;
      cVar1 = *(char *)(lVar14 + 0x191);
    }
    else {
      uVar40 = *(ulong *)(*(long *)(lVar14 + 0x40) + 0x10);
      cVar1 = *(char *)(lVar14 + 0x191);
    }
    if (cVar1 != '\0') {
      return;
    }
    uVar15 = FUN_7103313f20(lVar14,uVar40,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                            param_8);
    if ((uVar15 & 1) == 0) {
      return;
    }
    FUN_71024076d0(local_640,uVar40);
    if (local_630 == 0) {
      return;
    }
    if (DAT_7106dd53a8 != '\x01') {
      return;
    }
    if (local_628 != DAT_7106dd53ac) {
      return;
    }
    piVar24 = (int *)(local_630 + 0x38);
    do {
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar8) {
        *piVar24 = *piVar24 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return;
  }
  ppplVar23 = param_1[0xd7];
  iVar12 = *(int *)((long)ppplVar23 + 0x2b4);
  if (iVar12 != -1) {
    if ((ulong)((long)param_1[0xc9] - (long)param_1[200]) <= (ulong)(long)iVar12) {
LAB_7101c0e804:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    bVar3 = *(byte *)((long)param_1[200] + (long)iVar12);
    if (*(int *)(param_1 + 0xd8) != iVar12) {
      *(int *)(param_1 + 0xd8) = iVar12;
      FUN_7101c10630((long)param_1,(uint)bVar3,param_3,param_4,param_5,param_6,param_7,param_8);
      *(undefined1 *)((long)param_1 + 0x6c4) = 1;
      FUN_7101c0fbb0((long)param_1,1,(long ****)param_3,param_4,param_5,(ulong)param_6,param_7,
                     param_8);
    }
    uVar9 = (uint)bVar3;
    if (1 < uVar9 - 0x19) {
      uVar9 = (uint)bVar3;
      if (uVar9 == 0xc) {
        lVar14 = *(long *)(DAT_710532f8d0 + 8);
        if ((ulong)(*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 3) < 3) {
          uVar40 = 0;
          if (*(char *)(lVar14 + 0x191) == '\0') goto LAB_7101c0d990;
LAB_7101c0da00:
          local_5a8 = 0;
          uStack_5a6 = 0;
          uStack_5a4 = 0x876500;
          local_598 = 0xffffffffffffffff;
          lStack_590 = 0;
          local_5c0 = (byte ***)((ulong)local_5c0 & 0xffffffff00000000);
          local_588 = 0;
        }
        else {
          uVar40 = *(ulong *)(*(long *)(lVar14 + 0x40) + 0x10);
          if (*(char *)(lVar14 + 0x191) != '\0') goto LAB_7101c0da00;
LAB_7101c0d990:
          param_3 = (undefined **)&DAT_00000004;
          uVar15 = FUN_7103313f20(lVar14,uVar40,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                  param_7,param_8);
          if ((uVar15 & 1) == 0) goto LAB_7101c0da00;
          FUN_71024076d0((undefined4 *)&local_5c0,uVar40);
          if (((local_5b0 != 0) && (DAT_7106dd53a8 == '\x01')) &&
             (CONCAT22(uStack_5a6,local_5a8) == DAT_7106dd53ac)) {
            piVar24 = (int *)(local_5b0 + 0x38);
            do {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
              if (bVar8) {
                *piVar24 = *piVar24 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
        }
        iVar12 = 3;
      }
      else {
        if (uVar9 != 0xd) {
          if (uVar9 - 0x1b < 4) {
            if (*(char *)((long)param_1 + 0x732) != '\0') {
              return;
            }
          }
          else {
            if (*(char *)((long)param_1 + 0x732) != '\0') {
              return;
            }
            if (*(int *)((long)param_1 + 0x164) - 1U < 2) {
              return;
            }
            if (((DAT_71053144d8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
              FUN_7101764000();
              FUN_71000001c0();
              __cxa_guard_release(&DAT_71053144d8);
            }
            if (DAT_71053050f0 == 0x2030300) {
              if (uVar9 - 7 < 2) {
                return;
              }
            }
            else if (((DAT_71053050f0 == 0x2030200) && (bVar3 < 0x12)) &&
                    ((1 << (ulong)(bVar3 & 0x1f) & 0x30544U) != 0)) {
              return;
            }
          }
          ppplVar23 = param_1[0xde];
          if (0 < *(int *)((long)ppplVar23 + 4)) {
            uVar9 = 0;
            do {
              if (((DAT_71053144d8 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
                FUN_7101764000();
                FUN_71000001c0();
                __cxa_guard_release(&DAT_71053144d8);
              }
              uVar40 = FUN_7101c08ff0(DAT_71053050f0,*(byte *)((long)ppplVar23 + 1),
                                      *(byte *)((long)ppplVar23 + 3),
                                      (uint)*(byte *)((long)ppplVar23 + 2),*(byte *)ppplVar23,uVar9)
              ;
              if ((uVar40 & 1) != 0) {
                uVar32 = *(uint *)((long)ppplVar23 + 4);
                goto LAB_7101c0dcd4;
              }
              uVar32 = *(uint *)((long)ppplVar23 + 4);
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar32);
            uVar9 = uVar32 - 1;
LAB_7101c0dcd4:
            do {
              uVar32 = uVar32 - 1;
              if (((DAT_71053144d8 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
                FUN_7101764000();
                FUN_71000001c0();
                __cxa_guard_release(&DAT_71053144d8);
              }
              param_6 = (byte ****)(ulong)uVar32;
              param_5 = (long ****)(ulong)*(byte *)ppplVar23;
              uVar40 = FUN_7101c08ff0(DAT_71053050f0,*(byte *)((long)ppplVar23 + 1),
                                      *(byte *)((long)ppplVar23 + 3),
                                      (uint)*(byte *)((long)ppplVar23 + 2),*(byte *)ppplVar23,uVar32
                                     );
              if ((uVar40 & 1) != 0) goto LAB_7101c0dd44;
            } while ((int)uVar32 <= *(int *)((long)ppplVar23 + 4));
            uVar32 = 0;
LAB_7101c0dd44:
            if (uVar9 == uVar32) {
              return;
            }
          }
          plVar34 = **param_1[0xd6];
          uVar27 = *(undefined4 *)((long)param_1 + 0x6e4);
          ppplVar23 = param_1[0x2a];
          *(undefined4 *)(plVar34[0xc0] + 0x494) = uVar27;
          lVar14 = plVar34[0xc1];
          lVar35 = plVar34[0xc2];
          if (lVar14 != lVar35) {
            uVar40 = (lVar35 + -0x10) - lVar14;
            uVar9 = ((uint)(uVar40 >> 4) & 0xfffffff) + 1;
            if ((uVar9 & 3) != 0) {
              lVar37 = -((ulong)uVar9 & 3);
              do {
                plVar34 = (long *)(lVar14 + 8);
                lVar14 = lVar14 + 0x10;
                lVar37 = lVar37 + 1;
                *(undefined4 *)(*plVar34 + 0x494) = uVar27;
              } while (lVar37 != 0);
            }
            if (0x2f < uVar40) {
              do {
                *(undefined4 *)(*(long *)(lVar14 + 8) + 0x494) = uVar27;
                *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x494) = uVar27;
                *(undefined4 *)(*(long *)(lVar14 + 0x28) + 0x494) = uVar27;
                plVar34 = (long *)(lVar14 + 0x38);
                lVar14 = lVar14 + 0x40;
                *(undefined4 *)(*plVar34 + 0x494) = uVar27;
              } while (lVar35 != lVar14);
            }
          }
          ppplVar43 = param_1[0xd6];
          pplVar25 = *ppplVar43;
          ppplVar33 = param_1[0xde];
          *(undefined4 *)((*pplVar25)[0xc0] + 0x10) = 0x20;
          *(undefined4 *)((**ppplVar43)[0xc0] + 0x14) = 0x40;
          *(undefined4 *)((**ppplVar43)[0xc0] + 0x18) = 0x800008;
          *(undefined4 *)((**ppplVar43)[0xc0] + 0x1c) = 0x200002;
          *(undefined4 *)((**ppplVar43)[0xc0] + 0x20) = 0x100001;
          ppplVar28 = ppplVar33 + 0x2f;
          *(undefined4 *)((**ppplVar43)[0xc0] + 0x24) = 0x400004;
          if (ppplVar28 != (long ***)(pplVar25 + 1)) {
            *ppplVar33[0x30] = (long *)*pplVar25[2];
            ppplVar33[0x30][1] = (long *)pplVar25[2][1];
            pplVar31 = (long **)pplVar25[2];
            pplVar25 = ppplVar33[0x30];
            if (pplVar25 != pplVar31) {
              *pplVar25[3] = *pplVar31[3];
              pplVar25[3][1] = pplVar31[3][1];
              pplVar25[3][2] = pplVar31[3][2];
              pplVar25[3][3] = pplVar31[3][3];
            }
          }
          FUN_7101c16450((byte *)ppplVar33,(byte *)(param_1 + 0xcb),(long)(param_1 + 0xd2),bVar3);
          if (ppplVar33[0x30][1] != (long *)0x0) {
            FUN_7103778300(0x3f800000,(long)ppplVar33[0x30],(long)ppplVar33 + 0x14);
            if (*(int *)(ppplVar33 + 1) < 6) {
              pcVar16 = "window_size_m";
            }
            else {
              pcVar16 = "window_size_l";
            }
            FUN_7103778300(0x3f800000,(long)ppplVar33[0x30],(long)pcVar16);
            plVar34 = **ppplVar43;
            (**(code **)(*(long *)plVar34[0x8b] + 0x58))(*(float *)(plVar34 + 200) * 0.0);
            puVar46 = (undefined8 *)plVar34[0x8d];
            for (puVar45 = (undefined8 *)plVar34[0x8c]; puVar45 != puVar46; puVar45 = puVar45 + 1) {
              plVar34 = (long *)*puVar45;
              uVar40 = (**(code **)(*plVar34 + 0x40))(plVar34);
              if ((uVar40 & 1) != 0) {
                (**(code **)(*plVar34 + 0x20))(plVar34);
              }
            }
            iVar12 = *(int *)(ppplVar33 + 0x14);
            *(undefined4 *)(ppplVar33 + 0x32) = 0xffffffff;
            if (iVar12 != 0) {
              uVar9 = *(uint *)(ppplVar33 + 0x15);
              iVar13 = *(int *)(ppplVar33 + 1);
              uVar11 = iVar13 - 1;
              uVar32 = uVar9;
              if (iVar13 <= (int)uVar9) {
                uVar32 = uVar11;
              }
              if (iVar12 == 1) {
                if (uVar32 != 0) goto LAB_7101c0e15c;
              }
              else if (iVar12 == 2) {
                if ((uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) != uVar32) {
LAB_7101c0e15c:
                  ppplVar39 = (long ***)ppplVar33[0x36];
                  if (ppplVar39 != (long ***)0x0) {
                    bVar2 = *(byte *)ppplVar33;
                    ppplVar38 = ppplVar33 + 0x36;
                    do {
                      bVar8 = *(byte *)((long)ppplVar39 + 0x1c) < bVar2;
                      if (!bVar8) {
                        ppplVar38 = ppplVar39;
                      }
                      ppplVar39 = (long ***)ppplVar39[bVar8];
                    } while (ppplVar39 != (long ***)0x0);
                    if ((ppplVar38 != ppplVar33 + 0x36) &&
                       (*(byte *)((long)ppplVar38 + 0x1c) <= bVar2)) {
                      uVar9 = *(uint *)(ppplVar38 + 4);
                      goto LAB_7101c0e230;
                    }
                  }
                  if ((int)uVar9 < iVar13) {
                    if (iVar12 == 1) {
                      uVar9 = 0;
                    }
                    else if (iVar12 == 2) {
                      uVar9 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
                    }
                    else {
                      uVar9 = 0xffffffff;
                    }
                  }
                }
              }
              else if (uVar32 != 0xffffffff) goto LAB_7101c0e15c;
LAB_7101c0e230:
              *(uint *)(ppplVar33 + 0x34) = uVar9;
            }
            local_5c0 = (byte ***)0x0;
            uVar9 = local_5b0._4_4_ >> 0x18;
            local_5b0 = CONCAT17((char)uVar9,0x1000100000001);
            local_5b8 = (undefined **)0x101;
            local_5a8 = 0;
            uStack_5a6 = 0;
            uStack_5a4 = 0x41f00000;
            local_5a0 = 0;
            uStack_59f = 0;
            uStack_59e = 0;
            local_570 = (long *)0x0;
            local_540 = (long *)0x0;
            local_510 = (long *)0x0;
            local_4e0 = (long *)0x0;
            local_4b0 = (long *)0x0;
            local_4a0 = 0;
            FUN_710337df20((long)&local_5c0);
            ppplVar39 = ppplVar33 + 0x31;
            ppppbVar20 = (byte ****)&local_5c0;
            FUN_7103770b30((long *)ppplVar39,ppplVar28,(long ****)"selector_0",ppppbVar20,param_5,
                           param_6,param_7,param_8);
            iVar12 = *(int *)(ppplVar33 + 0x14);
            if (iVar12 == 2) {
              iVar12 = *(int *)(ppplVar33 + 1);
              if (0 < iVar12) {
                uVar9 = 0;
                do {
                  local_b0 = (long ***)((ulong)local_b0 & 0xffffffffffffff00);
                  local_b8 = (long ***)0x0;
                  FUN_710062dc20((uint *)&local_b8,"set_parts_btn_%02d");
                  FUN_71037717d0(ppplVar39,uVar9,(char *)&local_b0,ppppbVar20,param_5,param_6,
                                 param_7,param_8);
                  if (*(int *)(ppplVar33 + 0x14) == 1) {
                    if (uVar9 != 0) goto LAB_7101c0e3b8;
LAB_7101c0e398:
                    ppppbVar20 = (byte ****)0x2;
                  }
                  else {
                    if ((*(int *)(ppplVar33 + 0x14) == 2) &&
                       (uVar9 == (*(int *)(ppplVar33 + 1) - 1U &
                                 ((int)(*(int *)(ppplVar33 + 1) - 1U) >> 0x1f ^ 0xffffffffU))))
                    goto LAB_7101c0e398;
LAB_7101c0e3b8:
                    ppppbVar20 = (byte ****)0x0;
                  }
                  FUN_7101c16740((byte *)ppplVar33,ppplVar43,uVar9,ppppbVar20,param_5,(ulong)param_6
                                 ,param_7,param_8);
                  iVar12 = *(int *)(ppplVar33 + 1);
                  uVar9 = uVar9 + 1;
                } while ((int)uVar9 < iVar12);
              }
LAB_7101c0e3dc:
              iVar13 = *(int *)(ppplVar33 + 0x15);
              if (iVar12 <= *(int *)(ppplVar33 + 0x15)) {
                iVar13 = iVar12 + -1;
              }
LAB_7101c0e444:
              ppppppppplVar19 = (long *********)0x0;
              FUN_7103771a80((long *)ppplVar39,iVar13,0);
              (*(code *)(**ppplVar39)[0xe])(*ppplVar39,0);
              (*(code *)(**ppplVar39)[0xc])(*ppplVar39,0);
              FUN_7103776640(&local_c8,(long)ppplVar28,(byte ****)"set_parts_caption",
                             ppppppppplVar19,ppppbVar20,param_5,param_6,param_7,param_8);
              FUN_7103776910(&local_d8,(long)&local_c8,(long ****)"set_pic_icon",ppppppppplVar19,
                             ppppbVar20,param_5,param_6,param_7,param_8);
              uVar40 = FUN_7101c0c470(bVar3);
              if (((uVar40 & 0xff00000000000000) == 0x7100000000000000) &&
                 ((uVar40 & 0xffffffffff) != 0)) {
                plVar34 = FUN_710323f760((long *)ppplVar23,uVar40,(long ****)ppppppppplVar19,
                                         ppppbVar20,param_5,param_6,param_7,param_8);
                FUN_7103778b80(local_d0,(long)plVar34,ppppppppplVar19,ppppbVar20,param_5,param_6,
                               param_7,param_8);
              }
              FUN_7103776910(&local_e8,(long)&local_c8,(long ****)"set_txt_help",ppppppppplVar19,
                             ppppbVar20,param_5,param_6,param_7,param_8);
              FUN_7103396910((uint *)&local_b8,bVar3);
              FUN_710377a120((long)&local_e8,(char *)&local_b0,ppppppppplVar19,ppppbVar20,param_5,
                             param_6,param_7,param_8);
              uVar32 = *(int *)(ppplVar33 + 1) - 1;
              uVar9 = *(uint *)(ppplVar33 + 0x15);
              if (*(int *)(ppplVar33 + 1) <= (int)*(uint *)(ppplVar33 + 0x15)) {
                uVar9 = uVar32;
              }
              if (*(int *)(ppplVar33 + 0x14) == 1) {
                if (uVar9 == 0) goto LAB_7101c0e538;
              }
              else if (*(int *)(ppplVar33 + 0x14) == 2) {
                if ((uVar32 & ((int)uVar32 >> 0x1f ^ 0xffffffffU)) == uVar9) {
LAB_7101c0e538:
                  uVar9 = *(uint *)(ppplVar33 + 0x34);
                }
              }
              else if (uVar9 == 0xffffffff) goto LAB_7101c0e538;
              FUN_7101c15860((undefined1 *)ppplVar33,uVar9);
              uVar40 = local_e0;
              local_e8 = &PTR_FUN_710523d9a8;
              local_e0 = 0;
              if (uVar40 != 0) {
                FUN_710392eb40(uVar40);
              }
              uVar40 = local_d0;
              local_d8 = &PTR_FUN_710523d9a8;
              local_d0 = 0;
              if (uVar40 != 0) {
                FUN_710392eb40(uVar40);
              }
              uVar40 = local_c0;
              local_c8 = &PTR_FUN_710523d988;
              local_c0 = 0;
              if (uVar40 != 0) {
                uVar15 = *(ulong *)(uVar40 + 0x18);
                *(undefined ***)(uVar40 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)(uVar40 + 0x18) = 0;
                if (uVar15 != 0) {
                  FUN_710392eb40(uVar15);
                }
                FUN_710392eb40(uVar40);
              }
            }
            else {
              if (iVar12 == 1) {
                local_b0 = (long ***)((ulong)local_b0 & 0xffffffffffffff00);
                local_b8 = (long ***)0x0;
                FUN_710062dc20((uint *)&local_b8,"set_parts_btn_%02d");
                FUN_71037717d0(ppplVar39,0,(char *)&local_b0,ppppbVar20,param_5,param_6,param_7,
                               param_8);
                ppppbVar20 = (byte ****)0x1;
                FUN_7101c16740((byte *)ppplVar33,ppplVar43,0,(byte ****)0x1,param_5,(ulong)param_6,
                               param_7,param_8);
                iVar13 = 0;
                goto LAB_7101c0e444;
              }
              if (iVar12 == 0) {
                iVar12 = *(int *)(ppplVar33 + 1);
                if (0 < iVar12) {
                  uVar9 = 0;
                  do {
                    local_b0 = (long ***)((ulong)local_b0 & 0xffffffffffffff00);
                    local_b8 = (long ***)0x0;
                    FUN_710062dc20((uint *)&local_b8,"set_parts_btn_%02d");
                    FUN_71037717d0(ppplVar39,uVar9,(char *)&local_b0,ppppbVar20,param_5,param_6,
                                   param_7,param_8);
                    ppppbVar20 = (byte ****)0x0;
                    FUN_7101c16740((byte *)ppplVar33,ppplVar43,uVar9,(byte ****)0x0,param_5,
                                   (ulong)param_6,param_7,param_8);
                    iVar12 = *(int *)(ppplVar33 + 1);
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < iVar12);
                }
                goto LAB_7101c0e3dc;
              }
            }
            if (alStack_4d0 == local_4b0) {
              pcVar26 = *(code **)(*local_4b0 + 0x20);
LAB_7101c0e5c4:
              (*pcVar26)();
            }
            else if (local_4b0 != (long *)0x0) {
              pcVar26 = *(code **)(*local_4b0 + 0x28);
              goto LAB_7101c0e5c4;
            }
            if (alStack_500 == local_4e0) {
              pcVar26 = *(code **)(*local_4e0 + 0x20);
LAB_7101c0e5f4:
              (*pcVar26)();
            }
            else if (local_4e0 != (long *)0x0) {
              pcVar26 = *(code **)(*local_4e0 + 0x28);
              goto LAB_7101c0e5f4;
            }
            if (alStack_530 == local_510) {
              pcVar26 = *(code **)(*local_510 + 0x20);
LAB_7101c0e624:
              (*pcVar26)();
            }
            else if (local_510 != (long *)0x0) {
              pcVar26 = *(code **)(*local_510 + 0x28);
              goto LAB_7101c0e624;
            }
            if (alStack_560 == local_540) {
              pcVar26 = *(code **)(*local_540 + 0x20);
LAB_7101c0e654:
              (*pcVar26)();
            }
            else if (local_540 != (long *)0x0) {
              pcVar26 = *(code **)(*local_540 + 0x28);
              goto LAB_7101c0e654;
            }
            if (&lStack_590 == local_570) {
              pcVar26 = *(code **)(*local_570 + 0x20);
            }
            else {
              if (local_570 == (long *)0x0) goto LAB_7101c0e688;
              pcVar26 = *(code **)(*local_570 + 0x28);
            }
            (*pcVar26)();
          }
LAB_7101c0e688:
          if (*(uint *)((long)param_1 + 0x13c) < 0x13) {
            lVar14 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x13c) * 4;
            uVar27 = 3;
            goto LAB_7101c0da54;
          }
          goto LAB_7101c0e800;
        }
        lVar14 = *(long *)(DAT_710532f8d0 + 8);
        if ((ulong)(*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 3) < 3) {
          uVar40 = 0;
          if (*(char *)(lVar14 + 0x191) == '\0') goto LAB_7101c0d8d8;
LAB_7101c0d948:
          local_5a8 = 0;
          uStack_5a6 = 0;
          uStack_5a4 = 0x876500;
          local_598 = 0xffffffffffffffff;
          lStack_590 = 0;
          local_5c0 = (byte ***)((ulong)local_5c0 & 0xffffffff00000000);
          local_588 = 0;
        }
        else {
          uVar40 = *(ulong *)(*(long *)(lVar14 + 0x40) + 0x10);
          if (*(char *)(lVar14 + 0x191) != '\0') goto LAB_7101c0d948;
LAB_7101c0d8d8:
          param_3 = (undefined **)&DAT_00000004;
          uVar15 = FUN_7103313f20(lVar14,uVar40,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                  param_7,param_8);
          if ((uVar15 & 1) == 0) goto LAB_7101c0d948;
          FUN_71024076d0((undefined4 *)&local_5c0,uVar40);
          if (((local_5b0 != 0) && (DAT_7106dd53a8 == '\x01')) &&
             (CONCAT22(uStack_5a6,local_5a8) == DAT_7106dd53ac)) {
            piVar24 = (int *)(local_5b0 + 0x38);
            do {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
              if (bVar8) {
                *piVar24 = *piVar24 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
        }
        iVar12 = 4;
      }
      local_5a0 = 0;
      local_5b0 = 0;
      local_5b8 = &PTR_FUN_7104f73d50;
      FUN_7101c10b80((long)param_1,iVar12,param_3,param_4,param_5,param_6,param_7,param_8);
      if (*(uint *)((long)param_1 + 0x13c) < 0x13) {
        lVar14 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x13c) * 4;
        uVar27 = 9;
        goto LAB_7101c0da54;
      }
      goto LAB_7101c0e800;
    }
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = (undefined **)&DAT_00000004;
      uVar40 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x106a2070e6,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      if ((uVar40 & 1) == 0) goto LAB_7101c0d1a4;
      FUN_71024076d0((undefined4 *)&local_b8,0x106a2070e6);
      local_b0 = (long ***)&PTR_FUN_7104f73d50;
      if (((local_a8 != (long ***)0x0) && (DAT_7106dd53a8 == '\x01')) &&
         ((int)local_a0 == DAT_7106dd53ac)) {
        local_a8 = local_a8 + 7;
        do {
          cVar1 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(local_a8,0x10);
          if (bVar8) {
            *(int *)local_a8 = *(int *)local_a8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    else {
LAB_7101c0d1a4:
      local_a0 = 0x87650000000000;
      local_90 = 0xffffffffffffffff;
      uStack_88 = 0;
      local_b8 = (long ***)((ulong)local_b8 & 0xffffffff00000000);
      local_80 = 0;
      local_b0 = (long ***)&PTR_FUN_7104f73d50;
    }
    local_b0 = (long ***)&PTR_FUN_7104f73d50;
    local_a8 = (long ***)0x0;
    local_98 = 0;
    *(bool *)((long)param_1 + 0x6c5) = uVar9 == 0x19;
    if (uVar9 == 0x19) {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      local_5c0._4_4_ = 0x1f;
      local_5b0 = 0x65685f746964655f;
      local_5a8 = 0x706c;
      uStack_5a6 = 0x645f;
      uStack_5a4 = 0x69617465;
      local_5a0 = 0x6c;
      uStack_59f = 0x5f;
      uStack_59e = 0x6c63;
      uStack_59c = 0x736f;
      local_59a = 0x65;
      uVar9 = 0x811c9dc5;
      uVar32 = 0x6d;
      lVar14 = 9;
      do {
        uVar9 = uVar9 * 0x89 ^ uVar32;
        uVar32 = (uint)*(byte *)((long)&local_5c0 + lVar14);
        lVar14 = lVar14 + 1;
      } while (uVar32 != 0);
    }
    else {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      local_5c0._4_4_ = 0x1e;
      local_5b0 = 0x65685f746964655f;
      local_5a8 = 0x706c;
      uStack_5a6 = 0x645f;
      uStack_5a4 = 0x69617465;
      local_5a0 = 0x6c;
      uStack_59f = 0x5f;
      uVar9 = 0x811c9dc5;
      uStack_59e = 0x706f;
      uStack_59c = 0x6e65;
      uVar32 = 0x6d;
      local_59a = (ushort)local_59a._1_1_ << 8;
      lVar14 = 9;
      do {
        uVar9 = uVar9 * 0x89 ^ uVar32;
        uVar32 = (uint)*(byte *)((long)&local_5c0 + lVar14);
        lVar14 = lVar14 + 1;
      } while (uVar32 != 0);
    }
    uStack_59f = 0x5f;
    local_5a0 = 0x6c;
    uStack_5a4 = 0x69617465;
    uStack_5a6 = 0x645f;
    local_5a8 = 0x706c;
    local_5b0 = 0x65685f746964655f;
    local_5b8 = (undefined **)0x656c75725f6c656d;
    local_5c0 = (byte ***)CONCAT44(local_5c0._4_4_,uVar9);
    FUN_7101af53d0((long)param_1[0xd4][0x10],(uint *)&local_5c0,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    if (*(uint *)((long)param_1 + 0x13c) < 0x13) {
      lVar14 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x13c) * 4;
      uVar27 = 0xb;
LAB_7101c0da54:
      *(undefined4 *)(lVar14 + 0xf0) = uVar27;
      return;
    }
LAB_7101c0e800:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar12 = *(int *)((long)param_1[0xd9] + 0x25c);
  if (iVar12 == -1) {
    iVar12 = *(int *)((long)ppplVar23 + 0x2a4);
    if (*(int *)(param_1 + 0xd8) == iVar12) {
      if (ppplVar23[0x37] == (long **)0x0) {
        uVar40 = 0;
      }
      else {
        uVar40 = (ulong)(0.0 < *(float *)((long)ppplVar23[0x37] + 0x134));
      }
      if ((uint)*(byte *)((long)param_1 + 0x6c4) == (uint)uVar40) {
        return;
      }
      *(char *)((long)param_1 + 0x6c4) = (char)uVar40;
    }
    else {
      *(int *)(param_1 + 0xd8) = iVar12;
      if (iVar12 == -1) {
        return;
      }
      if ((ulong)((long)param_1[0xc9] - (long)param_1[200]) <= (ulong)(long)iVar12)
      goto LAB_7101c0e804;
      FUN_7101c10630((long)param_1,(uint)*(byte *)((long)param_1[200] + (long)iVar12),param_3,
                     param_4,param_5,param_6,param_7,param_8);
      *(undefined1 *)((long)param_1 + 0x6c4) = 1;
      uVar40 = 1;
    }
    FUN_7101c0fbb0((long)param_1,uVar40,(long ****)param_3,param_4,param_5,(ulong)param_6,param_7,
                   param_8);
    return;
  }
  if (iVar12 == 1) {
    iVar13 = 1;
  }
  else {
    if (iVar12 != 0) {
      return;
    }
    iVar13 = -1;
  }
  ppplVar23 = param_1[0xde];
  iVar10 = *(int *)((long)ppplVar23 + 4);
  if (iVar10 < 2) {
    return;
  }
  uVar9 = *(uint *)(ppplVar23 + 0x15);
  iVar41 = 1;
  iVar42 = 2;
  uVar32 = uVar9;
  iVar44 = iVar13;
  while( true ) {
    uVar11 = uVar32 + iVar44;
    if (*(byte *)((long)ppplVar23 + 0xa4) != 0) {
      if ((int)uVar11 < 0) {
        uVar11 = uVar32 + iVar41 * iVar13 + iVar10;
      }
      else if (iVar10 <= (int)uVar11) {
        iVar6 = 0;
        if (iVar10 != 0) {
          iVar6 = (int)uVar11 / iVar10;
        }
        uVar11 = uVar11 - iVar6 * iVar10;
      }
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_71053144d8), iVar10 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    ppppbVar20 = (byte ****)(ulong)*(byte *)((long)ppplVar23 + 2);
    ppppppppplVar19 = (long *********)(ulong)uVar11;
    ppppbVar21 = (byte ****)(ulong)*(byte *)ppplVar23;
    uVar40 = FUN_7101c08ff0(DAT_71053050f0,*(byte *)((long)ppplVar23 + 1),
                            *(byte *)((long)ppplVar23 + 3),(uint)*(byte *)((long)ppplVar23 + 2),
                            *(byte *)ppplVar23,uVar11);
    if ((uVar40 & 1) != 0) break;
    iVar10 = *(int *)((long)ppplVar23 + 4);
    if (iVar10 <= iVar42) {
      return;
    }
    uVar32 = *(uint *)(ppplVar23 + 0x15);
    iVar41 = iVar41 + 1;
    iVar42 = iVar42 + 1;
    iVar44 = iVar44 + iVar13;
  }
  if (uVar9 == uVar11) {
    return;
  }
  ppppppppplVar17 = (long *********)(ulong)uVar11;
  FUN_7101c11360(param_1,(uint)*(byte *)ppplVar23,ppppppppplVar17,ppppbVar20,ppppbVar21,
                 ppppppppplVar19,param_7,param_8);
  FUN_7101c108f0((long)param_1,*(byte *)ppplVar23,(long ****)ppppppppplVar17,ppppbVar20,
                 (long ****)ppppbVar21,ppppppppplVar19,param_7,param_8);
  bVar3 = *(byte *)ppplVar23;
  if (((DAT_71053144d8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (*(char *)(param_1 + 0xcb) == '\x02') {
    if (*(char *)((long)param_1 + 0x659) == '\0') goto LAB_7101c0db84;
LAB_7101c0db8c:
    uVar32 = 0;
    if ((DAT_71053050f0 != 0x4090000) && (DAT_71053050f0 != 0x7010200)) {
      uVar32 = 1;
    }
  }
  else {
    if ((*(char *)((long)param_1 + 0x659) != '\0') || (*(char *)((long)param_1 + 0x693) == '\0'))
    goto LAB_7101c0db8c;
LAB_7101c0db84:
    uVar32 = 0;
  }
  uVar11 = FUN_7101c043c0((long)(param_1 + 0xcb),(long)(param_1 + 0xd2),bVar3);
  pppplVar18 = (long ****)(ulong)uVar11;
  ppppbVar20 = (byte ****)(ulong)uVar32;
  pppplVar22 = (long ****)(ulong)(*(char *)(param_1 + 0xcb) == '\x01');
  FUN_7101c0a4b0((uint *)&local_5c0,bVar3,uVar11,uVar32,(uint)(*(char *)(param_1 + 0xcb) == '\x01'))
  ;
  FUN_7101af53d0((long)param_1[0xd4][0x10],(uint *)&local_5c0,(undefined **)pppplVar18,ppppbVar20,
                 pppplVar22,ppppppppplVar19,param_7,param_8);
  lVar14 = *(long *)(DAT_710532f8d0 + 8);
  if (*(byte *)((long)ppplVar23 + 0xa4) != 0) {
    if (*(char *)(lVar14 + 0x191) != '\0') {
      return;
    }
    uVar40 = FUN_7103313f20(lVar14,0x175c743153,(long ****)&DAT_00000004,ppppbVar20,pppplVar22,
                            ppppppppplVar19,param_7,param_8);
    if ((uVar40 & 1) == 0) {
      return;
    }
    FUN_71024076d0((undefined4 *)&local_5c0,0x175c743153);
    if (local_5b0 == 0) {
      return;
    }
    if (DAT_7106dd53a8 != '\x01') {
      return;
    }
    if (CONCAT22(uStack_5a6,local_5a8) != DAT_7106dd53ac) {
      return;
    }
    piVar24 = (int *)(local_5b0 + 0x38);
    do {
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar8) {
        *piVar24 = *piVar24 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return;
  }
  uVar30 = extraout_x1;
  if (*(char *)(lVar14 + 0x191) == '\0') {
    pppplVar18 = (long ****)&DAT_00000004;
    uVar40 = FUN_7103313f20(lVar14,0x151ca6c028,(long ****)&DAT_00000004,ppppbVar20,pppplVar22,
                            ppppppppplVar19,param_7,param_8);
    uVar30 = extraout_x1_00;
    if ((uVar40 & 1) != 0) {
      FUN_71024076d0((undefined4 *)&local_5c0,0x151ca6c028);
      uVar30 = extraout_x1_01;
      if (((local_5b0 != 0) && (DAT_7106dd53a8 == '\x01')) &&
         (CONCAT22(uStack_5a6,local_5a8) == DAT_7106dd53ac)) {
        piVar24 = (int *)(local_5b0 + 0x38);
        do {
          cVar1 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar8) {
            *piVar24 = *piVar24 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      goto LAB_7101c0e09c;
    }
  }
  local_5a8 = 0;
  uStack_5a6 = 0;
  uStack_5a4 = 0x876500;
  local_598 = 0xffffffffffffffff;
  lStack_590 = 0;
  local_5c0 = (byte ***)((ulong)local_5c0 & 0xffffffff00000000);
  local_588 = 0;
LAB_7101c0e09c:
  local_5b8 = &PTR_FUN_7104f73d50;
  local_5b0 = 0;
  local_5a0 = 0;
  ppplVar28 = param_1[0xd7];
  iVar13 = *(int *)(ppplVar28 + 0x59);
  if ((iVar13 < 0) || (*(int *)(ppplVar28 + 0x58) <= iVar13)) {
    FUN_7103776290(&local_b8,uVar30,pppplVar18,ppppbVar20,pppplVar22,ppppppppplVar19,param_7,param_8
                  );
  }
  else {
    FUN_7103776390(&local_b8,ppplVar28[0x2d][iVar13] + 1,pppplVar18,ppppbVar20,pppplVar22,
                   ppppppppplVar19,param_7,param_8);
  }
  ppplVar28 = local_b0;
  if (local_b0[1] != (long **)0x0) {
    FUN_7103776910(&local_c8,(long)&local_b8,(long ****)"set_txt_rule_00_old",pppplVar18,ppppbVar20,
                   pppplVar22,ppppppppplVar19,param_7,param_8);
    FUN_7101c09380((long)&local_c8,*(byte *)ppplVar23,(ulong)uVar9,
                   (ulong)(*(byte *)((long)ppplVar23 + 1) == 1),pppplVar22,ppppppppplVar19,param_7,
                   param_8);
    if (iVar12 == 1) {
      pcVar16 = "txt_move_l";
    }
    else {
      pcVar16 = "txt_move_r";
    }
    FUN_7103778300(0x3f800000,(long)local_b0,(long)pcVar16);
    uVar40 = local_c0;
    local_c8 = &PTR_FUN_710523d9a8;
    local_c0 = 0;
    ppplVar28 = local_b0;
    if (uVar40 != 0) {
      FUN_710392eb40(uVar40);
      ppplVar28 = local_b0;
    }
  }
  local_b8 = (long ***)&PTR_FUN_710523d988;
  local_b0 = (long ***)0x0;
  if (ppplVar28 == (long ***)0x0) {
    return;
  }
  pplVar25 = ppplVar28[3];
  ppplVar28[2] = (long **)&PTR_FUN_710523d9a8;
  ppplVar28[3] = (long **)0x0;
  if (pplVar25 != (long **)0x0) {
    FUN_710392eb40((ulong)pplVar25);
  }
  FUN_710392eb40((ulong)ppplVar28);
  return;
}

