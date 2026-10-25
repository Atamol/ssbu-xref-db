// addr:      7100005f10
// offset:    0x5f10
// name:      FUN_7100005f10
// mangled:   
// signature: uint __cdecl FUN_7100005f10(long * param_1, byte * param_2, uint param_3, long * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


uint FUN_7100005f10(long *param_1,byte *param_2,uint param_3,long *param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int local_5c;
  long local_58;
  
  local_58 = 0;
  lVar8 = *param_1;
  *param_4 = 0;
  uVar9 = (ulong)param_3;
  plVar4 = param_4;
  if (*(long *)(lVar8 + 0xb8) != 0) {
    FUN_7100016b40(lVar8,3);
  }
  lVar3 = FUN_7100005cf0(*param_1,param_2,uVar9,plVar4,param_5,param_6,param_7,param_8);
  local_58 = lVar3;
  if (lVar3 == 0) {
    uVar7 = 0xffffffff;
    lVar6 = *(long *)(lVar8 + 0xb8);
  }
  else {
    FUN_7100015de0(lVar8,(byte *)"Hostname %s was found in DNS cache\n",param_2,plVar4,param_5,
                   param_6,param_7,param_8);
    uVar7 = 0;
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    lVar6 = *(long *)(lVar8 + 0xb8);
  }
  if (lVar6 != 0) {
    FUN_7100016ba0(lVar8,3);
  }
  if (lVar3 == 0) {
    bVar1 = FUN_7100006530((long)param_1);
    if (!bVar1) {
      return 0xffffffff;
    }
    piVar5 = &local_5c;
    lVar6 = thunk_FUN_7100004b80(param_1,param_2,param_3,piVar5);
    if (lVar6 == 0) {
      if (local_5c != 0) {
        iVar2 = FUN_7100004a10(param_1,&local_58,uVar9,piVar5,param_5,param_6,param_7,param_8);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        uVar7 = (uint)(local_58 == 0);
        lVar3 = local_58;
      }
    }
    else {
      if (*(long *)(lVar8 + 0xb8) != 0) {
        FUN_7100016b40(lVar8,3);
      }
      local_58 = FUN_7100005df0(lVar8,lVar6);
      if (*(long *)(lVar8 + 0xb8) != 0) {
        FUN_7100016ba0(lVar8,3);
      }
      if (local_58 == 0) {
        FUN_7100004f10(lVar6);
        lVar3 = local_58;
      }
      else {
        uVar7 = 0;
        lVar3 = local_58;
      }
    }
  }
  *param_4 = lVar3;
  return uVar7;
}

