// addr:      7102d0a940
// offset:    0x2d0a940
// name:      std::stringbuf::~stringbuf
// mangled:   _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
// signature: undefined __thiscall ~stringbuf(stringbuf * this)


/* std::stringbuf::~stringbuf() */

void __thiscall std::stringbuf::~stringbuf(stringbuf *this)

{
  *(undefined ***)this = &PTR__stringbuf_7105131cf0;
  if ((((byte)this[0x40] & 1) != 0) && (*(ulong *)(this + 0x50) != 0)) {
    FUN_710392eb40(*(ulong *)(this + 0x50));
  }
  std::streambuf::~streambuf((streambuf *)this);
  return;
}

