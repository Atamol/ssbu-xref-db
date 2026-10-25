// addr:      710377ce60
// offset:    0x377ce60
// name:      FUN_710377ce60
// mangled:   
// size:      340

710377ce60  str d8,[sp, #-0x20]!
710377ce64  str x19,[sp, #0x8]
710377ce68  stp x29,x30,[sp, #0x10]
710377ce6c  add x29,sp,#0x10
710377ce70  ldr s8,[x0, #0x26c]
710377ce74  fcmp s8,#0.0
710377ce78  cset w8,gt
710377ce7c  mov x19,x0
710377ce80  strb w8,[x0, #0x315]
710377ce84  ldr x0,[x0, #0x190]
710377ce88  cbz x0,0x710377cec8
710377ce8c  adrp x1,0x7104453000
710377ce90  add x1,x1,#0xb4c
710377ce94  bl 0x71037964b0
710377ce98  cbz x0,0x710377cec4
710377ce9c  fcmp s8,#0.0
710377cea0  b.le 0x710377ceb8
710377cea4  ldr x8,[x0]
710377cea8  ldr x8,[x8, #0x180]
710377ceac  fmov s0,wzr
710377ceb0  blr x8
710377ceb4  b 0x710377cec4
710377ceb8  ldr x8,[x0]
710377cebc  ldr x8,[x8, #0x190]
710377cec0  blr x8
710377cec4  ldrb w8,[x19, #0x315]
710377cec8  ldr q0,[x19, #0x2e0]
710377cecc  cbz w8,0x710377cf20
710377ced0  ldr s1,[x19, #0x26c]
710377ced4  ldr s2,[x19, #0x268]
710377ced8  fsub s1,s1,s2
710377cedc  ldr s2,[x19, #0x270]
710377cee0  fdiv s1,s1,s2
710377cee4  fmov s2,0x3f800000
710377cee8  fadd s1,s1,s2
710377ceec  ldr s2,[x19, #0x224]
710377cef0  ldr s3,[x19, #0x220]
710377cef4  fsub s2,s2,s3
710377cef8  fdiv s1,s2,s1
710377cefc  fcmp s2,s1
710377cf00  fcsel s3,s2,s1,mi
710377cf04  fcmp s0,s3
710377cf08  b.pl 0x710377cf2c
710377cf0c  mov v1.16B,v0.16B
710377cf10  mov v1.S[0x0],v3.S[0x0]
710377cf14  fsub s3,s3,s0
710377cf18  fneg s3,s3
710377cf1c  b 0x710377cf34
710377cf20  ldr s1,[x19, #0x224]
710377cf24  ldr s2,[x19, #0x220]
710377cf28  fsub s2,s1,s2
710377cf2c  fmov s3,wzr
710377cf30  mov v1.16B,v0.16B
710377cf34  fsub s0,s1,s0
710377cf38  fmov s4,0x3f000000
710377cf3c  ldr s5,[x19, #0x2d4]
710377cf40  fmul s0,s0,s4
710377cf44  fadd s0,s5,s0
710377cf48  fadd s0,s3,s0
710377cf4c  fsub s2,s2,s1
710377cf50  ldr x8,[x19, #0x198]
710377cf54  str s0,[x19, #0x300]
710377cf58  str s2,[x19, #0x304]
710377cf5c  cbz x8,0x710377cf70
710377cf60  ldrb w9,[x8, #0x58]
710377cf64  orr w9,w9,#0x10
710377cf68  str s0,[x8, #0x34]
710377cf6c  strb w9,[x8, #0x58]
710377cf70  ldr x8,[x19, #0x1a0]
710377cf74  cbz x8,0x710377cf88
710377cf78  ldrb w9,[x8, #0x58]
710377cf7c  orr w9,w9,#0x10
710377cf80  str d1,[x8, #0x50]
710377cf84  strb w9,[x8, #0x58]
710377cf88  ldr x8,[x19, #0x198]
710377cf8c  cbz x8,0x710377cfa4
710377cf90  ldrb w10,[x8, #0x58]
710377cf94  ldrb w9,[x19, #0x315]
710377cf98  and w10,w10,#0xfe
710377cf9c  orr w9,w10,w9
710377cfa0  strb w9,[x8, #0x58]
710377cfa4  ldp x29,x30,[sp, #0x10]
710377cfa8  ldr x19,[sp, #0x8]
710377cfac  ldr d8,[sp], #0x20
710377cfb0  ret
