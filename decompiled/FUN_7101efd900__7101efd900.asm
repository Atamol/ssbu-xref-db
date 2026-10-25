// addr:      7101efd900
// offset:    0x1efd900
// name:      FUN_7101efd900
// mangled:   
// size:      556

7101efd900  sub sp,sp,#0x80
7101efd904  stp x24,x23,[sp, #0x40]
7101efd908  stp x22,x21,[sp, #0x50]
7101efd90c  stp x20,x19,[sp, #0x60]
7101efd910  stp x29,x30,[sp, #0x70]
7101efd914  add x29,sp,#0x70
7101efd918  ldr w8,[x0]
7101efd91c  cmp w8,#0x2
7101efd920  b.cs 0x7101efdb20
7101efd924  adrp x24,0x7105328000
7101efd928  ldr x9,[x24, #0xe18]
7101efd92c  ldr x9,[x9]
7101efd930  mov w21,#0x1b8
7101efd934  madd x10,x8,x21,x9
7101efd938  ldrsw x22,[x10, #0x28]
7101efd93c  ldr x11,[x0, #0x238]
7101efd940  ldr x10,[x0, #0x230]
7101efd944  sub x11,x11,x10
7101efd948  asr x11,x11,#0x4
7101efd94c  mov x19,x0
7101efd950  add x20,x0,#0x230
7101efd954  cmp x11,x22
7101efd958  b.ls 0x7101efdb24
7101efd95c  lsl x23,x22,#0x4
7101efd960  ldr x10,[x10, x23, LSL #0x0]
7101efd964  ldr w11,[x19, #0x1fc]
7101efd968  ldr x10,[x10]
7101efd96c  cbz w11,0x7101efd990
7101efd970  ldr w8,[x10, #0x200]
7101efd974  cbnz w8,0x7101efdb08
7101efd978  ldrsw x8,[x19, #0x1f4]
7101efd97c  cmp w8,#0x13
7101efd980  b.cs 0x7101efdb20
7101efd984  add x8,x19,x8, LSL #0x2
7101efd988  str wzr,[x8, #0x1a8]
7101efd98c  b 0x7101efdb08
7101efd990  ldrb w11,[x10, #0x275]
7101efd994  cbz w11,0x7101efd9c0
7101efd998  ldr x0,[x10, #0x228]
7101efd99c  adrp x1,0x710434a000
7101efd9a0  add x1,x1,#0xbb9
7101efd9a4  strb wzr,[x10, #0x275]
7101efd9a8  bl 0x7103778760
7101efd9ac  ldr w8,[x19]
7101efd9b0  cmp w8,#0x2
7101efd9b4  b.cs 0x7101efdb20
7101efd9b8  ldr x9,[x24, #0xe18]
7101efd9bc  ldr x9,[x9]
7101efd9c0  cmp w22,#0x5
7101efd9c4  b.cs 0x7101efdb20
7101efd9c8  ldr x11,[x19, #0x238]
7101efd9cc  ldr x10,[x19, #0x230]
7101efd9d0  sub x11,x11,x10
7101efd9d4  asr x11,x11,#0x4
7101efd9d8  cmp x11,x22
7101efd9dc  b.ls 0x7101efdb24
7101efd9e0  and x11,x22,#0xffffffff
7101efd9e4  umaddl x8,w8,w21,x9
7101efd9e8  mov w9,#0x50
7101efd9ec  madd x9,x11,x9,x8
7101efd9f0  ldr x10,[x10, x23, LSL #0x0]
7101efd9f4  ldr x8,[x10]
7101efd9f8  orr x10,xzr,#0x100000000
7101efd9fc  ldr w9,[x9, #0x68]
7101efda00  mov w11,#0xffffffff
7101efda04  stp xzr,xzr,[x8, #0x20]
7101efda08  stp xzr,xzr,[x8, #0x1e8]
7101efda0c  strb wzr,[x8, #0x20c]
7101efda10  stp xzr,xzr,[x8, #0x1d8]
7101efda14  str wzr,[x8, #0x1b0]
7101efda18  stp xzr,xzr,[x8, #0x1c8]
7101efda1c  cmp w9,#0x1
7101efda20  stp xzr,xzr,[x8, #0x1b8]
7101efda24  str w11,[x8, #0x208]
7101efda28  stp x10,x11,[x8, #0x1f8]
7101efda2c  b.ne 0x7101efdac8
7101efda30  orr w9,wzr,#0xe
7101efda34  str w9,[x8, #0x1b4]
7101efda38  adrp x8,0x710532f000
7101efda3c  ldr x8,[x8, #0x8d0]
7101efda40  ldr x0,[x8, #0x8]
7101efda44  ldrb w8,[x0, #0x191]
7101efda48  cbnz w8,0x7101efdad4
7101efda4c  mov x19,#0x40ab
7101efda50  movk x19,#0x44b8, LSL #16
7101efda54  movk x19,#0x14, LSL #32
7101efda58  mov w2,#0x4
7101efda5c  mov x1,x19
7101efda60  bl 0x7103313f20
7101efda64  tbz w0,#0x0,0x7101efdad4
7101efda68  mov x0,sp
7101efda6c  mov x1,x19
7101efda70  bl 0x71024076d0
7101efda74  ldr x8,[sp, #0x10]
7101efda78  adrp x9,0x7104f73000
7101efda7c  add x9,x9,#0xd50
7101efda80  str x9,[sp, #0x8]
7101efda84  cbz x8,0x7101efdb00
7101efda88  adrp x8,0x7106dd5000
7101efda8c  ldrb w8,[x8, #0x3a8]
7101efda90  cmp w8,#0x1
7101efda94  b.ne 0x7101efdb00
7101efda98  adrp x9,0x7106dd5000
7101efda9c  ldr w8,[sp, #0x18]
7101efdaa0  ldr w9,[x9, #0x3ac]
7101efdaa4  cmp w8,w9
7101efdaa8  b.ne 0x7101efdb00
7101efdaac  ldr x8,[sp, #0x10]
7101efdab0  ldr wzr,[x8, #0x38]!
7101efdab4  ldaxr w9,[x8]
7101efdab8  sub w9,w9,#0x1
7101efdabc  stlxr w10,w9,[x8]
7101efdac0  cbnz w10,0x7101efdab4
7101efdac4  b 0x7101efdb00
7101efdac8  orr w9,wzr,#0xf
7101efdacc  str w9,[x8, #0x1b4]
7101efdad0  b 0x7101efdb08
7101efdad4  mov x8,#0x650000000000
7101efdad8  movk x8,#0x87, LSL #48
7101efdadc  strb wzr,[sp, #0x20]
7101efdae0  stp xzr,x8,[sp, #0x10]
7101efdae4  mov x8,#-0x1
7101efdae8  stp x8,xzr,[sp, #0x28]
7101efdaec  adrp x8,0x7104f73000
7101efdaf0  add x8,x8,#0xd50
7101efdaf4  str wzr,[sp]
7101efdaf8  str xzr,[sp, #0x38]
7101efdafc  str x8,[sp, #0x8]
7101efdb00  str xzr,[sp, #0x10]
7101efdb04  strb wzr,[sp, #0x20]
7101efdb08  ldp x29,x30,[sp, #0x70]
7101efdb0c  ldp x20,x19,[sp, #0x60]
7101efdb10  ldp x22,x21,[sp, #0x50]
7101efdb14  ldp x24,x23,[sp, #0x40]
7101efdb18  add sp,sp,#0x80
7101efdb1c  ret
7101efdb20  bl 0x71039c2650
7101efdb24  mov x0,x20
7101efdb28  bl 0x71039c1330
