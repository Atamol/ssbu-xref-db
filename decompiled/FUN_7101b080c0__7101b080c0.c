// addr:      7101b080c0
// offset:    0x1b080c0
// name:      FUN_7101b080c0
// mangled:   
// signature: undefined __cdecl FUN_7101b080c0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b080c0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined **local_80;
  ulong local_78;
  
  if (*(int *)(param_1 + 0x264) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),0x710439cfa5);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),0x71043dfcdf);
    if (*(undefined8 **)(param_1 + 0x18) != *(undefined8 **)(param_1 + 0x10)) {
      FUN_71037760f0(*(long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x10),0);
      FUN_71032e5bf0(DAT_710532f7c8,extraout_x1,(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar8 = *(long *)(DAT_710532f7c8 + 8);
  if ((((*(char *)(lVar8 + 0x6a) != '\0') && (*(char *)(lVar8 + 0x6b) == '\0')) &&
      (*(char *)(lVar8 + 0x69) != '\0')) &&
     (*(char *)(*(long *)(DAT_710532f858 + 8) + 0x114) != '\0')) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x3d8) + 8);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
    }
    FUN_7101b0a030(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar8 = *(long *)(param_1 + 0x400);
    local_90 = (undefined8 *)0x0;
    puStack_88 = (undefined8 *)0x0;
    local_98 = (undefined8 *)0x0;
    FUN_71019bb740((ulong *)&local_98,*(long *)(lVar8 + 0x170) - *(long *)(lVar8 + 0x168) >> 3,
                   (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar1 = *(long **)(lVar8 + 0x170);
    puVar9 = local_90;
    for (plVar6 = *(long **)(lVar8 + 0x168); puVar2 = local_98, puVar10 = local_98,
        local_90 = puVar9, plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if (puVar9 == puStack_88) {
        FUN_71019bb8f0((long *)&local_98,(undefined8 *)(*plVar6 + 8),(long ****)param_3,param_4,
                       param_5,param_6,param_7,param_8);
      }
      else {
        FUN_7103776390(puVar9,(undefined8 *)(*plVar6 + 8),(long ****)param_3,param_4,param_5,param_6
                       ,param_7,param_8);
        local_90 = local_90 + 2;
      }
      puVar9 = local_90;
    }
    for (; local_98 = puVar10, puVar2 != puVar9; puVar2 = puVar2 + 2) {
      FUN_7103776640(&local_80,(long)puVar2,(byte ****)"set_parts_text_scroll",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      if (*(long *)(local_78 + 8) != 0) {
        puVar10 = *(undefined8 **)(*(long *)(local_78 + 8) + 0x78);
        if (((DAT_710593ba40 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&DAT_710593ba40), iVar4 != 0)) {
          if (((DAT_710593ba48 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&DAT_710593ba48), iVar4 != 0)) {
            DAT_710593ba50 = 0;
            __cxa_guard_release(&DAT_710593ba48);
          }
          DAT_710593ba58 = &DAT_710593ba50;
          __cxa_guard_release(&DAT_710593ba40);
        }
        if (puVar10 != (undefined8 *)0x0) {
          for (puVar5 = (undefined8 *)(**(code **)*puVar10)(puVar10); puVar5 != (undefined8 *)0x0;
              puVar5 = (undefined8 *)*puVar5) {
            if ((undefined8 **)puVar5 == &DAT_710593ba58) {
              lVar8 = puVar10[3];
              *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)((long)puVar10 + 0x54);
              if (lVar8 != 0) {
                *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)((long)puVar10 + 0x54);
                *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
              }
              lVar8 = puVar10[4];
              if (lVar8 != 0) {
                *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(puVar10 + 0xb);
                *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
              }
              if ((long *)puVar10[5] != (long *)0x0) {
                (**(code **)(*(long *)puVar10[5] + 0x180))(0);
              }
              plVar6 = (long *)puVar10[6];
              if (plVar6 != (long *)0x0) {
                if (*(char *)((long)puVar10 + 99) == '\0') {
                  (**(code **)(*plVar6 + 0x180))(0);
                }
                else {
                  (**(code **)(*plVar6 + 400))();
                }
              }
              *(undefined2 *)((long)puVar10 + 100) = 0;
              break;
            }
          }
        }
      }
      uVar3 = local_78;
      FUN_7103778950(*(long *)(local_78 + 8));
      local_80 = &PTR_FUN_710523d988;
      local_78 = 0;
      if (uVar3 != 0) {
        uVar7 = *(ulong *)(uVar3 + 0x18);
        *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar3 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar3);
      }
      puVar10 = local_98;
    }
    puVar9 = local_90;
    if (puVar10 != (undefined8 *)0x0) {
      while (puVar9 != puVar10) {
        puVar9 = puVar9 + -2;
        (**(code **)*puVar9)(puVar9);
      }
      local_90 = puVar10;
      if (local_98 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)local_98);
      }
    }
    if (0x12 < *(uint *)(param_1 + 0x25c)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x25c) * 4 + 0x210) = 0x15;
  }
  return;
}

