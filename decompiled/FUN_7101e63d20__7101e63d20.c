// addr:      7101e63d20
// offset:    0x1e63d20
// name:      FUN_7101e63d20
// mangled:   
// signature: undefined __cdecl FUN_7101e63d20(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e63d20(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  byte ****ppppbVar7;
  long ****pppplVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar6 = &local_50;
  if (*(char *)(param_1 + 0x271) == '\0') {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x272);
  uVar10 = (ulong)bVar1;
  plVar4 = (long *)(param_1 + 0x1c8);
  if (((uVar10 < 4) && (lVar11 = *(long *)(*plVar4 + uVar10 * 8 + 0x48), lVar11 != 0)) &&
     (*(char *)(lVar11 + 0xb0) != '\0')) {
    if (*(char *)(param_1 + 0x1d2) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(lVar11 + 8),0x710438d258);
      *(undefined1 *)(lVar11 + 0xb1) = 0;
    }
    FUN_7101e9b720(plVar4,bVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar11 = param_1 + uVar10 * 4;
    param_3 = (long *********)(ulong)*(ushort *)(lVar11 + 0x254);
    if (param_3 != (long *********)0xffff) {
      param_4 = (byte ****)0x0;
      FUN_710259c720(*(long *)(*DAT_7105329f98 + 0x20),*(byte *)(lVar11 + 0x256),
                     *(ushort *)(lVar11 + 0x254),0,param_5,param_6,param_7,param_8);
      *(undefined2 *)(lVar11 + 0x254) = 0xffff;
      *(undefined1 *)(lVar11 + 0x256) = 0;
    }
    for (plVar3 = *(long **)(param_1 + 0x280); (long *)(param_1 + 0x278) != plVar3;
        plVar3 = (long *)plVar3[1]) {
      if (*(byte *)(plVar3 + 2) == bVar1) {
        if ((long *)(param_1 + 0x278) != plVar3) {
          *(long *)(*plVar3 + 8) = plVar3[1];
          *(long *)plVar3[1] = *plVar3;
          *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x288) + -1;
          if (plVar3 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar3);
          }
        }
        break;
      }
    }
  }
  lVar11 = *(long *)(**(long **)(param_1 + 0x298) + 8);
  if (((*(char *)(lVar11 + 0x388) == '\0') ||
      (uVar9 = (ulong)*(byte *)(*(long **)(param_1 + 0x298) + 1), 2 < uVar9)) ||
     (lVar11 = *(long *)(lVar11 + uVar9 * 8 + 0x78), lVar11 == 0 || 3 < bVar1)) {
    FUN_7101e9b720(plVar4,bVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  uVar2 = *(ushort *)(lVar11 + uVar10 * 0x18 + 0x20);
  ppppbVar7 = (byte ****)(ulong)uVar2;
  if (uVar2 == 0xffff) {
    if ((*(char *)(param_1 + 0x1d2) != '\0') &&
       (lVar11 = *(long *)(*plVar4 + uVar10 * 8 + 0x48), lVar11 != 0)) {
      FUN_7103778300(0x3f800000,*(long *)(lVar11 + 8),0x710438d258);
      *(undefined1 *)(lVar11 + 0xb1) = 0;
    }
    FUN_7101e9b720(plVar4,bVar1,param_3,ppppbVar7,param_5,param_6,param_7,param_8);
    lVar11 = param_1 + uVar10 * 4;
    if (*(ushort *)(lVar11 + 0x254) == 0xffff) {
      return;
    }
    FUN_710259c720(*(long *)(*DAT_7105329f98 + 0x20),*(byte *)(lVar11 + 0x256),
                   *(ushort *)(lVar11 + 0x254),0,param_5,param_6,param_7,param_8);
    *(undefined2 *)(lVar11 + 0x254) = 0xffff;
    *(undefined1 *)(lVar11 + 0x256) = 0;
    return;
  }
  pppplVar8 = (long ****)(ulong)*(byte *)(lVar11 + uVar10 * 0x18 + 0x22);
  pppplVar5 = (long ****)(param_1 + 0x250);
  FUN_7101e957e0(plVar4,bVar1,(long)pppplVar5,ppppbVar7,pppplVar8,param_6,param_7,param_8);
  plVar4 = (long *)FUN_710392e290(0x10,0x18,pppplVar5,ppppbVar7,pppplVar8,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&SUB_00000018;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar10 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x18,pppplVar6,ppppbVar7,pppplVar8,param_6,param_7,
                                          param_8), plVar4 != (long *)0x0)) goto LAB_7101e63f10;
    }
    plVar4 = (long *)0x0;
  }
LAB_7101e63f10:
  *(byte *)(plVar4 + 2) = bVar1;
  lVar11 = *(long *)(param_1 + 0x278);
  *plVar4 = lVar11;
  plVar4[1] = param_1 + 0x278;
  *(long **)(lVar11 + 8) = plVar4;
  *(long **)(param_1 + 0x278) = plVar4;
  *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x288) + 1;
  return;
}

