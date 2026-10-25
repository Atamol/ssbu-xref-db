// addr:      7101a39930
// offset:    0x1a39930
// name:      FUN_7101a39930
// mangled:   
// signature: long __cdecl FUN_7101a39930(long param_1, long param_2, uint param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


long FUN_7101a39930(long param_1,long param_2,uint param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined1 *puVar2;
  long *********ppppppppplVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *********ppppppppplVar8;
  ulong uVar9;
  ushort local_54 [2];
  
  FUN_7101a4a800(*(long *)(param_2 + 8),param_3,(long ****)0x1,param_4,param_5,param_6,param_7,
                 param_8);
  lVar4 = *(long *)(param_2 + 8);
  uVar9 = (ulong)(int)param_3;
  uVar6 = (*(long *)(lVar4 + 600) - *(long *)(lVar4 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
LAB_7101a39c14:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(undefined1 *)(*(long *)(lVar4 + 0x250) + uVar9 * 0x3f8 + 0xf8) = 0;
  if ((ulong)(*(long *)(lVar4 + 0x3b8) - *(long *)(lVar4 + 0x3b0) >> 4) <= uVar9)
  goto LAB_7101a39c10;
  lVar4 = *(long *)(*(long *)(lVar4 + 0x3b0) + uVar9 * 0x10 + 8);
  *(undefined4 *)(lVar4 + 0x100) = 0;
  plVar1 = *(long **)(*(long *)(lVar4 + 0x90) + 0x10);
  if (plVar1 != (long *)0x0) {
    param_4 = (byte ****)0x0;
    local_54[0] = 0;
    local_54[1] = 0;
    FUN_71037a2270(plVar1,local_54,0,0);
  }
  lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x250);
  uVar6 = (*(long *)(*(long *)(param_2 + 8) + 600) - lVar4 >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar6 < uVar9 || uVar6 - uVar9 == 0) goto LAB_7101a39c14;
  *(undefined1 *)(lVar4 + uVar9 * 0x3f8 + 0x3f5) = 1;
  lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x3b0);
  if ((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x3b8) - lVar4 >> 4) <= uVar9) goto LAB_7101a39c10;
  FUN_7103778760(*(long *)(*(long *)(lVar4 + uVar9 * 0x10 + 8) + 0x20),0x710425ed91);
  lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x3b0);
  if ((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x3b8) - lVar4 >> 4) <= uVar9) goto LAB_7101a39c10;
  lVar4 = *(long *)(lVar4 + uVar9 * 0x10 + 8);
  FUN_7103778760(*(long *)(lVar4 + 0x20),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar4 + 0xb0),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar4 + 0xc0),0x710433a9c5);
  FUN_7101a38d80(param_1,param_2,(ulong)param_3,param_4,param_5,param_6,param_7,param_8);
  lVar4 = *(long *)(param_2 + 8);
  lVar5 = *(long *)(lVar4 + 0x250);
  uVar6 = (*(long *)(lVar4 + 600) - lVar5 >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar6 < uVar9 || uVar6 - uVar9 == 0) goto LAB_7101a39c10;
  uVar7 = *(ulong *)(lVar5 + uVar9 * 0x3f8 + 0x18);
  if (((uVar7 & 0xff00000000000000) != 0xc100000000000000) || ((uVar7 & 0xffffffffff) == 0)) {
    lVar5 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    ppppppppplVar8 = *(long **********)(param_1 + 0x1c8);
    puVar2 = FUN_71032631a0(lVar5,0x11b1ccb807);
    ppppppppplVar3 = ppppppppplVar8;
    if ((((ulong)ppppppppplVar8 & 0xff00000000000000) == 0xc100000000000000) &&
       (((((ulong)ppppppppplVar8 & 0xffffffffff) != 0 &&
         (((ulong)puVar2 & 0xff00000000000000) == 0xc100000000000000)) &&
        (((ulong)puVar2 & 0xffffffffff) != 0)))) {
      if ((((ulong)puVar2 ^ (ulong)ppppppppplVar8) & 0xffffffffff) == 0) {
LAB_7101a39b98:
        ppppppppplVar3 = (long *********)FUN_7103263030(lVar5,(ulong)ppppppppplVar8);
      }
    }
    else if ((((ulong)puVar2 & 0xffffffffff) != 0 &&
             ((ulong)puVar2 & 0xff00000000000000) == 0xc100000000000000) ==
             (((ulong)ppppppppplVar8 & 0xff00000000000000) == 0xc100000000000000 &&
             ((ulong)ppppppppplVar8 & 0xffffffffff) != 0)) goto LAB_7101a39b98;
    FUN_7101a48700(lVar4,param_3,(undefined1 *)ppppppppplVar8,ppppppppplVar3,0,param_6,param_7,
                   param_8);
    lVar4 = *(long *)(param_2 + 8);
    lVar5 = *(long *)(lVar4 + 0x250);
    uVar6 = (*(long *)(lVar4 + 600) - lVar5 >> 3) * 0x7efdfbf7efdfbf7f;
  }
  if (uVar9 < uVar6) {
    *(undefined1 *)(lVar5 + uVar9 * 0x3f8 + 0x3f4) = 1;
    return lVar4 + 0x250;
  }
LAB_7101a39c10:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

