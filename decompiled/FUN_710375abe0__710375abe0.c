// addr:      710375abe0
// offset:    0x375abe0
// name:      FUN_710375abe0
// mangled:   
// signature: undefined __cdecl FUN_710375abe0(undefined8 param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710375abe0(undefined8 param_1,undefined8 param_2,char *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long ***ppplVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  char *pcVar23;
  code *pcVar24;
  undefined *puVar25;
  long lVar26;
  byte *pbVar27;
  ulong uVar28;
  byte *pbVar29;
  uint uVar30;
  void *pvVar31;
  long *plVar32;
  ulong *puVar33;
  long ****pppplVar34;
  size_t __n;
  int iVar35;
  undefined1 auVar36 [16];
  undefined **local_280;
  code *pcStack_278;
  undefined ***local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 local_238;
  byte local_230;
  undefined1 uStack_22f;
  undefined2 uStack_22e;
  undefined4 uStack_22c;
  uint local_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined8 local_20c;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_1f0;
  undefined8 local_1e8;
  byte *local_1e0;
  long local_1d8;
  long *local_1d0;
  undefined4 local_6c [3];
  
  if (DAT_710593b990 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)
             FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar5 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_00000010;
        param_3 = (char *)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar5 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar5 != (undefined8 *)0x0)) goto LAB_710375ac68;
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_710375ac68:
    *puVar5 = &PTR_FUN_710523d7b8;
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&SUB_00000020;
        param_3 = (char *)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar7 != (undefined8 *)0x0)) goto LAB_710375acc8;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_710375acc8:
    puVar7[2] = 0xffffffffffffffff;
    puVar7[3] = 0xffffffffffffffff;
    *puVar7 = 0xffffffffffffffff;
    puVar7[1] = 0xffffffffffffffff;
    puVar5[1] = puVar7;
    DAT_710593b990 = puVar5;
  }
  if (DAT_710593bc60 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)
             FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar5 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_00000008;
        param_3 = (char *)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar5 = (undefined8 *)
                     FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar5 != (undefined8 *)0x0)) goto LAB_710375ad44;
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_710375ad44:
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x38,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_00000038;
        param_3 = (char *)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x38,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar7 != (undefined8 *)0x0)) goto LAB_710375ada0;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_710375ada0:
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[3] = puVar7 + 4;
    *(undefined1 *)(puVar7 + 6) = 0;
    FUN_7100000220(FUN_71037a43c0,FUN_71037a4440);
    *puVar5 = puVar7;
    DAT_710593bc60 = puVar5;
  }
  if (DAT_710593b8d8 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)
             FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar5 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_00000008;
        param_3 = (char *)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar5 = (undefined8 *)
                     FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar5 != (undefined8 *)0x0)) goto LAB_710375ae40;
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_710375ae40:
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_00000080;
        param_3 = (char *)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar7 != (undefined8 *)0x0)) goto LAB_710375ae9c;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_710375ae9c:
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    FUN_710007d880(puVar7 + 4);
    puVar7[4] = &PTR_FUN_710523d5c0;
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,0xc,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_0000000c;
        param_3 = (char *)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,0xc,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar8 != (undefined8 *)0x0)) goto LAB_710375af0c;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_710375af0c:
    *(undefined4 *)(puVar8 + 1) = 0x3f800000;
    *puVar8 = 0x3f800000ff000000;
    puVar7[5] = puVar8;
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,0xc,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_0000000c;
        param_3 = (char *)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,0xc,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar8 != (undefined8 *)0x0)) goto LAB_710375af78;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_710375af78:
    *puVar8 = 0x3f800000ff000000;
    *(undefined4 *)(puVar8 + 1) = 0x3f800000;
    puVar7[8] = 0x3e570a3d00000000;
    puVar7[9] = 0x41a0000041400000;
    *(undefined1 *)((long)puVar7 + 0x7c) = 0;
    puVar7[10] = 0x41400000;
    puVar7[0xb] = 0x3e428f5c00000000;
    puVar7[0xc] = 0xff00000000000000;
    *(undefined4 *)(puVar7 + 0xd) = 0xff000000;
    *(undefined2 *)((long)puVar7 + 0x6c) = 0xffff;
    puVar7[0xe] = &DAT_3f8000003f800000;
    *(undefined4 *)(puVar7 + 0xf) = 0x1000000;
    puVar7[6] = puVar8;
    puVar7[7] = 0;
    *puVar5 = puVar7;
    DAT_710593b8d8 = puVar5;
  }
  plVar9 = DAT_710593ba90;
  if (DAT_710593ba90 == (long *)0x0) {
    plVar9 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8);
    if (plVar9 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_00000008;
        pppplVar14 = (long ****)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (plVar9 = (long *)FUN_710392e290(0x10,8,pppplVar14,param_4,param_5,param_6,param_7,
                                            param_8), plVar9 != (long *)0x0)) goto LAB_710375b044;
      }
      plVar9 = (long *)0x0;
    }
LAB_710375b044:
    *plVar9 = 0;
    FUN_7100047d00(FUN_71037850e0,FUN_7103785160,0);
    pppplVar14 = (long ****)0x0;
    FUN_7100048d60(FUN_71037850e0,FUN_7103785160,0);
    puVar5 = (undefined8 *)
             FUN_710392e290(0x10,0x448,pppplVar14,param_4,param_5,param_6,param_7,param_8);
    if (puVar5 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)0x448;
        pppplVar14 = (long ****)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar5 = (undefined8 *)
                     FUN_710392e290(0x10,0x448,pppplVar14,param_4,param_5,param_6,param_7,param_8),
           puVar5 != (undefined8 *)0x0)) goto LAB_710375b0d4;
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_710375b0d4:
    pppplVar14 = (long ****)&DAT_00000128;
    memset(puVar5,0,0x128);
    *(undefined1 *)((long)puVar5 + 0x10a) = 0;
    *(undefined2 *)(puVar5 + 0x21) = 1;
    puVar5[0x27] = 0;
    puVar5[0x28] = 0;
    *(undefined2 *)(puVar5 + 0x28) = 1;
    *(undefined1 *)((long)puVar5 + 0x142) = 0;
    puVar5[0x47] = 0;
    puVar5[0x46] = 0;
    puVar5[0x45] = 0;
    puVar5[0x44] = 0;
    puVar5[0x43] = 0;
    puVar5[0x42] = 0;
    puVar5[0x41] = 0;
    *(undefined1 *)(puVar5 + 0x44) = 1;
    *(undefined1 *)((long)puVar5 + 0x221) = 0;
    *(undefined1 *)((long)puVar5 + 0x222) = 0;
    puVar5[0x4e] = 0;
    puVar5[0x4d] = 0;
    puVar5[0x4c] = 0;
    puVar5[0x4b] = 0;
    puVar5[0x4a] = 0;
    puVar5[0x49] = 0;
    puVar5[0x48] = 0;
    *(undefined1 *)(puVar5 + 0x4b) = 1;
    *(undefined1 *)((long)puVar5 + 0x259) = 0;
    *(undefined1 *)((long)puVar5 + 0x25a) = 0;
    puVar5[0x55] = 0;
    puVar5[0x54] = 0;
    puVar5[0x53] = 0;
    puVar5[0x52] = 0;
    puVar5[0x51] = 0;
    puVar5[0x50] = 0;
    puVar5[0x4f] = 0;
    *(undefined1 *)(puVar5 + 0x52) = 1;
    *(undefined1 *)((long)puVar5 + 0x291) = 0;
    *(undefined1 *)((long)puVar5 + 0x292) = 0;
    puVar5[0x58] = 0;
    puVar5[0x57] = 0;
    puVar5[0x56] = puVar5 + 0x57;
    puVar5[0x29] = 0;
    puVar5[0x2a] = 0;
    puVar5[0x25] = 0;
    puVar5[0x26] = 0;
    puVar5[0x31] = 0;
    puVar5[0x32] = 0;
    puVar5[0x2f] = 0;
    puVar5[0x30] = 0;
    *(undefined2 *)(puVar5 + 0x2f) = 1;
    *(undefined1 *)((long)puVar5 + 0x17a) = 0;
    puVar5[0x2d] = 0;
    puVar5[0x2e] = 0;
    puVar5[0x2b] = 0;
    puVar5[0x2c] = 0;
    puVar5[0x35] = 0;
    puVar5[0x36] = 0;
    *(undefined2 *)(puVar5 + 0x36) = 1;
    *(undefined1 *)((long)puVar5 + 0x1b2) = 0;
    puVar5[0x37] = 0;
    puVar5[0x38] = 0;
    puVar5[0x33] = 0;
    puVar5[0x34] = 0;
    puVar5[0x3f] = 0;
    puVar5[0x40] = 0;
    puVar5[0x3d] = 0;
    puVar5[0x3e] = 0;
    *(undefined1 *)(puVar5 + 0x3d) = 1;
    *(undefined1 *)((long)puVar5 + 0x1e9) = 0;
    *(undefined1 *)((long)puVar5 + 0x1ea) = 0;
    puVar5[0x3b] = 0;
    puVar5[0x3c] = 0;
    puVar5[0x39] = 0;
    puVar5[0x3a] = 0;
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x3b8,pppplVar14,param_4,param_5,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_000003b8;
        pppplVar14 = (long ****)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x3b8,pppplVar14,param_4,param_5,param_6,param_7,param_8),
           puVar7 != (undefined8 *)0x0)) goto LAB_710375b230;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_710375b230:
    FUN_71000463a0(puVar7);
    puVar5[0x5a] = &DAT_7105231730;
    puVar5[0x5e] = &PTR_FUN_7105231690;
    puVar5[0x62] = &PTR_FUN_7104f62038;
    puVar5[0x84] = 0x40c000003f800000;
    puVar5[0x85] = 0x3dcccccd3c23d70a;
    puVar5[0x59] = puVar7;
    puVar5[0x5d] = 0;
    puVar5[0x5c] = 0;
    puVar5[0x5b] = 0;
    puVar5[0x61] = 0;
    puVar5[0x60] = 0;
    puVar5[0x5f] = 0;
    puVar5[0x65] = 0;
    puVar5[100] = 0;
    puVar5[99] = 0;
    puVar5[0x7c] = 0;
    puVar5[0x7b] = 0;
    puVar5[0x7a] = 0;
    puVar5[0x79] = 0;
    puVar5[0x78] = 0;
    puVar5[0x77] = 0;
    puVar5[0x76] = 0;
    puVar5[0x75] = 0;
    puVar5[0x74] = 0;
    puVar5[0x73] = 0;
    puVar5[0x72] = 0;
    puVar5[0x71] = 0;
    puVar5[0x70] = 0;
    puVar5[0x6f] = 0;
    puVar5[0x6e] = 0;
    puVar5[0x6d] = 0;
    puVar5[0x6c] = 0;
    puVar5[0x6b] = 0;
    puVar5[0x6a] = 0;
    puVar5[0x69] = 0;
    puVar5[0x68] = 0;
    puVar5[0x67] = 0;
    puVar5[0x66] = 0;
    *(undefined2 *)(puVar5 + 0x79) = 1;
    *(undefined1 *)((long)puVar5 + 0x3ca) = 0;
    puVar5[0x80] = 0;
    puVar5[0x83] = 0;
    puVar5[0x82] = 0;
    puVar5[0x81] = 0;
    puVar5[0x7f] = 0;
    puVar5[0x7e] = 0;
    puVar5[0x7d] = 0;
    *(undefined2 *)(puVar5 + 0x80) = 1;
    *(undefined1 *)((long)puVar5 + 0x402) = 0;
    puVar5[0x86] = 0x4416000043960000;
    puVar5[0x87] = 0;
    *(undefined1 *)(puVar5 + 0x88) = 1;
    lVar10 = FUN_710392e290(0x10,0x40,pppplVar14,param_4,param_5,param_6,param_7,param_8);
    if (lVar10 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_00000040;
        pppplVar14 = (long ****)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (lVar10 = FUN_710392e290(0x10,0x40,pppplVar14,param_4,param_5,param_6,param_7,param_8),
           lVar10 != 0)) goto LAB_710375b394;
      }
      lVar10 = 0;
    }
LAB_710375b394:
    puVar5[0x76] = lVar10;
    puVar5[0x77] = lVar10;
    puVar5[0x78] = lVar10 + 0x40;
    lVar10 = FUN_710392e290(0x10,0x2000,pppplVar14,param_4,param_5,param_6,param_7,param_8);
    if (lVar10 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)0x2000;
        pppplVar14 = (long ****)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (lVar10 = FUN_710392e290(0x10,0x2000,pppplVar14,param_4,param_5,param_6,param_7,param_8),
           lVar10 != 0)) goto LAB_710375b3f8;
      }
      lVar10 = 0;
    }
LAB_710375b3f8:
    puVar5[0x7f] = lVar10 + 0x2000;
    pvVar31 = (void *)*puVar5;
    puVar5[0x7d] = lVar10;
    puVar5[0x7e] = lVar10;
    if ((ulong)(puVar5[2] - (long)pvVar31 >> 3) < 0x10) {
      pppplVar34 = (long ****)(puVar5[1] - (long)pvVar31);
      lVar10 = (long)pppplVar34 >> 3;
      pvVar11 = (void *)FUN_710392e290(0x10,0x80,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&DAT_00000080;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x80,pppplVar14,param_4,param_5,param_6,param_7,
                                               param_8), pvVar11 != (void *)0x0))
          goto LAB_710375b488;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375b488:
      if (0 < (long)pppplVar34) {
        memcpy(pvVar11,pvVar31,(size_t)pppplVar34);
        pppplVar14 = pppplVar34;
      }
      *puVar5 = pvVar11;
      puVar5[1] = (void *)((long)pvVar11 + lVar10 * 8);
      puVar5[2] = (long)pvVar11 + 0x80;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    pvVar31 = (void *)puVar5[3];
    if ((ulong)(puVar5[5] - (long)pvVar31 >> 3) < 0x20) {
      pppplVar34 = (long ****)(puVar5[4] - (long)pvVar31);
      lVar10 = (long)pppplVar34 >> 3;
      pvVar11 = (void *)FUN_710392e290(0x10,0x100,pppplVar14,param_4,param_5,param_6,param_7,param_8
                                      );
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&DAT_00000100;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x100,pppplVar14,param_4,param_5,param_6,param_7
                                               ,param_8), pvVar11 != (void *)0x0))
          goto LAB_710375b53c;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375b53c:
      if (0 < (long)pppplVar34) {
        memcpy(pvVar11,pvVar31,(size_t)pppplVar34);
        pppplVar14 = pppplVar34;
      }
      puVar5[3] = pvVar11;
      puVar5[4] = (void *)((long)pvVar11 + lVar10 * 8);
      puVar5[5] = (long)pvVar11 + 0x100;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    pvVar31 = (void *)puVar5[6];
    if ((ulong)(puVar5[8] - (long)pvVar31 >> 3) < 0x20) {
      pppplVar34 = (long ****)(puVar5[7] - (long)pvVar31);
      lVar10 = (long)pppplVar34 >> 3;
      pvVar11 = (void *)FUN_710392e290(0x10,0x100,pppplVar14,param_4,param_5,param_6,param_7,param_8
                                      );
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&DAT_00000100;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x100,pppplVar14,param_4,param_5,param_6,param_7
                                               ,param_8), pvVar11 != (void *)0x0))
          goto LAB_710375b5f0;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375b5f0:
      if (0 < (long)pppplVar34) {
        memcpy(pvVar11,pvVar31,(size_t)pppplVar34);
        pppplVar14 = pppplVar34;
      }
      puVar5[6] = pvVar11;
      puVar5[7] = (void *)((long)pvVar11 + lVar10 * 8);
      puVar5[8] = (long)pvVar11 + 0x100;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    pvVar31 = (void *)puVar5[9];
    if ((ulong)(puVar5[0xb] - (long)pvVar31 >> 3) < 8) {
      pppplVar34 = (long ****)(puVar5[10] - (long)pvVar31);
      lVar10 = (long)pppplVar34 >> 3;
      pvVar11 = (void *)FUN_710392e290(0x10,0x40,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&DAT_00000040;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x40,pppplVar14,param_4,param_5,param_6,param_7,
                                               param_8), pvVar11 != (void *)0x0))
          goto LAB_710375b6a4;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375b6a4:
      if (0 < (long)pppplVar34) {
        memcpy(pvVar11,pvVar31,(size_t)pppplVar34);
        pppplVar14 = pppplVar34;
      }
      puVar5[9] = pvVar11;
      puVar5[10] = (void *)((long)pvVar11 + lVar10 * 8);
      puVar5[0xb] = (long)pvVar11 + 0x40;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    pvVar31 = (void *)puVar5[0xc];
    if ((ulong)(puVar5[0xe] - (long)pvVar31 >> 3) < 4) {
      pppplVar34 = (long ****)(puVar5[0xd] - (long)pvVar31);
      lVar10 = (long)pppplVar34 >> 3;
      pvVar11 = (void *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&SUB_00000020;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,
                                               param_8), pvVar11 != (void *)0x0))
          goto LAB_710375b758;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375b758:
      if (0 < (long)pppplVar34) {
        memcpy(pvVar11,pvVar31,(size_t)pppplVar34);
        pppplVar14 = pppplVar34;
      }
      puVar5[0xc] = pvVar11;
      puVar5[0xd] = (void *)((long)pvVar11 + lVar10 * 8);
      puVar5[0xe] = (long)pvVar11 + 0x20;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    pvVar31 = (void *)puVar5[0xf];
    if ((ulong)(puVar5[0x11] - (long)pvVar31 >> 3) < 4) {
      pppplVar34 = (long ****)(puVar5[0x10] - (long)pvVar31);
      lVar10 = (long)pppplVar34 >> 3;
      pvVar11 = (void *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&SUB_00000020;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,
                                               param_8), pvVar11 != (void *)0x0))
          goto LAB_710375b80c;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375b80c:
      if (0 < (long)pppplVar34) {
        memcpy(pvVar11,pvVar31,(size_t)pppplVar34);
        pppplVar14 = pppplVar34;
      }
      puVar5[0xf] = pvVar11;
      puVar5[0x10] = (void *)((long)pvVar11 + lVar10 * 8);
      puVar5[0x11] = (long)pvVar11 + 0x20;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    pvVar31 = (void *)puVar5[0x15];
    if ((ulong)(puVar5[0x17] - (long)pvVar31 >> 3) < 4) {
      pppplVar34 = (long ****)(puVar5[0x16] - (long)pvVar31);
      lVar10 = (long)pppplVar34 >> 3;
      pvVar11 = (void *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&SUB_00000020;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,
                                               param_8), pvVar11 != (void *)0x0))
          goto LAB_710375b8c0;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375b8c0:
      if (0 < (long)pppplVar34) {
        memcpy(pvVar11,pvVar31,(size_t)pppplVar34);
        pppplVar14 = pppplVar34;
      }
      puVar5[0x15] = pvVar11;
      puVar5[0x16] = (void *)((long)pvVar11 + lVar10 * 8);
      puVar5[0x17] = (long)pvVar11 + 0x20;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    pvVar31 = (void *)puVar5[0x12];
    if ((ulong)(puVar5[0x14] - (long)pvVar31 >> 3) < 4) {
      pppplVar34 = (long ****)(puVar5[0x13] - (long)pvVar31);
      lVar10 = (long)pppplVar34 >> 3;
      pvVar11 = (void *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&SUB_00000020;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,
                                               param_8), pvVar11 != (void *)0x0))
          goto LAB_710375b974;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375b974:
      if (0 < (long)pppplVar34) {
        memcpy(pvVar11,pvVar31,(size_t)pppplVar34);
        pppplVar14 = pppplVar34;
      }
      puVar5[0x12] = pvVar11;
      puVar5[0x13] = (void *)((long)pvVar11 + lVar10 * 8);
      puVar5[0x14] = (long)pvVar11 + 0x20;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    pvVar31 = (void *)puVar5[0x18];
    if ((ulong)(puVar5[0x1a] - (long)pvVar31 >> 3) < 4) {
      pppplVar34 = (long ****)(puVar5[0x19] - (long)pvVar31);
      lVar10 = (long)pppplVar34 >> 3;
      pvVar11 = (void *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&SUB_00000020;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,
                                               param_8), pvVar11 != (void *)0x0))
          goto LAB_710375ba28;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375ba28:
      if (0 < (long)pppplVar34) {
        memcpy(pvVar11,pvVar31,(size_t)pppplVar34);
        pppplVar14 = pppplVar34;
      }
      puVar5[0x18] = pvVar11;
      puVar5[0x19] = (void *)((long)pvVar11 + lVar10 * 8);
      puVar5[0x1a] = (long)pvVar11 + 0x20;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    pvVar31 = (void *)puVar5[0x25];
    if ((ulong)(puVar5[0x27] - (long)pvVar31 >> 3) < 8) {
      pppplVar34 = (long ****)(puVar5[0x26] - (long)pvVar31);
      lVar10 = (long)pppplVar34 >> 3;
      pvVar11 = (void *)FUN_710392e290(0x10,0x40,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&DAT_00000040;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x40,pppplVar14,param_4,param_5,param_6,param_7,
                                               param_8), pvVar11 != (void *)0x0))
          goto LAB_710375badc;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375badc:
      if (0 < (long)pppplVar34) {
        memcpy(pvVar11,pvVar31,(size_t)pppplVar34);
        pppplVar14 = pppplVar34;
      }
      puVar5[0x25] = pvVar11;
      puVar5[0x26] = (void *)((long)pvVar11 + lVar10 * 8);
      puVar5[0x27] = (long)pvVar11 + 0x40;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    pvVar31 = (void *)puVar5[0x2c];
    if ((ulong)(puVar5[0x2e] - (long)pvVar31 >> 3) < 8) {
      pppplVar34 = (long ****)(puVar5[0x2d] - (long)pvVar31);
      lVar10 = (long)pppplVar34 >> 3;
      pvVar11 = (void *)FUN_710392e290(0x10,0x40,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&DAT_00000040;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x40,pppplVar14,param_4,param_5,param_6,param_7,
                                               param_8), pvVar11 != (void *)0x0))
          goto LAB_710375bb90;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375bb90:
      if (0 < (long)pppplVar34) {
        memcpy(pvVar11,pvVar31,(size_t)pppplVar34);
        pppplVar14 = pppplVar34;
      }
      puVar5[0x2c] = pvVar11;
      puVar5[0x2d] = (void *)((long)pvVar11 + lVar10 * 8);
      puVar5[0x2e] = (long)pvVar11 + 0x40;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    pvVar31 = (void *)puVar5[0x33];
    if ((ulong)(puVar5[0x35] - (long)pvVar31 >> 3) < 8) {
      __n = puVar5[0x34] - (long)pvVar31;
      pvVar11 = (void *)FUN_710392e290(0x10,0x40,pppplVar14,param_4,param_5,param_6,param_7,param_8)
      ;
      if (pvVar11 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_230 = 0;
          uStack_22f = 0;
          uStack_22e = 0;
          local_1f0 = (long ***)&DAT_00000040;
          pppplVar14 = (long ****)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
          if (((uVar6 & 1) != 0) &&
             (pvVar11 = (void *)FUN_710392e290(0x10,0x40,pppplVar14,param_4,param_5,param_6,param_7,
                                               param_8), pvVar11 != (void *)0x0))
          goto LAB_710375bc44;
        }
        pvVar11 = (void *)0x0;
      }
LAB_710375bc44:
      if (0 < (long)__n) {
        memcpy(pvVar11,pvVar31,__n);
      }
      puVar5[0x33] = pvVar11;
      puVar5[0x34] = (void *)((long)pvVar11 + ((long)__n >> 3) * 8);
      puVar5[0x35] = (long)pvVar11 + 0x40;
      if (pvVar31 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar31);
      }
    }
    param_4 = (byte ****)0x0;
    param_5 = (long ****)0x0;
    param_6 = 0;
    param_7 = 0;
    FUN_7100045270(0,(undefined8 *)puVar5[0x59],DAT_7105336e08,0x1000,(long *)0x0,0,0,0);
    param_3 = (char *)0x0;
    FUN_7100046970(puVar5[0x59],FUN_71035b9420,0);
    FUN_71037ef770(&local_1f0,1);
    FUN_710359b630((undefined8 *)&local_230,(uint *)&local_1f0,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    if (((long *)CONCAT44(uStack_21c,local_220) == (long *)0x0) ||
       (*(long *)CONCAT44(uStack_21c,local_220) != CONCAT44(uStack_214,local_218))) {
      puVar5[0x5b] = 0;
LAB_710375bd08:
      uVar22 = 0;
      puVar5[0x5c] = 0;
    }
    else {
      lVar10 = CONCAT44(uStack_224,local_228);
      puVar5[0x5b] = lVar10;
      if (lVar10 == 0) goto LAB_710375bd08;
      puVar7 = *(undefined8 **)(lVar10 + 8);
      puVar5[0x5c] = puVar7;
      uVar22 = *puVar7;
    }
    puVar5[0x5d] = uVar22;
    uStack_22c = 3;
    uStack_224 = 0;
    local_220 = 0xff;
    local_228 = local_228 & 0xffffff00;
    uStack_21c = 0xff;
    local_218 = 7;
    local_204 = 0;
    local_20c = 0;
    local_1fc = 0;
    uStack_214 = 0;
    uStack_210 = 0;
    local_230 = 0;
    uStack_22f = 0;
    FUN_7103593520(&local_1f0,&local_230,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((local_1e0 == (byte *)0x0) || (*(long *)local_1e0 != local_1d8)) {
      puVar5[0x5f] = 0;
LAB_710375bda0:
      uVar22 = 0;
      puVar5[0x60] = 0;
    }
    else {
      puVar5[0x5f] = local_1e8;
      if (local_1e8 == 0) goto LAB_710375bda0;
      puVar7 = *(undefined8 **)(local_1e8 + 8);
      puVar5[0x60] = puVar7;
      uVar22 = *puVar7;
    }
    puVar5[0x61] = uVar22;
    local_250 = 0x200000001;
    uStack_248 = 0;
    local_238 = 0;
    local_240 = 0x101000100000000;
    FUN_7103590cf0(&local_1f0,(uint *)&local_250,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((local_1e0 == (byte *)0x0) || (*(long *)local_1e0 != local_1d8)) {
      puVar5[99] = 0;
LAB_710375be14:
      uVar22 = 0;
      puVar5[100] = 0;
    }
    else {
      puVar5[99] = local_1e8;
      if (local_1e8 == 0) goto LAB_710375be14;
      puVar7 = *(undefined8 **)(local_1e8 + 8);
      puVar5[100] = puVar7;
      uVar22 = *puVar7;
    }
    lVar10 = 0;
    puVar5[0x65] = uVar22;
    do {
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar7 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c[0] = 0;
          local_1f0 = (long ***)&DAT_00000010;
          param_3 = (char *)&local_1f0;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
          if (((uVar6 & 1) != 0) &&
             (puVar7 = (undefined8 *)
                       FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), puVar7 != (undefined8 *)0x0)) goto LAB_710375be9c;
        }
        puVar7 = (undefined8 *)0x0;
      }
LAB_710375be9c:
      puVar25 = (&PTR_s_LayoutManager__Normal__710523db40)[lVar10];
      uVar6 = 0;
      do {
        pcVar13 = puVar25 + uVar6;
        uVar28 = uVar6;
        if (*pcVar13 == '\0') break;
        *(char *)((long)&local_1e8 + uVar6) = *pcVar13;
        if (pcVar13[1] == '\0') {
          uVar28 = uVar6 + 1;
          break;
        }
        *(char *)((long)&local_1e8 + uVar6 + 1) = pcVar13[1];
        if (pcVar13[2] == '\0') {
          uVar28 = uVar6 + 2;
          break;
        }
        uVar28 = uVar6 + 3;
        *(char *)((long)&local_1e8 + uVar6 + 2) = pcVar13[2];
        uVar6 = uVar28;
      } while ((uint)uVar28 < 0x3f);
      *(undefined1 *)((long)&local_1e8 + (uVar28 & 0xffffffff)) = 0;
      local_1f0 = (long ***)(uVar28 << 0x20);
      uVar15 = (uint)(byte)local_1e8;
      pbVar27 = (byte *)((long)&local_1e8 + 1);
      uVar30 = 0x811c9dc5;
      if ((byte)local_1e8 != 0) {
        do {
          uVar30 = uVar30 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar15 != 0);
      }
      local_1f0 = (long ***)CONCAT44((int)uVar28,uVar30);
      FUN_710363f2d0(puVar7,(long)&local_1f0,(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar6 = puVar5[lVar10 + 0x66];
      puVar5[lVar10 + 0x66] = puVar7;
      if (uVar6 != 0) {
        plVar32 = *(long **)(uVar6 + 8);
        if (plVar32 != (long *)0x0) {
          plVar1 = plVar32 + 1;
          do {
            lVar26 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar26 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_710392eb40(uVar6);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 10);
    puVar33 = (ulong *)*plVar9;
    *plVar9 = (long)puVar5;
    if (puVar33 != (ulong *)0x0) {
      FUN_7103783f10(puVar33);
      FUN_710392eb40((ulong)puVar33);
    }
  }
  DAT_710593ba90 = plVar9;
  if (DAT_710593b980 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)
             FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    uVar22 = extraout_x1;
    if (puVar5 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_00000010;
        param_3 = (char *)&local_1f0;
        auVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        uVar22 = auVar36._8_8_;
        if (((auVar36._0_8_ & 1) != 0) &&
           (puVar5 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), uVar22 = extraout_x1_00, puVar5 != (undefined8 *)0x0))
        goto LAB_710375c020;
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_710375c020:
    FUN_7103762d30(puVar5,uVar22,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    DAT_710593b980 = puVar5;
  }
  if (DAT_710593b988 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)
             FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar5 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_00000010;
        param_3 = (char *)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar5 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar5 != (undefined8 *)0x0)) goto LAB_710375c094;
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_710375c094:
    *puVar5 = &PTR_FUN_710523d798;
    puVar12 = (undefined4 *)
              FUN_710392e290(0x10,4,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar12 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)&DAT_00000004;
        param_3 = (char *)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (puVar12 = (undefined4 *)
                      FUN_710392e290(0x10,4,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), puVar12 != (undefined4 *)0x0)) goto LAB_710375c0f4;
      }
      puVar12 = (undefined4 *)0x0;
    }
LAB_710375c0f4:
    *puVar12 = 0;
    puVar5[1] = puVar12;
    DAT_710593b988 = puVar5;
  }
  if (DAT_71053396a0 == (char *)0x0) {
    pcVar13 = (char *)FUN_710392e290(0x10,0x2430,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8);
    if (pcVar13 == (char *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_230 = 0;
        uStack_22f = 0;
        uStack_22e = 0;
        local_1f0 = (long ***)0x2430;
        pppplVar14 = (long ****)&local_1f0;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
        if (((uVar6 & 1) != 0) &&
           (pcVar13 = (char *)FUN_710392e290(0x10,0x2430,pppplVar14,param_4,param_5,param_6,param_7,
                                             param_8), pcVar13 != (char *)0x0)) goto LAB_710375c18c;
      }
      pcVar13 = (char *)0x0;
    }
LAB_710375c18c:
    *pcVar13 = '\0';
    pcVar13[8] = '\0';
    memset(pcVar13 + 0x10,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x20));
    pcVar13[0x128] = '\0';
    pcVar13[0x129] = '\0';
    pcVar13[0x12a] = '\0';
    pcVar13[299] = '\0';
    pcVar13[300] = '\0';
    pcVar13[0x12d] = '\0';
    pcVar13[0x12e] = '\0';
    pcVar13[0x12f] = '\0';
    pcVar13[0x130] = '\0';
    pcVar13[0x131] = '\0';
    pcVar13[0x132] = '\0';
    pcVar13[0x133] = '\0';
    pcVar13[0x134] = '\0';
    pcVar13[0x135] = '\0';
    pcVar13[0x136] = '\0';
    pcVar13[0x137] = '\0';
    pcVar13[0x118] = '\0';
    pcVar13[0x119] = '\0';
    pcVar13[0x11a] = '\0';
    pcVar13[0x11b] = '\0';
    pcVar13[0x11c] = '\0';
    pcVar13[0x11d] = '\0';
    pcVar13[0x11e] = '\0';
    pcVar13[0x11f] = '\0';
    pcVar13[0x120] = '\0';
    pcVar13[0x121] = '\0';
    pcVar13[0x122] = '\0';
    pcVar13[0x123] = '\0';
    pcVar13[0x124] = '\0';
    pcVar13[0x125] = '\0';
    pcVar13[0x126] = '\0';
    pcVar13[0x127] = '\0';
    pcVar13[0x100] = '\0';
    pcVar13[0x101] = '\0';
    pcVar13[0x102] = '\0';
    pcVar13[0x103] = '\0';
    pcVar13[0x104] = '\0';
    pcVar13[0x105] = '\0';
    pcVar13[0x106] = '\0';
    pcVar13[0x107] = '\0';
    pcVar13[0x108] = '\0';
    pcVar13[0x109] = '\0';
    pcVar13[0x10a] = '\0';
    pcVar13[0x10b] = '\0';
    pcVar13[0x10c] = '\0';
    pcVar13[0x10d] = '\0';
    pcVar13[0x10e] = '\0';
    pcVar13[0x10f] = '\0';
    pcVar13[0x110] = '\0';
    pcVar13[0x111] = '\0';
    pcVar13[0x112] = '\0';
    pcVar13[0x113] = '\0';
    pcVar13[0x114] = '\0';
    pcVar13[0x115] = '\0';
    pcVar13[0x116] = '\0';
    pcVar13[0x117] = '\0';
    pcVar23 = pcVar13 + 0xf8;
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x138));
    pcVar13[400] = '\0';
    pcVar13[0x191] = '\0';
    pcVar13[0x192] = '\0';
    pcVar13[0x193] = '\0';
    *(undefined ***)(pcVar13 + 0x10) = &PTR_FUN_7105238b48;
    *(undefined ***)(pcVar13 + 0x180) = &PTR_FUN_7105182f40;
    pcVar13[0x188] = -1;
    pcVar13[0x189] = -1;
    pcVar13[0x18a] = -1;
    pcVar13[0x18b] = -1;
    pcVar13[0x18c] = -1;
    pcVar13[0x18d] = -1;
    pcVar13[0x18e] = -1;
    pcVar13[399] = -1;
    pcVar13[0x198] = '\0';
    memset(pcVar13 + 0x1a0,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x1b0));
    pcVar13[0x2c0] = '\0';
    pcVar13[0x2c1] = '\0';
    pcVar13[0x2c2] = '\0';
    pcVar13[0x2c3] = '\0';
    pcVar13[0x2c4] = '\0';
    pcVar13[0x2c5] = '\0';
    pcVar13[0x2c6] = '\0';
    pcVar13[0x2c7] = '\0';
    pcVar13[0x2b8] = '\0';
    pcVar13[0x2b9] = '\0';
    pcVar13[0x2ba] = '\0';
    pcVar13[699] = '\0';
    pcVar13[700] = '\0';
    pcVar13[0x2bd] = '\0';
    pcVar13[0x2be] = '\0';
    pcVar13[0x2bf] = '\0';
    pcVar13[0x2b0] = '\0';
    pcVar13[0x2b1] = '\0';
    pcVar13[0x2b2] = '\0';
    pcVar13[0x2b3] = '\0';
    pcVar13[0x2b4] = '\0';
    pcVar13[0x2b5] = '\0';
    pcVar13[0x2b6] = '\0';
    pcVar13[0x2b7] = '\0';
    pcVar13[0x2a8] = '\0';
    pcVar13[0x2a9] = '\0';
    pcVar13[0x2aa] = '\0';
    pcVar13[0x2ab] = '\0';
    pcVar13[0x2ac] = '\0';
    pcVar13[0x2ad] = '\0';
    pcVar13[0x2ae] = '\0';
    pcVar13[0x2af] = '\0';
    pcVar13[0x2a0] = '\0';
    pcVar13[0x2a1] = '\0';
    pcVar13[0x2a2] = '\0';
    pcVar13[0x2a3] = '\0';
    pcVar13[0x2a4] = '\0';
    pcVar13[0x2a5] = '\0';
    pcVar13[0x2a6] = '\0';
    pcVar13[0x2a7] = '\0';
    pcVar13[0x298] = '\0';
    pcVar13[0x299] = '\0';
    pcVar13[0x29a] = '\0';
    pcVar13[0x29b] = '\0';
    pcVar13[0x29c] = '\0';
    pcVar13[0x29d] = '\0';
    pcVar13[0x29e] = '\0';
    pcVar13[0x29f] = '\0';
    pcVar13[0x290] = '\0';
    pcVar13[0x291] = '\0';
    pcVar13[0x292] = '\0';
    pcVar13[0x293] = '\0';
    pcVar13[0x294] = '\0';
    pcVar13[0x295] = '\0';
    pcVar13[0x296] = '\0';
    pcVar13[0x297] = '\0';
    pcVar13[0x288] = '\0';
    pcVar13[0x289] = '\0';
    pcVar13[0x28a] = '\0';
    pcVar13[0x28b] = '\0';
    pcVar13[0x28c] = '\0';
    pcVar13[0x28d] = '\0';
    pcVar13[0x28e] = '\0';
    pcVar13[0x28f] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x2c8));
    pcVar13[0x318] = -1;
    pcVar13[0x319] = -1;
    pcVar13[0x31a] = -1;
    pcVar13[0x31b] = -1;
    pcVar13[0x31c] = -1;
    pcVar13[0x31d] = -1;
    pcVar13[0x31e] = -1;
    pcVar13[799] = -1;
    *(undefined ***)(pcVar13 + 0x310) = &PTR_FUN_7105182f40;
    pcVar13[800] = '\0';
    pcVar13[0x321] = '\0';
    pcVar13[0x322] = '\0';
    pcVar13[0x323] = '\0';
    *(undefined ***)(pcVar13 + 0x1a0) = &PTR_FUN_7105238b48;
    pcVar13[0x328] = '\0';
    memset(pcVar13 + 0x330,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x340));
    pcVar13[0x450] = '\0';
    pcVar13[0x451] = '\0';
    pcVar13[0x452] = '\0';
    pcVar13[0x453] = '\0';
    pcVar13[0x454] = '\0';
    pcVar13[0x455] = '\0';
    pcVar13[0x456] = '\0';
    pcVar13[0x457] = '\0';
    pcVar13[0x448] = '\0';
    pcVar13[0x449] = '\0';
    pcVar13[0x44a] = '\0';
    pcVar13[1099] = '\0';
    pcVar13[0x44c] = '\0';
    pcVar13[0x44d] = '\0';
    pcVar13[0x44e] = '\0';
    pcVar13[0x44f] = '\0';
    pcVar13[0x440] = '\0';
    pcVar13[0x441] = '\0';
    pcVar13[0x442] = '\0';
    pcVar13[0x443] = '\0';
    pcVar13[0x444] = '\0';
    pcVar13[0x445] = '\0';
    pcVar13[0x446] = '\0';
    pcVar13[0x447] = '\0';
    pcVar13[0x438] = '\0';
    pcVar13[0x439] = '\0';
    pcVar13[0x43a] = '\0';
    pcVar13[0x43b] = '\0';
    pcVar13[0x43c] = '\0';
    pcVar13[0x43d] = '\0';
    pcVar13[0x43e] = '\0';
    pcVar13[0x43f] = '\0';
    pcVar13[0x430] = '\0';
    pcVar13[0x431] = '\0';
    pcVar13[0x432] = '\0';
    pcVar13[0x433] = '\0';
    pcVar13[0x434] = '\0';
    pcVar13[0x435] = '\0';
    pcVar13[0x436] = '\0';
    pcVar13[0x437] = '\0';
    pcVar13[0x428] = '\0';
    pcVar13[0x429] = '\0';
    pcVar13[0x42a] = '\0';
    pcVar13[0x42b] = '\0';
    pcVar13[0x42c] = '\0';
    pcVar13[0x42d] = '\0';
    pcVar13[0x42e] = '\0';
    pcVar13[0x42f] = '\0';
    pcVar13[0x420] = '\0';
    pcVar13[0x421] = '\0';
    pcVar13[0x422] = '\0';
    pcVar13[0x423] = '\0';
    pcVar13[0x424] = '\0';
    pcVar13[0x425] = '\0';
    pcVar13[0x426] = '\0';
    pcVar13[0x427] = '\0';
    pcVar13[0x418] = '\0';
    pcVar13[0x419] = '\0';
    pcVar13[0x41a] = '\0';
    pcVar13[0x41b] = '\0';
    pcVar13[0x41c] = '\0';
    pcVar13[0x41d] = '\0';
    pcVar13[0x41e] = '\0';
    pcVar13[0x41f] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x458));
    pcVar13[0x4a8] = -1;
    pcVar13[0x4a9] = -1;
    pcVar13[0x4aa] = -1;
    pcVar13[0x4ab] = -1;
    pcVar13[0x4ac] = -1;
    pcVar13[0x4ad] = -1;
    pcVar13[0x4ae] = -1;
    pcVar13[0x4af] = -1;
    *(undefined ***)(pcVar13 + 0x4a0) = &PTR_FUN_7105182f40;
    pcVar13[0x4b0] = '\0';
    pcVar13[0x4b1] = '\0';
    pcVar13[0x4b2] = '\0';
    pcVar13[0x4b3] = '\0';
    *(undefined ***)(pcVar13 + 0x330) = &PTR_FUN_7105238b48;
    pcVar13[0x4b8] = '\0';
    memset(pcVar13 + 0x4c0,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x4d0));
    pcVar13[0x5e0] = '\0';
    pcVar13[0x5e1] = '\0';
    pcVar13[0x5e2] = '\0';
    pcVar13[0x5e3] = '\0';
    pcVar13[0x5e4] = '\0';
    pcVar13[0x5e5] = '\0';
    pcVar13[0x5e6] = '\0';
    pcVar13[0x5e7] = '\0';
    pcVar13[0x5d8] = '\0';
    pcVar13[0x5d9] = '\0';
    pcVar13[0x5da] = '\0';
    pcVar13[0x5db] = '\0';
    pcVar13[0x5dc] = '\0';
    pcVar13[0x5dd] = '\0';
    pcVar13[0x5de] = '\0';
    pcVar13[0x5df] = '\0';
    pcVar13[0x5d0] = '\0';
    pcVar13[0x5d1] = '\0';
    pcVar13[0x5d2] = '\0';
    pcVar13[0x5d3] = '\0';
    pcVar13[0x5d4] = '\0';
    pcVar13[0x5d5] = '\0';
    pcVar13[0x5d6] = '\0';
    pcVar13[0x5d7] = '\0';
    pcVar13[0x5c8] = '\0';
    pcVar13[0x5c9] = '\0';
    pcVar13[0x5ca] = '\0';
    pcVar13[0x5cb] = '\0';
    pcVar13[0x5cc] = '\0';
    pcVar13[0x5cd] = '\0';
    pcVar13[0x5ce] = '\0';
    pcVar13[0x5cf] = '\0';
    pcVar13[0x5c0] = '\0';
    pcVar13[0x5c1] = '\0';
    pcVar13[0x5c2] = '\0';
    pcVar13[0x5c3] = '\0';
    pcVar13[0x5c4] = '\0';
    pcVar13[0x5c5] = '\0';
    pcVar13[0x5c6] = '\0';
    pcVar13[0x5c7] = '\0';
    pcVar13[0x5b8] = '\0';
    pcVar13[0x5b9] = '\0';
    pcVar13[0x5ba] = '\0';
    pcVar13[0x5bb] = '\0';
    pcVar13[0x5bc] = '\0';
    pcVar13[0x5bd] = '\0';
    pcVar13[0x5be] = '\0';
    pcVar13[0x5bf] = '\0';
    pcVar13[0x5b0] = '\0';
    pcVar13[0x5b1] = '\0';
    pcVar13[0x5b2] = '\0';
    pcVar13[0x5b3] = '\0';
    pcVar13[0x5b4] = '\0';
    pcVar13[0x5b5] = '\0';
    pcVar13[0x5b6] = '\0';
    pcVar13[0x5b7] = '\0';
    pcVar13[0x5a8] = '\0';
    pcVar13[0x5a9] = '\0';
    pcVar13[0x5aa] = '\0';
    pcVar13[0x5ab] = '\0';
    pcVar13[0x5ac] = '\0';
    pcVar13[0x5ad] = '\0';
    pcVar13[0x5ae] = '\0';
    pcVar13[0x5af] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x5e8));
    pcVar13[0x638] = -1;
    pcVar13[0x639] = -1;
    pcVar13[0x63a] = -1;
    pcVar13[0x63b] = -1;
    pcVar13[0x63c] = -1;
    pcVar13[0x63d] = -1;
    pcVar13[0x63e] = -1;
    pcVar13[0x63f] = -1;
    *(undefined ***)(pcVar13 + 0x630) = &PTR_FUN_7105182f40;
    pcVar13[0x640] = '\0';
    pcVar13[0x641] = '\0';
    pcVar13[0x642] = '\0';
    pcVar13[0x643] = '\0';
    *(undefined ***)(pcVar13 + 0x4c0) = &PTR_FUN_7105238b48;
    pcVar13[0x648] = '\0';
    memset(pcVar13 + 0x650,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x660));
    pcVar13[0x770] = '\0';
    pcVar13[0x771] = '\0';
    pcVar13[0x772] = '\0';
    pcVar13[0x773] = '\0';
    pcVar13[0x774] = '\0';
    pcVar13[0x775] = '\0';
    pcVar13[0x776] = '\0';
    pcVar13[0x777] = '\0';
    pcVar13[0x768] = '\0';
    pcVar13[0x769] = '\0';
    pcVar13[0x76a] = '\0';
    pcVar13[0x76b] = '\0';
    pcVar13[0x76c] = '\0';
    pcVar13[0x76d] = '\0';
    pcVar13[0x76e] = '\0';
    pcVar13[0x76f] = '\0';
    pcVar13[0x760] = '\0';
    pcVar13[0x761] = '\0';
    pcVar13[0x762] = '\0';
    pcVar13[0x763] = '\0';
    pcVar13[0x764] = '\0';
    pcVar13[0x765] = '\0';
    pcVar13[0x766] = '\0';
    pcVar13[0x767] = '\0';
    pcVar13[0x758] = '\0';
    pcVar13[0x759] = '\0';
    pcVar13[0x75a] = '\0';
    pcVar13[0x75b] = '\0';
    pcVar13[0x75c] = '\0';
    pcVar13[0x75d] = '\0';
    pcVar13[0x75e] = '\0';
    pcVar13[0x75f] = '\0';
    pcVar13[0x750] = '\0';
    pcVar13[0x751] = '\0';
    pcVar13[0x752] = '\0';
    pcVar13[0x753] = '\0';
    pcVar13[0x754] = '\0';
    pcVar13[0x755] = '\0';
    pcVar13[0x756] = '\0';
    pcVar13[0x757] = '\0';
    pcVar13[0x748] = '\0';
    pcVar13[0x749] = '\0';
    pcVar13[0x74a] = '\0';
    pcVar13[0x74b] = '\0';
    pcVar13[0x74c] = '\0';
    pcVar13[0x74d] = '\0';
    pcVar13[0x74e] = '\0';
    pcVar13[0x74f] = '\0';
    pcVar13[0x740] = '\0';
    pcVar13[0x741] = '\0';
    pcVar13[0x742] = '\0';
    pcVar13[0x743] = '\0';
    pcVar13[0x744] = '\0';
    pcVar13[0x745] = '\0';
    pcVar13[0x746] = '\0';
    pcVar13[0x747] = '\0';
    pcVar13[0x738] = '\0';
    pcVar13[0x739] = '\0';
    pcVar13[0x73a] = '\0';
    pcVar13[0x73b] = '\0';
    pcVar13[0x73c] = '\0';
    pcVar13[0x73d] = '\0';
    pcVar13[0x73e] = '\0';
    pcVar13[0x73f] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x778));
    pcVar13[0x7c8] = -1;
    pcVar13[0x7c9] = -1;
    pcVar13[0x7ca] = -1;
    pcVar13[0x7cb] = -1;
    pcVar13[0x7cc] = -1;
    pcVar13[0x7cd] = -1;
    pcVar13[0x7ce] = -1;
    pcVar13[1999] = -1;
    *(undefined ***)(pcVar13 + 0x7c0) = &PTR_FUN_7105182f40;
    pcVar13[2000] = '\0';
    pcVar13[0x7d1] = '\0';
    pcVar13[0x7d2] = '\0';
    pcVar13[0x7d3] = '\0';
    *(undefined ***)(pcVar13 + 0x650) = &PTR_FUN_7105238b48;
    pcVar13[0x7d8] = '\0';
    memset(pcVar13 + 0x7e0,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x7f0));
    pcVar13[0x900] = '\0';
    pcVar13[0x901] = '\0';
    pcVar13[0x902] = '\0';
    pcVar13[0x903] = '\0';
    pcVar13[0x904] = '\0';
    pcVar13[0x905] = '\0';
    pcVar13[0x906] = '\0';
    pcVar13[0x907] = '\0';
    pcVar13[0x8f8] = '\0';
    pcVar13[0x8f9] = '\0';
    pcVar13[0x8fa] = '\0';
    pcVar13[0x8fb] = '\0';
    pcVar13[0x8fc] = '\0';
    pcVar13[0x8fd] = '\0';
    pcVar13[0x8fe] = '\0';
    pcVar13[0x8ff] = '\0';
    pcVar13[0x8f0] = '\0';
    pcVar13[0x8f1] = '\0';
    pcVar13[0x8f2] = '\0';
    pcVar13[0x8f3] = '\0';
    pcVar13[0x8f4] = '\0';
    pcVar13[0x8f5] = '\0';
    pcVar13[0x8f6] = '\0';
    pcVar13[0x8f7] = '\0';
    pcVar13[0x8e8] = '\0';
    pcVar13[0x8e9] = '\0';
    pcVar13[0x8ea] = '\0';
    pcVar13[0x8eb] = '\0';
    pcVar13[0x8ec] = '\0';
    pcVar13[0x8ed] = '\0';
    pcVar13[0x8ee] = '\0';
    pcVar13[0x8ef] = '\0';
    pcVar13[0x8e0] = '\0';
    pcVar13[0x8e1] = '\0';
    pcVar13[0x8e2] = '\0';
    pcVar13[0x8e3] = '\0';
    pcVar13[0x8e4] = '\0';
    pcVar13[0x8e5] = '\0';
    pcVar13[0x8e6] = '\0';
    pcVar13[0x8e7] = '\0';
    pcVar13[0x8d8] = '\0';
    pcVar13[0x8d9] = '\0';
    pcVar13[0x8da] = '\0';
    pcVar13[0x8db] = '\0';
    pcVar13[0x8dc] = '\0';
    pcVar13[0x8dd] = '\0';
    pcVar13[0x8de] = '\0';
    pcVar13[0x8df] = '\0';
    pcVar13[0x8d0] = '\0';
    pcVar13[0x8d1] = '\0';
    pcVar13[0x8d2] = '\0';
    pcVar13[0x8d3] = '\0';
    pcVar13[0x8d4] = '\0';
    pcVar13[0x8d5] = '\0';
    pcVar13[0x8d6] = '\0';
    pcVar13[0x8d7] = '\0';
    pcVar13[0x8c8] = '\0';
    pcVar13[0x8c9] = '\0';
    pcVar13[0x8ca] = '\0';
    pcVar13[0x8cb] = '\0';
    pcVar13[0x8cc] = '\0';
    pcVar13[0x8cd] = '\0';
    pcVar13[0x8ce] = '\0';
    pcVar13[0x8cf] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x908));
    pcVar13[0x958] = -1;
    pcVar13[0x959] = -1;
    pcVar13[0x95a] = -1;
    pcVar13[0x95b] = -1;
    pcVar13[0x95c] = -1;
    pcVar13[0x95d] = -1;
    pcVar13[0x95e] = -1;
    pcVar13[0x95f] = -1;
    *(undefined ***)(pcVar13 + 0x950) = &PTR_FUN_7105182f40;
    pcVar13[0x960] = '\0';
    pcVar13[0x961] = '\0';
    pcVar13[0x962] = '\0';
    pcVar13[0x963] = '\0';
    *(undefined ***)(pcVar13 + 0x7e0) = &PTR_FUN_7105238b48;
    pcVar13[0x968] = '\0';
    memset(pcVar13 + 0x970,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x980));
    pcVar13[0xa90] = '\0';
    pcVar13[0xa91] = '\0';
    pcVar13[0xa92] = '\0';
    pcVar13[0xa93] = '\0';
    pcVar13[0xa94] = '\0';
    pcVar13[0xa95] = '\0';
    pcVar13[0xa96] = '\0';
    pcVar13[0xa97] = '\0';
    pcVar13[0xa88] = '\0';
    pcVar13[0xa89] = '\0';
    pcVar13[0xa8a] = '\0';
    pcVar13[0xa8b] = '\0';
    pcVar13[0xa8c] = '\0';
    pcVar13[0xa8d] = '\0';
    pcVar13[0xa8e] = '\0';
    pcVar13[0xa8f] = '\0';
    pcVar13[0xa80] = '\0';
    pcVar13[0xa81] = '\0';
    pcVar13[0xa82] = '\0';
    pcVar13[0xa83] = '\0';
    pcVar13[0xa84] = '\0';
    pcVar13[0xa85] = '\0';
    pcVar13[0xa86] = '\0';
    pcVar13[0xa87] = '\0';
    pcVar13[0xa78] = '\0';
    pcVar13[0xa79] = '\0';
    pcVar13[0xa7a] = '\0';
    pcVar13[0xa7b] = '\0';
    pcVar13[0xa7c] = '\0';
    pcVar13[0xa7d] = '\0';
    pcVar13[0xa7e] = '\0';
    pcVar13[0xa7f] = '\0';
    pcVar13[0xa70] = '\0';
    pcVar13[0xa71] = '\0';
    pcVar13[0xa72] = '\0';
    pcVar13[0xa73] = '\0';
    pcVar13[0xa74] = '\0';
    pcVar13[0xa75] = '\0';
    pcVar13[0xa76] = '\0';
    pcVar13[0xa77] = '\0';
    pcVar13[0xa68] = '\0';
    pcVar13[0xa69] = '\0';
    pcVar13[0xa6a] = '\0';
    pcVar13[0xa6b] = '\0';
    pcVar13[0xa6c] = '\0';
    pcVar13[0xa6d] = '\0';
    pcVar13[0xa6e] = '\0';
    pcVar13[0xa6f] = '\0';
    pcVar13[0xa60] = '\0';
    pcVar13[0xa61] = '\0';
    pcVar13[0xa62] = '\0';
    pcVar13[0xa63] = '\0';
    pcVar13[0xa64] = '\0';
    pcVar13[0xa65] = '\0';
    pcVar13[0xa66] = '\0';
    pcVar13[0xa67] = '\0';
    pcVar13[0xa58] = '\0';
    pcVar13[0xa59] = '\0';
    pcVar13[0xa5a] = '\0';
    pcVar13[0xa5b] = '\0';
    pcVar13[0xa5c] = '\0';
    pcVar13[0xa5d] = '\0';
    pcVar13[0xa5e] = '\0';
    pcVar13[0xa5f] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0xa98));
    pcVar13[0xae8] = -1;
    pcVar13[0xae9] = -1;
    pcVar13[0xaea] = -1;
    pcVar13[0xaeb] = -1;
    pcVar13[0xaec] = -1;
    pcVar13[0xaed] = -1;
    pcVar13[0xaee] = -1;
    pcVar13[0xaef] = -1;
    *(undefined ***)(pcVar13 + 0xae0) = &PTR_FUN_7105182f40;
    pcVar13[0xaf0] = '\0';
    pcVar13[0xaf1] = '\0';
    pcVar13[0xaf2] = '\0';
    pcVar13[0xaf3] = '\0';
    *(undefined ***)(pcVar13 + 0x970) = &PTR_FUN_7105238b48;
    pcVar13[0xaf8] = '\0';
    memset(pcVar13 + 0xb00,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0xb10));
    pcVar13[0xc20] = '\0';
    pcVar13[0xc21] = '\0';
    pcVar13[0xc22] = '\0';
    pcVar13[0xc23] = '\0';
    pcVar13[0xc24] = '\0';
    pcVar13[0xc25] = '\0';
    pcVar13[0xc26] = '\0';
    pcVar13[0xc27] = '\0';
    pcVar13[0xc18] = '\0';
    pcVar13[0xc19] = '\0';
    pcVar13[0xc1a] = '\0';
    pcVar13[0xc1b] = '\0';
    pcVar13[0xc1c] = '\0';
    pcVar13[0xc1d] = '\0';
    pcVar13[0xc1e] = '\0';
    pcVar13[0xc1f] = '\0';
    pcVar13[0xc10] = '\0';
    pcVar13[0xc11] = '\0';
    pcVar13[0xc12] = '\0';
    pcVar13[0xc13] = '\0';
    pcVar13[0xc14] = '\0';
    pcVar13[0xc15] = '\0';
    pcVar13[0xc16] = '\0';
    pcVar13[0xc17] = '\0';
    pcVar13[0xc08] = '\0';
    pcVar13[0xc09] = '\0';
    pcVar13[0xc0a] = '\0';
    pcVar13[0xc0b] = '\0';
    pcVar13[0xc0c] = '\0';
    pcVar13[0xc0d] = '\0';
    pcVar13[0xc0e] = '\0';
    pcVar13[0xc0f] = '\0';
    pcVar13[0xc00] = '\0';
    pcVar13[0xc01] = '\0';
    pcVar13[0xc02] = '\0';
    pcVar13[0xc03] = '\0';
    pcVar13[0xc04] = '\0';
    pcVar13[0xc05] = '\0';
    pcVar13[0xc06] = '\0';
    pcVar13[0xc07] = '\0';
    pcVar13[0xbf8] = '\0';
    pcVar13[0xbf9] = '\0';
    pcVar13[0xbfa] = '\0';
    pcVar13[0xbfb] = '\0';
    pcVar13[0xbfc] = '\0';
    pcVar13[0xbfd] = '\0';
    pcVar13[0xbfe] = '\0';
    pcVar13[0xbff] = '\0';
    pcVar13[0xbf0] = '\0';
    pcVar13[0xbf1] = '\0';
    pcVar13[0xbf2] = '\0';
    pcVar13[0xbf3] = '\0';
    pcVar13[0xbf4] = '\0';
    pcVar13[0xbf5] = '\0';
    pcVar13[0xbf6] = '\0';
    pcVar13[0xbf7] = '\0';
    pcVar13[0xbe8] = '\0';
    pcVar13[0xbe9] = '\0';
    pcVar13[0xbea] = '\0';
    pcVar13[0xbeb] = '\0';
    pcVar13[0xbec] = '\0';
    pcVar13[0xbed] = '\0';
    pcVar13[0xbee] = '\0';
    pcVar13[0xbef] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0xc28));
    pcVar13[0xc78] = -1;
    pcVar13[0xc79] = -1;
    pcVar13[0xc7a] = -1;
    pcVar13[0xc7b] = -1;
    pcVar13[0xc7c] = -1;
    pcVar13[0xc7d] = -1;
    pcVar13[0xc7e] = -1;
    pcVar13[0xc7f] = -1;
    *(undefined ***)(pcVar13 + 0xc70) = &PTR_FUN_7105182f40;
    pcVar13[0xc80] = '\0';
    pcVar13[0xc81] = '\0';
    pcVar13[0xc82] = '\0';
    pcVar13[0xc83] = '\0';
    *(undefined ***)(pcVar13 + 0xb00) = &PTR_FUN_7105238b48;
    pcVar13[0xc88] = '\0';
    pcVar13[0xc90] = '\0';
    memset(pcVar13 + 0xc98,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0xca8));
    pcVar13[0xdb8] = '\0';
    pcVar13[0xdb9] = '\0';
    pcVar13[0xdba] = '\0';
    pcVar13[0xdbb] = '\0';
    pcVar13[0xdbc] = '\0';
    pcVar13[0xdbd] = '\0';
    pcVar13[0xdbe] = '\0';
    pcVar13[0xdbf] = '\0';
    pcVar13[0xdb0] = '\0';
    pcVar13[0xdb1] = '\0';
    pcVar13[0xdb2] = '\0';
    pcVar13[0xdb3] = '\0';
    pcVar13[0xdb4] = '\0';
    pcVar13[0xdb5] = '\0';
    pcVar13[0xdb6] = '\0';
    pcVar13[0xdb7] = '\0';
    pcVar13[0xda8] = '\0';
    pcVar13[0xda9] = '\0';
    pcVar13[0xdaa] = '\0';
    pcVar13[0xdab] = '\0';
    pcVar13[0xdac] = '\0';
    pcVar13[0xdad] = '\0';
    pcVar13[0xdae] = '\0';
    pcVar13[0xdaf] = '\0';
    pcVar13[0xda0] = '\0';
    pcVar13[0xda1] = '\0';
    pcVar13[0xda2] = '\0';
    pcVar13[0xda3] = '\0';
    pcVar13[0xda4] = '\0';
    pcVar13[0xda5] = '\0';
    pcVar13[0xda6] = '\0';
    pcVar13[0xda7] = '\0';
    pcVar13[0xd98] = '\0';
    pcVar13[0xd99] = '\0';
    pcVar13[0xd9a] = '\0';
    pcVar13[0xd9b] = '\0';
    pcVar13[0xd9c] = '\0';
    pcVar13[0xd9d] = '\0';
    pcVar13[0xd9e] = '\0';
    pcVar13[0xd9f] = '\0';
    pcVar13[0xd90] = '\0';
    pcVar13[0xd91] = '\0';
    pcVar13[0xd92] = '\0';
    pcVar13[0xd93] = '\0';
    pcVar13[0xd94] = '\0';
    pcVar13[0xd95] = '\0';
    pcVar13[0xd96] = '\0';
    pcVar13[0xd97] = '\0';
    pcVar13[0xd88] = '\0';
    pcVar13[0xd89] = '\0';
    pcVar13[0xd8a] = '\0';
    pcVar13[0xd8b] = '\0';
    pcVar13[0xd8c] = '\0';
    pcVar13[0xd8d] = '\0';
    pcVar13[0xd8e] = '\0';
    pcVar13[0xd8f] = '\0';
    pcVar13[0xd80] = '\0';
    pcVar13[0xd81] = '\0';
    pcVar13[0xd82] = '\0';
    pcVar13[0xd83] = '\0';
    pcVar13[0xd84] = '\0';
    pcVar13[0xd85] = '\0';
    pcVar13[0xd86] = '\0';
    pcVar13[0xd87] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0xdc0));
    pcVar13[0xe10] = -1;
    pcVar13[0xe11] = -1;
    pcVar13[0xe12] = -1;
    pcVar13[0xe13] = -1;
    pcVar13[0xe14] = -1;
    pcVar13[0xe15] = -1;
    pcVar13[0xe16] = -1;
    pcVar13[0xe17] = -1;
    *(undefined ***)(pcVar13 + 0xe08) = &PTR_FUN_7105182f40;
    pcVar13[0xe18] = '\0';
    pcVar13[0xe19] = '\0';
    pcVar13[0xe1a] = '\0';
    pcVar13[0xe1b] = '\0';
    *(undefined ***)(pcVar13 + 0xc98) = &PTR_FUN_7105238b48;
    pcVar13[0xe20] = '\0';
    memset(pcVar13 + 0xe28,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0xe38));
    pcVar13[0xf48] = '\0';
    pcVar13[0xf49] = '\0';
    pcVar13[0xf4a] = '\0';
    pcVar13[0xf4b] = '\0';
    pcVar13[0xf4c] = '\0';
    pcVar13[0xf4d] = '\0';
    pcVar13[0xf4e] = '\0';
    pcVar13[0xf4f] = '\0';
    pcVar13[0xf40] = '\0';
    pcVar13[0xf41] = '\0';
    pcVar13[0xf42] = '\0';
    pcVar13[0xf43] = '\0';
    pcVar13[0xf44] = '\0';
    pcVar13[0xf45] = '\0';
    pcVar13[0xf46] = '\0';
    pcVar13[0xf47] = '\0';
    pcVar13[0xf38] = '\0';
    pcVar13[0xf39] = '\0';
    pcVar13[0xf3a] = '\0';
    pcVar13[0xf3b] = '\0';
    pcVar13[0xf3c] = '\0';
    pcVar13[0xf3d] = '\0';
    pcVar13[0xf3e] = '\0';
    pcVar13[0xf3f] = '\0';
    pcVar13[0xf30] = '\0';
    pcVar13[0xf31] = '\0';
    pcVar13[0xf32] = '\0';
    pcVar13[0xf33] = '\0';
    pcVar13[0xf34] = '\0';
    pcVar13[0xf35] = '\0';
    pcVar13[0xf36] = '\0';
    pcVar13[0xf37] = '\0';
    pcVar13[0xf28] = '\0';
    pcVar13[0xf29] = '\0';
    pcVar13[0xf2a] = '\0';
    pcVar13[0xf2b] = '\0';
    pcVar13[0xf2c] = '\0';
    pcVar13[0xf2d] = '\0';
    pcVar13[0xf2e] = '\0';
    pcVar13[0xf2f] = '\0';
    pcVar13[0xf20] = '\0';
    pcVar13[0xf21] = '\0';
    pcVar13[0xf22] = '\0';
    pcVar13[0xf23] = '\0';
    pcVar13[0xf24] = '\0';
    pcVar13[0xf25] = '\0';
    pcVar13[0xf26] = '\0';
    pcVar13[0xf27] = '\0';
    pcVar13[0xf18] = '\0';
    pcVar13[0xf19] = '\0';
    pcVar13[0xf1a] = '\0';
    pcVar13[0xf1b] = '\0';
    pcVar13[0xf1c] = '\0';
    pcVar13[0xf1d] = '\0';
    pcVar13[0xf1e] = '\0';
    pcVar13[0xf1f] = '\0';
    pcVar13[0xf10] = '\0';
    pcVar13[0xf11] = '\0';
    pcVar13[0xf12] = '\0';
    pcVar13[0xf13] = '\0';
    pcVar13[0xf14] = '\0';
    pcVar13[0xf15] = '\0';
    pcVar13[0xf16] = '\0';
    pcVar13[0xf17] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0xf50));
    pcVar13[4000] = -1;
    pcVar13[0xfa1] = -1;
    pcVar13[0xfa2] = -1;
    pcVar13[0xfa3] = -1;
    pcVar13[0xfa4] = -1;
    pcVar13[0xfa5] = -1;
    pcVar13[0xfa6] = -1;
    pcVar13[0xfa7] = -1;
    *(undefined ***)(pcVar13 + 0xf98) = &PTR_FUN_7105182f40;
    pcVar13[0xfa8] = '\0';
    pcVar13[0xfa9] = '\0';
    pcVar13[0xfaa] = '\0';
    pcVar13[0xfab] = '\0';
    *(undefined ***)(pcVar13 + 0xe28) = &PTR_FUN_7105238b48;
    pcVar13[0xfb0] = '\0';
    memset(pcVar13 + 0xfb8,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0xfc8));
    pcVar13[0x10d8] = '\0';
    pcVar13[0x10d9] = '\0';
    pcVar13[0x10da] = '\0';
    pcVar13[0x10db] = '\0';
    pcVar13[0x10dc] = '\0';
    pcVar13[0x10dd] = '\0';
    pcVar13[0x10de] = '\0';
    pcVar13[0x10df] = '\0';
    pcVar13[0x10d0] = '\0';
    pcVar13[0x10d1] = '\0';
    pcVar13[0x10d2] = '\0';
    pcVar13[0x10d3] = '\0';
    pcVar13[0x10d4] = '\0';
    pcVar13[0x10d5] = '\0';
    pcVar13[0x10d6] = '\0';
    pcVar13[0x10d7] = '\0';
    pcVar13[0x10c8] = '\0';
    pcVar13[0x10c9] = '\0';
    pcVar13[0x10ca] = '\0';
    pcVar13[0x10cb] = '\0';
    pcVar13[0x10cc] = '\0';
    pcVar13[0x10cd] = '\0';
    pcVar13[0x10ce] = '\0';
    pcVar13[0x10cf] = '\0';
    pcVar13[0x10c0] = '\0';
    pcVar13[0x10c1] = '\0';
    pcVar13[0x10c2] = '\0';
    pcVar13[0x10c3] = '\0';
    pcVar13[0x10c4] = '\0';
    pcVar13[0x10c5] = '\0';
    pcVar13[0x10c6] = '\0';
    pcVar13[0x10c7] = '\0';
    pcVar13[0x10b8] = '\0';
    pcVar13[0x10b9] = '\0';
    pcVar13[0x10ba] = '\0';
    pcVar13[0x10bb] = '\0';
    pcVar13[0x10bc] = '\0';
    pcVar13[0x10bd] = '\0';
    pcVar13[0x10be] = '\0';
    pcVar13[0x10bf] = '\0';
    pcVar13[0x10b0] = '\0';
    pcVar13[0x10b1] = '\0';
    pcVar13[0x10b2] = '\0';
    pcVar13[0x10b3] = '\0';
    pcVar13[0x10b4] = '\0';
    pcVar13[0x10b5] = '\0';
    pcVar13[0x10b6] = '\0';
    pcVar13[0x10b7] = '\0';
    pcVar13[0x10a8] = '\0';
    pcVar13[0x10a9] = '\0';
    pcVar13[0x10aa] = '\0';
    pcVar13[0x10ab] = '\0';
    pcVar13[0x10ac] = '\0';
    pcVar13[0x10ad] = '\0';
    pcVar13[0x10ae] = '\0';
    pcVar13[0x10af] = '\0';
    pcVar13[0x10a0] = '\0';
    pcVar13[0x10a1] = '\0';
    pcVar13[0x10a2] = '\0';
    pcVar13[0x10a3] = '\0';
    pcVar13[0x10a4] = '\0';
    pcVar13[0x10a5] = '\0';
    pcVar13[0x10a6] = '\0';
    pcVar13[0x10a7] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x10e0));
    pcVar13[0x1130] = -1;
    pcVar13[0x1131] = -1;
    pcVar13[0x1132] = -1;
    pcVar13[0x1133] = -1;
    pcVar13[0x1134] = -1;
    pcVar13[0x1135] = -1;
    pcVar13[0x1136] = -1;
    pcVar13[0x1137] = -1;
    *(undefined ***)(pcVar13 + 0x1128) = &PTR_FUN_7105182f40;
    pcVar13[0x1138] = '\0';
    pcVar13[0x1139] = '\0';
    pcVar13[0x113a] = '\0';
    pcVar13[0x113b] = '\0';
    *(undefined ***)(pcVar13 + 0xfb8) = &PTR_FUN_7105238b48;
    pcVar13[0x1140] = '\0';
    memset(pcVar13 + 0x1148,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x1158));
    pcVar13[0x1268] = '\0';
    pcVar13[0x1269] = '\0';
    pcVar13[0x126a] = '\0';
    pcVar13[0x126b] = '\0';
    pcVar13[0x126c] = '\0';
    pcVar13[0x126d] = '\0';
    pcVar13[0x126e] = '\0';
    pcVar13[0x126f] = '\0';
    pcVar13[0x1260] = '\0';
    pcVar13[0x1261] = '\0';
    pcVar13[0x1262] = '\0';
    pcVar13[0x1263] = '\0';
    pcVar13[0x1264] = '\0';
    pcVar13[0x1265] = '\0';
    pcVar13[0x1266] = '\0';
    pcVar13[0x1267] = '\0';
    pcVar13[0x1258] = '\0';
    pcVar13[0x1259] = '\0';
    pcVar13[0x125a] = '\0';
    pcVar13[0x125b] = '\0';
    pcVar13[0x125c] = '\0';
    pcVar13[0x125d] = '\0';
    pcVar13[0x125e] = '\0';
    pcVar13[0x125f] = '\0';
    pcVar13[0x1250] = '\0';
    pcVar13[0x1251] = '\0';
    pcVar13[0x1252] = '\0';
    pcVar13[0x1253] = '\0';
    pcVar13[0x1254] = '\0';
    pcVar13[0x1255] = '\0';
    pcVar13[0x1256] = '\0';
    pcVar13[0x1257] = '\0';
    pcVar13[0x1248] = '\0';
    pcVar13[0x1249] = '\0';
    pcVar13[0x124a] = '\0';
    pcVar13[0x124b] = '\0';
    pcVar13[0x124c] = '\0';
    pcVar13[0x124d] = '\0';
    pcVar13[0x124e] = '\0';
    pcVar13[0x124f] = '\0';
    pcVar13[0x1240] = '\0';
    pcVar13[0x1241] = '\0';
    pcVar13[0x1242] = '\0';
    pcVar13[0x1243] = '\0';
    pcVar13[0x1244] = '\0';
    pcVar13[0x1245] = '\0';
    pcVar13[0x1246] = '\0';
    pcVar13[0x1247] = '\0';
    pcVar13[0x1238] = '\0';
    pcVar13[0x1239] = '\0';
    pcVar13[0x123a] = '\0';
    pcVar13[0x123b] = '\0';
    pcVar13[0x123c] = '\0';
    pcVar13[0x123d] = '\0';
    pcVar13[0x123e] = '\0';
    pcVar13[0x123f] = '\0';
    pcVar13[0x1230] = '\0';
    pcVar13[0x1231] = '\0';
    pcVar13[0x1232] = '\0';
    pcVar13[0x1233] = '\0';
    pcVar13[0x1234] = '\0';
    pcVar13[0x1235] = '\0';
    pcVar13[0x1236] = '\0';
    pcVar13[0x1237] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x1270));
    pcVar13[0x12c0] = -1;
    pcVar13[0x12c1] = -1;
    pcVar13[0x12c2] = -1;
    pcVar13[0x12c3] = -1;
    pcVar13[0x12c4] = -1;
    pcVar13[0x12c5] = -1;
    pcVar13[0x12c6] = -1;
    pcVar13[0x12c7] = -1;
    *(undefined ***)(pcVar13 + 0x12b8) = &PTR_FUN_7105182f40;
    pcVar13[0x12c8] = '\0';
    pcVar13[0x12c9] = '\0';
    pcVar13[0x12ca] = '\0';
    pcVar13[0x12cb] = '\0';
    *(undefined ***)(pcVar13 + 0x1148) = &PTR_FUN_7105238b48;
    pcVar13[0x12d0] = '\0';
    memset(pcVar13 + 0x12d8,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x12e8));
    pcVar13[0x13f8] = '\0';
    pcVar13[0x13f9] = '\0';
    pcVar13[0x13fa] = '\0';
    pcVar13[0x13fb] = '\0';
    pcVar13[0x13fc] = '\0';
    pcVar13[0x13fd] = '\0';
    pcVar13[0x13fe] = '\0';
    pcVar13[0x13ff] = '\0';
    pcVar13[0x13f0] = '\0';
    pcVar13[0x13f1] = '\0';
    pcVar13[0x13f2] = '\0';
    pcVar13[0x13f3] = '\0';
    pcVar13[0x13f4] = '\0';
    pcVar13[0x13f5] = '\0';
    pcVar13[0x13f6] = '\0';
    pcVar13[0x13f7] = '\0';
    pcVar13[0x13e8] = '\0';
    pcVar13[0x13e9] = '\0';
    pcVar13[0x13ea] = '\0';
    pcVar13[0x13eb] = '\0';
    pcVar13[0x13ec] = '\0';
    pcVar13[0x13ed] = '\0';
    pcVar13[0x13ee] = '\0';
    pcVar13[0x13ef] = '\0';
    pcVar13[0x13e0] = '\0';
    pcVar13[0x13e1] = '\0';
    pcVar13[0x13e2] = '\0';
    pcVar13[0x13e3] = '\0';
    pcVar13[0x13e4] = '\0';
    pcVar13[0x13e5] = '\0';
    pcVar13[0x13e6] = '\0';
    pcVar13[0x13e7] = '\0';
    pcVar13[0x13d8] = '\0';
    pcVar13[0x13d9] = '\0';
    pcVar13[0x13da] = '\0';
    pcVar13[0x13db] = '\0';
    pcVar13[0x13dc] = '\0';
    pcVar13[0x13dd] = '\0';
    pcVar13[0x13de] = '\0';
    pcVar13[0x13df] = '\0';
    pcVar13[0x13d0] = '\0';
    pcVar13[0x13d1] = '\0';
    pcVar13[0x13d2] = '\0';
    pcVar13[0x13d3] = '\0';
    pcVar13[0x13d4] = '\0';
    pcVar13[0x13d5] = '\0';
    pcVar13[0x13d6] = '\0';
    pcVar13[0x13d7] = '\0';
    pcVar13[0x13c8] = '\0';
    pcVar13[0x13c9] = '\0';
    pcVar13[0x13ca] = '\0';
    pcVar13[0x13cb] = '\0';
    pcVar13[0x13cc] = '\0';
    pcVar13[0x13cd] = '\0';
    pcVar13[0x13ce] = '\0';
    pcVar13[0x13cf] = '\0';
    pcVar13[0x13c0] = '\0';
    pcVar13[0x13c1] = '\0';
    pcVar13[0x13c2] = '\0';
    pcVar13[0x13c3] = '\0';
    pcVar13[0x13c4] = '\0';
    pcVar13[0x13c5] = '\0';
    pcVar13[0x13c6] = '\0';
    pcVar13[0x13c7] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x1400));
    pcVar13[0x1450] = -1;
    pcVar13[0x1451] = -1;
    pcVar13[0x1452] = -1;
    pcVar13[0x1453] = -1;
    pcVar13[0x1454] = -1;
    pcVar13[0x1455] = -1;
    pcVar13[0x1456] = -1;
    pcVar13[0x1457] = -1;
    *(undefined ***)(pcVar13 + 0x1448) = &PTR_FUN_7105182f40;
    pcVar13[0x1458] = '\0';
    pcVar13[0x1459] = '\0';
    pcVar13[0x145a] = '\0';
    pcVar13[0x145b] = '\0';
    *(undefined ***)(pcVar13 + 0x12d8) = &PTR_FUN_7105238b48;
    pcVar13[0x1460] = '\0';
    memset(pcVar13 + 0x1468,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x1478));
    pcVar13[0x1588] = '\0';
    pcVar13[0x1589] = '\0';
    pcVar13[0x158a] = '\0';
    pcVar13[0x158b] = '\0';
    pcVar13[0x158c] = '\0';
    pcVar13[0x158d] = '\0';
    pcVar13[0x158e] = '\0';
    pcVar13[0x158f] = '\0';
    pcVar13[0x1580] = '\0';
    pcVar13[0x1581] = '\0';
    pcVar13[0x1582] = '\0';
    pcVar13[0x1583] = '\0';
    pcVar13[0x1584] = '\0';
    pcVar13[0x1585] = '\0';
    pcVar13[0x1586] = '\0';
    pcVar13[0x1587] = '\0';
    pcVar13[0x1578] = '\0';
    pcVar13[0x1579] = '\0';
    pcVar13[0x157a] = '\0';
    pcVar13[0x157b] = '\0';
    pcVar13[0x157c] = '\0';
    pcVar13[0x157d] = '\0';
    pcVar13[0x157e] = '\0';
    pcVar13[0x157f] = '\0';
    pcVar13[0x1570] = '\0';
    pcVar13[0x1571] = '\0';
    pcVar13[0x1572] = '\0';
    pcVar13[0x1573] = '\0';
    pcVar13[0x1574] = '\0';
    pcVar13[0x1575] = '\0';
    pcVar13[0x1576] = '\0';
    pcVar13[0x1577] = '\0';
    pcVar13[0x1568] = '\0';
    pcVar13[0x1569] = '\0';
    pcVar13[0x156a] = '\0';
    pcVar13[0x156b] = '\0';
    pcVar13[0x156c] = '\0';
    pcVar13[0x156d] = '\0';
    pcVar13[0x156e] = '\0';
    pcVar13[0x156f] = '\0';
    pcVar13[0x1560] = '\0';
    pcVar13[0x1561] = '\0';
    pcVar13[0x1562] = '\0';
    pcVar13[0x1563] = '\0';
    pcVar13[0x1564] = '\0';
    pcVar13[0x1565] = '\0';
    pcVar13[0x1566] = '\0';
    pcVar13[0x1567] = '\0';
    pcVar13[0x1558] = '\0';
    pcVar13[0x1559] = '\0';
    pcVar13[0x155a] = '\0';
    pcVar13[0x155b] = '\0';
    pcVar13[0x155c] = '\0';
    pcVar13[0x155d] = '\0';
    pcVar13[0x155e] = '\0';
    pcVar13[0x155f] = '\0';
    pcVar13[0x1550] = '\0';
    pcVar13[0x1551] = '\0';
    pcVar13[0x1552] = '\0';
    pcVar13[0x1553] = '\0';
    pcVar13[0x1554] = '\0';
    pcVar13[0x1555] = '\0';
    pcVar13[0x1556] = '\0';
    pcVar13[0x1557] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x1590));
    pcVar13[0x15e0] = -1;
    pcVar13[0x15e1] = -1;
    pcVar13[0x15e2] = -1;
    pcVar13[0x15e3] = -1;
    pcVar13[0x15e4] = -1;
    pcVar13[0x15e5] = -1;
    pcVar13[0x15e6] = -1;
    pcVar13[0x15e7] = -1;
    *(undefined ***)(pcVar13 + 0x15d8) = &PTR_FUN_7105182f40;
    pcVar13[0x15e8] = '\0';
    pcVar13[0x15e9] = '\0';
    pcVar13[0x15ea] = '\0';
    pcVar13[0x15eb] = '\0';
    *(undefined ***)(pcVar13 + 0x1468) = &PTR_FUN_7105238b48;
    pcVar13[0x15f0] = '\0';
    memset(pcVar13 + 0x15f8,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x1608));
    pcVar13[0x1718] = '\0';
    pcVar13[0x1719] = '\0';
    pcVar13[0x171a] = '\0';
    pcVar13[0x171b] = '\0';
    pcVar13[0x171c] = '\0';
    pcVar13[0x171d] = '\0';
    pcVar13[0x171e] = '\0';
    pcVar13[0x171f] = '\0';
    pcVar13[0x1710] = '\0';
    pcVar13[0x1711] = '\0';
    pcVar13[0x1712] = '\0';
    pcVar13[0x1713] = '\0';
    pcVar13[0x1714] = '\0';
    pcVar13[0x1715] = '\0';
    pcVar13[0x1716] = '\0';
    pcVar13[0x1717] = '\0';
    pcVar13[0x1708] = '\0';
    pcVar13[0x1709] = '\0';
    pcVar13[0x170a] = '\0';
    pcVar13[0x170b] = '\0';
    pcVar13[0x170c] = '\0';
    pcVar13[0x170d] = '\0';
    pcVar13[0x170e] = '\0';
    pcVar13[0x170f] = '\0';
    pcVar13[0x1700] = '\0';
    pcVar13[0x1701] = '\0';
    pcVar13[0x1702] = '\0';
    pcVar13[0x1703] = '\0';
    pcVar13[0x1704] = '\0';
    pcVar13[0x1705] = '\0';
    pcVar13[0x1706] = '\0';
    pcVar13[0x1707] = '\0';
    pcVar13[0x16f8] = '\0';
    pcVar13[0x16f9] = '\0';
    pcVar13[0x16fa] = '\0';
    pcVar13[0x16fb] = '\0';
    pcVar13[0x16fc] = '\0';
    pcVar13[0x16fd] = '\0';
    pcVar13[0x16fe] = '\0';
    pcVar13[0x16ff] = '\0';
    pcVar13[0x16f0] = '\0';
    pcVar13[0x16f1] = '\0';
    pcVar13[0x16f2] = '\0';
    pcVar13[0x16f3] = '\0';
    pcVar13[0x16f4] = '\0';
    pcVar13[0x16f5] = '\0';
    pcVar13[0x16f6] = '\0';
    pcVar13[0x16f7] = '\0';
    pcVar13[0x16e8] = '\0';
    pcVar13[0x16e9] = '\0';
    pcVar13[0x16ea] = '\0';
    pcVar13[0x16eb] = '\0';
    pcVar13[0x16ec] = '\0';
    pcVar13[0x16ed] = '\0';
    pcVar13[0x16ee] = '\0';
    pcVar13[0x16ef] = '\0';
    pcVar13[0x16e0] = '\0';
    pcVar13[0x16e1] = '\0';
    pcVar13[0x16e2] = '\0';
    pcVar13[0x16e3] = '\0';
    pcVar13[0x16e4] = '\0';
    pcVar13[0x16e5] = '\0';
    pcVar13[0x16e6] = '\0';
    pcVar13[0x16e7] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x1720));
    pcVar13[6000] = -1;
    pcVar13[0x1771] = -1;
    pcVar13[0x1772] = -1;
    pcVar13[0x1773] = -1;
    pcVar13[0x1774] = -1;
    pcVar13[0x1775] = -1;
    pcVar13[0x1776] = -1;
    pcVar13[0x1777] = -1;
    *(undefined ***)(pcVar13 + 0x1768) = &PTR_FUN_7105182f40;
    pcVar13[0x1778] = '\0';
    pcVar13[0x1779] = '\0';
    pcVar13[0x177a] = '\0';
    pcVar13[0x177b] = '\0';
    *(undefined ***)(pcVar13 + 0x15f8) = &PTR_FUN_7105238b48;
    pcVar13[0x1780] = '\0';
    pcVar13[0x1788] = '\0';
    memset(pcVar13 + 0x1790,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x17a0));
    pcVar13[0x18b0] = '\0';
    pcVar13[0x18b1] = '\0';
    pcVar13[0x18b2] = '\0';
    pcVar13[0x18b3] = '\0';
    pcVar13[0x18b4] = '\0';
    pcVar13[0x18b5] = '\0';
    pcVar13[0x18b6] = '\0';
    pcVar13[0x18b7] = '\0';
    pcVar13[0x18a8] = '\0';
    pcVar13[0x18a9] = '\0';
    pcVar13[0x18aa] = '\0';
    pcVar13[0x18ab] = '\0';
    pcVar13[0x18ac] = '\0';
    pcVar13[0x18ad] = '\0';
    pcVar13[0x18ae] = '\0';
    pcVar13[0x18af] = '\0';
    pcVar13[0x18a0] = '\0';
    pcVar13[0x18a1] = '\0';
    pcVar13[0x18a2] = '\0';
    pcVar13[0x18a3] = '\0';
    pcVar13[0x18a4] = '\0';
    pcVar13[0x18a5] = '\0';
    pcVar13[0x18a6] = '\0';
    pcVar13[0x18a7] = '\0';
    pcVar13[0x1898] = '\0';
    pcVar13[0x1899] = '\0';
    pcVar13[0x189a] = '\0';
    pcVar13[0x189b] = '\0';
    pcVar13[0x189c] = '\0';
    pcVar13[0x189d] = '\0';
    pcVar13[0x189e] = '\0';
    pcVar13[0x189f] = '\0';
    pcVar13[0x1890] = '\0';
    pcVar13[0x1891] = '\0';
    pcVar13[0x1892] = '\0';
    pcVar13[0x1893] = '\0';
    pcVar13[0x1894] = '\0';
    pcVar13[0x1895] = '\0';
    pcVar13[0x1896] = '\0';
    pcVar13[0x1897] = '\0';
    pcVar13[0x1888] = '\0';
    pcVar13[0x1889] = '\0';
    pcVar13[0x188a] = '\0';
    pcVar13[0x188b] = '\0';
    pcVar13[0x188c] = '\0';
    pcVar13[0x188d] = '\0';
    pcVar13[0x188e] = '\0';
    pcVar13[0x188f] = '\0';
    pcVar13[0x1880] = '\0';
    pcVar13[0x1881] = '\0';
    pcVar13[0x1882] = '\0';
    pcVar13[0x1883] = '\0';
    pcVar13[0x1884] = '\0';
    pcVar13[0x1885] = '\0';
    pcVar13[0x1886] = '\0';
    pcVar13[0x1887] = '\0';
    pcVar13[0x1878] = '\0';
    pcVar13[0x1879] = '\0';
    pcVar13[0x187a] = '\0';
    pcVar13[0x187b] = '\0';
    pcVar13[0x187c] = '\0';
    pcVar13[0x187d] = '\0';
    pcVar13[0x187e] = '\0';
    pcVar13[0x187f] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x18b8));
    pcVar13[0x1908] = -1;
    pcVar13[0x1909] = -1;
    pcVar13[0x190a] = -1;
    pcVar13[0x190b] = -1;
    pcVar13[0x190c] = -1;
    pcVar13[0x190d] = -1;
    pcVar13[0x190e] = -1;
    pcVar13[0x190f] = -1;
    *(undefined ***)(pcVar13 + 0x1900) = &PTR_FUN_7105182f40;
    pcVar13[0x1910] = '\0';
    pcVar13[0x1911] = '\0';
    pcVar13[0x1912] = '\0';
    pcVar13[0x1913] = '\0';
    *(undefined ***)(pcVar13 + 0x1790) = &PTR_FUN_7105238b48;
    pcVar13[0x1918] = '\0';
    pcVar13[0x1920] = '\0';
    memset(pcVar13 + 0x1928,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x1938));
    pcVar13[0x1a48] = '\0';
    pcVar13[0x1a49] = '\0';
    pcVar13[0x1a4a] = '\0';
    pcVar13[0x1a4b] = '\0';
    pcVar13[0x1a4c] = '\0';
    pcVar13[0x1a4d] = '\0';
    pcVar13[0x1a4e] = '\0';
    pcVar13[0x1a4f] = '\0';
    pcVar13[0x1a40] = '\0';
    pcVar13[0x1a41] = '\0';
    pcVar13[0x1a42] = '\0';
    pcVar13[0x1a43] = '\0';
    pcVar13[0x1a44] = '\0';
    pcVar13[0x1a45] = '\0';
    pcVar13[0x1a46] = '\0';
    pcVar13[0x1a47] = '\0';
    pcVar13[0x1a38] = '\0';
    pcVar13[0x1a39] = '\0';
    pcVar13[0x1a3a] = '\0';
    pcVar13[0x1a3b] = '\0';
    pcVar13[0x1a3c] = '\0';
    pcVar13[0x1a3d] = '\0';
    pcVar13[0x1a3e] = '\0';
    pcVar13[0x1a3f] = '\0';
    pcVar13[0x1a30] = '\0';
    pcVar13[0x1a31] = '\0';
    pcVar13[0x1a32] = '\0';
    pcVar13[0x1a33] = '\0';
    pcVar13[0x1a34] = '\0';
    pcVar13[0x1a35] = '\0';
    pcVar13[0x1a36] = '\0';
    pcVar13[0x1a37] = '\0';
    pcVar13[0x1a28] = '\0';
    pcVar13[0x1a29] = '\0';
    pcVar13[0x1a2a] = '\0';
    pcVar13[0x1a2b] = '\0';
    pcVar13[0x1a2c] = '\0';
    pcVar13[0x1a2d] = '\0';
    pcVar13[0x1a2e] = '\0';
    pcVar13[0x1a2f] = '\0';
    pcVar13[0x1a20] = '\0';
    pcVar13[0x1a21] = '\0';
    pcVar13[0x1a22] = '\0';
    pcVar13[0x1a23] = '\0';
    pcVar13[0x1a24] = '\0';
    pcVar13[0x1a25] = '\0';
    pcVar13[0x1a26] = '\0';
    pcVar13[0x1a27] = '\0';
    pcVar13[0x1a18] = '\0';
    pcVar13[0x1a19] = '\0';
    pcVar13[0x1a1a] = '\0';
    pcVar13[0x1a1b] = '\0';
    pcVar13[0x1a1c] = '\0';
    pcVar13[0x1a1d] = '\0';
    pcVar13[0x1a1e] = '\0';
    pcVar13[0x1a1f] = '\0';
    pcVar13[0x1a10] = '\0';
    pcVar13[0x1a11] = '\0';
    pcVar13[0x1a12] = '\0';
    pcVar13[0x1a13] = '\0';
    pcVar13[0x1a14] = '\0';
    pcVar13[0x1a15] = '\0';
    pcVar13[0x1a16] = '\0';
    pcVar13[0x1a17] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x1a50));
    pcVar13[0x1aa0] = -1;
    pcVar13[0x1aa1] = -1;
    pcVar13[0x1aa2] = -1;
    pcVar13[0x1aa3] = -1;
    pcVar13[0x1aa4] = -1;
    pcVar13[0x1aa5] = -1;
    pcVar13[0x1aa6] = -1;
    pcVar13[0x1aa7] = -1;
    *(undefined ***)(pcVar13 + 0x1a98) = &PTR_FUN_7105182f40;
    pcVar13[0x1aa8] = '\0';
    pcVar13[0x1aa9] = '\0';
    pcVar13[0x1aaa] = '\0';
    pcVar13[0x1aab] = '\0';
    *(undefined ***)(pcVar13 + 0x1928) = &PTR_FUN_7105238b48;
    pcVar13[0x1ab0] = '\0';
    memset(pcVar13 + 0x1ab8,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x1ac8));
    pcVar13[0x1bd8] = '\0';
    pcVar13[0x1bd9] = '\0';
    pcVar13[0x1bda] = '\0';
    pcVar13[0x1bdb] = '\0';
    pcVar13[0x1bdc] = '\0';
    pcVar13[0x1bdd] = '\0';
    pcVar13[0x1bde] = '\0';
    pcVar13[0x1bdf] = '\0';
    pcVar13[0x1bd0] = '\0';
    pcVar13[0x1bd1] = '\0';
    pcVar13[0x1bd2] = '\0';
    pcVar13[0x1bd3] = '\0';
    pcVar13[0x1bd4] = '\0';
    pcVar13[0x1bd5] = '\0';
    pcVar13[0x1bd6] = '\0';
    pcVar13[0x1bd7] = '\0';
    pcVar13[0x1bc8] = '\0';
    pcVar13[0x1bc9] = '\0';
    pcVar13[0x1bca] = '\0';
    pcVar13[0x1bcb] = '\0';
    pcVar13[0x1bcc] = '\0';
    pcVar13[0x1bcd] = '\0';
    pcVar13[0x1bce] = '\0';
    pcVar13[0x1bcf] = '\0';
    pcVar13[0x1bc0] = '\0';
    pcVar13[0x1bc1] = '\0';
    pcVar13[0x1bc2] = '\0';
    pcVar13[0x1bc3] = '\0';
    pcVar13[0x1bc4] = '\0';
    pcVar13[0x1bc5] = '\0';
    pcVar13[0x1bc6] = '\0';
    pcVar13[0x1bc7] = '\0';
    pcVar13[0x1bb8] = '\0';
    pcVar13[0x1bb9] = '\0';
    pcVar13[0x1bba] = '\0';
    pcVar13[0x1bbb] = '\0';
    pcVar13[0x1bbc] = '\0';
    pcVar13[0x1bbd] = '\0';
    pcVar13[0x1bbe] = '\0';
    pcVar13[0x1bbf] = '\0';
    pcVar13[0x1bb0] = '\0';
    pcVar13[0x1bb1] = '\0';
    pcVar13[0x1bb2] = '\0';
    pcVar13[0x1bb3] = '\0';
    pcVar13[0x1bb4] = '\0';
    pcVar13[0x1bb5] = '\0';
    pcVar13[0x1bb6] = '\0';
    pcVar13[0x1bb7] = '\0';
    pcVar13[0x1ba8] = '\0';
    pcVar13[0x1ba9] = '\0';
    pcVar13[0x1baa] = '\0';
    pcVar13[0x1bab] = '\0';
    pcVar13[0x1bac] = '\0';
    pcVar13[0x1bad] = '\0';
    pcVar13[0x1bae] = '\0';
    pcVar13[0x1baf] = '\0';
    pcVar13[0x1ba0] = '\0';
    pcVar13[0x1ba1] = '\0';
    pcVar13[0x1ba2] = '\0';
    pcVar13[0x1ba3] = '\0';
    pcVar13[0x1ba4] = '\0';
    pcVar13[0x1ba5] = '\0';
    pcVar13[0x1ba6] = '\0';
    pcVar13[0x1ba7] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x1be0));
    pcVar13[0x1c30] = -1;
    pcVar13[0x1c31] = -1;
    pcVar13[0x1c32] = -1;
    pcVar13[0x1c33] = -1;
    pcVar13[0x1c34] = -1;
    pcVar13[0x1c35] = -1;
    pcVar13[0x1c36] = -1;
    pcVar13[0x1c37] = -1;
    *(undefined ***)(pcVar13 + 0x1c28) = &PTR_FUN_7105182f40;
    pcVar13[0x1c38] = '\0';
    pcVar13[0x1c39] = '\0';
    pcVar13[0x1c3a] = '\0';
    pcVar13[0x1c3b] = '\0';
    *(undefined ***)(pcVar13 + 0x1ab8) = &PTR_FUN_7105238b48;
    pcVar13[0x1c40] = '\0';
    memset(pcVar13 + 0x1c48,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x1c58));
    pcVar13[0x1d68] = '\0';
    pcVar13[0x1d69] = '\0';
    pcVar13[0x1d6a] = '\0';
    pcVar13[0x1d6b] = '\0';
    pcVar13[0x1d6c] = '\0';
    pcVar13[0x1d6d] = '\0';
    pcVar13[0x1d6e] = '\0';
    pcVar13[0x1d6f] = '\0';
    pcVar13[0x1d60] = '\0';
    pcVar13[0x1d61] = '\0';
    pcVar13[0x1d62] = '\0';
    pcVar13[0x1d63] = '\0';
    pcVar13[0x1d64] = '\0';
    pcVar13[0x1d65] = '\0';
    pcVar13[0x1d66] = '\0';
    pcVar13[0x1d67] = '\0';
    pcVar13[0x1d58] = '\0';
    pcVar13[0x1d59] = '\0';
    pcVar13[0x1d5a] = '\0';
    pcVar13[0x1d5b] = '\0';
    pcVar13[0x1d5c] = '\0';
    pcVar13[0x1d5d] = '\0';
    pcVar13[0x1d5e] = '\0';
    pcVar13[0x1d5f] = '\0';
    pcVar13[0x1d50] = '\0';
    pcVar13[0x1d51] = '\0';
    pcVar13[0x1d52] = '\0';
    pcVar13[0x1d53] = '\0';
    pcVar13[0x1d54] = '\0';
    pcVar13[0x1d55] = '\0';
    pcVar13[0x1d56] = '\0';
    pcVar13[0x1d57] = '\0';
    pcVar13[0x1d48] = '\0';
    pcVar13[0x1d49] = '\0';
    pcVar13[0x1d4a] = '\0';
    pcVar13[0x1d4b] = '\0';
    pcVar13[0x1d4c] = '\0';
    pcVar13[0x1d4d] = '\0';
    pcVar13[0x1d4e] = '\0';
    pcVar13[0x1d4f] = '\0';
    pcVar13[0x1d40] = '\0';
    pcVar13[0x1d41] = '\0';
    pcVar13[0x1d42] = '\0';
    pcVar13[0x1d43] = '\0';
    pcVar13[0x1d44] = '\0';
    pcVar13[0x1d45] = '\0';
    pcVar13[0x1d46] = '\0';
    pcVar13[0x1d47] = '\0';
    pcVar13[0x1d38] = '\0';
    pcVar13[0x1d39] = '\0';
    pcVar13[0x1d3a] = '\0';
    pcVar13[0x1d3b] = '\0';
    pcVar13[0x1d3c] = '\0';
    pcVar13[0x1d3d] = '\0';
    pcVar13[0x1d3e] = '\0';
    pcVar13[0x1d3f] = '\0';
    pcVar13[0x1d30] = '\0';
    pcVar13[0x1d31] = '\0';
    pcVar13[0x1d32] = '\0';
    pcVar13[0x1d33] = '\0';
    pcVar13[0x1d34] = '\0';
    pcVar13[0x1d35] = '\0';
    pcVar13[0x1d36] = '\0';
    pcVar13[0x1d37] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x1d70));
    pcVar13[0x1dc0] = -1;
    pcVar13[0x1dc1] = -1;
    pcVar13[0x1dc2] = -1;
    pcVar13[0x1dc3] = -1;
    pcVar13[0x1dc4] = -1;
    pcVar13[0x1dc5] = -1;
    pcVar13[0x1dc6] = -1;
    pcVar13[0x1dc7] = -1;
    *(undefined ***)(pcVar13 + 0x1db8) = &PTR_FUN_7105182f40;
    pcVar13[0x1dc8] = '\0';
    pcVar13[0x1dc9] = '\0';
    pcVar13[0x1dca] = '\0';
    pcVar13[0x1dcb] = '\0';
    *(undefined ***)(pcVar13 + 0x1c48) = &PTR_FUN_7105238b48;
    pcVar13[0x1dd0] = '\0';
    pcVar13[0x1dd8] = '\0';
    memset(pcVar13 + 0x1de0,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x1df0));
    pcVar13[0x1f00] = '\0';
    pcVar13[0x1f01] = '\0';
    pcVar13[0x1f02] = '\0';
    pcVar13[0x1f03] = '\0';
    pcVar13[0x1f04] = '\0';
    pcVar13[0x1f05] = '\0';
    pcVar13[0x1f06] = '\0';
    pcVar13[0x1f07] = '\0';
    pcVar13[0x1ef8] = '\0';
    pcVar13[0x1ef9] = '\0';
    pcVar13[0x1efa] = '\0';
    pcVar13[0x1efb] = '\0';
    pcVar13[0x1efc] = '\0';
    pcVar13[0x1efd] = '\0';
    pcVar13[0x1efe] = '\0';
    pcVar13[0x1eff] = '\0';
    pcVar13[0x1ef0] = '\0';
    pcVar13[0x1ef1] = '\0';
    pcVar13[0x1ef2] = '\0';
    pcVar13[0x1ef3] = '\0';
    pcVar13[0x1ef4] = '\0';
    pcVar13[0x1ef5] = '\0';
    pcVar13[0x1ef6] = '\0';
    pcVar13[0x1ef7] = '\0';
    pcVar13[0x1ee8] = '\0';
    pcVar13[0x1ee9] = '\0';
    pcVar13[0x1eea] = '\0';
    pcVar13[0x1eeb] = '\0';
    pcVar13[0x1eec] = '\0';
    pcVar13[0x1eed] = '\0';
    pcVar13[0x1eee] = '\0';
    pcVar13[0x1eef] = '\0';
    pcVar13[0x1ee0] = '\0';
    pcVar13[0x1ee1] = '\0';
    pcVar13[0x1ee2] = '\0';
    pcVar13[0x1ee3] = '\0';
    pcVar13[0x1ee4] = '\0';
    pcVar13[0x1ee5] = '\0';
    pcVar13[0x1ee6] = '\0';
    pcVar13[0x1ee7] = '\0';
    pcVar13[0x1ed8] = '\0';
    pcVar13[0x1ed9] = '\0';
    pcVar13[0x1eda] = '\0';
    pcVar13[0x1edb] = '\0';
    pcVar13[0x1edc] = '\0';
    pcVar13[0x1edd] = '\0';
    pcVar13[0x1ede] = '\0';
    pcVar13[0x1edf] = '\0';
    pcVar13[0x1ed0] = '\0';
    pcVar13[0x1ed1] = '\0';
    pcVar13[0x1ed2] = '\0';
    pcVar13[0x1ed3] = '\0';
    pcVar13[0x1ed4] = '\0';
    pcVar13[0x1ed5] = '\0';
    pcVar13[0x1ed6] = '\0';
    pcVar13[0x1ed7] = '\0';
    pcVar13[0x1ec8] = '\0';
    pcVar13[0x1ec9] = '\0';
    pcVar13[0x1eca] = '\0';
    pcVar13[0x1ecb] = '\0';
    pcVar13[0x1ecc] = '\0';
    pcVar13[0x1ecd] = '\0';
    pcVar13[0x1ece] = '\0';
    pcVar13[0x1ecf] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x1f08));
    pcVar13[0x1f58] = -1;
    pcVar13[0x1f59] = -1;
    pcVar13[0x1f5a] = -1;
    pcVar13[0x1f5b] = -1;
    pcVar13[0x1f5c] = -1;
    pcVar13[0x1f5d] = -1;
    pcVar13[0x1f5e] = -1;
    pcVar13[0x1f5f] = -1;
    *(undefined ***)(pcVar13 + 0x1f50) = &PTR_FUN_7105182f40;
    pcVar13[0x1f60] = '\0';
    pcVar13[0x1f61] = '\0';
    pcVar13[0x1f62] = '\0';
    pcVar13[0x1f63] = '\0';
    *(undefined ***)(pcVar13 + 0x1de0) = &PTR_FUN_7105238b48;
    pcVar13[0x1f70] = '\0';
    memset(pcVar13 + 0x1f78,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x1f88));
    pcVar13[0x2098] = '\0';
    pcVar13[0x2099] = '\0';
    pcVar13[0x209a] = '\0';
    pcVar13[0x209b] = '\0';
    pcVar13[0x209c] = '\0';
    pcVar13[0x209d] = '\0';
    pcVar13[0x209e] = '\0';
    pcVar13[0x209f] = '\0';
    pcVar13[0x2090] = '\0';
    pcVar13[0x2091] = '\0';
    pcVar13[0x2092] = '\0';
    pcVar13[0x2093] = '\0';
    pcVar13[0x2094] = '\0';
    pcVar13[0x2095] = '\0';
    pcVar13[0x2096] = '\0';
    pcVar13[0x2097] = '\0';
    pcVar13[0x2088] = '\0';
    pcVar13[0x2089] = '\0';
    pcVar13[0x208a] = '\0';
    pcVar13[0x208b] = '\0';
    pcVar13[0x208c] = '\0';
    pcVar13[0x208d] = '\0';
    pcVar13[0x208e] = '\0';
    pcVar13[0x208f] = '\0';
    pcVar13[0x2080] = '\0';
    pcVar13[0x2081] = '\0';
    pcVar13[0x2082] = '\0';
    pcVar13[0x2083] = '\0';
    pcVar13[0x2084] = '\0';
    pcVar13[0x2085] = '\0';
    pcVar13[0x2086] = '\0';
    pcVar13[0x2087] = '\0';
    pcVar13[0x2078] = '\0';
    pcVar13[0x2079] = '\0';
    pcVar13[0x207a] = '\0';
    pcVar13[0x207b] = '\0';
    pcVar13[0x207c] = '\0';
    pcVar13[0x207d] = '\0';
    pcVar13[0x207e] = '\0';
    pcVar13[0x207f] = '\0';
    pcVar13[0x2070] = '\0';
    pcVar13[0x2071] = '\0';
    pcVar13[0x2072] = '\0';
    pcVar13[0x2073] = '\0';
    pcVar13[0x2074] = '\0';
    pcVar13[0x2075] = '\0';
    pcVar13[0x2076] = '\0';
    pcVar13[0x2077] = '\0';
    pcVar13[0x2068] = '\0';
    pcVar13[0x2069] = '\0';
    pcVar13[0x206a] = '\0';
    pcVar13[0x206b] = '\0';
    pcVar13[0x206c] = '\0';
    pcVar13[0x206d] = '\0';
    pcVar13[0x206e] = '\0';
    pcVar13[0x206f] = '\0';
    pcVar13[0x2060] = '\0';
    pcVar13[0x2061] = '\0';
    pcVar13[0x2062] = '\0';
    pcVar13[0x2063] = '\0';
    pcVar13[0x2064] = '\0';
    pcVar13[0x2065] = '\0';
    pcVar13[0x2066] = '\0';
    pcVar13[0x2067] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x20a0));
    pcVar13[0x20f0] = -1;
    pcVar13[0x20f1] = -1;
    pcVar13[0x20f2] = -1;
    pcVar13[0x20f3] = -1;
    pcVar13[0x20f4] = -1;
    pcVar13[0x20f5] = -1;
    pcVar13[0x20f6] = -1;
    pcVar13[0x20f7] = -1;
    *(undefined ***)(pcVar13 + 0x20e8) = &PTR_FUN_7105182f40;
    pcVar13[0x20f8] = '\0';
    pcVar13[0x20f9] = '\0';
    pcVar13[0x20fa] = '\0';
    pcVar13[0x20fb] = '\0';
    *(undefined ***)(pcVar13 + 0x1f78) = &PTR_FUN_7105238b48;
    pcVar13[0x2108] = '\0';
    memset(pcVar13 + 0x2110,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x2120));
    pcVar13[0x2230] = '\0';
    pcVar13[0x2231] = '\0';
    pcVar13[0x2232] = '\0';
    pcVar13[0x2233] = '\0';
    pcVar13[0x2234] = '\0';
    pcVar13[0x2235] = '\0';
    pcVar13[0x2236] = '\0';
    pcVar13[0x2237] = '\0';
    pcVar13[0x2228] = '\0';
    pcVar13[0x2229] = '\0';
    pcVar13[0x222a] = '\0';
    pcVar13[0x222b] = '\0';
    pcVar13[0x222c] = '\0';
    pcVar13[0x222d] = '\0';
    pcVar13[0x222e] = '\0';
    pcVar13[0x222f] = '\0';
    pcVar13[0x2220] = '\0';
    pcVar13[0x2221] = '\0';
    pcVar13[0x2222] = '\0';
    pcVar13[0x2223] = '\0';
    pcVar13[0x2224] = '\0';
    pcVar13[0x2225] = '\0';
    pcVar13[0x2226] = '\0';
    pcVar13[0x2227] = '\0';
    pcVar13[0x2218] = '\0';
    pcVar13[0x2219] = '\0';
    pcVar13[0x221a] = '\0';
    pcVar13[0x221b] = '\0';
    pcVar13[0x221c] = '\0';
    pcVar13[0x221d] = '\0';
    pcVar13[0x221e] = '\0';
    pcVar13[0x221f] = '\0';
    pcVar13[0x2210] = '\0';
    pcVar13[0x2211] = '\0';
    pcVar13[0x2212] = '\0';
    pcVar13[0x2213] = '\0';
    pcVar13[0x2214] = '\0';
    pcVar13[0x2215] = '\0';
    pcVar13[0x2216] = '\0';
    pcVar13[0x2217] = '\0';
    pcVar13[0x2208] = '\0';
    pcVar13[0x2209] = '\0';
    pcVar13[0x220a] = '\0';
    pcVar13[0x220b] = '\0';
    pcVar13[0x220c] = '\0';
    pcVar13[0x220d] = '\0';
    pcVar13[0x220e] = '\0';
    pcVar13[0x220f] = '\0';
    pcVar13[0x2200] = '\0';
    pcVar13[0x2201] = '\0';
    pcVar13[0x2202] = '\0';
    pcVar13[0x2203] = '\0';
    pcVar13[0x2204] = '\0';
    pcVar13[0x2205] = '\0';
    pcVar13[0x2206] = '\0';
    pcVar13[0x2207] = '\0';
    pcVar13[0x21f8] = '\0';
    pcVar13[0x21f9] = '\0';
    pcVar13[0x21fa] = '\0';
    pcVar13[0x21fb] = '\0';
    pcVar13[0x21fc] = '\0';
    pcVar13[0x21fd] = '\0';
    pcVar13[0x21fe] = '\0';
    pcVar13[0x21ff] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x2238));
    param_3 = &DAT_00000188;
    pcVar13[0x2288] = -1;
    pcVar13[0x2289] = -1;
    pcVar13[0x228a] = -1;
    pcVar13[0x228b] = -1;
    pcVar13[0x228c] = -1;
    pcVar13[0x228d] = -1;
    pcVar13[0x228e] = -1;
    pcVar13[0x228f] = -1;
    *(undefined ***)(pcVar13 + 0x2280) = &PTR_FUN_7105182f40;
    pcVar13[0x2290] = '\0';
    pcVar13[0x2291] = '\0';
    pcVar13[0x2292] = '\0';
    pcVar13[0x2293] = '\0';
    *(undefined ***)(pcVar13 + 0x2110) = &PTR_FUN_7105238b48;
    pcVar13[0x22a0] = '\0';
    memset(pcVar13 + 0x22a8,0,0x188);
    FUN_710003a0e0((undefined8 *)(pcVar13 + 0x22b8));
    pcVar13[0x23c8] = '\0';
    pcVar13[0x23c9] = '\0';
    pcVar13[0x23ca] = '\0';
    pcVar13[0x23cb] = '\0';
    pcVar13[0x23cc] = '\0';
    pcVar13[0x23cd] = '\0';
    pcVar13[0x23ce] = '\0';
    pcVar13[0x23cf] = '\0';
    pcVar13[0x23c0] = '\0';
    pcVar13[0x23c1] = '\0';
    pcVar13[0x23c2] = '\0';
    pcVar13[0x23c3] = '\0';
    pcVar13[0x23c4] = '\0';
    pcVar13[0x23c5] = '\0';
    pcVar13[0x23c6] = '\0';
    pcVar13[0x23c7] = '\0';
    pcVar13[0x23b8] = '\0';
    pcVar13[0x23b9] = '\0';
    pcVar13[0x23ba] = '\0';
    pcVar13[0x23bb] = '\0';
    pcVar13[0x23bc] = '\0';
    pcVar13[0x23bd] = '\0';
    pcVar13[0x23be] = '\0';
    pcVar13[0x23bf] = '\0';
    pcVar13[0x23b0] = '\0';
    pcVar13[0x23b1] = '\0';
    pcVar13[0x23b2] = '\0';
    pcVar13[0x23b3] = '\0';
    pcVar13[0x23b4] = '\0';
    pcVar13[0x23b5] = '\0';
    pcVar13[0x23b6] = '\0';
    pcVar13[0x23b7] = '\0';
    pcVar13[0x23a8] = '\0';
    pcVar13[0x23a9] = '\0';
    pcVar13[0x23aa] = '\0';
    pcVar13[0x23ab] = '\0';
    pcVar13[0x23ac] = '\0';
    pcVar13[0x23ad] = '\0';
    pcVar13[0x23ae] = '\0';
    pcVar13[0x23af] = '\0';
    pcVar13[0x23a0] = '\0';
    pcVar13[0x23a1] = '\0';
    pcVar13[0x23a2] = '\0';
    pcVar13[0x23a3] = '\0';
    pcVar13[0x23a4] = '\0';
    pcVar13[0x23a5] = '\0';
    pcVar13[0x23a6] = '\0';
    pcVar13[0x23a7] = '\0';
    pcVar13[0x2398] = '\0';
    pcVar13[0x2399] = '\0';
    pcVar13[0x239a] = '\0';
    pcVar13[0x239b] = '\0';
    pcVar13[0x239c] = '\0';
    pcVar13[0x239d] = '\0';
    pcVar13[0x239e] = '\0';
    pcVar13[0x239f] = '\0';
    pcVar13[0x2390] = '\0';
    pcVar13[0x2391] = '\0';
    pcVar13[0x2392] = '\0';
    pcVar13[0x2393] = '\0';
    pcVar13[0x2394] = '\0';
    pcVar13[0x2395] = '\0';
    pcVar13[0x2396] = '\0';
    pcVar13[0x2397] = '\0';
    FUN_710003a240((undefined8 *)(pcVar13 + 0x23d0));
    *(undefined ***)(pcVar13 + 0x2418) = &PTR_FUN_7105182f40;
    pcVar13[0x2420] = -1;
    pcVar13[0x2421] = -1;
    pcVar13[0x2422] = -1;
    pcVar13[0x2423] = -1;
    pcVar13[0x2424] = -1;
    pcVar13[0x2425] = -1;
    pcVar13[0x2426] = -1;
    pcVar13[0x2427] = -1;
    pcVar13[0x2428] = '\0';
    pcVar13[0x2429] = '\0';
    pcVar13[0x242a] = '\0';
    pcVar13[0x242b] = '\0';
    *(undefined ***)(pcVar13 + 0x22a8) = &PTR_FUN_7105238b48;
    pcVar13[8] = '\0';
    pcVar13[0x18] = -1;
    pcVar13[0x19] = -1;
    pcVar13[0x1a] = -1;
    pcVar13[0x1b] = -1;
    FUN_7100031330((long)pcVar23);
    pcVar13[400] = '\x01';
    pcVar13[0x191] = '\0';
    pcVar13[0x192] = '\x01';
    pcVar13[0x193] = '\0';
    pcVar13[0x188] = -1;
    pcVar13[0x189] = -1;
    pcVar13[0x18a] = -1;
    pcVar13[0x18b] = -1;
    pcVar13[0x18c] = -1;
    pcVar13[0x18d] = -1;
    pcVar13[0x18e] = -1;
    pcVar13[399] = -1;
    pcVar13[0x198] = '\0';
    pcVar13[0x1a8] = -1;
    pcVar13[0x1a9] = -1;
    pcVar13[0x1aa] = -1;
    pcVar13[0x1ab] = -1;
    FUN_7100031330((long)(pcVar13 + 0x288));
    pcVar13[800] = '\x01';
    pcVar13[0x321] = '\0';
    pcVar13[0x322] = '\x01';
    pcVar13[0x323] = '\0';
    pcVar13[0x318] = -1;
    pcVar13[0x319] = -1;
    pcVar13[0x31a] = -1;
    pcVar13[0x31b] = -1;
    pcVar13[0x31c] = -1;
    pcVar13[0x31d] = -1;
    pcVar13[0x31e] = -1;
    pcVar13[799] = -1;
    pcVar13[0x328] = '\0';
    pcVar13[0x338] = -1;
    pcVar13[0x339] = -1;
    pcVar13[0x33a] = -1;
    pcVar13[0x33b] = -1;
    FUN_7100031330((long)(pcVar13 + 0x418));
    pcVar13[0x4b0] = '\x01';
    pcVar13[0x4b1] = '\0';
    pcVar13[0x4b2] = '\x01';
    pcVar13[0x4b3] = '\0';
    pcVar13[0x4a8] = -1;
    pcVar13[0x4a9] = -1;
    pcVar13[0x4aa] = -1;
    pcVar13[0x4ab] = -1;
    pcVar13[0x4ac] = -1;
    pcVar13[0x4ad] = -1;
    pcVar13[0x4ae] = -1;
    pcVar13[0x4af] = -1;
    pcVar13[0x4b8] = '\0';
    pcVar13[0x4c8] = -1;
    pcVar13[0x4c9] = -1;
    pcVar13[0x4ca] = -1;
    pcVar13[0x4cb] = -1;
    FUN_7100031330((long)(pcVar13 + 0x5a8));
    pcVar13[0x640] = '\x01';
    pcVar13[0x641] = '\0';
    pcVar13[0x642] = '\x01';
    pcVar13[0x643] = '\0';
    pcVar13[0x638] = -1;
    pcVar13[0x639] = -1;
    pcVar13[0x63a] = -1;
    pcVar13[0x63b] = -1;
    pcVar13[0x63c] = -1;
    pcVar13[0x63d] = -1;
    pcVar13[0x63e] = -1;
    pcVar13[0x63f] = -1;
    pcVar13[0x648] = '\0';
    pcVar13[0x658] = -1;
    pcVar13[0x659] = -1;
    pcVar13[0x65a] = -1;
    pcVar13[0x65b] = -1;
    FUN_7100031330((long)(pcVar13 + 0x738));
    pcVar13[2000] = '\x01';
    pcVar13[0x7d1] = '\0';
    pcVar13[0x7d2] = '\x01';
    pcVar13[0x7d3] = '\0';
    pcVar13[0x7c8] = -1;
    pcVar13[0x7c9] = -1;
    pcVar13[0x7ca] = -1;
    pcVar13[0x7cb] = -1;
    pcVar13[0x7cc] = -1;
    pcVar13[0x7cd] = -1;
    pcVar13[0x7ce] = -1;
    pcVar13[1999] = -1;
    pcVar13[0x7d8] = '\0';
    pcVar13[0x7e8] = -1;
    pcVar13[0x7e9] = -1;
    pcVar13[0x7ea] = -1;
    pcVar13[0x7eb] = -1;
    FUN_7100031330((long)(pcVar13 + 0x8c8));
    pcVar13[0x960] = '\x01';
    pcVar13[0x961] = '\0';
    pcVar13[0x962] = '\x01';
    pcVar13[0x963] = '\0';
    pcVar13[0x958] = -1;
    pcVar13[0x959] = -1;
    pcVar13[0x95a] = -1;
    pcVar13[0x95b] = -1;
    pcVar13[0x95c] = -1;
    pcVar13[0x95d] = -1;
    pcVar13[0x95e] = -1;
    pcVar13[0x95f] = -1;
    pcVar13[0x968] = '\0';
    pcVar13[0x978] = -1;
    pcVar13[0x979] = -1;
    pcVar13[0x97a] = -1;
    pcVar13[0x97b] = -1;
    FUN_7100031330((long)(pcVar13 + 0xa58));
    pcVar13[0xaf0] = '\x01';
    pcVar13[0xaf1] = '\0';
    pcVar13[0xaf2] = '\x01';
    pcVar13[0xaf3] = '\0';
    pcVar13[0xae8] = -1;
    pcVar13[0xae9] = -1;
    pcVar13[0xaea] = -1;
    pcVar13[0xaeb] = -1;
    pcVar13[0xaec] = -1;
    pcVar13[0xaed] = -1;
    pcVar13[0xaee] = -1;
    pcVar13[0xaef] = -1;
    pcVar13[0xaf8] = '\0';
    pcVar13[0xb08] = -1;
    pcVar13[0xb09] = -1;
    pcVar13[0xb0a] = -1;
    pcVar13[0xb0b] = -1;
    FUN_7100031330((long)(pcVar13 + 0xbe8));
    pcVar13[0xc80] = '\x01';
    pcVar13[0xc81] = '\0';
    pcVar13[0xc82] = '\x01';
    pcVar13[0xc83] = '\0';
    pcVar13[0xc78] = -1;
    pcVar13[0xc79] = -1;
    pcVar13[0xc7a] = -1;
    pcVar13[0xc7b] = -1;
    pcVar13[0xc7c] = -1;
    pcVar13[0xc7d] = -1;
    pcVar13[0xc7e] = -1;
    pcVar13[0xc7f] = -1;
    pcVar13[0xc90] = '\0';
    pcVar13[0xca0] = -1;
    pcVar13[0xca1] = -1;
    pcVar13[0xca2] = -1;
    pcVar13[0xca3] = -1;
    FUN_7100031330((long)(pcVar13 + 0xd80));
    pcVar13[0xe18] = '\x01';
    pcVar13[0xe19] = '\0';
    pcVar13[0xe1a] = '\x01';
    pcVar13[0xe1b] = '\0';
    pcVar13[0xe10] = -1;
    pcVar13[0xe11] = -1;
    pcVar13[0xe12] = -1;
    pcVar13[0xe13] = -1;
    pcVar13[0xe14] = -1;
    pcVar13[0xe15] = -1;
    pcVar13[0xe16] = -1;
    pcVar13[0xe17] = -1;
    pcVar13[0xe20] = '\0';
    pcVar13[0xe30] = -1;
    pcVar13[0xe31] = -1;
    pcVar13[0xe32] = -1;
    pcVar13[0xe33] = -1;
    FUN_7100031330((long)(pcVar13 + 0xf10));
    pcVar13[0xfa8] = '\x01';
    pcVar13[0xfa9] = '\0';
    pcVar13[0xfaa] = '\x01';
    pcVar13[0xfab] = '\0';
    pcVar13[4000] = -1;
    pcVar13[0xfa1] = -1;
    pcVar13[0xfa2] = -1;
    pcVar13[0xfa3] = -1;
    pcVar13[0xfa4] = -1;
    pcVar13[0xfa5] = -1;
    pcVar13[0xfa6] = -1;
    pcVar13[0xfa7] = -1;
    pcVar13[0xfb0] = '\0';
    pcVar13[0xfc0] = -1;
    pcVar13[0xfc1] = -1;
    pcVar13[0xfc2] = -1;
    pcVar13[0xfc3] = -1;
    FUN_7100031330((long)(pcVar13 + 0x10a0));
    pcVar13[0x1138] = '\x01';
    pcVar13[0x1139] = '\0';
    pcVar13[0x113a] = '\x01';
    pcVar13[0x113b] = '\0';
    pcVar13[0x1130] = -1;
    pcVar13[0x1131] = -1;
    pcVar13[0x1132] = -1;
    pcVar13[0x1133] = -1;
    pcVar13[0x1134] = -1;
    pcVar13[0x1135] = -1;
    pcVar13[0x1136] = -1;
    pcVar13[0x1137] = -1;
    pcVar13[0x1140] = '\0';
    pcVar13[0x1150] = -1;
    pcVar13[0x1151] = -1;
    pcVar13[0x1152] = -1;
    pcVar13[0x1153] = -1;
    FUN_7100031330((long)(pcVar13 + 0x1230));
    pcVar13[0x12c8] = '\x01';
    pcVar13[0x12c9] = '\0';
    pcVar13[0x12ca] = '\x01';
    pcVar13[0x12cb] = '\0';
    pcVar13[0x12c0] = -1;
    pcVar13[0x12c1] = -1;
    pcVar13[0x12c2] = -1;
    pcVar13[0x12c3] = -1;
    pcVar13[0x12c4] = -1;
    pcVar13[0x12c5] = -1;
    pcVar13[0x12c6] = -1;
    pcVar13[0x12c7] = -1;
    pcVar13[0x12d0] = '\0';
    pcVar13[0x12e0] = -1;
    pcVar13[0x12e1] = -1;
    pcVar13[0x12e2] = -1;
    pcVar13[0x12e3] = -1;
    FUN_7100031330((long)(pcVar13 + 0x13c0));
    pcVar13[0x1458] = '\x01';
    pcVar13[0x1459] = '\0';
    pcVar13[0x145a] = '\x01';
    pcVar13[0x145b] = '\0';
    pcVar13[0x1450] = -1;
    pcVar13[0x1451] = -1;
    pcVar13[0x1452] = -1;
    pcVar13[0x1453] = -1;
    pcVar13[0x1454] = -1;
    pcVar13[0x1455] = -1;
    pcVar13[0x1456] = -1;
    pcVar13[0x1457] = -1;
    pcVar13[0x1460] = '\0';
    pcVar13[0x1470] = -1;
    pcVar13[0x1471] = -1;
    pcVar13[0x1472] = -1;
    pcVar13[0x1473] = -1;
    FUN_7100031330((long)(pcVar13 + 0x1550));
    pcVar13[0x15e8] = '\x01';
    pcVar13[0x15e9] = '\0';
    pcVar13[0x15ea] = '\x01';
    pcVar13[0x15eb] = '\0';
    pcVar13[0x15e0] = -1;
    pcVar13[0x15e1] = -1;
    pcVar13[0x15e2] = -1;
    pcVar13[0x15e3] = -1;
    pcVar13[0x15e4] = -1;
    pcVar13[0x15e5] = -1;
    pcVar13[0x15e6] = -1;
    pcVar13[0x15e7] = -1;
    pcVar13[0x15f0] = '\0';
    pcVar13[0x1600] = -1;
    pcVar13[0x1601] = -1;
    pcVar13[0x1602] = -1;
    pcVar13[0x1603] = -1;
    FUN_7100031330((long)(pcVar13 + 0x16e0));
    pcVar13[0x1778] = '\x01';
    pcVar13[0x1779] = '\0';
    pcVar13[0x177a] = '\x01';
    pcVar13[0x177b] = '\0';
    pcVar13[6000] = -1;
    pcVar13[0x1771] = -1;
    pcVar13[0x1772] = -1;
    pcVar13[0x1773] = -1;
    pcVar13[0x1774] = -1;
    pcVar13[0x1775] = -1;
    pcVar13[0x1776] = -1;
    pcVar13[0x1777] = -1;
    pcVar13[0x1788] = '\0';
    pcVar13[0x1798] = -1;
    pcVar13[0x1799] = -1;
    pcVar13[0x179a] = -1;
    pcVar13[0x179b] = -1;
    FUN_7100031330((long)(pcVar13 + 0x1878));
    pcVar13[0x1910] = '\x01';
    pcVar13[0x1911] = '\0';
    pcVar13[0x1912] = '\x01';
    pcVar13[0x1913] = '\0';
    pcVar13[0x1908] = -1;
    pcVar13[0x1909] = -1;
    pcVar13[0x190a] = -1;
    pcVar13[0x190b] = -1;
    pcVar13[0x190c] = -1;
    pcVar13[0x190d] = -1;
    pcVar13[0x190e] = -1;
    pcVar13[0x190f] = -1;
    pcVar13[0x1920] = '\0';
    pcVar13[0x1930] = -1;
    pcVar13[0x1931] = -1;
    pcVar13[0x1932] = -1;
    pcVar13[0x1933] = -1;
    FUN_7100031330((long)(pcVar13 + 0x1a10));
    pcVar13[0x1aa8] = '\x01';
    pcVar13[0x1aa9] = '\0';
    pcVar13[0x1aaa] = '\x01';
    pcVar13[0x1aab] = '\0';
    pcVar13[0x1aa0] = -1;
    pcVar13[0x1aa1] = -1;
    pcVar13[0x1aa2] = -1;
    pcVar13[0x1aa3] = -1;
    pcVar13[0x1aa4] = -1;
    pcVar13[0x1aa5] = -1;
    pcVar13[0x1aa6] = -1;
    pcVar13[0x1aa7] = -1;
    pcVar13[0x1ab0] = '\0';
    pcVar13[0x1ac0] = -1;
    pcVar13[0x1ac1] = -1;
    pcVar13[0x1ac2] = -1;
    pcVar13[0x1ac3] = -1;
    FUN_7100031330((long)(pcVar13 + 0x1ba0));
    pcVar13[0x1c38] = '\x01';
    pcVar13[0x1c39] = '\0';
    pcVar13[0x1c3a] = '\x01';
    pcVar13[0x1c3b] = '\0';
    pcVar13[0x1c30] = -1;
    pcVar13[0x1c31] = -1;
    pcVar13[0x1c32] = -1;
    pcVar13[0x1c33] = -1;
    pcVar13[0x1c34] = -1;
    pcVar13[0x1c35] = -1;
    pcVar13[0x1c36] = -1;
    pcVar13[0x1c37] = -1;
    pcVar13[0x1c40] = '\0';
    pcVar13[0x1c50] = -1;
    pcVar13[0x1c51] = -1;
    pcVar13[0x1c52] = -1;
    pcVar13[0x1c53] = -1;
    FUN_7100031330((long)(pcVar13 + 0x1d30));
    pcVar13[0x1dc8] = '\x01';
    pcVar13[0x1dc9] = '\0';
    pcVar13[0x1dca] = '\x01';
    pcVar13[0x1dcb] = '\0';
    pcVar13[0x1dc0] = -1;
    pcVar13[0x1dc1] = -1;
    pcVar13[0x1dc2] = -1;
    pcVar13[0x1dc3] = -1;
    pcVar13[0x1dc4] = -1;
    pcVar13[0x1dc5] = -1;
    pcVar13[0x1dc6] = -1;
    pcVar13[0x1dc7] = -1;
    pcVar13[0x1dd8] = '\0';
    pcVar13[0x1de8] = -1;
    pcVar13[0x1de9] = -1;
    pcVar13[0x1dea] = -1;
    pcVar13[0x1deb] = -1;
    FUN_7100031330((long)(pcVar13 + 0x1ec8));
    pcVar13[0x1f60] = '\x01';
    pcVar13[0x1f61] = '\0';
    pcVar13[0x1f62] = '\x01';
    pcVar13[0x1f63] = '\0';
    pcVar13[0x1f58] = -1;
    pcVar13[0x1f59] = -1;
    pcVar13[0x1f5a] = -1;
    pcVar13[0x1f5b] = -1;
    pcVar13[0x1f5c] = -1;
    pcVar13[0x1f5d] = -1;
    pcVar13[0x1f5e] = -1;
    pcVar13[0x1f5f] = -1;
    pcVar13[0x1f68] = '\0';
    pcVar13[0x1f70] = '\0';
    pcVar13[0x1f80] = -1;
    pcVar13[0x1f81] = -1;
    pcVar13[0x1f82] = -1;
    pcVar13[0x1f83] = -1;
    FUN_7100031330((long)(pcVar13 + 0x2060));
    pcVar13[0x20f8] = '\x01';
    pcVar13[0x20f9] = '\0';
    pcVar13[0x20fa] = '\x01';
    pcVar13[0x20fb] = '\0';
    pcVar13[0x20f0] = -1;
    pcVar13[0x20f1] = -1;
    pcVar13[0x20f2] = -1;
    pcVar13[0x20f3] = -1;
    pcVar13[0x20f4] = -1;
    pcVar13[0x20f5] = -1;
    pcVar13[0x20f6] = -1;
    pcVar13[0x20f7] = -1;
    pcVar13[0x2100] = '\0';
    pcVar13[0x2108] = '\0';
    pcVar13[0x2118] = -1;
    pcVar13[0x2119] = -1;
    pcVar13[0x211a] = -1;
    pcVar13[0x211b] = -1;
    FUN_7100031330((long)(pcVar13 + 0x21f8));
    pcVar13[0x2290] = '\x01';
    pcVar13[0x2291] = '\0';
    pcVar13[0x2292] = '\x01';
    pcVar13[0x2293] = '\0';
    pcVar13[0x2288] = -1;
    pcVar13[0x2289] = -1;
    pcVar13[0x228a] = -1;
    pcVar13[0x228b] = -1;
    pcVar13[0x228c] = -1;
    pcVar13[0x228d] = -1;
    pcVar13[0x228e] = -1;
    pcVar13[0x228f] = -1;
    pcVar13[0x2298] = '\0';
    pcVar13[0x22a0] = '\0';
    pcVar13[0x22b0] = -1;
    pcVar13[0x22b1] = -1;
    pcVar13[0x22b2] = -1;
    pcVar13[0x22b3] = -1;
    FUN_7100031330((long)(pcVar13 + 0x2390));
    pcVar13[0x2428] = '\x01';
    pcVar13[0x2429] = '\0';
    pcVar13[0x242a] = '\x01';
    pcVar13[0x242b] = '\0';
    pcVar13[0x2420] = -1;
    pcVar13[0x2421] = -1;
    pcVar13[0x2422] = -1;
    pcVar13[0x2423] = -1;
    pcVar13[0x2424] = -1;
    pcVar13[0x2425] = -1;
    pcVar13[0x2426] = -1;
    pcVar13[0x2427] = -1;
    cVar3 = *pcVar13;
  }
  else {
    cVar3 = *DAT_71053396a0;
    pcVar13 = DAT_71053396a0;
  }
  DAT_71053396a0 = pcVar13;
  if (cVar3 == '\0') {
    if (pcVar13[8] == '\0') {
      if ((*(long **)(DAT_7105338f68 + 0x60) == *(long **)(DAT_7105338f68 + 0x58)) ||
         (lVar10 = **(long **)(DAT_7105338f68 + 0x58), lVar10 == 0)) {
        lVar10 = *(long *)(DAT_7105338f68 + 0x28);
      }
      uVar22 = FUN_71035b9920((long)(pcVar13 + 0x18),lVar10);
      uVar30 = (uint)uVar22 & 1;
      pcVar13[8] = (char)uVar30;
      if (pcVar13[0x198] == '\0') goto LAB_710375cda0;
LAB_710375c128:
      uVar15 = 1;
    }
    else {
      uVar30 = 1;
      if (pcVar13[0x198] != '\0') goto LAB_710375c128;
LAB_710375cda0:
      if (((ulong)(*(long *)(DAT_7105338f68 + 0x60) - *(long *)(DAT_7105338f68 + 0x58) >> 3) < 2) ||
         (lVar10 = *(long *)(*(long *)(DAT_7105338f68 + 0x58) + 8), lVar10 == 0)) {
        lVar10 = *(long *)(DAT_7105338f68 + 0x28);
      }
      uVar22 = FUN_71035b9920((long)(pcVar13 + 0x1a8),lVar10);
      uVar15 = (uint)uVar22 & 1;
      pcVar13[0x198] = (char)uVar15;
    }
    if (pcVar13[0x328] == '\0') {
      if (((ulong)(*(long *)(DAT_7105338f68 + 0x60) - *(long *)(DAT_7105338f68 + 0x58) >> 3) < 3) ||
         (lVar10 = *(long *)(*(long *)(DAT_7105338f68 + 0x58) + 0x10), lVar10 == 0)) {
        lVar10 = *(long *)(DAT_7105338f68 + 0x28);
      }
      uVar22 = FUN_71035b9920((long)(pcVar13 + 0x338),lVar10);
      uVar16 = (uint)uVar22 & 1;
      pcVar13[0x328] = (char)uVar16;
    }
    else {
      uVar16 = 1;
    }
    if (pcVar13[0x4b8] == '\0') {
      if (((ulong)(*(long *)(DAT_7105338f68 + 0x60) - *(long *)(DAT_7105338f68 + 0x58) >> 3) < 4) ||
         (lVar10 = *(long *)(*(long *)(DAT_7105338f68 + 0x58) + 0x18), lVar10 == 0)) {
        lVar10 = *(long *)(DAT_7105338f68 + 0x28);
      }
      uVar22 = FUN_71035b9920((long)(pcVar13 + 0x4c8),lVar10);
      uVar17 = (uint)uVar22 & 1;
      pcVar13[0x4b8] = (char)uVar17;
    }
    else {
      uVar17 = 1;
    }
    if (pcVar13[0x648] == '\0') {
      if (((ulong)(*(long *)(DAT_7105338f68 + 0x60) - *(long *)(DAT_7105338f68 + 0x58) >> 3) < 5) ||
         (lVar10 = *(long *)(*(long *)(DAT_7105338f68 + 0x58) + 0x20), lVar10 == 0)) {
        lVar10 = *(long *)(DAT_7105338f68 + 0x28);
      }
      uVar22 = FUN_71035b9920((long)(pcVar13 + 0x658),lVar10);
      uVar18 = (uint)uVar22 & 1;
      pcVar13[0x648] = (char)uVar18;
    }
    else {
      uVar18 = 1;
    }
    if (pcVar13[0x7d8] == '\0') {
      if (((ulong)(*(long *)(DAT_7105338f68 + 0x60) - *(long *)(DAT_7105338f68 + 0x58) >> 3) < 6) ||
         (lVar10 = *(long *)(*(long *)(DAT_7105338f68 + 0x58) + 0x28), lVar10 == 0)) {
        lVar10 = *(long *)(DAT_7105338f68 + 0x28);
      }
      uVar22 = FUN_71035b9920((long)(pcVar13 + 0x7e8),lVar10);
      uVar19 = (uint)uVar22 & 1;
      pcVar13[0x7d8] = (char)uVar19;
    }
    else {
      uVar19 = 1;
    }
    if (pcVar13[0x968] == '\0') {
      if (((ulong)(*(long *)(DAT_7105338f68 + 0x60) - *(long *)(DAT_7105338f68 + 0x58) >> 3) < 7) ||
         (lVar10 = *(long *)(*(long *)(DAT_7105338f68 + 0x58) + 0x30), lVar10 == 0)) {
        lVar10 = *(long *)(DAT_7105338f68 + 0x28);
      }
      uVar22 = FUN_71035b9920((long)(pcVar13 + 0x978),lVar10);
      uVar20 = (uint)uVar22 & 1;
      pcVar13[0x968] = (char)uVar20;
    }
    else {
      uVar20 = 1;
    }
    if (pcVar13[0xaf8] == '\0') {
      if (((ulong)(*(long *)(DAT_7105338f68 + 0x60) - *(long *)(DAT_7105338f68 + 0x58) >> 3) < 8) ||
         (lVar10 = *(long *)(*(long *)(DAT_7105338f68 + 0x58) + 0x38), lVar10 == 0)) {
        lVar10 = *(long *)(DAT_7105338f68 + 0x28);
      }
      uVar22 = FUN_71035b9920((long)(pcVar13 + 0xb08),lVar10);
      uVar21 = (uint)uVar22 & 1;
      pcVar13[0xaf8] = (char)uVar21;
    }
    else {
      uVar21 = 1;
    }
    if (uVar20 + uVar30 + uVar15 + uVar16 + uVar17 + uVar18 + uVar19 + uVar21 == 8) {
      *pcVar13 = '\x01';
    }
  }
  pcVar13 = DAT_71053396a0;
  plVar9 = DAT_7105338f70;
  if (DAT_71053396a0[0xc88] == '\0') {
    lVar10 = 0;
    iVar35 = 0;
    do {
      if (pcVar13[lVar10 * 400 + 0xc90] == '\0') {
        std::to_string((int)lVar10 + 2);
        param_3 = "FB_MELEE_RESULT_RANK";
        puVar5 = (undefined8 *)std::string::insert((ulong)&local_230,(char *)0x0);
        ppplVar2 = (long ***)*puVar5;
        local_1e8 = puVar5[1];
        pbVar29 = (byte *)puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        pbVar27 = (byte *)((ulong)&local_1f0 | 1);
        if (((ulong)ppplVar2 & 1) != 0) {
          pbVar27 = pbVar29;
        }
        uVar30 = (uint)*pbVar27;
        if (*pbVar27 == 0) {
          uVar28 = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          uVar15 = 0xffffffff;
          do {
            pbVar27 = pbVar27 + 1;
            uVar16 = uVar30 + 0x20;
            if (0x19 < uVar30 - 0x41) {
              uVar16 = uVar30;
            }
            uVar15 = (&DAT_7104754084)[(uVar16 ^ uVar15) & 0xff] ^ uVar15 >> 8;
            uVar30 = (uint)*pbVar27;
            uVar6 = uVar6 + 0x100000000;
          } while (uVar30 != 0);
          uVar28 = (ulong)~uVar15;
          uVar6 = uVar6 & 0xff00000000;
        }
        local_1f0 = ppplVar2;
        local_1e0 = pbVar29;
        lVar26 = FUN_7103720840(plVar9,uVar6 | uVar28);
        if ((((ulong)ppplVar2 & 1) != 0) && (pbVar29 != (byte *)0x0)) {
          FUN_710392eb40((ulong)pbVar29);
        }
        if (((local_230 & 1) != 0) && (CONCAT44(uStack_21c,local_220) != 0)) {
          FUN_710392eb40(CONCAT44(uStack_21c,local_220));
        }
        uVar22 = FUN_71035b9920((long)(pcVar13 + lVar10 * 400 + 0xca0),lVar26);
        uVar30 = (uint)uVar22 & 1;
        pcVar13[lVar10 * 400 + 0xc90] = (char)uVar30;
      }
      else {
        uVar30 = 1;
      }
      lVar10 = lVar10 + 1;
      iVar35 = iVar35 + uVar30;
    } while (lVar10 != 7);
    if (iVar35 == 7) {
      pcVar13[0xc88] = '\x01';
    }
  }
  pcVar23 = DAT_71053396a0;
  pcVar13 = DAT_71053396a0 + 0x1780;
  if (*pcVar13 == '\0') {
    pbVar27 = (byte *)(DAT_71053396a0 + 0x1788);
    if (*pbVar27 == 0) {
      lVar10 = FUN_7103720840(DAT_7105338f70,0x14a0a19a96);
      uVar6 = FUN_71035b9920((long)(pcVar23 + 0x1798),lVar10);
      *pbVar27 = (byte)uVar6 & 1;
      if ((uVar6 & 1) == 0) goto LAB_710375d180;
    }
    *pcVar13 = '\x01';
  }
LAB_710375d180:
  pcVar23 = DAT_71053396a0;
  pcVar13 = DAT_71053396a0 + 0x2298;
  if (*pcVar13 == '\0') {
    pbVar27 = (byte *)(DAT_71053396a0 + 0x22a0);
    if (*pbVar27 == 0) {
      lVar10 = FUN_7103720840(DAT_7105338f70,0x9644668f1);
      uVar6 = FUN_71035b9920((long)(pcVar23 + 0x22b0),lVar10);
      *pbVar27 = (byte)uVar6 & 1;
      if ((uVar6 & 1) == 0) goto LAB_710375d1e0;
    }
    *pcVar13 = '\x01';
  }
LAB_710375d1e0:
  pcVar23 = DAT_71053396a0;
  plVar9 = DAT_7105338f70;
  pcVar13 = DAT_71053396a0 + 0x1918;
  if (*pcVar13 == '\0') {
    pbVar27 = (byte *)(DAT_71053396a0 + 0x1920);
    if (*pbVar27 == 0) {
      lVar10 = FUN_7103720840(DAT_7105338f70,0x11a7dca360);
      uVar22 = FUN_71035b9920((long)(pcVar23 + 0x1930),lVar10);
      uVar30 = (uint)uVar22;
      *pbVar27 = (byte)uVar22 & 1;
      if (pcVar23[0x1ab0] == '\0') goto LAB_710375d258;
LAB_710375d218:
      uVar15 = 1;
    }
    else {
      uVar30 = 1;
      if (DAT_71053396a0[0x1ab0] != '\0') goto LAB_710375d218;
LAB_710375d258:
      lVar10 = FUN_7103720840(plVar9,0x1627e6712f);
      uVar22 = FUN_71035b9920((long)(pcVar23 + 0x1ac0),lVar10);
      uVar15 = (uint)uVar22;
      pcVar23[0x1ab0] = (byte)uVar22 & 1;
    }
    uVar30 = uVar30 & uVar15;
    if (pcVar23[0x1c40] == '\0') {
      lVar10 = FUN_7103720840(plVar9,0x1650e141b9);
      uVar22 = FUN_71035b9920((long)(pcVar23 + 0x1c50),lVar10);
      pcVar23[0x1c40] = (byte)uVar22 & 1;
      uVar30 = uVar30 & (uint)uVar22;
    }
    if ((uVar30 & 1) != 0) {
      *pcVar13 = '\x01';
    }
  }
  pcVar23 = DAT_71053396a0;
  pcVar13 = DAT_71053396a0 + 0x1dd0;
  if (*pcVar13 == '\0') {
    pbVar27 = (byte *)(DAT_71053396a0 + 0x1dd8);
    if (*pbVar27 == 0) {
      lVar10 = FUN_7103720840(DAT_7105338f70,0x714194292);
      uVar6 = FUN_71035b9920((long)(pcVar23 + 0x1de8),lVar10);
      *pbVar27 = (byte)uVar6 & 1;
      if ((uVar6 & 1) == 0) goto LAB_710375d304;
    }
    *pcVar13 = '\x01';
  }
LAB_710375d304:
  pcVar23 = DAT_71053396a0;
  pcVar13 = DAT_71053396a0 + 0x1f68;
  if (*pcVar13 == '\0') {
    pbVar27 = (byte *)(DAT_71053396a0 + 0x1f70);
    if (*pbVar27 == 0) {
      lVar10 = FUN_7103720840(DAT_7105338f70,0x16856080f1);
      uVar6 = FUN_71035b9920((long)(pcVar23 + 0x1f80),lVar10);
      *pbVar27 = (byte)uVar6 & 1;
      if ((uVar6 & 1) == 0) goto LAB_710375d364;
    }
    *pcVar13 = '\x01';
  }
LAB_710375d364:
  pcVar23 = DAT_71053396a0;
  pcVar13 = DAT_71053396a0 + 0x2100;
  if (*pcVar13 == '\0') {
    pbVar27 = (byte *)(DAT_71053396a0 + 0x2108);
    if (*pbVar27 == 0) {
      lVar10 = FUN_7103720840(DAT_7105338f70,0x10dc5188fd);
      uVar6 = FUN_71035b9920((long)(pcVar23 + 0x2118),lVar10);
      *pbVar27 = (byte)uVar6 & 1;
      if ((uVar6 & 1) == 0) goto LAB_710375d3c4;
    }
    *pcVar13 = '\x01';
  }
LAB_710375d3c4:
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x78,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_230 = 0;
      uStack_22f = 0;
      uStack_22e = 0;
      local_1f0 = (long ***)&DAT_00000078;
      pppplVar14 = (long ****)&local_1f0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x78,pppplVar14,param_4,param_5,param_6,param_7,param_8),
         puVar5 != (undefined8 *)0x0)) goto LAB_710375d418;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_710375d418:
  puVar5[0xc] = 0;
  *(undefined1 *)(puVar5 + 0xb) = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  puVar5[2] = &DAT_7105333150;
  puVar5[3] = 0;
  *puVar5 = &PTR_FUN_710523d418;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 0xd) = (undefined4)DAT_71053331b0;
  *(undefined4 *)((long)puVar5 + 0x6c) = DAT_71053331b0._4_4_;
  do {
    uVar30 = _DAT_71053331a0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x71053331a0,0x10);
    if (bVar4) {
      _DAT_71053331a0 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar30 & 1) != 0);
  puVar5[9] = DAT_7105333198;
  local_260 = &local_280;
  _DAT_71053331a0 = 0;
  DAT_7105333198 = puVar5;
  *(undefined1 *)(*DAT_710593ba90 + 0x438) = 0;
  local_280 = &PTR_FUN_710523d448;
  pcStack_278 = FUN_710375d6c0;
  DAT_710523d430 = DAT_710523d00c;
  local_1d0 = &local_1f0;
  FUN_710375e0f0((long)&local_280,&local_1f0);
  plVar9 = local_1d0;
  if (local_1d0 == &local_1f0) {
    if (DAT_710593b4a0 == &DAT_710593b480) {
      (*(code *)local_1f0[3])(local_1d0,&local_230);
      (**(code **)(*local_1d0 + 0x20))();
      local_1d0 = (long *)0x0;
      (**(code **)(*DAT_710593b4a0 + 0x18))(DAT_710593b4a0,&local_1f0);
      (**(code **)(*DAT_710593b4a0 + 0x20))();
      DAT_710593b4a0 = (long *)0x0;
      local_1d0 = &local_1f0;
      (**(code **)(CONCAT44(uStack_22c,CONCAT22(uStack_22e,CONCAT11(uStack_22f,local_230))) + 0x18))
                (&local_230,&DAT_710593b480);
      (**(code **)(CONCAT44(uStack_22c,CONCAT22(uStack_22e,CONCAT11(uStack_22f,local_230))) + 0x20))
                (&local_230);
      DAT_710593b4a0 = &DAT_710593b480;
    }
    else {
      (*(code *)local_1f0[3])(local_1d0,&DAT_710593b480);
      (**(code **)(*local_1d0 + 0x20))();
      local_1d0 = DAT_710593b4a0;
      DAT_710593b4a0 = &DAT_710593b480;
    }
  }
  else if (DAT_710593b4a0 == &DAT_710593b480) {
    (**(code **)(DAT_710593b480 + 0x18))(&DAT_710593b480,&local_1f0);
    (**(code **)(*DAT_710593b4a0 + 0x20))();
    DAT_710593b4a0 = local_1d0;
    local_1d0 = &local_1f0;
  }
  else {
    local_1d0 = DAT_710593b4a0;
    DAT_710593b4a0 = plVar9;
  }
  if (&local_1f0 == local_1d0) {
    pcVar24 = *(code **)(*local_1d0 + 0x20);
  }
  else {
    if (local_1d0 == (long *)0x0) goto LAB_710375d668;
    pcVar24 = *(code **)(*local_1d0 + 0x28);
  }
  (*pcVar24)(local_1d0);
LAB_710375d668:
  if (&local_280 == local_260) {
    pcVar24 = (code *)(*local_260)[4];
  }
  else {
    if (local_260 == (undefined ***)0x0) {
      return;
    }
    pcVar24 = (code *)(*local_260)[5];
  }
  (*pcVar24)();
  return;
}

