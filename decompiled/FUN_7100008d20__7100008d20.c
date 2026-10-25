// addr:      7100008d20
// offset:    0x8d20
// name:      FUN_7100008d20
// mangled:   
// signature: uint __cdecl FUN_7100008d20(undefined8 * param_1, uint param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


uint FUN_7100008d20(undefined8 *param_1,uint param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  plVar6 = (long *)*param_1;
  lVar5 = *plVar6;
  if (*(char *)(lVar5 + 0x4fc8) != '\0') {
    return 0;
  }
  uVar9 = (uint)param_3;
  FUN_710001ec00(lVar5,(long)plVar6);
  FUN_71000272a0();
  *(undefined8 *)(lVar5 + 0x238) = 0;
  FUN_71000272a0();
  *(undefined8 *)(lVar5 + 0x230) = 0;
  if ((param_2 < 0x2b) && ((1L << ((ulong)param_2 & 0x3f) & 0x40004800000U) != 0)) {
    uVar9 = 1;
  }
  if (*(code **)(plVar6[0x10b] + 0x18) != (code *)0x0) {
    param_3 = (ulong)(uVar9 & 1);
    param_2 = (**(code **)(plVar6[0x10b] + 0x18))(plVar6,param_2);
  }
  uVar7 = 0x2a;
  if ((param_2 != 0x2a) && (iVar2 = FUN_7100014690(plVar6), iVar2 == 0 || param_2 != 0)) {
    uVar7 = param_2;
  }
  if (((plVar6[0x11d] + plVar6[0x121] != 0) && (*(char *)(lVar5 + 0x6ca) == '\0')) &&
     (*(char *)((long)plVar6 + 0x811) == '\0')) {
    *(undefined8 *)(lVar5 + 0x10) = 0;
    return 0;
  }
  *(char *)(lVar5 + 0x4fc8) = '\x01';
  FUN_71000047b0((long)plVar6);
  if ((long *)plVar6[0xe] != (long *)0x0) {
    FUN_71000060d0(lVar5,(long *)plVar6[0xe]);
    plVar6[0xe] = 0;
  }
  puVar1 = (uint *)(lVar5 + 0x4bd8);
  if (*puVar1 != 0) {
    uVar10 = 0;
    do {
      FUN_71000272a0();
      uVar10 = uVar10 + 1;
    } while (uVar10 < *puVar1);
  }
  *puVar1 = 0;
  uVar8 = uVar7;
  if ((*(char *)(lVar5 + 0x6ca) != '\0') ||
     (((uint)(*(char *)((long)plVar6 + 0x811) == '\0') & (uVar9 ^ 0xffffffff)) == 0)) {
    uVar3 = FUN_710001e860(plVar6,uVar9 & 1,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar8 = (uint)uVar3;
    if ((uint)uVar3 == 0 || uVar7 != 0) {
      uVar8 = uVar7;
    }
    goto LAB_7100008ea0;
  }
  uVar10 = *(ulong *)(*(long *)(lVar5 + 0xa8) + 0x150);
  if ((long)uVar10 < 0) {
    uVar10 = (long)*(int *)(*(long *)(lVar5 + 0xa8) + 0x18) << 2;
  }
  *(undefined1 *)(plVar6 + 0xc) = 0;
  if ((uVar10 == 0) || (*(ulong *)(*(long *)(lVar5 + 0xb60) + 0x30) <= uVar10)) {
joined_r0x007100008f44:
    if (plVar6 != (long *)0x0) {
LAB_7100008f58:
      *(long **)(lVar5 + 0xb80) = plVar6;
      if (*(char *)((long)plVar6 + 0x817) == '\0') {
        if (*(char *)((long)plVar6 + 0x816) == '\0') {
          if (*(char *)((long)plVar6 + 0x813) == '\0') {
            plVar4 = plVar6 + 0x1c;
          }
          else {
            plVar4 = plVar6 + 0x21;
          }
        }
        else {
          plVar4 = plVar6 + 0x2d;
        }
      }
      else {
        plVar4 = plVar6 + 0x25;
      }
      FUN_7100015de0(lVar5,(byte *)"Connection #%ld to host %s left intact\n",plVar6[0xd],*plVar4,
                     param_5,param_6,param_7,param_8);
      goto LAB_7100008ea0;
    }
  }
  else {
    FUN_7100015de0(lVar5,(byte *)"Connection cache is full, closing the oldest one.\n",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    plVar4 = (long *)FUN_710001ecf0(lVar5);
    if (plVar4 == (long *)0x0) goto joined_r0x007100008f44;
    *plVar4 = lVar5;
    FUN_710001e860(plVar4,0,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar4 != plVar6) goto LAB_7100008f58;
  }
  *(undefined8 *)(lVar5 + 0xb80) = 0;
LAB_7100008ea0:
  *param_1 = 0;
  FUN_7100019930(lVar5);
  return uVar8;
}

