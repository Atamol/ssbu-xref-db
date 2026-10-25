// addr:      7103905ad0
// offset:    0x3905ad0
// name:      FUN_7103905ad0
// mangled:   
// signature: undefined8 __cdecl FUN_7103905ad0(long param_1)


undefined8 FUN_7103905ad0(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  char *pcVar9;
  undefined8 in_x4;
  char *pcVar10;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *local_40;
  undefined4 local_38;
  
  ppuVar8 = &local_40;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar4 = FUN_710391e050(param_1);
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  *puVar11 = uVar4;
  *(undefined4 *)(puVar11 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar5 = FUN_710391e050(param_1);
  plVar12 = *(long **)(param_1 + 0x10);
  *plVar12 = lVar5;
  *(undefined4 *)(plVar12 + 1) = 0x45;
  uVar4 = 1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar5,0,1);
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  *puVar11 = FUN_71039062a0;
  *(undefined4 *)(puVar11 + 1) = 0x16;
  lVar5 = *(long *)(param_1 + 0x10);
  puVar7 = &DAT_710436afcd;
  *(long *)(param_1 + 0x10) = lVar5 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar5 + -0x10),"__gc");
  FUN_71038f5c00(param_1,-2);
  lVar14 = *(long *)(param_1 + 0x18);
  local_40 = &DAT_7104862858;
  local_38 = 2;
  lVar5 = *(long *)(lVar14 + 0x40);
  puVar11 = FUN_710391dde0(lVar5,(float *)&local_40);
  if (puVar11 == &DAT_7104862960) {
    puVar11 = FUN_710391d940(param_1,lVar5,(float *)&local_40);
    puVar7 = (undefined *)ppuVar8;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
  *puVar11 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
  puVar11[1] = uVar2;
  lVar5 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar5 + -8) >> 6 & 1) != 0) {
    lVar14 = *(long *)(lVar14 + 0x40);
    if (((*(byte *)(lVar14 + 9) >> 2 & 1) != 0) &&
       ((*(byte *)(*(long *)(lVar5 + -0x10) + 9) & 3) != 0)) {
      lVar5 = *(long *)(param_1 + 0x18);
      *(byte *)(lVar14 + 9) = *(byte *)(lVar14 + 9) & 0xfb;
      *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)(lVar5 + 0x78);
      *(long *)(lVar5 + 0x78) = lVar14;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  if (*(undefined **)(*(long *)(param_1 + 0x18) + 0xd0) != &DAT_7104862854) {
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(param_1,"multiple Lua VMs detected",puVar7,uVar4,in_x4,in_x5,in_x6,in_x7);
  }
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar5 = FUN_710391e050(param_1);
  plVar12 = *(long **)(param_1 + 0x10);
  *plVar12 = lVar5;
  *(undefined4 *)(plVar12 + 1) = 0x45;
  uVar4 = 7;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar5,0,7);
  FUN_71038f9510(param_1,(long *)&PTR_s_loadlib_7105293fd0,0,uVar4,in_x4,in_x5,in_x6,in_x7);
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar5 = FUN_710391e050(param_1);
  plVar12 = *(long **)(param_1 + 0x10);
  *plVar12 = lVar5;
  *(undefined4 *)(plVar12 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar5,4,0);
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  *puVar11 = puVar11[-4];
  puVar11[1] = puVar11[-3];
  puVar11 = *(undefined8 **)(param_1 + 0x18);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < (long)puVar11[3]) {
    FUN_71038fec40(param_1);
    puVar11 = *(undefined8 **)(param_1 + 0x18);
  }
  puVar6 = (undefined8 *)(*(code *)*puVar11)(puVar11[1],0,6,0x30);
  if (puVar6 == (undefined8 *)0x0) {
    if (puVar11[0x1a] == 0) goto LAB_7103906284;
    FUN_71039004f0(param_1,1);
    puVar6 = (undefined8 *)(*(code *)*puVar11)(puVar11[1],0,6,0x30);
    if (puVar6 == (undefined8 *)0x0) goto LAB_7103906284;
  }
  puVar11[3] = puVar11[3] + 0x30;
  bVar3 = *(byte *)((long)puVar11 + 0x54);
  *(undefined1 *)(puVar6 + 1) = 0x26;
  *(byte *)((long)puVar6 + 9) = bVar3 & 3;
  *puVar6 = puVar11[0xb];
  puVar11[0xb] = puVar6;
  *(undefined1 *)((long)puVar6 + 10) = 1;
  puVar6[3] = FUN_7103906370;
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  uVar4 = *(undefined8 *)(lVar5 + -8);
  puVar6[4] = *(undefined8 *)(lVar5 + -0x10);
  puVar6[5] = uVar4;
  plVar12 = *(long **)(param_1 + 0x10);
  *plVar12 = (long)puVar6;
  *(undefined4 *)(plVar12 + 1) = 0x66;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f5a50(param_1,-2,1);
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  *puVar11 = puVar11[-4];
  puVar11[1] = puVar11[-3];
  puVar11 = *(undefined8 **)(param_1 + 0x18);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < (long)puVar11[3]) {
    FUN_71038fec40(param_1);
    puVar11 = *(undefined8 **)(param_1 + 0x18);
  }
  puVar6 = (undefined8 *)(*(code *)*puVar11)(puVar11[1],0,6,0x30);
  if (puVar6 == (undefined8 *)0x0) {
    if (puVar11[0x1a] == 0) goto LAB_7103906284;
    FUN_71039004f0(param_1,1);
    puVar6 = (undefined8 *)(*(code *)*puVar11)(puVar11[1],0,6,0x30);
    if (puVar6 == (undefined8 *)0x0) goto LAB_7103906284;
  }
  puVar11[3] = puVar11[3] + 0x30;
  bVar3 = *(byte *)((long)puVar11 + 0x54);
  *(undefined1 *)(puVar6 + 1) = 0x26;
  *(byte *)((long)puVar6 + 9) = bVar3 & 3;
  *puVar6 = puVar11[0xb];
  puVar11[0xb] = puVar6;
  *(undefined1 *)((long)puVar6 + 10) = 1;
  puVar6[3] = FUN_7103906480;
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  uVar4 = *(undefined8 *)(lVar5 + -8);
  puVar6[4] = *(undefined8 *)(lVar5 + -0x10);
  puVar6[5] = uVar4;
  plVar12 = *(long **)(param_1 + 0x10);
  *plVar12 = (long)puVar6;
  *(undefined4 *)(plVar12 + 1) = 0x66;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f5a50(param_1,-2,2);
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  *puVar11 = puVar11[-4];
  puVar11[1] = puVar11[-3];
  puVar11 = *(undefined8 **)(param_1 + 0x18);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < (long)puVar11[3]) {
    FUN_71038fec40(param_1);
    puVar11 = *(undefined8 **)(param_1 + 0x18);
  }
  puVar6 = (undefined8 *)(*(code *)*puVar11)(puVar11[1],0,6,0x30);
  if (puVar6 == (undefined8 *)0x0) {
    if (puVar11[0x1a] == 0) goto LAB_7103906284;
    FUN_71039004f0(param_1,1);
    puVar6 = (undefined8 *)(*(code *)*puVar11)(puVar11[1],0,6,0x30);
    if (puVar6 == (undefined8 *)0x0) goto LAB_7103906284;
  }
  puVar11[3] = puVar11[3] + 0x30;
  bVar3 = *(byte *)((long)puVar11 + 0x54);
  *(undefined1 *)(puVar6 + 1) = 0x26;
  *(byte *)((long)puVar6 + 9) = bVar3 & 3;
  *puVar6 = puVar11[0xb];
  puVar11[0xb] = puVar6;
  *(undefined1 *)((long)puVar6 + 10) = 1;
  puVar6[3] = FUN_7103906730;
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  uVar4 = *(undefined8 *)(lVar5 + -8);
  puVar6[4] = *(undefined8 *)(lVar5 + -0x10);
  puVar6[5] = uVar4;
  plVar12 = *(long **)(param_1 + 0x10);
  *plVar12 = (long)puVar6;
  *(undefined4 *)(plVar12 + 1) = 0x66;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f5a50(param_1,-2,3);
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  *puVar11 = puVar11[-4];
  puVar11[1] = puVar11[-3];
  puVar11 = *(undefined8 **)(param_1 + 0x18);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < (long)puVar11[3]) {
    FUN_71038fec40(param_1);
    puVar11 = *(undefined8 **)(param_1 + 0x18);
  }
  puVar6 = (undefined8 *)(*(code *)*puVar11)(puVar11[1],0,6,0x30);
  if (puVar6 != (undefined8 *)0x0) {
LAB_7103906050:
    puVar11[3] = puVar11[3] + 0x30;
    bVar3 = *(byte *)((long)puVar11 + 0x54);
    *(undefined1 *)(puVar6 + 1) = 0x26;
    *(byte *)((long)puVar6 + 9) = bVar3 & 3;
    *puVar6 = puVar11[0xb];
    puVar11[0xb] = puVar6;
    *(undefined1 *)((long)puVar6 + 10) = 1;
    puVar6[3] = FUN_71039069e0;
    lVar5 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar5 + -0x10;
    uVar4 = *(undefined8 *)(lVar5 + -8);
    puVar6[4] = *(undefined8 *)(lVar5 + -0x10);
    puVar6[5] = uVar4;
    plVar12 = *(long **)(param_1 + 0x10);
    *plVar12 = (long)puVar6;
    *(undefined4 *)(plVar12 + 1) = 0x66;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    FUN_71038f5a50(param_1,-2,4);
    FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"searchers");
    FUN_7103906d30(param_1,"path","LUA_PATH_5_3","LUA_PATH",
                   "/usr/local/share/lua/5.3/?.lua;/usr/local/share/lua/5.3/?/init.lua;/usr/local/lib/lua/5.3/?.lua;/usr/local/lib/lua/5.3/?/init.lua;./?.lua;./?/init.lua"
                   ,in_x5,in_x6,in_x7);
    pcVar9 = "LUA_CPATH";
    pcVar10 = "/usr/local/lib/lua/5.3/?.so;/usr/local/lib/lua/5.3/loadall.so;./?.so";
    FUN_7103906d30(param_1,"cpath","LUA_CPATH_5_3","LUA_CPATH",
                   "/usr/local/lib/lua/5.3/?.so;/usr/local/lib/lua/5.3/loadall.so;./?.so",in_x5,
                   in_x6,in_x7);
    FUN_71038f4b20(param_1,"/\n;\n?\n!\n-\n");
    FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"config");
    FUN_71038f9a30(param_1,-0xf4628,"_LOADED");
    FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"loaded");
    FUN_71038f9a30(param_1,-0xf4628,"_PRELOAD");
    FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"preload");
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
    if (*(uint *)(lVar5 + 0xc) < 2) {
      puVar6 = (undefined8 *)
               (*(long *)(lVar5 + 0x18) +
               ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar5 + 0xb) & 0x3f)) & 2) * 0x20);
      do {
        if ((*(int *)(puVar6 + 3) == 0x13) && (puVar13 = puVar6, puVar6[2] == 2)) break;
        piVar1 = (int *)((long)puVar6 + 0x1c);
        puVar6 = puVar6 + (long)*piVar1 * 4;
        puVar13 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      puVar13 = (undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10);
    }
    uVar4 = puVar13[1];
    *puVar11 = *puVar13;
    puVar11[1] = uVar4;
    lVar5 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar5 + 0x10;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar5 + -0x10);
    *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar5 + -8);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    FUN_71038f9510(param_1,(long *)&PTR_s_require_7105294050,1,pcVar9,pcVar10,in_x5,in_x6,in_x7);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    return 1;
  }
  if (puVar11[0x1a] != 0) {
    FUN_71039004f0(param_1,1);
    puVar6 = (undefined8 *)(*(code *)*puVar11)(puVar11[1],0,6,0x30);
    if (puVar6 != (undefined8 *)0x0) goto LAB_7103906050;
  }
LAB_7103906284:
                    /* WARNING: Subroutine does not return */
  FUN_71038fb3c0(param_1,4);
}

