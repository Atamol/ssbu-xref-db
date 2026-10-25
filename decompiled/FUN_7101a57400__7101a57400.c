// addr:      7101a57400
// offset:    0x1a57400
// name:      FUN_7101a57400
// mangled:   
// signature: undefined __cdecl FUN_7101a57400(long param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a57400(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  uint local_38 [2];
  
  lVar4 = *(long *)(param_2 + 8);
  if (*(short *)(lVar4 + 0x216) == 0) {
    iVar6 = 10;
    switch(*(undefined1 *)(param_1 + 0x2ba)) {
    case 0:
      break;
    case 1:
      iVar6 = 0x1e;
      break;
    case 2:
      iVar6 = 0x32;
      break;
    case 3:
      iVar6 = 0x50;
      break;
    case 4:
      iVar6 = 100;
      break;
    default:
      iVar6 = 0x96;
      break;
    case 6:
      iVar6 = 200;
      break;
    case 7:
      iVar6 = 0xfa;
      break;
    case 8:
      iVar6 = 300;
      break;
    case 9:
      iVar6 = 500;
      break;
    case 10:
      iVar6 = 0x2ee;
      break;
    case 0xb:
      iVar6 = 999;
    }
    lVar7 = *(long *)(lVar4 + 0x5e8);
    *(short *)(lVar4 + 0x216) = (short)iVar6;
    FUN_710377a310(lVar7 + 200,1);
    lVar4 = *(long *)(DAT_710532f8c0 + 8);
    fVar8 = (float)FUN_71033112b0(0,lVar4,0xe7e193f84);
    iVar1 = (int)fVar8;
    if ((int)fVar8 <= iVar6) {
      iVar1 = iVar6;
    }
    local_38[0] = FUN_71033115f0((float)iVar1,*(float **)(lVar4 + 0xe0),*(float **)(lVar4 + 0xe8));
    FUN_710377a5b0(*(long *)(*(long *)(lVar7 + 0xd0) + 0x10),(char *)local_38);
    lVar4 = *(long *)(param_2 + 8);
  }
  uVar5 = DAT_71052391c0;
  if ((*(int *)(lVar4 + 0x1f8) == 1) && (*(char *)(lVar4 + 0x211) == '\0')) {
    uVar3 = (uint)*(byte *)(param_1 + 699);
    if (uVar3 == 9) {
      DAT_71052391c0 = DAT_71052391c4;
      uVar5 = uVar5 ^ uVar5 << 0xb;
      uVar5 = uVar5 ^ uVar5 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
      DAT_71052391c4 = DAT_71052391c8;
      DAT_71052391c8 = DAT_71052391cc;
      uVar3 = uVar5 % 9;
      DAT_71052391cc = uVar5;
    }
    uVar5 = 3;
    if (uVar3 < 9) {
      uVar5 = uVar3 + 1;
    }
    uVar2 = (ulong)uVar5;
    lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
    *(char *)(*(long *)(param_2 + 8) + 0x211) = (char)uVar5;
    *(uint *)(lVar4 + 0x250) = uVar5;
    if (*(int *)(lVar4 + 0x21c) == 1) {
      FUN_710377a280(lVar4 + 0x88,(byte *)"mel_chara_select_lv_n",1);
      FUN_7103778430(lVar4 + 0x68,"cp_level_%d",(ulong)*(uint *)(lVar4 + 0x250),uVar2,param_5,
                     param_6,param_7,param_8);
      return;
    }
  }
  return;
}

