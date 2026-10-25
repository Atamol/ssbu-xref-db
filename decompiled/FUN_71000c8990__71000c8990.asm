// addr:      71000c8990
// offset:    0xc8990
// name:      FUN_71000c8990
// mangled:   
// size:      252

71000c8990  sub sp,sp,#0x40
71000c8994  stp x20,x19,[sp, #0x20]
71000c8998  stp x29,x30,[sp, #0x30]
71000c899c  add x29,sp,#0x30
71000c89a0  ldr x8,[x0, #0x60]
71000c89a4  mov x19,x0
71000c89a8  cbz x8,0x71000c89e0
71000c89ac  ldrb w8,[x8, #0x28]
71000c89b0  cbz w8,0x71000c89e0
71000c89b4  adrp x8,0x71052a4000
71000c89b8  ldr x8,[x8, #0xe60]
71000c89bc  adrp x9,0x7104442000
71000c89c0  add x9,x9,#0x931
71000c89c4  str x9,[x19, #0x40]
71000c89c8  orr w0,wzr,#0x6
71000c89cc  stp x8,xzr,[x19, #0x30]
71000c89d0  ldp x29,x30,[sp, #0x30]
71000c89d4  ldp x20,x19,[sp, #0x20]
71000c89d8  add sp,sp,#0x40
71000c89dc  ret
71000c89e0  ldr x0,[x19, #0x68]
71000c89e4  add x8,sp,#0x10
71000c89e8  bl 0x71000c7d70
71000c89ec  ldr w8,[sp, #0x10]
71000c89f0  cbz w8,0x71000c8a4c
71000c89f4  ldr x20,[x19, #0x58]
71000c89f8  mov x0,sp
71000c89fc  add x1,sp,#0x10
71000c8a00  bl 0x71000bce50
71000c8a04  mov x1,sp
71000c8a08  mov x0,x20
71000c8a0c  bl 0x71000b41f0
71000c8a10  ldr x0,[x19, #0x68]
71000c8a14  ldr x8,[x0]
71000c8a18  ldr x8,[x8, #0x10]
71000c8a1c  blr x8
71000c8a20  str xzr,[x19, #0x68]
71000c8a24  bl 0x71000b30b0
71000c8a28  cbz x0,0x71000c8a78
71000c8a2c  bl 0x71000b30b0
71000c8a30  mov w1,wzr
71000c8a34  bl 0x71000b3870
71000c8a38  mov w0,#0x1
71000c8a3c  ldp x29,x30,[sp, #0x30]
71000c8a40  ldp x20,x19,[sp, #0x20]
71000c8a44  add sp,sp,#0x40
71000c8a48  ret
71000c8a4c  adrp x8,0x71052a4000
71000c8a50  ldr x8,[x8, #0xe68]
71000c8a54  mov x0,xzr
71000c8a58  stp x8,xzr,[x19, #0x30]
71000c8a5c  adrp x8,0x71042f6000
71000c8a60  add x8,x8,#0xe70
71000c8a64  str x8,[x19, #0x40]
71000c8a68  ldp x29,x30,[sp, #0x30]
71000c8a6c  ldp x20,x19,[sp, #0x20]
71000c8a70  add sp,sp,#0x40
71000c8a74  ret
71000c8a78  mov w0,#0x1
71000c8a7c  ldp x29,x30,[sp, #0x30]
71000c8a80  ldp x20,x19,[sp, #0x20]
71000c8a84  add sp,sp,#0x40
71000c8a88  ret
