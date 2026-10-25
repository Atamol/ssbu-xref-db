// addr:      71013c07c0
// offset:    0x13c07c0
// name:      FUN_71013c07c0
// mangled:   
// signature: undefined __cdecl FUN_71013c07c0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013c07c0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined **local_40;
  long *local_38;
  
  lVar7 = DAT_710532f7f0;
  if (param_1[0x3d] == 0) {
    if (0x12 < *(uint *)((long)param_1 + 0x1b4)) {
LAB_71013c09d8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1b4) * 4 + 0x168) = 0;
  }
  else {
    if (*(int *)((long)param_1 + 0x1bc) == 0) {
      if (DAT_710532f7f0 != 0) {
        lVar8 = *(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80);
        if (*(char *)(lVar8 + 0x1f5) != '\0') {
          lVar3 = *(long *)(lVar8 + 0x100);
          lVar5 = *(long *)(lVar8 + 0x108);
          uVar2 = 0;
          if (lVar5 - lVar3 != 0) {
            uVar2 = (lVar5 - lVar3 >> 3) * 0x155 - 1;
          }
          uVar6 = *(long *)(lVar8 + 0x120) + *(long *)(lVar8 + 0x118);
          if (uVar2 == uVar6) {
            FUN_7101afbf30((ulong *)(lVar8 + 0xf8),param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8);
            uVar6 = *(long *)(lVar8 + 0x118) + *(long *)(lVar8 + 0x120);
            lVar3 = *(long *)(lVar8 + 0x100);
            lVar5 = *(long *)(lVar8 + 0x108);
          }
          if (lVar5 == lVar3) {
            puVar4 = (undefined8 *)0x0;
          }
          else {
            puVar4 = (undefined8 *)(*(long *)(lVar3 + (uVar6 / 0x155) * 8) + (uVar6 % 0x155) * 0xc);
          }
          *puVar4 = &DAT_100000008;
          *(undefined4 *)(puVar4 + 1) = 0;
          *(long *)(lVar8 + 0x120) = *(long *)(lVar8 + 0x120) + 1;
          lVar8 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 0x80);
        }
        FUN_7103776910(&local_40,**(long **)(lVar8 + 0x130) + 8,(long ****)"set_txt_key",param_3,
                       param_4,param_5,param_6,param_7,param_8);
        plVar1 = local_38;
        lVar7 = *local_38;
        if (lVar7 != 0) {
          *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
        }
        local_40 = &PTR_FUN_710523d9a8;
        local_38 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar1);
        }
        *(undefined1 *)(lVar8 + 0x200) = 1;
      }
      if ((int)param_1[0x38] != 3) {
        FUN_710377aee0(0x3f800000,*(long *)(param_1[0x3d] + 0x80) + 0x58);
      }
      FUN_71037760f0(*(long *)**(undefined8 **)(*(long *)(param_1[0x3d] + 0x80) + 8),0);
      return;
    }
    lVar7 = *(long *)(param_1[0x3d] + 0x80);
    plVar1 = *(long **)(*(long *)(lVar7 + 0x50) + 8);
    if (((plVar1 == (long *)0x0) || (uVar2 = (**(code **)(*plVar1 + 0x130))(), (uVar2 & 1) == 0)) &&
       ((plVar1 = *(long **)(*(long *)(lVar7 + 0x60) + 8), plVar1 == (long *)0x0 ||
        (uVar2 = (**(code **)(*plVar1 + 0x130))(), (uVar2 & 1) == 0)))) {
      *(undefined1 *)(*param_1 + 0x12) = 0;
      if (0x12 < *(uint *)((long)param_1 + 0x1b4)) goto LAB_71013c09d8;
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1b4) * 4 + 0x168) = 0xc
      ;
    }
  }
  return;
}

