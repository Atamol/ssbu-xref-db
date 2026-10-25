// addr:      7102eadc80
// offset:    0x2eadc80
// name:      FUN_7102eadc80
// mangled:   
// signature: undefined __cdecl FUN_7102eadc80(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102eadc80(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x100) - 4U < 2) {
    FUN_7102eadd70(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x240);
    puVar2 = (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1];
    pcVar3 = "IPP0003";
  }
  else {
    if (*(int *)(param_1 + 0x100) - 1U < 2) {
      FUN_7102eadd70(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x240),
                     (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1],"IPP0002");
      puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x240);
      puVar2 = (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1];
      pcVar3 = "IPP0004";
      goto LAB_7102eadd60;
    }
    FUN_7102eadd70(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7102eadd70(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x240),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1],"IPP0002");
    FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x240),
                   (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1],"IPP0003");
    puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x240);
    puVar2 = (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1];
    pcVar3 = "IPP0004";
  }
  FUN_71025f55b0(puVar1,puVar2,pcVar3);
  puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x240);
  puVar2 = (undefined8 *)(*(undefined8 **)(param_1 + 0x240))[1];
  pcVar3 = "IPP0005";
LAB_7102eadd60:
  FUN_71025f55b0(puVar1,puVar2,pcVar3);
  return;
}

