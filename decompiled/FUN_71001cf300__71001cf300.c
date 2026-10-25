// addr:      71001cf300
// offset:    0x1cf300
// name:      FUN_71001cf300
// mangled:   
// signature: undefined __cdecl FUN_71001cf300(long param_1, void * param_2, ulong param_3)


void FUN_71001cf300(long param_1,void *param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  
  uVar6 = *(ulong *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x20);
  uVar10 = *(ulong *)(param_1 + 0x28);
  if (uVar10 < param_3 + uVar6 * 8 + (ulong)(7 - iVar8)) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    if (iVar8 == 7) {
      lVar9 = *(long *)(param_1 + 0x10);
      uVar10 = param_3 >> 3;
      if (*(ulong *)(lVar9 + 0x18) < uVar6 + uVar10) {
        FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Buffer.cpp",0xe8,
                       0xe0000019,0);
      }
      else {
        memcpy(param_2,(void *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 0x28) + uVar6),uVar10);
      }
      uVar6 = *(long *)(param_1 + 0x18) + uVar10;
      *(ulong *)(param_1 + 0x18) = uVar6;
    }
    else if (param_3 < 8) {
      uVar10 = 0;
    }
    else {
      lVar9 = 0;
      uVar14 = 0x10;
      while( true ) {
        if (uVar10 < (ulong)(7U - iVar8) + uVar6 * 8 + 8) {
          *(undefined1 *)(param_1 + 8) = 1;
        }
        else {
          pcVar5 = (char *)FUN_71001cc3a0(*(long *)(param_1 + 0x10),uVar6);
          cVar2 = *pcVar5;
          pbVar4 = (byte *)FUN_71001cc3a0(*(long *)(param_1 + 0x10),*(long *)(param_1 + 0x18) + 1);
          *(byte *)((long)param_2 + lVar9) =
               *pbVar4 >> (ulong)(iVar8 + 1U & 0x1f) | cVar2 << (ulong)(7U - iVar8 & 0x1f);
          uVar6 = *(long *)(param_1 + 0x18) + 1;
          *(ulong *)(param_1 + 0x18) = uVar6;
        }
        uVar10 = lVar9 + 1;
        if (param_3 < uVar14) break;
        lVar9 = lVar9 + 1;
        iVar8 = *(int *)(param_1 + 0x20);
        uVar10 = *(ulong *)(param_1 + 0x28);
        uVar14 = uVar14 + 8;
      }
    }
    if ((param_3 & 7) != 0) {
      uVar11 = (uint)param_3 & 7;
      uVar7 = *(uint *)(param_1 + 0x20);
      uVar13 = 0;
      uVar15 = 0x80;
      while( true ) {
        uVar12 = (undefined1)uVar13;
        if (*(ulong *)(param_1 + 0x28) < (uVar6 << 3 | 1) + (ulong)(7 - uVar7)) {
          *(undefined1 *)(param_1 + 8) = 1;
        }
        else {
          uVar3 = uVar7 & 0x1f;
          pbVar4 = (byte *)FUN_71001cc3a0(*(long *)(param_1 + 0x10),uVar6);
          bVar1 = *pbVar4;
          if (*(int *)(param_1 + 0x20) == 0) {
            *(undefined4 *)(param_1 + 0x20) = 8;
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
            uVar7 = 7;
            *(undefined4 *)(param_1 + 0x20) = 7;
          }
          else {
            uVar7 = *(int *)(param_1 + 0x20) - 1;
            *(uint *)(param_1 + 0x20) = uVar7;
          }
          if ((1 << (ulong)uVar3 & (bVar1 ^ 0xff)) == 0) {
            uVar13 = uVar15 | uVar13;
            uVar12 = (undefined1)uVar13;
          }
        }
        if ((uVar11 - 1 & 0xff) == 0) break;
        uVar11 = uVar11 - 1;
        uVar6 = *(ulong *)(param_1 + 0x18);
        uVar15 = uVar15 >> 1;
      }
      *(undefined1 *)((long)param_2 + uVar10) = uVar12;
    }
  }
  return;
}

