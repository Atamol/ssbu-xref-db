// addr:      7102d0a980
// offset:    0x2d0a980
// name:      std::stringbuf::~stringbuf
// mangled:   _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev
// size:      72

7102d0a980  str x19,[sp, #-0x20]!
7102d0a984  stp x29,x30,[sp, #0x10]
7102d0a988  add x29,sp,#0x10
7102d0a98c  adrp x8,0x7105131000
7102d0a990  add x8,x8,#0xcf0
7102d0a994  str x8,[x0]
7102d0a998  ldrb w8,[x0, #0x40]
7102d0a99c  mov x19,x0
7102d0a9a0  tbz w8,#0x0,0x7102d0a9b0
7102d0a9a4  ldr x0,[x19, #0x50]
7102d0a9a8  cbz x0,0x7102d0a9b0
7102d0a9ac  bl 0x710392eb40
7102d0a9b0  mov x0,x19
7102d0a9b4  bl 0x71039c6770
7102d0a9b8  ldp x29,x30,[sp, #0x10]
7102d0a9bc  mov x0,x19
7102d0a9c0  ldr x19,[sp], #0x20
7102d0a9c4  b 0x710392eb40
