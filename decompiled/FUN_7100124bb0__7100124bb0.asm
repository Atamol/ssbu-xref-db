// addr:      7100124bb0
// offset:    0x124bb0
// name:      FUN_7100124bb0
// mangled:   
// size:      132

7100124bb0  str x19,[sp, #-0x20]!
7100124bb4  stp x29,x30,[sp, #0x10]
7100124bb8  add x29,sp,#0x10
7100124bbc  adrp x8,0x71052a4000
7100124bc0  ldr x8,[x8, #0xdf0]
7100124bc4  mov x19,x0
7100124bc8  ldr x0,[x8]
7100124bcc  bl 0x7100193560
7100124bd0  strb w0,[x19, #0x90]
7100124bd4  mov x0,x19
7100124bd8  strb wzr,[x19, #0xb2]
7100124bdc  bl 0x7100124c40
7100124be0  ldr x8,[x19]
7100124be4  ldr x8,[x8, #0x70]
7100124be8  ldrb w1,[x19, #0x86]
7100124bec  mov x0,x19
7100124bf0  blr x8
7100124bf4  bl 0x71000bb680
7100124bf8  ldr x8,[x19, #0x58]
7100124bfc  ldr x9,[x0]
7100124c00  mov x11,#-0x3e8
7100124c04  madd x8,x9,x11,x8
7100124c08  adrp x10,0x71052a5000
7100124c0c  ldr x10,[x10, #0xad0]
7100124c10  stp x10,xzr,[x19, #0x30]
7100124c14  str x8,[x19, #0x58]
7100124c18  adrp x8,0x71042d5000
7100124c1c  add x8,x8,#0x5e0
7100124c20  str x8,[x19, #0x40]
7100124c24  ldp x29,x30,[sp, #0x10]
7100124c28  mov x0,xzr
7100124c2c  ldr x19,[sp], #0x20
7100124c30  ret
