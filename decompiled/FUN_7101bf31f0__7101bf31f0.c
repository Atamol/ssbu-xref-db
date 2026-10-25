// addr:      7101bf31f0
// offset:    0x1bf31f0
// name:      FUN_7101bf31f0
// mangled:   
// signature: undefined4 __cdecl FUN_7101bf31f0(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined4
FUN_7101bf31f0(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong local_38;
  
  plVar10 = *(long **)(*(long *)(param_1 + 0x80) + 0x40);
  if (*plVar10 != 0) {
    local_38 = 0;
    FUN_71037aea50(&local_38,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar10 = (long *)*plVar10;
    lVar5 = *plVar10;
    lVar9 = 0;
    if (lVar5 != 0) {
      lVar9 = *(long *)(*(long *)(lVar5 + 0x18) + 0x40);
      if (*(uint *)(lVar9 + 0xc) < 2) {
        plVar7 = (long *)(*(long *)(lVar9 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar9 + 0xb) & 0x3f)) & 2)
                         * 0x20);
        do {
          if (((int)plVar7[3] == 0x13) && (plVar8 = plVar7, plVar7[2] == 2)) break;
          piVar1 = (int *)((long)plVar7 + 0x1c);
          plVar7 = plVar7 + (long)*piVar1 * 4;
          plVar8 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar8 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
      }
      param_3 = "root_type";
      FUN_71038f4d40(lVar5,plVar8,"root_type");
      lVar9 = *plVar10;
    }
    FUN_710372d940(lVar9,(long *)&local_38,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar4 = local_38;
    if (local_38 != 0) {
      lVar5 = *(long *)(local_38 + 0x10);
      uVar2 = **(undefined4 **)(local_38 + 8);
      lVar9 = 0;
      do {
        cVar3 = *(char *)(lVar5 + lVar9);
        if (cVar3 == 's') {
          lVar11 = *(long *)(uVar4 + 8);
          uVar6 = *(ulong *)(lVar11 + lVar9 * 8);
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          *(undefined8 *)(lVar11 + lVar9 * 8) = 0;
        }
        else if (cVar3 == '\0') {
          FUN_710392eb40(uVar4);
          return uVar2;
        }
        lVar9 = lVar9 + 1;
      } while( true );
    }
  }
  return 0;
}

