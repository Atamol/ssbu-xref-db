// addr:      710391ba90
// offset:    0x391ba90
// name:      FUN_710391ba90
// mangled:   
// signature: undefined4 __cdecl FUN_710391ba90(long * param_1, long * param_2, uint * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined4
FUN_710391ba90(long *param_1,long *param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar5 = (byte *)*param_2;
  *param_2 = (long)(pbVar5 + 1);
  bVar1 = *pbVar5;
  *param_3 = 0;
  uVar6 = (uint)bVar1;
  uVar4 = 5;
  switch(uVar6) {
  case 0x20:
    goto switchD_710391bacc_caseD_20;
  case 0x21:
    if (*(byte *)*param_2 - 0x30 < 10) {
      uVar3 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar7 = pbVar5 + 1;
        *param_2 = (long)pbVar7;
        iVar2 = (uint)*pbVar5 + (int)uVar3 * 10;
        uVar6 = iVar2 - 0x30;
        uVar3 = (ulong)uVar6;
        pbVar5 = pbVar7;
      } while ((int)uVar6 < 0xccccccc && *pbVar7 - 0x30 < 10);
      if (0xf < iVar2 - 0x31U) {
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(*param_1,"integral size (%d) out of limits [1,%d]",uVar3,0x10,param_5,param_6
                       ,param_7,param_8);
      }
    }
    else {
      uVar6 = 8;
    }
    *(uint *)((long)param_1 + 0xc) = uVar6;
    goto switchD_710391bacc_caseD_20;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(*param_1,"invalid format option \'%c\'",(ulong)uVar6,param_4,param_5,param_6,
                   param_7,param_8);
  case 0x3c:
  case 0x3d:
    *(undefined4 *)(param_1 + 1) = 1;
    goto switchD_710391bacc_caseD_20;
  case 0x3e:
    *(undefined4 *)(param_1 + 1) = 0;
switchD_710391bacc_caseD_20:
    uVar4 = 8;
    break;
  case 0x42:
    uVar4 = 1;
    *param_3 = 1;
    break;
  case 0x48:
    uVar6 = 2;
    goto LAB_710391bc5c;
  case 0x49:
    if (*(byte *)*param_2 - 0x30 < 10) {
      uVar6 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar7 = pbVar5 + 1;
        *param_2 = (long)pbVar7;
        iVar2 = (uint)*pbVar5 + uVar6 * 10;
        uVar6 = iVar2 - 0x30;
        pbVar5 = pbVar7;
      } while ((int)uVar6 < 0xccccccc && *pbVar7 - 0x30 < 10);
      if (0xf < iVar2 - 0x31U) {
LAB_710391bd8c:
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(*param_1,"integral size (%d) out of limits [1,%d]",(ulong)uVar6,0x10,param_5,
                       param_6,param_7,param_8);
      }
    }
    else {
      uVar6 = 4;
    }
    goto LAB_710391bc5c;
  case 0x4a:
  case 0x4c:
  case 0x54:
    uVar6 = 8;
LAB_710391bc5c:
    *param_3 = uVar6;
    uVar4 = 1;
    break;
  case 0x58:
    uVar4 = 7;
    break;
  case 0x62:
    uVar6 = 1;
    goto LAB_710391bd4c;
  case 99:
    if (*(byte *)*param_2 - 0x30 < 10) {
      uVar6 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar7 = pbVar5 + 1;
        *param_2 = (long)pbVar7;
        uVar6 = ((uint)*pbVar5 + uVar6 * 10) - 0x30;
        pbVar5 = pbVar7;
      } while ((int)uVar6 < 0xccccccc && *pbVar7 - 0x30 < 10);
      *param_3 = uVar6;
      if (uVar6 != 0xffffffff) {
        return 3;
      }
    }
    else {
      *param_3 = 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(*param_1,"missing size for format option \'c\'",param_3,param_4,param_5,param_6,
                   param_7,param_8);
  case 100:
    uVar6 = 8;
    goto LAB_710391bb1c;
  case 0x66:
  case 0x6e:
    uVar6 = 4;
LAB_710391bb1c:
    *param_3 = uVar6;
    uVar4 = 2;
    break;
  case 0x68:
    uVar6 = 2;
    goto LAB_710391bd4c;
  case 0x69:
    if (*(byte *)*param_2 - 0x30 < 10) {
      uVar6 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar7 = pbVar5 + 1;
        *param_2 = (long)pbVar7;
        iVar2 = (uint)*pbVar5 + uVar6 * 10;
        uVar6 = iVar2 - 0x30;
        pbVar5 = pbVar7;
      } while ((int)uVar6 < 0xccccccc && *pbVar7 - 0x30 < 10);
      if (0xf < iVar2 - 0x31U) {
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(*param_1,"integral size (%d) out of limits [1,%d]",(ulong)uVar6,0x10,param_5,
                       param_6,param_7,param_8);
      }
    }
    else {
      uVar6 = 4;
    }
    goto LAB_710391bd4c;
  case 0x6a:
  case 0x6c:
    uVar6 = 8;
LAB_710391bd4c:
    uVar4 = 0;
    *param_3 = uVar6;
    break;
  case 0x73:
    if (*(byte *)*param_2 - 0x30 < 10) {
      uVar6 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar7 = pbVar5 + 1;
        *param_2 = (long)pbVar7;
        iVar2 = (uint)*pbVar5 + uVar6 * 10;
        uVar6 = iVar2 - 0x30;
        pbVar5 = pbVar7;
      } while ((int)uVar6 < 0xccccccc && *pbVar7 - 0x30 < 10);
      if (0xf < iVar2 - 0x31U) goto LAB_710391bd8c;
    }
    else {
      uVar6 = 8;
    }
    *param_3 = uVar6;
    uVar4 = 4;
    break;
  case 0x78:
    *param_3 = 1;
    uVar4 = 6;
    break;
  case 0x7a:
    break;
  }
  return uVar4;
}

