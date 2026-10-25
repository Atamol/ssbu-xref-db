// addr:      7101e5cdb0
// offset:    0x1e5cdb0
// name:      FUN_7101e5cdb0
// mangled:   
// size:      304

7101e5cdb0  sub sp,sp,#0x50
7101e5cdb4  str x21,[sp, #0x20]
7101e5cdb8  stp x20,x19,[sp, #0x30]
7101e5cdbc  stp x29,x30,[sp, #0x40]
7101e5cdc0  add x29,sp,#0x40
7101e5cdc4  mov x19,x0
7101e5cdc8  add x0,x0,#0x1f8
7101e5cdcc  adrp x1,0x710439d000
7101e5cdd0  add x1,x1,#0xa27
7101e5cdd4  add x8,sp,#0x8
7101e5cdd8  add x20,sp,#0x8
7101e5cddc  bl 0x71037780e0
7101e5cde0  mov w0,#0x10
7101e5cde4  mov w1,#0x10
7101e5cde8  bl 0x710392e290
7101e5cdec  cbnz x0,0x7101e5ce34
7101e5cdf0  adrp x8,0x7105332000
7101e5cdf4  ldr x0,[x8, #0xf00]
7101e5cdf8  cbz x0,0x7101e5ce30
7101e5cdfc  mov w8,#0x10
7101e5ce00  stur wzr,[x29, #-0x14]
7101e5ce04  sub x1,x29,#0x14
7101e5ce08  str x8,[sp, #0x18]
7101e5ce0c  ldr x8,[x0]
7101e5ce10  ldr x8,[x8, #0x30]
7101e5ce14  add x2,sp,#0x18
7101e5ce18  blr x8
7101e5ce1c  tbz w0,#0x0,0x7101e5ce30
7101e5ce20  mov w0,#0x10
7101e5ce24  mov w1,#0x10
7101e5ce28  bl 0x710392e290
7101e5ce2c  cbnz x0,0x7101e5ce34
7101e5ce30  mov x0,xzr
7101e5ce34  adrp x21,0x710523d000
7101e5ce38  add x21,x21,#0x9e8
7101e5ce3c  cmp x20,x0
7101e5ce40  stp x21,xzr,[x0]
7101e5ce44  b.eq 0x7101e5ce54
7101e5ce48  ldr x8,[sp, #0x10]
7101e5ce4c  str xzr,[sp, #0x10]
7101e5ce50  str x8,[x0, #0x8]
7101e5ce54  ldr x8,[x19, #0x368]
7101e5ce58  str x0,[x19, #0x368]
7101e5ce5c  cbz x8,0x7101e5ce70
7101e5ce60  ldr x9,[x8]
7101e5ce64  ldr x9,[x9, #0x8]
7101e5ce68  mov x0,x8
7101e5ce6c  blr x9
7101e5ce70  ldr x0,[sp, #0x10]
7101e5ce74  stp x21,xzr,[sp, #0x8]
7101e5ce78  cbz x0,0x7101e5ce80
7101e5ce7c  bl 0x710392eb40
7101e5ce80  ldr x0,[x19, #0x368]
7101e5ce84  fmov s0,0x3f800000
7101e5ce88  bl 0x710377aee0
7101e5ce8c  add x8,x19,#0x1e4
7101e5ce90  orr x9,xzr,#-0x100000000
7101e5ce94  str wzr,[x19, #0x1d8]
7101e5ce98  stp xzr,xzr,[x19, #0x10]
7101e5ce9c  stp xzr,xzr,[x19, #0x1c8]
7101e5cea0  stp xzr,xzr,[x19, #0x1b8]
7101e5cea4  stp xzr,xzr,[x19, #0x1a8]
7101e5cea8  stp xzr,xzr,[x19, #0x198]
7101e5ceac  ldr x21,[sp, #0x20]
7101e5ceb0  str x9,[x8]
7101e5ceb4  mov x8,#0x15
7101e5ceb8  movk x8,#0x14, LSL #32
7101e5cebc  orr x9,xzr,#-0xffffffff
7101e5cec0  str x8,[x19, #0x190]
7101e5cec4  add x8,x19,#0x1dc
7101e5cec8  strb wzr,[x19, #0x1ec]
7101e5cecc  str x9,[x8]
7101e5ced0  ldp x29,x30,[sp, #0x40]
7101e5ced4  ldp x20,x19,[sp, #0x30]
7101e5ced8  add sp,sp,#0x50
7101e5cedc  ret
