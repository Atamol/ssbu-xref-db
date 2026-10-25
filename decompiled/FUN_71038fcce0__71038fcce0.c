// addr:      71038fcce0
// offset:    0x38fcce0
// name:      FUN_71038fcce0
// mangled:   
// signature: undefined __cdecl FUN_71038fcce0(long param_1, undefined8 * param_2)


void FUN_71038fcce0(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  float *pfVar9;
  size_t sVar10;
  uint uVar11;
  long *plVar12;
  char *pcVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long local_78;
  ulong *local_70;
  char *pcStack_68;
  ulong local_60 [2];
  float local_48;
  undefined4 uStack_44;
  
  lVar7 = *(long *)*param_2;
  *(long *)*param_2 = lVar7 + -1;
  plVar12 = (long *)*param_2;
  if (lVar7 == 0) {
    pbVar5 = (byte *)(*(code *)plVar12[2])(plVar12[4],plVar12[3],&local_78);
    if (pbVar5 == (byte *)0x0 || local_78 == 0) {
      uVar11 = 0xffffffff;
    }
    else {
      *plVar12 = local_78 + -1;
      plVar12[1] = (long)(pbVar5 + 1);
      uVar11 = (uint)*pbVar5;
    }
  }
  else {
    pbVar5 = (byte *)plVar12[1];
    plVar12[1] = (long)(pbVar5 + 1);
    uVar11 = (uint)*pbVar5;
  }
  pcVar13 = (char *)param_2[10];
  if (uVar11 != 0x1b) {
    if ((pcVar13 != (char *)0x0) && (pcVar13 = strchr(pcVar13,0x74), pcVar13 == (char *)0x0))
    goto LAB_71038fd608;
    puVar3 = FUN_71039086e0(param_1,*param_2,param_2 + 1,(long)(param_2 + 4),(char *)param_2[0xb],
                            uVar11);
LAB_71038fd4c0:
    FUN_71038fdf10(param_1,(long)puVar3);
    return;
  }
  if ((pcVar13 != (char *)0x0) && (pcVar13 = strchr(pcVar13,0x62), pcVar13 == (char *)0x0)) {
LAB_71038fd608:
    FUN_7103908660(param_1,"attempt to load a %s chunk (mode is \'%s\')");
                    /* WARNING: Subroutine does not return */
    FUN_71038fb3c0(param_1,3);
  }
  pcStack_68 = (char *)param_2[0xb];
  cVar1 = *pcStack_68;
  puVar14 = (ulong *)*param_2;
  if (cVar1 == '\x1b') {
    pcStack_68 = "binary string";
  }
  else if ((cVar1 == '@') || (cVar1 == '=')) {
    pcStack_68 = pcStack_68 + 1;
  }
  puVar8 = local_60;
  uVar6 = *puVar14;
  uVar15 = 3;
  local_78 = param_1;
  local_70 = puVar14;
  do {
    if (uVar6 == 0) {
      pvVar4 = (void *)(*(code *)puVar14[2])(puVar14[4],puVar14[3],&local_48);
      if ((pvVar4 == (void *)0x0) || (uVar6 = CONCAT44(uStack_44,local_48), uVar6 == 0))
      goto LAB_71038fd4e4;
      *puVar14 = uVar6;
      puVar14[1] = (ulong)pvVar4;
    }
    else {
      pvVar4 = (void *)puVar14[1];
    }
    sVar10 = uVar6;
    if (uVar15 <= uVar6) {
      sVar10 = uVar15;
    }
    memcpy(puVar8,pvVar4,sVar10);
    uVar6 = *puVar14 - sVar10;
    puVar8 = (ulong *)((long)puVar8 + sVar10);
    uVar15 = uVar15 - sVar10;
    *puVar14 = uVar6;
    puVar14[1] = puVar14[1] + sVar10;
  } while (uVar15 != 0);
  iVar2 = memcmp(&DAT_71042f68fa,local_60,3);
  puVar14 = local_70;
  if (iVar2 != 0) goto LAB_71038fd4f4;
  uVar6 = *local_70;
  pfVar9 = &local_48;
  uVar15 = 1;
  do {
    if (uVar6 == 0) {
      pvVar4 = (void *)(*(code *)puVar14[2])(puVar14[4],puVar14[3],local_60);
      if ((pvVar4 == (void *)0x0) || (local_60[0] == 0)) goto LAB_71038fd4e4;
      *puVar14 = local_60[0];
      puVar14[1] = (ulong)pvVar4;
      uVar6 = local_60[0];
    }
    else {
      pvVar4 = (void *)puVar14[1];
    }
    sVar10 = uVar6;
    if (uVar15 <= uVar6) {
      sVar10 = uVar15;
    }
    memcpy(pfVar9,pvVar4,sVar10);
    puVar8 = local_70;
    uVar6 = *puVar14 - sVar10;
    pfVar9 = (float *)((long)pfVar9 + sVar10);
    uVar15 = uVar15 - sVar10;
    *puVar14 = uVar6;
    puVar14[1] = puVar14[1] + sVar10;
  } while (uVar15 != 0);
  if (local_48._0_1_ != 'S') goto LAB_71038fd504;
  uVar6 = *local_70;
  pfVar9 = &local_48;
  uVar15 = 1;
  do {
    if (uVar6 == 0) {
      pvVar4 = (void *)(*(code *)puVar8[2])(puVar8[4],puVar8[3],local_60);
      if ((pvVar4 == (void *)0x0) || (local_60[0] == 0)) goto LAB_71038fd4e4;
      *puVar8 = local_60[0];
      puVar8[1] = (ulong)pvVar4;
      uVar6 = local_60[0];
    }
    else {
      pvVar4 = (void *)puVar8[1];
    }
    sVar10 = uVar6;
    if (uVar15 <= uVar6) {
      sVar10 = uVar15;
    }
    memcpy(pfVar9,pvVar4,sVar10);
    puVar14 = local_70;
    uVar6 = *puVar8 - sVar10;
    pfVar9 = (float *)((long)pfVar9 + sVar10);
    uVar15 = uVar15 - sVar10;
    *puVar8 = uVar6;
    puVar8[1] = puVar8[1] + sVar10;
  } while (uVar15 != 0);
  if (local_48._0_1_ != '\0') goto LAB_71038fd514;
  uVar6 = *local_70;
  puVar8 = local_60;
  uVar15 = 6;
  do {
    if (uVar6 == 0) {
      pvVar4 = (void *)(*(code *)puVar14[2])(puVar14[4],puVar14[3],&local_48);
      if ((pvVar4 == (void *)0x0) || (uVar6 = CONCAT44(uStack_44,local_48), uVar6 == 0))
      goto LAB_71038fd4e4;
      *puVar14 = uVar6;
      puVar14[1] = (ulong)pvVar4;
    }
    else {
      pvVar4 = (void *)puVar14[1];
    }
    sVar10 = uVar6;
    if (uVar15 <= uVar6) {
      sVar10 = uVar15;
    }
    memcpy(puVar8,pvVar4,sVar10);
    uVar6 = *puVar14 - sVar10;
    puVar8 = (ulong *)((long)puVar8 + sVar10);
    uVar15 = uVar15 - sVar10;
    *puVar14 = uVar6;
    puVar14[1] = puVar14[1] + sVar10;
  } while (uVar15 != 0);
  iVar2 = memcmp(&DAT_7104453653,local_60,6);
  puVar14 = local_70;
  if (iVar2 != 0) goto LAB_71038fd524;
  uVar6 = *local_70;
  pfVar9 = &local_48;
  uVar15 = 1;
  do {
    if (uVar6 == 0) {
      pvVar4 = (void *)(*(code *)puVar14[2])(puVar14[4],puVar14[3],local_60);
      if ((pvVar4 == (void *)0x0) || (local_60[0] == 0)) goto LAB_71038fd4e4;
      *puVar14 = local_60[0];
      puVar14[1] = (ulong)pvVar4;
      uVar6 = local_60[0];
    }
    else {
      pvVar4 = (void *)puVar14[1];
    }
    sVar10 = uVar6;
    if (uVar15 <= uVar6) {
      sVar10 = uVar15;
    }
    memcpy(pfVar9,pvVar4,sVar10);
    puVar8 = local_70;
    uVar6 = *puVar14 - sVar10;
    pfVar9 = (float *)((long)pfVar9 + sVar10);
    uVar15 = uVar15 - sVar10;
    *puVar14 = uVar6;
    puVar14[1] = puVar14[1] + sVar10;
  } while (uVar15 != 0);
  if (local_48._0_1_ == '\x04') {
    uVar6 = *local_70;
    pfVar9 = &local_48;
    uVar15 = 1;
    do {
      if (uVar6 == 0) {
        pvVar4 = (void *)(*(code *)puVar8[2])(puVar8[4],puVar8[3],local_60);
        if ((pvVar4 == (void *)0x0) || (local_60[0] == 0)) goto LAB_71038fd4e4;
        *puVar8 = local_60[0];
        puVar8[1] = (ulong)pvVar4;
        uVar6 = local_60[0];
      }
      else {
        pvVar4 = (void *)puVar8[1];
      }
      sVar10 = uVar6;
      if (uVar15 <= uVar6) {
        sVar10 = uVar15;
      }
      memcpy(pfVar9,pvVar4,sVar10);
      puVar14 = local_70;
      uVar6 = *puVar8 - sVar10;
      pfVar9 = (float *)((long)pfVar9 + sVar10);
      uVar15 = uVar15 - sVar10;
      *puVar8 = uVar6;
      puVar8[1] = puVar8[1] + sVar10;
    } while (uVar15 != 0);
    if (local_48._0_1_ != '\b') goto LAB_71038fd5a8;
    uVar6 = *local_70;
    pfVar9 = &local_48;
    uVar15 = 1;
    do {
      if (uVar6 == 0) {
        pvVar4 = (void *)(*(code *)puVar14[2])(puVar14[4],puVar14[3],local_60);
        if ((pvVar4 == (void *)0x0) || (local_60[0] == 0)) goto LAB_71038fd4e4;
        *puVar14 = local_60[0];
        puVar14[1] = (ulong)pvVar4;
        uVar6 = local_60[0];
      }
      else {
        pvVar4 = (void *)puVar14[1];
      }
      sVar10 = uVar6;
      if (uVar15 <= uVar6) {
        sVar10 = uVar15;
      }
      memcpy(pfVar9,pvVar4,sVar10);
      puVar8 = local_70;
      uVar6 = *puVar14 - sVar10;
      pfVar9 = (float *)((long)pfVar9 + sVar10);
      uVar15 = uVar15 - sVar10;
      *puVar14 = uVar6;
      puVar14[1] = puVar14[1] + sVar10;
    } while (uVar15 != 0);
    if (local_48._0_1_ != '\x04') goto LAB_71038fd5a8;
    uVar6 = *local_70;
    pfVar9 = &local_48;
    uVar15 = 1;
    do {
      if (uVar6 == 0) {
        pvVar4 = (void *)(*(code *)puVar8[2])(puVar8[4],puVar8[3],local_60);
        if ((pvVar4 == (void *)0x0) || (local_60[0] == 0)) goto LAB_71038fd4e4;
        *puVar8 = local_60[0];
        puVar8[1] = (ulong)pvVar4;
        uVar6 = local_60[0];
      }
      else {
        pvVar4 = (void *)puVar8[1];
      }
      sVar10 = uVar6;
      if (uVar15 <= uVar6) {
        sVar10 = uVar15;
      }
      memcpy(pfVar9,pvVar4,sVar10);
      puVar14 = local_70;
      uVar6 = *puVar8 - sVar10;
      pfVar9 = (float *)((long)pfVar9 + sVar10);
      uVar15 = uVar15 - sVar10;
      *puVar8 = uVar6;
      puVar8[1] = puVar8[1] + sVar10;
    } while (uVar15 != 0);
    if (local_48._0_1_ != '\b') goto LAB_71038fd5a8;
    uVar6 = *local_70;
    pfVar9 = &local_48;
    uVar15 = 1;
    do {
      if (uVar6 == 0) {
        pvVar4 = (void *)(*(code *)puVar14[2])(puVar14[4],puVar14[3],local_60);
        if ((pvVar4 == (void *)0x0) || (local_60[0] == 0)) goto LAB_71038fd4e4;
        *puVar14 = local_60[0];
        puVar14[1] = (ulong)pvVar4;
        uVar6 = local_60[0];
      }
      else {
        pvVar4 = (void *)puVar14[1];
      }
      sVar10 = uVar6;
      if (uVar15 <= uVar6) {
        sVar10 = uVar15;
      }
      memcpy(pfVar9,pvVar4,sVar10);
      puVar8 = local_70;
      uVar6 = *puVar14 - sVar10;
      pfVar9 = (float *)((long)pfVar9 + sVar10);
      uVar15 = uVar15 - sVar10;
      *puVar14 = uVar6;
      puVar14[1] = puVar14[1] + sVar10;
    } while (uVar15 != 0);
    if (local_48._0_1_ != '\x04') goto LAB_71038fd5a8;
    uVar6 = *local_70;
    pfVar9 = &local_48;
    uVar15 = 8;
    do {
      if (uVar6 == 0) {
        pvVar4 = (void *)(*(code *)puVar8[2])(puVar8[4],puVar8[3],local_60);
        if ((pvVar4 == (void *)0x0) || (local_60[0] == 0)) goto LAB_71038fd4e4;
        *puVar8 = local_60[0];
        puVar8[1] = (ulong)pvVar4;
        uVar6 = local_60[0];
      }
      else {
        pvVar4 = (void *)puVar8[1];
      }
      sVar10 = uVar6;
      if (uVar15 <= uVar6) {
        sVar10 = uVar15;
      }
      memcpy(pfVar9,pvVar4,sVar10);
      puVar14 = local_70;
      uVar6 = *puVar8 - sVar10;
      pfVar9 = (float *)((long)pfVar9 + sVar10);
      uVar15 = uVar15 - sVar10;
      *puVar8 = uVar6;
      puVar8[1] = puVar8[1] + sVar10;
    } while (uVar15 != 0);
    if (CONCAT44(uStack_44,local_48) != 0x5678) goto LAB_71038fd5b8;
    uVar6 = *local_70;
    pfVar9 = &local_48;
    uVar15 = 4;
    do {
      if (uVar6 == 0) {
        pvVar4 = (void *)(*(code *)puVar14[2])(puVar14[4],puVar14[3],local_60);
        if ((pvVar4 == (void *)0x0) || (local_60[0] == 0)) goto LAB_71038fd4e4;
        *puVar14 = local_60[0];
        puVar14[1] = (ulong)pvVar4;
        uVar6 = local_60[0];
      }
      else {
        pvVar4 = (void *)puVar14[1];
      }
      sVar10 = uVar6;
      if (uVar15 <= uVar6) {
        sVar10 = uVar15;
      }
      memcpy(pfVar9,pvVar4,sVar10);
      puVar8 = local_70;
      uVar6 = *puVar14 - sVar10;
      pfVar9 = (float *)((long)pfVar9 + sVar10);
      uVar15 = uVar15 - sVar10;
      *puVar14 = uVar6;
      puVar14[1] = puVar14[1] + sVar10;
    } while (uVar15 != 0);
    if (local_48 == 370.5) {
      uVar6 = *local_70;
      pfVar9 = &local_48;
      uVar15 = 1;
      do {
        if (uVar6 == 0) {
          pvVar4 = (void *)(*(code *)puVar8[2])(puVar8[4],puVar8[3],local_60);
          if ((pvVar4 == (void *)0x0) || (local_60[0] == 0)) goto LAB_71038fd4e4;
          *puVar8 = local_60[0];
          puVar8[1] = (ulong)pvVar4;
          uVar6 = local_60[0];
        }
        else {
          pvVar4 = (void *)puVar8[1];
        }
        sVar10 = uVar6;
        if (uVar15 <= uVar6) {
          sVar10 = uVar15;
        }
        memcpy(pfVar9,pvVar4,sVar10);
        uVar6 = *puVar8 - sVar10;
        pfVar9 = (float *)((long)pfVar9 + sVar10);
        uVar15 = uVar15 - sVar10;
        *puVar8 = uVar6;
        puVar8[1] = puVar8[1] + sVar10;
      } while (uVar15 != 0);
      puVar16 = *(undefined8 **)(param_1 + 0x18);
      sVar10 = (ulong)local_48._0_1_ * 8;
      lVar7 = sVar10 + 0x20;
      puVar3 = (undefined8 *)(*(code *)*puVar16)(puVar16[1],0,6,lVar7);
      if (puVar3 == (undefined8 *)0x0) {
        if (puVar16[0x1a] == 0) goto LAB_71038fd5d8;
        FUN_71039004f0(param_1,1);
        puVar3 = (undefined8 *)(*(code *)*puVar16)(puVar16[1],0,6,lVar7);
        if (puVar3 == (undefined8 *)0x0) goto LAB_71038fd5d8;
      }
      puVar16[3] = puVar16[3] + lVar7;
      *(byte *)((long)puVar3 + 9) = *(byte *)((long)puVar16 + 0x54) & 3;
      *(undefined1 *)(puVar3 + 1) = 6;
      *puVar3 = puVar16[0xb];
      puVar16[0xb] = puVar3;
      puVar3[3] = 0;
      *(byte *)((long)puVar3 + 10) = local_48._0_1_;
      if (local_48._0_1_ != 0) {
        memset(puVar3 + 3 + ((ulong)local_48._0_1_ - (ulong)(((uint)local_48 & 0xff) - 1)),0,sVar10)
        ;
      }
      puVar16 = *(undefined8 **)(param_1 + 0x10);
      *puVar16 = puVar3;
      *(undefined4 *)(puVar16 + 1) = 0x46;
      FUN_71038fb6f0(param_1);
      lVar7 = FUN_71038fe0c0(param_1);
      puVar3[3] = lVar7;
      FUN_7103920530(&local_78,lVar7,(undefined8 *)0x0);
      goto LAB_71038fd4c0;
    }
  }
  else {
LAB_71038fd5a8:
    FUN_7103908660(local_78,"%s size mismatch in");
    FUN_71039204f0(&local_78);
LAB_71038fd5b8:
    FUN_71039204f0(&local_78);
  }
  FUN_71039204f0(&local_78);
LAB_71038fd5d8:
                    /* WARNING: Subroutine does not return */
  FUN_71038fb3c0(param_1,4);
LAB_71038fd4e4:
  FUN_71039204f0(&local_78);
LAB_71038fd4f4:
  FUN_71039204f0(&local_78);
LAB_71038fd504:
  FUN_71039204f0(&local_78);
LAB_71038fd514:
  FUN_71039204f0(&local_78);
LAB_71038fd524:
  FUN_71039204f0(&local_78);
  goto LAB_71038fd5a8;
}

