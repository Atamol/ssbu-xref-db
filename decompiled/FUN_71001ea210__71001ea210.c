// addr:      71001ea210
// offset:    0x1ea210
// name:      FUN_71001ea210
// mangled:   
// signature: undefined __cdecl FUN_71001ea210(long param_1)


/* WARNING: Type propagation algorithm not settling */

void FUN_71001ea210(long param_1)

{
  long *******ppppppplVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  long *plVar12;
  undefined ********ppppppppuVar13;
  long ******pppppplVar14;
  ulong uVar15;
  undefined *******pppppppuVar16;
  undefined ******ppppppuVar17;
  long **pplVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  undefined ********ppppppppuVar27;
  undefined1 auVar28 [16];
  undefined ******local_268;
  long **local_260;
  long *local_258;
  long ***local_250;
  long **local_248;
  long *local_240;
  undefined8 ***local_238;
  undefined8 **local_230;
  undefined8 *local_228;
  undefined8 ***local_220;
  undefined8 **local_218;
  undefined8 *local_210;
  undefined8 local_208;
  long local_200;
  ushort local_1f8;
  undefined1 local_1f6;
  long *******local_1d8;
  long *******local_1d0;
  long local_1c8;
  undefined *******local_1c0;
  char local_1b8 [16];
  char *local_1a8;
  undefined8 local_1a0;
  undefined *******local_198;
  long *local_190;
  undefined4 local_188;
  long **local_180;
  long *local_178;
  undefined8 local_170;
  undefined8 **local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 **local_150;
  undefined8 *local_148;
  undefined8 local_140;
  long local_138;
  ushort local_130;
  undefined1 local_12e;
  undefined ********local_128;
  long *local_120;
  undefined4 local_118;
  undefined8 **local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 **local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 **local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  long local_c8;
  ushort local_c0;
  undefined1 local_be;
  long *******local_b8;
  long *******local_b0;
  long local_a8;
  undefined ********local_a0;
  undefined ********local_98;
  long local_90;
  undefined ********local_88;
  undefined8 uStack_80;
  undefined ******local_70 [2];
  
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001ea290:
    if ((*plVar12 != 0) && (lVar19 = *(long *)(*plVar12 + 0x10), lVar19 != 0)) {
      lVar19 = *(long *)(lVar19 + 0x10);
      goto LAB_71001ea2c4;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar24 = *puVar8;
    if (uVar24 == 0) goto LAB_71001ea290;
    if ((ulong)uVar24 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar24 * 8) + 0x20);
      goto LAB_71001ea290;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar19 = 0;
LAB_71001ea2c4:
  plVar23 = (long *)(lVar19 + 0x78);
  (**(code **)(*plVar23 + 0x10))(plVar23);
  plVar12 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar24 = *puVar8;
    if (uVar24 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar24) {
LAB_71001ebd44:
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar24 * 8) + 0x10);
    }
  }
  if ((*(char *)(*(long *)(*plVar12 + 0x10) + 0x179) != '\0') && (*(long *)(param_1 + 0x48) != 0)) {
    do {
      if (*(char *)(param_1 + 0x192) == '\0') {
        lVar19 = *(long *)(param_1 + 0x60);
        if (param_1 + 0x58 == lVar19) {
          iVar7 = FUN_71001e9b80();
          if (iVar7 == 0) break;
        }
        else {
          uVar24 = 0;
          do {
            uVar9 = FUN_71001f2ba0(lVar19 + 0x18,"type",0);
            lVar19 = *(long *)(lVar19 + 8);
            uVar24 = ((uint)uVar9 >> 1 & 1) + uVar24;
          } while (param_1 + 0x58 != lVar19);
          uVar6 = FUN_71001e9b80();
          if (uVar6 <= uVar24) break;
        }
        if (*(long *)(param_1 + 0x98) != 0) break;
      }
      lVar20 = *(long *)(param_1 + 0x40);
      lVar19 = lVar20 + 0x10;
      uVar9 = FUN_71001f2ba0(lVar19,"probeinit",0);
      local_1c8 = 0;
      iVar7 = *(int *)(param_1 + 0x28);
      plVar12 = &DAT_71052af128;
      local_1d8 = (long *******)&local_1d8;
      local_1d0 = (long *******)&local_1d8;
      if (DAT_71052af1d8 == '\0') {
LAB_71001ea5bc:
        if ((*plVar12 == 0) || (lVar21 = *(long *)(*plVar12 + 0x10), lVar21 == 0))
        goto LAB_71001ea5ec;
        lVar21 = *(long *)(lVar21 + 0xe8);
      }
      else {
        puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar24 = *puVar8;
        if (uVar24 == 0) goto LAB_71001ea5bc;
        if ((ulong)uVar24 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar24 * 8) + 0x10);
          goto LAB_71001ea5bc;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001ea5ec:
        lVar21 = 0;
      }
      local_268 = (undefined ******)&PTR_FUN_7104f57550;
      local_260 = (long **)&PTR_FUN_710509cc08;
      local_258 = (long *)((ulong)local_258 & 0xffffffffffffff00);
      local_240 = (long *)&DAT_00000010;
      local_248 = &local_258;
      FUN_71001b47e0((long)&local_260,*(char **)(lVar21 + 0x168),-1);
      local_238 = (undefined8 ***)CONCAT62(local_238._2_6_,*(undefined2 *)(lVar21 + 0x178));
      local_230 = (undefined8 **)&PTR_FUN_710509cc08;
      local_210 = (undefined8 *)&DAT_00000010;
      local_228 = (undefined8 *)((ulong)local_228 & 0xffffffffffffff00);
      local_218 = &local_228;
      FUN_71001b47e0((long)&local_230,*(char **)(lVar21 + 0x198),-1);
      local_208 = *(long *)(lVar21 + 0x1a8);
      local_200 = *(long *)(lVar21 + 0x1b0);
                    /* WARNING: Ignoring partial resolution of indirect */
      local_1f8._0_1_ = *(undefined1 *)(lVar21 + 0x1b8);
      local_a0 = (undefined ********)&PTR_FUN_710509cc08;
      uStack_80 = 0x10;
      local_98 = (undefined ********)((ulong)local_98 & 0xffffffffffffff00);
      local_88 = (undefined ********)&local_98;
      FUN_71001b47e0((long)&local_a0,(char *)local_218,-1);
      local_268 = (undefined ******)&PTR_FUN_7104f57550;
      local_230 = (undefined8 **)&PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_230);
      local_260 = (long **)&PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_260);
      uVar10 = FUN_71001f2ba0(lVar19,"probeinit",0);
      local_a8 = 0;
      local_b8 = (long *******)&local_b8;
      local_b0 = (long *******)&local_b8;
      if (DAT_71052af1d8 == '\0') {
        lVar21 = DAT_71052af128;
        if (DAT_71052af128 == 0) {
          lVar22 = 0;
        }
        else {
LAB_71001ea760:
          lVar22 = *(long *)(lVar21 + 0x10);
        }
      }
      else {
        puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar24 = *puVar8;
        if (uVar24 == 0) {
          lVar22 = 0;
          lVar21 = DAT_71052af128;
          if (DAT_71052af128 != 0) goto LAB_71001ea760;
        }
        else if ((ulong)uVar24 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          lVar21 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar24 * 8) + 0x10);
          if (lVar21 != 0) goto LAB_71001ea760;
          lVar22 = 0;
        }
        else {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          lVar22 = 0;
        }
      }
      FUN_71001efaf0(lVar22 + 0x80,(long *)&local_b8);
      for (ppppppplVar25 = local_b0; &local_b8 != (long ********)ppppppplVar25;
          ppppppplVar25 = (long *******)ppppppplVar25[1]) {
        while( true ) {
          ppppppplVar26 = ppppppplVar25 + 2;
          uVar11 = FUN_71001f2ba0((long)ppppppplVar26,"RVCID",0);
          if ((iVar7 == (int)uVar11) ||
             (uVar11 = FUN_71001f2ba0((long)ppppppplVar26,"RVCID",0), (int)uVar11 == 0)) break;
          pppppplVar14 = *ppppppplVar25;
          ppppppplVar1 = (long *******)ppppppplVar25[1];
          pppppplVar14[1] = (long *****)ppppppplVar1;
          *ppppppplVar25[1] = (long *****)pppppplVar14;
          local_a8 = local_a8 + -1;
          (*(code *)*ppppppplVar25[2])(ppppppplVar26);
          FUN_71001b1870((long)ppppppplVar25);
          ppppppplVar25 = ppppppplVar1;
          if (&local_b8 == (long ********)ppppppplVar1) goto LAB_71001ea824;
        }
      }
LAB_71001ea824:
      local_128 = (undefined ********)&PTR_FUN_7104f57900;
      local_108 = (undefined8 *)0x0;
      local_100 = 0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = 0;
      local_d8 = (undefined8 *)0x0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 1;
      local_be = 1;
      local_110 = &local_108;
      local_f8 = &local_f0;
      local_e0 = &local_d8;
      plVar12 = FUN_71001af850(0x90);
      if (plVar12 != (long *)0x0) {
        FUN_71001beb40(plVar12);
      }
      local_120 = plVar12;
      if ((char)local_c0 == '\0') {
        FUN_71001f2180((long)&local_128);
      }
      local_118 = 1;
      local_c0 = local_c0 & 0xff;
      local_178 = (long *)0x0;
      local_170 = 0;
      local_198 = (undefined *******)&PTR_FUN_7104f57900;
      local_160 = (undefined8 *)0x0;
      local_158 = 0;
      local_148 = (undefined8 *)0x0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 1;
      local_12e = 1;
      local_180 = &local_178;
      local_168 = &local_160;
      local_150 = &local_148;
      plVar12 = FUN_71001af850(0x90);
      if (plVar12 != (long *)0x0) {
        FUN_71001beb40(plVar12);
      }
      local_190 = plVar12;
      if ((char)local_130 == '\0') {
        FUN_71001f2180((long)&local_198);
      }
      local_188 = 1;
      local_130 = local_130 & 0xff;
      for (ppppppplVar25 = local_b0; &local_b8 != (long ********)ppppppplVar25;
          ppppppplVar25 = (long *******)ppppppplVar25[1]) {
        ppppppplVar26 = ppppppplVar25 + 2;
        uVar11 = FUN_71001f2ba0((long)ppppppplVar26,"Tpt",0xffffffff);
        if ((int)uVar11 + 1U < 2) {
          uVar11 = FUN_71001f2ba0((long)ppppppplVar26,"type",0);
          if (((uint)uVar11 >> 2 & 1) == 0) {
            uVar11 = FUN_71001f2ba0((long)ppppppplVar26,"type",0);
            if (((uint)uVar11 >> 1 & 1) != 0) goto LAB_71001ea998;
            ppppppppuVar13 = &local_198;
          }
          else {
            ppppppppuVar13 = (undefined ********)&local_128;
          }
          FUN_71001f1f40((long)ppppppppuVar13,(long)ppppppplVar26);
        }
LAB_71001ea998:
      }
      if ((char)local_c0 == '\0') {
        FUN_71001f2180((long)&local_128);
        sVar5 = FUN_71001beb30((long)local_120);
        if (sVar5 != 0) goto LAB_71001ea9bc;
LAB_71001eab7c:
        bVar4 = false;
      }
      else {
        sVar5 = FUN_71001beb30((long)local_120);
        if (sVar5 == 0) goto LAB_71001eab7c;
LAB_71001ea9bc:
        if (uVar10 == 0) {
          if ((char)local_130 == '\0') {
            FUN_71001f2180((long)&local_198);
            sVar5 = FUN_71001beb30((long)local_190);
          }
          else {
            sVar5 = FUN_71001beb30((long)local_190);
          }
          if (sVar5 != 0) {
            local_268 = (undefined ******)((ulong)local_268 & 0xffffffffffffff00);
            if ((char)local_130 == '\0') {
              FUN_71001f2180((long)&local_198);
            }
            iVar7 = FUN_71001bef20((long)local_190);
            if (iVar7 != 0) {
              FUN_71001bef30((long)local_190,(char *)&local_268,0x80);
            }
            local_1b8[0] = '\0';
            local_1a0 = 0x10;
            local_1c0 = (undefined *******)&PTR_FUN_710509cc08;
            local_1a8 = local_1b8;
            FUN_71001b47e0((long)&local_1c0,(char *)&local_268,-1);
            local_260 = (long **)((ulong)local_260 & 0xffffffffffffff00);
            local_248 = (long **)0x10;
            local_268 = (undefined ******)&PTR_FUN_710509cc08;
            local_250 = &local_260;
            FUN_71001b47e0((long)&local_268,"Ntrpa",-1);
            FUN_710021bff0(&local_f8,(long)&local_268);
            local_268 = (undefined ******)&PTR_FUN_710509cc08;
            FUN_71001b4910((long)&local_268);
            local_248 = (long **)&DAT_00000010;
            local_260 = (long **)((ulong)local_260 & 0xffffffffffffff00);
            local_268 = (undefined ******)&PTR_FUN_710509cc08;
            local_250 = &local_260;
            FUN_71001b47e0((long)&local_268,"Ntrpa",-1);
            local_70[0] = (undefined ******)&local_268;
            auVar28 = FUN_710021c110((long *)&local_f8,(long)&local_268,"",local_70);
            FUN_71001b2f70(auVar28._0_8_ + 0x48,(long)&local_1c0);
            local_268 = (undefined ******)&PTR_FUN_710509cc08;
            FUN_71001b4910((long)&local_268);
            local_1c0 = (undefined *******)&PTR_FUN_710509cc08;
            FUN_71001b4910((long)&local_1c0);
            if ((char)local_130 == '\0') {
              FUN_71001f2180((long)&local_198);
            }
            uVar15 = FUN_71001beb30((long)local_190);
            FUN_71001f2a80((undefined4 *)&local_268,(long)&local_128,"Ntrpp",uVar15 & 0xffff);
          }
          ppppppplVar25 = (long *******)FUN_71001b1820(0x80);
          *ppppppplVar25 = (long ******)0x0;
          ppppppplVar26 = ppppppplVar25 + 2;
          *ppppppplVar26 = (long ******)&PTR_FUN_7104f57900;
          ppppppplVar25[6] = (long ******)0x0;
          ppppppplVar25[5] = (long ******)(ppppppplVar25 + 6);
          ppppppplVar25[9] = (long ******)0x0;
          ppppppplVar25[7] = (long ******)0x0;
          ppppppplVar25[8] = (long ******)(ppppppplVar25 + 9);
          ppppppplVar25[0xc] = (long ******)0x0;
          ppppppplVar25[10] = (long ******)0x0;
          ppppppplVar25[0xb] = (long ******)(ppppppplVar25 + 0xc);
          ppppppplVar25[0xd] = (long ******)0x0;
          ppppppplVar25[0xe] = (long ******)0x0;
          *(undefined2 *)(ppppppplVar25 + 0xf) = 1;
          *(undefined1 *)((long)ppppppplVar25 + 0x7a) = 0;
          pppppplVar14 = (long ******)FUN_71001af850(0x90);
          if (pppppplVar14 != (long ******)0x0) {
            FUN_71001beb40(pppppplVar14);
          }
          ppppppplVar25[3] = pppppplVar14;
          ppppppppuVar13 = (undefined ********)&local_128;
LAB_71001ead50:
          FUN_71001f1f40((long)ppppppplVar26,(long)ppppppppuVar13);
          ppppppplVar25[1] = (long ******)&local_1d8;
          *ppppppplVar25 = (long ******)local_1d8;
          local_1d8[1] = (long ******)ppppppplVar25;
          local_1c8 = local_1c8 + 1;
          local_1d8 = ppppppplVar25;
        }
        else {
          local_268 = (undefined ******)((ulong)local_268 & 0xffffffffffffff00);
          if (*(char *)(lVar20 + 0x78) == '\0') {
            FUN_71001f2180(lVar19);
            iVar7 = FUN_71001bef20(*(long *)(lVar20 + 0x18));
          }
          else {
            iVar7 = FUN_71001bef20(*(long *)(lVar20 + 0x18));
          }
          if (iVar7 != 0) {
            FUN_71001bef30(*(long *)(lVar20 + 0x18),(char *)&local_268,0x80);
          }
          local_1b8[0] = '\0';
          local_1a0 = 0x10;
          local_1c0 = (undefined *******)&PTR_FUN_710509cc08;
          local_1a8 = local_1b8;
          FUN_71001b47e0((long)&local_1c0,(char *)&local_268,-1);
          bVar4 = FUN_71001b4e00(local_1a8,(char *)local_88);
          local_1c0 = (undefined *******)&PTR_FUN_710509cc08;
          FUN_71001b4910((long)&local_1c0);
          ppppppplVar25 = (long *******)FUN_71001b1820(0x80);
          *ppppppplVar25 = (long ******)0x0;
          ppppppplVar25[2] = (long ******)&PTR_FUN_7104f57900;
          ppppppplVar25[6] = (long ******)0x0;
          ppppppplVar25[5] = (long ******)(ppppppplVar25 + 6);
          ppppppplVar25[9] = (long ******)0x0;
          ppppppplVar25[7] = (long ******)0x0;
          ppppppplVar25[8] = (long ******)(ppppppplVar25 + 9);
          ppppppplVar25[0xc] = (long ******)0x0;
          ppppppplVar25[10] = (long ******)0x0;
          ppppppplVar25[0xb] = (long ******)(ppppppplVar25 + 0xc);
          ppppppplVar25[0xd] = (long ******)0x0;
          ppppppplVar25[0xe] = (long ******)0x0;
          *(undefined2 *)(ppppppplVar25 + 0xf) = 1;
          *(undefined1 *)((long)ppppppplVar25 + 0x7a) = 0;
          pppppplVar14 = (long ******)FUN_71001af850(0x90);
          if (pppppplVar14 != (long ******)0x0) {
            FUN_71001beb40(pppppplVar14);
          }
          ppppppplVar25[3] = pppppplVar14;
          FUN_71001f1f40((long)(ppppppplVar25 + 2),(long)&local_128);
          ppppppplVar25[1] = (long ******)&local_1d8;
          *ppppppplVar25 = (long ******)local_1d8;
          local_1d8[1] = (long ******)ppppppplVar25;
          local_1c8 = local_1c8 + 1;
          local_1d8 = ppppppplVar25;
          if (bVar4) {
            ppppppplVar25 = (long *******)FUN_71001b1820(0x80);
            *ppppppplVar25 = (long ******)0x0;
            ppppppplVar26 = ppppppplVar25 + 2;
            *ppppppplVar26 = (long ******)&PTR_FUN_7104f57900;
            ppppppplVar25[6] = (long ******)0x0;
            ppppppplVar25[5] = (long ******)(ppppppplVar25 + 6);
            ppppppplVar25[9] = (long ******)0x0;
            ppppppplVar25[7] = (long ******)0x0;
            ppppppplVar25[8] = (long ******)(ppppppplVar25 + 9);
            ppppppplVar25[0xc] = (long ******)0x0;
            ppppppplVar25[10] = (long ******)0x0;
            ppppppplVar25[0xb] = (long ******)(ppppppplVar25 + 0xc);
            ppppppplVar25[0xd] = (long ******)0x0;
            ppppppplVar25[0xe] = (long ******)0x0;
            *(undefined2 *)(ppppppplVar25 + 0xf) = 1;
            *(undefined1 *)((long)ppppppplVar25 + 0x7a) = 0;
            pppppplVar14 = (long ******)FUN_71001af850(0x90);
            if (pppppplVar14 != (long ******)0x0) {
              FUN_71001beb40(pppppplVar14);
            }
            ppppppppuVar13 = &local_198;
            ppppppplVar25[3] = pppppplVar14;
            goto LAB_71001ead50;
          }
        }
        bVar4 = true;
      }
      local_198 = (undefined *******)&PTR_FUN_7104f57900;
      if (local_138 != 0) {
        FUN_71001b1870(local_138 + -4);
        local_138 = 0;
        local_130 = local_130 & 0xff;
      }
      if (local_190 != (long *)0x0) {
        (**(code **)(*local_190 + 8))();
      }
      FUN_7101711670(&local_150,local_148);
      FUN_7101711670(&local_168,local_160);
      FUN_7100219ca0(&local_180,local_178);
      local_128 = (undefined ********)&PTR_FUN_7104f57900;
      if (local_c8 != 0) {
        FUN_71001b1870(local_c8 + -4);
        local_c8 = 0;
        local_c0 = local_c0 & 0xff;
      }
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 8))();
      }
      FUN_7101711670(&local_e0,local_d8);
      FUN_7101711670(&local_f8,local_f0);
      FUN_7100219ca0(&local_110,local_108);
      if (local_a8 != 0) {
        pppppplVar14 = *local_b0;
        pppppplVar14[1] = (long *****)local_b8[1];
        *local_b8[1] = (long *****)pppppplVar14;
        local_a8 = 0;
        ppppppplVar25 = local_b0;
        while ((long ********)ppppppplVar25 != &local_b8) {
          ppppppplVar26 = (long *******)ppppppplVar25[1];
          (*(code *)*ppppppplVar25[2])();
          FUN_71001b1870((long)ppppppplVar25);
          ppppppplVar25 = ppppppplVar26;
        }
      }
      local_a0 = (undefined ********)&PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_a0);
      if (bVar4) {
        ppppppplVar25 = local_1d0;
        if (&local_1d8 != (long ********)local_1d0) {
          do {
            local_108 = (undefined8 *)0x0;
            local_100 = 0;
            local_f0 = (undefined8 *)0x0;
            local_128 = (undefined ********)&PTR_FUN_7104f57900;
            ppppppplVar26 = ppppppplVar25 + 2;
            local_e8 = 0;
            local_d8 = (undefined8 *)0x0;
            local_d0 = 0;
            local_c8 = 0;
            local_be = 0;
            local_c0 = 1;
            local_110 = &local_108;
            local_f8 = &local_f0;
            local_e0 = &local_d8;
            plVar12 = FUN_71001af850(0x90);
            if (plVar12 != (long *)0x0) {
              FUN_71001beb40(plVar12);
            }
            local_120 = plVar12;
            FUN_71001f1f40((long)&local_128,(long)ppppppplVar26);
            FUN_71001f2a80((undefined4 *)&local_268,(long)&local_128,"RVCID",
                           (ulong)*(uint *)(param_1 + 0x28));
            FUN_71001f2a80((undefined4 *)&local_268,(long)&local_128,"probeinit",(ulong)(uVar9 == 0)
                          );
            uVar10 = FUN_71001f2ba0(lVar19,"PRID",0);
            FUN_71001f2a80((undefined4 *)&local_268,(long)&local_128,"PRID",uVar10 & 0xffffffff);
            plVar12 = &DAT_71052af128;
            if (DAT_71052af1d8 != '\0') {
              puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
              uVar24 = *puVar8;
              if (uVar24 != 0) {
                if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar24)
                goto LAB_71001ebd44;
                plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar24 * 8) + 0x10);
              }
            }
            lVar20 = (**(code **)(**(long **)(*(long *)(*plVar12 + 0x10) + 0xe8) + 0x80))();
            if (*(char *)(lVar20 + 0x10) != '\0') {
              plVar12 = &DAT_71052af128;
              if (DAT_71052af1d8 != '\0') {
                puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
                uVar24 = *puVar8;
                if (uVar24 != 0) {
                  if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar24)
                  goto LAB_71001ebd44;
                  plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar24 * 8) + 0x10);
                }
              }
              lVar20 = (**(code **)(**(long **)(*(long *)(*plVar12 + 0x10) + 0xe8) + 0x80))();
              FUN_71001bebd0(&local_268,lVar20 + 0x20);
              FUN_71001befa0(&local_a0,(long)&local_268);
              local_190 = (long *)((ulong)local_190 & 0xffffffffffffff00);
              local_178 = (long *)0x10;
              local_198 = (undefined *******)&PTR_FUN_710509cc08;
              local_180 = &local_190;
              FUN_71001b47e0((long)&local_198,"Ra",-1);
              FUN_710021bff0(&local_f8,(long)&local_198);
              local_198 = (undefined *******)&PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_198);
              local_190 = (long *)((ulong)local_190 & 0xffffffffffffff00);
              local_178 = (long *)&DAT_00000010;
              local_198 = (undefined *******)&PTR_FUN_710509cc08;
              local_180 = &local_190;
              FUN_71001b47e0((long)&local_198,"Ra",-1);
              local_1c0 = (undefined *******)&local_198;
              auVar28 = FUN_710021c110((long *)&local_f8,(long)&local_198,"",&local_1c0);
              FUN_71001b2f70(auVar28._0_8_ + 0x48,(long)&local_a0);
              local_198 = (undefined *******)&PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_198);
              local_a0 = (undefined ********)&PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_a0);
              uVar15 = FUN_71001beb30((long)&local_268);
              FUN_71001f2a80((undefined4 *)&local_198,(long)&local_128,"Rp",uVar15 & 0xffff);
              FUN_71001bef00();
            }
            local_90 = 0;
            local_a0 = (undefined ********)&local_a0;
            local_98 = (undefined ********)&local_a0;
            pppppppuVar16 = (undefined *******)FUN_71001b1820(0x80);
            *pppppppuVar16 = (undefined ******)0x0;
            pppppppuVar16[2] = (undefined ******)&PTR_FUN_7104f57900;
            pppppppuVar16[6] = (undefined ******)0x0;
            pppppppuVar16[5] = (undefined ******)(pppppppuVar16 + 6);
            pppppppuVar16[9] = (undefined ******)0x0;
            pppppppuVar16[7] = (undefined ******)0x0;
            pppppppuVar16[8] = (undefined ******)(pppppppuVar16 + 9);
            pppppppuVar16[0xc] = (undefined ******)0x0;
            pppppppuVar16[10] = (undefined ******)0x0;
            pppppppuVar16[0xb] = (undefined ******)(pppppppuVar16 + 0xc);
            pppppppuVar16[0xd] = (undefined ******)0x0;
            pppppppuVar16[0xe] = (undefined ******)0x0;
            *(undefined2 *)(pppppppuVar16 + 0xf) = 1;
            *(undefined1 *)((long)pppppppuVar16 + 0x7a) = 0;
            ppppppuVar17 = (undefined ******)FUN_71001af850(0x90);
            if (ppppppuVar17 != (undefined ******)0x0) {
              FUN_71001beb40(ppppppuVar17);
            }
            pppppppuVar16[3] = ppppppuVar17;
            FUN_71001f1f40((long)(pppppppuVar16 + 2),lVar19);
            *pppppppuVar16 = (undefined ******)local_a0;
            pppppppuVar16[1] = (undefined ******)&local_a0;
            local_a0[1] = pppppppuVar16;
            local_90 = local_90 + 1;
            local_a0 = (undefined ********)pppppppuVar16;
            uVar10 = FUN_71001f2ba0((long)ppppppplVar26,"type",0);
            if (((uint)uVar10 >> 1 & 1) == 0) {
LAB_71001eb45c:
              uVar10 = FUN_71001f2ba0(lVar19,"R",0);
              if ((uVar10 == 0) ||
                 (uVar10 = FUN_71001f2ba0((long)ppppppplVar26,"type",0),
                 ((uint)uVar10 >> 1 & 1) == 0)) {
                uVar10 = FUN_71001f2ba0((long)ppppppplVar26,"type",0);
                if (((uint)uVar10 >> 1 & 1) == 0) {
                  if (DAT_71052af1d8 == '\0') {
LAB_71001eb674:
                    uVar2 = DAT_71052b5278;
                  }
                  else {
                    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
                    if (*puVar8 == 0) goto LAB_71001eb674;
                    uVar2 = *(ushort *)(DAT_71052b5270 + (ulong)*puVar8 * 2);
                  }
                  if ((char)local_c0 == '\0') {
                    FUN_71001f2180((long)&local_128);
                  }
                  FUN_71001bee30((long)local_120,uVar2);
                  local_c0 = local_c0 & 0xff;
                }
                else {
                  plVar12 = &DAT_71052af128;
                  if (DAT_71052af1d8 == '\0') {
LAB_71001eb53c:
                    if ((*plVar12 == 0) || (lVar20 = *(long *)(*plVar12 + 0x10), lVar20 == 0))
                    goto LAB_71001eb6bc;
                    lVar20 = *(long *)(lVar20 + 0xe8);
                  }
                  else {
                    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
                    uVar24 = *puVar8;
                    if (uVar24 == 0) goto LAB_71001eb53c;
                    if ((ulong)uVar24 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
                      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar24 * 8) + 0x10);
                      goto LAB_71001eb53c;
                    }
                    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                   0xe0000003,0);
LAB_71001eb6bc:
                    lVar20 = 0;
                  }
                  local_258 = (long *)((ulong)local_258 & 0xffffffffffffff00);
                  local_240 = (long *)&DAT_00000010;
                  local_268 = (undefined ******)&PTR_FUN_7104f57550;
                  local_260 = (long **)&PTR_FUN_710509cc08;
                  local_248 = &local_258;
                  FUN_71001b47e0((long)&local_260,*(char **)(lVar20 + 0x168),-1);
                  local_238 = (undefined8 ***)
                              CONCAT62(local_238._2_6_,*(undefined2 *)(lVar20 + 0x178));
                  local_210 = (undefined8 *)&DAT_00000010;
                  local_228 = (undefined8 *)((ulong)local_228 & 0xffffffffffffff00);
                  local_230 = (undefined8 **)&PTR_FUN_710509cc08;
                  local_218 = &local_228;
                  FUN_71001b47e0((long)&local_230,*(char **)(lVar20 + 0x198),-1);
                  local_208 = *(long *)(lVar20 + 0x1a8);
                  local_200 = *(long *)(lVar20 + 0x1b0);
                    /* WARNING: Ignoring partial resolution of indirect */
                  local_1f8._0_1_ = *(undefined1 *)(lVar20 + 0x1b8);
                  uVar2 = (ushort)local_208;
                  if ((char)local_c0 == '\0') {
                    FUN_71001f2180((long)&local_128);
                  }
                  FUN_71001bee30((long)local_120,uVar2);
                  local_c0 = local_c0 & 0xff;
                  local_268 = (undefined ******)&PTR_FUN_7104f57550;
                  local_230 = (undefined8 **)&PTR_FUN_710509cc08;
                  FUN_71001b4910((long)&local_230);
                  local_260 = (long **)&PTR_FUN_710509cc08;
                  FUN_71001b4910((long)&local_260);
                }
              }
              else {
                FUN_71001e9e10(&local_198,lVar19);
                local_260 = (long **)((ulong)local_260 & 0xffffffffffffff00);
                local_248 = (long **)0x10;
                local_268 = (undefined ******)&PTR_FUN_710509cc08;
                local_250 = &local_260;
                FUN_71001b47e0((long)&local_268,"Rsa",-1);
                FUN_710021bff0(&local_f8,(long)&local_268);
                local_268 = (undefined ******)&PTR_FUN_710509cc08;
                FUN_71001b4910((long)&local_268);
                local_260 = (long **)((ulong)local_260 & 0xffffffffffffff00);
                local_248 = (long **)&DAT_00000010;
                local_268 = (undefined ******)&PTR_FUN_710509cc08;
                local_250 = &local_260;
                FUN_71001b47e0((long)&local_268,"Rsa",-1);
                local_1c0 = &local_268;
                auVar28 = FUN_710021c110((long *)&local_f8,(long)&local_268,"",&local_1c0);
                FUN_71001b2f70(auVar28._0_8_ + 0x48,(long)&local_198);
                local_268 = (undefined ******)&PTR_FUN_710509cc08;
                FUN_71001b4910((long)&local_268);
                local_198 = (undefined *******)&PTR_FUN_710509cc08;
                FUN_71001b4910((long)&local_198);
                uVar10 = FUN_71001f2ba0(lVar19,"Rsp",0);
                FUN_71001f2a80((undefined4 *)&local_268,(long)&local_128,"Rsp",uVar10 & 0xffff);
                FUN_71001f2a80((undefined4 *)&local_268,(long)&local_128,"R",1);
              }
              (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
                        (*(long **)(param_1 + 0x10),&local_a0,&local_128);
              if (uVar9 != 0) {
                uVar10 = FUN_71001f2ba0((long)ppppppplVar26,"type",0);
                if (((uint)uVar10 >> 1 & 1) == 0) {
                  local_208 = 0;
                  local_248 = (long **)0x0;
                  local_240 = (long *)0x0;
                  local_268 = (undefined ******)&PTR_FUN_7104f57900;
                  local_230 = (undefined8 **)0x0;
                  local_228 = (undefined8 *)0x0;
                  local_218 = (undefined8 **)0x0;
                  local_210 = (undefined8 *)0x0;
                  local_200 = CONCAT53(local_200._3_5_,0x10001);
                  local_250 = &local_248;
                  local_238 = &local_230;
                  local_220 = &local_218;
                  pplVar18 = (long **)FUN_71001af850(0x90);
                  if (pplVar18 != (long **)0x0) {
                    FUN_71001beb40(pplVar18);
                  }
                  local_260 = pplVar18;
                  if ((byte)local_200 == '\0') {
                    FUN_71001f2180((long)&local_268);
                  }
                  local_258 = (long *)CONCAT44(local_258._4_4_,1);
                  local_200._0_2_ = (ushort)(byte)local_200;
                  FUN_71001ec320(&local_198,lVar19);
                  pplVar18 = local_180;
                  if ((byte)local_200 == '\0') {
                    FUN_71001f2180((long)&local_268);
                  }
                  local_200._0_2_ = (ushort)(byte)local_200;
                  FUN_71001becd0((long)local_260,(char *)pplVar18);
                  local_198 = (undefined *******)&PTR_FUN_710509cc08;
                  FUN_71001b4910((long)&local_198);
                  uVar10 = FUN_71001f2ba0(lVar19,"Ntrpp",0);
                  if ((byte)local_200 == '\0') {
                    FUN_71001f2180((long)&local_268);
                  }
                  FUN_71001bee30((long)local_260,(ushort)uVar10);
                  local_200._0_2_ = (ushort)(byte)local_200;
                  uVar10 = FUN_71001f2ba0(lVar19,"RVCID",0);
                  FUN_71001f2a80((undefined4 *)&local_198,(long)&local_268,"RVCID",
                                 uVar10 & 0xffffffff);
                  FUN_71001e7a40(param_1,(long)&local_268);
                  local_268 = (undefined ******)&PTR_FUN_7104f57900;
                  if (local_208 != 0) {
                    FUN_71001b1870(local_208 + -4);
                    local_208 = 0;
                    local_200._0_2_ = (ushort)(byte)local_200;
                  }
                  if (local_260 != (long **)0x0) {
                    (*(code *)(*local_260)[1])();
                  }
                  FUN_7101711670(&local_220,local_218);
                  FUN_7101711670(&local_238,local_230);
                  FUN_7100219ca0(&local_250,local_248);
                }
                else {
                  FUN_71001e7a40(param_1,lVar19);
                }
              }
            }
            else {
              plVar12 = &DAT_71052af128;
              if (DAT_71052af1d8 == '\0') {
LAB_71001eb2b4:
                if ((*plVar12 == 0) || (lVar20 = *(long *)(*plVar12 + 0x10), lVar20 == 0))
                goto LAB_71001eb2e4;
                lVar20 = *(long *)(lVar20 + 0xe8);
              }
              else {
                puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
                uVar24 = *puVar8;
                if (uVar24 == 0) goto LAB_71001eb2b4;
                if ((ulong)uVar24 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
                  plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar24 * 8) + 0x10);
                  goto LAB_71001eb2b4;
                }
                FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
LAB_71001eb2e4:
                lVar20 = 0;
              }
              local_258 = (long *)((ulong)local_258 & 0xffffffffffffff00);
              local_240 = (long *)&DAT_00000010;
              local_268 = (undefined ******)&PTR_FUN_7104f57550;
              local_260 = (long **)&PTR_FUN_710509cc08;
              local_248 = &local_258;
              FUN_71001b47e0((long)&local_260,*(char **)(lVar20 + 0x168),-1);
              local_238 = (undefined8 ***)CONCAT62(local_238._2_6_,*(undefined2 *)(lVar20 + 0x178));
              local_210 = (undefined8 *)&DAT_00000010;
              local_228 = (undefined8 *)((ulong)local_228 & 0xffffffffffffff00);
              local_230 = (undefined8 **)&PTR_FUN_710509cc08;
              local_218 = &local_228;
              FUN_71001b47e0((long)&local_230,*(char **)(lVar20 + 0x198),-1);
              lVar21 = *(long *)(lVar20 + 0x1a8);
              local_200 = *(long *)(lVar20 + 0x1b0);
                    /* WARNING: Ignoring partial resolution of indirect */
              local_1f8._0_1_ = *(undefined1 *)(lVar20 + 0x1b8);
              local_208._4_4_ = (int)((ulong)lVar21 >> 0x20);
              local_208 = lVar21;
              if (local_208._4_4_ != 2) {
                local_268 = (undefined ******)&PTR_FUN_7104f57550;
                local_230 = (undefined8 **)&PTR_FUN_710509cc08;
                FUN_71001b4910((long)&local_230);
                local_260 = (long **)&PTR_FUN_710509cc08;
                FUN_71001b4910((long)&local_260);
                goto LAB_71001eb45c;
              }
              uVar10 = FUN_71001f2ba0(lVar19,"R",0);
              local_268 = (undefined ******)&PTR_FUN_7104f57550;
              local_230 = (undefined8 **)&PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_230);
              local_260 = (long **)&PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_260);
              if (uVar10 != 0) goto LAB_71001eb45c;
              plVar12 = &DAT_71052af128;
              if (DAT_71052af1d8 == '\0') {
LAB_71001eb41c:
                if ((*plVar12 == 0) || (lVar20 = *(long *)(*plVar12 + 0x10), lVar20 == 0))
                goto LAB_71001eb998;
                lVar20 = *(long *)(lVar20 + 0xe8);
              }
              else {
                puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
                uVar24 = *puVar8;
                if (uVar24 == 0) goto LAB_71001eb41c;
                if ((ulong)uVar24 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
                  plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar24 * 8) + 0x10);
                  goto LAB_71001eb41c;
                }
                FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
LAB_71001eb998:
                lVar20 = 0;
              }
              local_258 = (long *)((ulong)local_258 & 0xffffffffffffff00);
              local_240 = (long *)&DAT_00000010;
              local_268 = (undefined ******)&PTR_FUN_7104f57550;
              local_260 = (long **)&PTR_FUN_710509cc08;
              local_248 = &local_258;
              FUN_71001b47e0((long)&local_260,*(char **)(lVar20 + 0x168),-1);
              local_238 = (undefined8 ***)CONCAT62(local_238._2_6_,*(undefined2 *)(lVar20 + 0x178));
              local_210 = (undefined8 *)&DAT_00000010;
              local_228 = (undefined8 *)((ulong)local_228 & 0xffffffffffffff00);
              local_230 = (undefined8 **)&PTR_FUN_710509cc08;
              local_218 = &local_228;
              FUN_71001b47e0((long)&local_230,*(char **)(lVar20 + 0x198),-1);
              local_208 = *(long *)(lVar20 + 0x1a8);
              local_200 = *(long *)(lVar20 + 0x1b0);
                    /* WARNING: Ignoring partial resolution of indirect */
              local_1f8._0_1_ = *(undefined1 *)(lVar20 + 0x1b8);
              cVar3 = (char)local_1f8;
              local_268 = (undefined ******)&PTR_FUN_7104f57550;
              local_230 = (undefined8 **)&PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_230);
              local_260 = (long **)&PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_260);
              if (cVar3 != '\0') {
                FUN_71001ebeb0(param_1,lVar19,(uint)DAT_7104f575ec);
              }
              FUN_71001ec220(param_1,(long)&local_a0,(long)&local_128);
            }
            if (local_90 != 0) {
              pppppppuVar16 = *local_98;
              pppppppuVar16[1] = (undefined ******)local_a0[1];
              *local_a0[1] = (undefined ******)pppppppuVar16;
              local_90 = 0;
              ppppppppuVar13 = local_98;
              while ((undefined *********)ppppppppuVar13 != &local_a0) {
                ppppppppuVar27 = (undefined ********)ppppppppuVar13[1];
                (*(code *)*ppppppppuVar13[2])();
                FUN_71001b1870((long)ppppppppuVar13);
                ppppppppuVar13 = ppppppppuVar27;
              }
            }
            local_128 = (undefined ********)&PTR_FUN_7104f57900;
            if (local_c8 != 0) {
              FUN_71001b1870(local_c8 + -4);
              local_c8 = 0;
              local_c0 = local_c0 & 0xff;
            }
            if (local_120 != (long *)0x0) {
              (**(code **)(*local_120 + 8))();
            }
            FUN_7101711670(&local_e0,local_d8);
            FUN_7101711670(&local_f8,local_f0);
            FUN_7100219ca0(&local_110,local_108);
            ppppppplVar25 = (long *******)ppppppplVar25[1];
          } while (&local_1d8 != (long ********)ppppppplVar25);
        }
        if (uVar9 == 0) {
          FUN_71001b12a0((ulong *)&local_198);
          local_268 = (undefined ******)((long)local_198 + (long)DAT_7104f575f8);
          local_200 = 0;
          local_240 = (long *)0x0;
          local_238 = (undefined8 ***)0x0;
          local_1f6 = 0;
          local_228 = (undefined8 *)0x0;
          local_220 = (undefined8 ***)0x0;
          local_210 = (undefined8 *)0x0;
          local_208 = 0;
          local_1f8 = 1;
          local_260 = (long **)&PTR_FUN_7104f57900;
          local_248 = &local_240;
          local_230 = &local_228;
          local_218 = &local_210;
          plVar12 = FUN_71001af850(0x90);
          if (plVar12 != (long *)0x0) {
            FUN_71001beb40(plVar12);
          }
          local_258 = plVar12;
          FUN_71001f1f40((long)&local_260,lVar19);
          uVar9 = FUN_71001f2ba0(lVar19,"PRID",0);
          local_a0 = (undefined ********)CONCAT44(local_a0._4_4_,(int)uVar9);
          local_128 = (undefined ********)&local_a0;
          auVar28 = FUN_710021b6f0((long *)(param_1 + 0x150),(uint *)&local_a0,"",&local_128);
          *(undefined *******)(auVar28._0_8_ + 0x28) = local_268;
          FUN_71001f1f40(auVar28._0_8_ + 0x30,(long)&local_260);
          local_260 = (long **)&PTR_FUN_7104f57900;
          if (local_200 != 0) {
            FUN_71001b1870(local_200 + -4);
            local_200 = 0;
            local_1f8 = local_1f8 & 0xff;
          }
          if (local_258 != (long *)0x0) {
            (**(code **)(*local_258 + 8))();
          }
          FUN_7101711670(&local_218,local_210);
          FUN_7101711670(&local_230,local_228);
          FUN_7100219ca0(&local_248,local_240);
        }
        plVar12 = *(long **)(param_1 + 0x40);
        lVar19 = *plVar12;
        *(long *)(lVar19 + 8) = plVar12[1];
        *(long *)plVar12[1] = lVar19;
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
        (**(code **)plVar12[2])();
        FUN_71001b1870((long)plVar12);
      }
      if (local_1c8 != 0) {
        pppppplVar14 = *local_1d0;
        pppppplVar14[1] = (long *****)local_1d8[1];
        *local_1d8[1] = (long *****)pppppplVar14;
        local_1c8 = 0;
        ppppppplVar25 = local_1d0;
        while ((long ********)ppppppplVar25 != &local_1d8) {
          ppppppplVar26 = (long *******)ppppppplVar25[1];
          (*(code *)*ppppppplVar25[2])();
          FUN_71001b1870((long)ppppppplVar25);
          ppppppplVar25 = ppppppplVar26;
        }
      }
    } while (*(long *)(param_1 + 0x48) != 0);
  }
  (**(code **)(*plVar23 + 0x20))();
  return;
}

