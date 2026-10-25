// addr:      7101ee42f0
// offset:    0x1ee42f0
// name:      FUN_7101ee42f0
// mangled:   
// signature: undefined __cdecl FUN_7101ee42f0(long param_1, undefined8 param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ee42f0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  undefined4 uVar8;
  char *pcVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_b8;
  byte local_b0 [64];
  
  plVar15 = (long *)(param_1 + 0x480);
  do {
    if ((int *)*plVar15 == (int *)0x0) {
LAB_7101ee43c4:
      FUN_7103778300(0x3f800000,plVar15[2],0x71043bedd6);
      FUN_7103778300(0x3f800000,plVar15[2],0x7104413119);
      FUN_7103778300(0x3f800000,plVar15[2],0x7104443ed4);
      lVar7 = plVar15[2];
      pcVar9 = "gray_on";
LAB_7101ee44a0:
      FUN_7103778300(0x3f800000,lVar7,(long)pcVar9);
      if ((char)plVar15[0x19] == '\0') goto LAB_7101ee46b0;
LAB_7101ee44b0:
      if (*(int *)(*plVar15 + 0x68) == -1) goto LAB_7101ee46b0;
      FUN_7103778300(0x3f800000,plVar15[4],0x71042924b5);
      uVar13 = *(uint *)(*plVar15 + 0x68);
      if (uVar13 == 0xffffffff) {
LAB_7101ee4548:
        uVar8 = 0;
      }
      else {
        if (uVar13 < 10) {
          puVar14 = &DAT_7105339830;
          if ((*(char *)(DAT_71053398b0 + 8) != '\0') &&
             (puVar14 = (undefined8 *)(&DAT_7105339860)[(int)uVar13], puVar14 == (undefined8 *)0x0))
          goto LAB_7101ee4548;
        }
        else {
          puVar14 = &DAT_7105339830;
        }
        uVar13 = *(int *)(puVar14[2] + 0x9c) - 1;
        if (6 < uVar13) goto LAB_7101ee4548;
        uVar8 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar13 * 4);
      }
      FUN_710339d9f0((uint *)&local_b8,uVar8);
      FUN_7103778300(0x3f800000,plVar15[6],(long)local_b0);
      if (*(uint *)(*plVar15 + 0x68) < 10) {
        puVar14 = &DAT_7105339830;
        if ((*(char *)(DAT_71053398b0 + 8) == '\0') ||
           (puVar14 = (undefined8 *)(&DAT_7105339860)[(int)*(uint *)(*plVar15 + 0x68)],
           puVar14 != (undefined8 *)0x0)) goto LAB_7101ee45a8;
LAB_7101ee4604:
        local_b0[0] = 0;
        local_b8 = 0x811c9dc5;
      }
      else {
        puVar14 = &DAT_7105339830;
LAB_7101ee45a8:
        if ((char)((long *)puVar14[2])[0x17] == '\0') goto LAB_7101ee4604;
        cVar6 = (**(code **)(*(long *)puVar14[2] + 0x20))();
        bVar4 = cVar6 - 1;
        if ((0xe < bVar4) || ((0x2e8aUL >> ((long)(char)bVar4 & 0x3fU) & 1) != 0))
        goto LAB_7101ee4604;
        FUN_71003a4ca0((uint *)&local_b8,"indicator_%d",
                       (ulong)(*(int *)(&DAT_7104753e00 + (long)(char)bVar4 * 4) + 1),param_3,
                       param_4,param_5,param_6,param_7,param_8);
      }
      FUN_7103778300(0x3f800000,plVar15[6],(long)local_b0);
      lVar7 = plVar15[2];
      pcVar9 = "ready_on";
    }
    else {
      iVar3 = *(int *)*plVar15;
      if (iVar3 == 2) {
        FUN_7103778300(0x3f800000,plVar15[2],0x710432a798);
        lVar7 = plVar15[2];
        pcVar9 = "player_color_fp";
LAB_7101ee4454:
        FUN_7103778300(0x3f800000,lVar7,(long)pcVar9);
        FUN_7103778300(0x3f800000,plVar15[2],0x7104443ed4);
        FUN_7103778300(0x3f800000,plVar15[2],0x71043bedce);
        FUN_7103778300(0x3f800000,plVar15[4],(long)pcVar9);
        lVar7 = plVar15[8];
        goto LAB_7101ee44a0;
      }
      if (iVar3 == 1) {
        FUN_7103778300(0x3f800000,plVar15[2],0x710432a798);
        lVar7 = plVar15[2];
        pcVar9 = "player_color_cp";
        goto LAB_7101ee4454;
      }
      if (iVar3 != 0) goto LAB_7101ee43c4;
      plVar1 = plVar15 + 1;
      FUN_7103778300(0x3f800000,plVar15[2],0x710432a798);
      uVar10 = (ulong)(*(int *)(*plVar15 + 0x58) + 1);
      FUN_7103778430((long)plVar1,"player_color_%dp",uVar10,param_4,param_5,param_6,param_7,param_8)
      ;
      if ((char)plVar15[0x19] == '\0') {
        FUN_7103778430((long)plVar1,"bg_on",uVar10,param_4,param_5,param_6,param_7,param_8);
        lVar7 = plVar15[2];
        pcVar9 = "gray_on";
      }
      else {
        if (*(int *)(*plVar15 + 0x68) == -1) {
          pcVar9 = "bg_off";
        }
        else {
          pcVar9 = "bg_on";
        }
        FUN_7103778430((long)plVar1,pcVar9,uVar10,param_4,param_5,param_6,param_7,param_8);
        lVar7 = plVar15[2];
        pcVar9 = "gray_off";
      }
      FUN_7103778300(0x3f800000,lVar7,(long)pcVar9);
      FUN_7103778430((long)(plVar15 + 3),"player_color_%dp",(ulong)(*(int *)(*plVar15 + 0x58) + 1),
                     param_4,param_5,param_6,param_7,param_8);
      param_3 = (ulong)(*(int *)(*plVar15 + 0x58) + 1);
      FUN_7103778430((long)(plVar15 + 7),"player_color_%dp",param_3,param_4,param_5,param_6,param_7,
                     param_8);
      if ((char)plVar15[0x19] != '\0') goto LAB_7101ee44b0;
LAB_7101ee46b0:
      FUN_7103778300(0x3f800000,plVar15[4],0x710436cb6c);
      FUN_7103778300(0x3f800000,plVar15[6],0x710436cb6c);
      lVar7 = plVar15[2];
      pcVar9 = "ready_off";
    }
    FUN_7103778300(0x3f800000,lVar7,(long)pcVar9);
    uVar10 = 0;
    pcVar9 = "blinkoff";
    if (*(char *)((long)plVar15 + 0xc9) != '\0') {
      pcVar9 = "blinkon";
    }
    do {
      pbVar2 = (byte *)(pcVar9 + uVar10);
      uVar12 = uVar10;
      if (*pbVar2 == 0) break;
      bVar4 = pbVar2[1];
      local_b0[uVar10] = *pbVar2;
      if (bVar4 == 0) {
        uVar12 = uVar10 + 1;
        break;
      }
      bVar5 = pbVar2[2];
      local_b0[uVar10 + 1] = bVar4;
      if (bVar5 == 0) {
        uVar12 = uVar10 + 2;
        break;
      }
      uVar12 = uVar10 + 3;
      local_b0[uVar10 + 2] = bVar5;
      uVar10 = uVar12;
    } while ((uint)uVar12 < 0x3f);
    local_b0[uVar12 & 0xffffffff] = 0;
    uVar11 = (uint)local_b0[0];
    uVar13 = 0x811c9dc5;
    pbVar2 = local_b0;
    if (local_b0[0] != 0) {
      do {
        uVar13 = uVar13 * 0x89 ^ uVar11;
        uVar11 = (uint)pbVar2[1];
        pbVar2 = pbVar2 + 1;
      } while (uVar11 != 0);
    }
    local_b8 = CONCAT44((int)uVar12,uVar13);
    FUN_7103778300(0x3f800000,plVar15[2],(long)local_b0);
    FUN_7103778300(0x3f800000,plVar15[4],(long)local_b0);
    plVar15 = plVar15 + 0x1a;
    if (plVar15 == (long *)(param_1 + 0xb00)) {
      return;
    }
  } while( true );
}

