// addr:      71001e5da0
// offset:    0x1e5da0
// name:      FUN_71001e5da0
// mangled:   
// size:      240

71001e5da0  sub sp,sp,#0x70
71001e5da4  str x23,[sp, #0x30]
71001e5da8  stp x22,x21,[sp, #0x40]
71001e5dac  stp x20,x19,[sp, #0x50]
71001e5db0  stp x29,x30,[sp, #0x60]
71001e5db4  add x29,sp,#0x60
71001e5db8  adrp x8,0x71052a4000
71001e5dbc  ldr x8,[x8, #0xda8]
71001e5dc0  adrp x23,0x71052a4000
71001e5dc4  ldrb w8,[x8]
71001e5dc8  ldr x23,[x23, #0xdb0]
71001e5dcc  mov x20,x2
71001e5dd0  mov w19,w1
71001e5dd4  mov x21,x0
71001e5dd8  add x22,x23,#0x28
71001e5ddc  cbz w8,0x71001e5e18
71001e5de0  adrp x8,0x71052a4000
71001e5de4  ldr x8,[x8, #0xdb8]
71001e5de8  ldr x0,[x8]
71001e5dec  bl 0x7101717960
71001e5df0  ldr w8,[x0]
71001e5df4  cbz w8,0x71001e5e18
71001e5df8  ldr x10,[x23, #0xa0]
71001e5dfc  ldp x9,x10,[x10]
71001e5e00  sub x10,x10,x9
71001e5e04  asr x10,x10,#0x3
71001e5e08  cmp x10,x8
71001e5e0c  b.ls 0x71001e5e78
71001e5e10  ldr x8,[x9, x8, LSL #0x3]
71001e5e14  add x22,x8,#0x20
71001e5e18  ldr x8,[x22]
71001e5e1c  ldr x8,[x8, #0x10]
71001e5e20  ldr x0,[x8, #0x18]
71001e5e24  ldr w1,[x21, #0x238]
71001e5e28  bl 0x71001cd7d0
71001e5e2c  cbz x0,0x71001e5e60
71001e5e30  ldp x8,x9,[x20]
71001e5e34  ldr x10,[x20, #0x10]
71001e5e38  str x8,[sp]
71001e5e3c  mov x8,x10
71001e5e40  add x2,sp,#0x18
71001e5e44  stp x9,x10,[sp, #0x8]
71001e5e48  mov w3,#0x1
71001e5e4c  stp x9,x8,[sp, #0x20]
71001e5e50  ldr x8,[sp]
71001e5e54  mov w1,w19
71001e5e58  str x8,[sp, #0x18]
71001e5e5c  bl 0x71001d0f00
71001e5e60  ldp x29,x30,[sp, #0x60]
71001e5e64  ldr x23,[sp, #0x30]
71001e5e68  ldp x20,x19,[sp, #0x50]
71001e5e6c  ldp x22,x21,[sp, #0x40]
71001e5e70  add sp,sp,#0x70
71001e5e74  ret
71001e5e78  adrp x0,0x71042c4000
71001e5e7c  add x0,x0,#0x35f
71001e5e80  mov w1,#0x47
71001e5e84  orr w2,wzr,#0xe0000003
71001e5e88  mov w3,wzr
71001e5e8c  bl 0x71001b1300
