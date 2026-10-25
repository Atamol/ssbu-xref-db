// addr:      7103178c70
// offset:    0x3178c70
// name:      FUN_7103178c70
// mangled:   
// signature: undefined __cdecl FUN_7103178c70(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103178c70(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined *puVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  char *pcVar13;
  int *piVar14;
  undefined4 local_78 [4];
  long local_68;
  int local_60;
  undefined8 local_38;
  
  plVar9 = *(long **)(param_1 + 0x50);
  plVar12 = (long *)(param_1 + 0x50);
  if (plVar9 != (long *)0x0) {
    plVar12 = (long *)(param_1 + 0x50);
    do {
      while (plVar10 = plVar9, *(ulong *)(param_1 + 0x20) < (ulong)plVar10[4]) {
        plVar9 = (long *)*plVar10;
        plVar12 = plVar10;
        if ((long *)*plVar10 == (long *)0x0) goto LAB_7103178cd4;
      }
      if (*(ulong *)(param_1 + 0x20) <= (ulong)plVar10[4]) break;
      plVar12 = plVar10 + 1;
      plVar9 = (long *)*plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_7103178cd4:
  pcVar13 = *(char **)(*plVar12 + 0x28);
  if (*pcVar13 == '\0') {
    DAT_7106dd55c4 = 0;
    DAT_7105298fa8 = 0x3f800000;
  }
  else {
    FUN_710240cbc0(*(uint *)(pcVar13 + 4),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1;
  }
  if (*(int *)(pcVar13 + 8) != 1) {
    if (*(int *)(pcVar13 + 8) == 0) {
      FUN_710240d150(*(uint *)(pcVar13 + 0xc),param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
    }
    goto LAB_7103178d9c;
  }
  uVar1 = *(uint *)(pcVar13 + 0x10);
  if (pcVar13[0x14] == '\0') {
    if (10 < uVar1) goto LAB_7103178d9c;
    lVar11 = *DAT_7105329f40;
    if (*(char *)(lVar11 + 0x494) == '\0') {
      puVar7 = (&PTR_s_StRev_None_710523cf40)[uVar1];
      uVar8 = 500;
      goto LAB_7103178d94;
    }
  }
  else {
    if (10 < uVar1) goto LAB_7103178d9c;
    lVar11 = *DAT_7105329f40;
    if (*(char *)(lVar11 + 0x494) == '\0') {
      uVar8 = *(undefined4 *)(pcVar13 + 0x18);
      puVar7 = (&PTR_s_StRev_None_710523cf40)[uVar1];
LAB_7103178d94:
      FUN_7103737290("Stage_Rev",puVar7,uVar8);
    }
  }
  *(uint *)(lVar11 + 0x490) = uVar1;
LAB_7103178d9c:
  FUN_7103737c30(*(float *)(pcVar13 + 0x1c));
  FUN_710373b540(param_1 + 0xb0,0);
  iVar2 = *(int *)(*DAT_7105329f40 + 0x1a0);
  if (iVar2 != -1) {
    plVar9 = (long *)(*DAT_7105329f40 + 0x198);
    piVar14 = (int *)*plVar9;
    if (((piVar14 != (int *)0x0) &&
        (((char)piVar14[0x16] != '\0' ||
         (((piVar14[1] == 0 && (*(long **)(piVar14 + 4) != (long *)0x0)) &&
          (uVar6 = (**(code **)(**(long **)(piVar14 + 4) + 0x20))(), (uVar6 & 1) == 0)))))) &&
       ((*piVar14 == iVar2 && (lVar11 = *(long *)(*(long *)(*plVar9 + 0x30) + 8), lVar11 != 0)))) {
      local_38 = 0x19b57335b5;
      puVar5 = bsearch(&local_38,(void *)(lVar11 + 8),(ulong)*(uint *)(lVar11 + 4),8,FUN_71037416f0)
      ;
      if ((puVar5 != (undefined8 *)0x0) &&
         (((FUN_7103738770(local_78,plVar9,(uint)((ulong)*puVar5 >> 0x28)), local_68 != 0 &&
           (DAT_7106dd53a8 == '\x01')) && (local_60 == DAT_7106dd53ac)))) {
        piVar14 = (int *)(local_68 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = *piVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
  }
  return;
}

