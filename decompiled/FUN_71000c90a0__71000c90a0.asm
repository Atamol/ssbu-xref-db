// addr:      71000c90a0
// offset:    0xc90a0
// name:      FUN_71000c90a0
// mangled:   
// size:      180

71000c90a0  sub sp,sp,#0x30
71000c90a4  str x19,[sp, #0x10]
71000c90a8  stp x29,x30,[sp, #0x20]
71000c90ac  add x29,sp,#0x20
71000c90b0  mov x19,x0
71000c90b4  ldr x0,[x0, #0x68]
71000c90b8  ldr x8,[x0]
71000c90bc  ldr x8,[x8, #0x18]
71000c90c0  blr x8
71000c90c4  tbz w0,#0x0,0x71000c90fc
71000c90c8  ldr x0,[x19, #0x68]
71000c90cc  mov x8,sp
71000c90d0  bl 0x71000c7c80
71000c90d4  ldr w8,[sp]
71000c90d8  cbz w8,0x71000c9128
71000c90dc  mov w8,#0x1
71000c90e0  strb w8,[x19, #0x90]
71000c90e4  adrp x8,0x71052a4000
71000c90e8  ldr x8,[x8, #0xe60]
71000c90ec  orr w0,wzr,#0x6
71000c90f0  adrp x9,0x7104442000
71000c90f4  add x9,x9,#0x931
71000c90f8  b 0x71000c913c
71000c90fc  adrp x8,0x71052a4000
71000c9100  ldr x8,[x8, #0xe68]
71000c9104  mov x0,xzr
71000c9108  stp x8,xzr,[x19, #0x30]
71000c910c  adrp x8,0x71042f6000
71000c9110  add x8,x8,#0xe70
71000c9114  str x8,[x19, #0x40]
71000c9118  ldp x29,x30,[sp, #0x20]
71000c911c  ldr x19,[sp, #0x10]
71000c9120  add sp,sp,#0x30
71000c9124  ret
71000c9128  adrp x8,0x71052a4000
71000c912c  ldr x8,[x8, #0xe58]
71000c9130  mov x0,xzr
71000c9134  adrp x9,0x7104349000
71000c9138  add x9,x9,#0x522
71000c913c  stp x8,xzr,[x19, #0x30]
71000c9140  str x9,[x19, #0x40]
71000c9144  ldp x29,x30,[sp, #0x20]
71000c9148  ldr x19,[sp, #0x10]
71000c914c  add sp,sp,#0x30
71000c9150  ret
