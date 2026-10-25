// addr:      7101bbbd30
// offset:    0x1bbbd30
// name:      FUN_7101bbbd30
// mangled:   
// signature: undefined __cdecl FUN_7101bbbd30(long param_1, int param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bbbd30(long param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  ushort *puVar3;
  char *pcVar4;
  byte *pbVar5;
  long *plVar6;
  ushort auStack_1050 [2048];
  int local_48 [2];
  
  if (param_2 - 2U < 5) {
    lVar2 = param_1 + 0x338;
    switch(param_2) {
    case 2:
      plVar6 = *(long **)(*(long *)(param_3 + 8) + 0x10);
      if (plVar6 != (long *)0x0) {
        pbVar5 = (byte *)plVar6[0x1c];
        *(undefined4 *)((long)plVar6 + 0x25c) = *(undefined4 *)(param_1 + 0x30);
        if (((pbVar5 != (byte *)0x0) && (*pbVar5 != 0x23)) && (*pbVar5 != 0x40)) {
          puVar3 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar5);
          local_48[0] = *(int *)((long)plVar6 + 0x25c);
          memset(auStack_1050,0,0x1000);
          uVar1 = FUN_71037ae170((long)auStack_1050,puVar3,local_48);
          FUN_71037a2270(plVar6,auStack_1050,uVar1,0);
        }
      }
      FUN_710377a280(param_3,(byte *)"mel_training_speed1",1);
      plVar6 = *(long **)(*(long *)(param_1 + 0x340) + 0x10);
      if (plVar6 != (long *)0x0) {
        pbVar5 = (byte *)plVar6[0x1c];
        *(undefined4 *)((long)plVar6 + 0x25c) = *(undefined4 *)(param_1 + 0x30);
        if (((pbVar5 != (byte *)0x0) && (*pbVar5 != 0x23)) && (*pbVar5 != 0x40)) {
          puVar3 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar5);
          local_48[0] = *(int *)((long)plVar6 + 0x25c);
          memset(auStack_1050,0,0x1000);
          uVar1 = FUN_71037ae170((long)auStack_1050,puVar3,local_48);
          FUN_71037a2270(plVar6,auStack_1050,uVar1,0);
        }
      }
      FUN_710377a280(lVar2,(byte *)"mel_training_speed_control_frame",1);
      return;
    case 3:
      FUN_710377a120(param_3,"mel_training_speed2",param_3,param_4,param_5,param_6,param_7,param_8);
      pcVar4 = "mel_training_speed_slow0";
      break;
    case 4:
      FUN_710377a120(param_3,"mel_training_speed3",param_3,param_4,param_5,param_6,param_7,param_8);
      pcVar4 = "mel_training_speed_slow1";
      break;
    case 5:
      FUN_710377a120(param_3,"mel_training_speed4",param_3,param_4,param_5,param_6,param_7,param_8);
      pcVar4 = "mel_training_speed_slow2";
      break;
    case 6:
      FUN_710377a120(param_3,"mel_training_speed7",param_3,param_4,param_5,param_6,param_7,param_8);
      pcVar4 = "mel_training_speed_quick";
    }
  }
  else {
    pcVar4 = "mel_training_speed0";
    lVar2 = param_3;
  }
  FUN_710377a120(lVar2,pcVar4,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

