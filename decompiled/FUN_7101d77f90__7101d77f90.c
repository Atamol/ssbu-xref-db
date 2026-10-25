// addr:      7101d77f90
// offset:    0x1d77f90
// name:      FUN_7101d77f90
// mangled:   
// signature: undefined __cdecl FUN_7101d77f90(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d77f90(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 extraout_x1;
  long ****pppplVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined **local_90;
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long ***local_50;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x224) == 0) {
    if (2 < *(uint *)(param_1 + 0x250)) goto LAB_7101d78340;
    FUN_71037760f0(*(long *)**(undefined8 **)
                              (param_1 + (ulong)*(uint *)(param_1 + 0x250) * 8 + 0x238),1);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x60))(*(long **)(param_1 + 0x278),1);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x70))(*(long **)(param_1 + 0x278),1);
    *(undefined1 *)(param_1 + 0x293) = 1;
    iVar4 = (**(code **)(*(long *)(param_1 + 600) + 0x90))(param_1 + 600);
    lVar10 = *(long *)(param_1 + 0x278);
    if (*(long **)(lVar10 + 0x160) != (long *)0x0) {
      (**(code **)(**(long **)(lVar10 + 0x160) + 0x18))();
      iVar9 = *(int *)(lVar10 + 0x2c4);
      if (0 < iVar9) {
        lVar16 = 0;
        do {
          if ((iVar4 - *(int *)(lVar10 + 0x29c) == (int)lVar16) &&
             (iVar4 < *(int *)(lVar10 + 0x288))) {
            lVar11 = *(long *)(lVar10 + 0x168);
            lVar14 = *(long *)(lVar11 + lVar16 * 8);
            lVar15 = **(long **)(lVar14 + 0x20);
            if (lVar15 != 0) {
              *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 1;
              lVar14 = *(long *)(lVar11 + lVar16 * 8);
            }
            *(int *)(lVar14 + 0x30) = iVar4;
            lVar11 = *(long *)(lVar11 + lVar16 * 8);
            param_3 = (long ****)(lVar11 + 8);
            param_4 = (byte ****)(lVar11 + 0x18);
            (**(code **)(**(long **)(lVar10 + 0x160) + 0x10))
                      (*(long **)(lVar10 + 0x160),*(undefined4 *)(lVar11 + 0x30));
            iVar9 = *(int *)(lVar10 + 0x2c4);
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < iVar9);
      }
      (**(code **)(**(long **)(lVar10 + 0x160) + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x290) = 1;
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = (long ****)&DAT_00000004;
      uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xe0d88ec18,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar6 & 1) == 0) goto LAB_7101d78174;
      FUN_71024076d0((undefined4 *)&local_90,0xe0d88ec18);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar12 = (int *)(local_80 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar2) {
            *piVar12 = *piVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    else {
LAB_7101d78174:
      local_70 = 0;
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_80 = 0;
    (**(code **)(*(long *)(param_1 + 600) + 0xf0))(param_1 + 600,0);
    if (2 < *(uint *)(param_1 + 0x250)) goto LAB_7101d78340;
    FUN_7103778300(0x3f800000,
                   *(long *)(**(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x250) * 8 + 0x238) +
                            0x10),0x710433a4e5);
    lVar10 = *(long *)(param_1 + 0x278);
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(lVar10 + 0x2a4);
    iVar4 = *(int *)(lVar10 + 0x2c8);
    param_2 = extraout_x1;
    if (-1 < iVar4) goto LAB_7101d781f8;
LAB_7101d7821c:
    FUN_7103776290(&local_90,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    lVar10 = *(long *)(param_1 + 0x278);
    iVar4 = *(int *)(lVar10 + 0x2c8);
    if (iVar4 < 0) goto LAB_7101d7821c;
LAB_7101d781f8:
    if (*(int *)(lVar10 + 0x2c0) <= iVar4) goto LAB_7101d7821c;
    FUN_7103776390(&local_90,
                   (undefined8 *)(*(long *)(*(long *)(lVar10 + 0x168) + (long)iVar4 * 8) + 8),
                   param_3,param_4,param_5,param_6,param_7,param_8);
  }
  plVar5 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_00000008;
      pppplVar8 = &local_50;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar6 & 1) != 0) &&
         (plVar5 = (long *)FUN_710392e290(0x10,8,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         plVar5 != (long *)0x0)) goto LAB_7101d78280;
    }
    plVar5 = (long *)0x0;
  }
LAB_7101d78280:
  *plVar5 = 0;
  puVar13 = local_88[1];
  if ((puVar13 == (undefined *)0x0) || (*(long *)(puVar13 + 0x60) == 0)) {
    uVar6 = 0;
    *plVar5 = 0;
  }
  else {
    plVar7 = (long *)FUN_7103796f20(*(long *)(puVar13 + 0x60),*(long *)(puVar13 + 0x18) + 0xb0);
    *plVar5 = (long)plVar7;
    if (plVar7 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar7 + 0x250))();
      uVar6 = uVar6 & 0xffffffff;
    }
  }
  FUN_710392eb40((ulong)plVar5);
  ppuVar3 = local_88;
  local_90 = &PTR_FUN_710523d988;
  local_88 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    puVar13 = ppuVar3[3];
    ppuVar3[2] = (undefined *)&PTR_FUN_710523d9a8;
    ppuVar3[3] = (undefined *)0x0;
    if (puVar13 != (undefined *)0x0) {
      FUN_710392eb40((ulong)puVar13);
    }
    FUN_710392eb40((ulong)ppuVar3);
  }
  if ((uVar6 & 1) == 0) {
    if (0x12 < *(uint *)(param_1 + 0x21c)) {
LAB_7101d78340:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x21c) * 4 + 0x1d0) = 0x13;
  }
  return;
}

