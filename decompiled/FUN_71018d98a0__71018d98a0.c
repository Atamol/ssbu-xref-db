// addr:      71018d98a0
// offset:    0x18d98a0
// name:      FUN_71018d98a0
// mangled:   
// signature: undefined __cdecl FUN_71018d98a0(long param_1, long param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Control flow encountered bad instruction data */

void FUN_71018d98a0(long param_1,long param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong local_21e0;
  undefined2 local_21d8;
  undefined8 local_21d4;
  undefined8 local_21cc;
  undefined1 local_21c4;
  undefined8 local_2184;
  undefined1 local_217c;
  undefined8 local_213c;
  undefined1 local_2134;
  undefined1 auStack_20f4 [4096];
  undefined1 uStack_10f4;
  undefined4 local_10f0;
  undefined1 uStack_10ec;
  undefined8 local_10e8;
  undefined1 uStack_10e0;
  undefined4 local_10a0;
  undefined4 local_109c;
  undefined4 uStack_1098;
  undefined5 uStack_1094;
  undefined1 auStack_1050 [4096];
  
  lVar16 = *(long *)(param_1 + 0x58);
  if (*(char *)(lVar16 + 0x2c) != '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar3 = DAT_71053050f0;
    local_21d8 = 0x100;
    local_21e0 = 0;
    local_21d4 = 0x100000000;
    local_21c4 = 0;
    local_21cc = 0;
    local_217c = 0;
    local_2184 = 0;
    local_2134 = 0;
    local_213c = 0;
    memset(auStack_20f4,0,0x1000);
    uStack_10f4 = 1;
    local_10f0 = 0;
    uStack_10ec = 1;
    uStack_10e0 = 0;
    local_10e8 = 0;
    local_10a0 = 0x20;
    memset(auStack_1050,0,0x1000);
    uStack_1094 = 0;
    local_109c = 0;
    uStack_1098 = 0;
    FUN_7101af73b0((long)&local_21e0,uVar3);
    uVar17 = 1;
    local_21d8 = CONCAT11(local_21d8._1_1_,1);
    local_109c = 1;
    if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x69) != '\0') {
      uVar17 = 2;
    }
    param_4 = (byte ****)(ulong)uVar17;
    param_3 = (char *)0x1;
    FUN_7101af8570(*(long *)(lVar16 + 8),(int *)&local_21e0,1,param_4,param_5,param_6,param_7,
                   param_8);
    uVar17 = (uVar3 & 0x7f000000) + 0xfe000000;
    if (uVar17 >> 0x18 < 7) {
      uVar7 = (ulong)*(uint *)(&DAT_7104544710 + (long)(char)(uVar17 >> 0x18) * 4);
    }
    else {
      uVar7 = 0xffffffff;
    }
    FUN_7101af2070(*(long **)(*(long *)(lVar16 + 0x10) + 0x80),uVar7,(long ****)param_3,param_4,
                   param_5,param_6,param_7,param_8);
    lVar11 = DAT_710532f8d0;
    FUN_7103313c50(*(ulong **)(DAT_710532f8d0 + 8));
    lVar12 = *(long *)(lVar11 + 8);
    if (*(char *)(lVar12 + 0x22) != '\0') {
      param_3 = (char *)0x0;
      FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
      *(undefined1 *)(lVar12 + 0x22) = 0;
      lVar12 = *(long *)(lVar11 + 8);
    }
    if (*(char *)(lVar12 + 0x23) != '\0') {
      *(undefined1 *)(lVar12 + 0x23) = 0;
      param_3 = (char *)0x0;
      FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
    }
    FUN_71032eafc0(*(long *)(DAT_710532f7f0 + 8),0,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined1 *)(lVar16 + 0x2c) = 0;
  }
  plVar13 = *(long **)(*(long *)(*(long *)(lVar16 + 0x18) + 0x80) + 0x40);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar11 = *plVar13;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 8) != 0) {
      return;
    }
    if (*(long *)(lVar11 + 8) == 0) {
      local_21e0 = 0;
      FUN_71037aea50(&local_21e0,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      plVar13 = (long *)*plVar13;
      lVar12 = *plVar13;
      lVar11 = 0;
      if (lVar12 != 0) {
        lVar11 = *(long *)(*(long *)(lVar12 + 0x18) + 0x40);
        if (*(uint *)(lVar11 + 0xc) < 2) {
          plVar8 = (long *)(*(long *)(lVar11 + 0x18) +
                           ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar11 + 0xb) & 0x3f)) &
                           2) * 0x20);
          do {
            if (((int)plVar8[3] == 0x13) && (plVar9 = plVar8, plVar8[2] == 2)) break;
            piVar1 = (int *)((long)plVar8 + 0x1c);
            plVar8 = plVar8 + (long)*piVar1 * 4;
            plVar9 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar9 = (long *)(*(long *)(lVar11 + 0x10) + 0x10);
        }
        param_3 = "result";
        FUN_71038f4d40(lVar12,plVar9,"result");
        lVar11 = *plVar13;
      }
      FUN_710372d940(lVar11,(long *)&local_21e0,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar7 = local_21e0;
      if (local_21e0 != 0) {
        lVar12 = *(long *)(local_21e0 + 0x10);
        uVar6 = **(undefined4 **)(local_21e0 + 8);
        lVar11 = 0;
        do {
          cVar2 = *(char *)(lVar12 + lVar11);
          if (cVar2 == 's') {
            lVar18 = *(long *)(uVar7 + 8);
            uVar5 = *(ulong *)(lVar18 + lVar11 * 8);
            if (uVar5 != 0) {
              FUN_710392eb40(uVar5);
            }
            *(undefined8 *)(lVar18 + lVar11 * 8) = 0;
          }
          else if (cVar2 == '\0') goto LAB_71018d9ba4;
          lVar11 = lVar11 + 1;
        } while( true );
      }
    }
  }
switchD_71018d9bcc_default:
  *(undefined4 *)(lVar16 + 0x28) = 2;
  FUN_7101af86a0(*(long *)(lVar16 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar11 = *(long *)(*(long *)(lVar16 + 0x10) + 0x80);
  if (*(int *)(lVar11 + 8) != -1) {
    puVar14 = *(undefined8 **)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 8) = 0xffffffff;
    uVar10 = extraout_x1;
    if (puVar14 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      FUN_7103375760(puVar14);
      FUN_710392eb40((ulong)puVar14);
      uVar10 = extraout_x1_00;
    }
    puVar14 = *(undefined8 **)(lVar11 + 0x10);
    if (puVar14 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      puVar15 = (undefined8 *)*puVar14;
      *puVar14 = 0;
      if (puVar15 != (undefined8 *)0x0) {
        FUN_7103773770(puVar15,uVar10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_710392eb40((ulong)puVar15);
      }
      FUN_710392eb40((ulong)puVar14);
    }
  }
  uVar6 = *(undefined4 *)(lVar16 + 0x28);
LAB_71018d9c5c:
  FUN_7103726af0(*(long *)(param_2 + 8),uVar6);
  return;
LAB_71018d9ba4:
  FUN_710392eb40(uVar7);
  local_21e0 = 0;
  switch(uVar6) {
  case 1:
    uVar6 = 3;
    *(undefined4 *)(lVar16 + 0x28) = 3;
    break;
  case 2:
    uVar6 = 4;
    *(undefined4 *)(lVar16 + 0x28) = 4;
    break;
  case 3:
    uVar6 = 5;
    *(undefined4 *)(lVar16 + 0x28) = 5;
    break;
  case 4:
    uVar6 = 6;
    *(undefined4 *)(lVar16 + 0x28) = 6;
    break;
  case 5:
    uVar6 = 7;
    *(undefined4 *)(lVar16 + 0x28) = 7;
    break;
  case 6:
    uVar6 = 8;
    *(undefined4 *)(lVar16 + 0x28) = 8;
    break;
  default:
    goto switchD_71018d9bcc_default;
  }
  goto LAB_71018d9c5c;
}

