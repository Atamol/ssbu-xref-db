// addr:      710007add0
// offset:    0x7add0
// name:      FUN_710007add0
// mangled:   
// signature: undefined FUN_710007add0(void)


undefined4
FUN_710007add0(long param_1,undefined8 *param_2,long param_3,undefined4 param_4,long *param_5,
              long param_6)

{
  undefined1 *puVar1;
  uint6 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  void *__dest;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Font-8_2_1-Release");
  if (*(int *)(param_1 + 0x8c) != 0) {
    return 0;
  }
  *(long *)(param_1 + 0x410) = param_3;
  lVar4 = nn::util::BinaryFileHeader::GetAlignment();
  __dest = (void *)((param_3 + lVar4) - 1U & -lVar4);
  memcpy(__dest,&DAT_7104f41000,0x8438);
  uVar5 = FUN_71000310c0(__dest);
  *(undefined8 *)(param_1 + 8) = uVar5;
  lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_7100037ef0(lVar4,param_2,(undefined8 *)0x0,0);
  lVar12 = *(long *)(lVar4 + 0x20);
  pbVar11 = *(byte **)(lVar12 + DAT_7105230c48);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((pbVar11 == (byte *)0x0) ||
     (iVar3 = FUN_71000382a0(*(undefined1 **)(pbVar11 + 0x68),param_2,pbVar11), iVar3 != 0)) {
    pbVar11 = *(byte **)(lVar12 + DAT_7105230c50);
    if (pbVar11 != (byte *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      iVar3 = FUN_71000382a0(*(undefined1 **)(pbVar11 + 0x68),param_2,pbVar11);
      if (iVar3 == 0) goto LAB_710007aef8;
    }
    pbVar11 = *(byte **)(lVar12 + DAT_7105230c58);
    *(undefined4 *)(param_1 + 0x10) = 2;
    FUN_71000382a0(*(undefined1 **)(pbVar11 + 0x68),param_2,pbVar11);
  }
LAB_710007aef8:
  pbVar11 = *(byte **)(*(long *)(lVar4 + 0x20) + (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] + 0x40
                      );
  FUN_71000382a0(*(undefined1 **)(pbVar11 + 0x68),param_2,pbVar11);
  pbVar11 = *(byte **)(*(long *)(lVar4 + 0x20) + (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] + 0x80
                      );
  FUN_71000382a0(*(undefined1 **)(pbVar11 + 0x68),param_2,pbVar11);
  pbVar11 = *(byte **)(*(long *)(lVar4 + 0x20) + (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] + 0xc0
                      );
  FUN_71000382a0(*(undefined1 **)(pbVar11 + 0x68),param_2,pbVar11);
  pbVar11 = *(byte **)(*(long *)(lVar4 + 0x20) + (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] +
                      0x100);
  FUN_71000382a0(*(undefined1 **)(pbVar11 + 0x68),param_2,pbVar11);
  pbVar11 = *(byte **)(*(long *)(lVar4 + 0x20) + (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] +
                      0x140);
  FUN_71000382a0(*(undefined1 **)(pbVar11 + 0x68),param_2,pbVar11);
  lVar4 = 0;
  puVar9 = (undefined4 *)(param_1 + 0x44);
  do {
    lVar12 = nn::util::BinaryFileHeader::GetFirstBlock();
    lVar14 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) +
                                 (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] + lVar4) + 0x68);
    lVar12 = nn::util::BinaryFileHeader::GetFirstBlock();
    lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) +
                                 (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] + lVar4) + 0x68);
    uVar6 = FUN_7100038e90(lVar14,0,3,"ShaderParam");
    puVar9[-0xc] = (int)uVar6;
    uVar6 = FUN_7100038e90(lVar14,0,4,"PerCharacterParamBlock");
    puVar9[-6] = (int)uVar6;
    uVar6 = FUN_7100038e90(lVar12,4,3,"ShaderParam");
    *puVar9 = (int)uVar6;
    uVar6 = FUN_7100038e90(lVar12,4,3,"ShaderParamBlackWhiteInterpolation");
    puVar9[6] = (int)uVar6;
    uVar6 = FUN_7100038e90(lVar12,4,2,"uTextureSrc");
    lVar4 = lVar4 + 0x40;
    puVar9[0xc] = (int)uVar6;
    puVar9 = puVar9 + 1;
  } while (lVar4 != 0x180);
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  puStack_90 = (undefined8 *)0x0;
  FUN_71000312e0((undefined4 *)&uStack_98);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  pcStack_b0 = (char *)0x0;
  uStack_c0 = 0;
  FUN_71000312b0((undefined1 *)&uStack_c0);
  pcStack_b0 = "aVertex";
  uStack_c0._0_6_ = (uint6)(uint)uStack_c0;
  uStack_b8 = 0x180500000000;
  uStack_d0 = 0;
  uStack_c8 = 0;
  FUN_71000312d0(&uStack_d0);
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0x1c);
  uStack_98 = CONCAT44(uStack_98._4_4_,0x10001);
  puStack_90 = &uStack_c0;
  puStack_88 = &uStack_d0;
  lVar12 = FUN_71000399e0((ushort *)&uStack_98);
  uVar6 = (long)__dest + 0x843fU & 0xfffffffffffffff8;
  uVar10 = (undefined4)lVar12;
  FUN_7100039a70(param_1 + 0x90,uVar6,uVar10);
  lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_7100039a90((undefined1 *)(param_1 + 0x90),param_2,(ushort *)&uStack_98,
                 *(long *)(*(long *)(*(long *)(lVar4 + 0x20) +
                                    (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)]) + 0x68));
  uVar6 = uVar6 + lVar12 + 7 & 0xfffffffffffffff8;
  FUN_7100039a70(param_1 + 0xb0,uVar6,uVar10);
  lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_7100039a90((undefined1 *)(param_1 + 0xb0),param_2,(ushort *)&uStack_98,
                 *(long *)(*(long *)(*(long *)(lVar4 + 0x20) +
                                     (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] + 0x40) + 0x68));
  uVar6 = uVar6 + lVar12 + 7 & 0xfffffffffffffff8;
  FUN_7100039a70(param_1 + 0xd0,uVar6,uVar10);
  lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_7100039a90((undefined1 *)(param_1 + 0xd0),param_2,(ushort *)&uStack_98,
                 *(long *)(*(long *)(*(long *)(lVar4 + 0x20) +
                                     (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] + 0x80) + 0x68));
  uVar6 = uVar6 + lVar12 + 7 & 0xfffffffffffffff8;
  FUN_7100039a70(param_1 + 0xf0,uVar6,uVar10);
  lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_7100039a90((undefined1 *)(param_1 + 0xf0),param_2,(ushort *)&uStack_98,
                 *(long *)(*(long *)(*(long *)(lVar4 + 0x20) +
                                     (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] + 0xc0) + 0x68));
  uVar6 = uVar6 + lVar12 + 7 & 0xfffffffffffffff8;
  FUN_7100039a70(param_1 + 0x110,uVar6,uVar10);
  lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_7100039a90((undefined1 *)(param_1 + 0x110),param_2,(ushort *)&uStack_98,
                 *(long *)(*(long *)(*(long *)(lVar4 + 0x20) +
                                     (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] + 0x100) + 0x68));
  uVar6 = uVar6 + lVar12 + 7 & 0xfffffffffffffff8;
  FUN_7100039a70(param_1 + 0x130,uVar6,uVar10);
  lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_7100039a90((undefined1 *)(param_1 + 0x130),param_2,(ushort *)&uStack_98,
                 *(long *)(*(long *)(*(long *)(lVar4 + 0x20) +
                                     (&DAT_7105230c48)[*(uint *)(param_1 + 0x10)] + 0x140) + 0x68));
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  puStack_90 = (undefined8 *)0x0;
  FUN_7100031140((undefined4 *)&uStack_98);
  uVar2 = (uint6)uStack_98;
  uStack_98 = CONCAT26(0x29,uVar2 & 0xffffffff0000);
  FUN_7100038160((undefined1 *)(param_1 + 0x390),param_2,(byte *)&uStack_98);
  *(undefined8 *)(param_1 + 0x408) = 0xffffffffffffffff;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  puStack_90 = (undefined8 *)0x0;
  FUN_71000310a0(&uStack_98);
  lVar14 = FUN_71000338d0();
  uVar5 = FUN_71000338e0();
  uStack_c0 = 0;
  uStack_b8 = 0;
  lVar4 = 0;
  if (param_5 != (long *)0x0) {
    lVar4 = param_6;
  }
  FUN_7100031070(&uStack_c0);
  uStack_c0 = CONCAT44(8,(uint)uStack_c0);
  lVar7 = FUN_7100031720(param_2,(long)&uStack_c0);
  uStack_c0 = 0;
  uStack_b8 = 0;
  uVar16 = lVar4 + lVar7 + 0x6fU & -lVar7;
  FUN_7100031070(&uStack_c0);
  uStack_c0 = CONCAT44(0x10,(uint)uStack_c0);
  lVar7 = FUN_7100031720(param_2,(long)&uStack_c0);
  uStack_c0 = 0;
  uStack_b8 = 0;
  uVar15 = uVar16 + lVar7 + 0xb & -lVar7;
  FUN_7100031070(&uStack_c0);
  uStack_c0 = CONCAT44(0x10,(uint)uStack_c0);
  lVar7 = FUN_7100031720(param_2,(long)&uStack_c0);
  uVar13 = uVar15 + lVar7 + 3 & -lVar7;
  if (param_5 == (long *)0x0) {
    param_5 = (long *)(param_1 + 0x150);
    puStack_90 = (undefined8 *)((uVar6 + lVar12 + lVar14) - 1 & -lVar14);
    uStack_98 = CONCAT44(~(uint)param_6 + (int)uVar5 + (int)uVar13 + 4 & -(int)uVar5,0x22);
    FUN_7100033920(param_5,param_2,(undefined4 *)&uStack_98);
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_7100031070(&uStack_c0);
  uStack_c0 = 0x400000070;
  FUN_7100031880((undefined1 *)(param_1 + 0x270),param_2,(undefined4 *)&uStack_c0,param_5,lVar4);
  puVar8 = (undefined8 *)FUN_71000319b0(param_1 + 0x270);
  puVar8[2] = 0x3f80000000000000;
  puVar8[3] = 0x3f80000000000000;
  *puVar8 = 0;
  puVar8[1] = 0xffffffff00000000;
  puVar8[4] = 0;
  *(undefined4 *)(puVar8 + 5) = 0xffffffff;
  *(undefined1 **)((long)puVar8 + 0x2c) = &DAT_3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x34) = 0;
  *(undefined8 *)((long)puVar8 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)puVar8 + 0x44) = 0xffffffff;
  *(undefined8 *)((long)puVar8 + 0x4c) = 0;
  *(undefined1 **)((long)puVar8 + 0x54) = &DAT_3f8000003f800000;
  *(undefined8 *)((long)puVar8 + 0x5c) = 0xffffffff00000000;
  *(undefined8 *)((long)puVar8 + 100) = 0x3f800000;
  *(undefined4 *)((long)puVar8 + 0x6c) = 0;
  FUN_71000319d0();
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_7100031070(&uStack_c0);
  uStack_c0 = 0x80000000c;
  FUN_7100031880((undefined1 *)(param_1 + 0x2b8),param_2,(undefined4 *)&uStack_c0,param_5,uVar16);
  puVar8 = (undefined8 *)FUN_71000319b0(param_1 + 0x2b8);
  *(undefined4 *)(puVar8 + 1) = 1;
  *puVar8 = 0x3000300020000;
  FUN_71000319d0();
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_7100031070(&uStack_c0);
  puVar1 = (undefined1 *)(param_1 + 0x300);
  uStack_c0 = 0x1000000004;
  FUN_7100031880(puVar1,param_2,(undefined4 *)&uStack_c0,param_5,uVar15);
  puVar9 = (undefined4 *)FUN_71000319b0((long)puVar1);
  FUN_7100031a00((long)puVar1);
  *puVar9 = 1;
  FUN_71000319d0();
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_7100031070(&uStack_c0);
  puVar1 = (undefined1 *)(param_1 + 0x348);
  uStack_c0 = 0x1000000004;
  FUN_7100031880(puVar1,param_2,(undefined4 *)&uStack_c0,param_5,uVar13);
  puVar9 = (undefined4 *)FUN_71000319b0((long)puVar1);
  FUN_7100031a00((long)puVar1);
  *puVar9 = 0;
  FUN_71000319d0();
  *(undefined4 *)(param_1 + 0x8c) = param_4;
  return 1;
}

