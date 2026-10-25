// addr:      7102d0a9d0
// offset:    0x2d0a9d0
// name:      std::stringbuf::seekoff
// mangled:   _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj
// signature: undefined1[16] __thiscall seekoff(stringbuf * this, long param_1, int param_2, uint param_3)


/* std::stringbuf::seekoff(long long, std::ios_base::seekdir, unsigned int) */

undefined1  [16] __thiscall
std::stringbuf::seekoff(stringbuf *this,long param_1,int param_2,uint param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(this + 0x30);
  uVar4 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x58) < uVar5) {
    *(ulong *)(this + 0x58) = uVar5;
    uVar4 = uVar5;
  }
  if ((param_3 & 0x18) == 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  if ((param_2 == 1) && ((param_3 & 0x18) == 0x18)) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  if (uVar4 == 0) {
    lVar6 = 0;
  }
  else if (((byte)this[0x40] & 1) == 0) {
    lVar6 = uVar4 - (long)(this + 0x41);
  }
  else {
    lVar6 = uVar4 - *(long *)(this + 0x50);
  }
  if (param_2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar6;
    if (param_2 != 2) {
      if (param_2 != 1) {
        return ZEXT816(0xffffffffffffffff) << 0x40;
      }
      if ((param_3 >> 3 & 1) == 0) {
        lVar7 = uVar5 - *(long *)(this + 0x28);
      }
      else {
        lVar7 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
      }
    }
  }
  uVar1 = lVar7 + param_1;
  uVar3 = 0xffffffffffffffff;
  if ((-1 < (long)uVar1) && ((long)uVar1 <= lVar6)) {
    if (uVar1 != 0) {
      if (((param_3 >> 3 & 1) != 0) && (*(long *)(this + 0x18) == 0)) {
        return ZEXT816(0xffffffffffffffff) << 0x40;
      }
      if (((param_3 >> 4 & 1) != 0) && (uVar5 == 0)) {
        return ZEXT816(0xffffffffffffffff) << 0x40;
      }
    }
    if ((param_3 >> 3 & 1) != 0) {
      *(ulong *)(this + 0x18) = *(long *)(this + 0x10) + uVar1;
      *(ulong *)(this + 0x20) = uVar4;
    }
    uVar3 = uVar1;
    if ((param_3 >> 4 & 1) != 0) {
      *(long *)(this + 0x30) = *(long *)(this + 0x28) + (long)(int)uVar1;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  return auVar2 << 0x40;
}

