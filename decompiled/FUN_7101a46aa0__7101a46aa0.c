// addr:      7101a46aa0
// offset:    0x1a46aa0
// name:      FUN_7101a46aa0
// mangled:   
// signature: undefined __cdecl FUN_7101a46aa0(long param_1, undefined8 param_2, ulong param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a46aa0(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar2;
  undefined8 extraout_x1_01;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    uVar7 = (*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
    uVar4 = (ulong)*(int *)(param_1 + 0x3d8);
    if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    *(uint *)(*(long *)(param_1 + 0x358) + 0x48) =
         (uint)*(byte *)(*(long *)(param_1 + 0x250) + uVar4 * 0x3f8 + 0x29);
    FUN_7103778430(param_1 + 0x278,"subwindow_%dp_on",(ulong)(*(int *)(param_1 + 0x150) + 1),param_4
                   ,param_5,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x41d) = 1;
    iVar3 = *(int *)(param_1 + 0x3cc);
    if (iVar3 != -1) {
      if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) <=
          (ulong)(long)iVar3) goto LAB_7101a46e54;
      lVar6 = *(long *)(*(long *)(param_1 + 0x3b0) + (long)iVar3 * 0x10 + 8);
      FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x20),0x710435be3c);
      *(undefined1 *)(lVar6 + 0x10a) = 0;
    }
    lVar9 = *(long *)(param_1 + 0x3b8);
    for (lVar6 = *(long *)(param_1 + 0x3b0); lVar6 != lVar9; lVar6 = lVar6 + 0x10) {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar6 + 8) + 0x20),0x710426fa7c);
    }
    FUN_71019e9460(*(long *)(param_1 + 0x358));
    return;
  }
  lVar6 = *(long *)(param_1 + 0x358);
  if (*(char *)(lVar6 + 0x50) != '\0') {
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x7104421cea);
    (**(code **)(**(long **)(lVar6 + 0x40) + 0x60))(*(long **)(lVar6 + 0x40),0);
    *(undefined1 *)(lVar6 + 0x50) = 1;
    lVar6 = *(long *)(param_1 + 600);
    lVar9 = *(long *)(param_1 + 0x250);
    uVar7 = (ulong)*(int *)(param_1 + 0x3d8);
    uVar4 = (lVar6 - lVar9 >> 3) * 0x7efdfbf7efdfbf7f;
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
LAB_7101a46e54:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar2 = extraout_x1;
    if (*(int *)(*(long *)(param_1 + 0x358) + 0x4c) == 3) {
      iVar3 = *(int *)(param_1 + 0x3c8);
      if (0 < iVar3) {
        lVar10 = 8;
        lVar11 = 0x3f4;
        for (lVar8 = 1; uVar4 = (lVar6 - lVar9 >> 3) * 0x7efdfbf7efdfbf7f, uVar7 = lVar8 - 1,
            uVar7 <= uVar4 && uVar4 - uVar7 != 0; lVar8 = lVar8 + 1) {
          if (*(int *)(lVar9 + lVar11 + -0x3e4) == 1) {
            uVar1 = *(uint *)(*(long *)(param_1 + 0x358) + 0x48);
            param_4 = (ulong)uVar1;
            *(char *)(lVar9 + lVar11 + -0x3cb) = (char)uVar1;
            if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            lVar6 = *(long *)(*(long *)(param_1 + 0x3b0) + lVar10);
            *(uint *)(lVar6 + 0xfc) = uVar1;
            if (*(int *)(lVar6 + 0xd8) == 1) {
              FUN_710377a280(lVar6 + 0x78,(byte *)"mel_chara_select_lv_n",1);
              param_3 = (ulong)*(uint *)(lVar6 + 0xfc);
              FUN_7103778430(lVar6 + 0x58,"cp_level_%d",param_3,param_4,param_5,param_6,param_7,
                             param_8);
              uVar2 = extraout_x1_00;
            }
            uVar4 = (*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 3) *
                    0x7efdfbf7efdfbf7f;
            if (uVar4 < uVar7 || uVar4 - uVar7 == 0) break;
            *(undefined1 *)(*(long *)(param_1 + 0x250) + lVar11) = 1;
            iVar3 = *(int *)(param_1 + 0x3c8);
          }
          if (iVar3 <= lVar8) goto LAB_7101a46df0;
          lVar6 = *(long *)(param_1 + 600);
          lVar9 = *(long *)(param_1 + 0x250);
          lVar10 = lVar10 + 0x10;
          lVar11 = lVar11 + 0x3f8;
        }
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
    }
    else {
      pbVar5 = (byte *)(lVar9 + uVar7 * 0x3f8 + 0x29);
      uVar1 = *(uint *)(*(long *)(param_1 + 0x358) + 0x48);
      param_4 = (ulong)uVar1;
      if (uVar1 != *pbVar5) {
        *pbVar5 = (byte)uVar1;
        if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) <= uVar7)
        goto LAB_7101a46e54;
        lVar6 = *(long *)(*(long *)(param_1 + 0x3b0) + uVar7 * 0x10 + 8);
        *(uint *)(lVar6 + 0xfc) = uVar1;
        if (*(int *)(lVar6 + 0xd8) == 1) {
          FUN_710377a280(lVar6 + 0x78,(byte *)"mel_chara_select_lv_n",1);
          param_3 = (ulong)*(uint *)(lVar6 + 0xfc);
          FUN_7103778430(lVar6 + 0x58,"cp_level_%d",param_3,param_4,param_5,param_6,param_7,param_8)
          ;
          uVar2 = extraout_x1_01;
        }
        *(undefined1 *)(lVar9 + uVar7 * 0x3f8 + 0x3f4) = 1;
        *(undefined4 *)(param_1 + 0x268) = 0xc;
      }
    }
LAB_7101a46df0:
    FUN_7101a48570(param_1,uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (0x12 < *(uint *)(param_1 + 0x134)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 3;
  }
  return;
}

