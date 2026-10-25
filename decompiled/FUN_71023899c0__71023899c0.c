// addr:      71023899c0
// offset:    0x23899c0
// name:      FUN_71023899c0
// mangled:   
// signature: undefined __cdecl FUN_71023899c0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71023899c0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *local_40;
  ulong local_38;
  
  lVar7 = *(long *)(DAT_7105325cc8 + 8);
  if (*(int *)(lVar7 + 0xb8) != 0) {
    lVar4 = nn::oe::GetProgramTotalActiveTime();
    uVar6 = lVar4 - *(long *)(lVar7 + 0x26c8);
    uVar5 = ((long)uVar6 >> 0x20) * 0x26d694b3 + ((uVar6 & 0xffffffff) * 0x26d694b3 >> 0x20);
    *(int *)(lVar7 + 0x2674) =
         (int)(((long)uVar6 >> 0x20) * 0x112e0be8 + ((long)uVar5 >> 0x20) +
               ((uVar6 & 0xffffffff) * 0x112e0be8 + (uVar5 & 0xffffffff) >> 0x20) >> 0x1a) -
         (int)((long)uVar6 >> 0x3f);
    if ((((((*(int *)(lVar7 + 0x2678) != 0) || (*(int *)(lVar7 + 0x267c) != 0)) ||
          (*(int *)(lVar7 + 0x2680) != 0)) ||
         ((*(int *)(lVar7 + 0x2684) != 0 || (*(int *)(lVar7 + 0x2688) != 0)))) ||
        ((((*(int *)(lVar7 + 0x268c) != 0 ||
           ((*(int *)(lVar7 + 0x2690) != 0 || (*(int *)(lVar7 + 0x2694) != 0)))) ||
          (*(int *)(lVar7 + 0x2698) != 0)) ||
         ((((*(int *)(lVar7 + 0x269c) != 0 || (*(int *)(lVar7 + 0x26a0) != 0)) ||
           (*(int *)(lVar7 + 0x26a4) != 0)) ||
          (((*(int *)(lVar7 + 0x26a8) != 0 || (*(int *)(lVar7 + 0x26ac) != 0)) ||
           ((*(int *)(lVar7 + 0x26b0) != 0 ||
            ((*(int *)(lVar7 + 0x26b4) != 0 || (*(int *)(lVar7 + 0x26b8) != 0)))))))))))) ||
       ((*(int *)(lVar7 + 0x26bc) != 0 ||
        ((*(int *)(lVar7 + 0x26c0) != 0 || (*(int *)(lVar7 + 0x26c4) != 0)))))) {
      FUN_710375aa90((long *)&local_40,"share",param_3,param_4,param_5,param_6,param_7,param_8);
      puVar2 = local_40;
      local_38 = (ulong)*(uint *)(lVar7 + 0x2674);
      nn::prepo::PlayReport::Add((char *)(*local_40 + 0x4020),(Any64BitId *)"time_seconds");
      local_38 = (ulong)*(uint *)(lVar7 + 0x2678);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_test_stageedit");
      local_38 = (ulong)*(uint *)(lVar7 + 0x267c);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_save_stageedit");
      local_38 = (ulong)*(uint *)(lVar7 + 0x2680);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_like_stageedit");
      local_38 = (ulong)*(uint *)(lVar7 + 0x2684);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_share_stageedit");
      local_38 = (ulong)*(uint *)(lVar7 + 0x2688);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_test_miifighter");
      local_38 = (ulong)*(uint *)(lVar7 + 0x268c);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_save_miifighter");
      local_38 = (ulong)*(uint *)(lVar7 + 0x2690);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_like_miifighter");
      local_38 = (ulong)*(uint *)(lVar7 + 0x2694);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_share_miifighter");
      local_38 = (ulong)*(uint *)(lVar7 + 0x2698);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_watch_replay");
      puVar2 = local_40;
      local_38 = (ulong)*(uint *)(lVar7 + 0x269c);
      nn::prepo::PlayReport::Add((char *)(*local_40 + 0x4020),(Any64BitId *)"num_like_replay");
      local_38 = (ulong)*(uint *)(lVar7 + 0x26a0);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_share_replay");
      local_38 = (ulong)*(uint *)(lVar7 + 0x26a4);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_watch_watching");
      local_38 = (ulong)*(uint *)(lVar7 + 0x26a8);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_like_watching");
      local_38 = (ulong)*(uint *)(lVar7 + 0x26ac);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_share_watching");
      local_38 = (ulong)*(uint *)(lVar7 + 0x26b0);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_watch_movie");
      local_38 = (ulong)*(uint *)(lVar7 + 0x26b4);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_like_movie");
      local_38 = (ulong)*(uint *)(lVar7 + 0x26b8);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_share_movie");
      local_38 = (ulong)*(uint *)(lVar7 + 0x26bc);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_profile");
      local_38 = (ulong)*(uint *)(lVar7 + 0x26c0);
      nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),(Any64BitId *)"num_follow");
      puVar2 = local_40;
      local_38 = (ulong)*(uint *)(lVar7 + 0x26c4);
      nn::prepo::PlayReport::Add((char *)(*local_40 + 0x4020),(Any64BitId *)"num_report");
      iVar1 = *(int *)(*DAT_710593b580 + 0x7300);
      if ((iVar1 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar1))
      goto LAB_7102389f38;
      nn::prepo::PlayReport::Save((Uid *)(*puVar2 + 0x4020));
      local_40 = (ulong *)0x0;
      if (puVar2 != (ulong *)0x0) {
        uVar5 = *puVar2;
        *puVar2 = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40((ulong)puVar2);
      }
    }
    *(undefined1 *)(*(long *)(DAT_7105325cc8 + 8) + 0x2670) = 1;
  }
  if (*(int *)(*(long *)(DAT_7105324fd8 + 8) + 200) != 0) {
    *(undefined1 *)(*(long *)(DAT_7105324fd8 + 8) + 0x16d1) = 1;
  }
  if (*(int *)(*(long *)(DAT_7105325cb8 + 8) + 0xa8) != 0) {
    *(undefined1 *)(*(long *)(DAT_7105325cb8 + 8) + 0x32d0) = 1;
  }
  if (*(int *)(*(long *)(DAT_7105324fa0 + 8) + 0xa8) != 0) {
    *(undefined1 *)(*(long *)(DAT_7105324fa0 + 8) + 0x710) = 1;
  }
  lVar7 = *(long *)(DAT_7105325ca0 + 8);
  if (*(int *)(lVar7 + 0xa8) != 0) {
    bVar3 = FUN_7101cc4970(lVar7);
    if ((bVar3) &&
       (*(char *)(*(long *)(*(long *)(*(long *)(DAT_710532f820 + 8) + 0x110) + 0x80) + 0x14d) ==
        '\0')) {
      FUN_7101cc4b30(lVar7);
    }
    *(undefined8 *)(lVar7 + 0xc0) = *(undefined8 *)(lVar7 + 0xb8);
  }
  if (*(int *)(*(long *)(DAT_710532f8f8 + 8) + 200) != 0) {
    *(undefined1 *)(*(long *)(DAT_710532f8f8 + 8) + 0x128) = 1;
  }
  if (*(int *)(*(long *)(DAT_7105325c98 + 8) + 0x108) != 0) {
    *(undefined1 *)(*(long *)(DAT_7105325c98 + 8) + 0x12d0) = 1;
  }
  lVar7 = *(long *)(DAT_7105325cd0 + 8);
  if (*(int *)(lVar7 + 0xa8) != 0) {
    if (0x12 < *(uint *)(lVar7 + 0xa4)) {
LAB_7102389f38:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0xa4) * 4 + 0x58) = 2;
  }
  return;
}

