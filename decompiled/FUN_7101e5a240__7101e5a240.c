// addr:      7101e5a240
// offset:    0x1e5a240
// name:      FUN_7101e5a240
// mangled:   
// signature: undefined __cdecl FUN_7101e5a240(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e5a240(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **local_78;
  undefined8 local_70;
  long ***local_68;
  undefined4 local_54;
  
  lVar7 = *(long *)(param_1 + 0x308);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    if (((*(long *)(lVar7 + 0x20) != 0) &&
        (plVar2 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 8) + 8), plVar2 != (long *)0x0)) &&
       (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) == 0)) {
      return;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x48);
    if (((lVar7 != 0) && (plVar2 = *(long **)(*(long *)(lVar7 + 8) + 8), plVar2 != (long *)0x0)) &&
       (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) == 0)) {
      return;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1d4) = 0;
    *(undefined8 *)(param_1 + 0x1cc) = 0;
    *(undefined8 *)(param_1 + 0x1c4) = 0;
    *(undefined8 *)(param_1 + 0x1bc) = 0;
    *(undefined8 *)(param_1 + 0x1b4) = 0;
    *(undefined8 *)(param_1 + 0x1ac) = 0;
    *(undefined8 *)(param_1 + 0x1a4) = 0;
    *(undefined8 *)(param_1 + 0x194) = 0;
    *(undefined8 *)(param_1 + 0x19c) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined1 *)(param_1 + 0x1ec) = 0;
    *(undefined4 *)(param_1 + 400) = 0x15;
    return;
  }
  FUN_71037780e0(&local_78,lVar7,(long ****)&DAT_7104421055,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_68 = (long ***)&DAT_00000010;
      param_3 = &local_68;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101e5a390;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101e5a390:
  uVar1 = local_70;
  local_70 = 0;
  *puVar4 = &PTR_FUN_710523d9e8;
  puVar4[1] = uVar1;
  plVar2 = *(long **)(lVar7 + 0x20);
  *(undefined8 **)(lVar7 + 0x20) = puVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  local_78 = &PTR_FUN_710523d9e8;
  local_70 = 0;
  FUN_710377aee0(0x3f800000,*(long *)(lVar7 + 0x20));
  *(undefined1 *)(param_1 + 0x310) = 1;
  if (*(char *)(param_1 + 0x210) != '\0') {
    lVar7 = 8;
    lVar9 = 9;
    do {
      if (((lVar9 - 9U < 4) &&
          (lVar8 = *(long *)(*(long *)(param_1 + 0x208) + lVar9 * 8), lVar8 != 0)) &&
         (*(char *)(lVar8 + 0xb0) != '\0')) {
        uVar3 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8),
                               0x1530ff0e86);
        uVar6 = *(ulong *)(param_1 + 0x3b8);
        if ((((uVar3 & 0xff00000000000000) == 0x5200000000000000 && (uVar3 & 0xffffffffff) != 0) &&
            ((uVar6 & 0xff00000000000000) == 0x5200000000000000)) && ((uVar6 & 0xffffffffff) != 0))
        {
          if (((uVar6 ^ uVar3) & 0xffffffffff) != 0) {
LAB_7101e5a4b8:
            lVar5 = *(long *)(**(long **)(param_1 + 0x3b0) + 8);
            if (((*(char *)(lVar5 + 0x388) != '\0') &&
                (uVar3 = (ulong)*(byte *)(*(long **)(param_1 + 0x3b0) + 1), uVar3 < 0xe)) &&
               ((lVar5 = *(long *)(lVar5 + uVar3 * 8 + 8), lVar5 != 0 &&
                (*(short *)(lVar5 + lVar7) != -1)))) {
              FUN_7101e9be90(lVar8,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
              FUN_7101e9c4a0(lVar8);
              if ((*(char *)(param_1 + 0x212) != '\0') &&
                 (lVar8 = *(long *)(*(long *)(param_1 + 0x208) + lVar9 * 8), lVar8 != 0)) {
                FUN_7103778300(0x3f800000,*(long *)(lVar8 + 8),0x71042d69e0);
              }
            }
          }
        }
        else if (((uVar6 & 0xffffffffff) != 0 && (uVar6 & 0xff00000000000000) == 0x5200000000000000)
                 != ((uVar3 & 0xff00000000000000) == 0x5200000000000000 &&
                    (uVar3 & 0xffffffffff) != 0)) goto LAB_7101e5a4b8;
      }
      uVar3 = lVar9 - 8;
      lVar7 = lVar7 + 0x1c8;
      lVar9 = lVar9 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x210));
  }
  return;
}

