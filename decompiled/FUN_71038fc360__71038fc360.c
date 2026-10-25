// addr:      71038fc360
// offset:    0x38fc360
// name:      FUN_71038fc360
// mangled:   
// signature: int __cdecl FUN_71038fc360(long param_1, long param_2, undefined4 param_3)


int FUN_71038fc360(long param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 *puVar8;
  short sVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  int local_68;
  undefined4 local_64;
  
  uVar6 = *(undefined2 *)(param_1 + 0xc4);
  if (param_2 == 0) {
    sVar9 = 1;
  }
  else {
    sVar9 = *(short *)(param_2 + 0xc6) + 1;
  }
  *(short *)(param_1 + 0xc6) = sVar9;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  local_64 = param_3;
  iVar7 = FUN_71038fb4b0(param_1,FUN_71038fc6c0,&local_64);
  if (iVar7 == -1) {
    iVar7 = 2;
  }
  else {
    while (1 < iVar7) {
      lVar11 = *(long *)(param_1 + 0x20);
      local_68 = iVar7;
      if (lVar11 == 0) {
LAB_71038fc610:
        plVar12 = *(long **)(param_1 + 0x10);
        *(char *)(param_1 + 0xc) = (char)iVar7;
        if (iVar7 == 6) {
          puVar8 = FUN_7103917660(param_1,"error in error handling",0x17);
          *plVar12 = (long)puVar8;
          *(uint *)(plVar12 + 1) = *(byte *)(puVar8 + 1) | 0x40;
          iVar7 = local_68;
        }
        else if (iVar7 == 4) {
          lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
          *plVar12 = lVar11;
          *(uint *)(plVar12 + 1) = *(byte *)(lVar11 + 8) | 0x40;
        }
        else {
          *plVar12 = plVar12[-2];
          plVar12[1] = plVar12[-1];
        }
        *(long **)(param_1 + 0x10) = plVar12 + 2;
        *(long **)(*(long *)(param_1 + 0x20) + 8) = plVar12 + 2;
        break;
      }
      while ((*(byte *)(lVar11 + 0x42) >> 4 & 1) == 0) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) {
          if (iVar7 < 2) goto LAB_71038fc688;
          goto LAB_71038fc610;
        }
      }
      plVar12 = (long *)(*(long *)(param_1 + 0x38) + *(long *)(lVar11 + 0x38));
      FUN_71038fdfe0(param_1,(ulong)plVar12);
      if (iVar7 == 6) {
        puVar8 = FUN_7103917660(param_1,"error in error handling",0x17);
        *plVar12 = (long)puVar8;
        bVar5 = *(byte *)(puVar8 + 1);
LAB_71038fc458:
        *(uint *)(plVar12 + 1) = bVar5 | 0x40;
      }
      else {
        if (iVar7 == 4) {
          lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
          *plVar12 = lVar10;
          bVar5 = *(byte *)(lVar10 + 8);
          goto LAB_71038fc458;
        }
        lVar10 = *(long *)(*(long *)(param_1 + 0x10) + -8);
        *plVar12 = *(long *)(*(long *)(param_1 + 0x10) + -0x10);
        plVar12[1] = lVar10;
      }
      *(long **)(param_1 + 0x10) = plVar12 + 2;
      *(long *)(param_1 + 0x20) = lVar11;
      bVar5 = *(byte *)(lVar11 + 0x42);
      *(undefined2 *)(param_1 + 0xc4) = 0;
      *(byte *)(param_1 + 0xc9) = bVar5 & 1;
      plVar12 = plVar12 + 2;
      lVar10 = lVar11;
      do {
        puVar8 = (undefined8 *)(lVar10 + 8);
        lVar10 = *(long *)(lVar10 + 0x10);
        plVar2 = (long *)*puVar8;
        if ((long *)*puVar8 <= plVar12) {
          plVar2 = plVar12;
        }
        plVar12 = plVar2;
      } while (lVar10 != 0);
      iVar13 = (int)((ulong)((long)plVar2 - *(long *)(param_1 + 0x38)) >> 4);
      iVar7 = iVar13 + 8;
      if (-1 < iVar13 + 1) {
        iVar7 = iVar13 + 1;
      }
      uVar1 = iVar13 + (iVar7 >> 3) + 0xb;
      if (999999 < (int)uVar1) {
        uVar1 = 1000000;
      }
      plVar12 = (long *)(lVar11 + 0x18);
      lVar10 = *plVar12;
      lVar3 = lVar11;
      if (*(int *)(param_1 + 0xb8) < 0xf4241) {
        while ((lVar10 != 0 && (lVar14 = *(long *)(lVar10 + 0x18), lVar14 != 0))) {
          puVar8 = *(undefined8 **)(param_1 + 0x18);
          (*(code *)*puVar8)(puVar8[1],lVar10,0x48,0);
          lVar4 = 0;
          if (lVar10 != 0) {
            lVar4 = -0x48;
          }
          puVar8[3] = lVar4 + puVar8[3];
          *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
          *plVar12 = lVar14;
          plVar12 = (long *)(lVar14 + 0x18);
          lVar10 = *plVar12;
          *(long *)(lVar14 + 0x10) = lVar3;
          lVar3 = lVar14;
        }
      }
      else {
        *plVar12 = 0;
        while (lVar10 != 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x18);
          lVar14 = *(long *)(lVar10 + 0x18);
          (*(code *)*puVar8)(puVar8[1],lVar10,0x48,0);
          lVar3 = 0;
          if (lVar10 != 0) {
            lVar3 = -0x48;
          }
          puVar8[3] = lVar3 + puVar8[3];
          *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
          lVar10 = lVar14;
        }
      }
      if ((iVar13 < 1000000) && ((int)uVar1 < *(int *)(param_1 + 0xb8))) {
        FUN_71038fb530(param_1,uVar1);
      }
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar11 + 0x28);
      iVar7 = FUN_71038fb4b0(param_1,FUN_71038fc7e0,&local_68);
    }
  }
LAB_71038fc688:
  *(undefined2 *)(param_1 + 0xc4) = uVar6;
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + -1;
  return iVar7;
}

