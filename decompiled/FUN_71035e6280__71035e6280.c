// addr:      71035e6280
// offset:    0x35e6280
// name:      FUN_71035e6280
// mangled:   
// signature: undefined8 __cdecl FUN_71035e6280(long param_1)


undefined8 FUN_71035e6280(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  undefined8 uStack_60;
  long local_58;
  long *local_50;
  long local_48;
  
  plVar13 = *(long **)(param_1 + 0x20);
  if (plVar13 != (long *)0x0) {
    do {
      uVar4 = *(uint *)(plVar13 + 5);
      FUN_710356bf30(&uStack_60,(ulong)uVar4,uVar4 ^ (int)uVar4 >> 0x1f,(long)(plVar13 + 6));
      if ((local_50 != (long *)0x0) && (*local_50 == local_48)) {
        uVar4 = *(uint *)(plVar13 + 5);
        FUN_710356bf30(&uStack_60,(ulong)uVar4,uVar4 ^ (int)uVar4 >> 0x1f,(long)(plVar13 + 6));
        pbVar1 = (byte *)(local_58 + 0x120);
        lVar6 = FUN_71038cd8c0();
        FUN_71038b4780(&uStack_60,lVar6 + 0x158,pbVar1);
        if ((local_50 != (long *)0x0) && (*local_50 == local_48)) {
          for (lVar6 = *(long *)(local_58 + 0x10); lVar6 != *(long *)(local_58 + 0x18);
              lVar6 = lVar6 + 0x20) {
            plVar7 = *(long **)(*(long *)(lVar6 + 8) + 0x148);
            plVar2 = (long *)(*(long *)(lVar6 + 8) + 0x150);
joined_r0x0071035e6348:
            if (plVar7 != plVar2) {
              do {
                bVar5 = *(byte *)((long)plVar7 + 0x61);
                uVar8 = (ulong)bVar5;
                uVar3 = uVar8;
                if (0xc < bVar5) {
                  uVar3 = 0xd;
                }
                if (uVar3 != 0) {
                  uVar3 = 0xfffffffffffffff2;
                  if (0xfffffffffffffff2 < ~uVar8) {
                    uVar3 = ~uVar8;
                  }
                  plVar9 = plVar7 + 4;
                  lVar11 = uVar3 + 1;
                  pcVar12 = "ink_color_set";
                  do {
                    if ((char)*plVar9 != *pcVar12) goto LAB_71035e63ac;
                    if ((char)*plVar9 == '\0') break;
                    plVar9 = (long *)((long)plVar9 + 1);
                    pcVar12 = pcVar12 + 1;
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 0);
                }
                if (bVar5 == 0xd) {
                  return 1;
                }
LAB_71035e63ac:
                plVar9 = (long *)plVar7[1];
                if ((long *)plVar7[1] != (long *)0x0) goto LAB_71035e63b4;
                plVar9 = plVar7 + 2;
                plVar10 = (long *)*plVar9;
                if ((long *)*plVar10 != plVar7) goto LAB_71035e63d8;
                plVar7 = plVar10;
                if (plVar10 == plVar2) break;
              } while( true );
            }
          }
        }
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return 0;
LAB_71035e63b4:
  do {
    plVar7 = plVar9;
    plVar9 = (long *)*plVar7;
  } while ((long *)*plVar7 != (long *)0x0);
  goto joined_r0x0071035e6348;
LAB_71035e63d8:
  do {
    lVar11 = *plVar9;
    plVar9 = (long *)(lVar11 + 0x10);
    plVar7 = (long *)*plVar9;
  } while (*plVar7 != lVar11);
  goto joined_r0x0071035e6348;
}

