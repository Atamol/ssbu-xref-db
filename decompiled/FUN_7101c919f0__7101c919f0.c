// addr:      7101c919f0
// offset:    0x1c919f0
// name:      FUN_7101c919f0
// mangled:   
// signature: undefined __cdecl FUN_7101c919f0(uint * param_1, byte param_2, byte param_3)


void FUN_7101c919f0(uint *param_1,byte param_2,byte param_3)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char local_98 [64];
  undefined8 local_58;
  byte local_50 [64];
  
  if (param_2 < 2) {
    uVar5 = 0;
    pcVar8 = "mnu_online_room_spirits_on";
    if ((&DAT_7104545280)[(char)param_2] != '\x02') {
      pcVar8 = "mnu_online_room_spirits_off";
    }
    while( true ) {
      bVar1 = pcVar8[uVar5];
      if (bVar1 == 0) break;
      local_50[uVar5] = bVar1;
      if (0x3e < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      bVar1 = (pcVar8 + uVar5)[1];
      if (bVar1 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      local_50[uVar5 + 1] = bVar1;
      uVar5 = uVar5 + 2;
    }
    uVar4 = 0x811c9dc5;
    local_50[uVar5 & 0xffffffff] = 0;
    local_58 = uVar5 << 0x20;
    uVar9 = (uint)local_50[0];
    uVar7 = uVar4;
    if (uVar9 != 0) {
      pbVar6 = local_50;
      do {
        pbVar6 = pbVar6 + 1;
        uVar7 = uVar7 * 0x89 ^ uVar9;
        uVar9 = (uint)*pbVar6;
      } while (uVar9 != 0);
    }
    local_58 = CONCAT44((int)uVar5,uVar7);
    if (param_3 < 2) {
      uVar5 = 0;
      pcVar8 = "mnu_online_room_spirits_on";
      if ((&DAT_7104545280)[(char)param_3] != '\x02') {
        pcVar8 = "mnu_online_room_spirits_off";
      }
      while( true ) {
        cVar2 = pcVar8[uVar5];
        if (cVar2 == '\0') break;
        local_98[uVar5] = cVar2;
        if (0x3e < (int)uVar5 + 1U) {
          uVar5 = (ulong)((int)uVar5 + 1);
          break;
        }
        cVar2 = (pcVar8 + uVar5)[1];
        if (cVar2 == '\0') {
          uVar5 = uVar5 + 1;
          break;
        }
        local_98[uVar5 + 1] = cVar2;
        uVar5 = uVar5 + 2;
      }
      local_98[uVar5 & 0xffffffff] = '\0';
      if (local_98[0] != '\0') {
        pcVar8 = local_98;
        do {
          pcVar8 = pcVar8 + 1;
        } while (*pcVar8 != '\0');
      }
      uVar5 = 0;
      *param_1 = 0;
      while (local_50[0] != 0) {
        *(byte *)((long)param_1 + uVar5 + 8) = local_50[0];
        if (0x3e < (int)uVar5 + 1U) {
          uVar5 = (ulong)((int)uVar5 + 1);
          break;
        }
        if (local_50[uVar5 + 1] == 0) {
          uVar5 = uVar5 + 1;
          break;
        }
        *(byte *)((long)param_1 + uVar5 + 9) = local_50[uVar5 + 1];
        lVar3 = uVar5 + 2;
        uVar5 = uVar5 + 2;
        local_50[0] = local_50[lVar3];
      }
      *(undefined1 *)((long)param_1 + (uVar5 & 0xffffffff) + 8) = 0;
      uVar9 = (uint)(byte)param_1[2];
      param_1[1] = (uint)uVar5;
      uVar7 = uVar4;
      if ((byte)param_1[2] != 0) {
        pbVar6 = (byte *)((long)param_1 + 9);
        do {
          uVar7 = uVar7 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (uVar9 != 0);
      }
      uVar5 = 0;
      *param_1 = uVar7;
      param_1[0x12] = 0;
      do {
        if (local_98[0] == '\0') {
LAB_7101c91c6c:
          *(undefined1 *)((long)param_1 + (uVar5 & 0xffffffff) + 0x50) = 0;
          uVar7 = (uint)(byte)param_1[0x14];
          param_1[0x13] = (uint)uVar5;
          if ((byte)param_1[0x14] != 0) {
            pbVar6 = (byte *)((long)param_1 + 0x51);
            do {
              uVar4 = uVar4 * 0x89 ^ uVar7;
              uVar7 = (uint)*pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (uVar7 != 0);
          }
          param_1[0x12] = uVar4;
          return;
        }
        *(char *)((long)param_1 + uVar5 + 0x50) = local_98[0];
        if (0x3e < (int)uVar5 + 1U) {
          uVar5 = (ulong)((int)uVar5 + 1);
          goto LAB_7101c91c6c;
        }
        if (local_98[uVar5 + 1] == '\0') {
          uVar5 = uVar5 + 1;
          goto LAB_7101c91c6c;
        }
        *(char *)((long)param_1 + uVar5 + 0x51) = local_98[uVar5 + 1];
        local_98[0] = local_98[uVar5 + 2];
        uVar5 = uVar5 + 2;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

