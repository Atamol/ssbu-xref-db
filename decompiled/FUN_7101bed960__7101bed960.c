// addr:      7101bed960
// offset:    0x1bed960
// name:      FUN_7101bed960
// mangled:   
// signature: undefined __cdecl FUN_7101bed960(long param_1, long * param_2)


void FUN_7101bed960(long param_1,long *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong *puVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar8 = FUN_710391e050(param_1);
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  *puVar10 = uVar8;
  *(undefined4 *)(puVar10 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  lVar12 = *param_2;
  if (param_2[1] != lVar12) {
    lVar19 = 0x50;
    uVar18 = 1;
    do {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
      }
      uVar8 = FUN_710391e050(param_1);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      *(undefined4 *)(puVar10 + 1) = 0x45;
      *puVar10 = uVar8;
      lVar11 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar11 + 0x10;
      pcVar1 = (char *)(lVar12 + lVar19);
      *(long *)(lVar11 + 0x10) = (long)*(int *)(pcVar1 + -0x50);
      *(undefined4 *)(lVar11 + 0x18) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"type");
      if (*(int *)(pcVar1 + -0x50) == 2) {
        pcVar9 = *(char **)(pcVar1 + -0x30);
        plVar13 = *(long **)(param_1 + 0x10);
joined_r0x007101bedaf0:
        if (pcVar9 == (char *)0x0) {
          *(undefined4 *)(plVar13 + 1) = 0;
        }
        else {
          *plVar13 = (long)pcVar9;
          *(undefined4 *)(plVar13 + 1) = 2;
        }
        lVar12 = *(long *)(param_1 + 0x10) + 0x10;
        *(long *)(param_1 + 0x10) = lVar12;
      }
      else {
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        *puVar10 = pcVar1 + -0x40;
        *(undefined4 *)(puVar10 + 1) = 2;
        lVar12 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar12 + 0x10;
        FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"texture");
        pcVar9 = *(char **)(pcVar1 + -0x30);
        if (*(int *)(pcVar1 + -0x50) == 2) {
          plVar13 = *(long **)(param_1 + 0x10);
          goto joined_r0x007101bedaf0;
        }
        FUN_71038f4b20(param_1,pcVar9);
        lVar12 = *(long *)(param_1 + 0x10);
      }
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x20),"title");
      uVar14 = *(ulong *)(pcVar1 + -0x28);
      plVar13 = *(long **)(param_1 + 0x10);
      *plVar13 = (uVar14 & 0xfff) * 1000000 + (uVar14 >> 0xc & 0xf) * 1000 + (uVar14 >> 0x10 & 0x1f)
      ;
      *(undefined4 *)(plVar13 + 1) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"begin_date");
      uVar14 = *(ulong *)(pcVar1 + -0x28);
      plVar13 = *(long **)(param_1 + 0x10);
      *plVar13 = (uVar14 >> 0x15 & 0x1f) * 1000000 + (uVar14 >> 0x1a & 0x3f) * 1000 +
                 (uVar14 >> 0x20 & 0x3f);
      *(undefined4 *)(plVar13 + 1) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"begin_time");
      uVar14 = *(ulong *)(pcVar1 + -0x20);
      plVar13 = *(long **)(param_1 + 0x10);
      *plVar13 = (uVar14 & 0xfff) * 1000000 + (uVar14 >> 0xc & 0xf) * 1000 + (uVar14 >> 0x10 & 0x1f)
      ;
      *(undefined4 *)(plVar13 + 1) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"end_date");
      uVar14 = *(ulong *)(pcVar1 + -0x20);
      plVar13 = *(long **)(param_1 + 0x10);
      *plVar13 = (uVar14 >> 0x15 & 0x1f) * 1000000 + (uVar14 >> 0x1a & 0x3f) * 1000 +
                 (uVar14 >> 0x20 & 0x3f);
      *(undefined4 *)(plVar13 + 1) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"end_time");
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
      }
      uVar8 = FUN_710391e050(param_1);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      *puVar10 = uVar8;
      *(undefined4 *)(puVar10 + 1) = 0x45;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      *(long *)(lVar12 + 0x10) = (long)**(int **)(pcVar1 + -0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"pos_x");
      plVar13 = *(long **)(param_1 + 0x10);
      *plVar13 = (long)*(int *)(*(long *)(pcVar1 + -0x18) + 4);
      *(undefined4 *)(plVar13 + 1) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"pos_y");
      uVar2 = *(undefined4 *)(*(long *)(pcVar1 + -0x18) + 8);
      puVar15 = *(undefined4 **)(param_1 + 0x10);
      puVar15[2] = 3;
      *puVar15 = uVar2;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"scale_x");
      puVar15 = *(undefined4 **)(param_1 + 0x10);
      *puVar15 = *(undefined4 *)(*(long *)(pcVar1 + -0x18) + 0xc);
      puVar15[2] = 3;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"scale_y");
      puVar16 = *(ulong **)(param_1 + 0x10);
      *puVar16 = (ulong)*(byte *)(*(long *)(pcVar1 + -0x18) + 0x10);
      *(undefined4 *)(puVar16 + 1) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"align_x");
      puVar16 = *(ulong **)(param_1 + 0x10);
      *puVar16 = (ulong)*(byte *)(*(long *)(pcVar1 + -0x18) + 0x11);
      *(undefined4 *)(puVar16 + 1) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"align_y");
      cVar3 = *(char *)(*(long *)(pcVar1 + -0x18) + 0x12);
      puVar17 = *(uint **)(param_1 + 0x10);
      puVar17[2] = 1;
      *puVar17 = (uint)(cVar3 != '\0');
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"border");
      cVar3 = *(char *)(*(long *)(pcVar1 + -0x18) + 0x13);
      puVar17 = *(uint **)(param_1 + 0x10);
      puVar17[2] = 1;
      *puVar17 = (uint)(cVar3 != '\0');
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"shadow");
      lVar12 = *(long *)(pcVar1 + -0x18);
      bVar4 = *(byte *)(lVar12 + 0x15);
      fVar20 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + 0x14));
      fVar20 = fVar20 / 255.0;
      bVar5 = *(byte *)(lVar12 + 0x16);
      bVar6 = *(byte *)(lVar12 + 0x17);
      if (fVar20 <= 0.04045) {
        fVar20 = fVar20 / 12.92;
      }
      else {
        fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
      }
      fVar21 = (float)bVar4 / 255.0;
      if (fVar21 <= 0.04045) {
        fVar21 = fVar21 / 12.92;
      }
      else {
        fVar21 = powf((fVar21 + 0.055) / 1.055,2.4);
      }
      fVar22 = (float)bVar5 / 255.0;
      if (fVar22 <= 0.04045) {
        fVar22 = fVar22 / 12.92;
      }
      else {
        fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
      }
      plVar13 = *(long **)(param_1 + 0x10);
      *(undefined4 *)(plVar13 + 1) = 0x13;
      *plVar13 = (long)(int)((uint)bVar6 << 0x18 |
                            (int)(fVar20 * 255.01) & 0xffU | ((int)(fVar21 * 255.01) & 0xffU) << 8 |
                            ((int)(fVar22 * 255.01) & 0xffU) << 0x10);
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"text_color");
      lVar12 = *(long *)(pcVar1 + -0x18);
      bVar4 = *(byte *)(lVar12 + 0x19);
      fVar20 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + 0x18));
      fVar20 = fVar20 / 255.0;
      bVar5 = *(byte *)(lVar12 + 0x1a);
      bVar6 = *(byte *)(lVar12 + 0x1b);
      if (fVar20 <= 0.04045) {
        fVar20 = fVar20 / 12.92;
      }
      else {
        fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
      }
      fVar21 = (float)bVar4 / 255.0;
      if (fVar21 <= 0.04045) {
        fVar21 = fVar21 / 12.92;
      }
      else {
        fVar21 = powf((fVar21 + 0.055) / 1.055,2.4);
      }
      fVar22 = (float)bVar5 / 255.0;
      if (fVar22 <= 0.04045) {
        fVar22 = fVar22 / 12.92;
      }
      else {
        fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
      }
      plVar13 = *(long **)(param_1 + 0x10);
      *(undefined4 *)(plVar13 + 1) = 0x13;
      *plVar13 = (long)(int)((uint)bVar6 << 0x18 |
                            (int)(fVar20 * 255.01) & 0xffU | ((int)(fVar21 * 255.01) & 0xffU) << 8 |
                            ((int)(fVar22 * 255.01) & 0xffU) << 0x10);
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"border_color");
      lVar12 = *(long *)(pcVar1 + -0x18);
      bVar4 = *(byte *)(lVar12 + 0x1d);
      fVar20 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + 0x1c));
      fVar20 = fVar20 / 255.0;
      bVar5 = *(byte *)(lVar12 + 0x1e);
      bVar6 = *(byte *)(lVar12 + 0x1f);
      if (fVar20 <= 0.04045) {
        fVar20 = fVar20 / 12.92;
      }
      else {
        fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
      }
      fVar21 = (float)bVar4 / 255.0;
      if (fVar21 <= 0.04045) {
        fVar21 = fVar21 / 12.92;
      }
      else {
        fVar21 = powf((fVar21 + 0.055) / 1.055,2.4);
      }
      fVar22 = (float)bVar5 / 255.0;
      if (fVar22 <= 0.04045) {
        fVar22 = fVar22 / 12.92;
      }
      else {
        fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
      }
      plVar13 = *(long **)(param_1 + 0x10);
      *(undefined4 *)(plVar13 + 1) = 0x13;
      *plVar13 = (long)(int)((uint)bVar6 << 0x18 |
                            (int)(fVar20 * 255.01) & 0xffU | ((int)(fVar21 * 255.01) & 0xffU) << 8 |
                            ((int)(fVar22 * 255.01) & 0xffU) << 0x10);
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"shadow_color");
      FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"title_desc");
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
      }
      uVar8 = FUN_710391e050(param_1);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      *puVar10 = uVar8;
      *(undefined4 *)(puVar10 + 1) = 0x45;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      *(long *)(lVar12 + 0x10) = (long)**(int **)(pcVar1 + -0x10);
      *(undefined4 *)(lVar12 + 0x18) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"pos_x");
      plVar13 = *(long **)(param_1 + 0x10);
      *plVar13 = (long)*(int *)(*(long *)(pcVar1 + -0x10) + 4);
      *(undefined4 *)(plVar13 + 1) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"pos_y");
      uVar2 = *(undefined4 *)(*(long *)(pcVar1 + -0x10) + 8);
      puVar15 = *(undefined4 **)(param_1 + 0x10);
      puVar15[2] = 3;
      *puVar15 = uVar2;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"scale_x");
      puVar15 = *(undefined4 **)(param_1 + 0x10);
      *puVar15 = *(undefined4 *)(*(long *)(pcVar1 + -0x10) + 0xc);
      puVar15[2] = 3;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"scale_y");
      puVar16 = *(ulong **)(param_1 + 0x10);
      *puVar16 = (ulong)*(byte *)(*(long *)(pcVar1 + -0x10) + 0x10);
      *(undefined4 *)(puVar16 + 1) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"align_x");
      puVar16 = *(ulong **)(param_1 + 0x10);
      *puVar16 = (ulong)*(byte *)(*(long *)(pcVar1 + -0x10) + 0x11);
      *(undefined4 *)(puVar16 + 1) = 0x13;
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"align_y");
      cVar3 = *(char *)(*(long *)(pcVar1 + -0x10) + 0x12);
      puVar17 = *(uint **)(param_1 + 0x10);
      puVar17[2] = 1;
      *puVar17 = (uint)(cVar3 != '\0');
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"border");
      cVar3 = *(char *)(*(long *)(pcVar1 + -0x10) + 0x13);
      puVar17 = *(uint **)(param_1 + 0x10);
      puVar17[2] = 1;
      *puVar17 = (uint)(cVar3 != '\0');
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"shadow");
      lVar12 = *(long *)(pcVar1 + -0x10);
      bVar4 = *(byte *)(lVar12 + 0x15);
      fVar20 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + 0x14));
      fVar20 = fVar20 / 255.0;
      bVar5 = *(byte *)(lVar12 + 0x16);
      bVar6 = *(byte *)(lVar12 + 0x17);
      if (fVar20 <= 0.04045) {
        fVar20 = fVar20 / 12.92;
      }
      else {
        fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
      }
      fVar21 = (float)bVar4 / 255.0;
      if (fVar21 <= 0.04045) {
        fVar21 = fVar21 / 12.92;
      }
      else {
        fVar21 = powf((fVar21 + 0.055) / 1.055,2.4);
      }
      fVar22 = (float)bVar5 / 255.0;
      if (fVar22 <= 0.04045) {
        fVar22 = fVar22 / 12.92;
      }
      else {
        fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
      }
      plVar13 = *(long **)(param_1 + 0x10);
      *(undefined4 *)(plVar13 + 1) = 0x13;
      *plVar13 = (long)(int)((uint)bVar6 << 0x18 |
                            (int)(fVar20 * 255.01) & 0xffU | ((int)(fVar21 * 255.01) & 0xffU) << 8 |
                            ((int)(fVar22 * 255.01) & 0xffU) << 0x10);
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"text_color");
      lVar12 = *(long *)(pcVar1 + -0x10);
      bVar4 = *(byte *)(lVar12 + 0x19);
      fVar20 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + 0x18));
      fVar20 = fVar20 / 255.0;
      bVar5 = *(byte *)(lVar12 + 0x1a);
      bVar6 = *(byte *)(lVar12 + 0x1b);
      if (fVar20 <= 0.04045) {
        fVar20 = fVar20 / 12.92;
      }
      else {
        fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
      }
      fVar21 = (float)bVar4 / 255.0;
      if (fVar21 <= 0.04045) {
        fVar21 = fVar21 / 12.92;
      }
      else {
        fVar21 = powf((fVar21 + 0.055) / 1.055,2.4);
      }
      fVar22 = (float)bVar5 / 255.0;
      if (fVar22 <= 0.04045) {
        fVar22 = fVar22 / 12.92;
      }
      else {
        fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
      }
      plVar13 = *(long **)(param_1 + 0x10);
      *(undefined4 *)(plVar13 + 1) = 0x13;
      *plVar13 = (long)(int)((uint)bVar6 << 0x18 |
                            (int)(fVar20 * 255.01) & 0xffU | ((int)(fVar21 * 255.01) & 0xffU) << 8 |
                            ((int)(fVar22 * 255.01) & 0xffU) << 0x10);
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"border_color");
      lVar12 = *(long *)(pcVar1 + -0x10);
      bVar4 = *(byte *)(lVar12 + 0x1d);
      fVar20 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + 0x1c));
      fVar20 = fVar20 / 255.0;
      bVar5 = *(byte *)(lVar12 + 0x1e);
      bVar6 = *(byte *)(lVar12 + 0x1f);
      if (fVar20 <= 0.04045) {
        fVar20 = fVar20 / 12.92;
      }
      else {
        fVar20 = powf((fVar20 + 0.055) / 1.055,2.4);
      }
      fVar21 = (float)bVar4 / 255.0;
      if (fVar21 <= 0.04045) {
        fVar21 = fVar21 / 12.92;
      }
      else {
        fVar21 = powf((fVar21 + 0.055) / 1.055,2.4);
      }
      fVar22 = (float)bVar5 / 255.0;
      if (fVar22 <= 0.04045) {
        fVar22 = fVar22 / 12.92;
      }
      else {
        fVar22 = powf((fVar22 + 0.055) / 1.055,2.4);
      }
      plVar13 = *(long **)(param_1 + 0x10);
      *(undefined4 *)(plVar13 + 1) = 0x13;
      *plVar13 = (long)(int)((uint)bVar6 << 0x18 |
                            (int)(fVar20 * 255.01) & 0xffU | ((int)(fVar21 * 255.01) & 0xffU) << 8 |
                            ((int)(fVar22 * 255.01) & 0xffU) << 0x10);
      lVar12 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar12 + 0x10;
      FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"shadow_color");
      FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"period_desc");
      FUN_71038f4b20(param_1,pcVar1);
      FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"url");
      FUN_71038f5730(param_1,-2,uVar18);
      lVar12 = *param_2;
      uVar14 = (param_2[1] - lVar12 >> 4) * -0x30c30c30c30c30c3;
      bVar7 = uVar18 <= uVar14;
      lVar11 = uVar14 - uVar18;
      uVar18 = uVar18 + 1;
      lVar19 = lVar19 + 0x150;
    } while (bVar7 && lVar11 != 0);
  }
  return;
}

