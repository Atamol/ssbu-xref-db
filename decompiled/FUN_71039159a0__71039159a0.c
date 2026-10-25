// addr:      71039159a0
// offset:    0x39159a0
// name:      FUN_71039159a0
// mangled:   
// signature: undefined __cdecl FUN_71039159a0(long param_1)


void FUN_71039159a0(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  size_t sVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  char *__s1;
  ulong uVar14;
  float local_70 [4];
  
  plVar9 = (long *)(param_1 + 0x18);
  lVar10 = *plVar9;
  FUN_7103915500(param_1,param_1);
  lVar4 = FUN_710391e050(param_1);
  *(long *)(lVar10 + 0x40) = lVar4;
  *(undefined4 *)(lVar10 + 0x48) = 0x45;
  FUN_710391d4c0(param_1,lVar4,2,0);
  if (*(int *)(lVar4 + 0xc) == 0) {
    plVar5 = (long *)(*(long *)(lVar4 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar4 + 0xb) & 0x3f)) & 1) *
                     0x20);
    do {
      if (((int)plVar5[3] == 0x13) && (plVar5[2] == 1)) goto LAB_7103915a14;
      piVar1 = (int *)((long)plVar5 + 0x1c);
      plVar5 = plVar5 + (long)*piVar1 * 4;
    } while (*piVar1 != 0);
LAB_7103915a68:
    local_70[0] = 1.4013e-45;
    local_70[1] = 0.0;
    local_70[2] = 2.66247e-44;
    plVar5 = FUN_710391d940(param_1,lVar4,local_70);
  }
  else {
    plVar5 = *(long **)(lVar4 + 0x10);
LAB_7103915a14:
    if (plVar5 == &DAT_7104862960) goto LAB_7103915a68;
  }
  *(undefined4 *)(plVar5 + 1) = 0x48;
  *plVar5 = param_1;
  uVar6 = FUN_710391e050(param_1);
  if (*(uint *)(lVar4 + 0xc) < 2) {
    puVar7 = (undefined8 *)
             (*(long *)(lVar4 + 0x18) +
             ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar4 + 0xb) & 0x3f)) & 2) * 0x20);
    do {
      if ((*(int *)(puVar7 + 3) == 0x13) && (puVar7[2] == 2)) goto LAB_7103915b00;
      piVar1 = (int *)((long)puVar7 + 0x1c);
      puVar7 = puVar7 + (long)*piVar1 * 4;
    } while (*piVar1 != 0);
  }
  else {
    puVar7 = (undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10);
LAB_7103915b00:
    if (puVar7 != &DAT_7104862960) goto LAB_7103915b30;
  }
  local_70[0] = 2.8026e-45;
  local_70[1] = 0.0;
  local_70[2] = 2.66247e-44;
  puVar7 = FUN_710391d940(param_1,lVar4,local_70);
LAB_7103915b30:
  *puVar7 = uVar6;
  *(undefined4 *)(puVar7 + 1) = 0x45;
  lVar12 = *(long *)(param_1 + 0x18);
  FUN_7103917400(param_1,0x80);
  puVar7 = FUN_7103917660(param_1,"not enough memory",0x11);
  *(undefined8 **)(lVar12 + 0xd8) = puVar7;
  lVar4 = *(long *)(param_1 + 0x18);
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  uVar6 = *(undefined8 *)(lVar12 + 0xd8);
  lVar4 = 0;
  *(undefined8 *)(lVar12 + 0x1e8) = uVar6;
  *(undefined8 *)(lVar12 + 0x1f0) = uVar6;
  *(undefined8 *)(lVar12 + 0x1f8) = uVar6;
  *(undefined8 *)(lVar12 + 0x200) = uVar6;
  *(undefined8 *)(lVar12 + 0x208) = uVar6;
  *(undefined8 *)(lVar12 + 0x210) = uVar6;
  *(undefined8 *)(lVar12 + 0x218) = uVar6;
  *(undefined8 *)(lVar12 + 0x220) = uVar6;
  *(undefined8 *)(lVar12 + 0x228) = uVar6;
  *(undefined8 *)(lVar12 + 0x230) = uVar6;
  *(undefined8 *)(lVar12 + 0x238) = uVar6;
  *(undefined8 *)(lVar12 + 0x240) = uVar6;
  *(undefined8 *)(lVar12 + 0x248) = uVar6;
  *(undefined8 *)(lVar12 + 0x250) = uVar6;
  *(undefined8 *)(lVar12 + 600) = uVar6;
  *(undefined8 *)(lVar12 + 0x260) = uVar6;
  *(undefined8 *)(lVar12 + 0x268) = uVar6;
  *(undefined8 *)(lVar12 + 0x270) = uVar6;
  *(undefined8 *)(lVar12 + 0x278) = uVar6;
  *(undefined8 *)(lVar12 + 0x280) = uVar6;
  *(undefined8 *)(lVar12 + 0x288) = uVar6;
  *(undefined8 *)(lVar12 + 0x290) = uVar6;
  *(undefined8 *)(lVar12 + 0x298) = uVar6;
  *(undefined8 *)(lVar12 + 0x2a0) = uVar6;
  *(undefined8 *)(lVar12 + 0x2a8) = uVar6;
  *(undefined8 *)(lVar12 + 0x2b0) = uVar6;
  *(undefined8 *)(lVar12 + 0x2b8) = uVar6;
  *(undefined8 *)(lVar12 + 0x2c0) = uVar6;
  *(undefined8 *)(lVar12 + 0x2c8) = uVar6;
  *(undefined8 *)(lVar12 + 0x2d0) = uVar6;
  *(undefined8 *)(lVar12 + 0x2d8) = uVar6;
  *(undefined8 *)(lVar12 + 0x2e0) = uVar6;
  *(undefined8 *)(lVar12 + 0x2e8) = uVar6;
  *(undefined8 *)(lVar12 + 0x2f0) = uVar6;
  *(undefined8 *)(lVar12 + 0x2f8) = uVar6;
  *(undefined8 *)(lVar12 + 0x300) = uVar6;
  *(undefined8 *)(lVar12 + 0x308) = uVar6;
  *(undefined8 *)(lVar12 + 0x310) = uVar6;
  *(undefined8 *)(lVar12 + 0x318) = uVar6;
  *(undefined8 *)(lVar12 + 800) = uVar6;
  *(undefined8 *)(lVar12 + 0x328) = uVar6;
  *(undefined8 *)(lVar12 + 0x330) = uVar6;
  *(undefined8 *)(lVar12 + 0x338) = uVar6;
  *(undefined8 *)(lVar12 + 0x340) = uVar6;
  *(undefined8 *)(lVar12 + 0x348) = uVar6;
  *(undefined8 *)(lVar12 + 0x350) = uVar6;
  *(undefined8 *)(lVar12 + 0x358) = uVar6;
  *(undefined8 *)(lVar12 + 0x360) = uVar6;
  *(undefined8 *)(lVar12 + 0x368) = uVar6;
  *(undefined8 *)(lVar12 + 0x370) = uVar6;
  *(undefined8 *)(lVar12 + 0x378) = uVar6;
  *(undefined8 *)(lVar12 + 0x380) = uVar6;
  *(undefined8 *)(lVar12 + 0x388) = uVar6;
  *(undefined8 *)(lVar12 + 0x390) = uVar6;
  *(undefined8 *)(lVar12 + 0x398) = uVar6;
  *(undefined8 *)(lVar12 + 0x3a0) = uVar6;
  *(undefined8 *)(lVar12 + 0x3a8) = uVar6;
  *(undefined8 *)(lVar12 + 0x3b0) = uVar6;
  *(undefined8 *)(lVar12 + 0x3b8) = uVar6;
  *(undefined8 *)(lVar12 + 0x3c0) = uVar6;
  *(undefined8 *)(lVar12 + 0x3c8) = uVar6;
  *(undefined8 *)(lVar12 + 0x3d0) = uVar6;
  *(undefined8 *)(lVar12 + 0x3d8) = uVar6;
  *(undefined8 *)(lVar12 + 0x3e0) = uVar6;
  *(undefined8 *)(lVar12 + 1000) = uVar6;
  *(undefined8 *)(lVar12 + 0x3f0) = uVar6;
  *(undefined8 *)(lVar12 + 0x3f8) = uVar6;
  *(undefined8 *)(lVar12 + 0x400) = uVar6;
  *(undefined8 *)(lVar12 + 0x408) = uVar6;
  *(undefined8 *)(lVar12 + 0x410) = uVar6;
  *(undefined8 *)(lVar12 + 0x418) = uVar6;
  *(undefined8 *)(lVar12 + 0x420) = uVar6;
  *(undefined8 *)(lVar12 + 0x428) = uVar6;
  *(undefined8 *)(lVar12 + 0x430) = uVar6;
  *(undefined8 *)(lVar12 + 0x438) = uVar6;
  *(undefined8 *)(lVar12 + 0x440) = uVar6;
  *(undefined8 *)(lVar12 + 0x448) = uVar6;
  *(undefined8 *)(lVar12 + 0x450) = uVar6;
  *(undefined8 *)(lVar12 + 0x458) = uVar6;
  *(undefined8 *)(lVar12 + 0x460) = uVar6;
  *(undefined8 *)(lVar12 + 0x468) = uVar6;
  *(undefined8 *)(lVar12 + 0x470) = uVar6;
  *(undefined8 *)(lVar12 + 0x478) = uVar6;
  *(undefined8 *)(lVar12 + 0x480) = uVar6;
  *(undefined8 *)(lVar12 + 0x488) = uVar6;
  *(undefined8 *)(lVar12 + 0x490) = uVar6;
  *(undefined8 *)(lVar12 + 0x498) = uVar6;
  *(undefined8 *)(lVar12 + 0x4a0) = uVar6;
  *(undefined8 *)(lVar12 + 0x4a8) = uVar6;
  *(undefined8 *)(lVar12 + 0x4b0) = uVar6;
  *(undefined8 *)(lVar12 + 0x4b8) = uVar6;
  *(undefined8 *)(lVar12 + 0x4c0) = uVar6;
  *(undefined8 *)(lVar12 + 0x4c8) = uVar6;
  *(undefined8 *)(lVar12 + 0x4d0) = uVar6;
  *(undefined8 *)(lVar12 + 0x4d8) = uVar6;
  *(undefined8 *)(lVar12 + 0x4e0) = uVar6;
  *(undefined8 *)(lVar12 + 0x4e8) = uVar6;
  *(undefined8 *)(lVar12 + 0x4f0) = uVar6;
  *(undefined8 *)(lVar12 + 0x4f8) = uVar6;
  *(undefined8 *)(lVar12 + 0x500) = uVar6;
  *(undefined8 *)(lVar12 + 0x508) = uVar6;
  *(undefined8 *)(lVar12 + 0x510) = uVar6;
  *(undefined8 *)(lVar12 + 0x518) = uVar6;
  *(undefined8 *)(lVar12 + 0x520) = uVar6;
  *(undefined8 *)(lVar12 + 0x528) = uVar6;
  *(undefined8 *)(lVar12 + 0x530) = uVar6;
  do {
    __s1 = *(char **)((long)&PTR_s___index_7105294338 + lVar4);
    iVar3 = (int)(((ulong)__s1 & 0xffffffff) * 0x3521cfb3 >> 0x20);
    lVar11 = *plVar9;
    uVar14 = (ulong)((int)__s1 + (iVar3 + ((uint)((int)__s1 - iVar3) >> 1) >> 5) * -0x35);
    lVar12 = lVar11 + uVar14 * 0x10;
    puVar13 = *(undefined8 **)(lVar12 + 0x1e8);
    iVar3 = strcmp(__s1,(char *)(puVar13 + 3));
    puVar7 = puVar13;
    if (iVar3 != 0) {
      lVar2 = lVar11 + uVar14 * 0x10;
      puVar7 = *(undefined8 **)(lVar2 + 0x1f0);
      iVar3 = strcmp(__s1,(char *)(puVar7 + 3));
      if (iVar3 != 0) {
        *(undefined8 **)(lVar2 + 0x1f0) = puVar13;
        sVar8 = strlen(__s1);
        puVar7 = FUN_7103917660(param_1,__s1,sVar8);
        *(undefined8 **)(lVar12 + 0x1e8) = puVar7;
        lVar11 = *(long *)(param_1 + 0x18);
      }
    }
    *(undefined8 **)(lVar11 + lVar4 + 0xe0) = puVar7;
    lVar11 = *plVar9;
    lVar12 = lVar11 + lVar4;
    lVar4 = lVar4 + 8;
    puVar7 = *(undefined8 **)(lVar12 + 0xe0);
    *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
    *(undefined8 *)(lVar11 + 0x58) = *puVar7;
    *puVar7 = *(undefined8 *)(lVar11 + 0xa0);
    *(undefined8 **)(lVar11 + 0xa0) = puVar7;
  } while (lVar4 != 0xc0);
  puVar7 = FUN_7103917660(param_1,&DAT_710436af58,4);
  lVar4 = *(long *)(param_1 + 0x18);
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  lVar4 = *(long *)(param_1 + 0x18);
  puVar13 = *(undefined8 **)(lVar4 + 600);
  iVar3 = strcmp("and",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x260);
    iVar3 = strcmp("and",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x260) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_71042e5d8c,3);
      *(undefined8 **)(lVar4 + 600) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 1;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x248);
  iVar3 = strcmp("break",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x250);
    iVar3 = strcmp("break",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x250) = puVar13;
      puVar7 = FUN_7103917660(param_1,"break",5);
      *(undefined8 **)(lVar4 + 0x248) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 2;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x4d8);
  iVar3 = strcmp("do",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x4e0);
    iVar3 = strcmp("do",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x4e0) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_71042905a4,2);
      *(undefined8 **)(lVar4 + 0x4d8) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 3;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x3f8);
  iVar3 = strcmp("else",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x400);
    iVar3 = strcmp("else",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x400) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_7104328b96,4);
      *(undefined8 **)(lVar4 + 0x3f8) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 4;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x2a8);
  iVar3 = strcmp("elseif",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x2b0);
    iVar3 = strcmp("elseif",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x2b0) = puVar13;
      puVar7 = FUN_7103917660(param_1,"elseif",6);
      *(undefined8 **)(lVar4 + 0x2a8) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 5;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x518);
  iVar3 = strcmp("end",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x520);
    iVar3 = strcmp("end",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x520) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_71044424dd,3);
      *(undefined8 **)(lVar4 + 0x518) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 6;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 1000);
  iVar3 = strcmp("false",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x3f0);
    iVar3 = strcmp("false",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x3f0) = puVar13;
      puVar7 = FUN_7103917660(param_1,"false",5);
      *(undefined8 **)(lVar4 + 1000) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 7;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x4c8);
  iVar3 = strcmp("for",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x4d0);
    iVar3 = strcmp("for",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x4d0) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_71042a1c82,3);
      *(undefined8 **)(lVar4 + 0x4c8) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 8;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x2a8);
  iVar3 = strcmp("function",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x2b0);
    iVar3 = strcmp("function",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x2b0) = puVar13;
      puVar7 = FUN_7103917660(param_1,"function",8);
      *(undefined8 **)(lVar4 + 0x2a8) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 9;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x438);
  iVar3 = strcmp("goto",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x440);
    iVar3 = strcmp("goto",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x440) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_710427f664,4);
      *(undefined8 **)(lVar4 + 0x438) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 10;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x3b8);
  iVar3 = strcmp("if",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x3c0);
    iVar3 = strcmp("if",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x3c0) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_71044647c1,2);
      *(undefined8 **)(lVar4 + 0x3b8) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0xb;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x458);
  iVar3 = strcmp("in",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x460);
    iVar3 = strcmp("in",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x460) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_7104421055,2);
      *(undefined8 **)(lVar4 + 0x458) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0xc;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x488);
  iVar3 = strcmp("local",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x490);
    iVar3 = strcmp("local",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x490) = puVar13;
      puVar7 = FUN_7103917660(param_1,"local",5);
      *(undefined8 **)(lVar4 + 0x488) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0xd;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x368);
  iVar3 = strcmp("nil",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x370);
    iVar3 = strcmp("nil",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x370) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_710441141c,3);
      *(undefined8 **)(lVar4 + 0x368) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0xe;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x298);
  iVar3 = strcmp("not",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x2a0);
    iVar3 = strcmp("not",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x2a0) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_71042e5d90,3);
      *(undefined8 **)(lVar4 + 0x298) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0xf;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x448);
  iVar3 = strcmp("or",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x450);
    iVar3 = strcmp("or",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x450) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_7104328b9b,2);
      *(undefined8 **)(lVar4 + 0x448) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0x10;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x2d8);
  iVar3 = strcmp("repeat",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x2e0);
    iVar3 = strcmp("repeat",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x2e0) = puVar13;
      puVar7 = FUN_7103917660(param_1,"repeat",6);
      *(undefined8 **)(lVar4 + 0x2d8) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0x11;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x4e8);
  iVar3 = strcmp("return",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x4f0);
    iVar3 = strcmp("return",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x4f0) = puVar13;
      puVar7 = FUN_7103917660(param_1,"return",6);
      *(undefined8 **)(lVar4 + 0x4e8) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0x12;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x3c8);
  iVar3 = strcmp("then",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x3d0);
    iVar3 = strcmp("then",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x3d0) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_71043ce13a,4);
      *(undefined8 **)(lVar4 + 0x3c8) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0x13;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x488);
  iVar3 = strcmp("true",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x490);
    iVar3 = strcmp("true",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x490) = puVar13;
      puVar7 = FUN_7103917660(param_1,&DAT_7104349271,4);
      *(undefined8 **)(lVar4 + 0x488) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0x14;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x488);
  iVar3 = strcmp("until",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x490);
    iVar3 = strcmp("until",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 0x490) = puVar13;
      puVar7 = FUN_7103917660(param_1,"until",5);
      *(undefined8 **)(lVar4 + 0x488) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0x15;
  lVar4 = *plVar9;
  puVar13 = *(undefined8 **)(lVar4 + 0x318);
  iVar3 = strcmp("while",(char *)(puVar13 + 3));
  puVar7 = puVar13;
  if (iVar3 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 800);
    iVar3 = strcmp("while",(char *)(puVar7 + 3));
    if (iVar3 != 0) {
      *(undefined8 **)(lVar4 + 800) = puVar13;
      puVar7 = FUN_7103917660(param_1,"while",5);
      *(undefined8 **)(lVar4 + 0x318) = puVar7;
      lVar4 = *(long *)(param_1 + 0x18);
    }
  }
  *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xfc;
  *(undefined8 *)(lVar4 + 0x58) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar4 + 0xa0);
  *(undefined8 **)(lVar4 + 0xa0) = puVar7;
  *(undefined1 *)((long)puVar7 + 10) = 0x16;
  *(undefined1 *)(lVar10 + 0x57) = 1;
  *(undefined **)(lVar10 + 0xd0) = &DAT_7104862854;
  return;
}

