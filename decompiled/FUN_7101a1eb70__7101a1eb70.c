// addr:      7101a1eb70
// offset:    0x1a1eb70
// name:      FUN_7101a1eb70
// mangled:   
// signature: undefined __cdecl FUN_7101a1eb70(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1eb70(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined1 *puVar2;
  long *********ppppppppplVar3;
  undefined8 extraout_x1;
  long ****pppplVar4;
  byte ****ppppbVar5;
  uint uVar6;
  long lVar7;
  long *********ppppppppplVar8;
  long lVar9;
  ushort local_44 [2];
  
  uVar6 = (uint)param_3;
  FUN_7101a06920(*(long *)(param_2 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(*(long *)(param_2 + 8) + 500) = 3;
  *(int *)(*(long *)(param_2 + 8) + 0x1f0) = *(int *)(*(long *)(param_2 + 8) + 0x150) + 1;
  lVar7 = *(long *)(param_2 + 8);
  pppplVar4 = (long ****)(ulong)*(uint *)(lVar7 + 0x1fc);
  ppppbVar5 = (byte ****)(ulong)*(byte *)(lVar7 + 0x6bb);
  *(undefined4 *)(lVar7 + 0x1f8) = 1;
  FUN_7101a000c0(*(long *)(lVar7 + 0x5e8),1,pppplVar4,ppppbVar5,param_5,param_6,param_7,param_8);
  FUN_7101a02cb0(lVar7,extraout_x1,pppplVar4,ppppbVar5,param_5,param_6,param_7,param_8);
  if ((((*(char *)(lVar7 + 0x1c4) != -1) && (*(int *)(lVar7 + 0x1f8) == 0)) &&
      (*(int *)(lVar7 + 0x394) == 0)) &&
     (plVar1 = *(long **)(*(long *)(*(long *)(lVar7 + 0x5e8) + 0x80) + 0x10), plVar1 != (long *)0x0)
     ) {
    pppplVar4 = (long ****)&DAT_ffffffff;
    ppppbVar5 = (byte ****)0x1;
    FUN_71037a2270(plVar1,(ushort *)(lVar7 + 0x1d0),0xffffffff,1);
  }
  lVar7 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x2e0) = 0;
  *(undefined4 *)(lVar7 + 0x254) = 0;
  FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x40),0x7104349d11);
  plVar1 = *(long **)(*(long *)(lVar7 + 0xa0) + 0x10);
  if (plVar1 != (long *)0x0) {
    pppplVar4 = (long ****)0x0;
    ppppbVar5 = (byte ****)0x0;
    local_44[0] = 0;
    local_44[1] = 0;
    FUN_71037a2270(plVar1,local_44,0,0);
  }
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x6bd) = 1;
  FUN_7103778760(*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x5e8) + 0x10),0x710425ed91);
  lVar7 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
  FUN_7103778760(*(long *)(lVar7 + 0x10),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar7 + 0xf0),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar7 + 0x100),0x710433a9c5);
  FUN_7101a1f530(param_1,param_2,pppplVar4,ppppbVar5,param_5,param_6,param_7,param_8);
  if (*(int *)(param_1 + 0x16c) == 5) {
    lVar7 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    ppppppppplVar8 = *(long **********)(param_1 + 0xd90);
    puVar2 = FUN_71032631a0(lVar7,0x11b1ccb807);
    ppppppppplVar3 = ppppppppplVar8;
    if (((((ulong)ppppppppplVar8 & 0xff00000000000000) == 0xc100000000000000) &&
        (((ulong)ppppppppplVar8 & 0xffffffffff) != 0)) &&
       ((((ulong)puVar2 & 0xff00000000000000) == 0xc100000000000000 &&
        (((ulong)puVar2 & 0xffffffffff) != 0)))) {
      if ((((ulong)puVar2 ^ (ulong)ppppppppplVar8) & 0xffffffffff) == 0) {
LAB_7101a1ed78:
        ppppppppplVar3 = (long *********)FUN_7103263030(lVar7,(ulong)ppppppppplVar8);
      }
    }
    else if ((((ulong)puVar2 & 0xffffffffff) != 0 &&
             ((ulong)puVar2 & 0xff00000000000000) == 0xc100000000000000) ==
             (((ulong)ppppppppplVar8 & 0xff00000000000000) == 0xc100000000000000 &&
             ((ulong)ppppppppplVar8 & 0xffffffffff) != 0)) goto LAB_7101a1ed78;
    ppppbVar5 = (byte ****)0x0;
    FUN_7101a029b0(*(long *)(param_2 + 8),(undefined1 *)ppppppppplVar8,ppppppppplVar3,0,param_5,
                   param_6,param_7,param_8);
  }
  lVar7 = *(long *)(param_2 + 8);
  if (((*(ulong *)(lVar7 + 0x200) & 0xff00000000000000) == 0xc100000000000000) &&
     ((*(ulong *)(lVar7 + 0x200) & 0xffffffffff) != 0)) goto LAB_7101a1ee78;
  lVar9 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  ppppppppplVar8 = *(long **********)(param_1 + 0xd90);
  puVar2 = FUN_71032631a0(lVar9,0x11b1ccb807);
  ppppppppplVar3 = ppppppppplVar8;
  if ((((ulong)ppppppppplVar8 & 0xff00000000000000) == 0xc100000000000000) &&
     (((((ulong)ppppppppplVar8 & 0xffffffffff) != 0 &&
       (((ulong)puVar2 & 0xff00000000000000) == 0xc100000000000000)) &&
      (((ulong)puVar2 & 0xffffffffff) != 0)))) {
    if ((((ulong)puVar2 ^ (ulong)ppppppppplVar8) & 0xffffffffff) == 0) {
LAB_7101a1ee54:
      ppppppppplVar3 = (long *********)FUN_7103263030(lVar9,(ulong)ppppppppplVar8);
    }
  }
  else if ((((ulong)puVar2 & 0xffffffffff) != 0 &&
           ((ulong)puVar2 & 0xff00000000000000) == 0xc100000000000000) ==
           (((ulong)ppppppppplVar8 & 0xff00000000000000) == 0xc100000000000000 &&
           ((ulong)ppppppppplVar8 & 0xffffffffff) != 0)) goto LAB_7101a1ee54;
  ppppbVar5 = (byte ****)0x0;
  FUN_7101a029b0(lVar7,(undefined1 *)ppppppppplVar8,ppppppppplVar3,0,param_5,param_6,param_7,param_8
                );
  lVar7 = *(long *)(param_2 + 8);
LAB_7101a1ee78:
  *(undefined4 *)(lVar7 + 0x5d0) = 1;
  if ((*(char *)(lVar7 + 0x6b9) != '\0') || (*(int *)(lVar7 + 0x1f8) != 0)) {
    uVar6 = *(long *)(lVar7 + 0x678) != 0 & uVar6;
  }
  FUN_71019fff00(*(long *)(lVar7 + 0x5e8),1,(ulong)(uVar6 & 1),ppppbVar5,param_5,param_6,param_7,
                 param_8);
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x6ba) = 1;
  return;
}

