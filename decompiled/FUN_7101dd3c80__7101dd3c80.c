// addr:      7101dd3c80
// offset:    0x1dd3c80
// name:      FUN_7101dd3c80
// mangled:   
// signature: undefined __cdecl FUN_7101dd3c80(long param_1, ushort param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dd3c80(long param_1,ushort param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  byte ****ppppbVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  undefined **local_b8;
  ulong local_b0;
  uint auStack_a8 [2];
  undefined1 auStack_a0 [64];
  
  if (0xf < param_2) {
    return;
  }
  plVar15 = (long *)(param_1 + (ulong)param_2 * 8 + 0x10);
  lVar11 = *plVar15;
  if (lVar11 == 0) {
    return;
  }
  bVar1 = *(byte *)(lVar11 + 0x28);
  uVar14 = (uint)bVar1;
  if ((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 3) <= (ulong)param_2) {
    lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x1b8);
    if (lVar11 != 0) {
      lVar16 = *(long *)(param_1 + 8) + 0x1b8;
      lVar7 = lVar16;
      lVar8 = lVar11;
      do {
        if ((int)(uint)bVar1 <= *(int *)(lVar8 + 0x20)) {
          lVar7 = lVar8;
        }
        lVar8 = *(long *)(lVar8 + (ulong)(*(int *)(lVar8 + 0x20) < (int)(uint)bVar1) * 8);
      } while (lVar8 != 0);
      if (((lVar7 != lVar16) && (*(int *)(lVar7 + 0x20) <= (int)uVar14)) &&
         (plVar9 = *(long **)(lVar7 + 0x28), plVar9 != (long *)0x0)) {
        (**(code **)(*plVar9 + 0x1f8))(plVar9,0);
        (**(code **)(*plVar9 + 0x388))(plVar9,1,0);
        lVar16 = *(long *)(param_1 + 8) + 0x1b8;
        lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x1b8);
      }
      lVar7 = lVar16;
      if (lVar11 != 0) {
        do {
          if ((int)uVar14 <= *(int *)(lVar11 + 0x20)) {
            lVar7 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < (int)uVar14) * 8);
        } while (lVar11 != 0);
        if (((lVar7 != lVar16) && (*(int *)(lVar7 + 0x20) <= (int)uVar14)) &&
           (plVar9 = *(long **)(lVar7 + 0x28), plVar9 != (long *)0x0)) {
          (**(code **)(*plVar9 + 0x208))(plVar9,0);
          (**(code **)(*plVar9 + 0x388))(plVar9,1,0);
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x007101dd3e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,0);
    return;
  }
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 8);
  uVar2 = FUN_710327de70(*(long *)(DAT_710532f730 + 8) + 0x310,uVar10);
  if ((uVar2 & 0xff) != 0) {
    uVar13 = uVar2 - 1;
    if ((uVar13 & 0xff) < 0x10) {
      if ((uVar2 & 0xff) < 0xe) {
        if (0xc < (uVar13 & 0xff)) {
LAB_7101dd4168:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar2 = (uint)*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) +
                               ((ulong)uVar13 & 0xff));
        goto LAB_7101dd3d14;
      }
      uVar2 = uVar2 - 0xe;
      if ((~uVar2 & 0xff) != 0) {
        if (2 < (uVar2 & 0xff)) goto LAB_7101dd4168;
        uVar2 = (uint)*(ushort *)
                       (*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + (ulong)(byte)uVar2 * 2
                       + 0xe);
        goto LAB_7101dd3d14;
      }
    }
  }
  uVar2 = 0;
LAB_7101dd3d14:
  uVar5 = 1;
  uVar6 = (ulong)uVar2;
  FUN_710377a280(lVar11 + 0x18,(byte *)"mnu_spirits_itemview__item_n",1);
  if (uVar2 == 0) {
    pcVar4 = "on_empty";
  }
  else {
    pcVar4 = "off_empty";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),(long)pcVar4);
  lVar11 = *(long *)(DAT_710532f730 + 8);
  lVar16 = *plVar15;
  uVar3 = FUN_710327d3b0(*(long *)(lVar11 + 0x318),uVar10);
  uVar3 = uVar3 & 0xffffffffff;
  uVar13 = 0xfffffffe;
  if (uVar3 < 0x697117991) {
    if (uVar3 == 0x308a9483a) {
      uVar13 = 3;
    }
    else if (uVar3 == 0x32eb55cc9) {
      uVar13 = 5;
    }
    else if (uVar3 == 0x5b7a5f324) {
      uVar13 = 4;
    }
  }
  else if (uVar3 < 0xe32ae387d) {
    if (uVar3 == 0x697117991) {
      uVar13 = 0xffffffff;
    }
    else if (uVar3 == 0xdaaec3d9f) {
      uVar13 = 1;
    }
  }
  else if (uVar3 == 0xe32ae387d) {
    uVar13 = 0;
  }
  else if (uVar3 == 0x106cb91611) {
    uVar13 = 2;
  }
  uVar3 = FUN_710327d0d0(*(long *)(lVar11 + 0x318),uVar10);
  pcVar4 = "view_icon_energy";
  ppppbVar12 = (byte ****)"set_parts_icon_energy";
  if ((uVar3 & 0xffffffffff) == 0x7db8309f9) {
    pcVar4 = "view_icon_support";
    if (2 < uVar13) {
      pcVar4 = "view_icon_energy";
    }
    ppppbVar12 = (byte ****)"set_parts_icon_support";
    if (2 < uVar13) {
      ppppbVar12 = (byte ****)"set_parts_icon_energy";
    }
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x10),(long)pcVar4);
  FUN_7103776640(&local_b8,lVar16 + 8,ppppbVar12,uVar5,uVar6,param_5,param_6,param_7,param_8);
  FUN_710327cd40(auStack_a8,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318),uVar10);
  uVar10 = local_b0;
  FUN_7103778300(0x3f800000,local_b0,(long)auStack_a0);
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = 0;
  if (uVar10 != 0) {
    uVar6 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar10);
  }
  (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,1);
  lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x1b8);
  if (lVar11 != 0) {
    lVar16 = *(long *)(param_1 + 8) + 0x1b8;
    lVar7 = lVar16;
    do {
      if ((int)uVar14 <= *(int *)(lVar11 + 0x20)) {
        lVar7 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < (int)uVar14) * 8);
    } while (lVar11 != 0);
    if (((lVar7 != lVar16) && (*(int *)(lVar7 + 0x20) <= (int)uVar14)) &&
       (plVar15 = *(long **)(lVar7 + 0x28), plVar15 != (long *)0x0)) {
      (**(code **)(*plVar15 + 0x208))(plVar15,uVar2 != 0);
      (**(code **)(*plVar15 + 0x388))(plVar15,uVar2 == 0,0);
    }
  }
  return;
}

