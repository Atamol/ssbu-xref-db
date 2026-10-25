// addr:      7101dda130
// offset:    0x1dda130
// name:      FUN_7101dda130
// mangled:   
// signature: undefined __cdecl FUN_7101dda130(long param_1, undefined4 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dda130(long param_1,undefined4 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined **local_50;
  undefined8 *local_48;
  
  lVar6 = *(long *)(param_1 + 0x80);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar6 + 0x50),0,(long ****)0x100c,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103775dc0((long *)**(undefined8 **)(lVar6 + 0x58),0,(long ****)0x1005,param_4,param_5,param_6
                 ,param_7,param_8);
  lVar1 = lVar6 + 0x60;
  *(undefined4 *)(lVar6 + 0x80) = 1;
  FUN_7103776640(&local_50,lVar1,(byte ****)"set_part_aw_%02d",0,param_4,param_5,param_6,param_7,
                 param_8);
  puVar2 = local_48;
  if ((*(long *)((long)local_48 + 8) != 0) &&
     (lVar5 = *(long *)(*(long *)((long)local_48 + 8) + 0x18), lVar5 != 0)) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  local_50 = &PTR_FUN_710523d988;
  local_48 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(ulong *)((long)puVar2 + 0x18);
    *(undefined ***)((long)puVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40((ulong)puVar2);
  }
  uVar4 = 1;
  FUN_7103776640(&local_50,lVar1,(byte ****)"set_part_aw_%02d",1,param_4,param_5,param_6,param_7,
                 param_8);
  puVar2 = local_48;
  if ((*(long *)((long)local_48 + 8) != 0) &&
     (lVar5 = *(long *)(*(long *)((long)local_48 + 8) + 0x18), lVar5 != 0)) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  local_50 = &PTR_FUN_710523d988;
  local_48 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(ulong *)((long)puVar2 + 0x18);
    *(undefined ***)((long)puVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40((ulong)puVar2);
  }
  FUN_7103776910(&local_50,lVar1,(long ****)"set_fxui_smn_shine",uVar4,param_4,param_5,param_6,
                 param_7,param_8);
  puVar2 = local_48;
  FUN_710377aa20((long *)*local_48,0);
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x78),0x710436c918);
  *(undefined4 *)(lVar6 + 0xa0) = param_2;
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

