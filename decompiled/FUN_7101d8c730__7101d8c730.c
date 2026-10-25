// addr:      7101d8c730
// offset:    0x1d8c730
// name:      FUN_7101d8c730
// mangled:   
// signature: undefined __cdecl FUN_7101d8c730(long param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d8c730(long param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  undefined8 extraout_x1;
  long *********ppppppppplVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long ********local_b8;
  ulong local_b0;
  undefined **local_a8;
  undefined8 *local_a0 [8];
  undefined **local_60;
  ulong local_58;
  undefined4 local_44;
  
  sVar6 = *(short *)(param_1 + 0x15c);
  uVar9 = 0;
  if ((sVar6 != -1) && (sVar6 < 2000)) {
    lVar15 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar16 = (*(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20) >> 6) * -0x3333333333333333;
    uVar5 = *(ushort *)(lVar15 + (long)(int)sVar6 * 2 + 0x60);
    uVar14 = (ulong)uVar5;
    if ((uint)uVar5 < (uint)uVar16) {
      puVar2 = (undefined2 *)(*(long *)(lVar15 + 0x20) + uVar14 * 0x140);
      if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
        puVar2 = &DAT_7105182b08;
      }
      if (*(char *)(puVar2 + 0x2f) == '\0') {
        if (2 < *(byte *)(puVar2 + 0x36) - 1) goto LAB_7101d8c7f8;
        uVar9 = 0x20301 >> (ulong)((*(byte *)(puVar2 + 0x36) - 1 & 3) << 3);
      }
      else {
        uVar9 = 4;
      }
    }
    else {
LAB_7101d8c7f8:
      uVar9 = 0;
    }
  }
  FUN_7103776640(&local_60,param_1 + 0x110,(byte ****)"set_parts_aw_bg",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar14 = local_58;
  if ((*(uint *)(param_1 + 0x158) < 10) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x158) & 0x1f) & 0x2e2U) != 0)) {
    if (((*(long *)(local_58 + 8) == 0) ||
        (plVar10 = (long *)FUN_71037964b0(*(long *)(local_58 + 8),0x710436c918),
        plVar10 == (long *)0x0)) || (uVar16 = (**(code **)(*plVar10 + 0x130))(), (uVar16 & 1) == 0))
    {
      FUN_7103778300(0x3f800000,uVar14,0x710436c918);
    }
  }
  else {
    if ((uint)*(byte *)(param_1 + 0x164) != (uVar9 & 0xff)) {
      param_3 = (long ****)0x0;
      FUN_710339dde0((uint *)&local_a8,(char)uVar9,'\0');
      FUN_7103778300(0x3f800000,local_58,(long)local_a0);
    }
    *(char *)(param_1 + 0x164) = (char)uVar9;
  }
  if ((param_2 & 1) == 0) {
    FUN_7103776910(&local_a8,(long)&local_60,(long ****)"set_fxui_back_nothing",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    puVar12 = local_a0[0];
    FUN_710377aa20((long *)*local_a0[0],0);
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0[0] = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    FUN_7103776910(&local_a8,(long)&local_60,(long ****)"set_fxui_back_attack",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    puVar12 = local_a0[0];
    FUN_710377aa20((long *)*local_a0[0],0);
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0[0] = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    FUN_7103776910(&local_a8,(long)&local_60,(long ****)"set_fxui_back_defence",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    puVar12 = local_a0[0];
    FUN_710377aa20((long *)*local_a0[0],0);
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0[0] = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    FUN_7103776910(&local_a8,(long)&local_60,(long ****)"set_fxui_back_throw",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    puVar12 = local_a0[0];
    FUN_710377aa20((long *)*local_a0[0],0);
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0[0] = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    FUN_7103776910(&local_a8,(long)&local_60,(long ****)"set_fxui_back_supporter",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    puVar12 = local_a0[0];
    FUN_710377aa20((long *)*local_a0[0],0);
  }
  else {
    FUN_7103776910(&local_a8,(long)&local_60,(long ****)"set_fxui_back_nothing",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    puVar12 = local_a0[0];
    FUN_710377aa20((long *)*local_a0[0],(uVar9 & 0xff) == 0);
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0[0] = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    FUN_7103776910(&local_a8,(long)&local_60,(long ****)"set_fxui_back_attack",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    puVar12 = local_a0[0];
    FUN_710377aa20((long *)*local_a0[0],(uVar9 & 0xff) == 1);
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0[0] = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    FUN_7103776910(&local_a8,(long)&local_60,(long ****)"set_fxui_back_defence",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    puVar12 = local_a0[0];
    FUN_710377aa20((long *)*local_a0[0],(uVar9 & 0xff) == 2);
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0[0] = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    FUN_7103776910(&local_a8,(long)&local_60,(long ****)"set_fxui_back_throw",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    puVar12 = local_a0[0];
    FUN_710377aa20((long *)*local_a0[0],(uVar9 & 0xff) == 3);
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0[0] = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    FUN_7103776910(&local_a8,(long)&local_60,(long ****)"set_fxui_back_supporter",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    puVar12 = local_a0[0];
    FUN_710377aa20((long *)*local_a0[0],(uVar9 & 0xff) == 4);
  }
  local_a0[0] = (undefined8 *)0x0;
  local_a8 = &PTR_FUN_710523d9a8;
  if (puVar12 != (undefined8 *)0x0) {
    local_a0[0] = (undefined8 *)0x0;
    local_a8 = &PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)puVar12);
  }
  FUN_7103776910(&local_a8,(long)&local_60,(long ****)"set_fxui_ef_mirage",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  puVar12 = local_a0[0];
  FUN_710377aa20((long *)*local_a0[0],0);
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0[0] = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar12);
  }
  if (*(int *)(param_1 + 0x158) != 1) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x118),0x71042c520b);
    goto LAB_7101d8cd50;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x118),0x7104291f9d);
  FUN_7101d8e430(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar15 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  uVar14 = FUN_71032a9470(lVar15,*(ushort *)(param_1 + 0x15c));
  uVar9 = FUN_71032a7800(lVar15,uVar14 & 0xffffffffff);
  if (uVar9 < (uint)((int)((ulong)(*(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20)) >> 6) *
                    -0x33333333)) {
    uVar14 = *(ulong *)(*(long *)(lVar15 + 0x20) + (ulong)uVar9 * 0x140 + 0x60);
  }
  else {
    uVar14 = 0x2dffff0000000000;
  }
  ppppppppplVar13 = (long *********)&DAT_00000012;
  pppuVar11 = (undefined ***)
              FUN_710323f600((long *)(param_1 + 8),uVar14,(long ****)&DAT_00000012,param_4,param_5,
                             param_6,param_7,param_8);
  local_a8 = &PTR_FUN_710523da08;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar13,param_4,param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_b8 = (long ********)&DAT_00000010;
      ppppppppplVar13 = &local_b8;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar14 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar13,param_4,param_5,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7101d8cc1c;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101d8cc1c:
  *puVar12 = 0;
  puVar12[1] = 0;
  local_a0[0] = puVar12;
  if (&local_a8 != pppuVar11) {
    puVar3 = *pppuVar11[1];
    puVar4 = pppuVar11[1][1];
    if (puVar4 == (undefined *)0x0) {
      *puVar12 = puVar3;
      puVar12[1] = 0;
    }
    else {
      plVar10 = (long *)(puVar4 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = *plVar10 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar10 = (long *)puVar12[1];
      *puVar12 = puVar3;
      puVar12[1] = puVar4;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
        do {
          lVar15 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  FUN_7103776910(&local_b8,param_1 + 0x110,(long ****)"set_rep_icon_series",ppppppppplVar13,param_4,
                 param_5,param_6,param_7,param_8);
  uVar14 = local_b0;
  FUN_7103778b80(local_b0,(long)&local_a8,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
  local_b8 = (long ********)&PTR_FUN_710523d9a8;
  local_b0 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  puVar12 = local_a0[0];
  local_a8 = &PTR_FUN_710523da08;
  local_a0[0] = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    plVar10 = (long *)puVar12[1];
    *puVar12 = 0;
    puVar12[1] = 0;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        lVar15 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
      plVar10 = (long *)puVar12[1];
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
        do {
          lVar15 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar12);
  }
LAB_7101d8cd50:
  uVar14 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar14 != 0) {
    uVar16 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar14);
  }
  return;
}

