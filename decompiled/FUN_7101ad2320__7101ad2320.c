// addr:      7101ad2320
// offset:    0x1ad2320
// name:      FUN_7101ad2320
// mangled:   
// signature: undefined __cdecl FUN_7101ad2320(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ad2320(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined **ppuVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  long lVar15;
  float fVar16;
  undefined **local_c0;
  undefined **local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined **local_80;
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    *(undefined1 *)(*(long *)(param_2 + 8) + 0x4aa) = 1;
  }
  if ((*(int *)(param_1 + 0x240) != 0) &&
     (iVar4 = *(int *)(param_1 + 0x240) + -1, *(int *)(param_1 + 0x240) = iVar4, iVar4 == 0)) {
    FUN_7103776640(&local_80,param_1 + 0x100,(byte ****)"set_parts_text_scroll",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppuVar14 = local_78;
    if (local_78[1] != (undefined *)0x0) {
      puVar13 = *(undefined8 **)(local_78[1] + 0x78);
      if (((DAT_710593ba40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_710593ba40), iVar4 != 0))
      {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&DAT_710593ba48), iVar4 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      ppuVar14 = local_78;
      if (puVar13 != (undefined8 *)0x0) {
        for (puVar5 = (undefined8 *)(**(code **)*puVar13)(puVar13); ppuVar14 = local_78,
            puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
          if ((undefined8 **)puVar5 == &DAT_710593ba58) {
            lVar9 = puVar13[3];
            *(undefined4 *)(puVar13 + 0xb) = *(undefined4 *)((long)puVar13 + 0x54);
            if (lVar9 != 0) {
              *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)((long)puVar13 + 0x54);
              *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
            }
            lVar9 = puVar13[4];
            if (lVar9 != 0) {
              *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(puVar13 + 0xb);
              *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
            }
            if ((long *)puVar13[5] != (long *)0x0) {
              (**(code **)(*(long *)puVar13[5] + 0x180))(0);
            }
            plVar6 = (long *)puVar13[6];
            if (plVar6 != (long *)0x0) {
              if (*(char *)((long)puVar13 + 99) == '\0') {
                (**(code **)(*plVar6 + 0x180))(0);
              }
              else {
                (**(code **)(*plVar6 + 400))();
              }
            }
            *(undefined2 *)((long)puVar13 + 100) = 1;
            ppuVar14 = local_78;
            break;
          }
        }
      }
    }
    local_80 = &PTR_FUN_710523d988;
    local_78 = (undefined **)0x0;
    if (ppuVar14 != (undefined **)0x0) {
      puVar7 = ppuVar14[3];
      ppuVar14[2] = (undefined *)&PTR_FUN_710523d9a8;
      ppuVar14[3] = (undefined *)0x0;
      if (puVar7 != (undefined *)0x0) {
        FUN_710392eb40((ulong)puVar7);
      }
      FUN_710392eb40((ulong)ppuVar14);
    }
  }
  lVar9 = DAT_710532f820;
  if (*(char *)(param_1 + 0x260) != '\0') {
    return;
  }
  lVar15 = *(long *)(DAT_710532f820 + 8);
  uVar8 = FUN_7101eefe30(*(long *)(*(long *)(lVar15 + 0x110) + 0x80));
  if (((*(int *)(lVar15 + 0xf8) == 0 && (((uint)uVar8 ^ 0xffffffff) & 1) == 0) &&
       *(char *)(lVar15 + 0x142) == '\0') || (*(int *)(*(long *)(lVar9 + 8) + 0xf8) - 3U < 2)) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x110) + 0x25c);
    if (iVar4 != -1) {
      *(undefined1 *)(*(long *)(param_2 + 8) + 0x4aa) = 0;
      lVar9 = DAT_710532f820;
      if (iVar4 == 1) {
        if (*(char *)(param_1 + 0x250) == '\0') {
          if (*(char *)(param_1 + 0x252) != '\0') {
            uVar12 = 0xff190224f1e6;
            goto LAB_7101ad2834;
          }
          if (*(char *)(param_1 + 0x251) != '\0') {
            uVar12 = 0xff1635e33706;
            goto LAB_7101ad2834;
          }
          if (0x12 < *(uint *)(param_1 + 0xe4)) goto LAB_7101ad28f8;
          lVar9 = (long)(int)*(uint *)(param_1 + 0xe4) << 2;
          uVar11 = 3;
        }
        else {
          uVar12 = 0xff12f06dc569;
LAB_7101ad2834:
          bVar3 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),
                                 uVar12 | 0x58ff000000000000);
          if (bVar3) {
            FUN_71032edf70(*(uint **)(lVar9 + 0x10),uVar12 | 0x58ff000000000000);
            FUN_71032f1bb0(*(long *)(lVar9 + 8),*(uint **)(lVar9 + 0x10),param_3,param_4,param_5,
                           param_6,param_7,param_8);
          }
          else {
            *(undefined4 *)(*(long *)(lVar9 + 8) + 0x118) = 0;
          }
          if (0x12 < *(uint *)(param_1 + 0xe4)) {
LAB_7101ad28f8:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar9 = (long)(int)*(uint *)(param_1 + 0xe4) * 4;
          uVar11 = 4;
        }
        *(undefined4 *)(param_1 + lVar9 + 0x98) = uVar11;
        cVar1 = *(char *)(param_1 + 0x253);
        goto joined_r0x007101ad2894;
      }
      *(undefined1 *)(param_1 + 0x260) = 1;
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = 4;
        uVar12 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1053dffe8c,(long ****)&DAT_00000004,
                                param_4,param_5,param_6,param_7,param_8);
        if ((uVar12 & 1) == 0) goto LAB_7101ad25cc;
        FUN_71024076d0((undefined4 *)&local_80,0x1053dffe8c);
        if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
          piVar10 = (int *)(local_70 + 0x38);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_7101ad25cc:
        local_68 = 0x87650000000000;
        local_58 = 0xffffffffffffffff;
        uStack_50 = 0;
        local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
        local_48 = 0;
      }
      local_78 = &PTR_FUN_7104f73d50;
      local_70 = 0;
      local_60 = 0;
      if (*(char *)(param_1 + 0x253) != '\0') {
        FUN_7103778630(0,*(long *)(param_1 + 0x108),0x71044229ef);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042f856f);
      }
    }
    if (*(char *)(*(long *)(param_1 + 0x110) + 0x280) != '\0') {
      *(undefined1 *)(*(long *)(param_2 + 8) + 0x4aa) = 0;
      *(undefined1 *)(param_1 + 0x260) = 1;
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = 4;
        uVar12 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1053dffe8c,(long ****)&DAT_00000004,
                                param_4,param_5,param_6,param_7,param_8);
        if ((uVar12 & 1) == 0) goto LAB_7101ad26dc;
        FUN_71024076d0((undefined4 *)&local_c0,0x1053dffe8c);
        if (((local_b0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a8 == DAT_7106dd53ac)) {
          piVar10 = (int *)(local_b0 + 0x38);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = *piVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_7101ad26dc:
        local_a8 = 0x87650000000000;
        local_98 = 0xffffffffffffffff;
        uStack_90 = 0;
        local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
        local_88 = 0;
      }
      local_b8 = &PTR_FUN_7104f73d50;
      local_b0 = 0;
      local_a0 = 0;
      if (*(char *)(param_1 + 0x253) != '\0') {
        FUN_7103778630(0,*(long *)(param_1 + 0x108),0x71044229ef);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042f856f);
      }
    }
  }
  cVar1 = *(char *)(param_1 + 0x253);
joined_r0x007101ad2894:
  if (cVar1 != '\0') {
    FUN_71037780e0(&local_80,param_1 + 0x100,(long ****)"anim_get_multi",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar14 = local_78;
    if ((((long *)local_78[1] != (long *)0x0) &&
        (fVar16 = (float)(**(code **)(*(long *)local_78[1] + 0x198))(), 63.0 <= fVar16)) &&
       (*(char *)(param_1 + 0x254) == '\0')) {
      FUN_7103776640(&local_c0,param_1 + 0x100,(byte ****)"set_parts_item",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      ppuVar2 = local_b8;
      FUN_7103778300(0x3f800000,(long)local_b8,0x710437ae59);
      local_c0 = &PTR_FUN_710523d988;
      local_b8 = (undefined **)0x0;
      if (ppuVar2 != (undefined **)0x0) {
        puVar7 = ppuVar2[3];
        ppuVar2[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar2[3] = (undefined *)0x0;
        if (puVar7 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar7);
        }
        FUN_710392eb40((ulong)ppuVar2);
      }
    }
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar14 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar14);
    }
  }
  return;
}

