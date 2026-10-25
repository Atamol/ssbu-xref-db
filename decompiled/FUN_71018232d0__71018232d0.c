// addr:      71018232d0
// offset:    0x18232d0
// name:      FUN_71018232d0
// mangled:   
// signature: undefined __cdecl FUN_71018232d0(long param_1, undefined8 param_2, undefined * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018232d0(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_2218;
  undefined8 local_2210;
  undefined8 local_2208;
  undefined2 local_2200;
  undefined8 local_21fe;
  undefined1 local_21f6;
  undefined8 local_21d0;
  byte local_21c8 [12];
  undefined8 local_21bc;
  byte local_21b4 [64];
  undefined8 local_2174;
  byte local_216c [64];
  undefined8 local_212c;
  byte local_2124 [64];
  undefined1 auStack_20e4 [4096];
  undefined1 uStack_10e4;
  undefined4 local_10e0;
  undefined1 uStack_10dc;
  undefined8 local_10d8;
  undefined1 uStack_10d0;
  undefined4 local_1090;
  undefined4 local_108c;
  undefined4 uStack_1088;
  undefined5 uStack_1084;
  undefined1 auStack_1040 [4096];
  
  uVar12 = 0x811c9dc5;
  if (*(int *)(param_1 + 0xfc) == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar8 = DAT_71053050f0;
    local_21d0 = 0;
    local_21c8[1] = 1;
    local_21c8[4] = 0;
    local_21c8[5] = 0;
    local_21c8[6] = 0;
    local_21c8[7] = 0;
    local_21c8[8] = 1;
    local_21c8[9] = 0;
    local_21c8[10] = 0;
    local_21c8[0xb] = 0;
    local_21b4[0] = 0;
    local_21bc = 0;
    local_216c[0] = 0;
    local_2174 = 0;
    local_2124[0] = 0;
    local_212c = 0;
    memset(auStack_20e4,0,0x1000);
    uStack_10e4 = 1;
    local_10e0 = 0;
    uStack_10dc = 1;
    uStack_10d0 = 0;
    local_10d8 = 0;
    local_1090 = 0x20;
    memset(auStack_1040,0,0x1000);
    uStack_1084 = 0;
    local_108c = 0;
    uStack_1088 = 0;
    local_21c8[0] = 1;
    FUN_7103394f60((uint *)&local_2218,uVar8);
    for (uVar5 = 0; *(byte *)((long)&local_2210 + uVar5) != 0; uVar5 = uVar5 + 2) {
      local_216c[uVar5] = *(byte *)((long)&local_2210 + uVar5);
      if (0x3e < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      bVar3 = *(byte *)((long)&local_2210 + uVar5 + 1);
      if (bVar3 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      local_216c[uVar5 + 1] = bVar3;
    }
    local_216c[uVar5 & 0xffffffff] = 0;
    local_2174 = CONCAT44((int)uVar5,(undefined4)local_2174);
    uVar6 = (uint)local_216c[0];
    uVar10 = uVar12;
    if (local_216c[0] != 0) {
      pbVar9 = local_216c;
      do {
        pbVar9 = pbVar9 + 1;
        uVar10 = uVar10 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar9;
      } while (uVar6 != 0);
    }
    local_2174 = CONCAT44((int)uVar5,uVar10);
    FUN_7103395260((uint *)&local_2218,uVar8);
    uVar5 = 0;
    while( true ) {
      if (*(byte *)((long)&local_2210 + uVar5) == 0) break;
      local_21b4[uVar5] = *(byte *)((long)&local_2210 + uVar5);
      if (0x3e < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      bVar3 = *(byte *)((long)&local_2210 + uVar5 + 1);
      if (bVar3 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      local_21b4[uVar5 + 1] = bVar3;
      uVar5 = uVar5 + 2;
    }
    local_21b4[uVar5 & 0xffffffff] = 0;
    local_21bc = CONCAT44((int)uVar5,(undefined4)local_21bc);
    uVar6 = (uint)local_21b4[0];
    uVar10 = uVar12;
    if (local_21b4[0] != 0) {
      pbVar9 = local_21b4;
      do {
        pbVar9 = pbVar9 + 1;
        uVar10 = uVar10 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar9;
      } while (uVar6 != 0);
    }
    local_108c = 1;
    local_21bc = CONCAT44((int)uVar5,uVar10);
    local_2210 = 0x6f6365725f756e6d;
    local_2208 = 0x5f79616c705f6472;
    local_2200 = 26999;
    local_21fe = 0x656c7469745f6874;
    uVar6 = 0x6d;
    local_21f6 = 0;
    pbVar9 = (byte *)((long)&local_2210 + 1);
    uVar10 = uVar12;
    do {
      uVar10 = uVar10 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (uVar6 != 0);
    uVar5 = 0;
    local_2218 = (undefined **)CONCAT44(0x1a,uVar10);
    bVar3 = 0x6d;
    do {
      local_2124[uVar5] = bVar3;
      if (0x3e < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      bVar3 = *(byte *)((long)&local_2210 + uVar5 + 1);
      uVar5 = uVar5 + 1;
    } while (bVar3 != 0);
    local_2124[uVar5 & 0xffffffff] = 0;
    uVar6 = (uint)local_2124[0];
    local_212c = CONCAT44((int)uVar5,(undefined4)local_212c);
    uVar10 = uVar12;
    if (local_2124[0] != 0) {
      pbVar9 = local_2124;
      do {
        pbVar9 = pbVar9 + 1;
        uVar10 = uVar10 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar9;
      } while (uVar6 != 0);
    }
    uVar8 = ((uVar8 & 0x7f000000) + 0xfe000000 >> 0x18) - 1;
    local_212c = CONCAT44((int)uVar5,uVar10);
    if ((uVar8 & 0xff) < 5) {
      uVar7 = *(undefined4 *)(&DAT_7104544730 + (long)(char)uVar8 * 4);
    }
    else {
      uVar7 = 0;
    }
    local_21d0 = CONCAT44(uVar7,(uint)local_21d0);
    param_3 = (undefined **)0x1;
    param_4 = 1;
    FUN_7101af8570(*(long *)(param_1 + 0x110),(int *)&local_21d0,1,1,param_5,param_6,param_7,param_8
                  );
    lVar13 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
    cVar2 = *(char *)(param_1 + 0x135);
    if (*(int *)(lVar13 + 0x1204) == 0) {
      if (*(char *)(lVar13 + 0x2259) != '\0') goto LAB_7101823658;
    }
    else {
      *(undefined4 *)(lVar13 + 0x1204) = 0;
LAB_7101823658:
      if ((*(char *)(lVar13 + 0x2257) != '\0') && (*(char *)(lVar13 + 0x2259) != '\0')) {
        *(char *)(lVar13 + 0x2259) = '\0';
        FUN_71037780e0(&local_2218,**(long **)(lVar13 + 0xb8) + 8,(long ****)"footer_help_out",
                       param_3,param_4,param_5,param_6,param_7,param_8);
        if (cVar2 == '\0') {
          FUN_710377b140((long)&local_2218);
        }
        else {
          FUN_710377aee0(0x3f800000,(long)&local_2218);
        }
        uVar5 = local_2210;
        local_2218 = &PTR_FUN_710523d9e8;
        local_2210 = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
      }
    }
    lVar13 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
    FUN_710376b960(*(long *)(lVar13 + 0x2268));
    (**(code **)(**(long **)(lVar13 + 0x2268) + 0x70))(*(long **)(lVar13 + 0x2268),0);
    if (*(int *)(lVar13 + 0x11b0) == 0) {
      if (*(char *)(lVar13 + 0x2258) != '\0') goto LAB_7101823708;
    }
    else {
      *(undefined4 *)(lVar13 + 0x11b0) = 0;
LAB_7101823708:
      if (*(char *)(lVar13 + 0x225a) == -1) {
        *(char *)(lVar13 + 0x225a) = '\0';
      }
      if (*(int *)(lVar13 + 0xa8) == 1) {
        *(undefined4 *)(lVar13 + 0xa0) = 0;
        *(undefined8 *)(lVar13 + 8) = 0;
        *(undefined8 *)(lVar13 + 0x10) = 0;
        *(undefined1 *)(lVar13 + 0xb4) = 0;
        *(undefined8 *)(lVar13 + 0x58) = 0x200000001;
        *(undefined8 *)(lVar13 + 0xac) = 0xffffffff00000000;
        *(undefined8 *)(lVar13 + 0xa4) = 0xffffffff00000001;
        *(undefined8 *)(lVar13 + 0x90) = 0;
        *(undefined8 *)(lVar13 + 0x98) = 0;
        *(undefined8 *)(lVar13 + 0x80) = 0;
        *(undefined8 *)(lVar13 + 0x88) = 0;
        *(undefined8 *)(lVar13 + 0x70) = 0;
        *(undefined8 *)(lVar13 + 0x78) = 0;
        *(undefined8 *)(lVar13 + 0x60) = 0;
        *(undefined8 *)(lVar13 + 0x68) = 0;
      }
    }
    lVar13 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
    (**(code **)(**(long **)(lVar13 + 0x2268) + 0x70))(*(long **)(lVar13 + 0x2268),0);
    if (*(char *)(lVar13 + 0x11b4) == '\0') {
      param_3 = (undefined **)0x0;
      FUN_7103771a80((long *)(lVar13 + 0x2268),3,0);
    }
    else {
      lVar13 = *(long *)(lVar13 + 0x2268);
      if (*(int *)(lVar13 + 0x254) == 3) {
        FUN_710376b960(lVar13);
      }
    }
    lVar13 = *(long *)(param_1 + 0x120);
    lVar14 = *(long *)(lVar13 + 0x80);
    (**(code **)(**(long **)(lVar14 + 0x200) + 0x60))
              (*(long **)(lVar14 + 0x200),*(undefined1 *)(lVar14 + 0x29b));
    bVar3 = (**(code **)(**(long **)(lVar14 + 0x200) + 0x68))();
    *(byte *)(lVar14 + 0x29b) = bVar3 & 1;
    *(undefined1 *)(lVar13 + 0x70) = 0;
  }
  plVar11 = (long *)(param_1 + 0x120);
  if (*(char *)(*(long *)(*plVar11 + 0x80) + 0x299) != '\0') {
    *(undefined1 *)(*(long *)(*plVar11 + 0x80) + 0x299) = 0;
    lVar13 = *(long *)(param_1 + 0x120);
    lVar14 = *(long *)(lVar13 + 0x80);
    (**(code **)(**(long **)(lVar14 + 0x200) + 0x60))
              (*(long **)(lVar14 + 0x200),*(undefined1 *)(lVar14 + 0x29b));
    bVar3 = (**(code **)(**(long **)(lVar14 + 0x200) + 0x68))();
    *(byte *)(lVar14 + 0x29b) = bVar3 & 1;
    *(undefined1 *)(lVar13 + 0x70) = 1;
    if (*(int *)(param_1 + 0xf4) < 0x12) {
      uVar8 = *(int *)(param_1 + 0xf4) + 1;
      *(uint *)(param_1 + 0xf4) = uVar8;
      if (0x12 < uVar8) goto LAB_7101823ad8;
      *(undefined4 *)(param_1 + (long)(int)uVar8 * 4 + 0xa8) = 5;
    }
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x120) + 0x80);
  lVar13 = *(long *)(param_1 + 0x110);
  uVar5 = (**(code **)(**(long **)(lVar14 + 0x200) + 0x78))();
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    pcVar1 = "mnu_playing_together_report";
    if (*(int *)(*(long *)(lVar14 + 0x200) + 0x254) != 1) {
      pcVar1 = "mnu_playing_together_past_opponents_profile";
    }
    while( true ) {
      bVar3 = pcVar1[uVar5];
      if (bVar3 == 0) break;
      local_21c8[uVar5] = bVar3;
      if (0x3e < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      bVar3 = (pcVar1 + uVar5)[1];
      if (bVar3 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      local_21c8[uVar5 + 1] = bVar3;
      uVar5 = uVar5 + 2;
    }
  }
  local_21c8[uVar5 & 0xffffffff] = 0;
  uVar8 = (uint)local_21c8[0];
  local_21d0 = uVar5 << 0x20;
  if (local_21c8[0] != 0) {
    pbVar9 = local_21c8;
    do {
      pbVar9 = pbVar9 + 1;
      uVar12 = uVar12 * 0x89 ^ uVar8;
      uVar8 = (uint)*pbVar9;
    } while (uVar8 != 0);
  }
  local_21d0 = CONCAT44((int)uVar5,uVar12);
  FUN_7101af53d0(*(long *)(lVar13 + 0x80),(uint *)&local_21d0,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*(char *)(*(long *)(*plVar11 + 0x80) + 0x298) != '\0') {
    lVar13 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
    if (*(char *)(lVar13 + 0xc9) == '\0') {
      iVar4 = 4;
    }
    else {
      iVar4 = 0;
    }
    FUN_7103771be0((long *)(lVar13 + 0x2260),iVar4,0);
    *(undefined4 *)(lVar13 + 0x2270) = *(undefined4 *)(*(long *)(lVar13 + 0x2260) + 0x25c);
  }
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x110) + 0x80) + 0x2270) == 0) {
    lVar14 = *plVar11;
    lVar13 = *(long *)(lVar14 + 0x80);
    *(undefined4 *)(lVar13 + 0x208) = 2;
    if (0x12 < *(uint *)(lVar13 + 0x1d4)) goto LAB_7101823ad8;
    *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0x1d4) * 4 + 0x188) = 0x12;
    lVar13 = *(long *)(lVar14 + 0x80);
    (**(code **)(**(long **)(lVar13 + 0x200) + 0x60))
              (*(long **)(lVar13 + 0x200),*(undefined1 *)(lVar13 + 0x29b));
    bVar3 = (**(code **)(**(long **)(lVar13 + 0x200) + 0x68))();
    *(byte *)(lVar13 + 0x29b) = bVar3 & 1;
    *(undefined1 *)(lVar14 + 0x70) = 1;
  }
  lVar13 = *plVar11;
  if (*(int *)(*(long *)(lVar13 + 0x80) + 0x208) - 1U < 2) {
    *(undefined4 *)(param_1 + 0x130) = 2;
    lVar14 = *(long *)(lVar13 + 0x80);
    (**(code **)(**(long **)(lVar14 + 0x200) + 0x60))
              (*(long **)(lVar14 + 0x200),*(undefined1 *)(lVar14 + 0x29b));
    bVar3 = (**(code **)(**(long **)(lVar14 + 0x200) + 0x68))();
    *(byte *)(lVar14 + 0x29b) = bVar3 & 1;
    *(undefined1 *)(lVar13 + 0x70) = 1;
    if (0x12 < *(uint *)(param_1 + 0xf4)) {
LAB_7101823ad8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 6;
  }
  return;
}

