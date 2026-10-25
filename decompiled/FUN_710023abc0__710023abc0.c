// addr:      710023abc0
// offset:    0x23abc0
// name:      FUN_710023abc0
// mangled:   
// signature: undefined __cdecl FUN_710023abc0(long * param_1, long param_2, long * param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710023abc0(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 auStack_218 [37];
  undefined1 auStack_f0 [28];
  char local_d4 [4];
  undefined8 uStack_d0;
  char local_c8;
  ushort local_58 [2];
  uint local_54;
  
  lVar3 = param_4;
  FUN_71001e6870(&uStack_d0,param_4);
  puVar5 = local_58;
  FUN_710022a760((long)&uStack_d0,&local_54,puVar5);
  uVar11 = *(ulong *)(param_4 + 0x18);
  puVar2 = FUN_71001afd40((long)(param_1 + 1),(uint)local_58[0],puVar5,lVar3,param_5,param_6,param_7
                          ,param_8);
  FUN_71001afae0((long)(puVar2 + 1),uVar11);
  if (local_54 == 1) {
    FUN_710022a4b0(param_2);
    FUN_71001d6ba0((long)(param_1 + 10),param_2);
    FUN_71001e6720(auStack_218);
    local_d4[0] = '\0';
    FUN_710022bf40();
    (**(code **)(*param_1 + 0x18))(param_1,local_58[0],&uStack_d0,auStack_218,local_d4,param_3);
    FUN_710022c020(param_3);
    if ((*(char *)(param_2 + 0x28) == '\0') && (local_d4[0] != '\0')) {
      lVar3 = FUN_71001e69b0((long)auStack_218);
      plVar12 = &DAT_71052af138;
      if (DAT_71052af1d8 == '\0') {
LAB_710023acfc:
        if ((*plVar12 == 0) || (lVar10 = *(long *)(*plVar12 + 0x10), lVar10 == 0))
        goto LAB_710023adfc;
        lVar10 = *(long *)(lVar10 + 0x10);
      }
      else {
        puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar4;
        if (uVar1 == 0) goto LAB_710023acfc;
        if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
          goto LAB_710023acfc;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023adfc:
        lVar10 = 0;
      }
      plVar12 = (long *)(lVar10 + 0x78);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      uVar6 = 1;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      (**(code **)(*param_3 + 0xf0))(auStack_f0,param_3,lVar3);
      (**(code **)(*plVar12 + 0x20))(plVar12);
      uVar11 = *(ulong *)(lVar3 + 0x18);
      puVar2 = FUN_71001afd40((long)(param_1 + 1),(uint)local_58[0],uVar6,uVar7,uVar8,uVar9,param_7,
                              param_8);
      FUN_71001afae0((long)(puVar2 + 0xd),uVar11);
    }
    FUN_71001e6910(auStack_218);
    FUN_71001d6c40((long)(param_1 + 10),param_2);
    goto joined_r0x00710023addc;
  }
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023ad68:
    if ((*plVar12 == 0) || (lVar3 = *(long *)(*plVar12 + 0x10), lVar3 == 0)) goto LAB_710023ad98;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_710023ad68;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710023ad68;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023ad98:
    lVar3 = 0;
  }
  plVar12 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  (**(code **)(*param_1 + 0x20))(param_1,local_58[0],&uStack_d0,param_3);
  (**(code **)(*plVar12 + 0x20))(plVar12);
joined_r0x00710023addc:
  if (local_c8 != '\0') {
    FUN_71001b6080(auStack_218);
    lVar3 = FUN_71001b0ab0((long)auStack_218,
                           "ClientProtocolRequestBroker: Error processing message. pBuffer=");
    lVar3 = FUN_71001b6610(lVar3,param_4);
    lVar3 = FUN_71001b0ab0(lVar3," Protocol ID=");
    lVar3 = FUN_71001b6470(lVar3,(ulong)local_58[0]);
    lVar3 = FUN_71001b0ab0(lVar3," CntSize=");
    lVar3 = FUN_71001b3300(lVar3,*(undefined8 *)(param_4 + 0x18));
    lVar3 = FUN_71001b0ab0(lVar3," Size=");
    FUN_71001b3300(lVar3,*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x28));
    if (param_3 == (long *)0x0) {
      FUN_71001b0ab0((long)auStack_218,"  <EndPoint is NULL>");
    }
    else {
      lVar3 = FUN_71001b0ab0((long)auStack_218,"  EndPoint: CID=");
      lVar3 = FUN_71001b6320(lVar3,(ulong)*(uint *)(param_3 + 0x12));
      lVar3 = FUN_71001b0ab0(lVar3," PID=");
      lVar3 = FUN_71001b3300(lVar3,param_3[0x13]);
      lVar3 = FUN_71001b0ab0(lVar3," URL=");
      FUN_71001f3690(lVar3,(long)(param_3 + 2));
    }
    FUN_71001b60c0(auStack_218);
  }
  FUN_71001e6910(&uStack_d0);
  return;
}

