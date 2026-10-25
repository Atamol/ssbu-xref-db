// addr:      7101a024c0
// offset:    0x1a024c0
// name:      FUN_7101a024c0
// mangled:   
// signature: undefined __cdecl FUN_7101a024c0(long param_1, int param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a024c0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  long *********ppppppppplVar10;
  long lVar11;
  long *plVar12;
  undefined1 local_74 [4];
  undefined4 local_70;
  uint uStack_6c;
  long *********local_68;
  
  if (*(int *)(param_1 + 0x1f8) != 2) {
    return;
  }
  *(int *)(param_1 + 0x3a0) = param_2;
  *(undefined1 *)(param_1 + 0x6ba) = 1;
  *(undefined1 *)(param_1 + 0x6c2) = 0;
  if (param_2 == -1) {
    FUN_7101a029b0(param_1,&DAT_c1ffff0000000000,(long *********)&DAT_c1ffff0000000000,0,param_5,
                   param_6,param_7,param_8);
    uVar8 = 0;
    goto LAB_7101a02888;
  }
  lVar9 = *(long *)(DAT_710532f7b0 + 8);
  piVar4 = FUN_71032df050(lVar9,param_2);
  FUN_71032e1c20(lVar9,param_2,(uint *)(param_1 + 0x2b8));
  ppppppppplVar10 = *(long **********)(piVar4 + 2);
  plVar12 = (long *)(DAT_710532f730 + 8);
  lVar9 = *plVar12;
  lVar11 = *(long *)(lVar9 + 0x168);
  uVar2 = FUN_71032633f0(lVar11,(ulong)ppppppppplVar10);
  plVar5 = *(long **)(param_1 + 0x180);
  uVar3 = (uint)*(byte *)((long)piVar4 + 0x12);
  if (uVar2 <= *(byte *)((long)piVar4 + 0x12)) {
    uVar3 = 0;
  }
  if (plVar5 != (long *)0x0) {
    local_70 = *(undefined4 *)(param_1 + 0x150);
    local_74[0] = 0;
    param_5 = (long ****)local_74;
    uStack_6c = uVar3;
    local_68 = ppppppppplVar10;
    uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_68,&uStack_6c,&local_70);
    plVar12 = (long *)(DAT_710532f730 + 8);
    lVar9 = *plVar12;
    lVar11 = *(long *)(lVar9 + 0x168);
  }
  uVar2 = FUN_71032632a0(lVar11,(ulong)ppppppppplVar10);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x6c2) = 1;
    lVar11 = *(long *)(lVar9 + 0x168);
  }
  puVar6 = FUN_71032631a0(lVar11,0x11b1ccb807);
  if ((((((ulong)ppppppppplVar10 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)ppppppppplVar10 & 0xffffffffff) != 0)) &&
      (((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000)) &&
     (((ulong)puVar6 & 0xffffffffff) != 0)) {
    if ((((ulong)puVar6 ^ (ulong)ppppppppplVar10) & 0xffffffffff) == 0) {
LAB_7101a0267c:
      lVar9 = *(long *)(*plVar12 + 0x168);
      ppppppppplVar10 = *(long **********)(piVar4 + 2);
      puVar6 = FUN_71032631a0(lVar9,0x11b1ccb807);
      if (((((ulong)ppppppppplVar10 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)ppppppppplVar10 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000 &&
          (((ulong)puVar6 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar6 ^ (ulong)ppppppppplVar10) & 0xffffffffff) == 0) {
LAB_7101a02704:
          iVar1 = piVar4[0x42];
          if (iVar1 == 2) {
            uVar7 = 0x12915a4ff6;
          }
          else if (iVar1 == 1) {
            uVar7 = 0x14ef73f367;
          }
          else {
            if (iVar1 != 0) {
              ppppppppplVar10 = (long *********)&DAT_c1ffff0000000000;
              goto LAB_7101a02760;
            }
            uVar7 = 0x1280f1c82e;
          }
          ppppppppplVar10 = (long *********)FUN_71032631a0(lVar9,uVar7);
        }
      }
      else if ((((ulong)puVar6 & 0xffffffffff) != 0 &&
               ((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000) ==
               (((ulong)ppppppppplVar10 & 0xff00000000000000) == 0xc100000000000000 &&
               ((ulong)ppppppppplVar10 & 0xffffffffff) != 0)) goto LAB_7101a02704;
    }
  }
  else if ((((ulong)puVar6 & 0xffffffffff) != 0 &&
           ((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000) ==
           (((ulong)ppppppppplVar10 & 0xff00000000000000) == 0xc100000000000000 &&
           ((ulong)ppppppppplVar10 & 0xffffffffff) != 0)) goto LAB_7101a0267c;
LAB_7101a02760:
  puVar6 = *(undefined1 **)(piVar4 + 2);
  lVar9 = *(long *)(*plVar12 + 0x168);
  uVar2 = FUN_71032632a0(lVar9,(ulong)puVar6);
  if ((uVar2 & 1) != 0) {
    puVar6 = FUN_71032631a0(lVar9,0x11b1ccb807);
  }
  uVar7 = (ulong)uVar3;
  FUN_7101a029b0(param_1,puVar6,ppppppppplVar10,uVar3,param_5,param_6,param_7,param_8);
  uVar3 = FUN_710324bb60(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),
                         *(ushort *)((long)piVar4 + 0xa2));
  lVar9 = *(long *)(param_1 + 0x5e8);
  *(char *)(param_1 + 0x2e0) = (char)uVar3;
  *(uint *)(lVar9 + 0x254) = uVar3 & 0xff;
  if (((uVar3 & 0xff) == 0) || (*(int *)(lVar9 + 0x21c) != 2)) {
    FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x40),0x7104349d11);
    plVar5 = *(long **)(*(long *)(lVar9 + 0xa0) + 0x10);
    if (plVar5 != (long *)0x0) {
      ppppppppplVar10 = (long *********)0x0;
      uVar7 = 0;
      local_68 = (long *********)((ulong)local_68 & 0xffffffff00000000);
      FUN_71037a2270(plVar5,(ushort *)&local_68,0,0);
    }
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x40),0x7104307f02);
    uVar7 = (ulong)*(uint *)(lVar9 + 0x254);
    ppppppppplVar10 = (long *********)0x1;
    FUN_710377a280(lVar9 + 0x98,(byte *)"mel_chara_select_fp_lv_n",1);
  }
  lVar9 = *(long *)(param_1 + 0x5e8);
  plVar5 = *(long **)(*(long *)(lVar9 + 0x80) + 0x10);
  if (plVar5 != (long *)0x0) {
    ppppppppplVar10 = (long *********)&DAT_ffffffff;
    uVar7 = 1;
    FUN_71037a2270(plVar5,(ushort *)(param_1 + 0x2c0),0xffffffff,1);
    lVar9 = *(long *)(param_1 + 0x5e8);
  }
  FUN_7101a00df0(lVar9,*(undefined1 *)(param_1 + 0x2f8),ppppppppplVar10,uVar7,param_5,param_6,
                 param_7,param_8);
  if (*(char *)((long)piVar4 + 0x17) != '\0') {
    FUN_71032e26a0(*(long *)(DAT_710532f7b0 + 8),param_2,(uint *)(param_1 + 0x228));
  }
  uVar8 = 1;
LAB_7101a02888:
  *(undefined1 *)(param_1 + 0x6bd) = uVar8;
  return;
}

