// addr:      71001f3220
// offset:    0x1f3220
// name:      FUN_71001f3220
// mangled:   
// signature: uint __cdecl FUN_71001f3220(long param_1, char * param_2, ulong param_3)


uint FUN_71001f3220(long param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  char *__haystack;
  undefined1 auVar9 [16];
  undefined **local_120;
  undefined1 local_118 [16];
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined **local_f8;
  undefined1 local_f0 [16];
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined ***local_58;
  
  pcVar4 = strstr(param_2,"=");
  uVar1 = 0;
  if ((pcVar4 == (char *)0x0) || (pcVar4 == param_2)) goto LAB_71001f3360;
  __haystack = pcVar4 + 1;
  if ((*__haystack == '\0') || (pcVar5 = strstr(__haystack,"="), pcVar5 != (char *)0x0)) {
    uVar1 = 0;
    goto LAB_71001f3360;
  }
  *pcVar4 = '\0';
  if ((param_3 & 1) == 0) {
    iVar2 = strcmp(param_2,"address");
    if (iVar2 != 0) {
      iVar2 = strcmp(param_2,"port");
      if (iVar2 == 0) {
        iVar2 = atoi(__haystack);
        if (*(char *)(param_1 + 0x68) == '\0') {
          FUN_71001f2180(param_1);
        }
        FUN_71001bee30(*(long *)(param_1 + 8),(ushort)iVar2);
        *(undefined1 *)(param_1 + 0x69) = 0;
      }
      else {
        iVar2 = strcmp(param_2,"Pa");
        if (iVar2 != 0) {
          local_e0 = local_f0;
          local_f0[0] = 0;
          uStack_d8 = 0x10;
          local_f8 = &PTR_FUN_710509cc08;
          FUN_71001b47e0((long)&local_f8,param_2,-1);
          local_108 = local_118;
          uStack_100 = 0x10;
          local_118[0] = 0;
          local_120 = &PTR_FUN_710509cc08;
          FUN_71001b47e0((long)&local_120,__haystack,-1);
          if (*(char *)(param_1 + 0x68) == '\0') {
            FUN_71001f2180(param_1);
          }
          plVar6 = (long *)(param_1 + 0x30);
          goto LAB_71001f3310;
        }
        FUN_71001bec60(&local_f8,__haystack,0);
        lVar8 = *(long *)(param_1 + 8);
        uVar3 = FUN_71001bef20((long)&local_f8);
        *(undefined4 *)(lVar8 + 0x88) = uVar3;
        FUN_71001bef00();
      }
      goto LAB_71001f3354;
    }
    if (*(char *)(param_1 + 0x68) == '\0') {
      FUN_71001f2180(param_1);
    }
    *(undefined1 *)(param_1 + 0x69) = 0;
    uVar7 = FUN_71001becd0(*(long *)(param_1 + 8),__haystack);
    uVar1 = (uint)uVar7;
  }
  else {
    local_e0 = local_f0;
    local_f0[0] = 0;
    uStack_d8 = 0x10;
    local_f8 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_f8,param_2,-1);
    local_108 = local_118;
    uStack_100 = 0x10;
    local_118[0] = 0;
    local_120 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_120,__haystack,-1);
    if (*(char *)(param_1 + 0x68) == '\0') {
      FUN_71001f2180(param_1);
    }
    plVar6 = (long *)(param_1 + 0x48);
LAB_71001f3310:
    local_58 = &local_f8;
    auVar9 = FUN_7101711530(plVar6,(long)local_58,"",(long *)&local_58);
    FUN_71001b2f70(auVar9._0_8_ + 0x48,(long)&local_120);
    *(undefined1 *)(param_1 + 0x69) = 0;
    local_120 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_120);
    local_f8 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_f8);
LAB_71001f3354:
    uVar1 = 1;
  }
  *pcVar4 = '=';
LAB_71001f3360:
  return uVar1 & 1;
}

