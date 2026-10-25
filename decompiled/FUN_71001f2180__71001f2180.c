// addr:      71001f2180
// offset:    0x1f2180
// name:      FUN_71001f2180
// mangled:   
// signature: undefined __cdecl FUN_71001f2180(long param_1)


/* WARNING: Removing unreachable block (ram,0x0071001f2294) */
/* WARNING: Removing unreachable block (ram,0x0071001f2284) */

void FUN_71001f2180(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *__haystack;
  byte local_ac [4];
  uint auStack_a8 [6];
  char acStack_90 [64];
  
  *(undefined1 *)(param_1 + 0x68) = 1;
  FUN_71001beb90(*(long *)(param_1 + 8));
  puVar8 = (undefined8 *)(param_1 + 0x20);
  FUN_7100219ca0(param_1 + 0x18,(undefined8 *)*puVar8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 **)(param_1 + 0x18) = puVar8;
  *puVar8 = 0;
  puVar8 = (undefined8 *)(param_1 + 0x38);
  FUN_7101711670(param_1 + 0x30,(undefined8 *)*puVar8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 **)(param_1 + 0x30) = puVar8;
  *puVar8 = 0;
  puVar8 = (undefined8 *)(param_1 + 0x50);
  FUN_7101711670(param_1 + 0x48,(undefined8 *)*puVar8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 **)(param_1 + 0x48) = puVar8;
  *puVar8 = 0;
  FUN_71001f3110(auStack_a8,param_1,acStack_90,0x40);
  local_ac[0] = 1;
  bVar1 = FUN_71001b4280(auStack_a8,local_ac);
  if (bVar1) {
    iVar2 = strcmp(acStack_90,"prudp");
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      iVar2 = strcmp(acStack_90,"prudps");
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 2;
      }
      else {
        iVar2 = strcmp(acStack_90,"udp");
        if (iVar2 != 0) goto LAB_71001f2268;
        *(undefined4 *)(param_1 + 0x10) = 3;
      }
    }
    pcVar4 = strstr(*(char **)(param_1 + 0x60),":/");
    sVar5 = strlen(":/");
    pcVar4 = pcVar4 + sVar5;
    pcVar6 = strstr(pcVar4,"#");
    if (pcVar6 == (char *)0x0) {
      do {
        pcVar6 = strstr(pcVar4,";");
        if (pcVar6 == (char *)0x0) {
          sVar5 = strlen(pcVar4);
          if (sVar5 == 0) goto LAB_71001f2474;
          pcVar6 = pcVar4 + sVar5;
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (pcVar4 == pcVar6) {
          return;
        }
        *pcVar6 = '\0';
        uVar3 = FUN_71001f3220(param_1,pcVar4,0);
        if (bVar1) goto LAB_71001f2470;
        pcVar4 = pcVar6 + 1;
        *pcVar6 = ';';
        if ((uVar3 & 1) == 0) {
          return;
        }
      } while( true );
    }
    __haystack = pcVar6 + 1;
    pcVar7 = strstr(__haystack,"#");
    if (pcVar7 != (char *)0x0) {
      return;
    }
    *pcVar6 = '\0';
    do {
      pcVar7 = strstr(pcVar4,";");
      if (pcVar7 == (char *)0x0) {
        sVar5 = strlen(pcVar4);
        if (sVar5 == 0) {
          *pcVar6 = '#';
          goto LAB_71001f2404;
        }
        pcVar7 = pcVar4 + sVar5;
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (pcVar4 == pcVar7) break;
      *pcVar7 = '\0';
      uVar3 = FUN_71001f3220(param_1,pcVar4,0);
      if (bVar1) {
        *pcVar6 = '#';
        if ((uVar3 & 1) == 0) {
          return;
        }
        goto LAB_71001f2404;
      }
      pcVar4 = pcVar7 + 1;
      *pcVar7 = ';';
    } while ((uVar3 & 1) != 0);
    *pcVar6 = '#';
    return;
  }
LAB_71001f2268:
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
LAB_71001f2404:
  pcVar4 = strstr(__haystack,";");
  if (pcVar4 == (char *)0x0) {
    sVar5 = strlen(__haystack);
    if (sVar5 == 0) goto LAB_71001f2474;
    pcVar4 = __haystack + sVar5;
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (__haystack == pcVar4) {
    return;
  }
  *pcVar4 = '\0';
  uVar3 = FUN_71001f3220(param_1,__haystack,1);
  if (bVar1) goto LAB_71001f2470;
  __haystack = pcVar4 + 1;
  *pcVar4 = ';';
  if ((uVar3 & 1) == 0) {
    return;
  }
  goto LAB_71001f2404;
LAB_71001f2470:
  if ((uVar3 & 1) == 0) {
    return;
  }
LAB_71001f2474:
  *(undefined2 *)(param_1 + 0x69) = 0x101;
  return;
}

