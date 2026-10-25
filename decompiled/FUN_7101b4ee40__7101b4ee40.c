// addr:      7101b4ee40
// offset:    0x1b4ee40
// name:      FUN_7101b4ee40
// mangled:   
// signature: undefined __cdecl FUN_7101b4ee40(long * param_1, long param_2, ulong * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 * param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101b4ee40(long *param_1,long param_2,ulong *param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *********ppppppppplVar4;
  undefined8 uVar5;
  byte ****ppppbVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  
  iVar1 = (int)param_5;
  uVar5 = param_4;
  puVar7 = param_7;
  FUN_710377aee0(0x3f800000,(long)(param_1 + 6));
  uVar11 = 8;
  if (iVar1 + 1 < 8) {
    uVar11 = iVar1 + 1;
  }
  if ((int)uVar11 < 2) {
    uVar11 = 1;
  }
  FUN_710377a120((long)(param_1 + 0x1a),"mel_info_stage_punchout_rank_%d",(ulong)uVar11,uVar5,
                 param_5,param_6,puVar7,param_8);
  FUN_710377a280((long)(param_1 + 0x1c),(byte *)"mel_info_ko_n",1);
  uVar8 = *param_3;
  if ((uint)param_4 < 0x20) {
    uVar9 = (ulong)(int)(uint)param_4;
    if (0x1f < uVar9) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar10 = *(long *)(*(long *)(DAT_710593bc38 + 8) + uVar9 * 8);
    bVar2 = FUN_7103265e70(*(long *)(DAT_710532f730 + 8) + 0x160,uVar8);
    if ((lVar10 != 0) && (bVar2)) {
      FUN_7103779770(*(float *)(param_7 + 2),param_1[0x25],param_7);
      if ((*(long **)(param_1[0x25] + 8) != (long *)0x0) &&
         ((DAT_710593bc38 != 0 &&
          (lVar10 = *(long *)(*(long *)(DAT_710593bc38 + 8) + uVar9 * 8), lVar10 != 0)))) {
        FUN_710379e9c0(*(long **)(param_1[0x25] + 8),lVar10,0);
      }
      plVar3 = param_1 + 0x10;
      goto LAB_7101b4efb0;
    }
  }
  uStack_68 = uRam0000007107459008;
  local_70 = _ConstantZero;
  FUN_7103779770(1.0,param_1[0x25],&local_70);
  ppppppppplVar4 = (long *********)(ulong)(uint)param_3[1];
  ppppbVar6 = (byte ****)&DAT_00000004;
  plVar3 = FUN_710323f330(*(long **)(*param_1 + 0x78),uVar8,(ulong)ppppppppplVar4,4,param_5,param_6,
                          puVar7,param_8);
  FUN_7103778b80(param_1[0x25],(long)plVar3,ppppppppplVar4,ppppbVar6,param_5,param_6,puVar7,param_8)
  ;
  plVar3 = param_1 + 0x12;
LAB_7101b4efb0:
  FUN_710377aee0(0x3f800000,(long)plVar3);
  lVar10 = 0;
  if (*(char *)(param_2 + 4) != '\0') {
    lVar10 = 2;
  }
  uVar11 = *(ushort *)(param_2 + lVar10) - 2;
  if (uVar11 < 0xd) {
    uVar11 = *(uint *)(&DAT_7104544a60 + (long)(short)uVar11 * 4);
  }
  else {
    uVar11 = 0;
  }
  FUN_710377b010((ulong)uVar11,(long)(param_1 + 10));
  return;
}

