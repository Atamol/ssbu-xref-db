// addr:      7100210e70
// offset:    0x210e70
// name:      FUN_7100210e70
// mangled:   
// signature: undefined8 __cdecl FUN_7100210e70(undefined8 param_1, long param_2, long param_3, uint param_4)


undefined8 FUN_7100210e70(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined2 uVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong __n;
  
  if (param_4 < 0x34) {
    lVar13 = *(long *)(param_2 + 0x10);
    uVar4 = *(ulong *)(param_2 + 0x18);
    uVar12 = *(ulong *)(lVar13 + 0x18);
    __n = (ulong)param_4;
    uVar2 = uVar4 + __n;
    if (uVar2 <= uVar12) {
      if (uVar4 < uVar2) {
        if (uVar12 != uVar4) {
          uVar10 = uVar4;
          do {
            lVar13 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 0x28);
            uVar1 = uVar10 + 1;
            uVar6 = *(undefined1 *)(lVar13 + uVar10);
            *(ulong *)(param_2 + 0x18) = uVar1;
            if (uVar12 == uVar1) break;
            bVar7 = *(byte *)(lVar13 + uVar1);
            uVar1 = uVar10 + 2;
            *(ulong *)(param_2 + 0x18) = uVar1;
            uVar3 = uVar1 + bVar7;
            if (uVar2 < uVar3) {
              return 0;
            }
            switch(uVar6) {
            case 0:
              if (bVar7 != 4) {
                return 0;
              }
              if (3 < uVar12 - uVar1) {
                uVar5 = *(undefined4 *)(lVar13 + uVar1);
                uVar10 = uVar10 + 6;
                *(ulong *)(param_2 + 0x18) = uVar10;
                *(undefined4 *)(param_3 + 0xd0) = uVar5;
                lVar13 = *(long *)(param_2 + 0x10);
                goto joined_r0x007100210fe8;
              }
              goto LAB_7100210ee8;
            case 1:
              if (bVar7 != 0x10) {
                return 0;
              }
              bVar9 = FUN_71001d0480(param_2,(void *)(param_3 + 0x88),0x10);
              if (!bVar9) {
                return 0;
              }
              *(undefined8 *)(param_3 + 0x98) = 0x10;
              uVar10 = *(ulong *)(param_2 + 0x18);
              lVar13 = *(long *)(param_2 + 0x10);
joined_r0x007100210fe8:
              if (uVar10 < uVar2) goto LAB_7100210fac;
              goto LAB_71002110b0;
            case 2:
              if (bVar7 != 1) {
                return 0;
              }
              if (uVar12 == uVar1) goto LAB_7100210ee8;
              uVar6 = *(undefined1 *)(lVar13 + uVar1);
              uVar10 = uVar10 + 3;
              *(ulong *)(param_2 + 0x18) = uVar10;
              *(undefined1 *)(param_3 + 0xa0) = uVar6;
              lVar13 = *(long *)(param_2 + 0x10);
              break;
            case 3:
              if (bVar7 != 2) {
                return 0;
              }
              if (uVar12 - uVar1 < 2) goto LAB_7100210ee8;
              uVar8 = *(undefined2 *)(lVar13 + uVar1);
              uVar10 = uVar10 + 4;
              *(ulong *)(param_2 + 0x18) = uVar10;
              *(undefined2 *)(param_3 + 0x80) = uVar8;
              lVar13 = *(long *)(param_2 + 0x10);
              break;
            case 4:
              if (bVar7 != 1) {
                return 0;
              }
              if (uVar12 == uVar1) goto LAB_7100210ee8;
              uVar6 = *(undefined1 *)(lVar13 + uVar1);
              *(ulong *)(param_2 + 0x18) = uVar10 + 3;
              *(undefined1 *)(param_3 + 0xa3) = uVar6;
              lVar13 = *(long *)(param_2 + 0x10);
              uVar10 = uVar10 + 3;
              break;
            case 5:
              if (bVar7 != 1) {
                return 0;
              }
              if (uVar12 == uVar1) goto LAB_7100210ee8;
              bVar7 = *(byte *)(lVar13 + uVar1);
              uVar10 = uVar10 + 3;
              *(ulong *)(param_2 + 0x18) = uVar10;
              *(uint *)(param_3 + 0xa8) = (uint)bVar7;
              lVar13 = *(long *)(param_2 + 0x10);
              break;
            default:
              if (uVar12 < uVar3) {
                return 0;
              }
              *(ulong *)(param_2 + 0x18) = uVar3;
              lVar13 = *(long *)(param_2 + 0x10);
              uVar10 = uVar3;
            }
            if (uVar2 <= uVar10) goto LAB_71002110b0;
LAB_7100210fac:
            uVar12 = *(ulong *)(lVar13 + 0x18);
          } while (uVar12 != uVar10);
        }
LAB_7100210ee8:
        *(undefined1 *)(param_2 + 8) = 1;
        return 0;
      }
LAB_71002110b0:
      *(undefined8 *)(param_3 + 0xf0) = 0;
      *(undefined8 *)(param_3 + 0xe0) = 0;
      *(undefined1 *)(param_3 + 0x130) = 0;
      if (param_4 == 0) {
        return 1;
      }
      if (param_4 < 0x35) {
        lVar11 = *(long *)(lVar13 + 0x10);
        lVar13 = *(long *)(lVar13 + 0x28);
        *(ulong *)(param_3 + 0xf0) = __n;
        memcpy((void *)(param_3 + 0xf8),(void *)(lVar11 + lVar13 + uVar4),__n);
        return 1;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,0xe0000019,0);
    }
  }
  return 0;
}

