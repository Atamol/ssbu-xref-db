// addr:      710026b810
// offset:    0x26b810
// name:      FUN_710026b810
// mangled:   
// signature: uint __cdecl FUN_710026b810(long param_1, long * param_2, long param_3, long param_4, long param_5, undefined1 * param_6, ulong param_7)


uint FUN_710026b810(long param_1,long *param_2,long param_3,long param_4,long param_5,
                   undefined1 *param_6,ulong param_7)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 auStack_140 [3];
  undefined8 auStack_128 [3];
  undefined8 auStack_110 [3];
  undefined4 local_f4;
  undefined8 auStack_f0 [3];
  undefined8 uStack_d8;
  char local_d0;
  
  puVar5 = auStack_140;
  FUN_71001e6720(&uStack_d8);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710026b8a8:
    if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) goto LAB_710026b8d8;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar8 = *puVar2;
    if (uVar8 == 0) goto LAB_710026b8a8;
    if ((ulong)uVar8 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar8 * 8) + 0x20);
      goto LAB_710026b8a8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710026b8d8:
    lVar6 = 0;
  }
  plVar7 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)&uStack_d8,*(ushort *)(param_1 + 0x48),1);
  uVar3 = FUN_710022b390((long)&uStack_d8,param_2);
  if ((uVar3 & 1) == 0) {
    param_7 = 0;
LAB_710026b950:
    bVar1 = false;
  }
  else {
    FUN_710022b400((long)&uStack_d8,0x2b);
    FUN_710028fdb0((long)&uStack_d8,param_3);
    if (local_d0 == '\0') {
      FUN_710028f4b0((long)&uStack_d8,param_4);
      if (local_d0 == '\0') {
        FUN_710028b9b0((long)&uStack_d8,param_5);
        if (local_d0 == '\0') {
          FUN_71001d0630((long)&uStack_d8,param_6);
          if (local_d0 == '\0') {
            if (param_2 != (long *)0x0) {
              FUN_710022b430((long)param_2,param_7);
            }
            DAT_71052b62e8 = FUN_710028d9e0;
            if ((*(char *)(param_1 + 0x70) != '\0') && (bVar1 = FUN_710022b500(param_1,0x10), bVar1)
               ) {
              bVar1 = true;
              goto LAB_710026ba00;
            }
            uVar3 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d8);
            param_7 = uVar3 & 0xffffffff;
            goto LAB_710026b950;
          }
          local_f4 = 0x8001000a;
          FUN_71001b4200((undefined4 *)auStack_140,&local_f4);
        }
        else {
          local_f4 = 0x8001000a;
          FUN_71001b4200((undefined4 *)auStack_128,&local_f4);
          puVar5 = auStack_128;
        }
      }
      else {
        local_f4 = 0x8001000a;
        FUN_71001b4200((undefined4 *)auStack_110,&local_f4);
        puVar5 = auStack_110;
      }
    }
    else {
      local_f4 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_f0,&local_f4);
      puVar5 = auStack_f0;
    }
    FUN_71001d0c90((long)param_2,puVar5);
    bVar1 = false;
    param_7 = 1;
  }
LAB_710026ba00:
  uVar8 = (uint)param_7;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar1) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d8);
    uVar8 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_d8);
  return uVar8 & 1;
}

