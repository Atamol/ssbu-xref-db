// addr:      7101b08680
// offset:    0x1b08680
// name:      FUN_7101b08680
// mangled:   
// signature: undefined __cdecl FUN_7101b08680(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b08680(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_80;
  undefined4 local_78;
  ulong local_74;
  
  if (*(int *)(param_1 + 0x264) == 0) {
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
LAB_7101b08a58:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_71037760f0(*(long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x10),0);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),0x710439cfa5);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),0x71043dfcdf);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),0x710428ff7d);
    uVar4 = extraout_x1_00;
    if (*(char *)(param_1 + 0x2b4) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x470) + 0x18),0x710428ff7d);
      uVar4 = extraout_x1_01;
    }
    if (*(char *)(param_1 + 0x2c8) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x478) + 0x18),0x710428ff7d);
      uVar4 = extraout_x1_02;
    }
    if (*(char *)(param_1 + 0x2dc) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x480) + 0x18),0x710428ff7d);
      uVar4 = extraout_x1_03;
    }
    if (*(char *)(param_1 + 0x2f0) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x488) + 0x18),0x710428ff7d);
      uVar4 = extraout_x1_04;
    }
    if (*(long *)(param_1 + 0x4e8) != *(long *)(param_1 + 0x4f0)) {
      local_74 = local_74 & 0xffffffffffffff00;
      local_80 = 0x7a6972705f74756f;
      local_78 = 0x70755f65;
      pcVar10 = (char *)((long)&local_80 + 1);
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      if (1 < (ulong)((*(long *)(param_1 + 0x4f0) - *(long *)(param_1 + 0x4e8) >> 4) *
                     -0x3333333333333333)) {
        local_74 = 0x656c62756f645f;
        pcVar10 = (char *)((long)&local_80 + 1);
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),(long)&local_80);
      uVar4 = extraout_x1_05;
    }
    FUN_71032e5bf0(DAT_710532f7c8,uVar4,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    lVar6 = *(long *)(DAT_710532f7c8 + 8);
    if (((*(char *)(lVar6 + 0x6a) != '\0') && (*(char *)(lVar6 + 0x6b) == '\0')) &&
       (*(char *)(lVar6 + 0x69) != '\0')) {
      plVar11 = *(long **)(param_1 + 0x40);
      if (plVar11 != (long *)0x0) {
        lVar12 = *(long *)*plVar11;
        iVar3 = *(int *)(param_1 + 0x494);
        *(undefined4 *)((long *)*plVar11 + 2) = 0;
        plVar7 = *(long **)(lVar12 + 0x10);
        *plVar7 = lVar12;
        *(undefined4 *)(plVar7 + 1) = 0x48;
        lVar6 = *(long *)(lVar12 + 0x10);
        *(long *)(lVar12 + 0x10) = lVar6 + 0x10;
        lVar9 = *(long *)(*(long *)(lVar12 + 0x18) + 200);
        *(long *)(lVar12 + 0x10) = lVar6;
        if (lVar9 == lVar12) {
          lVar6 = *(long *)(*(long *)(lVar12 + 0x18) + 0x40);
          if (*(uint *)(lVar6 + 0xc) < 2) {
            plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                             ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar6 + 0xb) & 0x3f))
                             & 2) * 0x20);
            do {
              if (((int)plVar7[3] == 0x13) && (plVar5 = plVar7, plVar7[2] == 2)) break;
              piVar1 = (int *)((long)plVar7 + 0x1c);
              plVar7 = plVar7 + (long)*piVar1 * 4;
              plVar5 = &DAT_7104862960;
            } while (*piVar1 != 0);
          }
          else {
            plVar5 = (long *)(*(long *)(lVar6 + 0x10) + 0x10);
          }
          param_3 = "finalize";
          FUN_71038f4d40(lVar12,plVar5,"finalize");
          param_2 = extraout_x1_06;
        }
        else {
          FUN_71038f4b20(lVar12,"finalize");
          FUN_71038f4fc0(lVar12,-2);
          param_2 = extraout_x1;
        }
        puVar8 = (undefined8 *)(*(long *)(lVar12 + 0x10) + -0x10);
        if ((puVar8 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar12 + 0x10) + -8) & 0xf) != 6))
        {
          *(undefined8 **)(lVar12 + 0x10) = puVar8;
        }
        else {
          lVar6 = *(long *)*plVar11;
          plVar7 = *(long **)(lVar6 + 0x10);
          *(undefined4 *)(plVar7 + 1) = 0x13;
          *plVar7 = (long)iVar3;
          *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 0x10;
          *(int *)(*plVar11 + 0x10) = *(int *)(*plVar11 + 0x10) + 1;
          FUN_7103377130(plVar11,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
          param_2 = extraout_x1_07;
        }
      }
      if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) goto LAB_7101b08a58;
      FUN_7103775fa0((long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x10),param_2,
                     (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (*(char *)(param_1 + 0x389) == '\0') {
        FUN_7103313da0(*(undefined8 **)(DAT_710532f8d0 + 8),0,(long ****)param_3,param_4,param_5,
                       param_6,param_7,param_8);
      }
      if (0x12 < *(uint *)(param_1 + 0x25c)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x25c) * 4 + 0x210) = 0;
    }
  }
  return;
}

