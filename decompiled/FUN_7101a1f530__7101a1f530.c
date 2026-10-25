// addr:      7101a1f530
// offset:    0x1a1f530
// name:      FUN_7101a1f530
// mangled:   
// signature: undefined __cdecl FUN_7101a1f530(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1f530(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  ushort *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  uint local_38 [2];
  
  lVar8 = *(long *)(param_2 + 8);
  if (*(short *)(lVar8 + 0x216) == 0) {
    iVar7 = 10;
    switch(*(undefined1 *)(param_1 + 0x159)) {
    case 0:
      break;
    case 1:
      iVar7 = 0x1e;
      break;
    case 2:
      iVar7 = 0x32;
      break;
    case 3:
      iVar7 = 0x50;
      break;
    case 4:
      iVar7 = 100;
      break;
    default:
      iVar7 = 0x96;
      break;
    case 6:
      iVar7 = 200;
      break;
    case 7:
      iVar7 = 0xfa;
      break;
    case 8:
      iVar7 = 300;
      break;
    case 9:
      iVar7 = 500;
      break;
    case 10:
      iVar7 = 0x2ee;
      break;
    case 0xb:
      iVar7 = 999;
    }
    lVar9 = *(long *)(lVar8 + 0x5e8);
    *(short *)(lVar8 + 0x216) = (short)iVar7;
    FUN_710377a310(lVar9 + 200,1);
    lVar8 = *(long *)(DAT_710532f8c0 + 8);
    fVar10 = (float)FUN_71033112b0(0,lVar8,0xe7e193f84);
    iVar1 = (int)fVar10;
    if ((int)fVar10 <= iVar7) {
      iVar1 = iVar7;
    }
    local_38[0] = FUN_71033115f0((float)iVar1,*(float **)(lVar8 + 0xe0),*(float **)(lVar8 + 0xe8));
    FUN_710377a5b0(*(long *)(*(long *)(lVar9 + 0xd0) + 0x10),(char *)local_38);
    lVar8 = *(long *)(param_2 + 8);
  }
  if (*(int *)(lVar8 + 0x1fc) == -1) {
    if (7 < *(uint *)(lVar8 + 0x150)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = *(uint *)(&DAT_71044713e0 + (long)(int)*(uint *)(lVar8 + 0x150) * 4);
    *(uint *)(lVar8 + 0x1fc) = uVar6;
    FUN_7101a000c0(*(long *)(lVar8 + 0x5e8),*(int *)(lVar8 + 0x1f8),(long ****)(ulong)uVar6,
                   (byte ****)(ulong)*(byte *)(lVar8 + 0x6bb),param_5,param_6,param_7,param_8);
    if (*(int *)(lVar8 + 0x1f8) == 2) {
      if ((*(char *)(lVar8 + 0x6bd) == '\0') ||
         (plVar2 = *(long **)(*(long *)(*(long *)(lVar8 + 0x5e8) + 0x80) + 0x10),
         plVar2 == (long *)0x0)) goto LAB_7101a1f648;
      puVar3 = (ushort *)(lVar8 + 0x2c0);
    }
    else {
      if ((((*(int *)(lVar8 + 0x1f8) != 0) || (*(char *)(lVar8 + 0x1c4) == -1)) ||
          (*(int *)(lVar8 + 0x394) != 0)) ||
         (plVar2 = *(long **)(*(long *)(*(long *)(lVar8 + 0x5e8) + 0x80) + 0x10),
         plVar2 == (long *)0x0)) goto LAB_7101a1f648;
      puVar3 = (ushort *)(lVar8 + 0x1d0);
    }
    FUN_71037a2270(plVar2,puVar3,0xffffffff,1);
  }
LAB_7101a1f648:
  uVar6 = DAT_71052391c0;
  if ((*(int *)(*(long *)(param_2 + 8) + 0x1f8) == 1) &&
     (*(char *)(*(long *)(param_2 + 8) + 0x211) == '\0')) {
    uVar5 = (uint)*(byte *)(param_1 + 0x15a);
    if (uVar5 == 9) {
      DAT_71052391c0 = DAT_71052391c4;
      uVar6 = uVar6 ^ uVar6 << 0xb;
      uVar6 = uVar6 ^ uVar6 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
      DAT_71052391c4 = DAT_71052391c8;
      DAT_71052391c8 = DAT_71052391cc;
      uVar5 = uVar6 % 9;
      DAT_71052391cc = uVar6;
    }
    uVar6 = 3;
    if (uVar5 < 9) {
      uVar6 = uVar5 + 1;
    }
    uVar4 = (ulong)uVar6;
    lVar8 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
    *(char *)(*(long *)(param_2 + 8) + 0x211) = (char)uVar6;
    *(uint *)(lVar8 + 0x250) = uVar6;
    if (*(int *)(lVar8 + 0x21c) == 1) {
      FUN_710377a280(lVar8 + 0x88,(byte *)"mel_chara_select_lv_n",1);
      FUN_7103778430(lVar8 + 0x68,"cp_level_%d",(ulong)*(uint *)(lVar8 + 0x250),uVar4,param_5,
                     param_6,param_7,param_8);
      return;
    }
  }
  return;
}

