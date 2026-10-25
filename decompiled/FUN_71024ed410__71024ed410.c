// addr:      71024ed410
// offset:    0x24ed410
// name:      FUN_71024ed410
// mangled:   
// signature: undefined __cdecl FUN_71024ed410(undefined8 * param_1, long * param_2, undefined8 param_3, byte * * * * param_4, undefined * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71024ed410(undefined8 *param_1,long *param_2,undefined8 param_3,byte ****param_4,
                   undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  long ***ppplVar13;
  int iVar14;
  undefined8 *puVar15;
  long ****pppplVar16;
  char *pcVar17;
  code *pcVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  int *piVar22;
  long *plVar23;
  ulong uVar24;
  float fVar25;
  uint local_80 [2];
  long ***local_78;
  long *local_70;
  uint local_68 [2];
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_71050c0740;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((long)param_1 + 100) = 0x101;
  *(undefined1 *)((long)param_1 + 0x66) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  (**(code **)(*param_2 + 0x540))(param_2,0);
  pppplVar16 = (long ****)0x2;
  FUN_71024d1810((uint *)&local_78,*DAT_710532a860,2,param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  lVar21 = DAT_7105332f20;
  uVar12 = (uint)local_78;
  uVar24 = (ulong)local_78 & 0xffffffff;
  if ((uint)local_78 != 0xffffff) {
    if ((uint)local_78 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      piVar22 = (int *)(*(long *)(lVar21 + 0x40) + uVar24 * 0x48);
      bVar9 = *(byte *)(piVar22 + 2);
      std::recursive_mutex::unlock();
      if ((((bVar9 & 1) != 0) && (piVar22 != (int *)0x0)) && (*piVar22 != 0xffffff)) {
        iVar14 = FUN_7103543080((long)piVar22);
        lVar21 = DAT_7105332f20;
        if (iVar14 == 3) {
          fVar25 = *(float *)(*DAT_710532a868 + (ulong)*(uint *)(*DAT_710532a860 + 0x78) * 0x138 +
                             0x540);
          if (uVar12 < *(uint *)(DAT_7105332f20 + 0x48)) {
            std::recursive_mutex::lock();
            lVar19 = *(long *)(lVar21 + 0x40);
            if ((*(byte *)(lVar19 + uVar24 * 0x48 + 8) & 1) != 0) {
              FUN_710353f5a0(lVar21,(int *)(lVar19 + uVar24 * 0x48),pppplVar16,param_4,
                             (long ****)param_5,param_6,param_7,param_8);
            }
            std::recursive_mutex::unlock();
          }
          local_78 = (long ***)CONCAT44(local_78._4_4_,0xffffff);
          if (0.0 < fVar25) {
            FUN_71024d1810(local_80,*DAT_710532a860,2,param_4,(long ****)param_5,param_6,param_7,
                           param_8);
            pcVar17 = "model.numdlb";
            FUN_710353e1d0((uint *)&local_78,local_80,(byte *)"model.numdlb");
            uVar12 = (uint)local_78;
            uVar24 = (ulong)local_78 & 0xffffffff;
            if ((uint)local_78 != 0xffffff) {
              FUN_7103540b10(DAT_7105332f20,(uint)local_78,(long *********)pcVar17,param_4,
                             (long ****)param_5,param_6,param_7,param_8);
            }
            if ((uVar12 == 0xffffff) ||
               (lVar21 = **(long **)(DAT_7105332f20 + 0x78),
               *(uint *)(*(long *)(lVar21 + 0x40) + 4) <= uVar12)) {
              local_78 = (long ***)0x0;
            }
            else {
              local_78 = (long ***)
                         (*(ulong *)(*(long *)(lVar21 + 0x60) + uVar24 * 0x20) & 0xffffffffff);
            }
            lVar21 = (*(long **)(DAT_7105332f20 + 0x78))[1];
            pcVar18 = FUN_7103542240;
            param_4 = (byte ****)&DAT_00000008;
            puVar15 = bsearch(&local_78,*(void **)(lVar21 + 0x20),
                              (ulong)*(uint *)(*(long *)(lVar21 + 8) + 8),8,FUN_7103542240);
            local_68[0] = 0xffffff;
            if (puVar15 != (undefined8 *)0x0) {
              uVar12 = (uint)((ulong)*puVar15 >> 0x20);
              uVar20 = uVar12 >> 8;
              if ((uVar20 != 0xffffff) &&
                 (uVar8 = *(uint *)(*(long *)(lVar21 + 8) + 4), local_68[0] = uVar12 >> 8,
                 uVar8 < uVar20 || uVar8 == local_68[0])) {
                local_68[0] = 0xffffff;
              }
            }
            pppplVar16 = (long ****)&DAT_00000004;
            FUN_71035c2890(&local_78,local_68,(long *********)&DAT_00000004,param_4,
                           (long ****)pcVar18,param_6,param_7,param_8);
            plVar1 = local_70;
            ppplVar13 = local_78;
            local_78 = (long ***)0x0;
            local_70 = (long *)0x0;
            plVar23 = (long *)param_1[5];
            param_1[4] = ppplVar13;
            param_1[5] = plVar1;
            if (plVar23 != (long *)0x0) {
              plVar1 = plVar23 + 1;
              do {
                lVar21 = *plVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar11) {
                  *plVar1 = lVar21 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_70 != (long *)0x0) {
              plVar1 = local_70 + 1;
              do {
                lVar21 = *plVar1;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar11) {
                  *plVar1 = lVar21 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*local_70 + 0x10))(local_70);
                std::__shared_weak_count::__release_weak();
              }
            }
            lVar21 = DAT_7105332f20;
            param_5 = pcVar18;
            if (local_80[0] != 0xffffff) {
              if (local_80[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
                std::recursive_mutex::lock();
                lVar19 = *(long *)(lVar21 + 0x40);
                if ((*(byte *)(lVar19 + (ulong)local_80[0] * 0x48 + 8) & 1) != 0) {
                  FUN_710353f5a0(lVar21,(int *)(lVar19 + (ulong)local_80[0] * 0x48),pppplVar16,
                                 param_4,(long ****)pcVar18,param_6,param_7,param_8);
                }
                std::recursive_mutex::unlock();
              }
              local_80[0] = 0xffffff;
              param_5 = pcVar18;
            }
          }
          goto LAB_71024ed658;
        }
      }
    }
    lVar21 = DAT_7105332f20;
    if (uVar12 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar19 = *(long *)(lVar21 + 0x40);
      if ((*(byte *)(lVar19 + uVar24 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar21,(int *)(lVar19 + uVar24 * 0x48),pppplVar16,param_4,(long ****)param_5,
                       param_6,param_7,param_8);
      }
      std::recursive_mutex::unlock();
    }
    local_78 = (long ***)CONCAT44(local_78._4_4_,0xffffff);
  }
LAB_71024ed658:
  lVar21 = *DAT_710532a868;
  uVar4 = *(undefined4 *)(lVar21 + 0x90);
  uVar2 = *(undefined4 *)(lVar21 + 0xb4);
  uVar3 = *(undefined4 *)(lVar21 + 0xb8);
  uVar5 = *(undefined4 *)(lVar21 + 0xbc);
  uVar6 = *(undefined4 *)(lVar21 + 0x10c);
  uVar7 = *(undefined4 *)(lVar21 + 0x110);
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,0x21d0,pppplVar16,param_4,(long ****)param_5,param_6,param_7,param_8
                          );
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68[0] = 0;
      local_78 = (long ***)0x21d0;
      pppplVar16 = &local_78;
      uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
      if (((uVar24 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,0x21d0,pppplVar16,param_4,(long ****)param_5,param_6,param_7
                                   ,param_8), puVar15 != (undefined8 *)0x0)) goto LAB_71024ed6d4;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_71024ed6d4:
  *puVar15 = &PTR_FUN_71050c07d8;
  puVar15[0x15] = 0;
  puVar15[0x16] = 0;
  puVar15[0x18] = 0;
  *(undefined4 *)(puVar15 + 0x22) = 0;
  *(undefined4 *)(puVar15 + 0x28) = 0;
  puVar15[0x13] = 0;
  puVar15[0x14] = 0;
  puVar15[0x11] = 0;
  puVar15[0x12] = 0;
  puVar15[0xf] = 0;
  puVar15[0x10] = 0;
  puVar15[0x1b] = 0;
  puVar15[0x1c] = 0;
  puVar15[0x19] = 0;
  puVar15[0x1a] = 0;
  puVar15[0x20] = 0;
  puVar15[0x21] = 0;
  puVar15[0x1e] = 0;
  puVar15[0x1f] = 0;
  puVar15[0x26] = 0;
  puVar15[0x27] = 0;
  puVar15[0x24] = 0;
  puVar15[0x25] = 0;
  memset(puVar15 + 0x29,0,0x2014);
  puVar15[0x432] = 0;
  puVar15[0x431] = 0;
  puVar15[0x430] = 0;
  puVar15[0x42f] = 0;
  puVar15[0x42e] = 0;
  puVar15[0x42d] = 0;
  puVar15[0x42c] = 0;
  puVar15[0x433] = 0x42b4000042b40000;
  puVar15[0x437] = 0;
  puVar15[0x436] = 0;
  puVar15[0x435] = 0;
  puVar15[0x438] = 0x3f80000000000000;
  puVar15[0x434] = 0;
  memset(puVar15 + 0x2b,0,0x2000);
  *(undefined1 *)((long)puVar15 + 0x21ce) = 0;
  *(undefined2 *)((long)puVar15 + 0x21cc) = 0;
  *(undefined4 *)(puVar15 + 0x439) = 0;
  *(undefined4 *)(puVar15 + 1) = uVar4;
  *(undefined1 **)((long)puVar15 + 0xc) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)puVar15 + 0x14) = &DAT_3f8000003f800000;
  *(undefined8 *)((long)puVar15 + 0x24) = 0;
  *(undefined8 *)((long)puVar15 + 0x1c) = 0;
  *(undefined8 *)((long)puVar15 + 0x2c) = 0x42b4000042b40000;
  *(undefined8 *)((long)puVar15 + 0x34) = 0x42b4000042b40000;
  *(undefined8 *)((long)puVar15 + 0x3c) = 0;
  *(undefined4 *)((long)puVar15 + 0x44) = uVar2;
  *(undefined4 *)(puVar15 + 9) = uVar3;
  *(undefined4 *)((long)puVar15 + 0x4c) = uVar5;
  puVar15[10] = 0;
  *(undefined4 *)(puVar15 + 0xd) = uVar6;
  *(undefined4 *)((long)puVar15 + 0x6c) = uVar7;
  *(undefined1 *)((long)puVar15 + 0x74) = 0;
  *(undefined4 *)(puVar15 + 0xe) = 0x43340000;
  puVar15[0xb] = 0;
  puVar15[0xc] = 0;
  param_1[2] = puVar15;
  (**(code **)(**(long **)(param_1[1] + 0x1d8) + 0x298))(*(long **)(param_1[1] + 0x1d8),1);
  return;
}

