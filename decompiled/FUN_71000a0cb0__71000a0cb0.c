// addr:      71000a0cb0
// offset:    0xa0cb0
// name:      FUN_71000a0cb0
// mangled:   
// signature: long __cdecl FUN_71000a0cb0(long param_1, long param_2)


/* WARNING: Removing unreachable block (ram,0x0071000a0db0) */
/* WARNING: Removing unreachable block (ram,0x0071000a0e40) */

long FUN_71000a0cb0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  uint uVar13;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (0 < iVar2) {
    lVar11 = *(long *)(param_1 + 0x30);
    iVar6 = 0;
    iVar7 = *(int *)(param_1 + 0x28);
    do {
      pcVar12 = (char *)(lVar11 + (long)iVar7 * 0xa0 + 0x90);
      if (*pcVar12 == '\0') {
        uVar13 = (uint)*(float *)(*(long *)(*(long *)(param_2 + 0x238) + 0x338) + 0x18);
        lVar10 = lVar11 + (long)iVar7 * 0xa0;
        lVar4 = (**(code **)(*(long *)(param_2 + 0x828) + 0x10))
                          (param_2 + 0x828,(ulong)uVar13 * 0x70,0x80);
        plVar5 = (long *)(lVar10 + 0x50);
        *plVar5 = lVar4;
        if (lVar4 == 0) {
          FUN_7100093650();
          goto LAB_71000a0d2c;
        }
        uVar3 = uVar13 - 1;
        if (uVar3 == 0) goto LAB_71000a0e94;
        if (uVar3 != 1) {
          lVar9 = 0;
          lVar8 = 0;
          do {
            *(long *)(lVar4 + lVar9 + 0x58) = lVar4 + lVar9 + 0x70;
            lVar4 = *plVar5 + lVar9;
            lVar9 = lVar9 + 0xe0;
            *(long *)(lVar4 + 200) = lVar4 + 0xe0;
            lVar4 = *plVar5;
            lVar8 = lVar8 + 2;
          } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar8);
          if ((uVar3 & 1) != 0) {
LAB_71000a0e0c:
            lVar4 = lVar4 + lVar8 * 0x70;
            *(long *)(lVar4 + 0x58) = lVar4 + 0x70;
            lVar4 = *plVar5;
          }
          if (1 < uVar13) {
            if (uVar13 == 2) {
              lVar9 = 1;
            }
            else {
              lVar8 = 0;
              lVar9 = 1;
              do {
                *(long *)(lVar4 + lVar8 + 0xd0) = lVar4 + lVar8;
                lVar4 = *plVar5 + lVar8;
                lVar8 = lVar8 + 0xe0;
                *(long *)(lVar4 + 0x140) = lVar4 + 0x70;
                lVar4 = *plVar5;
                lVar9 = lVar9 + 2;
              } while ((ulong)uVar13 - (ulong)(~uVar13 & 1) != lVar9);
              if ((~uVar13 & 1) == 0) goto LAB_71000a0e94;
            }
            lVar4 = lVar4 + lVar9 * 0x70;
            *(long *)(lVar4 + 0x60) = lVar4 + -0x70;
            lVar4 = *plVar5;
          }
LAB_71000a0e94:
          *(long *)(lVar4 + (ulong)uVar3 * 0x70 + 0x58) = lVar4;
          *(ulong *)(*plVar5 + 0x60) = *plVar5 + (ulong)uVar3 * 0x70;
          lVar11 = lVar11 + (long)iVar7 * 0xa0;
          lVar4 = *plVar5;
          *(long *)(lVar11 + 0x58) = lVar4;
          *(long *)(lVar11 + 0x60) = lVar4;
          *pcVar12 = '\x01';
          *(undefined4 *)(lVar11 + 0x80) = 0;
          *(undefined4 *)(lVar11 + 0x70) = 0;
          *(undefined4 *)(lVar11 + 0x78) = 0;
          *(undefined8 *)(lVar11 + 0x68) = 0;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          return lVar10;
        }
        lVar8 = 0;
        goto LAB_71000a0e0c;
      }
      iVar6 = iVar6 + 1;
      iVar1 = 0;
      if (iVar7 + 1 < iVar2) {
        iVar1 = iVar7 + 1;
      }
      *(int *)(param_1 + 0x28) = iVar1;
      iVar7 = iVar1;
    } while (iVar6 < iVar2);
  }
  FUN_7100093650();
LAB_71000a0d2c:
  FUN_7100093660();
  return 0;
}

