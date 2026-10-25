// addr:      7102794980
// offset:    0x2794980
// name:      FUN_7102794980
// mangled:   
// signature: undefined __cdecl FUN_7102794980(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102794980(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = *(float *)(*(long *)(param_1 + 0xa78) + 0x28);
  bVar1 = false;
  if ((0.0 <= fVar3) && (bVar1 = false, !NAN(fVar3))) {
    bVar1 = fVar3 < 25.0;
  }
  if (bVar1) {
    lVar2 = 0x71050dfb18;
  }
  else if ((fVar3 < 25.0) || (70.0 <= fVar3)) {
    if ((fVar3 < 70.0) || (105.0 <= fVar3)) {
      if ((fVar3 < 105.0) || (140.0 <= fVar3)) {
        if ((fVar3 < 140.0) || (175.0 <= fVar3)) {
          if ((fVar3 < 175.0) || (230.0 <= fVar3)) {
            if ((fVar3 < 230.0) || (295.0 <= fVar3)) {
              if ((fVar3 < 295.0) || (340.0 <= fVar3)) {
                if (fVar3 < 340.0) {
                  return;
                }
                if (360.0 <= fVar3) {
                  return;
                }
                lVar2 = 0x71050dfbd8;
              }
              else {
                lVar2 = 0x71050dfbc0;
              }
            }
            else {
              lVar2 = 0x71050dfba8;
            }
          }
          else {
            lVar2 = 0x71050dfb90;
          }
        }
        else {
          lVar2 = 0x71050dfb78;
        }
      }
      else {
        lVar2 = 0x71050dfb60;
      }
    }
    else {
      lVar2 = 0x71050dfb48;
    }
  }
  else {
    lVar2 = 0x71050dfb30;
  }
  if ((*(int *)(param_1 + 0xaf0) != *(int *)(lVar2 + 8)) || ((param_2 & 1) != 0)) {
    FUN_7102633a10(*(long *)(param_1 + 0x318),*(long **********)(lVar2 + 0x10),1,param_4,param_5,
                   param_6,param_7,param_8);
    *(undefined4 *)(param_1 + 0xaf0) = *(undefined4 *)(lVar2 + 8);
  }
  return;
}

