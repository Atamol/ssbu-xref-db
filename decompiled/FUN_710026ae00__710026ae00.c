// addr:      710026ae00
// offset:    0x26ae00
// name:      FUN_710026ae00
// mangled:   
// signature: uint __cdecl FUN_710026ae00(long param_1, long * param_2, long * param_3, long * param_4, undefined1 * param_5, undefined1 * param_6, undefined8 param_7, ulong param_8)


uint FUN_710026ae00(long param_1,long *param_2,long *param_3,long *param_4,undefined1 *param_5,
                   undefined1 *param_6,undefined8 param_7,ulong param_8)

{
  long lVar1;
  bool bVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 auStack_140 [3];
  undefined8 auStack_128 [3];
  undefined8 auStack_110 [3];
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  char local_d8;
  int local_6c [3];
  
  puVar6 = auStack_140;
  FUN_71001e6720(&uStack_e0);
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710026ae9c:
    if ((*plVar8 == 0) || (lVar7 = *(long *)(*plVar8 + 0x10), lVar7 == 0)) goto LAB_710026aecc;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar9 = *puVar3;
    if (uVar9 == 0) goto LAB_710026ae9c;
    if ((ulong)uVar9 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x20);
      goto LAB_710026ae9c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710026aecc:
    lVar7 = 0;
  }
  plVar8 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  FUN_710022b480((long)&uStack_e0,*(ushort *)(param_1 + 0x48),1);
  uVar4 = FUN_710022b390((long)&uStack_e0,param_2);
  if ((uVar4 & 1) == 0) {
    param_8 = 0;
LAB_710026af7c:
    bVar2 = false;
  }
  else {
    FUN_710022b400((long)&uStack_e0,0x28);
    local_6c[0] = (int)((ulong)(param_3[1] - *param_3) >> 5);
    FUN_71001d0460((long)&uStack_e0,local_6c,4);
    lVar1 = param_3[1];
    for (lVar7 = *param_3; lVar7 != lVar1; lVar7 = lVar7 + 0x20) {
      FUN_710028fdb0((long)&uStack_e0,lVar7);
    }
    if (local_d8 == '\0') {
      local_6c[0] = (int)((ulong)(param_4[1] - *param_4) >> 3) * -0x55555555;
      FUN_71001d0460((long)&uStack_e0,local_6c,4);
      lVar1 = param_4[1];
      for (lVar7 = *param_4; lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
        FUN_710028f4b0((long)&uStack_e0,lVar7);
      }
      if (local_d8 == '\0') {
        FUN_71001d0630((long)&uStack_e0,param_5);
        if (local_d8 == '\0') {
          FUN_71001d0630((long)&uStack_e0,param_6);
          if (local_d8 == '\0') {
            if (param_2 != (long *)0x0) {
              FUN_710022b430((long)param_2,param_7);
              FUN_710022b430((long)param_2,param_8);
            }
            DAT_71052b62d0 = FUN_710028d860;
            if ((*(char *)(param_1 + 0x70) != '\0') && (bVar2 = FUN_710022b500(param_1,0x10), bVar2)
               ) {
              bVar2 = true;
              goto LAB_710026b070;
            }
            uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_e0);
            param_8 = uVar4 & 0xffffffff;
            goto LAB_710026af7c;
          }
          local_6c[0] = -0x7ffefff6;
          FUN_71001b4200((undefined4 *)auStack_140,local_6c);
        }
        else {
          local_6c[0] = -0x7ffefff6;
          FUN_71001b4200((undefined4 *)auStack_128,local_6c);
          puVar6 = auStack_128;
        }
      }
      else {
        local_6c[0] = -0x7ffefff6;
        FUN_71001b4200((undefined4 *)auStack_110,local_6c);
        puVar6 = auStack_110;
      }
    }
    else {
      local_6c[0] = -0x7ffefff6;
      FUN_71001b4200((undefined4 *)auStack_f8,local_6c);
      puVar6 = auStack_f8;
    }
    FUN_71001d0c90((long)param_2,puVar6);
    bVar2 = false;
    param_8 = 1;
  }
LAB_710026b070:
  uVar9 = (uint)param_8;
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if (bVar2) {
    uVar5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_e0);
    uVar9 = (uint)uVar5;
  }
  FUN_71001e6910(&uStack_e0);
  return uVar9 & 1;
}

