// addr:      7100445b40
// offset:    0x445b40
// name:      FUN_7100445b40
// mangled:   
// signature: undefined __cdecl FUN_7100445b40(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100445b40(void)

{
  int iVar1;
  ulong uVar2;
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *local_60;
  undefined8 local_58;
  
  DAT_7105339440 = 0;
  FUN_71000001c0();
  DAT_7105339458 = 0;
  DAT_7105339460 = 0;
  _DAT_7105339450 = 0x4c414e49460a;
  FUN_71000001c0();
  DAT_7105339470._2_6_ = 0;
  DAT_7105339468 = 0x10;
  DAT_7105339478 = 0;
  _DAT_7105339469 = 0x425f4550554f4c;
  DAT_7105339470._0_1_ = 0x47;
  DAT_7105339470._1_1_ = 0;
  FUN_71000001c0();
  DAT_7105339490 = 0;
  uRam000000710533948c = 0;
  DAT_7105339480 = 0x14;
  DAT_7105339481._0_7_ = 0x4e49414d5f4246;
  DAT_7105339481._7_1_ = 0x5f;
  DAT_7105339489 = 0x4432;
  DAT_710533948b = 0;
  FUN_71000001c0();
  DAT_71053394a8 = 0;
  uRam00000071053394a3 = 0;
  DAT_7105339498 = 0x12;
  DAT_7105339499._0_7_ = 0x5252494d5f4246;
  DAT_7105339499._7_1_ = 0x4f;
  DAT_71053394a1 = 0x52;
  FUN_71000001c0();
  uRam00000071053394bc = 0;
  DAT_71053394c0 = 0;
  DAT_71053394b0 = 0x14;
  DAT_71053394b1._0_7_ = 0x4e49414d5f4246;
  DAT_71053394b1._7_1_ = 0x5f;
  DAT_71053394b9 = 0x4432;
  DAT_71053394bb = 0;
  FUN_71000001c0();
  uRam00000071053394d3 = 0;
  DAT_71053394d8 = 0;
  DAT_71053394c8 = 0x12;
  DAT_71053394c9._0_7_ = 0x5252494d5f4246;
  DAT_71053394c9._7_1_ = 0x4f;
  DAT_71053394d1 = 0x52;
  FUN_71000001c0();
  uRam00000071053394ed = 0;
  DAT_71053394e0 = 0x16;
  DAT_71053394e1._0_7_ = 0x49414d5f565452;
  DAT_71053394e1._7_1_ = 0x4e;
  DAT_71053394f0 = 0;
  DAT_71053394e9 = 0x44325f;
  FUN_71000001c0();
  uRam0000007105339504 = 0;
  DAT_71053394f8 = 0x14;
  DAT_71053394f9._0_7_ = 0x52494d5f565452;
  DAT_71053394f9._7_1_ = 0x52;
  DAT_7105339508 = 0;
  DAT_7105339501 = 0x524f;
  DAT_7105339503 = 0;
  FUN_71000001c0();
  DAT_7105339510 = 0;
  DAT_7105339518 = 0;
  DAT_7105339520 = (char *)0x0;
  iVar1 = FUN_710392e1f0(&local_60,0x10,(long ****)&SUB_00000020,in_x3,in_x4,in_x5,in_x6,in_x7);
  if ((iVar1 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_58 = 0x20;
    uVar2 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_58);
    if ((uVar2 & 1) != 0) {
      FUN_710392e1f0(&local_60,0x10,(long ****)&SUB_00000020,in_x3,in_x4,in_x5,in_x6,in_x7);
    }
  }
  nu::VirtualAllocHook(0x20,0x10,local_60);
  DAT_7105339510 = 0x21;
  DAT_7105339518 = 0x19;
  DAT_7105339520 = local_60;
  builtin_strncpy(local_60,"RESOLVE_SNAPSHOT_FILTERED",0x1a);
  FUN_71000001c0();
  return;
}

