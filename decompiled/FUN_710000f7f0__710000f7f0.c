// addr:      710000f7f0
// offset:    0xf7f0
// name:      FUN_710000f7f0
// mangled:   
// signature: ulong __cdecl FUN_710000f7f0(long * param_1, ulong param_2, long * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_710000f7f0(long *param_1,ulong param_2,long *param_3,undefined8 param_4,undefined8 param_5
                    ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long local_70 [2];
  
  lVar7 = *param_1;
  if ((param_2 & 1) == 0) {
    if ((*(char *)((long)param_1 + 0x816) == '\0') || (*(char *)((long)param_1 + 0x821) != '\0'))
    goto LAB_710000f840;
    local_70[0] = *(long *)(lVar7 + 0x408);
    if (*(char *)(lVar7 + 0x420) != '\0') {
      local_70[1] = *(undefined8 *)(lVar7 + 0x410);
      uVar5 = 2;
      goto LAB_710000f84c;
    }
  }
  else {
    if (*(char *)(lVar7 + 0x420) == '\0') {
LAB_710000f840:
      local_70[0] = *(long *)(lVar7 + 0x408);
    }
    else {
      local_70[0] = *(long *)(lVar7 + 0x410);
    }
  }
  uVar5 = 1;
LAB_710000f84c:
  uVar8 = 0;
  do {
    for (puVar9 = (undefined8 *)local_70[uVar8]; puVar9 != (undefined8 *)0x0;
        puVar9 = (undefined8 *)puVar9[1]) {
      pbVar10 = (byte *)*puVar9;
      pcVar3 = strchr((char *)pbVar10,0x3a);
      if (pcVar3 == (char *)0x0) {
        pbVar10 = (byte *)strchr((char *)pbVar10,0x3b);
        if (pbVar10 != (byte *)0x0) {
          do {
            do {
              pbVar6 = pbVar10;
              pbVar10 = pbVar6 + 1;
              bVar1 = *pbVar10;
            } while (bVar1 - 9 < 5);
          } while (bVar1 == 0x20);
          if ((bVar1 == 0) && (*pbVar6 == 0x3b)) {
            *pbVar6 = 0x3a;
            goto LAB_710000f9a4;
          }
        }
      }
      else {
        pbVar6 = (byte *)(pcVar3 + 1);
        bVar1 = *pbVar6;
        if (4 < bVar1 - 9) goto LAB_710000f8b0;
        do {
          do {
            pbVar6 = pbVar6 + 1;
            bVar1 = *pbVar6;
          } while (bVar1 - 9 < 5);
LAB_710000f8b0:
        } while (bVar1 == 0x20);
        if ((((bVar1 != 0) &&
             ((param_1[0x115] == 0 || (bVar2 = FUN_7100017490((byte *)"Host:",pbVar10,5), !bVar2))))
            && ((*(int *)(lVar7 + 0x480) != 3 ||
                (bVar2 = FUN_7100017490((byte *)"Content-Type:",(byte *)*puVar9,0xd), !bVar2)))) &&
           ((((*(char *)((long)param_1 + 0x822) == '\0' ||
              (bVar2 = FUN_7100017490((byte *)"Content-Length",(byte *)*puVar9,0xe), !bVar2)) &&
             ((param_1[0x118] == 0 ||
              (bVar2 = FUN_7100017490((byte *)"Connection",(byte *)*puVar9,10), !bVar2)))) &&
            (((int)param_1[0x46] != 0x14 ||
             (bVar2 = FUN_7100017490((byte *)"Transfer-Encoding:",(byte *)*puVar9,0x12), !bVar2)))))
           ) {
LAB_710000f9a4:
          uVar4 = FUN_710000f530(param_3,&DAT_71043ac591,*puVar9,param_4,param_5,param_6,param_7,
                                 param_8);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        }
      }
    }
    uVar8 = uVar8 + 1;
    if (uVar5 <= uVar8) {
      return 0;
    }
  } while( true );
}

