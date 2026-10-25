// addr:      71038ce3e0
// offset:    0x38ce3e0
// name:      FUN_71038ce3e0
// mangled:   
// signature: undefined __cdecl FUN_71038ce3e0(undefined8 * param_1, uint * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038ce3e0(undefined8 *param_1,uint *param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  logic_error *this;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  undefined4 *puVar22;
  int *piVar23;
  int iVar24;
  undefined4 *puVar25;
  long lVar26;
  uint *puVar27;
  undefined8 uVar28;
  long ****pppplVar29;
  void *pvVar30;
  uint *puVar31;
  uint *puVar32;
  void *__dest;
  uint *puVar33;
  uint *puVar34;
  long lVar35;
  void *__src;
  uint *local_70;
  long ****local_68;
  
  iVar11 = FUN_710392e1f0(&local_70,0x10,(long ****)0x4c90,param_4,param_5,param_6,param_7,param_8);
  if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_68 = (long ****)0x4c90;
    uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68);
    if ((uVar13 & 1) != 0) {
      FUN_710392e1f0(&local_70,0x10,(long ****)0x4c90,param_4,param_5,param_6,param_7,param_8);
    }
  }
  puVar15 = local_70;
  nu::VirtualAllocHook(0x4c90,0x10,local_70);
  puVar9 = local_70;
  FUN_71037c3a70((undefined8 *)local_70);
  *(undefined ***)puVar9 = &PTR_FUN_7105291d28;
  puVar34 = puVar9 + 0xc;
  puVar9[4] = 0;
  *(uint **)(puVar9 + 6) = puVar34;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0x40;
  puVar9[0xb] = 0;
  *(uint **)(puVar9 + 0x130c) = puVar9 + 0x1312;
  puVar9[0x130e] = 0;
  puVar9[0x130f] = 0;
  puVar9[0x1310] = 0x40;
  puVar9[0x1311] = 0;
  *(undefined1 *)(puVar9 + 0x1322) = 0;
  if (*(long *)(param_2 + 2) != 0) {
    uVar5 = param_2[4];
    uVar13 = (ulong)uVar5;
    if ((uVar5 != 0) && (*param_2 != 0)) {
      if (uVar5 < 0x41) {
        uVar14 = 0;
        uVar13 = 0x40;
LAB_71038ce804:
        uVar17 = 0;
        iVar11 = 0;
        while( true ) {
          puVar33 = (uint *)(*(long *)(param_2 + 2) + uVar17 * 0x28);
          puVar32 = (uint *)(*(long *)(puVar9 + 6) + uVar14 * 0x130);
          if (uVar14 < uVar13) {
            FUN_71038cda50(puVar32,puVar33,puVar15,param_4,param_5,param_6,param_7,param_8);
            lVar21 = *(long *)(puVar9 + 8) + 1;
            *(long *)(puVar9 + 8) = lVar21;
          }
          else {
            if (-uVar13 == -0xd79435e50d7943) {
              this = (logic_error *)__cxa_allocate_exception(0x10);
              std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached")
              ;
              goto LAB_71038ceeb0;
            }
            uVar14 = uVar13;
            if (uVar13 == 0) {
              uVar14 = 1;
            }
            lVar16 = 0xd79435e50d7943;
            if (uVar14 <= -uVar13 + 0xd79435e50d7943) {
              lVar16 = uVar14 + uVar13;
            }
            pppplVar29 = (long ****)(lVar16 * 0x130);
            iVar12 = FUN_710392e1f0(&local_70,0x10,pppplVar29,param_4,param_5,param_6,param_7,
                                    param_8);
            if (((iVar12 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_68 = pppplVar29,
               uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68),
               (uVar13 & 1) != 0)) {
              FUN_710392e1f0(&local_70,0x10,pppplVar29,param_4,param_5,param_6,param_7,param_8);
            }
            puVar15 = local_70;
            nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_70);
            puVar10 = local_70;
            puVar27 = *(uint **)(puVar9 + 6);
            puVar31 = local_70;
            puVar8 = puVar27;
            if (puVar27 != (uint *)0x0) {
              for (; puVar8 != puVar32; puVar8 = puVar8 + 0x4c) {
                *puVar31 = *puVar8;
                uVar28 = *(undefined8 *)(puVar8 + 6);
                uVar3 = *(undefined8 *)(puVar8 + 4);
                *(undefined8 *)(puVar31 + 2) = *(undefined8 *)(puVar8 + 2);
                *(undefined8 *)(puVar31 + 4) = uVar3;
                *(undefined8 *)(puVar31 + 6) = uVar28;
                puVar8[2] = 0;
                puVar8[3] = 0;
                uVar3 = *(undefined8 *)(puVar8 + 8);
                uVar28 = *(undefined8 *)(puVar8 + 10);
                uVar4 = *(undefined8 *)(puVar8 + 0xe);
                puVar8[4] = 0;
                puVar8[5] = 0;
                puVar8[6] = 0;
                puVar8[7] = 0;
                *(undefined8 *)(puVar31 + 0xc) = *(undefined8 *)(puVar8 + 0xc);
                *(undefined8 *)(puVar31 + 0xe) = uVar4;
                *(undefined8 *)(puVar31 + 8) = uVar3;
                *(undefined8 *)(puVar31 + 10) = uVar28;
                uVar3 = *(undefined8 *)(puVar8 + 0x10);
                uVar28 = *(undefined8 *)(puVar8 + 0x12);
                uVar4 = *(undefined8 *)(puVar8 + 0x16);
                *(undefined8 *)(puVar31 + 0x14) = *(undefined8 *)(puVar8 + 0x14);
                *(undefined8 *)(puVar31 + 0x16) = uVar4;
                *(undefined8 *)(puVar31 + 0x10) = uVar3;
                *(undefined8 *)(puVar31 + 0x12) = uVar28;
                uVar3 = *(undefined8 *)(puVar8 + 0x18);
                uVar28 = *(undefined8 *)(puVar8 + 0x1a);
                uVar4 = *(undefined8 *)(puVar8 + 0x1e);
                *(undefined8 *)(puVar31 + 0x1c) = *(undefined8 *)(puVar8 + 0x1c);
                *(undefined8 *)(puVar31 + 0x1e) = uVar4;
                *(undefined8 *)(puVar31 + 0x18) = uVar3;
                *(undefined8 *)(puVar31 + 0x1a) = uVar28;
                *(undefined8 *)(puVar31 + 0x20) = *(undefined8 *)(puVar8 + 0x20);
                *(undefined8 *)(puVar31 + 0x22) = *(undefined8 *)(puVar8 + 0x22);
                uVar3 = *(undefined8 *)(puVar8 + 0x24);
                uVar28 = *(undefined8 *)(puVar8 + 0x26);
                uVar4 = *(undefined8 *)(puVar8 + 0x2a);
                *(undefined8 *)(puVar31 + 0x28) = *(undefined8 *)(puVar8 + 0x28);
                *(undefined8 *)(puVar31 + 0x2a) = uVar4;
                *(undefined8 *)(puVar31 + 0x24) = uVar3;
                *(undefined8 *)(puVar31 + 0x26) = uVar28;
                *(undefined8 *)(puVar31 + 0x2c) = *(undefined8 *)(puVar8 + 0x2c);
                uVar3 = *(undefined8 *)(puVar8 + 0x2e);
                uVar28 = *(undefined8 *)(puVar8 + 0x30);
                uVar4 = *(undefined8 *)(puVar8 + 0x34);
                *(undefined8 *)(puVar31 + 0x32) = *(undefined8 *)(puVar8 + 0x32);
                *(undefined8 *)(puVar31 + 0x34) = uVar4;
                *(undefined8 *)(puVar31 + 0x2e) = uVar3;
                *(undefined8 *)(puVar31 + 0x30) = uVar28;
                *(undefined8 *)(puVar31 + 0x36) = *(undefined8 *)(puVar8 + 0x36);
                *(undefined8 *)(puVar31 + 0x38) = *(undefined8 *)(puVar8 + 0x38);
                uVar3 = *(undefined8 *)(puVar8 + 0x3a);
                uVar28 = *(undefined8 *)(puVar8 + 0x3c);
                uVar4 = *(undefined8 *)(puVar8 + 0x40);
                *(undefined8 *)(puVar31 + 0x3e) = *(undefined8 *)(puVar8 + 0x3e);
                *(undefined8 *)(puVar31 + 0x40) = uVar4;
                *(undefined8 *)(puVar31 + 0x3a) = uVar3;
                *(undefined8 *)(puVar31 + 0x3c) = uVar28;
                *(undefined8 *)(puVar31 + 0x42) = *(undefined8 *)(puVar8 + 0x42);
                uVar3 = *(undefined8 *)(puVar8 + 0x44);
                uVar28 = *(undefined8 *)(puVar8 + 0x46);
                uVar4 = *(undefined8 *)(puVar8 + 0x4a);
                *(undefined8 *)(puVar31 + 0x48) = *(undefined8 *)(puVar8 + 0x48);
                *(undefined8 *)(puVar31 + 0x4a) = uVar4;
                *(undefined8 *)(puVar31 + 0x44) = uVar3;
                *(undefined8 *)(puVar31 + 0x46) = uVar28;
                puVar31 = puVar31 + 0x4c;
              }
            }
            FUN_71038cda50(puVar31,puVar33,puVar15,param_4,param_5,param_6,param_7,param_8);
            puVar31 = puVar31 + 0x4c;
            if (puVar27 != (uint *)0x0) {
              lVar21 = *(long *)(puVar9 + 8);
              if (puVar32 != puVar27 + lVar21 * 0x4c) {
                do {
                  *puVar31 = *puVar32;
                  uVar28 = *(undefined8 *)(puVar32 + 6);
                  uVar3 = *(undefined8 *)(puVar32 + 4);
                  *(undefined8 *)(puVar31 + 2) = *(undefined8 *)(puVar32 + 2);
                  *(undefined8 *)(puVar31 + 4) = uVar3;
                  *(undefined8 *)(puVar31 + 6) = uVar28;
                  puVar32[2] = 0;
                  puVar32[3] = 0;
                  uVar3 = *(undefined8 *)(puVar32 + 8);
                  uVar28 = *(undefined8 *)(puVar32 + 10);
                  uVar4 = *(undefined8 *)(puVar32 + 0xe);
                  puVar32[4] = 0;
                  puVar32[5] = 0;
                  puVar32[6] = 0;
                  puVar32[7] = 0;
                  *(undefined8 *)(puVar31 + 0xc) = *(undefined8 *)(puVar32 + 0xc);
                  *(undefined8 *)(puVar31 + 0xe) = uVar4;
                  *(undefined8 *)(puVar31 + 8) = uVar3;
                  *(undefined8 *)(puVar31 + 10) = uVar28;
                  uVar3 = *(undefined8 *)(puVar32 + 0x10);
                  uVar28 = *(undefined8 *)(puVar32 + 0x12);
                  uVar4 = *(undefined8 *)(puVar32 + 0x16);
                  *(undefined8 *)(puVar31 + 0x14) = *(undefined8 *)(puVar32 + 0x14);
                  *(undefined8 *)(puVar31 + 0x16) = uVar4;
                  *(undefined8 *)(puVar31 + 0x10) = uVar3;
                  *(undefined8 *)(puVar31 + 0x12) = uVar28;
                  uVar3 = *(undefined8 *)(puVar32 + 0x18);
                  uVar28 = *(undefined8 *)(puVar32 + 0x1a);
                  uVar4 = *(undefined8 *)(puVar32 + 0x1e);
                  *(undefined8 *)(puVar31 + 0x1c) = *(undefined8 *)(puVar32 + 0x1c);
                  *(undefined8 *)(puVar31 + 0x1e) = uVar4;
                  *(undefined8 *)(puVar31 + 0x18) = uVar3;
                  *(undefined8 *)(puVar31 + 0x1a) = uVar28;
                  *(undefined8 *)(puVar31 + 0x20) = *(undefined8 *)(puVar32 + 0x20);
                  *(undefined8 *)(puVar31 + 0x22) = *(undefined8 *)(puVar32 + 0x22);
                  uVar3 = *(undefined8 *)(puVar32 + 0x24);
                  uVar28 = *(undefined8 *)(puVar32 + 0x26);
                  uVar4 = *(undefined8 *)(puVar32 + 0x2a);
                  *(undefined8 *)(puVar31 + 0x28) = *(undefined8 *)(puVar32 + 0x28);
                  *(undefined8 *)(puVar31 + 0x2a) = uVar4;
                  *(undefined8 *)(puVar31 + 0x24) = uVar3;
                  *(undefined8 *)(puVar31 + 0x26) = uVar28;
                  *(undefined8 *)(puVar31 + 0x2c) = *(undefined8 *)(puVar32 + 0x2c);
                  uVar3 = *(undefined8 *)(puVar32 + 0x2e);
                  uVar28 = *(undefined8 *)(puVar32 + 0x30);
                  uVar4 = *(undefined8 *)(puVar32 + 0x34);
                  *(undefined8 *)(puVar31 + 0x32) = *(undefined8 *)(puVar32 + 0x32);
                  *(undefined8 *)(puVar31 + 0x34) = uVar4;
                  *(undefined8 *)(puVar31 + 0x2e) = uVar3;
                  *(undefined8 *)(puVar31 + 0x30) = uVar28;
                  *(undefined8 *)(puVar31 + 0x36) = *(undefined8 *)(puVar32 + 0x36);
                  *(undefined8 *)(puVar31 + 0x38) = *(undefined8 *)(puVar32 + 0x38);
                  uVar3 = *(undefined8 *)(puVar32 + 0x3a);
                  uVar28 = *(undefined8 *)(puVar32 + 0x3c);
                  uVar4 = *(undefined8 *)(puVar32 + 0x40);
                  *(undefined8 *)(puVar31 + 0x3e) = *(undefined8 *)(puVar32 + 0x3e);
                  *(undefined8 *)(puVar31 + 0x40) = uVar4;
                  *(undefined8 *)(puVar31 + 0x3a) = uVar3;
                  *(undefined8 *)(puVar31 + 0x3c) = uVar28;
                  *(undefined8 *)(puVar31 + 0x42) = *(undefined8 *)(puVar32 + 0x42);
                  uVar3 = *(undefined8 *)(puVar32 + 0x44);
                  uVar28 = *(undefined8 *)(puVar32 + 0x46);
                  puVar33 = puVar32 + 0x48;
                  uVar4 = *(undefined8 *)(puVar32 + 0x4a);
                  puVar32 = puVar32 + 0x4c;
                  *(undefined8 *)(puVar31 + 0x48) = *(undefined8 *)puVar33;
                  *(undefined8 *)(puVar31 + 0x4a) = uVar4;
                  *(undefined8 *)(puVar31 + 0x44) = uVar3;
                  *(undefined8 *)(puVar31 + 0x46) = uVar28;
                  puVar31 = puVar31 + 0x4c;
                } while (puVar32 != puVar27 + lVar21 * 0x4c);
                lVar21 = *(long *)(puVar9 + 8);
              }
              if (lVar21 != 0) {
                puVar27 = puVar27 + 6;
                do {
                  if ((puVar27[-4] & 1) != 0) {
                    pvVar30 = *(void **)puVar27;
                    nu::VirtualFreeHook(pvVar30);
                    FUN_710392eb40((ulong)pvVar30);
                  }
                  lVar21 = lVar21 + -1;
                  puVar27 = puVar27 + 0x4c;
                } while (lVar21 != 0);
              }
              puVar32 = *(uint **)(puVar9 + 6);
              if (puVar32 != puVar34) {
                nu::VirtualFreeHook(puVar32);
                FUN_710392eb40((ulong)puVar32);
              }
            }
            lVar21 = ((long)puVar31 - (long)puVar10 >> 4) * -0x79435e50d79435e5;
            *(uint **)(puVar9 + 6) = puVar10;
            *(long *)(puVar9 + 8) = lVar21;
            *(long *)(puVar9 + 10) = lVar16;
          }
          uVar6 = *(uint *)(*(long *)(param_2 + 2) + uVar17 * 0x28);
          uVar5 = uVar6 & 0xff00;
          iVar12 = (uVar6 >> 1 & 1) + (uVar6 & 1) + (uVar6 >> 2 & 1) + (uVar6 >> 3 & 1);
          if (uVar6 >> 0x1c == 3) {
            iVar12 = ((uVar6 >> 2 & 3) + 1) * ((uVar6 & 3) + 1);
          }
          if (uVar5 == 0x300) {
            iVar24 = 4;
          }
          else if (uVar5 == 0x200) {
            iVar24 = 2;
          }
          else if (uVar5 == 0x100) {
            iVar24 = 1;
          }
          else {
            iVar24 = 0;
          }
          piVar23 = (int *)(*(long *)(puVar9 + 6) + (lVar21 + -1) * 0x130);
          iVar20 = *piVar23;
          if (iVar20 == -1) {
            *piVar23 = iVar11;
            iVar20 = iVar11;
          }
          uVar17 = uVar17 + 1;
          if (param_2[4] <= uVar17) break;
          iVar11 = iVar20 + iVar24 * iVar12;
          uVar14 = *(ulong *)(puVar9 + 8);
          uVar13 = *(ulong *)(puVar9 + 10);
        }
      }
      else {
        pppplVar29 = (long ****)(uVar13 * 0x130);
        iVar11 = FUN_710392e1f0(&local_70,0x10,pppplVar29,param_4,param_5,param_6,param_7,param_8);
        if (((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_68 = pppplVar29,
           uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68),
           (uVar14 & 1) != 0)) {
          FUN_710392e1f0(&local_70,0x10,pppplVar29,param_4,param_5,param_6,param_7,param_8);
        }
        puVar15 = local_70;
        nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_70);
        puVar33 = local_70;
        lVar16 = *(long *)(puVar9 + 6);
        puVar32 = local_70;
        if (lVar16 != 0) {
          if (*(long *)(puVar9 + 8) != 0) {
            puVar22 = (undefined4 *)(lVar16 + *(long *)(puVar9 + 8) * 0x130);
            lVar21 = 0;
            do {
              puVar25 = (undefined4 *)(lVar16 + lVar21);
              puVar1 = (undefined4 *)((long)local_70 + lVar21);
              lVar21 = lVar21 + 0x130;
              *puVar1 = *puVar25;
              uVar28 = *(undefined8 *)(puVar25 + 6);
              uVar3 = *(undefined8 *)(puVar25 + 4);
              *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(puVar25 + 2);
              *(undefined8 *)(puVar1 + 4) = uVar3;
              *(undefined8 *)(puVar1 + 6) = uVar28;
              *(undefined8 *)(puVar25 + 2) = 0;
              uVar3 = *(undefined8 *)(puVar25 + 8);
              uVar28 = *(undefined8 *)(puVar25 + 10);
              uVar4 = *(undefined8 *)(puVar25 + 0xe);
              *(undefined8 *)(puVar25 + 4) = 0;
              *(undefined8 *)(puVar25 + 6) = 0;
              *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(puVar25 + 0xc);
              *(undefined8 *)(puVar1 + 0xe) = uVar4;
              *(undefined8 *)(puVar1 + 8) = uVar3;
              *(undefined8 *)(puVar1 + 10) = uVar28;
              uVar3 = *(undefined8 *)(puVar25 + 0x10);
              uVar28 = *(undefined8 *)(puVar25 + 0x12);
              uVar4 = *(undefined8 *)(puVar25 + 0x16);
              *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(puVar25 + 0x14);
              *(undefined8 *)(puVar1 + 0x16) = uVar4;
              *(undefined8 *)(puVar1 + 0x10) = uVar3;
              *(undefined8 *)(puVar1 + 0x12) = uVar28;
              uVar3 = *(undefined8 *)(puVar25 + 0x18);
              uVar28 = *(undefined8 *)(puVar25 + 0x1a);
              uVar4 = *(undefined8 *)(puVar25 + 0x1e);
              *(undefined8 *)(puVar1 + 0x1c) = *(undefined8 *)(puVar25 + 0x1c);
              *(undefined8 *)(puVar1 + 0x1e) = uVar4;
              *(undefined8 *)(puVar1 + 0x18) = uVar3;
              *(undefined8 *)(puVar1 + 0x1a) = uVar28;
              *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(puVar25 + 0x20);
              *(undefined8 *)(puVar1 + 0x22) = *(undefined8 *)(puVar25 + 0x22);
              uVar3 = *(undefined8 *)(puVar25 + 0x24);
              uVar28 = *(undefined8 *)(puVar25 + 0x26);
              uVar4 = *(undefined8 *)(puVar25 + 0x2a);
              *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(puVar25 + 0x28);
              *(undefined8 *)(puVar1 + 0x2a) = uVar4;
              *(undefined8 *)(puVar1 + 0x24) = uVar3;
              *(undefined8 *)(puVar1 + 0x26) = uVar28;
              *(undefined8 *)(puVar1 + 0x2c) = *(undefined8 *)(puVar25 + 0x2c);
              uVar3 = *(undefined8 *)(puVar25 + 0x2e);
              uVar28 = *(undefined8 *)(puVar25 + 0x30);
              uVar4 = *(undefined8 *)(puVar25 + 0x34);
              *(undefined8 *)(puVar1 + 0x32) = *(undefined8 *)(puVar25 + 0x32);
              *(undefined8 *)(puVar1 + 0x34) = uVar4;
              *(undefined8 *)(puVar1 + 0x2e) = uVar3;
              *(undefined8 *)(puVar1 + 0x30) = uVar28;
              *(undefined8 *)(puVar1 + 0x36) = *(undefined8 *)(puVar25 + 0x36);
              *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(puVar25 + 0x38);
              uVar3 = *(undefined8 *)(puVar25 + 0x3a);
              uVar28 = *(undefined8 *)(puVar25 + 0x3c);
              uVar4 = *(undefined8 *)(puVar25 + 0x40);
              *(undefined8 *)(puVar1 + 0x3e) = *(undefined8 *)(puVar25 + 0x3e);
              *(undefined8 *)(puVar1 + 0x40) = uVar4;
              *(undefined8 *)(puVar1 + 0x3a) = uVar3;
              *(undefined8 *)(puVar1 + 0x3c) = uVar28;
              *(undefined8 *)(puVar1 + 0x42) = *(undefined8 *)(puVar25 + 0x42);
              uVar3 = *(undefined8 *)(puVar25 + 0x44);
              uVar28 = *(undefined8 *)(puVar25 + 0x46);
              uVar4 = *(undefined8 *)(puVar25 + 0x4a);
              *(undefined8 *)(puVar1 + 0x48) = *(undefined8 *)(puVar25 + 0x48);
              *(undefined8 *)(puVar1 + 0x4a) = uVar4;
              *(undefined8 *)(puVar1 + 0x44) = uVar3;
              *(undefined8 *)(puVar1 + 0x46) = uVar28;
            } while (puVar25 + 0x4c != puVar22);
            lVar35 = *(long *)(puVar9 + 8);
            puVar25 = (undefined4 *)(lVar16 + lVar35 * 0x130);
            puVar32 = (uint *)((long)local_70 + lVar21);
            if (puVar22 != puVar25) {
              lVar26 = 0;
              do {
                puVar1 = (undefined4 *)((long)puVar22 + lVar26);
                puVar2 = (undefined4 *)((long)local_70 + lVar21 + lVar26);
                *puVar2 = *puVar1;
                uVar28 = *(undefined8 *)(puVar1 + 6);
                uVar3 = *(undefined8 *)(puVar1 + 4);
                *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
                *(undefined8 *)(puVar2 + 4) = uVar3;
                *(undefined8 *)(puVar2 + 6) = uVar28;
                *(undefined8 *)(puVar1 + 2) = 0;
                uVar3 = *(undefined8 *)(puVar1 + 8);
                uVar28 = *(undefined8 *)(puVar1 + 10);
                lVar26 = lVar26 + 0x130;
                uVar4 = *(undefined8 *)(puVar1 + 0xe);
                *(undefined8 *)(puVar1 + 4) = 0;
                *(undefined8 *)(puVar1 + 6) = 0;
                *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
                *(undefined8 *)(puVar2 + 0xe) = uVar4;
                *(undefined8 *)(puVar2 + 8) = uVar3;
                *(undefined8 *)(puVar2 + 10) = uVar28;
                uVar3 = *(undefined8 *)(puVar1 + 0x10);
                uVar28 = *(undefined8 *)(puVar1 + 0x12);
                uVar4 = *(undefined8 *)(puVar1 + 0x16);
                *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(puVar1 + 0x14);
                *(undefined8 *)(puVar2 + 0x16) = uVar4;
                *(undefined8 *)(puVar2 + 0x10) = uVar3;
                *(undefined8 *)(puVar2 + 0x12) = uVar28;
                uVar3 = *(undefined8 *)(puVar1 + 0x18);
                uVar28 = *(undefined8 *)(puVar1 + 0x1a);
                uVar4 = *(undefined8 *)(puVar1 + 0x1e);
                *(undefined8 *)(puVar2 + 0x1c) = *(undefined8 *)(puVar1 + 0x1c);
                *(undefined8 *)(puVar2 + 0x1e) = uVar4;
                *(undefined8 *)(puVar2 + 0x18) = uVar3;
                *(undefined8 *)(puVar2 + 0x1a) = uVar28;
                *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(puVar1 + 0x20);
                *(undefined8 *)(puVar2 + 0x22) = *(undefined8 *)(puVar1 + 0x22);
                uVar3 = *(undefined8 *)(puVar1 + 0x24);
                uVar28 = *(undefined8 *)(puVar1 + 0x26);
                uVar4 = *(undefined8 *)(puVar1 + 0x2a);
                *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(puVar1 + 0x28);
                *(undefined8 *)(puVar2 + 0x2a) = uVar4;
                *(undefined8 *)(puVar2 + 0x24) = uVar3;
                *(undefined8 *)(puVar2 + 0x26) = uVar28;
                *(undefined8 *)(puVar2 + 0x2c) = *(undefined8 *)(puVar1 + 0x2c);
                uVar3 = *(undefined8 *)(puVar1 + 0x2e);
                uVar28 = *(undefined8 *)(puVar1 + 0x30);
                uVar4 = *(undefined8 *)(puVar1 + 0x34);
                *(undefined8 *)(puVar2 + 0x32) = *(undefined8 *)(puVar1 + 0x32);
                *(undefined8 *)(puVar2 + 0x34) = uVar4;
                *(undefined8 *)(puVar2 + 0x2e) = uVar3;
                *(undefined8 *)(puVar2 + 0x30) = uVar28;
                *(undefined8 *)(puVar2 + 0x36) = *(undefined8 *)(puVar1 + 0x36);
                *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(puVar1 + 0x38);
                uVar3 = *(undefined8 *)(puVar1 + 0x3a);
                uVar28 = *(undefined8 *)(puVar1 + 0x3c);
                uVar4 = *(undefined8 *)(puVar1 + 0x40);
                *(undefined8 *)(puVar2 + 0x3e) = *(undefined8 *)(puVar1 + 0x3e);
                *(undefined8 *)(puVar2 + 0x40) = uVar4;
                *(undefined8 *)(puVar2 + 0x3a) = uVar3;
                *(undefined8 *)(puVar2 + 0x3c) = uVar28;
                *(undefined8 *)(puVar2 + 0x42) = *(undefined8 *)(puVar1 + 0x42);
                uVar3 = *(undefined8 *)(puVar1 + 0x44);
                uVar28 = *(undefined8 *)(puVar1 + 0x46);
                uVar4 = *(undefined8 *)(puVar1 + 0x4a);
                *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)(puVar1 + 0x48);
                *(undefined8 *)(puVar2 + 0x4a) = uVar4;
                *(undefined8 *)(puVar2 + 0x44) = uVar3;
                *(undefined8 *)(puVar2 + 0x46) = uVar28;
              } while (puVar1 + 0x4c != puVar25);
              lVar35 = *(long *)(puVar9 + 8);
              puVar32 = (uint *)((long)puVar32 + lVar26);
            }
            if (lVar35 != 0) {
              puVar19 = (undefined8 *)(lVar16 + 0x18);
              do {
                if ((*(byte *)(puVar19 + -2) & 1) != 0) {
                  pvVar30 = (void *)*puVar19;
                  nu::VirtualFreeHook(pvVar30);
                  FUN_710392eb40((ulong)pvVar30);
                }
                lVar35 = lVar35 + -1;
                puVar19 = puVar19 + 0x26;
              } while (lVar35 != 0);
            }
          }
          puVar31 = *(uint **)(puVar9 + 6);
          if (puVar31 != puVar34) {
            nu::VirtualFreeHook(puVar31);
            FUN_710392eb40((ulong)puVar31);
          }
        }
        uVar14 = ((long)puVar32 - (long)puVar33 >> 4) * -0x79435e50d79435e5;
        *(uint **)(puVar9 + 6) = puVar33;
        *(ulong *)(puVar9 + 8) = uVar14;
        *(ulong *)(puVar9 + 10) = uVar13;
        if (param_2[4] != 0) goto LAB_71038ce804;
      }
      uVar13 = (ulong)*param_2;
      puVar9[4] = *param_2;
      if (*(long *)(param_2 + 6) != 0) {
        uVar14 = *(ulong *)(puVar9 + 0x130e);
        if (uVar13 < uVar14) {
LAB_71038cedf4:
          *(ulong *)(puVar9 + 0x130e) = uVar13;
        }
        else {
          uVar13 = uVar13 - uVar14;
          pvVar30 = (void *)(*(long *)(puVar9 + 0x130c) + uVar14);
          uVar17 = *(ulong *)(puVar9 + 0x1310);
          if (uVar17 - uVar14 < uVar13) {
            if (~uVar17 < uVar13) {
              this = (logic_error *)__cxa_allocate_exception(0x10);
              std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached")
              ;
LAB_71038ceeb0:
              *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
            }
            uVar14 = uVar13;
            if (uVar13 <= uVar17) {
              uVar14 = uVar17;
            }
            pppplVar29 = (long ****)(uVar14 + uVar17);
            if (~uVar17 < uVar14) {
              pppplVar29 = (long ****)0xffffffffffffffff;
            }
            iVar11 = FUN_710392e1f0(&local_70,0x10,pppplVar29,param_4,param_5,param_6,param_7,
                                    param_8);
            if (((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_68 = pppplVar29,
               uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68),
               (uVar14 & 1) != 0)) {
              FUN_710392e1f0(&local_70,0x10,pppplVar29,param_4,param_5,param_6,param_7,param_8);
            }
            nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_70);
            __src = *(void **)(puVar9 + 0x130c);
            if (__src == (void *)0x0) {
              memset(local_70,0,uVar13);
              __dest = (void *)((long)local_70 + uVar13);
            }
            else {
              sVar7 = (long)pvVar30 - (long)__src;
              puVar34 = local_70;
              if (sVar7 != 0) {
                memmove(local_70,__src,sVar7);
                puVar34 = (uint *)((long)local_70 + sVar7);
              }
              memset(puVar34,0,uVar13);
              __dest = (void *)((long)puVar34 + uVar13);
              sVar7 = (long)__src + (*(long *)(puVar9 + 0x130e) - (long)pvVar30);
              if (sVar7 != 0) {
                memmove(__dest,pvVar30,sVar7);
                __dest = (void *)((long)__dest + sVar7);
              }
              puVar34 = *(uint **)(puVar9 + 0x130c);
              if (puVar34 != puVar9 + 0x1312) {
                nu::VirtualFreeHook(puVar34);
                FUN_710392eb40((ulong)puVar34);
              }
            }
            uVar13 = (long)__dest - (long)local_70;
            *(uint **)(puVar9 + 0x130c) = local_70;
            *(long *****)(puVar9 + 0x1310) = pppplVar29;
            goto LAB_71038cedf4;
          }
          if (uVar13 != 0) {
            memset(pvVar30,0,uVar13);
            uVar13 = *(long *)(puVar9 + 0x130e) + uVar13;
            goto LAB_71038cedf4;
          }
        }
        memcpy(*(void **)(puVar9 + 0x130c),*(void **)(param_2 + 6),(ulong)*param_2);
      }
      uVar13 = *(ulong *)(puVar9 + 8);
      if (uVar13 != 0) {
        uVar14 = 1;
        uVar17 = 0;
        do {
          uVar18 = uVar14;
          if (*(long *)(puVar9 + 0x130e) != 0) {
            puVar34 = (uint *)(*(long *)(puVar9 + 6) + uVar17 * 0x130);
            *(ulong *)(puVar34 + 10) = *(long *)(puVar9 + 0x130c) + (ulong)*puVar34;
            uVar13 = *(ulong *)(puVar9 + 8);
          }
          uVar14 = (ulong)((int)uVar18 + 1);
          uVar17 = uVar18;
        } while (uVar18 < uVar13);
      }
      *(undefined1 *)(puVar9 + 0x1322) = 1;
      puVar19 = *(undefined8 **)(puVar9 + 2);
      param_1[1] = puVar9;
      param_1[2] = puVar19;
      param_1[3] = *puVar19;
      goto LAB_71038cee6c;
    }
  }
  FUN_71038ce2b0((undefined8 *)puVar9);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
LAB_71038cee6c:
  *param_1 = &PTR_FUN_7105239490;
  return;
}

