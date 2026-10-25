// addr:      7101b4e580
// offset:    0x1b4e580
// name:      FUN_7101b4e580
// mangled:   
// signature: undefined __cdecl FUN_7101b4e580(long param_1, uint param_2, long param_3, ulong * param_4, undefined8 param_5, undefined8 param_6, undefined8 * param_7, undefined8 param_8)


void FUN_7101b4e580(long param_1,uint param_2,long param_3,ulong *param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  char *pcVar6;
  undefined1 *puVar7;
  long *********ppppppppplVar8;
  ulong *puVar9;
  ulong uVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint auStack_108 [2];
  char acStack_100 [64];
  undefined8 local_c0;
  char acStack_b8 [72];
  
  if (1 < param_2) {
LAB_7101b4e8a0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar15 = (undefined1 *)*param_4;
  uVar4 = (uint)param_5;
  uVar16 = (ulong)param_2;
  puVar9 = param_4;
  uVar13 = param_6;
  puVar14 = param_7;
  if ((((ulong)puVar15 & 0xff00000000000000) == 0xc100000000000000 &&
       ((ulong)puVar15 & 0xffffffffff) != 0) && (*(char *)((long)param_4 + 0xc) != '\0')) {
    puVar15 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0x11b1ccb807);
  }
  lVar19 = *(long *)(DAT_710532f730 + 8);
  uVar1 = param_4[1];
  uVar3 = FUN_71032638e0(*(long *)(lVar19 + 0x168),(ulong)puVar15);
  uVar4 = ~uVar4 & 1;
  if ((uVar3 & 1) == 0) {
    uVar4 = (uint)uVar1;
  }
  lVar17 = 0;
  if (*(char *)(param_3 + 4) != '\0') {
    lVar17 = 2;
  }
  uVar3 = *(ushort *)(param_3 + lVar17) - 2;
  if (uVar3 < 0xd) {
    uVar10 = (ulong)*(uint *)(&DAT_7104544a60 + (long)(short)uVar3 * 4);
  }
  else {
    uVar10 = 0;
  }
  lVar17 = param_1 + uVar16 * 0x58;
  FUN_710377b010(uVar10,lVar17 + 0x2a0);
  uVar3 = FUN_7103263540(*(long *)(lVar19 + 0x168),(ulong)puVar15,(ulong)uVar4,puVar9,param_5,uVar13
                         ,puVar14,param_8);
  FUN_7103262310((uint *)&local_c0,*(long *)(lVar19 + 0x168),(ulong)puVar15);
  pcVar6 = acStack_b8;
  FUN_71003a4ca0(auStack_108,"nam_stage_name_%02d_%s",(ulong)uVar3,acStack_b8,puVar9,param_5,uVar13,
                 puVar14,param_8);
  FUN_710377a120(lVar17 + 0x280,acStack_100,pcVar6,puVar9,param_5,uVar13,puVar14,param_8);
  uVar10 = (ulong)uVar4;
  pppplVar12 = (long ****)0x0;
  puVar7 = puVar15;
  FUN_7103265040((uint *)&local_c0,lVar19 + 0x160,puVar15,uVar10,0,uVar13,puVar14,param_8);
  FUN_710377a120(lVar17 + 0x290,acStack_b8,puVar7,uVar10,pppplVar12,uVar13,puVar14,param_8);
  if ((uint)param_6 < 0x20) {
    uVar18 = (ulong)(int)(uint)param_6;
    if (0x1f < uVar18) goto LAB_7101b4e8a0;
    lVar17 = *(long *)(*(long *)(DAT_710593bc38 + 8) + uVar18 * 8);
    bVar2 = FUN_7103265e70(lVar19 + 0x160,(ulong)puVar15);
    if ((lVar17 != 0) && (bVar2)) {
      lVar19 = param_1 + uVar16 * 0x58;
      FUN_7103779770(*(float *)(param_7 + 2),*(long *)(lVar19 + 0x278),param_7);
      plVar5 = *(long **)(*(long *)(lVar19 + 0x278) + 8);
      if ((plVar5 != (long *)0x0) &&
         ((DAT_710593bc38 != 0 &&
          (lVar19 = *(long *)(*(long *)(DAT_710593bc38 + 8) + uVar18 * 8), lVar19 != 0)))) {
        FUN_710379e9c0(plVar5,lVar19,0);
      }
      goto LAB_7101b4e860;
    }
  }
  lVar19 = *(long *)(DAT_710532f730 + 8);
  uVar4 = FUN_7103280ec0(*(long *)(lVar19 + 0x2a8),(ulong)puVar15,(ulong)(uint)param_4[1],uVar10,
                         pppplVar12,uVar13,puVar14,param_8);
  uVar10 = 0;
  lVar19 = *(long *)(*(long *)(lVar19 + 0x2a8) + 8);
  auVar20 = FUN_710326ad60(ZEXT816(0),lVar19,uVar4,0x12030c6f35);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar10;
  auVar21 = FUN_710326ad60(auVar21 << 0x40,lVar19,uVar4,0x12740b5fa3);
  auVar22 = FUN_710326ad60(ZEXT816(0x3f800000),lVar19,uVar4,0xf61eee25a);
  local_c0 = CONCAT44(auVar21._0_4_,auVar20._0_4_);
  lVar19 = param_1 + uVar16 * 0x58;
  acStack_b8[0] = '\0';
  acStack_b8[1] = '\0';
  acStack_b8[2] = '\0';
  acStack_b8[3] = '\0';
  acStack_b8[4] = '\0';
  acStack_b8[5] = '\0';
  acStack_b8[6] = '\0';
  acStack_b8[7] = '\0';
  FUN_7103779770(auVar22._0_4_,*(long *)(lVar19 + 0x278),&local_c0);
  ppppppppplVar8 = (long *********)(ulong)(uint)uVar1;
  ppppbVar11 = (byte ****)0x1;
  plVar5 = FUN_710323f330(*(long **)(lVar19 + 0x268),(ulong)puVar15,(ulong)ppppppppplVar8,1,
                          pppplVar12,uVar13,puVar14,param_8);
  FUN_7103778b80(*(long *)(lVar19 + 0x278),(long)plVar5,ppppppppplVar8,ppppbVar11,pppplVar12,uVar13,
                 puVar14,param_8);
LAB_7101b4e860:
  FUN_710377aee0(0x3f800000,param_1 + 0x2b0);
  FUN_710377aee0(0x3f800000,param_1 + 0x308);
  return;
}

