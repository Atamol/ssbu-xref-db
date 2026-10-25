// addr:      7100208570
// offset:    0x208570
// name:      FUN_7100208570
// mangled:   
// signature: undefined __cdecl FUN_7100208570(long param_1, long param_2)


void FUN_7100208570(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined **local_b0;
  undefined2 local_a8;
  long local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  char local_78;
  long local_70;
  ulong local_68;
  
  FUN_71001d01c0(&uStack_80,*(long *)(param_2 + 0x138));
  uVar9 = *(ulong *)(local_70 + 0x18);
  if (local_68 < uVar9) {
    lVar14 = local_70;
LAB_71002085c8:
    do {
      lVar2 = *(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 0x28);
      uVar16 = local_68 + 1;
      bVar3 = *(byte *)(lVar2 + local_68);
      uVar11 = (ulong)bVar3;
      if (uVar9 == uVar16) {
LAB_7100208960:
        local_68 = uVar16;
        local_78 = '\x01';
        break;
      }
      bVar4 = *(byte *)(lVar2 + uVar16);
      uVar16 = local_68 + 2;
      if (uVar9 - uVar16 < 2) goto LAB_7100208960;
      sVar5 = *(short *)(lVar2 + uVar16);
      local_68 = local_68 + 4;
      if (local_78 != '\0') break;
      uVar16 = local_68;
      if (uVar9 - local_68 < (ulong)bVar4 * 2) goto LAB_7100208960;
      if (*(ushort *)(param_1 + 0x180) < (ushort)bVar3) {
        uVar16 = local_68 + (ulong)bVar4 * 2;
        if (uVar16 <= uVar9) {
          local_68 = uVar16;
        }
        uVar9 = *(ulong *)(lVar14 + 0x18);
        if (uVar9 <= local_68) break;
        goto LAB_71002085c8;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 0xe0) + uVar11 * 8);
      plVar15 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar13 = *puVar7;
        if (uVar13 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar13)
          goto LAB_7100208990;
          plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar13 * 8) + 0x20);
        }
      }
      (**(code **)(*(long *)(*(long *)(*(long *)(*plVar15 + 0x10) + 0x10) + 0x78) + 0x10))();
      plVar15 = *(long **)(lVar14 + 8);
      if ((long *)(*(long *)(*(long *)(param_1 + 0xe0) + uVar11 * 8) + 0x10) == plVar15) {
        local_98 = (undefined8 *)0x0;
        local_90 = (undefined8 *)0x0;
        local_88 = (undefined8 *)0x0;
      }
      else {
        lVar14 = plVar15[6];
        local_98 = (undefined8 *)0x0;
        local_90 = (undefined8 *)0x0;
        local_88 = (undefined8 *)0x0;
        if (lVar14 != 0) {
          while (sVar5 == *(short *)(lVar14 + 0x70) ||
                 0 < (short)(sVar5 - *(short *)(lVar14 + 0x70))) {
            if (local_90 == local_88) {
              FUN_710021e5e0((long *)&local_98,(long)(plVar15 + 4));
              plVar8 = (long *)plVar15[1];
              if ((long *)plVar15[1] != (long *)0x0) goto LAB_7100208768;
LAB_7100208778:
              plVar8 = plVar15 + 2;
              plVar10 = (long *)*plVar8;
              if ((long *)*plVar10 != plVar15) {
                do {
                  lVar14 = *plVar8;
                  plVar8 = (long *)(lVar14 + 0x10);
                  plVar10 = (long *)*plVar8;
                } while (*plVar10 != lVar14);
              }
            }
            else {
              *local_90 = &PTR_FUN_7104f59348;
              *(short *)(local_90 + 1) = (short)plVar15[5];
              local_90 = local_90 + 2;
              plVar8 = (long *)plVar15[1];
              if ((long *)plVar15[1] == (long *)0x0) goto LAB_7100208778;
LAB_7100208768:
              do {
                plVar10 = plVar8;
                plVar8 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
            }
            if (((long *)(*(long *)(*(long *)(param_1 + 0xe0) + uVar11 * 8) + 0x10) == plVar10) ||
               (lVar14 = plVar10[6], plVar15 = plVar10, lVar14 == 0)) break;
          }
        }
      }
      plVar15 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar13 = *puVar7;
        if (uVar13 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar13) {
LAB_7100208990:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar13 * 8) + 0x20);
        }
      }
      (**(code **)(*(long *)(*(long *)(*(long *)(*plVar15 + 0x10) + 0x10) + 0x78) + 0x20))();
      if (local_90 != local_98) {
        uVar9 = 0;
        uVar16 = 1;
        do {
          local_b0 = *(undefined ***)(param_2 + 0x1d0);
          FUN_7100208190(param_1,(long *)&local_b0,(long)(local_98 + uVar9 * 2),(ulong)(uint)bVar3);
          bVar1 = uVar16 < (ulong)((long)local_90 - (long)local_98 >> 4);
          uVar9 = uVar16;
          uVar16 = (ulong)((int)uVar16 + 1);
        } while (bVar1);
      }
      puVar6 = local_98;
      lVar14 = local_70;
      if (bVar4 != 0) {
        uVar13 = 0;
        do {
          if (*(long *)(local_70 + 0x18) - local_68 < 2) {
            local_78 = '\x01';
            puVar6 = local_98;
            lVar14 = local_70;
            break;
          }
          local_a8 = *(undefined2 *)
                      (*(long *)(local_70 + 0x10) + *(long *)(local_70 + 0x28) + local_68);
          local_68 = local_68 + 2;
          local_a0 = *(long *)(param_2 + 0x1d0);
          local_b0 = &PTR_FUN_7104f59348;
          FUN_7100208190(param_1,&local_a0,(long)&local_b0,(ulong)(uint)bVar3);
          uVar13 = uVar13 + 1;
          puVar6 = local_98;
          lVar14 = local_70;
        } while (uVar13 < bVar4);
      }
      local_98 = puVar6;
      puVar12 = local_90;
      local_70 = lVar14;
      if (puVar6 == (undefined8 *)0x0) {
        uVar9 = *(ulong *)(lVar14 + 0x18);
        if (uVar9 <= local_68) break;
        goto LAB_71002085c8;
      }
      while (puVar12 != puVar6) {
        puVar12 = puVar12 + -2;
        (**(code **)*puVar12)(puVar12);
      }
      local_90 = puVar6;
      FUN_71001b1870((long)local_98);
      uVar9 = *(ulong *)(local_70 + 0x18);
      lVar14 = local_70;
    } while (local_68 < uVar9);
  }
  FUN_71001d0250(&uStack_80);
  return;
}

