// addr:      7101880ed0
// offset:    0x1880ed0
// name:      FUN_7101880ed0
// mangled:   
// signature: undefined __cdecl FUN_7101880ed0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101880ed0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  long ****pppplVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  uint local_2228 [2];
  byte local_2220 [64];
  long ***local_21e0;
  undefined1 local_21d8;
  undefined1 local_21d7;
  undefined8 local_21d4;
  undefined8 local_21cc;
  byte local_21c4 [64];
  undefined8 local_2184;
  byte local_217c [64];
  undefined8 local_213c;
  byte local_2134 [64];
  undefined1 auStack_20f4 [4096];
  undefined1 uStack_10f4;
  undefined4 local_10f0;
  undefined1 uStack_10ec;
  undefined8 local_10e8;
  undefined1 uStack_10e0;
  undefined4 local_10a0;
  undefined4 local_109c;
  uint local_1098;
  undefined4 uStack_1094;
  undefined8 local_1090;
  undefined8 local_1088;
  undefined2 local_1080;
  undefined8 uStack_107e;
  undefined4 uStack_1076;
  undefined2 local_1072;
  undefined4 local_1070;
  undefined2 local_106c;
  undefined1 auStack_1050 [4096];
  
  lVar20 = *(long *)(param_1 + 0x58);
  FUN_71032e5e60(*(long *)(DAT_710532f7c8 + 8),param_2,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  *(bool *)(lVar20 + 0xec) = *(int *)(param_2 + 0x10) == 2;
  plVar18 = (long *)(lVar20 + 0xd8);
  lVar7 = *plVar18;
  FUN_710323beb0(lVar7,(ulong *)&DAT_71045451a0,(long)*(int *)(lVar7 + 0x70),
                 (ulong)*(uint *)(lVar7 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar7 = *plVar18;
  FUN_710323beb0(lVar7,(ulong *)&DAT_71045451a8,(long)*(int *)(lVar7 + 0x70),
                 (ulong)*(uint *)(lVar7 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar7 = *plVar18;
  FUN_710323beb0(lVar7,(ulong *)&DAT_71045451b0,(long)*(int *)(lVar7 + 0x70),
                 (ulong)*(uint *)(lVar7 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar7 = *plVar18;
  FUN_710323beb0(lVar7,(ulong *)&DAT_71045451b8,(long)*(int *)(lVar7 + 0x70),
                 (ulong)*(uint *)(lVar7 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar7 = *plVar18;
  ppppppppplVar10 = (long *********)(long)*(int *)(lVar7 + 0x70);
  ppppbVar12 = (byte ****)(ulong)*(uint *)(lVar7 + 0x68);
  pppplVar13 = (long ****)0x0;
  FUN_710323beb0(lVar7,(ulong *)"{:D=-",(long)ppppppppplVar10,(ulong)ppppbVar12,(long ****)0x0,
                 param_6,param_7,param_8);
  lVar7 = *plVar18;
  uVar8 = FUN_710323cb80(lVar7,extraout_x1,ppppppppplVar10,ppppbVar12,pppplVar13,param_6,param_7,
                         param_8);
  while ((uVar8 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar8 = FUN_710323cb80(lVar7,extraout_x1_00,ppppppppplVar10,ppppbVar12,pppplVar13,param_6,
                           param_7,param_8);
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar10,ppppbVar12,pppplVar13,param_6,param_7
                          ,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2228[0] = 0;
      local_21e0 = (long ***)&DAT_00000088;
      pppplVar11 = &local_21e0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_2228);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,pppplVar11,ppppbVar12,pppplVar13,param_6,param_7,param_8
                                 ), puVar9 != (undefined8 *)0x0)) goto LAB_7101881030;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101881030:
  pppplVar11 = (long ****)0x10002;
  FUN_7101af77d0(puVar9,plVar18,(long ****)0x10002,ppppbVar12,pppplVar13,param_6,param_7,param_8);
  puVar9[2] = &DAT_7105333600;
  uVar5 = DAT_7105333664;
  *(undefined4 *)(puVar9 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar9 + 0x6c) = uVar5;
  do {
    uVar17 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar17 & 1) != 0);
  puVar9[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar9;
  FUN_71032caea0((long)puVar9,extraout_x1_01,pppplVar11,ppppbVar12,pppplVar13,param_6,param_7,
                 param_8);
  lVar7 = *(long *)(lVar20 + 0xd0);
  *(undefined8 **)(lVar20 + 0xd0) = puVar9;
  if (lVar7 != 0) {
    FUN_71032cad20(lVar7);
    puVar9 = *(undefined8 **)(lVar20 + 0xd0);
  }
  lVar7 = puVar9[0x10];
  if (*(int *)(lVar7 + 0xc0) != 0) {
    *(undefined4 *)(lVar7 + 0xc0) = 0;
    FUN_7101af4610(lVar7);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar16 = DAT_71053050f0;
  local_21e0 = (long ***)((ulong)local_21e0 & 0xffffffff);
  local_21d7 = 1;
  local_21d4 = 0x100000000;
  local_21c4[0] = 0;
  local_21cc = 0;
  local_217c[0] = 0;
  local_2184 = 0;
  local_2134[0] = 0;
  local_213c = 0;
  memset(auStack_20f4,0,0x1000);
  local_10f0 = 0;
  uStack_10ec = 1;
  uStack_10e0 = 0;
  local_10e8 = 0;
  local_10a0 = 0x20;
  memset(auStack_1050,0,0x1000);
  local_21d8 = 1;
  local_109c = 1;
  uVar17 = 0;
  uStack_10f4 = 0;
  uVar19 = ((uVar16 & 0x7f000000) + 0xfe000000 >> 0x18) - 1;
  if ((uVar19 & 0xff) < 5) {
    uVar17 = *(uint *)(&DAT_7104544730 + (long)(char)uVar19 * 4);
  }
  local_21e0 = (long ***)((ulong)uVar17 << 0x20);
  local_1090 = 0x72756f745f6c656d;
  local_1088 = 0x6d5f746e656d616e;
  local_1080 = 0x6d65;
  uStack_107e = 0x706c65685f726562;
  uVar19 = 0x811c9dc5;
  uStack_1076 = 0x616c705f;
  local_1072 = 0x6579;
  local_1070 = 0x756e5f72;
  uVar14 = 0x6d;
  local_106c = 0x6d;
  lVar7 = 0x1151;
  uVar17 = uVar19;
  do {
    uVar17 = uVar17 * 0x89 ^ uVar14;
    uVar14 = (uint)*(byte *)((long)&local_21e0 + lVar7);
    lVar7 = lVar7 + 1;
  } while (uVar14 != 0);
  _local_1098 = CONCAT44(0x25,uVar17);
  FUN_7103395260(local_2228,uVar16);
  for (uVar8 = 0; local_2220[uVar8] != 0; uVar8 = uVar8 + 2) {
    local_21c4[uVar8] = local_2220[uVar8];
    if (0x3e < (int)uVar8 + 1U) {
      uVar8 = (ulong)((int)uVar8 + 1);
      break;
    }
    if (local_2220[uVar8 + 1] == 0) {
      uVar8 = uVar8 + 1;
      break;
    }
    local_21c4[uVar8 + 1] = local_2220[uVar8 + 1];
  }
  local_21c4[uVar8 & 0xffffffff] = 0;
  local_21cc = CONCAT44((int)uVar8,(undefined4)local_21cc);
  uVar14 = (uint)local_21c4[0];
  uVar17 = uVar19;
  if (local_21c4[0] != 0) {
    pbVar15 = local_21c4;
    do {
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar15;
    } while (uVar14 != 0);
  }
  local_21cc = CONCAT44((int)uVar8,uVar17);
  FUN_7103394f60(local_2228,uVar16);
  uVar8 = 0;
  while( true ) {
    if (local_2220[uVar8] == 0) break;
    local_217c[uVar8] = local_2220[uVar8];
    if (0x3e < (int)uVar8 + 1U) {
      uVar8 = (ulong)((int)uVar8 + 1);
      break;
    }
    if (local_2220[uVar8 + 1] == 0) {
      uVar8 = uVar8 + 1;
      break;
    }
    local_217c[uVar8 + 1] = local_2220[uVar8 + 1];
    uVar8 = uVar8 + 2;
  }
  local_217c[uVar8 & 0xffffffff] = 0;
  uVar16 = (uint)local_217c[0];
  local_2184 = CONCAT44((int)uVar8,(undefined4)local_2184);
  uVar17 = uVar19;
  if (local_217c[0] != 0) {
    pbVar15 = local_217c;
    do {
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 * 0x89 ^ uVar16;
      uVar16 = (uint)*pbVar15;
    } while (uVar16 != 0);
  }
  local_2184 = CONCAT44((int)uVar8,uVar17);
  cVar3 = *(char *)(lVar20 + 0xec);
  uVar8 = 0;
  pcVar1 = "mel_tournament_member_title";
  if (cVar3 != '\0') {
    pcVar1 = "mel_tournament_type_title";
  }
  do {
    bVar2 = pcVar1[uVar8];
    if (bVar2 == 0) {
LAB_71018813e4:
      local_2134[uVar8 & 0xffffffff] = 0;
      local_213c = CONCAT44((int)uVar8,(undefined4)local_213c);
      uVar17 = (uint)local_2134[0];
      if (local_2134[0] != 0) {
        pbVar15 = local_2134;
        do {
          pbVar15 = pbVar15 + 1;
          uVar19 = uVar19 * 0x89 ^ uVar17;
          uVar17 = (uint)*pbVar15;
        } while (uVar17 != 0);
      }
      local_213c = CONCAT44((int)uVar8,uVar19);
      FUN_7101af8570(*(long *)(lVar20 + 0xd0),(int *)&local_21e0,(ulong)(cVar3 == '\0'),1,pppplVar13
                     ,param_6,param_7,param_8);
      return;
    }
    local_2134[uVar8] = bVar2;
    if (0x3e < (int)uVar8 + 1U) {
      uVar8 = (ulong)((int)uVar8 + 1);
      goto LAB_71018813e4;
    }
    bVar2 = (pcVar1 + uVar8)[1];
    if (bVar2 == 0) {
      uVar8 = uVar8 + 1;
      goto LAB_71018813e4;
    }
    local_2134[uVar8 + 1] = bVar2;
    uVar8 = uVar8 + 2;
  } while( true );
}

