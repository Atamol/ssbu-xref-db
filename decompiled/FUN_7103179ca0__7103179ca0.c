// addr:      7103179ca0
// offset:    0x3179ca0
// name:      FUN_7103179ca0
// mangled:   
// signature: undefined __cdecl FUN_7103179ca0(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103179ca0(long param_1,ulong param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar4 = (long *)(param_1 + 0x50);
  plVar5 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar8 = (long *)*plVar4;
    plVar5 = (long *)(param_1 + 0x50);
    do {
      while (plVar7 = plVar8, (ulong)plVar7[4] <= param_2) {
        if (param_2 <= (ulong)plVar7[4]) goto LAB_7103179cfc;
        plVar5 = plVar7 + 1;
        plVar8 = (long *)*plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_7103179cfc;
      }
      plVar8 = (long *)*plVar7;
      plVar5 = plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
LAB_7103179cfc:
  lVar6 = *(long *)(*plVar5 + 0x28);
  *(undefined4 *)(lVar6 + 8) = 0;
  *(int *)(lVar6 + 0xc) = (int)param_3;
  *(undefined1 *)(lVar6 + 0x14) = 0;
  if (*(ulong *)(param_1 + 0x20) != param_2) {
    return;
  }
  if ((long *)*plVar4 != (long *)0x0) {
    plVar5 = (long *)(param_1 + 0x50);
    plVar8 = (long *)*plVar4;
    do {
      while ((ulong)plVar8[4] <= param_2) {
        plVar4 = plVar5;
        if (param_2 <= (ulong)plVar8[4]) goto LAB_7103179d68;
        plVar5 = plVar8 + 1;
        plVar8 = (long *)*plVar5;
        plVar4 = plVar5;
        if (plVar8 == (long *)0x0) goto LAB_7103179d68;
      }
      plVar7 = (long *)*plVar8;
      plVar4 = plVar8;
      plVar5 = plVar8;
      plVar8 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
LAB_7103179d68:
  lVar6 = *(long *)(*plVar4 + 0x28);
  if (*(int *)(lVar6 + 8) != 1) {
    if (*(int *)(lVar6 + 8) != 0) {
      return;
    }
    FUN_710240d150(*(uint *)(lVar6 + 0xc),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  uVar1 = *(uint *)(lVar6 + 0x10);
  if (*(char *)(lVar6 + 0x14) == '\0') {
    if (10 < uVar1) {
      return;
    }
    lVar9 = *DAT_7105329f40;
    if (*(char *)(lVar9 + 0x494) != '\0') goto LAB_7103179e08;
    puVar2 = (&PTR_s_StRev_None_710523cf40)[uVar1];
    uVar3 = 500;
  }
  else {
    if (10 < uVar1) {
      return;
    }
    lVar9 = *DAT_7105329f40;
    if (*(char *)(lVar9 + 0x494) != '\0') goto LAB_7103179e08;
    uVar3 = *(undefined4 *)(lVar6 + 0x18);
    puVar2 = (&PTR_s_StRev_None_710523cf40)[uVar1];
  }
  FUN_7103737290("Stage_Rev",puVar2,uVar3);
LAB_7103179e08:
  *(uint *)(lVar9 + 0x490) = uVar1;
  return;
}

