// addr:      71000d2ca0
// offset:    0xd2ca0
// name:      FUN_71000d2ca0
// mangled:   
// size:      276

71000d2ca0  sub sp,sp,#0x40
71000d2ca4  str x21,[sp, #0x10]
71000d2ca8  stp x20,x19,[sp, #0x20]
71000d2cac  stp x29,x30,[sp, #0x30]
71000d2cb0  add x29,sp,#0x30
71000d2cb4  mov x19,x8
71000d2cb8  cbz x1,0x71000d2d58
71000d2cbc  mov x20,x0
71000d2cc0  mov x0,x1
71000d2cc4  mov x21,x1
71000d2cc8  bl 0x71000b4160
71000d2ccc  tbz w0,#0x0,0x71000d2d64
71000d2cd0  adrp x8,0x71052a4000
71000d2cd4  ldr x8,[x8, #0xc70]
71000d2cd8  str x21,[x20, #0x58]
71000d2cdc  ldr x8,[x8]
71000d2ce0  ldr x8,[x8, #0x30]
71000d2ce4  str x8,[x20, #0x60]
71000d2ce8  mov x8,sp
71000d2cec  orr x21,x8,#0x4
71000d2cf0  mov x0,x21
71000d2cf4  str wzr,[sp]
71000d2cf8  bl 0x71039c0a80
71000d2cfc  add x1,sp,#0x18
71000d2d00  mov x0,x21
71000d2d04  str wzr,[sp, #0x18]
71000d2d08  bl 0x71039c0a90
71000d2d0c  add x0,x20,#0x68
71000d2d10  mov x1,sp
71000d2d14  bl 0x71000bcf30
71000d2d18  adrp x8,0x71052a4000
71000d2d1c  ldr x8,[x8, #0xf48]
71000d2d20  mov w1,#0x1
71000d2d24  stp x8,xzr,[x20, #0x30]
71000d2d28  adrp x8,0x7104290000
71000d2d2c  add x8,x8,#0xcae
71000d2d30  mov x0,x20
71000d2d34  str x8,[x20, #0x40]
71000d2d38  bl 0x71000baac0
71000d2d3c  mov x0,x21
71000d2d40  str wzr,[sp]
71000d2d44  bl 0x71039c0a80
71000d2d48  add x1,sp,#0x18
71000d2d4c  mov x0,x21
71000d2d50  str wzr,[sp, #0x18]
71000d2d54  b 0x71000d2d90
71000d2d58  mov w8,#0xc07
71000d2d5c  movk w8,#0x1, LSL #16
71000d2d60  b 0x71000d2d70
71000d2d64  mov w8,#0xc07
71000d2d68  movk w8,#0x1, LSL #16
71000d2d6c  add w8,w8,#0x1
71000d2d70  str w8,[sp]
71000d2d74  mov x8,sp
71000d2d78  orr x20,x8,#0x4
71000d2d7c  mov x0,x20
71000d2d80  bl 0x71039c0a80
71000d2d84  str wzr,[sp, #0x18]
71000d2d88  add x1,sp,#0x18
71000d2d8c  mov x0,x20
71000d2d90  bl 0x71039c0a90
71000d2d94  mov x1,sp
71000d2d98  mov x0,x19
71000d2d9c  bl 0x71000bce50
71000d2da0  ldp x29,x30,[sp, #0x30]
71000d2da4  ldr x21,[sp, #0x10]
71000d2da8  ldp x20,x19,[sp, #0x20]
71000d2dac  add sp,sp,#0x40
71000d2db0  ret
