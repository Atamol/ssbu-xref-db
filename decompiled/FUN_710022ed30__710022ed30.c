// addr:      710022ed30
// offset:    0x22ed30
// name:      FUN_710022ed30
// mangled:   
// signature: undefined __cdecl FUN_710022ed30(long * param_1, undefined8 param_2, long param_3, long param_4, undefined1 * param_5, undefined8 param_6, long * param_7)


void FUN_710022ed30(long *param_1,undefined8 param_2,long param_3,long param_4,undefined1 *param_5,
                   undefined8 param_6,long *param_7)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  
  if (param_7 == (long *)0x0) {
    lVar10 = FUN_71001da660();
    lVar14 = param_1[0xf];
    lVar8 = param_1[0x10];
    lVar11 = FUN_71001da660();
    uVar7 = FUN_71001daf50(lVar11);
    lVar11 = FUN_71001da660();
    uVar4 = FUN_71001dafa0(lVar11);
    FUN_71001da730(lVar10,lVar14,(int)lVar8,uVar7,uVar4);
    bVar1 = *(byte *)(param_1 + 0xc);
  }
  else {
    lVar8 = FUN_71001df870((long)(param_7 + 2));
    iVar5 = FUN_71001bef20(lVar8);
    lVar8 = FUN_71001df870((long)(param_7 + 2));
    sVar3 = FUN_71001beb30(lVar8);
    if (iVar5 == 0) {
      lVar8 = FUN_71001da660();
      iVar5 = FUN_71001daf50(lVar8);
    }
    if (sVar3 == 0) {
      lVar8 = FUN_71001da660();
      sVar3 = FUN_71001dafa0(lVar8);
    }
    lVar8 = FUN_71001da660();
    FUN_71001da730(lVar8,param_7[0x13],(int)param_7[0x12],iVar5,sVar3);
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xd] = (long)param_7;
    param_1[0xf] = param_7[0x13];
    *(int *)(param_1 + 0x10) = (int)param_7[0x12];
    uVar6 = (**(code **)(*param_7 + 0xf8))(param_7);
    if ((uVar6 >> 0x18 & 1) == 0) {
      *(undefined1 *)(param_3 + 0x69) = 1;
      *(undefined1 *)(param_4 + 0x69) = 1;
    }
    bVar1 = *(byte *)(param_1 + 0xc);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    uVar12 = (**(code **)(*param_1 + 0xb8))(param_1);
    if ((uVar12 & 1) == 0) {
      (**(code **)(*param_1 + 0xa8))(param_1,param_3,param_4,param_5,param_7);
      cVar2 = (char)param_1[0xe];
    }
    else {
      (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      cVar2 = (char)param_1[0xe];
    }
    goto joined_r0x00710022ef3c;
  }
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710022ee4c:
    if ((*plVar13 == 0) || (lVar8 = *(long *)(*plVar13 + 0x10), lVar8 == 0)) goto LAB_710022ef80;
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  else {
    puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar9;
    if (uVar6 == 0) goto LAB_710022ee4c;
    if ((ulong)uVar6 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x20);
      goto LAB_710022ee4c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710022ef80:
    lVar8 = 0;
  }
  plVar13 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  uVar12 = (**(code **)(*param_1 + 0xb8))(param_1);
  if ((uVar12 & 1) == 0) {
    (**(code **)(*param_1 + 0xa8))(param_1,param_3,param_4,param_5,param_7);
  }
  else {
    (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  (**(code **)(*plVar13 + 0x20))(plVar13);
  cVar2 = (char)param_1[0xe];
joined_r0x00710022ef3c:
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  lVar8 = FUN_71001da660();
  FUN_71001daa40(lVar8);
  if ((*(byte *)(param_1 + 0xc) >> 3 & 1) != 0) {
    *param_5 = 0;
  }
  return;
}

