// addr:      7101a38d80
// offset:    0x1a38d80
// name:      FUN_7101a38d80
// mangled:   
// signature: undefined __cdecl FUN_7101a38d80(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a38d80(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = *(long *)(param_2 + 8);
  lVar5 = *(long *)(lVar1 + 0x250);
  uVar6 = (*(long *)(lVar1 + 600) - lVar5 >> 3) * 0x7efdfbf7efdfbf7f;
  uVar8 = (ulong)(int)param_3;
  if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
    if (*(short *)(lVar5 + uVar8 * 0x3f8 + 0x2e) == 0) {
      uVar2 = 10;
      switch(*(undefined1 *)(param_1 + 0x129)) {
      case 0:
        break;
      case 1:
        uVar2 = 0x1e;
        break;
      case 2:
        uVar2 = 0x32;
        break;
      case 3:
        uVar2 = 0x50;
        break;
      case 4:
        uVar2 = 100;
        break;
      default:
        uVar2 = 0x96;
        break;
      case 6:
        uVar2 = 200;
        break;
      case 7:
        uVar2 = 0xfa;
        break;
      case 8:
        uVar2 = 300;
        break;
      case 9:
        uVar2 = 500;
        break;
      case 10:
        uVar2 = 0x2ee;
        break;
      case 0xb:
        uVar2 = 999;
      }
      FUN_7101a489d0(lVar1,uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
      lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x250);
      uVar6 = (*(long *)(*(long *)(param_2 + 8) + 600) - lVar5 >> 3) * 0x7efdfbf7efdfbf7f;
    }
    uVar4 = DAT_71052391c0;
    if (uVar8 < uVar6) {
      if ((*(int *)(lVar5 + uVar8 * 0x3f8 + 0x10) == 1) &&
         (*(char *)(lVar5 + uVar8 * 0x3f8 + 0x29) == '\0')) {
        uVar3 = (uint)*(byte *)(param_1 + 0x12a);
        if (uVar3 == 9) {
          DAT_71052391c0 = DAT_71052391c4;
          uVar4 = uVar4 ^ uVar4 << 0xb;
          uVar4 = uVar4 ^ uVar4 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
          DAT_71052391c4 = DAT_71052391c8;
          DAT_71052391c8 = DAT_71052391cc;
          uVar3 = uVar4 % 9;
          DAT_71052391cc = uVar4;
        }
        uVar4 = 3;
        if (uVar3 < 9) {
          uVar4 = uVar3 + 1;
        }
        uVar6 = (ulong)uVar4;
        lVar1 = *(long *)(param_2 + 8);
        uVar7 = (*(long *)(lVar1 + 600) - *(long *)(lVar1 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(char *)(*(long *)(lVar1 + 0x250) + uVar8 * 0x3f8 + 0x29) = (char)uVar4;
        if ((ulong)(*(long *)(lVar1 + 0x3b8) - *(long *)(lVar1 + 0x3b0) >> 4) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0x3b0) + uVar8 * 0x10 + 8);
        *(uint *)(lVar1 + 0xfc) = uVar4;
        if (*(int *)(lVar1 + 0xd8) == 1) {
          FUN_710377a280(lVar1 + 0x78,(byte *)"mel_chara_select_lv_n",1);
          FUN_7103778430(lVar1 + 0x58,"cp_level_%d",(ulong)*(uint *)(lVar1 + 0xfc),uVar6,param_5,
                         param_6,param_7,param_8);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

