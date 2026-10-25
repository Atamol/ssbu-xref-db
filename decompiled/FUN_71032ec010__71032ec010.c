// addr:      71032ec010
// offset:    0x32ec010
// name:      FUN_71032ec010
// mangled:   
// signature: undefined __cdecl FUN_71032ec010(long param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71032ec010(long param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined **local_30;
  long *local_28;
  
  if (((param_2 & 1) != 0) && (*(char *)(param_1 + 499) != '\0')) {
    lVar5 = *(long *)(param_1 + 0x100);
    lVar6 = *(long *)(param_1 + 0x108);
    uVar1 = 0;
    if (lVar6 - lVar5 != 0) {
      uVar1 = (lVar6 - lVar5 >> 3) * 0x155 - 1;
    }
    uVar7 = *(long *)(param_1 + 0x120) + *(long *)(param_1 + 0x118);
    if (uVar1 == uVar7) {
      FUN_7101afbf30((ulong *)(param_1 + 0xf8),param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar7 = *(long *)(param_1 + 0x118) + *(long *)(param_1 + 0x120);
      lVar5 = *(long *)(param_1 + 0x100);
      lVar6 = *(long *)(param_1 + 0x108);
    }
    if (lVar6 == lVar5) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(lVar5 + (uVar7 / 0x155) * 8) + (uVar7 % 0x155) * 0xc);
    }
    *puVar4 = 0x100000004;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 1;
  }
  bVar2 = ~(byte)param_2 & 1;
  FUN_7103776910(&local_30,**(long **)(param_1 + 0x130) + 8,(long ****)"set_txt_key",param_3,param_4
                 ,param_5,param_6,param_7,param_8);
  plVar3 = local_28;
  lVar5 = *local_28;
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | bVar2;
  }
  local_30 = &PTR_FUN_710523d9a8;
  local_28 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar3);
  }
  *(byte *)(param_1 + 0x200) = bVar2;
  return;
}

