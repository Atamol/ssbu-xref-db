// addr:      7102791f50
// offset:    0x2791f50
// name:      FUN_7102791f50
// mangled:   
// signature: undefined __cdecl FUN_7102791f50(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102791f50(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = *(float *)(*(long *)(param_1 + 0xa90) + 0x28);
  bVar2 = false;
  if ((0.0 <= fVar4) && (bVar2 = false, !NAN(fVar4))) {
    bVar2 = fVar4 < 25.0;
  }
  if (bVar2) {
    lVar3 = 0x71050df150;
  }
  else if ((fVar4 < 25.0) || (70.0 <= fVar4)) {
    if ((fVar4 < 70.0) || (105.0 <= fVar4)) {
      if ((fVar4 < 105.0) || (140.0 <= fVar4)) {
        if ((fVar4 < 140.0) || (175.0 <= fVar4)) {
          if ((fVar4 < 175.0) || (230.0 <= fVar4)) {
            if ((fVar4 < 230.0) || (295.0 <= fVar4)) {
              if ((fVar4 < 295.0) || (340.0 <= fVar4)) {
                if (fVar4 < 340.0) {
                  return;
                }
                if (360.0 <= fVar4) {
                  return;
                }
                lVar3 = 0x71050df250;
              }
              else {
                lVar3 = 0x71050df230;
              }
            }
            else {
              lVar3 = 0x71050df210;
            }
          }
          else {
            lVar3 = 0x71050df1f0;
          }
        }
        else {
          lVar3 = 0x71050df1d0;
        }
      }
      else {
        lVar3 = 0x71050df1b0;
      }
    }
    else {
      lVar3 = 0x71050df190;
    }
  }
  else {
    lVar3 = 0x71050df170;
  }
  if ((*(int *)(param_1 + 0xad0) != *(int *)(lVar3 + 8)) || ((param_2 & 1) != 0)) {
    lVar1 = 0x10;
    if (*(int *)(param_1 + 0x734) != 0) {
      lVar1 = 0x18;
    }
    FUN_7102633a10(*(long *)(param_1 + 0x318),*(long **********)(lVar3 + lVar1),1,param_4,param_5,
                   param_6,param_7,param_8);
    *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)(lVar3 + 8);
  }
  return;
}

