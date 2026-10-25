// addr:      7100103f40
// offset:    0x103f40
// name:      FUN_7100103f40
// mangled:   
// signature: undefined FUN_7100103f40(void)


void FUN_7100103f40(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  
  uVar1 = FUN_7100151000(*(long *)(DAT_71052adb38 + 0xb8),param_1 + 0xa8);
  *(char *)(param_1 + 0x128) = (char)uVar1;
  if ((uVar1 & 0xff) != 0) {
    uVar2 = uVar1 & 3;
    if ((uVar1 & 0xff) - 1 < 3) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        lVar3 = param_1 + lVar4;
        lVar4 = lVar4 + 4;
        *(undefined4 *)(lVar3 + 0x129) = 0;
      } while ((uVar1 & 0xff) - uVar2 != lVar4);
    }
    if (uVar2 != 0) {
      lVar3 = -uVar2;
      puVar5 = (undefined1 *)(param_1 + lVar4 + 0x129);
      do {
        lVar3 = lVar3 + 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
  }
  *(code **)(param_1 + 0x30) = FUN_7100104000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchLeaveSessionJob::GetMatchmakeSessionOwners";
  return;
}

