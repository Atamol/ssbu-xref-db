// addr:      71000872a0
// offset:    0x872a0
// name:      FUN_71000872a0
// mangled:   
// signature: uint __cdecl FUN_71000872a0(char * param_1, undefined8 * param_2, long param_3, long param_4, undefined4 param_5, undefined8 param_6, long param_7)


uint FUN_71000872a0(char *param_1,undefined8 *param_2,long param_3,long param_4,undefined4 param_5,
                   undefined8 param_6,long param_7)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  char *local_28;
  
  *(long *)(param_1 + 0x78) = param_3;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_4 + 0x10);
  *(long *)(param_1 + 0x238) = param_4;
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = -0x80;
  param_1[0x73] = '?';
  if (*(char *)(*(long *)(param_4 + 0x10) + 0x75b) == '\0') {
    uVar8 = 0x3f800000;
    if (*(char *)(*(long *)(param_4 + 0x10) + 0x75c) != '\0') {
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  param_1[0x228] = '\0';
  param_1[0x229] = '\0';
  param_1[0x22a] = '\0';
  param_1[0x22b] = '\0';
  param_1[0x22c] = '\0';
  param_1[0x22d] = '\0';
  param_1[0x22e] = '\0';
  param_1[0x22f] = '\0';
  param_1[0x5e4] = '\x01';
  param_1[0x5e5] = '\0';
  param_1[0x5e6] = '\0';
  param_1[0x5e7] = '\0';
  param_1[0x348] = '\0';
  param_1[0x349] = '\0';
  param_1[0x34a] = '\0';
  param_1[0x34b] = '\0';
  param_1[0x34c] = '\0';
  param_1[0x34d] = '\0';
  param_1[0x34e] = '\0';
  param_1[0x34f] = '\0';
  param_1[0x340] = '\0';
  param_1[0x341] = '\0';
  param_1[0x342] = -0x80;
  param_1[0x343] = '?';
  param_1[0x344] = '\0';
  param_1[0x345] = '\0';
  param_1[0x346] = '\0';
  param_1[0x347] = '\0';
  param_1[0x358] = '\0';
  param_1[0x359] = '\0';
  param_1[0x35a] = '\0';
  param_1[0x35b] = '\0';
  param_1[0x35c] = '\0';
  param_1[0x35d] = '\0';
  param_1[0x35e] = '\0';
  param_1[0x35f] = '\0';
  param_1[0x350] = '\0';
  param_1[0x351] = '\0';
  param_1[0x352] = '\0';
  param_1[0x353] = '\0';
  param_1[0x354] = '\0';
  param_1[0x355] = '\0';
  param_1[0x356] = -0x80;
  param_1[0x357] = '?';
  param_1[0x368] = '\0';
  param_1[0x369] = '\0';
  param_1[0x36a] = -0x80;
  param_1[0x36b] = '?';
  param_1[0x36c] = '\0';
  param_1[0x36d] = '\0';
  param_1[0x36e] = '\0';
  param_1[0x36f] = '\0';
  param_1[0x360] = '\0';
  param_1[0x361] = '\0';
  param_1[0x362] = '\0';
  param_1[0x363] = '\0';
  param_1[0x364] = '\0';
  param_1[0x365] = '\0';
  param_1[0x366] = '\0';
  param_1[0x367] = '\0';
  param_1[0x378] = '\0';
  param_1[0x379] = '\0';
  param_1[0x37a] = '\0';
  param_1[0x37b] = '\0';
  param_1[0x37c] = '\0';
  param_1[0x37d] = '\0';
  param_1[0x37e] = '\0';
  param_1[0x37f] = '\0';
  param_1[0x370] = '\0';
  param_1[0x371] = '\0';
  param_1[0x372] = '\0';
  param_1[0x373] = '\0';
  param_1[0x374] = '\0';
  param_1[0x375] = '\0';
  param_1[0x376] = '\0';
  param_1[0x377] = '\0';
  param_1[0x388] = '\0';
  param_1[0x389] = '\0';
  param_1[0x38a] = '\0';
  param_1[0x38b] = '\0';
  param_1[0x38c] = '\0';
  param_1[0x38d] = '\0';
  param_1[0x38e] = '\0';
  param_1[0x38f] = '\0';
  param_1[0x380] = '\0';
  param_1[0x381] = '\0';
  param_1[0x382] = -0x80;
  param_1[899] = '?';
  param_1[900] = '\0';
  param_1[0x385] = '\0';
  param_1[0x386] = '\0';
  param_1[0x387] = '\0';
  param_1[0x398] = '\0';
  param_1[0x399] = '\0';
  param_1[0x39a] = '\0';
  param_1[0x39b] = '\0';
  param_1[0x39c] = '\0';
  param_1[0x39d] = '\0';
  param_1[0x39e] = '\0';
  param_1[0x39f] = '\0';
  param_1[0x390] = '\0';
  param_1[0x391] = '\0';
  param_1[0x392] = '\0';
  param_1[0x393] = '\0';
  param_1[0x394] = '\0';
  param_1[0x395] = '\0';
  param_1[0x396] = -0x80;
  param_1[0x397] = '?';
  param_1[0x3a8] = '\0';
  param_1[0x3a9] = '\0';
  param_1[0x3aa] = -0x80;
  param_1[0x3ab] = '?';
  param_1[0x3ac] = '\0';
  param_1[0x3ad] = '\0';
  param_1[0x3ae] = '\0';
  param_1[0x3af] = '\0';
  param_1[0x3a0] = '\0';
  param_1[0x3a1] = '\0';
  param_1[0x3a2] = '\0';
  param_1[0x3a3] = '\0';
  param_1[0x3a4] = '\0';
  param_1[0x3a5] = '\0';
  param_1[0x3a6] = '\0';
  param_1[0x3a7] = '\0';
  param_1[0x3b8] = '\0';
  param_1[0x3b9] = '\0';
  param_1[0x3ba] = '\0';
  param_1[0x3bb] = '\0';
  param_1[0x3bc] = '\0';
  param_1[0x3bd] = '\0';
  param_1[0x3be] = '\0';
  param_1[0x3bf] = '\0';
  param_1[0x3b0] = '\0';
  param_1[0x3b1] = '\0';
  param_1[0x3b2] = '\0';
  param_1[0x3b3] = '\0';
  param_1[0x3b4] = '\0';
  param_1[0x3b5] = '\0';
  param_1[0x3b6] = '\0';
  param_1[0x3b7] = '\0';
  if ((((*(char *)(param_4 + 4) == '\0') || (*(char *)(*(long *)(param_4 + 0x10) + 0x7e4) != '\0'))
      || (*(long *)(param_4 + 0x338) == 0)) || ((*(uint *)(param_4 + 0x330) & 0xfffffffe) != 2)) {
    if (*(long *)(param_4 + 0x90) != 0) {
      *(long *)(param_1 + 0x240) = *(long *)(param_4 + 0x90);
      *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_4 + 0x98);
      *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_4 + 0xa0);
      *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_4 + 0xa8);
      *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_4 + 0xb0);
      *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_4 + 0xb8);
      *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_4 + 0xc0);
      *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_4 + 200);
      *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_4 + 0xd0);
      *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_4 + 0xd8);
      *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_4 + 0xe0);
      *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_4 + 0xe8);
      *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_4 + 0xf0);
      *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_4 + 0xf8);
      *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_4 + 0x100);
      *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_4 + 0x108);
    }
    *(undefined1 **)(param_1 + 0x60) = &DAT_3f8000003f800000;
    param_1[0x6c] = '\0';
    param_1[0x6d] = '\0';
    param_1[0x6e] = -0x80;
    param_1[0x6f] = '?';
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x14);
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    cVar2 = *(char *)(param_4 + 4);
    param_1[2] = '\x01';
    param_1[3] = '\x01';
    param_1[0x40] = -1;
    param_1[0x41] = -1;
    param_1[0x42] = -1;
    param_1[0x43] = -1;
    param_1[0x6bc] = '\0';
    param_1[0x6bd] = '\x01';
    param_1[10] = '\x01';
    *param_1 = cVar2;
    puVar5 = FUN_7100099000();
    cVar2 = *(char *)(*(long *)(param_1 + 0xa0) + 0x757);
    if (cVar2 == '\x02') {
      uVar4 = *(int *)(*(long *)(param_1 + 0xa0) + 0x760) * -0x2023e3cb;
LAB_71000874bc:
      FUN_71000992e0((undefined2 *)(param_1 + 0xa8),(ulong)uVar4);
    }
    else {
      if (cVar2 == '\x01') {
        uVar4 = *(uint *)(*(long *)(param_1 + 0x78) + 0x34);
        goto LAB_71000874bc;
      }
      if (cVar2 == '\0') {
        uVar4 = *puVar5 ^ *puVar5 << 0xb;
        *puVar5 = puVar5[1];
        uVar1 = puVar5[3];
        uVar4 = uVar4 ^ uVar4 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
        puVar5[1] = puVar5[2];
        puVar5[2] = uVar1;
        puVar5[3] = uVar4;
        goto LAB_71000874bc;
      }
    }
    uVar6 = FUN_7100087530(param_1,param_2,param_7);
    if ((uVar6 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x78);
      param_1[0x5c] = '\0';
      param_1[0x5d] = '\0';
      param_1[0x5e] = '\0';
      param_1[0x5f] = '\0';
      uVar3 = *(undefined8 *)(lVar7 + 0x90);
      *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(lVar7 + 0x98);
      *(undefined8 *)(param_1 + 0x3c0) = uVar3;
      param_1[0x3d8] = '\0';
      param_1[0x3d9] = '\0';
      param_1[0x3da] = '\0';
      param_1[0x3db] = '\0';
      param_1[0x3dc] = '\0';
      param_1[0x3dd] = '\0';
      param_1[0x3de] = '\0';
      param_1[0x3df] = '\0';
      param_1[0x3d0] = '\0';
      param_1[0x3d1] = '\0';
      param_1[0x3d2] = '\0';
      param_1[0x3d3] = '\0';
      param_1[0x3d4] = '\0';
      param_1[0x3d5] = '\0';
      param_1[0x3d6] = '\0';
      param_1[0x3d7] = '\0';
      auVar9 = NEON_fmov(0x3f800000,4);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar7 + 0x2c);
      *(long *)(param_1 + 0x428) = auVar9._8_8_;
      *(long *)(param_1 + 0x420) = auVar9._0_8_;
      *(long *)(param_1 + 0x438) = auVar9._8_8_;
      *(long *)(param_1 + 0x430) = auVar9._0_8_;
      local_28 = param_1;
      uVar4 = FUN_7100086fd0((long *)&local_28);
      goto LAB_710008751c;
    }
  }
  else {
    FUN_7100093660();
    FUN_7100093650();
  }
  uVar4 = 0;
  param_1[6] = '\x01';
LAB_710008751c:
  return uVar4 & 1;
}

