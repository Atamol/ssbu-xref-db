// addr:      7101b98c10
// offset:    0x1b98c10
// name:      FUN_7101b98c10
// mangled:   
// signature: undefined __cdecl FUN_7101b98c10(char * param_1, ushort * param_2, ushort * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b98c10(char *param_1,ushort *param_2,ushort *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  char *pcVar6;
  long *********ppppppppplVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  
  uVar2 = *param_2;
  if (uVar2 - 9 < 2) {
    if (uVar2 == 10) {
      lVar9 = **(long **)(param_1 + 0x20);
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      }
      lVar9 = **(long **)(param_1 + 0x30);
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      }
      if (*param_2 == 10) {
        if ((char)param_2[2] == '\0') {
          pcVar6 = "info_melee_lct_cursor_player_fp_00";
        }
        else {
          if (3 < param_2[1] - 0xb) goto LAB_7101b98e28;
          pcVar6 = (&PTR_s_info_melee_lct_cursor_player_fp__71050ab790)[(short)(param_2[1] - 0xb)];
        }
        cVar1 = *param_1;
        ppppppppplVar7 = (long *********)0x0;
        plVar8 = FUN_7103240d30(*(long **)(param_1 + 0x1a8),(long)pcVar6,(long ****)0x0,param_4,
                                param_5,param_6,param_7,param_8);
        if (cVar1 == '\0') {
          lVar9 = *(long *)(param_1 + 0xb0);
        }
        else {
          lVar9 = *(long *)(param_1 + 0xd0);
        }
        FUN_7103778b80(lVar9,(long)plVar8,ppppppppplVar7,param_4,param_5,param_6,param_7,param_8);
      }
    }
    else if (uVar2 == 9) {
      local_70 = 0x5f6e6d63;
      local_6c = 0x7063;
      uVar13 = 0x811c9dc5;
      uVar12 = 99;
      local_6a = 0;
      pbVar10 = (byte *)((long)&local_70 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar12;
        uVar12 = (uint)*pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (uVar12 != 0);
      local_78 = CONCAT44(6,uVar13);
      goto LAB_7101b98d4c;
    }
LAB_7101b98e28:
    bVar5 = false;
    if (*param_1 != '\0') goto LAB_7101b98e34;
LAB_7101b98c9c:
    pcVar6 = param_1 + 0x178;
    if (!bVar5) goto LAB_7101b98e38;
    uVar13 = 0x3f800000;
  }
  else {
    if (param_3 == (ushort *)0x0) {
      uVar12 = uVar2 - 2;
      uVar13 = (uVar12 & 0xffff) + 2;
      if (6 < uVar12) {
        uVar13 = 1;
      }
      FUN_71003a4ca0((uint *)&local_78,"cmn_%dp",(ulong)uVar13,0,param_4,param_5,param_6,param_7,
                     param_8);
LAB_7101b98d4c:
      FUN_710377a120((long)(param_1 + 0x18),(char *)&local_70,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      lVar9 = **(long **)(param_1 + 0x20);
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
      }
      lVar9 = **(long **)(param_1 + 0x30);
      if (lVar9 == 0) goto LAB_7101b98e28;
      bVar5 = false;
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      cVar1 = *param_1;
    }
    else {
      plVar8 = *(long **)(param_1 + 0x30);
      if ((long *)plVar8[2] != (long *)0x0) {
        FUN_71037a2270((long *)plVar8[2],param_3,0xffffffff,1);
        plVar8 = *(long **)(param_1 + 0x30);
      }
      lVar9 = *plVar8;
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
      }
      lVar9 = **(long **)(param_1 + 0x20);
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      }
      bVar5 = true;
      cVar1 = *param_1;
    }
    if (cVar1 == '\0') goto LAB_7101b98c9c;
LAB_7101b98e34:
    pcVar6 = param_1 + 0x108;
LAB_7101b98e38:
    uVar13 = 0;
  }
  FUN_710377b010((ulong)uVar13,(long)pcVar6);
  uVar2 = *param_2;
  if ((uVar2 == 10) && ((char)param_2[2] != '\0')) {
    if (2 < param_2[1] - 0xc) {
      uVar13 = 0x41900000;
      goto LAB_7101b98ed0;
    }
    sVar4 = (short)(param_2[1] - 0xc);
    puVar11 = &DAT_7104544cc0;
  }
  else {
    uVar13 = (uint)uVar2;
    if (((char)param_2[2] != '\0') && (uVar2 != 10)) {
      uVar3 = param_2[1];
      uVar13 = (uint)uVar3;
      if ((uVar2 - 9 < 2) && (uVar13 = uVar3 + 4, 3 < uVar3 - 0xb)) {
        uVar13 = (uint)uVar3;
      }
    }
    if (0x10 < (uVar13 - 2 & 0xffff)) {
      uVar13 = 0;
      goto LAB_7101b98ed0;
    }
    sVar4 = (short)(uVar13 - 2);
    puVar11 = &DAT_7104544cd0;
  }
  uVar13 = *(uint *)(puVar11 + (long)sVar4 * 4);
LAB_7101b98ed0:
  FUN_710377b010((ulong)uVar13,(long)(param_1 + 0xe8));
  return;
}

