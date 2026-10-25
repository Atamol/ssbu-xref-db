// addr:      7100155130
// offset:    0x155130
// name:      FUN_7100155130
// mangled:   
// signature: undefined __cdecl FUN_7100155130(int * param_1, long param_2, byte param_3, byte param_4, undefined4 param_5, int param_6)


void FUN_7100155130(int *param_1,long param_2,byte param_3,byte param_4,undefined4 param_5,
                   int param_6)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int local_70 [4];
  int local_60 [4];
  undefined4 local_48 [2];
  
  piVar5 = local_70;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_60 | 4));
  local_70[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
  FUN_7100154190(local_70,param_2,param_3 & 1,param_4 & 1);
  FUN_71000bcf30(local_60,local_70);
  if (local_60[0] != 0) {
LAB_71001551b0:
    piVar5 = local_60;
    goto LAB_7100155358;
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  plVar1 = (long *)FUN_71000b1b90();
  puVar2 = (undefined4 *)FUN_7100130810(0x370,plVar1);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined8 *)(param_2 + 0xa80) = 0;
LAB_7100155328:
    local_70[0] = 0x10c01;
  }
  else {
    FUN_71001543b0(puVar2,"Pia Send",param_5);
    *(undefined4 **)(param_2 + 0xa80) = puVar2;
    plVar1 = (long *)FUN_71000b1b90();
    puVar2 = (undefined4 *)FUN_7100130810(0x370,plVar1);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined8 *)(param_2 + 0xa88) = 0;
      goto LAB_7100155328;
    }
    FUN_71001543b0(puVar2,"Pia Send Unicast",param_5);
    *(undefined4 **)(param_2 + 0xa88) = puVar2;
    plVar1 = (long *)FUN_71000b1b90();
    puVar2 = (undefined4 *)FUN_7100130810(0x370,plVar1);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined8 *)(param_2 + 0xa90) = 0;
      goto LAB_7100155328;
    }
    FUN_71001543b0(puVar2,"Pia Send Broadcast",param_5);
    *(undefined4 **)(param_2 + 0xa90) = puVar2;
    plVar1 = (long *)FUN_71000b1b90();
    puVar3 = (undefined8 *)FUN_7100130810(0x90,plVar1);
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 0xa60) = 0;
      goto LAB_7100155328;
    }
    FUN_71000bc850(puVar3);
    *(undefined8 **)(param_2 + 0xa60) = puVar3;
    plVar1 = (long *)FUN_71000b1b90();
    uVar4 = FUN_7100130810(0x9750,plVar1);
    if (uVar4 == 0) {
      *(undefined8 *)(param_2 + 0xa68) = 0;
      goto LAB_7100155328;
    }
    lVar6 = 0;
    do {
      puVar3 = (undefined8 *)(uVar4 + lVar6);
      lVar6 = lVar6 + 0x18;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    } while (lVar6 != 0x9750);
    *(ulong *)(param_2 + 0xa68) = uVar4;
    FUN_71000bc870(local_70,*(ulong **)(param_2 + 0xa60),uVar4,0x9750);
    FUN_71000bcf30(local_60,local_70);
    if (local_60[0] != 0) goto LAB_71001551b0;
    plVar1 = (long *)FUN_71000b1b90();
    lVar6 = FUN_7100130810(0x588,plVar1);
    if (lVar6 == 0) {
      *(undefined8 *)(param_2 + 0xa70) = 0;
      goto LAB_7100155328;
    }
    lVar7 = 0;
    do {
      puVar3 = (undefined8 *)(lVar6 + lVar7);
      lVar7 = lVar7 + 0x18;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    } while (lVar7 != 0x588);
    *(long *)(param_2 + 0xa70) = lVar6;
    if (param_6 == 0) {
      local_70[0] = 0x10c07;
    }
    else {
      *(int *)(param_2 + 0xa48) = param_6;
      local_70[0] = 0;
    }
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_70 | 4));
  local_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_48);
LAB_7100155358:
  FUN_71000bce50(param_1,piVar5);
  return;
}

