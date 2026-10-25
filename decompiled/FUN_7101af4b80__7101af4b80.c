// addr:      7101af4b80
// offset:    0x1af4b80
// name:      FUN_7101af4b80
// mangled:   
// signature: undefined __cdecl FUN_7101af4b80(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101af4b80(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  ushort *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined **local_38;
  long *local_30;
  ushort local_24 [2];
  
  FUN_7103776910(&local_38,param_2,(long ****)"set_txt_scene",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar1 = local_30;
  lVar6 = *local_30;
  if (*(int *)(param_1 + 0x168) == 0) {
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    }
    plVar2 = (long *)local_30[2];
    if (plVar2 == (long *)0x0) goto LAB_7101af4c68;
    local_24[0] = 0;
    local_24[1] = 0;
    puVar3 = local_24;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
    }
    if ((*(ushort *)(param_1 + 0x1ac) == 0) ||
       ((((*(ushort *)(param_1 + 0x1ac) | 1) == 0xf && (*(short *)(param_1 + 0x1ae) == 1)) &&
        (*(short *)(param_1 + 0x1b0) == 0xb)))) {
      FUN_710377a120((long)&local_38,(char *)(param_1 + 0x16c),param_3,param_4,param_5,param_6,
                     param_7,param_8);
      if (local_30 == (long *)0x0) {
        return;
      }
      goto LAB_7101af4c68;
    }
    plVar2 = (long *)local_30[2];
    if (plVar2 == (long *)0x0) goto LAB_7101af4c68;
    puVar3 = (ushort *)(param_1 + 0x1ac);
    uVar4 = 0xffffffff;
    uVar5 = 1;
  }
  FUN_71037a2270(plVar2,puVar3,uVar4,uVar5);
LAB_7101af4c68:
  local_30 = (long *)0x0;
  local_38 = &PTR_FUN_710523d9a8;
  FUN_710392eb40((ulong)plVar1);
  return;
}

