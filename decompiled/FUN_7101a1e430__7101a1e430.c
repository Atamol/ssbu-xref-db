// addr:      7101a1e430
// offset:    0x1a1e430
// name:      FUN_7101a1e430
// mangled:   
// signature: undefined __cdecl FUN_7101a1e430(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1e430(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  long *********ppppppppplVar6;
  long ****pppplVar7;
  long lVar8;
  long lVar9;
  long *********ppppppppplVar10;
  long **pplVar11;
  long ****pppplVar12;
  
  lVar9 = *(long *)(param_2 + 0x678);
  if (lVar9 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar9 + 8);
  iVar2 = *(int *)(lVar8 + 0x30);
  pppplVar7 = param_3;
  if ((iVar2 != -1) && (iVar2 != *(int *)(param_2 + 0x150))) {
    if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= (ulong)(long)iVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    pppplVar7 = (long ****)(*(long *)(param_1 + 0x250) + (long)iVar2 * 0x10);
    pppplVar12 = pppplVar7 + 1;
    FUN_7101a06ef0((long)*pppplVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar8 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    ppppppppplVar10 = *(long **********)(param_1 + 0xd90);
    puVar5 = FUN_71032631a0(lVar8,0x11b1ccb807);
    ppppppppplVar6 = ppppppppplVar10;
    if ((((((ulong)ppppppppplVar10 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)ppppppppplVar10 & 0xffffffffff) != 0)) &&
        (((ulong)puVar5 & 0xff00000000000000) == 0xc100000000000000)) &&
       (((ulong)puVar5 & 0xffffffffff) != 0)) {
      if ((((ulong)puVar5 ^ (ulong)ppppppppplVar10) & 0xffffffffff) == 0) {
LAB_7101a1e53c:
        ppppppppplVar6 = (long *********)FUN_7103263030(lVar8,(ulong)ppppppppplVar10);
      }
    }
    else if ((((ulong)puVar5 & 0xffffffffff) != 0 &&
             ((ulong)puVar5 & 0xff00000000000000) == 0xc100000000000000) ==
             (((ulong)ppppppppplVar10 & 0xff00000000000000) == 0xc100000000000000 &&
             ((ulong)ppppppppplVar10 & 0xffffffffff) != 0)) goto LAB_7101a1e53c;
    FUN_7101a029b0((long)*pppplVar12,(undefined1 *)ppppppppplVar10,ppppppppplVar6,0,param_5,param_6,
                   param_7,param_8);
    *(undefined1 *)((long)*pppplVar12 + 0x6bd) = 1;
    FUN_7103778760((long)(*pppplVar12)[0xbd][2],0x710425ed91);
    pplVar11 = (*pppplVar12)[0xbd];
    FUN_7103778760((long)pplVar11[2],0x710433a9c5);
    FUN_7103778760((long)pplVar11[0x1e],0x710433a9c5);
    FUN_7103778760((long)pplVar11[0x20],0x710433a9c5);
    param_4 = (byte ****)0x1;
    FUN_7101a1c3b0(param_1,lVar9,pppplVar7,(byte ****)0x1,param_5,param_6,param_7,param_8);
    lVar8 = *(long *)(lVar9 + 8);
  }
  uVar3 = *(uint *)(*(long *)(*(long *)(lVar8 + 0x10) + 8) + 0x488);
  FUN_7101a1e9b0(param_1,lVar9,pppplVar7,param_4,param_5,param_6,param_7,param_8);
  uVar4 = *(uint *)(*(long *)(lVar9 + 8) + 0x28);
  if (uVar4 != 0xffffffff) {
    if (7 < uVar4) goto LAB_7101a1e650;
    *(undefined4 *)(*(long *)(DAT_710593b990 + 8) + (long)(int)uVar4 * 4) = 0xffffffff;
  }
  if (uVar3 != 0xffffffff) {
    if (9 < uVar3) {
LAB_7101a1e650:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar9 = *(long *)(param_1 + 400);
    puVar1 = (undefined4 *)(lVar9 + (long)(int)uVar3 * 4);
    *puVar1 = 0;
    puVar1[10] = 0;
    *(undefined1 *)(lVar9 + (int)uVar3 + 0x50) = 0;
  }
  return;
}

