// addr:      7101f2f100
// offset:    0x1f2f100
// name:      FUN_7101f2f100
// mangled:   
// signature: undefined __cdecl FUN_7101f2f100(long * * * * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f2f100(long ****param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  char *pcVar2;
  int iVar3;
  AlbumFileEntry *__s;
  ulong uVar4;
  AlbumFileEntry *__s_00;
  long ****pppplVar5;
  uint local_58;
  uint local_54;
  long ***local_50;
  undefined4 local_44;
  
  local_54 = 0;
  __s = (AlbumFileEntry *)
        FUN_710392e290(0x10,0x8980,param_3,param_4,param_5,param_6,param_7,param_8);
  if (__s == (AlbumFileEntry *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)0x8980;
      pppplVar5 = &local_50;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar4 & 1) != 0) &&
         (__s = (AlbumFileEntry *)
                FUN_710392e290(0x10,0x8980,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         __s != (AlbumFileEntry *)0x0)) goto LAB_7101f2f180;
    }
    __s = (AlbumFileEntry *)0x0;
  }
LAB_7101f2f180:
  memset(__s,0,0x8980);
  nn::album::GetExtraMovieFileList((int *)&local_54,__s,0x44c);
  pppplVar5 = (long ****)(ulong)local_54;
  FUN_7101f2f410(param_1 + 0x1f,__s,pppplVar5,param_4,param_5,param_6,param_7,param_8);
  FUN_7101f23d30(*(int *)((long)param_1 + 0x2e1f4),param_1 + 0x1f,pppplVar5,param_4,param_5,param_6,
                 param_7,param_8);
  local_58 = 0;
  __s_00 = (AlbumFileEntry *)
           FUN_710392e290(0x10,0x55f00,pppplVar5,param_4,param_5,param_6,param_7,param_8);
  if (__s_00 == (AlbumFileEntry *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)0x55f00;
      pppplVar5 = &local_50;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar4 & 1) != 0) &&
         (__s_00 = (AlbumFileEntry *)
                   FUN_710392e290(0x10,0x55f00,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         __s_00 != (AlbumFileEntry *)0x0)) goto LAB_7101f2f230;
    }
    __s_00 = (AlbumFileEntry *)0x0;
  }
LAB_7101f2f230:
  memset(__s_00,0,0x55f00);
  nn::album::GetAlbumScreenshotFileList((int *)&local_58,__s_00,11000);
  pppplVar5 = (long ****)(ulong)local_58;
  FUN_7101f2f410(param_1 + 0x2e28,__s_00,pppplVar5,param_4,param_5,param_6,param_7,param_8);
  FUN_7101f23d30(*(int *)((long)param_1 + 0x2e1f4),param_1 + 0x2e28,pppplVar5,param_4,param_5,
                 param_6,param_7,param_8);
  iVar3 = *(int *)(param_1 + 0x1b);
  pppplVar5 = param_1 + 0x22;
  if (iVar3 != 1) {
    pppplVar5 = param_1 + 0x2e2c;
  }
  pppplVar1 = pppplVar5 + 0x2e00;
  do {
    *(undefined4 *)pppplVar5 = 0;
    *(undefined1 *)((long)pppplVar5 + 0xb4) = 1;
    *(undefined4 *)(pppplVar5 + 0x5c) = 0;
    *(undefined1 *)((long)pppplVar5 + 0x394) = 1;
    *(undefined4 *)(pppplVar5 + 0xb8) = 0;
    *(undefined1 *)((long)pppplVar5 + 0x674) = 1;
    *(undefined4 *)(pppplVar5 + 0x114) = 0;
    *(undefined1 *)((long)pppplVar5 + 0x954) = 1;
    pppplVar5 = pppplVar5 + 0x170;
  } while (pppplVar5 != pppplVar1);
  *(undefined1 *)(param_1 + 0x5c40) = 0;
  *(undefined1 *)((long)param_1 + 0x2e2a4) = 1;
  *(int *)(param_1 + 0x1b) = iVar3;
  FUN_7101f2b8e0(param_1);
  pcVar2 = "mode_movie";
  if (*(int *)(param_1 + 0x1b) != 1) {
    pcVar2 = "mode_picture";
  }
  FUN_7103778300(0x3f800000,(long)(*param_1[0x1a])[2],(long)pcVar2);
  (*(code *)(*param_1[0x1e])[0xc])(param_1[0x1e],1);
  (*(code *)(*param_1[0x1e])[0xe])(param_1[0x1e],0);
  pppplVar5 = param_1 + 0x1d;
  (*(code *)(**pppplVar5)[0xc])(*pppplVar5,1);
  (*(code *)(**pppplVar5)[0xe])(*pppplVar5,1);
  FUN_7103771a80((long *)pppplVar5,(uint)(*(int *)(param_1 + 0x1b) != 1),1);
  *(undefined1 *)(param_1 + 0x5c98) = 0;
  FUN_7103778300(0x3f800000,(long)(*param_1[0x1a])[2],0x7104421055);
  if (*(uint *)((long)param_1 + 0xbc) < 0x13) {
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0xbc) * 4 + 0x70) = 1;
    if (__s_00 != (AlbumFileEntry *)0x0) {
      FUN_710392eb40((ulong)__s_00);
    }
    if (__s != (AlbumFileEntry *)0x0) {
      FUN_710392eb40((ulong)__s);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

