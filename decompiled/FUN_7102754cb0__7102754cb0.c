// addr:      7102754cb0
// offset:    0x2754cb0
// name:      FUN_7102754cb0
// mangled:   
// signature: undefined __cdecl FUN_7102754cb0(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102754cb0(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long ****pppplVar2;
  undefined8 uVar3;
  long ***local_38;
  undefined4 local_24;
  
  plVar1 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    local_24 = 0;
    local_38 = (long ***)&DAT_00000010;
    pppplVar2 = &local_38;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
    plVar1 = (long *)FUN_710392e290(0x10,0x10,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  }
  *plVar1 = param_2;
  *(undefined1 *)(plVar1 + 1) = 0;
  FUN_71025f7350(*(long *)(*(long *)(**(long **)(param_2 + 8) + 0x318) + 0x10),
                 (byte *)"light00_set1");
  uVar3 = 1;
  FUN_7102633a10(*(long *)(**(long **)(param_2 + 8) + 0x318),(long *********)"chara1",1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7102633800(*(long *)(**(long **)(param_2 + 8) + 0x318),(long *********)"reflection_cubemap",
                 uVar3,param_4,param_5,param_6,param_7,param_8);
  FUN_7102633b90(*(long *)(**(long **)(param_2 + 8) + 0x318),(long *********)"stage",1,param_4,
                 param_5,param_6,param_7,param_8);
  *param_1 = plVar1;
  return;
}

