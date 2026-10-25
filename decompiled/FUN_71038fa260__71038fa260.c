// addr:      71038fa260
// offset:    0x38fa260
// name:      FUN_71038fa260
// mangled:   
// signature: undefined8 __cdecl FUN_71038fa260(long param_1, char * param_2, long param_3)


undefined8 FUN_71038fa260(long param_1,char *param_2,long param_3)

{
  int *piVar1;
  void *__dest;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  size_t __n;
  char *pcVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined *puVar12;
  undefined2 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  char *pcVar19;
  undefined8 uVar20;
  char *pcVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  
  if (*(char *)(param_1 + 0xc) == '\x01') {
    plVar11 = *(long **)(param_1 + 0x20);
    lVar16 = *plVar11;
    *plVar11 = *(long *)(param_1 + 0x38) + plVar11[7];
    plVar11[7] = lVar16 - *(long *)(param_1 + 0x38);
  }
  if (*param_2 == '>') {
    plVar11 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
    puVar25 = (undefined8 *)0x0;
    param_2 = param_2 + 1;
    *(long **)(param_1 + 0x10) = plVar11;
  }
  else {
    puVar25 = *(undefined8 **)(param_3 + 0x78);
    plVar11 = (long *)*puVar25;
  }
  if ((*(uint *)(plVar11 + 1) & 0x1f) == 6) {
    lVar16 = *plVar11;
  }
  else {
    lVar16 = 0;
  }
  pcVar9 = (char *)(param_3 + 0x38);
  __dest = (void *)(param_3 + 0x41);
  local_78 = 1;
  pcVar22 = param_2;
LAB_71038fa34c:
  switch(*pcVar22) {
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'm':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 's':
    goto switchD_71038fa364_caseD_4d;
  case 'S':
    if ((lVar16 == 0) || (*(char *)(lVar16 + 8) == '&')) {
      *(undefined1 **)(param_3 + 0x20) = &DAT_710427f635;
      *(undefined8 *)(param_3 + 0x2c) = 0xffffffffffffffff;
      puVar12 = &DAT_71042b2c92;
      pcVar19 = "=[C]";
    }
    else {
      lVar18 = *(long *)(lVar16 + 0x18);
      pcVar19 = "=?";
      if (*(long *)(lVar18 + 0x68) != 0) {
        pcVar19 = (char *)(*(long *)(lVar18 + 0x68) + 0x18);
      }
      *(char **)(param_3 + 0x20) = pcVar19;
      iVar5 = *(int *)(lVar18 + 0x28);
      *(int *)(param_3 + 0x2c) = iVar5;
      *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(lVar18 + 0x2c);
      puVar12 = &DAT_71043bd1df;
      if (iVar5 != 0) {
        puVar12 = &DAT_7104464729;
      }
    }
    *(undefined **)(param_3 + 0x18) = puVar12;
    __n = strlen(pcVar19);
    if (*pcVar19 == '@') {
      if (0x3c < __n) {
        *(undefined1 *)(param_3 + 0x3a) = 0x2e;
        pcVar9[0] = '.';
        pcVar9[1] = '.';
        pcVar19 = pcVar19 + __n;
        uVar3 = *(undefined8 *)(pcVar19 + -0x38);
        uVar4 = *(undefined8 *)(pcVar19 + -0x30);
        uVar20 = *(undefined8 *)(pcVar19 + -0x20);
        pcVar22 = pcVar22 + 1;
        *(undefined8 *)(param_3 + 0x4b) = *(undefined8 *)(pcVar19 + -0x28);
        *(undefined8 *)(param_3 + 0x53) = uVar20;
        *(undefined8 *)(param_3 + 0x3b) = uVar3;
        *(undefined8 *)(param_3 + 0x43) = uVar4;
        uVar20 = *(undefined8 *)(pcVar19 + -8);
        uVar3 = *(undefined8 *)(pcVar19 + -0x18);
        uVar4 = *(undefined8 *)(pcVar19 + -0x10);
        *(char *)(param_3 + 0x73) = *pcVar19;
        *(undefined8 *)(param_3 + 99) = uVar4;
        *(undefined8 *)(param_3 + 0x6b) = uVar20;
        *(undefined8 *)(param_3 + 0x5b) = uVar3;
        goto LAB_71038fa34c;
      }
    }
    else {
      if (*pcVar19 != '=') {
        pcVar21 = strchr(pcVar19,10);
        *(undefined1 *)(param_3 + 0x40) = 0x22;
        builtin_strncpy(pcVar9,"[string ",8);
        if ((__n < 0x2d) && (pcVar21 == (char *)0x0)) {
          memcpy(__dest,pcVar19,__n);
          puVar13 = (undefined2 *)((long)__dest + __n);
        }
        else {
          if (pcVar21 != (char *)0x0) {
            __n = (long)pcVar21 - (long)pcVar19;
          }
          if (0x2c < __n) {
            __n = 0x2d;
          }
          memcpy(__dest,pcVar19,__n);
          puVar2 = (undefined2 *)((long)__dest + __n);
          *(undefined1 *)(puVar2 + 1) = 0x2e;
          puVar13 = (undefined2 *)((long)puVar2 + 3);
          *puVar2 = 0x2e2e;
        }
        *(undefined1 *)(puVar13 + 1) = 0;
        *puVar13 = 0x5d22;
        pcVar22 = pcVar22 + 1;
        goto LAB_71038fa34c;
      }
      if (0x3c < __n) {
        *(undefined8 *)pcVar9 = *(undefined8 *)(pcVar19 + 1);
        uVar3 = *(undefined8 *)(pcVar19 + 9);
        uVar4 = *(undefined8 *)(pcVar19 + 0x11);
        pcVar22 = pcVar22 + 1;
        uVar20 = *(undefined8 *)(pcVar19 + 0x21);
        *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(pcVar19 + 0x19);
        *(undefined8 *)(param_3 + 0x58) = uVar20;
        *(undefined8 *)(param_3 + 0x40) = uVar3;
        *(undefined8 *)(param_3 + 0x48) = uVar4;
        uVar6 = *(undefined2 *)(pcVar19 + 0x39);
        uVar3 = *(undefined8 *)(pcVar19 + 0x29);
        uVar4 = *(undefined8 *)(pcVar19 + 0x31);
        *(char *)(param_3 + 0x72) = pcVar19[0x3b];
        *(undefined2 *)(param_3 + 0x70) = uVar6;
        *(undefined8 *)(param_3 + 0x60) = uVar3;
        *(undefined8 *)(param_3 + 0x68) = uVar4;
        *(undefined1 *)(param_3 + 0x73) = 0;
        goto LAB_71038fa34c;
      }
    }
    memcpy(pcVar9,pcVar19 + 1,__n);
    pcVar22 = pcVar22 + 1;
    goto LAB_71038fa34c;
  case 'l':
    if (puVar25 != (undefined8 *)0x0) {
      uVar10 = 0xffffffff;
      if ((*(byte *)((long)puVar25 + 0x42) >> 1 & 1) != 0) {
        lVar18 = *(long *)(*(long *)(*(long *)*puVar25 + 0x18) + 0x48);
        if (lVar18 == 0) {
          *(undefined4 *)(param_3 + 0x28) = 0xffffffff;
          pcVar22 = pcVar22 + 1;
          goto LAB_71038fa34c;
        }
        uVar10 = *(undefined4 *)
                  (lVar18 + ((puVar25[5] - *(long *)(*(long *)(*(long *)*puVar25 + 0x18) + 0x38)) *
                             0x40000000 + -0x100000000 >> 0x1e));
      }
      *(undefined4 *)(param_3 + 0x28) = uVar10;
      pcVar22 = pcVar22 + 1;
      goto LAB_71038fa34c;
    }
    *(undefined4 *)(param_3 + 0x28) = 0xffffffff;
    pcVar22 = pcVar22 + 1;
    goto LAB_71038fa34c;
  case 'n':
    if ((puVar25 != (undefined8 *)0x0) && ((*(byte *)((long)puVar25 + 0x42) >> 5 & 1) == 0)) {
      puVar17 = (undefined8 *)puVar25[2];
      if ((*(byte *)((long)puVar17 + 0x42) >> 1 & 1) == 0) goto LAB_71038fa3f4;
      if ((*(byte *)((long)puVar17 + 0x42) >> 2 & 1) == 0) {
        uVar14 = 0;
        lVar18 = *(long *)(*(long *)(*(long *)*puVar17 + 0x18) + 0x38);
        uVar8 = (int)((ulong)(puVar17[5] - lVar18) >> 2) - 1;
        uVar7 = *(uint *)(lVar18 + (long)(int)uVar8 * 4);
        pcVar19 = "for iterator";
        pcVar21 = pcVar19;
        switch(uVar7 & 0x3f) {
        case 8:
        case 10:
          uVar14 = 1;
          break;
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
          uVar14 = (ulong)((uVar7 & 0x3f) - 7);
          break;
        case 0x19:
          uVar14 = 0x12;
          break;
        case 0x1a:
          uVar14 = 0x13;
          break;
        case 0x1c:
          uVar14 = 4;
          break;
        case 0x1d:
          uVar14 = 0x16;
          break;
        case 0x1f:
          uVar14 = 5;
          break;
        case 0x20:
          uVar14 = 0x14;
          break;
        case 0x21:
          uVar14 = 0x15;
          break;
        case 0x24:
        case 0x25:
          pcVar19 = FUN_71038fa930(*(long *)(*(long *)*puVar17 + 0x18),uVar8,uVar7 >> 6 & 0xff,
                                   (long *)(param_3 + 8));
          *(char **)(param_3 + 0x10) = pcVar19;
          if (pcVar19 != (char *)0x0) goto switchD_71038fa364_caseD_4c;
          goto LAB_71038fa3f8;
        case 0x29:
          goto switchD_71038fa6d0_caseD_29;
        }
        pcVar19 = (char *)(*(long *)(*(long *)(param_1 + 0x18) + uVar14 * 8 + 0xe0) + 0x18);
        pcVar21 = "metamethod";
      }
      else {
        pcVar19 = "?";
        pcVar21 = "hook";
      }
switchD_71038fa6d0_caseD_29:
      *(char **)(param_3 + 8) = pcVar19;
      *(char **)(param_3 + 0x10) = pcVar21;
      pcVar22 = pcVar22 + 1;
      goto LAB_71038fa34c;
    }
LAB_71038fa3f4:
    *(undefined8 *)(param_3 + 0x10) = 0;
LAB_71038fa3f8:
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined1 **)(param_3 + 0x10) = &DAT_7104867c2e;
  case 'L':
  case 'f':
switchD_71038fa364_caseD_4c:
    pcVar22 = pcVar22 + 1;
    goto LAB_71038fa34c;
  case 't':
    if (puVar25 == (undefined8 *)0x0) {
      *(undefined1 *)(param_3 + 0x37) = 0;
      pcVar22 = pcVar22 + 1;
    }
    else {
      *(byte *)(param_3 + 0x37) = *(byte *)((long)puVar25 + 0x42) & 0x20;
      pcVar22 = pcVar22 + 1;
    }
    goto LAB_71038fa34c;
  case 'u':
    if (lVar16 == 0) {
      *(undefined1 *)(param_3 + 0x34) = 0;
LAB_71038fa48c:
      *(undefined2 *)(param_3 + 0x35) = 0x100;
      pcVar22 = pcVar22 + 1;
    }
    else {
      *(undefined1 *)(param_3 + 0x34) = *(undefined1 *)(lVar16 + 10);
      if (*(char *)(lVar16 + 8) == '&') goto LAB_71038fa48c;
      *(undefined1 *)(param_3 + 0x36) = *(undefined1 *)(*(long *)(lVar16 + 0x18) + 0xb);
      *(undefined1 *)(param_3 + 0x35) = *(undefined1 *)(*(long *)(lVar16 + 0x18) + 10);
      pcVar22 = pcVar22 + 1;
    }
    goto LAB_71038fa34c;
  }
  if (*pcVar22 != '\0') {
switchD_71038fa364_caseD_4d:
    local_78 = 0;
    pcVar22 = pcVar22 + 1;
    goto LAB_71038fa34c;
  }
  pcVar9 = strchr(param_2,0x66);
  if (pcVar9 != (char *)0x0) {
    plVar15 = *(long **)(param_1 + 0x10);
    lVar18 = plVar11[1];
    *plVar15 = *plVar11;
    plVar15[1] = lVar18;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    plVar11 = *(long **)(param_1 + 0x20);
    lVar18 = *plVar11;
    *plVar11 = *(long *)(param_1 + 0x38) + plVar11[7];
    plVar11[7] = lVar18 - *(long *)(param_1 + 0x38);
  }
  pcVar9 = strchr(param_2,0x4c);
  if (pcVar9 != (char *)0x0) {
    if ((lVar16 == 0) || (*(char *)(lVar16 + 8) == '&')) {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 8) = 0;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    }
    else {
      lVar23 = *(long *)(*(long *)(lVar16 + 0x18) + 0x48);
      lVar18 = FUN_710391e050(param_1);
      plVar11 = *(long **)(param_1 + 0x10);
      *plVar11 = lVar18;
      *(undefined4 *)(plVar11 + 1) = 0x45;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
      if (0 < *(int *)(*(long *)(lVar16 + 0x18) + 0x1c)) {
        lVar24 = 0;
        do {
          uVar7 = *(uint *)(lVar23 + lVar24 * 4);
          local_70 = (long)(int)uVar7;
          if (local_70 - 1U < (ulong)*(uint *)(lVar18 + 0xc)) {
            puVar25 = (undefined8 *)(*(long *)(lVar18 + 0x10) + (local_70 - 1U) * 0x10);
LAB_71038fa8cc:
            if (puVar25 == &DAT_7104862960) goto LAB_71038fa8d4;
          }
          else {
            puVar25 = (undefined8 *)
                      (*(long *)(lVar18 + 0x18) +
                      (long)(int)(uVar7 & (-1 << (ulong)(*(byte *)(lVar18 + 0xb) & 0x1f) ^
                                          0xffffffffU)) * 0x20);
            do {
              if ((*(int *)(puVar25 + 3) == 0x13) && (puVar25[2] == local_70)) goto LAB_71038fa8cc;
              piVar1 = (int *)((long)puVar25 + 0x1c);
              puVar25 = puVar25 + (long)*piVar1 * 4;
            } while (*piVar1 != 0);
LAB_71038fa8d4:
            local_68 = 0x13;
            puVar25 = FUN_710391d940(param_1,lVar18,(float *)&local_70);
          }
          *(undefined4 *)puVar25 = 1;
          *(undefined4 *)(puVar25 + 1) = 1;
          lVar24 = lVar24 + 1;
        } while (lVar24 < *(int *)(*(long *)(lVar16 + 0x18) + 0x1c));
      }
    }
  }
  return local_78;
}

