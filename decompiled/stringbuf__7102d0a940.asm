// addr:      7102d0a940
// offset:    0x2d0a940
// name:      std::stringbuf::~stringbuf
// mangled:   _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
// size:      64

7102d0a940  str x19,[sp, #-0x20]!
7102d0a944  stp x29,x30,[sp, #0x10]
7102d0a948  add x29,sp,#0x10
7102d0a94c  adrp x8,0x7105131000
7102d0a950  add x8,x8,#0xcf0
7102d0a954  str x8,[x0]
7102d0a958  ldrb w8,[x0, #0x40]
7102d0a95c  mov x19,x0
7102d0a960  tbz w8,#0x0,0x7102d0a970
7102d0a964  ldr x0,[x19, #0x50]
7102d0a968  cbz x0,0x7102d0a970
7102d0a96c  bl 0x710392eb40
7102d0a970  ldp x29,x30,[sp, #0x10]
7102d0a974  mov x0,x19
7102d0a978  ldr x19,[sp], #0x20
7102d0a97c  b 0x71039c6770
