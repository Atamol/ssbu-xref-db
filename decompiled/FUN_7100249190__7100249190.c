// addr:      7100249190
// offset:    0x249190
// name:      FUN_7100249190
// mangled:   
// signature: undefined FUN_7100249190(void)


void FUN_7100249190(long param_1)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 in_x4;
  ulong in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar7;
  undefined1 **ppuVar8;
  undefined **ppuStack_3a0;
  undefined1 auStack_398 [16];
  undefined1 *puStack_388;
  undefined8 uStack_380;
  undefined **ppuStack_378;
  code *pcStack_370;
  undefined8 uStack_368;
  undefined1 *puStack_360;
  undefined4 auStack_250 [64];
  undefined **ppuStack_150;
  char acStack_148 [16];
  char *pcStack_138;
  undefined8 uStack_130;
  
  iVar7 = *(int *)(param_1 + 0x178);
  if (iVar7 != -1) {
    FUN_71001b12a0((ulong *)&ppuStack_378);
    ppuStack_378._0_4_ = (int)ppuStack_378 - *(int *)(param_1 + 0x180);
    iVar7 = *(int *)(param_1 + 0x178) - (int)ppuStack_378;
    if (iVar7 == 0 || *(int *)(param_1 + 0x178) < (int)ppuStack_378) {
      ppuStack_150 = (undefined **)CONCAT44(ppuStack_150._4_4_,0x8001000b);
      FUN_71001b4200((undefined4 *)&ppuStack_378,(undefined4 *)&ppuStack_150);
      FUN_7100248800(param_1,(int *)&ppuStack_378);
      return;
    }
  }
  plVar1 = (long *)(param_1 + 0xa0);
  *(int *)(*(long *)(param_1 + 0x168) + 0xb8) = iVar7;
  FUN_71001d1590(plVar1);
  puVar4 = FUN_71001af850(0x48);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_710022b090(puVar4);
    *(undefined1 *)((long)puVar4 + 9) = 0;
    puVar4[2] = &PTR_FUN_710509cc08;
    *(undefined1 *)(puVar4 + 3) = 0;
    puVar4[5] = puVar4 + 3;
    puVar4[6] = 0x10;
    *puVar4 = &PTR_FUN_7104f5c928;
    FUN_71001b3cb0((long)(puVar4 + 2),"");
    *(undefined4 *)(puVar4 + 7) = 4;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(undefined1 *)((long)puVar4 + 0x3c) = 2;
  }
  if (*(long **)(param_1 + 400) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 400) + 8))();
  }
  *(undefined8 **)(param_1 + 400) = puVar4;
  FUN_71001b2f70((long)(puVar4 + 2),param_1 + 0x1f0);
  FUN_71001b6080(&ppuStack_378);
  FUN_71001b3300((long)&ppuStack_378,*(undefined8 *)(param_1 + 0x218));
  FUN_71001d4540(param_1 + 0x1c0);
  FUN_71001d4590(param_1 + 0x1c0);
  lVar5 = FUN_71001b52a0(*(long *)(param_1 + 0x168) + 0x240);
  if (lVar5 != 0) {
    lVar5 = *(long *)(param_1 + 0x168);
    uVar2 = *(ushort *)(lVar5 + 0x268);
    in_x5 = (ulong)uVar2;
    if (uVar2 != 0) {
      uVar3 = FUN_7100242a90(lVar5,plVar1,(char *)pcStack_370,"dummy",*(char **)(lVar5 + 600),uVar2,
                             param_1 + 0x188,param_1 + 0x170,param_1 + 0x198);
      goto joined_r0x007100249444;
    }
  }
  puStack_388 = auStack_398;
  auStack_398[0] = 0;
  uStack_380 = 0x10;
  uVar6 = (ulong)*(uint *)(param_1 + 0x164);
  ppuStack_3a0 = &PTR_FUN_710509cc08;
  snprintf((char *)&ppuStack_150,0x100,"g%08x-%%.s.n.srv.nintendo.net");
  nn::nsd::ResolveEx((Fqdn *)auStack_250,(Fqdn *)&ppuStack_150);
  FUN_71001aff70((long)&ppuStack_3a0,"https://%s/",auStack_250,uVar6,in_x4,in_x5,in_x6,in_x7);
  lVar5 = FUN_71001b52a0(*(long *)(param_1 + 0x168) + 0x270);
  if (lVar5 == 0) {
    ppuVar8 = &puStack_388;
  }
  else {
    ppuVar8 = (undefined1 **)(*(long *)(param_1 + 0x168) + 0x288);
  }
  pcStack_138 = acStack_148;
  ppuStack_150 = &PTR_FUN_710509cc08;
  acStack_148[0] = '\0';
  uStack_130 = 0x10;
  FUN_71001b47e0((long)&ppuStack_150,*ppuVar8,-1);
  uVar3 = FUN_7100242b30(*(long *)(param_1 + 0x168),plVar1,(char *)pcStack_370,"dummy",pcStack_138,
                         param_1 + 0x188,param_1 + 0x170,param_1 + 0x198);
  ppuStack_150 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_150);
  ppuStack_3a0 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_3a0);
joined_r0x007100249444:
  if ((uVar3 & 1) == 0) {
    auStack_250[0] = 0x8001000d;
    FUN_71001b4200((undefined4 *)&ppuStack_150,auStack_250);
    FUN_7100248800(param_1,(int *)&ppuStack_150);
    FUN_71001b60c0(&ppuStack_378);
  }
  else {
    FUN_71001b60c0(&ppuStack_378);
    ppuStack_378 = &PTR_FUN_7104f56e28;
    pcStack_370 = FUN_71002497c0;
    uStack_368 = 0;
    puStack_360 = &DAT_71044114cc;
    FUN_71001d3d60(param_1,(long)&ppuStack_378);
  }
  return;
}

