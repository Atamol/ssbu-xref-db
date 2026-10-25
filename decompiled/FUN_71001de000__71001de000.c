// addr:      71001de000
// offset:    0x1de000
// name:      FUN_71001de000
// mangled:   
// signature: undefined __cdecl FUN_71001de000(void)


void FUN_71001de000(void)

{
  int iVar1;
  
  DAT_71052af0b0 = &PTR_FUN_7104f566e0;
  DAT_71052af0b8 = 0;
  DAT_71052af0c0 = 0;
  DAT_71052af0c8 = "CallContextRegisterCheckExpiredCalls";
  DAT_71052af0d4 = 0;
  DAT_71052af0d0 = 100;
  if (((DAT_71052af230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052af230), iVar1 != 0)) {
    DAT_71052af238 = &PTR_FUN_7104f57088;
    DAT_71052af240 = (undefined8 *)0x0;
    DAT_71052af248 = (undefined8 *)0x0;
    DAT_71052af250 = (undefined8 *)0x0;
    DAT_71052af258 = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71052af230);
  }
  if (DAT_71052af240 == DAT_71052af250) {
    DAT_71052af240 = &DAT_71052af0b0;
  }
  else {
    *(undefined ****)((long)DAT_71052af248 + 8) = &DAT_71052af0b0;
    DAT_71052af0c0 = (long)DAT_71052af248;
  }
  DAT_71052af258 = DAT_71052af258 + 1;
  DAT_71052af248 = &DAT_71052af0b0;
  FUN_71000001c0();
  DAT_71052af108 = 0;
  DAT_71052af0e8 = &PTR_FUN_7104f566e0;
  DAT_71052af0f0 = 0;
  DAT_71052af10c = 0;
  DAT_71052af0f8 = (undefined8 *)0x0;
  DAT_71052af100 = "ConnectionEncoding";
  if (((DAT_71052af230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052af230), iVar1 != 0)) {
    DAT_71052af238 = &PTR_FUN_7104f57088;
    DAT_71052af240 = (undefined8 *)0x0;
    DAT_71052af248 = (undefined8 *)0x0;
    DAT_71052af250 = (undefined8 *)0x0;
    DAT_71052af258 = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71052af230);
    if (DAT_71052af240 == DAT_71052af250) goto LAB_71001de1c4;
  }
  else if (DAT_71052af240 == DAT_71052af250) {
LAB_71001de1c4:
    DAT_71052af240 = &DAT_71052af0e8;
    goto LAB_71001de1cc;
  }
  DAT_71052af248[1] = &DAT_71052af0e8;
  DAT_71052af0f8 = DAT_71052af248;
LAB_71001de1cc:
  DAT_71052af258 = DAT_71052af258 + 1;
  DAT_71052af248 = &DAT_71052af0e8;
  FUN_71000001c0();
  DAT_71052af120 = 0;
  DAT_71052af128 = 0;
  DAT_71052af1a0 = 0;
  DAT_71052af130 = 0;
  DAT_71052af138 = 0;
  DAT_71052af1b0 = 0;
  DAT_71052af140 = 0;
  DAT_71052af148 = 0;
  DAT_71052af110 = &PTR_FUN_7104f56228;
  DAT_71052af118 = &PTR_FUN_7104f56248;
  DAT_71052af150 = 0;
  DAT_71052af158 = 0;
  DAT_71052af160 = 0;
  DAT_71052af168 = 0;
  DAT_71052af1a8 = 1;
  DAT_71052af170 = 0;
  DAT_71052af178 = 0;
  DAT_71052af180 = 0;
  DAT_71052af188 = 0;
  DAT_71052af190 = 0;
  DAT_71052af198 = 0;
  FUN_71000001c0();
  DAT_71052af1c8 = &PTR_FUN_7104f563a0;
  FUN_71000001c0();
  FUN_71001b0350(&DAT_71052af1e0,2,1);
  FUN_71000001c0();
  return;
}

