// addr:      71018c2cb0
// offset:    0x18c2cb0
// name:      FUN_71018c2cb0
// mangled:   
// signature: undefined __cdecl FUN_71018c2cb0(int * param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018c2cb0(int *param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  ulong local_98;
  char local_90 [64];
  
  lVar15 = DAT_710532f8d0;
  if (param_1[0x55] == 0) {
    if ((char)param_1[0x3e70] == '\0') {
      uVar6 = FUN_71032b23e0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8),
                             0x116b904091);
      FUN_71033149a0(lVar15,uVar6,1,param_4,param_5,param_6,param_7,param_8);
    }
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x60) + 0x80) + 0x5c) != 3) {
      return;
    }
    local_90[0] = '\0';
    local_98 = 0;
    FUN_71018c8fa0(param_1[0x68],(byte *)&local_98);
    lVar15 = *(long *)(*(long *)(param_1 + 0x60) + 0x80);
    *(char *)(lVar15 + 0x51) = (char)(local_98 >> 8);
    *(char *)(lVar15 + 0x52) = (char)(local_98 >> 0x10);
    *(char *)(lVar15 + 0x53) = (char)(local_98 >> 0x18);
    *(char *)(lVar15 + 0x54) = (char)(local_98 >> 0x20);
    *(char *)(lVar15 + 0x55) = (char)(local_98 >> 0x28);
    *(char *)(lVar15 + 0x56) = (char)(local_98 >> 0x30);
    *(char *)(lVar15 + 0x50) = (char)local_98;
    *(char *)(lVar15 + 0x58) = local_90[0];
    *(char *)(lVar15 + 0x57) = (char)(local_98 >> 0x38);
    FUN_7101d2f860(lVar15);
    FUN_7101d2f860(lVar15);
    FUN_7101d2f860(lVar15);
    if ((*(undefined8 **)(lVar15 + 0x40) != (undefined8 *)0x0) &&
       (plVar13 = (long *)**(undefined8 **)(lVar15 + 0x40), plVar13 != (long *)0x0)) {
      FUN_7103375650(plVar13,"is_reset",&DAT_71043cdb7b);
    }
    *(undefined4 *)(lVar15 + 0x5c) = 0;
    return;
  }
  piVar1 = param_1 + 0x3e6b;
  iVar12 = *piVar1;
  *piVar1 = iVar12 + 1;
  if (*param_1 <= iVar12) {
    lVar15 = *(long *)(*(long *)(param_1 + 0x60) + 0x80);
    uVar5 = FUN_7101d384c0(0);
    uVar2 = (uint)uVar5 & 1;
    if (*(byte *)(lVar15 + 0x50) != uVar2) {
      param_3 = "full_key_con";
      *(char *)(lVar15 + 0x50) = (char)uVar2;
      local_90[0] = '\0';
      local_98 = 0;
      FUN_710062dc20((uint *)&local_98,"%s_is_connected");
      if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
        param_4 = (byte ****)(ulong)*(byte *)(lVar15 + 0x50);
        param_3 = &DAT_71043cdb7b;
        FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),local_90,&DAT_71043cdb7b);
      }
    }
    uVar5 = FUN_7101d384c0(1);
    uVar2 = (uint)uVar5 & 1;
    if (*(byte *)(lVar15 + 0x53) != uVar2) {
      param_3 = "joy_con";
      *(char *)(lVar15 + 0x53) = (char)uVar2;
      local_90[0] = '\0';
      local_98 = 0;
      FUN_710062dc20((uint *)&local_98,"%s_is_connected");
      if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
        param_4 = (byte ****)(ulong)*(byte *)(lVar15 + 0x53);
        param_3 = &DAT_71043cdb7b;
        FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),local_90,&DAT_71043cdb7b);
      }
    }
    uVar5 = FUN_7101d384c0(2);
    uVar2 = (uint)uVar5 & 1;
    if (*(byte *)(lVar15 + 0x56) != uVar2) {
      param_3 = "gc_con";
      *(char *)(lVar15 + 0x56) = (char)uVar2;
      local_90[0] = '\0';
      local_98 = 0;
      FUN_710062dc20((uint *)&local_98,"%s_is_connected");
      if ((long *)**(undefined8 **)(lVar15 + 0x40) != (long *)0x0) {
        param_4 = (byte ****)(ulong)*(byte *)(lVar15 + 0x56);
        param_3 = &DAT_71043cdb7b;
        FUN_7103375650((long *)**(undefined8 **)(lVar15 + 0x40),local_90,&DAT_71043cdb7b);
      }
    }
    *piVar1 = 0;
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x60) + 0x80);
  if (*(int *)(lVar15 + 0x5c) != 3) {
    plVar13 = *(long **)(lVar15 + 0x40);
    if (plVar13 == (long *)0x0) {
LAB_71018c30e4:
      iVar12 = *(int *)(lVar15 + 0x5c);
    }
    else {
      if (*plVar13 != 0) {
        local_98 = 0;
        FUN_71037aea50(&local_98,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
        plVar13 = (long *)*plVar13;
        lVar7 = *plVar13;
        lVar11 = 0;
        if (lVar7 != 0) {
          lVar11 = *(long *)(*(long *)(lVar7 + 0x18) + 0x40);
          if (*(uint *)(lVar11 + 0xc) < 2) {
            plVar9 = (long *)(*(long *)(lVar11 + 0x18) +
                             ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar11 + 0xb) & 0x3f))
                             & 2) * 0x20);
            do {
              if (((int)plVar9[3] == 0x13) && (plVar10 = plVar9, plVar9[2] == 2)) break;
              piVar1 = (int *)((long)plVar9 + 0x1c);
              plVar9 = plVar9 + (long)*piVar1 * 4;
              plVar10 = &DAT_7104862960;
            } while (*piVar1 != 0);
          }
          else {
            plVar10 = (long *)(*(long *)(lVar11 + 0x10) + 0x10);
          }
          param_3 = "exit_code";
          FUN_71038f4d40(lVar7,plVar10,"exit_code");
          lVar11 = *plVar13;
        }
        FUN_710372d940(lVar11,(long *)&local_98,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar6 = local_98;
        if (local_98 != 0) {
          lVar7 = *(long *)(local_98 + 0x10);
          iVar12 = **(int **)(local_98 + 8);
          lVar11 = 0;
          do {
            cVar4 = *(char *)(lVar7 + lVar11);
            if (cVar4 == 's') {
              lVar16 = *(long *)(uVar6 + 8);
              uVar8 = *(ulong *)(lVar16 + lVar11 * 8);
              if (uVar8 != 0) {
                FUN_710392eb40(uVar8);
              }
              *(undefined8 *)(lVar16 + lVar11 * 8) = 0;
            }
            else if (cVar4 == '\0') goto LAB_71018c307c;
            lVar11 = lVar11 + 1;
          } while( true );
        }
        *(undefined4 *)(lVar15 + 0x5c) = 0;
        goto LAB_71018c30e4;
      }
      *(undefined4 *)(lVar15 + 0x5c) = 0;
      iVar12 = *(int *)(lVar15 + 0x5c);
    }
    if (iVar12 == 0) {
      return;
    }
    goto LAB_71018c30ec;
  }
  if (0x11 < param_1[0x53]) {
    return;
  }
  uVar2 = param_1[0x53] + 1;
  param_1[0x53] = uVar2;
  if (0x12 < uVar2) goto LAB_71018c3238;
  iVar12 = 6;
  goto LAB_71018c3148;
LAB_71018c307c:
  FUN_710392eb40(uVar6);
  local_98 = 0;
  *(int *)(lVar15 + 0x5c) = iVar12;
  if (iVar12 != 1) goto LAB_71018c30e4;
  plVar13 = *(long **)(lVar15 + 0x40);
  if (*plVar13 != 0) {
    local_98 = 0;
    FUN_71037aea50(&local_98,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar13 = (long *)*plVar13;
    lVar7 = *plVar13;
    lVar11 = 0;
    if (lVar7 != 0) {
      lVar11 = *(long *)(*(long *)(lVar7 + 0x18) + 0x40);
      if (*(uint *)(lVar11 + 0xc) < 2) {
        plVar9 = (long *)(*(long *)(lVar11 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar11 + 0xb) & 0x3f)) & 2
                         ) * 0x20);
        do {
          if (((int)plVar9[3] == 0x13) && (plVar10 = plVar9, plVar9[2] == 2)) break;
          piVar1 = (int *)((long)plVar9 + 0x1c);
          plVar9 = plVar9 + (long)*piVar1 * 4;
          plVar10 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar10 = (long *)(*(long *)(lVar11 + 0x10) + 0x10);
      }
      param_3 = "decided_button_id";
      FUN_71038f4d40(lVar7,plVar10,"decided_button_id");
      lVar11 = *plVar13;
    }
    FUN_710372d940(lVar11,(long *)&local_98,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar6 = local_98;
    if (local_98 != 0) {
      lVar7 = *(long *)(local_98 + 0x10);
      uVar14 = **(undefined4 **)(local_98 + 8);
      lVar11 = 0;
      do {
        cVar4 = *(char *)(lVar7 + lVar11);
        if (cVar4 == 's') {
          lVar16 = *(long *)(uVar6 + 8);
          uVar8 = *(ulong *)(lVar16 + lVar11 * 8);
          if (uVar8 != 0) {
            FUN_710392eb40(uVar8);
          }
          *(undefined8 *)(lVar16 + lVar11 * 8) = 0;
        }
        else if (cVar4 == '\0') goto LAB_71018c321c;
        lVar11 = lVar11 + 1;
      } while( true );
    }
  }
  uVar14 = 0;
  goto LAB_71018c3228;
LAB_71018c321c:
  FUN_710392eb40(uVar6);
  local_98 = 0;
LAB_71018c3228:
  *(undefined4 *)(lVar15 + 0x60) = uVar14;
  iVar12 = *(int *)(lVar15 + 0x5c);
  if (iVar12 != 0) {
LAB_71018c30ec:
    iVar3 = *(int *)(lVar15 + 0x60);
    param_1[0x66] = iVar12;
    if (iVar12 == 1) {
      param_1[0x3e6c] = iVar3;
      iVar12 = 3;
    }
    else {
      plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x60) + 0x80) + 0x40);
      if (plVar13 == (long *)0x0) {
        return;
      }
      lVar15 = *plVar13;
      if ((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) {
        return;
      }
      iVar12 = 1;
    }
    param_1[0x65] = iVar12;
    uVar2 = param_1[0x53];
    if (0x12 < uVar2) {
LAB_71018c3238:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar12 = 0xb;
LAB_71018c3148:
    param_1[(long)(int)uVar2 + 0x40] = iVar12;
  }
  return;
}

