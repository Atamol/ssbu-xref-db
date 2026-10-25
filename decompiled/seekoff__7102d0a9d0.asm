// addr:      7102d0a9d0
// offset:    0x2d0a9d0
// name:      std::stringbuf::seekoff
// mangled:   _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj
// size:      304

7102d0a9d0  ldr x8,[x0, #0x58]
7102d0a9d4  ldr x9,[x0, #0x30]
7102d0a9d8  cmp x8,x9
7102d0a9dc  b.cs 0x7102d0a9e8
7102d0a9e0  mov x8,x9
7102d0a9e4  str x9,[x0, #0x58]
7102d0a9e8  ands w10,w3,#0x18
7102d0a9ec  b.eq 0x7102d0aa0c
7102d0a9f0  cmp w2,#0x1
7102d0a9f4  b.ne 0x7102d0aa18
7102d0a9f8  cmp w10,#0x18
7102d0a9fc  b.ne 0x7102d0aa18
7102d0aa00  mov x1,#-0x1
7102d0aa04  mov x0,xzr
7102d0aa08  ret
7102d0aa0c  mov x1,#-0x1
7102d0aa10  mov x0,xzr
7102d0aa14  ret
7102d0aa18  cbz x8,0x7102d0aa38
7102d0aa1c  mov x10,x0
7102d0aa20  ldrb w11,[x10, #0x40]!
7102d0aa24  tbnz w11,#0x0,0x7102d0aa48
7102d0aa28  add x10,x10,#0x1
7102d0aa2c  sub x10,x8,x10
7102d0aa30  cbnz w2,0x7102d0aa54
7102d0aa34  b 0x7102d0aa40
7102d0aa38  mov x10,xzr
7102d0aa3c  cbnz w2,0x7102d0aa54
7102d0aa40  mov x11,xzr
7102d0aa44  b 0x7102d0aa90
7102d0aa48  ldr x10,[x0, #0x50]
7102d0aa4c  sub x10,x8,x10
7102d0aa50  cbz w2,0x7102d0aa40
7102d0aa54  cmp w2,#0x2
7102d0aa58  b.eq 0x7102d0aa74
7102d0aa5c  cmp w2,#0x1
7102d0aa60  b.ne 0x7102d0aa7c
7102d0aa64  tbnz w3,#0x3,0x7102d0aa88
7102d0aa68  ldr x11,[x0, #0x28]
7102d0aa6c  sub x11,x9,x11
7102d0aa70  b 0x7102d0aa90
7102d0aa74  mov x11,x10
7102d0aa78  b 0x7102d0aa90
7102d0aa7c  mov x1,#-0x1
7102d0aa80  mov x0,xzr
7102d0aa84  ret
7102d0aa88  ldp x11,x12,[x0, #0x10]
7102d0aa8c  sub x11,x12,x11
7102d0aa90  adds x11,x11,x1
7102d0aa94  mov x1,#-0x1
7102d0aa98  b.mi 0x7102d0aaec
7102d0aa9c  cmp x10,x11
7102d0aaa0  b.lt 0x7102d0aaec
7102d0aaa4  cbz x11,0x7102d0aac8
7102d0aaa8  tbz w3,#0x3,0x7102d0aab4
7102d0aaac  ldr x10,[x0, #0x18]
7102d0aab0  cbz x10,0x7102d0aaf4
7102d0aab4  tbz w3,#0x4,0x7102d0aac8
7102d0aab8  cbnz x9,0x7102d0aac8
7102d0aabc  mov x1,#-0x1
7102d0aac0  mov x0,xzr
7102d0aac4  ret
7102d0aac8  tbz w3,#0x3,0x7102d0aad8
7102d0aacc  ldr x9,[x0, #0x10]
7102d0aad0  add x9,x9,x11
7102d0aad4  stp x9,x8,[x0, #0x18]
7102d0aad8  tbz w3,#0x4,0x7102d0aae8
7102d0aadc  ldr x8,[x0, #0x28]
7102d0aae0  add x8,x8,w11, SXTW 
7102d0aae4  str x8,[x0, #0x30]
7102d0aae8  mov x1,x11
7102d0aaec  mov x0,xzr
7102d0aaf0  ret
7102d0aaf4  mov x1,#-0x1
7102d0aaf8  mov x0,xzr
7102d0aafc  ret
