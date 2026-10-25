// addr:      7103318a70
// offset:    0x3318a70
// name:      FUN_7103318a70
// mangled:   
// signature: undefined4 __cdecl FUN_7103318a70(ulong param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined4
FUN_7103318a70(ulong param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int *local_88;
  int *local_80;
  undefined8 uStack_78;
  
  lVar12 = *(long *)(DAT_710532f730 + 8);
  uVar6 = FUN_71032b6c10(*(long *)(lVar12 + 0x1b8),param_1);
  if ((int)uVar6 == -1) {
    local_80 = (int *)((ulong)local_80 & 0xffffffffffffff00);
    local_88 = (int *)0x0;
  }
  else {
    FUN_71003a4ca0((uint *)&local_88,"tip_text_%04d",uVar6 & 0xffffffff,param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
  bVar4 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)&local_80);
  if ((bVar4) &&
     (bVar4 = FUN_71032b7ea0(*(long *)(lVar12 + 0x1b8),param_1), lVar2 = DAT_710532f730,
     (int)(uint)bVar4 <= param_2)) {
    lVar10 = *(long *)(DAT_710532f730 + 8);
    uVar6 = FUN_71032b92a0(*(long *)(lVar12 + 0x1b8),param_1);
    lVar10 = *(long *)(lVar10 + 0x3c8);
    uVar6 = FUN_71032b9e40(lVar10,uVar6);
    uVar7 = FUN_71032b9f40(lVar10,uVar6);
    if ((int)uVar7 == -1) {
LAB_7103318bd8:
      local_80 = (int *)0x0;
      uStack_78 = 0;
      local_88 = (int *)0x0;
      FUN_71032b81b0(*(long *)(lVar12 + 0x1b8),param_1,&local_88,param_4,param_5,param_6,param_7,
                     param_8);
      piVar3 = local_80;
      piVar1 = local_88;
      do {
        if (piVar1 == piVar3) {
          bVar4 = FUN_7101797bb0(param_1);
          uVar9 = 1;
          if (bVar4) {
            uVar9 = 2;
          }
joined_r0x007103318cac:
          if (local_88 == (int *)0x0) {
            return uVar9;
          }
          local_80 = local_88;
          FUN_710392eb40((ulong)local_88);
          return uVar9;
        }
        if (2 < *piVar1 - 4U) {
          if (*piVar1 == 2) {
            uVar6 = FUN_71032b23e0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8),
                                   *(ulong *)(piVar1 + 2));
            if (((uVar6 & 0xff00000000000000) == 0x6900000000000000 && (uVar6 & 0xffffffffff) != 0)
               && (uVar5 = FUN_71032719f0(uVar6,0,1), (uVar5 & 1) == 0)) {
LAB_7103318ca4:
              uVar9 = 0;
              goto joined_r0x007103318cac;
            }
          }
          else {
            puVar8 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                    *(ulong *)(piVar1 + 2));
            if ((((ulong)puVar8 & 0xff00000000000000) == 0xc100000000000000 &&
                 ((ulong)puVar8 & 0xffffffffff) != 0) &&
               (uVar6 = FUN_7101797560(puVar8,4,0), (uVar6 & 1) == 0)) goto LAB_7103318ca4;
          }
        }
        piVar1 = piVar1 + 4;
      } while( true );
    }
    uVar7 = FUN_71032b9f40(*(long *)(*(long *)(lVar2 + 8) + 0x3c8),uVar6);
    if (((int)uVar7 != -1) && (*(char *)*DAT_7105314510 == '\0')) {
      puVar11 = *(undefined8 **)(**(long **)((char *)*DAT_7105314510 + 8) + 0x40);
      uVar5 = *(uint *)(puVar11 + 1);
      if (0x28 < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar6 = FUN_71032b9f40(*(long *)(*(long *)(*(long *)(lVar2 + 8) + (long)(int)uVar5 * 8 + 8) +
                                      8),uVar6);
      if (((uint)uVar6 < 0x20) && ((*(uint *)*puVar11 & 1 << (ulong)((uint)uVar6 & 0x1f)) != 0))
      goto LAB_7103318bd8;
    }
  }
  return 0;
}

