// addr:      7101c4e850
// offset:    0x1c4e850
// name:      FUN_7101c4e850
// mangled:   
// size:      356

7101c4e850  sub sp,sp,#0x50
7101c4e854  str x21,[sp, #0x20]
7101c4e858  stp x20,x19,[sp, #0x30]
7101c4e85c  stp x29,x30,[sp, #0x40]
7101c4e860  add x29,sp,#0x40
7101c4e864  adrp x8,0x710532f000
7101c4e868  mov x19,x0
7101c4e86c  ldr x0,[x8, #0x7c8]
7101c4e870  bl 0x71032e5bf0
7101c4e874  add x0,x19,#0x2d0
7101c4e878  adrp x1,0x71042d6000
7101c4e87c  add x1,x1,#0x3b4
7101c4e880  add x8,sp,#0x8
7101c4e884  add x20,sp,#0x8
7101c4e888  bl 0x71037780e0
7101c4e88c  mov w0,#0x10
7101c4e890  mov w1,#0x10
7101c4e894  bl 0x710392e290
7101c4e898  cbnz x0,0x7101c4e8e0
7101c4e89c  adrp x8,0x7105332000
7101c4e8a0  ldr x0,[x8, #0xf00]
7101c4e8a4  cbz x0,0x7101c4e8dc
7101c4e8a8  mov w8,#0x10
7101c4e8ac  stur wzr,[x29, #-0x14]
7101c4e8b0  sub x1,x29,#0x14
7101c4e8b4  str x8,[sp, #0x18]
7101c4e8b8  ldr x8,[x0]
7101c4e8bc  ldr x8,[x8, #0x30]
7101c4e8c0  add x2,sp,#0x18
7101c4e8c4  blr x8
7101c4e8c8  tbz w0,#0x0,0x7101c4e8dc
7101c4e8cc  mov w0,#0x10
7101c4e8d0  mov w1,#0x10
7101c4e8d4  bl 0x710392e290
7101c4e8d8  cbnz x0,0x7101c4e8e0
7101c4e8dc  mov x0,xzr
7101c4e8e0  adrp x21,0x710523d000
7101c4e8e4  add x21,x21,#0x9e8
7101c4e8e8  cmp x20,x0
7101c4e8ec  stp x21,xzr,[x0]
7101c4e8f0  b.eq 0x7101c4e900
7101c4e8f4  ldr x8,[sp, #0x10]
7101c4e8f8  str xzr,[sp, #0x10]
7101c4e8fc  str x8,[x0, #0x8]
7101c4e900  ldr x8,[x19, #0x1ae8]
7101c4e904  str x0,[x19, #0x1ae8]
7101c4e908  cbz x8,0x7101c4e91c
7101c4e90c  ldr x9,[x8]
7101c4e910  ldr x9,[x9, #0x8]
7101c4e914  mov x0,x8
7101c4e918  blr x9
7101c4e91c  ldr x0,[sp, #0x10]
7101c4e920  stp x21,xzr,[sp, #0x8]
7101c4e924  cbz x0,0x7101c4e92c
7101c4e928  bl 0x710392eb40
7101c4e92c  ldr x0,[x19, #0x1ae8]
7101c4e930  fmov s0,0x3f800000
7101c4e934  bl 0x710377aee0
7101c4e938  add x9,x19,#0x16c
7101c4e93c  stp xzr,xzr,[x19, #0x28]
7101c4e940  str xzr,[x9]
7101c4e944  add x9,x19,#0x164
7101c4e948  add x8,x19,#0x12c
7101c4e94c  str xzr,[x9]
7101c4e950  add x9,x19,#0x15c
7101c4e954  ldr x21,[sp, #0x20]
7101c4e958  str xzr,[x9]
7101c4e95c  add x9,x19,#0x154
7101c4e960  str xzr,[x9]
7101c4e964  add x9,x19,#0x14c
7101c4e968  str xzr,[x9]
7101c4e96c  add x9,x19,#0x144
7101c4e970  str xzr,[x9]
7101c4e974  add x9,x19,#0x13c
7101c4e978  str xzr,[x9]
7101c4e97c  add x9,x19,#0x134
7101c4e980  str xzr,[x8]
7101c4e984  mov w8,#0xffffffff
7101c4e988  str xzr,[x9]
7101c4e98c  str x8,[x19, #0x178]
7101c4e990  str w8,[x19, #0x180]
7101c4e994  mov w8,#0x9
7101c4e998  str wzr,[x19, #0x174]
7101c4e99c  strb wzr,[x19, #0x184]
7101c4e9a0  str w8,[x19, #0x128]
7101c4e9a4  ldp x29,x30,[sp, #0x40]
7101c4e9a8  ldp x20,x19,[sp, #0x30]
7101c4e9ac  add sp,sp,#0x50
7101c4e9b0  ret
