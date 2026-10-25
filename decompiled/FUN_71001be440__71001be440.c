// addr:      71001be440
// offset:    0x1be440
// name:      FUN_71001be440
// mangled:   
// signature: undefined FUN_71001be440(void)


uint FUN_71001be440(long param_1,uint *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  undefined1 *in_x5;
  char *in_x6;
  long in_x7;
  undefined **ppuStack_190;
  undefined1 auStack_188 [16];
  undefined1 *puStack_178;
  undefined8 uStack_170;
  byte abStack_168 [8];
  undefined **ppuStack_160;
  undefined1 auStack_158 [16];
  undefined1 *puStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [16];
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined1 auStack_108 [16];
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_1 + 0x158),"");
  if (bVar1) {
    FUN_71001b6080((undefined8 *)abStack_168);
    uVar2 = nn::socket::InetHtonl(*param_2);
    pcVar4 = (char *)nn::socket::InetNtoa(uVar2);
    auStack_188[0] = 0;
    puStack_178 = auStack_188;
    uStack_170 = 0x10;
    ppuStack_190 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&ppuStack_190,pcVar4,-1);
    lVar5 = FUN_71001b5d60((long)abStack_168,(long)&ppuStack_190);
    lVar5 = FUN_71001b0ab0(lVar5,":");
    lVar5 = FUN_71001b6470(lVar5,(ulong)(ushort)param_2[2]);
    FUN_71001b0ab0(lVar5,"/");
    ppuStack_190 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_190);
    FUN_71001b3cb0(param_1 + 0x140,(char *)ppuStack_160);
    FUN_71001b60c0((undefined8 *)abStack_168);
  }
  abStack_168[0] = 1;
  abStack_168[1] = 1;
  abStack_168[2] = 0;
  abStack_168[3] = 0;
  puStack_148 = auStack_158;
  puStack_120 = auStack_130;
  uStack_118 = 0x10;
  puStack_f8 = auStack_108;
  uStack_f0 = 0x10;
  puStack_d0 = auStack_e0;
  auStack_130[0] = 0;
  ppuStack_160 = &PTR_FUN_710509cc08;
  auStack_158[0] = 0;
  auStack_108[0] = 0;
  auStack_e0[0] = 0;
  auStack_b8[0] = 0;
  uStack_88 = 0;
  uStack_140 = 0x10;
  puStack_a8 = auStack_b8;
  uStack_a0 = 0x10;
  uStack_80 = 1;
  uStack_c8 = 0x10;
  lStack_98 = 0;
  lStack_90 = 0;
  if (*(char *)(param_1 + 0x168) != '\0') {
    abStack_168[0] = 0;
    abStack_168[1] = 0;
    abStack_168[2] = 0;
    abStack_168[3] = 0;
  }
  ppuStack_138 = ppuStack_160;
  ppuStack_110 = ppuStack_160;
  ppuStack_e8 = ppuStack_160;
  ppuStack_c0 = ppuStack_160;
  lVar5 = FUN_71001b52a0(param_1 + 0x170);
  if (lVar5 != 0) {
    FUN_71001b2f70((long)&ppuStack_e8,param_1 + 0x170);
  }
  puStack_178 = auStack_188;
  auStack_188[0] = 0;
  uStack_170 = 0x10;
  ppuStack_190 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&ppuStack_190,"NEX",-1);
  uVar3 = FUN_7100224030((int *)(param_1 + 0x10),param_1 + 0x140,(long)&ppuStack_190,0,abStack_168,
                         in_x5,in_x6,in_x7);
  ppuStack_190 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_190);
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    FUN_71001b1870(lStack_98);
  }
  ppuStack_c0 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_c0);
  ppuStack_e8 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_e8);
  ppuStack_110 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_110);
  ppuStack_138 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_138);
  ppuStack_160 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_160);
  return ~uVar3 & 1;
}

