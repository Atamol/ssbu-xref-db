// addr:      7101902880
// offset:    0x1902880
// name:      FUN_7101902880
// mangled:   
// signature: undefined __cdecl FUN_7101902880(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101902880(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  undefined **local_80;
  undefined8 *local_78;
  long local_70;
  int local_68;
  long ***local_40;
  undefined4 local_34;
  
  lVar11 = *(long *)(*(long *)(param_1 + 400) + 0x80);
  if (*(int *)(param_1 + 0x17c) != 0) {
    if (*(int *)(lVar11 + 0x120) != 9) {
      return;
    }
    if (*(uint *)(param_1 + 0x174) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x174) * 4 + 0x128) = 4;
      return;
    }
    goto LAB_7101902c50;
  }
  bVar6 = *(byte *)(lVar11 + 0x5fb);
  uVar12 = (ulong)bVar6;
  if (uVar12 < 2) {
    lVar1 = lVar11 + uVar12 * 0x10;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined8 *)
               FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_78 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_34 = 0;
        local_40 = (long ***)&SUB_00000018;
        param_3 = &local_40;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
        if (((uVar7 & 1) != 0) &&
           (local_78 = (undefined8 *)
                       FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
           local_78 != (undefined8 *)0x0)) goto LAB_7101902940;
      }
      local_78 = (undefined8 *)0x0;
    }
LAB_7101902940:
    *(undefined1 *)(local_78 + 2) = 1;
    *local_78 = 0;
    local_78[1] = 0;
    if (&local_80 != (undefined ***)(lVar1 + 0x188)) {
      puVar8 = *(undefined8 **)(lVar1 + 400);
      *local_78 = *puVar8;
      local_78[1] = puVar8[1];
      *(undefined1 *)(local_78 + 2) = *(undefined1 *)(*(long *)(lVar1 + 400) + 0x10);
    }
  }
  else {
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined8 *)
               FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_78 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_34 = 0;
        local_40 = (long ***)&SUB_00000018;
        param_3 = &local_40;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
        if (((uVar7 & 1) != 0) &&
           (local_78 = (undefined8 *)
                       FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8),
           local_78 != (undefined8 *)0x0)) goto LAB_71019029e4;
      }
      local_78 = (undefined8 *)0x0;
    }
LAB_71019029e4:
    *local_78 = 0;
    local_78[1] = 0;
    *(undefined1 *)(local_78 + 2) = 1;
  }
  puVar8 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)&DAT_00000010;
      param_3 = &local_40;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_7101902a48;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101902a48:
  puVar5 = local_78;
  *puVar8 = &PTR_FUN_710523d9e8;
  puVar8[1] = 0;
  if (&local_80 != (undefined ***)puVar8) {
    local_78 = (undefined8 *)0x0;
    puVar8[1] = puVar5;
  }
  plVar9 = *(long **)(lVar11 + 0x5f0);
  *(undefined8 **)(lVar11 + 0x5f0) = puVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  puVar8 = local_78;
  local_80 = &PTR_FUN_710523d9e8;
  local_78 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_710377aee0(0x3f800000,*(long *)(lVar11 + 0x5f0));
  *(byte *)(lVar11 + 0x5f9) = bVar6;
  (**(code **)(**(long **)(lVar11 + 0x1c0) + 0x30))(*(long **)(lVar11 + 0x1c0),0);
  (**(code **)(**(long **)(lVar11 + 0x1c8) + 0x30))(*(long **)(lVar11 + 0x1c8),0);
  *(byte *)(lVar11 + 0x1d0) = bVar6;
  if (bVar6 < 2) {
    bVar6 = (**(code **)(**(long **)(lVar11 + uVar12 * 8 + 0x1c0) + 0x70))();
    *(byte *)(lVar11 + 0x1d1) = bVar6 & 1;
    pcVar2 = "left_data_on";
    if ((bVar6 & 1) == 0) {
      pcVar2 = "left_data_off";
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x1b8),(long)pcVar2);
    *(undefined8 *)(lVar11 + 0x438) = 0x2dffff0000000000;
    *(undefined1 *)(lVar11 + 0x5fa) = 0;
    *(undefined2 *)(lVar11 + 0x440) = 0xffff;
    FUN_7101dcbb00(lVar11,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar12 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8),
         (uVar12 & 1) != 0)) &&
        (FUN_71024076d0((undefined4 *)&local_80,0x151ca6c028), local_70 != 0)) &&
       ((DAT_7106dd53a8 == '\x01' && (local_68 == DAT_7106dd53ac)))) {
      piVar10 = (int *)(local_70 + 0x38);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = *piVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined8 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x118) = 0;
    *(undefined8 *)(lVar11 + 0x108) = 0;
    *(undefined8 *)(lVar11 + 0x110) = 0;
    *(undefined8 *)(lVar11 + 0xf8) = 0;
    *(undefined8 *)(lVar11 + 0x100) = 0;
    *(undefined8 *)(lVar11 + 0xe8) = 0;
    *(undefined8 *)(lVar11 + 0xf0) = 0;
    *(undefined8 *)(lVar11 + 0xd8) = 0;
    *(undefined8 *)(lVar11 + 0xe0) = 0;
    *(undefined8 *)(lVar11 + 0x124) = 0xffffffff00000000;
    *(undefined8 *)(lVar11 + 0xd0) = 0x800000009;
    *(undefined1 *)(lVar11 + 300) = 0;
    *(undefined8 *)(lVar11 + 0x11c) = 0xffffffff00000001;
    return;
  }
LAB_7101902c50:
                    /* WARNING: Subroutine does not return */
  abort();
}

