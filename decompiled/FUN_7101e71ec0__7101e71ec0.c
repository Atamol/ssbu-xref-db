// addr:      7101e71ec0
// offset:    0x1e71ec0
// name:      FUN_7101e71ec0
// mangled:   
// signature: undefined __cdecl FUN_7101e71ec0(long param_1, byte param_2, ulong param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e71ec0(long param_1,byte param_2,ulong param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint auStack_a8 [2];
  undefined1 auStack_a0 [64];
  ushort local_54 [2];
  
  lVar6 = param_4;
  FUN_7101e722f0(param_1,param_2,param_4);
  if (3 < param_2) {
    return;
  }
  if (*(char *)(param_4 + 9) != '\0') {
    return;
  }
  lVar10 = param_1 + (ulong)param_2 * 8;
  lVar8 = *(long *)(lVar10 + 0x210);
  if (lVar8 == 0) {
    return;
  }
  *(undefined1 *)(lVar8 + 0xfa) = 0;
  FUN_7103778300(0x3f800000,*(long *)(lVar8 + 200),0x71043cd335);
  lVar10 = *(long *)(lVar10 + 0x210);
  if (lVar10 == 0) {
    return;
  }
  lVar8 = *(long *)(DAT_710532f730 + 8);
  uVar5 = param_3;
  FUN_710327cd40(auStack_a8,*(long *)(lVar8 + 0x318),param_3);
  uVar2 = FUN_710327d3b0(*(long *)(lVar8 + 0x318),param_3);
  uVar2 = uVar2 & 0xffffffffff;
  if (((uVar2 == 0xdaaec3d9f) || (uVar2 == 0x106cb91611)) || (uVar2 == 0xe32ae387d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  uVar2 = FUN_710327d0d0(*(long *)(lVar8 + 0x318),param_3);
  if (((uVar2 & 0xffffffffff) == 0x7db8309f9) && (bVar1)) {
    FUN_7103778300(0x3f800000,*(long *)(lVar10 + 8),0x71043e0842);
    lVar8 = *(long *)(lVar10 + 0x98);
LAB_7101e72050:
    FUN_7103778300(0x3f800000,lVar8,(long)auStack_a0);
    uVar7 = 0;
LAB_7101e72064:
    *(undefined1 *)(lVar10 + 0xfb) = uVar7;
  }
  else {
    uVar2 = FUN_710327d3b0(*(long *)(lVar8 + 0x318),param_3);
    uVar3 = FUN_710327d0d0(*(long *)(lVar8 + 0x318),param_3);
    if (((uVar2 & 0xffffffffff) == 0x697117991) && ((uVar3 & 0xffffffffff) == 0x7db8309f9)) {
      FUN_7103778300(0x3f800000,*(long *)(lVar10 + 8),0x71044336d6);
      lVar8 = *(long *)(lVar10 + 0xa8);
      goto LAB_7101e72050;
    }
    uVar2 = FUN_710327d930(*(long *)(*(long *)(lVar8 + 0x318) + 8),0x1ae148d108);
    if ((((param_3 & 0xff00000000000000) != 0x2d00000000000000) || ((param_3 & 0xffffffffff) == 0))
       || (((uVar2 & 0xff00000000000000) != 0x2d00000000000000 || ((uVar2 & 0xffffffffff) == 0)))) {
      if (((uVar2 & 0xffffffffff) != 0 && (uVar2 & 0xff00000000000000) == 0x2d00000000000000) !=
          ((param_3 & 0xff00000000000000) == 0x2d00000000000000 && (param_3 & 0xffffffffff) != 0))
      goto LAB_7101e7206c;
LAB_7101e72240:
      FUN_7103778300(0x3f800000,*(long *)(lVar10 + 8),0x710434aa2e);
      FUN_7103778300(0x3f800000,*(long *)(lVar10 + 0xb8),0x71042c5495);
      uVar7 = 1;
      goto LAB_7101e72064;
    }
    if (((uVar2 ^ param_3) & 0xffffffffff) == 0) goto LAB_7101e72240;
  }
LAB_7101e7206c:
  uVar11 = param_3 & 0xffffffffff;
  *(ulong *)(lVar10 + 0xf0) = uVar11;
  *(undefined1 *)(lVar10 + 0xf9) = 0;
  FUN_7103778300(0x3f800000,*(long *)(lVar10 + 8),0x7104306de4);
  lVar8 = *(long *)(DAT_710532f730 + 8);
  uVar2 = FUN_710327d3b0(*(long *)(lVar8 + 0x318),param_3);
  uVar3 = FUN_710327d0d0(*(long *)(lVar8 + 0x318),param_3);
  if (((uVar2 & 0xffffffffff) == 0x697117991) && ((uVar3 & 0xffffffffff) == 0x7db8309f9)) {
    FUN_710377a120(lVar10 + 0x40,"nam_goods_category_energy",uVar5,lVar6,param_5,param_6,param_7,
                   param_8);
    return;
  }
  lVar9 = *(long *)(lVar8 + 0x318);
  uVar2 = FUN_710327d930(*(long *)(lVar9 + 8),0x1ae148d108);
  if (((((param_3 & 0xff00000000000000) == 0x2d00000000000000) && (uVar11 != 0)) &&
      ((uVar2 & 0xff00000000000000) == 0x2d00000000000000)) && ((uVar2 & 0xffffffffff) != 0)) {
    if (((uVar2 ^ param_3) & 0xffffffffff) == 0) {
LAB_7101e721f4:
      FUN_710377a120(lVar10 + 0x40,"nam_goods_category_camp_skill",uVar5,lVar6,param_5,param_6,
                     param_7,param_8);
      return;
    }
  }
  else if (((uVar2 & 0xffffffffff) != 0 && (uVar2 & 0xff00000000000000) == 0x2d00000000000000) ==
           ((param_3 & 0xff00000000000000) == 0x2d00000000000000 && uVar11 != 0))
  goto LAB_7101e721f4;
  uVar2 = FUN_710327d3b0(lVar9,param_3);
  uVar2 = uVar2 & 0xffffffffff;
  if (((uVar2 == 0xdaaec3d9f) || (uVar2 == 0x106cb91611)) || (uVar2 == 0xe32ae387d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  uVar2 = FUN_710327d0d0(*(long *)(lVar8 + 0x318),param_3);
  if (((uVar2 & 0xffffffffff) == 0x7db8309f9) && (bVar1)) {
    FUN_710377a120(lVar10 + 0x40,"nam_goods_category_sp_item",uVar5,lVar6,param_5,param_6,param_7,
                   param_8);
  }
  else {
    plVar4 = *(long **)(*(long *)(lVar10 + 0x48) + 0x10);
    if (plVar4 != (long *)0x0) {
      local_54[0] = 0;
      local_54[1] = 0;
      FUN_71037a2270(plVar4,local_54,0,0);
    }
  }
  return;
}

