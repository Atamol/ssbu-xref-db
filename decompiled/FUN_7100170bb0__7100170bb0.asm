// addr:      7100170bb0
// offset:    0x170bb0
// name:      FUN_7100170bb0
// mangled:   
// size:      132

7100170bb0  sub sp,sp,#0x30
7100170bb4  stp x20,x19,[sp, #0x10]
7100170bb8  stp x29,x30,[sp, #0x20]
7100170bbc  add x29,sp,#0x20
7100170bc0  mov x19,x0
7100170bc4  add x0,sp,#0x8
7100170bc8  str xzr,[sp, #0x8]
7100170bcc  bl 0x71000bb5d0
7100170bd0  ldr x8,[sp, #0x8]
7100170bd4  ldr x9,[x19, #0x98]
7100170bd8  sub x20,x8,x9
7100170bdc  bl 0x71000bb680
7100170be0  ldr x8,[x0]
7100170be4  sdiv x8,x20,x8
7100170be8  ldrsw x9,[x19, #0x8c]
7100170bec  cmp x8,x9
7100170bf0  b.ge 0x7100170c08
7100170bf4  mov w0,#0x5
7100170bf8  ldp x29,x30,[sp, #0x20]
7100170bfc  ldp x20,x19,[sp, #0x10]
7100170c00  add sp,sp,#0x30
7100170c04  ret
7100170c08  mov w8,#0x50
7100170c0c  mov w9,#0x1
7100170c10  mov x0,xzr
7100170c14  stp x8,x9,[x19, #0x30]
7100170c18  adrp x8,0x7104400000
7100170c1c  add x8,x8,#0x7d1
7100170c20  str x8,[x19, #0x40]
7100170c24  ldp x29,x30,[sp, #0x20]
7100170c28  ldp x20,x19,[sp, #0x10]
7100170c2c  add sp,sp,#0x30
7100170c30  ret
