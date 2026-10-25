// addr:      7101a3a120
// offset:    0x1a3a120
// name:      FUN_7101a3a120
// mangled:   
// signature: undefined __cdecl FUN_7101a3a120(long param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a3a120(long param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long *********ppppppppplVar2;
  long *plVar3;
  long ****pppplVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *********ppppppppplVar9;
  long lVar10;
  undefined **local_40;
  ulong local_38;
  
  ppppppppplVar9 = (long *********)&DAT_c1ffff0000000000;
  FUN_7101a4a800(*(long *)(param_1 + 8),param_2,(long ****)0x3,param_4,param_5,param_6,param_7,
                 param_8);
  lVar10 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  puVar1 = FUN_71032631a0(lVar10,0x11b1ccb807);
  ppppppppplVar2 = ppppppppplVar9;
  if (((ulong)puVar1 & 0xff00000000000000) != 0xc100000000000000 ||
      ((ulong)puVar1 & 0xffffffffff) == 0) {
    ppppppppplVar2 = (long *********)FUN_7103263030(lVar10,0xc1ffff0000000000);
  }
  pppplVar4 = (long ****)0x0;
  FUN_7101a48700(*(long *)(param_1 + 8),param_2,&DAT_c1ffff0000000000,ppppppppplVar2,0,param_6,
                 param_7,param_8);
  lVar10 = *(long *)(param_1 + 8);
  uVar8 = (ulong)param_2;
  uVar6 = (*(long *)(lVar10 + 600) - *(long *)(lVar10 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
    *(undefined1 *)(*(long *)(lVar10 + 0x250) + uVar8 * 0x3f8 + 0x29) = 0;
    if ((ulong)(*(long *)(lVar10 + 0x3b8) - *(long *)(lVar10 + 0x3b0) >> 4) <= uVar8) {
LAB_7101a3a430:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0x3b0) + uVar8 * 0x10 + 8);
    *(undefined4 *)(lVar10 + 0xfc) = 0;
    if (*(int *)(lVar10 + 0xd8) == 1) {
      ppppppppplVar2 = (long *********)0x0;
      FUN_710377a280(lVar10 + 0x78,(byte *)"mel_chara_select_lv_n",1);
      ppppppppplVar9 = (long *********)(ulong)*(uint *)(lVar10 + 0xfc);
      FUN_7103778430(lVar10 + 0x58,"cp_level_%d",ppppppppplVar9,ppppppppplVar2,pppplVar4,param_6,
                     param_7,param_8);
    }
    lVar10 = *(long *)(param_1 + 8);
    uVar6 = (*(long *)(lVar10 + 600) - *(long *)(lVar10 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
    if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
      *(undefined1 *)(*(long *)(lVar10 + 0x250) + uVar8 * 0x3f8 + 0xf8) = 0;
      if ((ulong)(*(long *)(lVar10 + 0x3b8) - *(long *)(lVar10 + 0x3b0) >> 4) <= uVar8)
      goto LAB_7101a3a430;
      lVar10 = *(long *)(*(long *)(lVar10 + 0x3b0) + uVar8 * 0x10 + 8);
      *(undefined4 *)(lVar10 + 0x100) = 0;
      plVar3 = *(long **)(*(long *)(lVar10 + 0x90) + 0x10);
      if (plVar3 != (long *)0x0) {
        ppppppppplVar9 = (long *********)0x0;
        ppppppppplVar2 = (long *********)0x0;
        local_40 = (undefined **)((ulong)local_40 & 0xffffffff00000000);
        FUN_71037a2270(plVar3,(ushort *)&local_40,0,0);
      }
      lVar10 = *(long *)(param_1 + 8);
      uVar6 = (*(long *)(lVar10 + 600) - *(long *)(lVar10 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
      if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
        *(undefined4 *)(*(long *)(lVar10 + 0x250) + uVar8 * 0x3f8 + 0x1ac) = 0;
        if ((ulong)(*(long *)(lVar10 + 0x3b8) - *(long *)(lVar10 + 0x3b0) >> 4) <= uVar8)
        goto LAB_7101a3a430;
        lVar10 = *(long *)(*(long *)(lVar10 + 0x3b0) + uVar8 * 0x10 + 8);
        *(undefined4 *)(lVar10 + 0xf8) = 0;
        if (*(int *)(lVar10 + 0xd8) == 0) {
          FUN_7103778ab0(&local_40,(undefined8 *)(lVar10 + 0x68),(long ****)ppppppppplVar9,
                         (byte ****)ppppppppplVar2,pppplVar4,param_6,param_7,param_8);
          FUN_710377a280((long)&local_40,(byte *)"mel_player_n",1);
          uVar6 = local_38;
          local_40 = &PTR_FUN_710523d9a8;
          local_38 = 0;
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
        }
        lVar10 = *(long *)(param_1 + 8);
        lVar5 = *(long *)(lVar10 + 0x250);
        uVar6 = (*(long *)(lVar10 + 600) - lVar5 >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
          lVar7 = lVar5 + uVar8 * 0x3f8;
          *(undefined4 *)(lVar7 + 0x1b8) = 0xffffffff;
          *(undefined1 *)(lVar7 + 0x3f5) = 0;
          *(undefined1 *)(lVar7 + 0x3f7) = 0;
          if ((ulong)(*(long *)(lVar10 + 0x3b8) - *(long *)(lVar10 + 0x3b0) >> 4) <= uVar8)
          goto LAB_7101a3a430;
          *(undefined1 *)(lVar5 + uVar8 * 0x3f8 + 0x3f4) = 1;
          lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x250);
          uVar6 = (*(long *)(*(long *)(param_1 + 8) + 600) - lVar10 >> 3) * 0x7efdfbf7efdfbf7f;
          if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
            *(undefined1 *)(lVar10 + uVar8 * 0x3f8 + 0x3f5) = 0;
            lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x250);
            uVar6 = (*(long *)(*(long *)(param_1 + 8) + 600) - lVar10 >> 3) * 0x7efdfbf7efdfbf7f;
            if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
              *(undefined1 *)(lVar10 + uVar8 * 0x3f8 + 0x3f4) = 1;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

