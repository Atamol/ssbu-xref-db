// addr:      7100002c90
// offset:    0x2c90
// name:      FUN_7100002c90
// mangled:   
// signature: undefined __cdecl FUN_7100002c90(long * param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7100002c90(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  char local_13f;
  undefined2 local_13e;
  undefined4 local_34;
  
  if (*(int *)((long)param_1 + 0xc4) == 2) {
    return;
  }
  lVar18 = *param_1;
  if ((*(char *)((long)param_1 + 0x812) != '\0') || (*(char *)((long)param_1 + 0x82e) != '\0')) {
LAB_7100002ccc:
    uVar12 = *(undefined8 *)((long)param_1 + 0x1b2);
    uVar14 = *(undefined8 *)((long)param_1 + 0x1ba);
    uVar15 = *(undefined8 *)((long)param_1 + 0x1c2);
    *(long *)(lVar18 + 0x50be) = param_1[0x39];
    uVar16 = *(undefined8 *)((long)param_1 + 0x1a2);
    *(undefined8 *)(lVar18 + 0x50a0) = *(undefined8 *)((long)param_1 + 0x1aa);
    *(undefined8 *)(lVar18 + 0x5098) = uVar16;
    *(undefined8 *)(lVar18 + 0x50b8) = uVar15;
    *(undefined8 *)(lVar18 + 0x50b0) = uVar14;
    *(undefined8 *)(lVar18 + 0x50a8) = uVar12;
    lVar13 = *param_1;
    lVar17 = param_1[0x3f];
    lVar18 = param_1[0x3d];
    lVar3 = param_1[0x3e];
    *(undefined8 *)(lVar13 + 0x50f6) = *(undefined8 *)((long)param_1 + 0x1fe);
    lVar2 = param_1[0x3b];
    *(long *)(lVar13 + 0x50d8) = param_1[0x3c];
    *(long *)(lVar13 + 0x50d0) = lVar2;
    *(long *)(lVar13 + 0x50f0) = lVar17;
    *(long *)(lVar13 + 0x50e8) = lVar3;
    *(long *)(lVar13 + 0x50e0) = lVar18;
    *(undefined8 *)(*param_1 + 0x5108) = *(undefined8 *)param_1[0x10b];
    *(undefined4 *)(*param_1 + 0x5110) = *(undefined4 *)(param_1[0x10b] + 0x80);
    *(long *)(*param_1 + 0x50c8) = param_1[0x3a];
    *(long *)(*param_1 + 0x5100) = param_1[0x41];
    return;
  }
  puVar10 = &local_34;
  local_34 = 0x100;
  iVar4 = nnsocketGetPeerName(param_2,&uStack_140);
  if (iVar4 == 0) {
    plVar11 = (long *)&local_34;
    local_34 = 0x100;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_220 = 0;
    uStack_218 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_240 = 0;
    uStack_238 = 0;
    iVar4 = nnsocketGetSockName(param_2,&local_240);
    if (iVar4 == 0) {
      if (local_13f == '\x02') {
        plVar1 = (long *)((long)param_1 + 0x1a2);
        param_4 = 0x2e;
        plVar11 = plVar1;
        pcVar7 = FUN_71000065f0(2,(byte *)((ulong)&uStack_140 | 4),(char *)plVar1,0x2e);
        if (pcVar7 != (char *)0x0) {
          uVar19 = nnsocketInetNtohs(local_13e);
          param_1[0x3a] = uVar19 & 0xffff;
          param_1[0x12] = *plVar1;
          param_1[0x13] = *(long *)((long)param_1 + 0x1aa);
          *(long *)((long)param_1 + 0xb6) = param_1[0x39];
          param_1[0x15] = *(long *)((long)param_1 + 0x1ba);
          param_1[0x16] = *(long *)((long)param_1 + 0x1c2);
          param_1[0x14] = *(long *)((long)param_1 + 0x1b2);
          if (local_240._1_1_ == '\x02') {
            plVar11 = param_1 + 0x3b;
            param_4 = 0x2e;
            pcVar7 = FUN_71000065f0(2,(byte *)((ulong)&local_240 | 4),(char *)plVar11,0x2e);
            if (pcVar7 != (char *)0x0) {
              uVar19 = nnsocketInetNtohs(local_240._2_2_);
              lVar18 = *param_1;
              param_1[0x41] = uVar19 & 0xffff;
              goto LAB_7100002ccc;
            }
          }
          *(undefined1 *)(param_1 + 0x3b) = 0;
          param_1[0x41] = 0;
          piVar8 = __errno_location();
          *piVar8 = 0x61;
          puVar9 = (uint *)__errno_location();
          uVar19 = (ulong)*puVar9;
          puVar9 = (uint *)__errno_location();
          pcVar6 = FUN_71000175d0((long)param_1,*puVar9,plVar11,param_4,param_5,param_6,param_7,
                                  param_8);
          pcVar7 = "ssloc inet_ntop() failed with errno %d: %s";
          goto LAB_7100002f6c;
        }
      }
      *(undefined1 *)((long)param_1 + 0x1a2) = 0;
      param_1[0x3a] = 0;
      piVar8 = __errno_location();
      *piVar8 = 0x61;
      puVar9 = (uint *)__errno_location();
      uVar19 = (ulong)*puVar9;
      puVar9 = (uint *)__errno_location();
      pcVar6 = FUN_71000175d0((long)param_1,*puVar9,plVar11,param_4,param_5,param_6,param_7,param_8)
      ;
      pcVar7 = "ssrem inet_ntop() failed with errno %d: %s";
    }
    else {
      uVar5 = nnsocketGetLastErrno();
      uVar19 = (ulong)uVar5;
      pcVar6 = FUN_71000175d0((long)param_1,uVar5,plVar11,param_4,param_5,param_6,param_7,param_8);
      pcVar7 = "getsockname() failed with errno %d: %s";
    }
  }
  else {
    uVar5 = nnsocketGetLastErrno();
    uVar19 = (ulong)uVar5;
    pcVar6 = FUN_71000175d0((long)param_1,uVar5,puVar10,param_4,param_5,param_6,param_7,param_8);
    pcVar7 = "getpeername() failed with errno %d: %s";
  }
LAB_7100002f6c:
  FUN_7100016040(lVar18,(byte *)pcVar7,uVar19,pcVar6,param_5,param_6,param_7,param_8);
  return;
}

