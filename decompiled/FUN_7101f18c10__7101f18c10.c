// addr:      7101f18c10
// offset:    0x1f18c10
// name:      FUN_7101f18c10
// mangled:   
// signature: undefined __cdecl FUN_7101f18c10(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f18c10(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong local_21c8 [1074];
  ulong *local_38;
  
  lVar8 = DAT_7105339fd0;
  if (*(char *)(param_1 + 0x56e5) == '\0') {
    puVar6 = *(undefined8 **)(param_1 + 0x3d0);
    if (*(int *)(param_1 + 0x2ac) == 0) {
      *(undefined1 *)(puVar6 + 1) = 1;
      lVar8 = *(long *)(*(long *)*puVar6 + 0x10);
      if ((*(long *)(lVar8 + 8) != 0) &&
         (lVar7 = *(long *)(*(long *)(lVar8 + 8) + 0x18), lVar7 != 0)) {
        *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
        lVar8 = *(long *)(*(long *)*puVar6 + 0x10);
      }
      FUN_7103778300(0x3f800000,lVar8,0x7104421055);
      *(undefined1 *)(*(long *)(*DAT_710533a080 + 8) + 0x131) = 0;
      if (*(long *)(param_1 + 0x410) != *(long *)(param_1 + 0x418)) {
        FUN_71033148b0(*(long *)(DAT_710532f8d0 + 8));
      }
    }
    else if (*(char *)(puVar6 + 1) == '\0') {
      lVar8 = *(long *)(*(long *)(*(long *)*puVar6 + 0x10) + 8);
      if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      }
      lVar8 = DAT_7105339fd0;
      if (*(int *)(DAT_7105339fd0 + 0x48) != 0) {
        FUN_71036ebe40(*(long *)(*DAT_710533a080 + 8),param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
        uVar5 = extraout_x1_01;
        if (*(long **)(lVar8 + 0xe0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + 0xe0) + 0x30))();
          uVar5 = extraout_x1_02;
        }
        *(undefined4 *)(lVar8 + 0x48) = 0;
        *(undefined4 *)(lVar8 + 0x15c) = 0;
        FUN_71036ec2b0(*(ulong **)(*DAT_710533a080 + 8),uVar5,param_3,param_4,param_5,param_6,
                       param_7,param_8);
      }
      lVar8 = *(long *)**(undefined8 **)(**(long **)(*DAT_7105314510 + 0x188) + 0x28);
      iVar1 = *(int *)(lVar8 + 8);
      iVar2 = 999999999;
      if (iVar1 + 1U < 999999999) {
        iVar2 = iVar1 + 1;
      }
      *(int *)(lVar8 + 8) = iVar2;
      FUN_710375aa90((long *)&local_38,"video_edit",param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      puVar3 = local_38;
      local_21c8[0] = (ulong)*(uint *)(param_1 + 0x598);
      nn::prepo::PlayReport::Add((char *)(*local_38 + 0x4020),(Any64BitId *)"play_time_as_seconds");
      if ((*(uint *)(param_1 + 0x540) & 0xf000) < 0x2001) {
        local_21c8[0] = 0;
      }
      else {
        local_21c8[0] = (ulong)*(int *)(param_1 + 0x684);
      }
      nn::prepo::PlayReport::Add((char *)(*puVar3 + 0x4020),(Any64BitId *)"movie_count");
      if ((*(byte *)(param_1 + 0x541) & 0xc0) == 0) {
        local_21c8[0] = 0;
      }
      else {
        local_21c8[0] = (ulong)*(int *)(param_1 + 0x690);
      }
      nn::prepo::PlayReport::Add((char *)(*puVar3 + 0x4020),(Any64BitId *)"ss_count");
      if ((*(uint *)(param_1 + 0x540) & 0xf000) < 0x2001) {
        local_21c8[0] = 0;
      }
      else {
        local_21c8[0] = (ulong)*(int *)(param_1 + 0x688);
      }
      nn::prepo::PlayReport::Add((char *)(*puVar3 + 0x4020),(Any64BitId *)"blocking_count");
      if ((*(uint *)(param_1 + 0x540) & 0xf000) < 0x2001) {
        local_21c8[0] = 0;
      }
      else {
        local_21c8[0] = (ulong)*(byte *)(param_1 + 0x68c);
      }
      nn::prepo::PlayReport::Add((char *)(*puVar3 + 0x4020),(Any64BitId *)"use_caption");
      iVar2 = *(int *)(*DAT_710593b580 + 0x7300);
      if ((iVar2 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar2))
      goto LAB_7101f18fcc;
      nn::prepo::PlayReport::Save((Uid *)(*puVar3 + 0x4020));
      local_38 = (ulong *)0x0;
      uVar4 = *puVar3;
      *puVar3 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40((ulong)puVar3);
    }
  }
  else if (*(int *)(DAT_7105339fd0 + 0x48) != 0) {
    FUN_71036ec100(*(long *)(*DAT_710533a080 + 8));
    uVar5 = extraout_x1;
    if (*(long **)(lVar8 + 0xe0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar8 + 0xe0) + 0x30))();
      uVar5 = extraout_x1_00;
    }
    *(undefined4 *)(lVar8 + 0x48) = 0;
    *(undefined4 *)(lVar8 + 0x15c) = 0;
    FUN_71036ec2b0(*(ulong **)(*DAT_710533a080 + 8),uVar5,param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  if (*(int *)(DAT_7105339fd0 + 0x48) == 0) {
    lVar8 = *(long *)(param_1 + 0x330);
    FUN_7101af5880(local_21c8,(undefined8 *)(*(long *)(lVar8 + 0x80) + 0xc0));
    FUN_7101af8570(lVar8,(int *)local_21c8,0,1,param_5,param_6,param_7,param_8);
    *(undefined1 *)(*(long *)(param_1 + 0x340) + 0x1ce) = 0;
    if (0x12 < *(uint *)(param_1 + 0x2a4)) {
LAB_7101f18fcc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4 + 600) = 0x18;
  }
  return;
}

