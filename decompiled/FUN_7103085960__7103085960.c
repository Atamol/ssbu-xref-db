// addr:      7103085960
// offset:    0x3085960
// name:      FUN_7103085960
// mangled:   
// signature: undefined __cdecl FUN_7103085960(byte * * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, char * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_7103085960(byte **param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   char *param_5,ulong param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  char cVar2;
  long ***ppplVar3;
  byte **ppbVar4;
  int iVar5;
  byte ***pppbVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar8;
  byte **ppbVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  float fVar15;
  long ***local_d0;
  undefined8 uStack_c8;
  byte *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined2 local_9c;
  undefined1 uStack_9a;
  undefined1 local_99;
  undefined4 uStack_98;
  undefined3 uStack_94;
  byte ***local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_7c [3];
  
  if (*(char *)(param_1 + 3) == '\0') {
    for (plVar1 = *(long **)(param_1[0x62] + 0xd0); plVar1 != *(long **)(param_1[0x62] + 0xd8);
        plVar1 = plVar1 + 2) {
      if ((*(uint *)(plVar1 + 1) < 2) &&
         (lVar11 = *plVar1, *(long *)(lVar11 + 0x68) == 0x133ed9a203)) {
        if (lVar11 != 0) {
          *(undefined1 *)(lVar11 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar11 + 0x108),param_2,(long ****)param_3,param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          cVar2 = *(char *)(param_1 + 3);
          goto joined_r0x007103085df4;
        }
        break;
      }
    }
    goto LAB_7103085d74;
  }
  pbVar12 = param_1[0xeb];
  pbVar13 = param_1[0xec];
  if (pbVar12 == pbVar13) goto LAB_7103085d74;
  local_90 = (byte ***)0x0;
  local_88 = 0;
  ppbVar4 = *(byte ***)pbVar12;
  ppplVar3 = *(long ****)pbVar12;
  uVar14 = *(uint *)(pbVar12 + 8);
  pppbVar6 = (byte ***)
             FUN_710392e290(0x10,0x1a0,(long ****)param_3,param_4,(long ****)param_5,param_6,param_7
                            ,param_8);
  if (pppbVar6 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_7c[0] = 0;
      local_d0 = (long ***)&DAT_000001a0;
      pppplVar8 = &local_d0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
      if (((uVar7 & 1) != 0) &&
         (pppbVar6 = (byte ***)
                     FUN_710392e290(0x10,0x1a0,pppplVar8,param_4,(long ****)param_5,param_6,param_7,
                                    param_8), pppbVar6 != (byte ***)0x0)) goto LAB_7103085a24;
    }
    pppbVar6 = (byte ***)0x0;
  }
LAB_7103085a24:
  param_5 = "joint_spring";
  param_4 = (byte ****)0x0;
  param_6 = 0;
  FUN_7103143880(pppbVar6,param_1,(byte *)"dys_spring_skin_set",0,(long ****)"joint_spring",0,
                 param_7,param_8);
  uStack_a0 = 0;
  local_b0 = 0;
  local_a8 = 0x50000000;
  local_a4 = 0xffffffff;
  local_9c = 0;
  uStack_98 = 0x50000000;
  local_c0 = param_1[0xea];
  uStack_c8 = 0;
  uStack_b8 = 0;
  param_3 = (long *********)0x0;
  local_d0 = ppplVar3;
  local_90 = pppbVar6;
  (*(code *)(*pppbVar6)[0x13])(pppbVar6,&local_d0);
  fVar15 = *(float *)((long)param_1 + 0x77c);
  pppbVar6[0xf] = (byte **)(ulong)uVar14;
  pppbVar6[0xe] = ppbVar4;
  FUN_7103143fd0((long)pppbVar6,extraout_x1,(undefined **)param_3,param_4,(long ****)param_5,param_6
                 ,param_7,param_8);
  *(float *)((long)pppbVar6 + 0x124) = fVar15;
  if (fVar15 < -1.0) {
    *(undefined1 *)(pppbVar6 + 0x32) = 1;
  }
  *(undefined4 *)((long)pppbVar6 + 0x11c) = *(undefined4 *)(param_1 + 0xf0);
  ppbVar9 = (byte **)param_1[0xee];
  pppbVar6[0x27] = (byte **)(ulong)*(uint *)(param_1 + 0xef);
  pppbVar6[0x26] = ppbVar9;
  ppbVar9 = (byte **)param_1[0x67];
  *(undefined4 *)((long)pppbVar6 + 0x104) = 4;
  pppbVar6[0x21] = ppbVar9;
  pppbVar6[0x31] = (byte **)(ulong)uVar14;
  pppbVar6[0x30] = ppbVar4;
  FUN_710313ef20((long *)pppbVar6);
  local_88 = *(undefined4 *)(pbVar12 + 0xc);
  pbVar10 = param_1[0x10f];
  if (pbVar10 == param_1[0x110]) {
    FUN_7103088a80((long *)(param_1 + 0x10e),&local_90,(long ****)param_3,param_4,(long ****)param_5
                   ,param_6,param_7,param_8);
  }
  else {
    *(byte ****)pbVar10 = local_90;
    *(ulong *)(pbVar10 + 8) = CONCAT44(uStack_84,local_88);
    param_1[0x10f] = param_1[0x10f] + 0x10;
  }
  pbVar12 = pbVar12 + 0x10;
  if (pbVar12 != pbVar13) {
    do {
      local_90 = (byte ***)0x0;
      local_88 = 0;
      ppbVar4 = *(byte ***)pbVar12;
      ppplVar3 = *(long ****)pbVar12;
      uVar14 = *(uint *)(pbVar12 + 8);
      pppbVar6 = (byte ***)
                 FUN_710392e290(0x10,0x1a0,(long ****)param_3,param_4,(long ****)param_5,param_6,
                                param_7,param_8);
      if (pppbVar6 == (byte ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_7c[0] = 0;
          local_d0 = (long ***)&DAT_000001a0;
          pppplVar8 = &local_d0;
          uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
          if (((uVar7 & 1) != 0) &&
             (pppbVar6 = (byte ***)
                         FUN_710392e290(0x10,0x1a0,pppplVar8,param_4,(long ****)param_5,param_6,
                                        param_7,param_8), pppbVar6 != (byte ***)0x0))
          goto LAB_7103085c4c;
        }
        pppbVar6 = (byte ***)0x0;
      }
LAB_7103085c4c:
      param_4 = (byte ****)0x1;
      param_6 = 0;
      param_5 = "joint_spring";
      FUN_7103143880(pppbVar6,param_1,(byte *)"dys_spring_skin_set",1,(long ****)"joint_spring",0,
                     param_7,param_8);
      local_b0 = 0;
      local_a8 = 0x50000000;
      local_a4 = 0xffffffff;
      uStack_a0 = 0;
      local_9c = 0;
      uStack_98 = 0x50000000;
      local_c0 = param_1[0xea];
      uStack_c8 = 0;
      uStack_b8 = 0;
      param_3 = (long *********)0x0;
      local_d0 = ppplVar3;
      local_90 = pppbVar6;
      (*(code *)(*pppbVar6)[0x13])(pppbVar6,&local_d0);
      fVar15 = *(float *)((long)param_1 + 0x77c);
      pppbVar6[0xf] = (byte **)(ulong)uVar14;
      pppbVar6[0xe] = ppbVar4;
      FUN_7103143fd0((long)pppbVar6,extraout_x1_00,(undefined **)param_3,param_4,(long ****)param_5,
                     param_6,param_7,param_8);
      *(float *)((long)pppbVar6 + 0x124) = fVar15;
      if (fVar15 < -1.0) {
        *(undefined1 *)(pppbVar6 + 0x32) = 1;
      }
      *(undefined4 *)((long)pppbVar6 + 0x11c) = *(undefined4 *)(param_1 + 0xf0);
      ppbVar9 = (byte **)param_1[0xee];
      pppbVar6[0x27] = (byte **)(ulong)*(uint *)(param_1 + 0xef);
      pppbVar6[0x26] = ppbVar9;
      ppbVar9 = (byte **)param_1[0x67];
      *(undefined4 *)((long)pppbVar6 + 0x104) = 4;
      pppbVar6[0x21] = ppbVar9;
      pppbVar6[0x31] = (byte **)(ulong)uVar14;
      pppbVar6[0x30] = ppbVar4;
      FUN_710313ef20((long *)pppbVar6);
      local_88 = *(undefined4 *)(pbVar12 + 0xc);
      pbVar10 = param_1[0x10f];
      if (pbVar10 == param_1[0x110]) {
        FUN_7103088a80((long *)(param_1 + 0x10e),&local_90,(long ****)param_3,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
      }
      else {
        *(byte ****)pbVar10 = local_90;
        *(ulong *)(pbVar10 + 8) = CONCAT44(uStack_84,local_88);
        param_1[0x10f] = param_1[0x10f] + 0x10;
      }
      pbVar12 = pbVar12 + 0x10;
    } while (pbVar12 != pbVar13);
  }
LAB_7103085d74:
  cVar2 = *(char *)(param_1 + 3);
joined_r0x007103085df4:
  if ((cVar2 != '\0') && (DAT_71052b9390 != 0)) {
    uStack_c8 = CONCAT44(uStack_c8._4_4_,0x3f800000);
    local_c0 = (byte *)0x0;
    uStack_b8 = 0;
    local_b0 = 0x2bf800000;
    local_a8 = 0;
    local_a4 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_a0 = 0;
    local_9c = 0;
    uStack_9a = 0;
    local_99 = 0;
    local_d0 = (long ***)0x3;
    iVar5 = FUN_710056c360(DAT_71052b9390,(uint *)&local_d0,param_3,param_4,param_5,param_6,param_7,
                           param_8);
    *(int *)(param_1 + 0x118) = iVar5;
  }
  return;
}

