// addr:      71002302b0
// offset:    0x2302b0
// name:      FUN_71002302b0
// mangled:   
// signature: uint __cdecl FUN_71002302b0(long param_1, long * param_2, void * param_3, ulong param_4)


uint FUN_71002302b0(long param_1,long *param_2,void *param_3,ulong param_4)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 auStack_e8 [3];
  undefined8 auStack_d0 [3];
  undefined8 uStack_b8;
  char local_b0;
  byte local_48 [4];
  undefined4 local_44;
  
  FUN_71001e6720(&uStack_b8);
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100230334:
    if ((*plVar8 == 0) || (lVar7 = *(long *)(*plVar8 + 0x10), lVar7 == 0)) goto LAB_7100230364;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar9 = *puVar3;
    if (uVar9 == 0) goto LAB_7100230334;
    if ((ulong)uVar9 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x20);
      goto LAB_7100230334;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100230364:
    lVar7 = 0;
  }
  plVar8 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar1 = *(ushort *)(param_1 + 0x48);
  local_44 = CONCAT22(local_44._2_2_,uVar1);
  if (uVar1 < 0x7f) {
    local_48[0] = (byte)uVar1 | 0x80;
    FUN_71001d0460((long)&uStack_b8,local_48,1);
    bVar2 = FUN_71001ccd00(param_2);
    if (!bVar2) goto LAB_71002303ac;
LAB_71002303ec:
    local_44 = (undefined4)param_2[3];
    FUN_71001d0460((long)&uStack_b8,&local_44,4);
    local_44 = 8;
    FUN_71001d0460((long)&uStack_b8,&local_44,4);
    FUN_71001d0460((long)&uStack_b8,param_3,4);
    if (local_b0 != '\0') {
      local_44 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_d0,&local_44);
      puVar6 = auStack_d0;
LAB_7100230484:
      FUN_71001d0c90((long)param_2,puVar6);
      bVar2 = false;
      param_4 = 1;
      goto LAB_7100230494;
    }
    FUN_7100228c80((long)&uStack_b8,param_4);
    if (local_b0 != '\0') {
      local_44 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_e8,&local_44);
      puVar6 = auStack_e8;
      goto LAB_7100230484;
    }
    DAT_71052b5748 = FUN_710022f670;
    if ((*(char *)(param_1 + 0x70) != '\0') && ((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0)) {
      bVar2 = true;
      goto LAB_7100230494;
    }
    uVar5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b8);
    param_4 = uVar5 & 0xffffffff;
  }
  else {
    local_48[0] = 0xff;
    FUN_71001d0460((long)&uStack_b8,local_48,1);
    FUN_71001d0460((long)&uStack_b8,&local_44,2);
    bVar2 = FUN_71001ccd00(param_2);
    if (bVar2) goto LAB_71002303ec;
LAB_71002303ac:
    param_4 = 0;
  }
  bVar2 = false;
LAB_7100230494:
  uVar9 = (uint)param_4;
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if (bVar2) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b8);
    uVar9 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_b8);
  return uVar9 & 1;
}

