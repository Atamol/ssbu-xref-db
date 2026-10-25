// addr:      7100024770
// offset:    0x24770
// name:      FUN_7100024770
// mangled:   
// signature: undefined4 __cdecl FUN_7100024770(byte * param_1, long * param_2)


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_7100024770(byte *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  long lVar8;
  long local_578;
  byte abStack_570 [1024];
  byte abStack_170 [256];
  byte *local_70 [2];
  
  lVar8 = *param_2;
  local_70[0] = param_1;
  FUN_71000272a0();
  *param_2 = 0;
  FUN_71000272a0();
  param_2[1] = 0;
  FUN_71000272a0();
  param_2[2] = 0;
  FUN_71000272a0();
  param_2[4] = 0;
  FUN_71000272a0();
  param_2[5] = 0;
  FUN_71000272a0();
  bVar2 = false;
  bVar7 = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined1 *)((long)param_2 + 0x1c) = 0;
  bVar1 = *param_1;
  local_70[0] = param_1;
  do {
    while ((bVar1 - 9 < 5 || (bVar1 == 0x20))) {
      local_70[0] = local_70[0] + 1;
      bVar1 = *local_70[0];
    }
    uVar4 = FUN_71000245b0((char *)local_70[0],(long)abStack_170,abStack_570,(long *)local_70);
    if ((uVar4 & 1) == 0) {
      if ((lVar8 != 0) && (*(char *)((long)param_2 + 0x1c) == '\0')) {
        return 0x3d;
      }
      if (*param_2 != 0) {
        return 0;
      }
      return 0x3d;
    }
    bVar3 = FUN_7100017280(abStack_170,(byte *)"nonce");
    if (bVar3) {
      FUN_71000272a0();
      lVar5 = FUN_71000272c0();
      *param_2 = lVar5;
      goto joined_r0x007100024890;
    }
    bVar3 = FUN_7100017280(abStack_170,(byte *)"stale");
    if (bVar3) {
      bVar3 = FUN_7100017280(abStack_570,&DAT_7104349271);
      if (bVar3) {
        *(undefined1 *)((long)param_2 + 0x1c) = 1;
        *(undefined4 *)(param_2 + 7) = 1;
      }
      goto LAB_7100024894;
    }
    bVar3 = FUN_7100017280(abStack_170,(byte *)"realm");
    if (bVar3) {
      FUN_71000272a0();
      lVar5 = FUN_71000272c0();
      param_2[2] = lVar5;
joined_r0x007100024890:
      if (lVar5 == 0) {
        return 0x1b;
      }
    }
    else {
      bVar3 = FUN_7100017280(abStack_170,(byte *)"opaque");
      if (bVar3) {
        FUN_71000272a0();
        lVar5 = FUN_71000272c0();
        param_2[4] = lVar5;
        goto joined_r0x007100024890;
      }
      bVar3 = FUN_7100017280(abStack_170,&DAT_710424e49a);
      if (bVar3) {
        local_578 = 0;
        pbVar6 = (byte *)FUN_71000272c0();
        if (pbVar6 == (byte *)0x0) {
          return 0x1b;
        }
        pbVar6 = FUN_71000176a0(pbVar6,",",&local_578);
        while (pbVar6 != (byte *)0x0) {
          bVar3 = FUN_7100017280(pbVar6,&DAT_71042d5221);
          if (bVar3) {
            bVar2 = true;
          }
          else {
            bVar3 = FUN_7100017280(pbVar6,(byte *)"auth-int");
            bVar7 = bVar7 | bVar3;
          }
          pbVar6 = FUN_71000176a0((byte *)0x0,",",&local_578);
        }
        FUN_71000272a0();
        if (bVar2) {
          FUN_71000272a0();
          lVar5 = FUN_71000272c0();
          param_2[5] = lVar5;
        }
        else {
          if (bVar7 == 0) goto LAB_7100024894;
          FUN_71000272a0();
          lVar5 = FUN_71000272c0();
          param_2[5] = lVar5;
        }
        goto joined_r0x007100024890;
      }
      bVar3 = FUN_7100017280(abStack_170,(byte *)"algorithm");
      if (bVar3) {
        FUN_71000272a0();
        lVar5 = FUN_71000272c0();
        param_2[6] = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        bVar3 = FUN_7100017280(abStack_570,(byte *)"MD5-sess");
        if (bVar3) {
          *(undefined4 *)(param_2 + 3) = 1;
        }
        else {
          bVar3 = FUN_7100017280(abStack_570,&DAT_7104349276);
          if (!bVar3) {
            return 0x3d;
          }
          *(undefined4 *)(param_2 + 3) = 0;
        }
      }
    }
LAB_7100024894:
    bVar1 = *local_70[0];
    if (4 < bVar1 - 9) goto LAB_71000248bc;
    do {
      do {
        local_70[0] = local_70[0] + 1;
        bVar1 = *local_70[0];
      } while (bVar1 - 9 < 5);
LAB_71000248bc:
    } while (bVar1 == 0x20);
    if (bVar1 == 0x2c) {
      local_70[0] = local_70[0] + 1;
    }
    bVar1 = *local_70[0];
  } while( true );
}

