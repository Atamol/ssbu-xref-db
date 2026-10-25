// addr:      7102f6e320
// offset:    0x2f6e320
// name:      FUN_7102f6e320
// mangled:   
// signature: ulong * __cdecl FUN_7102f6e320(ulong * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong * FUN_7102f6e320(ulong *param_1,ulong param_2,long ****param_3,byte ****param_4,
                      long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long ****pppplVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x24;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar2 = &local_50;
  uVar7 = param_1[1];
  uVar6 = param_2 & 0xffffffffff;
  if (uVar7 != 0) {
    uVar3 = uVar7 - 1;
    if ((uVar3 & uVar7) == 0) {
      unaff_x24 = uVar3 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar7 <= uVar6) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar6 / uVar7;
        }
        unaff_x24 = uVar6 - uVar1 * uVar7;
      }
    }
    puVar5 = *(ulong **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (ulong *)0x0) {
      if ((uVar3 & uVar7) == 0) {
        do {
          puVar5 = (ulong *)*puVar5;
          if ((puVar5 == (ulong *)0x0) || (puVar5[1] != uVar6 && (puVar5[1] & uVar3) != unaff_x24))
          goto LAB_7102f6e3f8;
        } while (((puVar5[2] ^ param_2) & 0xffffffffff) != 0);
      }
      else {
        do {
          puVar5 = (ulong *)*puVar5;
          if (puVar5 == (ulong *)0x0) goto LAB_7102f6e3f8;
          uVar3 = puVar5[1];
          if (uVar3 != uVar6) {
            if (uVar7 <= uVar3) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar3 / uVar7;
              }
              uVar3 = uVar3 - uVar1 * uVar7;
            }
            if (uVar3 != unaff_x24) goto LAB_7102f6e3f8;
          }
        } while (((puVar5[2] ^ param_2) & 0xffffffffff) != 0);
      }
      goto LAB_7102f6e5fc;
    }
  }
LAB_7102f6e3f8:
  puVar5 = (ulong *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (ulong *)0x0) {
    local_44 = 0;
    local_50 = (long ***)&SUB_00000020;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
    puVar5 = (ulong *)FUN_710392e290(0x10,0x20,pppplVar2,param_4,param_5,param_6,param_7,param_8);
    param_3 = pppplVar2;
  }
  puVar5[1] = uVar6;
  puVar5[2] = param_2;
  *(undefined2 *)(puVar5 + 3) = 0;
  *puVar5 = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    if (uVar7 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar7 - 1 & uVar7) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar3) {
      uVar7 = uVar3;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 - 1 & uVar7) != 0) {
      uVar7 = std::__next_prime(uVar7);
    }
    uVar3 = param_1[1];
    if (uVar3 < uVar7) {
LAB_7102f6e554:
      FUN_7102f6e620(param_1,uVar7,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else if (uVar7 < uVar3) {
      uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
      if (uVar3 < 3 || (uVar3 - 1 & uVar3) != 0) {
        uVar1 = std::__next_prime(uVar1);
      }
      else if (1 < uVar1) {
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      uVar7 = uVar1;
      if (uVar1 < uVar3) goto LAB_7102f6e554;
    }
    uVar7 = param_1[1];
    if ((uVar7 - 1 & uVar7) == 0) {
      unaff_x24 = uVar7 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar7 <= uVar6) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar6 / uVar7;
        }
        unaff_x24 = uVar6 - uVar3 * uVar7;
      }
    }
  }
  uVar6 = *param_1;
  puVar4 = *(ulong **)(uVar6 + unaff_x24 * 8);
  if (puVar4 == (ulong *)0x0) {
    puVar4 = param_1 + 2;
    *puVar5 = *puVar4;
    *puVar4 = (ulong)puVar5;
    *(ulong **)(uVar6 + unaff_x24 * 8) = puVar4;
    if (*puVar5 != 0) {
      uVar6 = *(ulong *)(*puVar5 + 8);
      if ((uVar7 - 1 & uVar7) == 0) {
        uVar6 = uVar6 & uVar7 - 1;
      }
      else if (uVar7 <= uVar6) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar3 * uVar7;
      }
      puVar4 = (ulong *)(*param_1 + uVar6 * 8);
      goto LAB_7102f6e5ec;
    }
  }
  else {
    *puVar5 = *puVar4;
LAB_7102f6e5ec:
    *puVar4 = (ulong)puVar5;
  }
  param_1[3] = param_1[3] + 1;
LAB_7102f6e5fc:
  return puVar5 + 3;
}

