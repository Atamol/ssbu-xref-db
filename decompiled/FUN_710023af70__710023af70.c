// addr:      710023af70
// offset:    0x23af70
// name:      FUN_710023af70
// mangled:   
// signature: undefined __cdecl FUN_710023af70(long * param_1, uint param_2, long param_3, long param_4, char * param_5, long * param_6)


void FUN_710023af70(long *param_1,uint param_2,long param_3,long param_4,char *param_5,long *param_6
                   )

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ushort uVar10;
  long *plVar11;
  undefined4 auStack_f0 [6];
  undefined8 auStack_d8 [14];
  undefined4 local_64;
  
  plVar6 = &DAT_71052af180;
  uVar10 = (ushort)param_2;
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        plVar6 = (long *)FUN_710023b1b0(0,uVar10);
        goto joined_r0x00710023b010;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x68);
    }
  }
  if (*plVar6 == 0) {
    plVar6 = (long *)FUN_710023b1b0(0,uVar10);
  }
  else {
    plVar6 = (long *)FUN_710023b1b0(*(long *)(*plVar6 + 0x10),uVar10);
  }
joined_r0x00710023b010:
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(**(code **)(*param_1 + 0x60))(param_1,param_2);
    bVar3 = plVar6 == (long *)0x0;
    if (((param_2 & 0xffff) == 1) && (plVar6 == (long *)0x0)) {
      *param_5 = '\0';
      return;
    }
  }
  else {
    bVar3 = false;
  }
  uVar4 = FUN_710022e510(param_3);
  FUN_71001e6720(auStack_d8);
  *param_5 = '\0';
  if (bVar3) {
    *param_5 = '\x01';
    lVar7 = FUN_71001d6b80((long)(param_1 + 10));
    local_64 = 0x80010002;
    FUN_71001b4200(auStack_f0,&local_64);
    FUN_71001b4300((undefined4 *)(lVar7 + 0x40),auStack_f0);
    cVar2 = *param_5;
  }
  else {
    plVar11 = param_1 + 0x15;
    uVar8 = (**(code **)(*plVar11 + 0x28))(plVar11);
    local_64 = 0;
    lVar7 = FUN_71001d6b80((long)(param_1 + 10));
    uVar9 = FUN_710022a510(lVar7);
    FUN_710022ed30(plVar6,uVar9,param_3,(long)auStack_d8,param_5,&local_64,param_6);
    if ((uVar8 & 1) != 0) {
      (**(code **)(*plVar11 + 0x30))(plVar11);
    }
    cVar2 = *param_5;
  }
  if (cVar2 != '\0') {
    FUN_710022e620(param_4,0,uVar10);
    lVar7 = FUN_71001d6b80((long)(param_1 + 10));
    FUN_710022e560(param_4,lVar7,uVar4,(long)auStack_d8);
  }
  FUN_71001e6910(auStack_d8);
  return;
}

