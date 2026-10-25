// addr:      71000bc930
// offset:    0xbc930
// name:      FUN_71000bc930
// mangled:   
// size:      340

71000bc930  sub sp,sp,#0x50
71000bc934  str x23,[sp, #0x10]
71000bc938  stp x22,x21,[sp, #0x20]
71000bc93c  stp x20,x19,[sp, #0x30]
71000bc940  stp x29,x30,[sp, #0x40]
71000bc944  add x29,sp,#0x40
71000bc948  mov x19,x8
71000bc94c  cbz x1,0x71000bc978
71000bc950  mov w20,w2
71000bc954  cbz w2,0x71000bc978
71000bc958  cmp w3,#0xa
71000bc95c  b.cs 0x71000bc978
71000bc960  and w8,w4,#0xfffffff8
71000bc964  cmp w8,#0x8
71000bc968  b.ne 0x71000bc978
71000bc96c  sub w8,w5,#0x1
71000bc970  cmp w8,#0x9
71000bc974  b.cc 0x71000bc9c8
71000bc978  mov w8,#0xc07
71000bc97c  movk w8,#0x1, LSL #16
71000bc980  str w8,[sp]
71000bc984  mov x8,sp
71000bc988  orr x20,x8,#0x4
71000bc98c  mov x0,x20
71000bc990  bl 0x71039c0a80
71000bc994  add x1,sp,#0x18
71000bc998  mov x0,x20
71000bc99c  str wzr,[sp, #0x18]
71000bc9a0  bl 0x71039c0a90
71000bc9a4  mov x1,sp
71000bc9a8  mov x0,x19
71000bc9ac  bl 0x71000bce50
71000bc9b0  ldp x29,x30,[sp, #0x40]
71000bc9b4  ldr x23,[sp, #0x10]
71000bc9b8  ldp x20,x19,[sp, #0x30]
71000bc9bc  ldp x22,x21,[sp, #0x20]
71000bc9c0  add sp,sp,#0x50
71000bc9c4  ret
71000bc9c8  ldr w8,[x0, #0x10]
71000bc9cc  mov x22,x0
71000bc9d0  cbz w8,0x71000bc9e4
71000bc9d4  mov w8,#0xc07
71000bc9d8  movk w8,#0x1, LSL #16
71000bc9dc  add w8,w8,#0x1
71000bc9e0  b 0x71000bc980
71000bc9e4  ldr x8,[x22]
71000bc9e8  cbz x8,0x71000bc9d4
71000bc9ec  adrp x8,0x71052a4000
71000bc9f0  adrp x9,0x71052a4000
71000bc9f4  adrp x6,0x7104339000
71000bc9f8  add x6,x6,#0x8b
71000bc9fc  ldr x8,[x8, #0xd00]
71000bca00  ldr x9,[x9, #0xd08]
71000bca04  add x23,x22,#0x20
71000bca08  mov x21,x1
71000bca0c  mov w2,#0x8
71000bca10  orr w7,wzr,#0x70
71000bca14  mov x0,x23
71000bca18  str x22,[x22, #0x70]
71000bca1c  mov w1,w3
71000bca20  mov w3,w4
71000bca24  mov w4,w5
71000bca28  mov w5,wzr
71000bca2c  stp x8,x9,[x22, #0x60]
71000bca30  bl 0x710002b820
71000bca34  cmn w0,#0x4
71000bca38  b.eq 0x71000bca6c
71000bca3c  cbnz w0,0x71000bca7c
71000bca40  mov w1,#0x80
71000bca44  mov x0,x23
71000bca48  bl 0x710002d920
71000bca4c  sub x8,x0,#0x80
71000bca50  str x8,[x22, #0x18]
71000bca54  mov x8,sp
71000bca58  str x21,[x22, #0x38]
71000bca5c  str w20,[x22, #0x40]
71000bca60  orr x20,x8,#0x4
71000bca64  str wzr,[sp]
71000bca68  b 0x71000bc98c
71000bca6c  mov w8,#0xc07
71000bca70  movk w8,#0x1, LSL #16
71000bca74  sub w8,w8,#0x6
71000bca78  b 0x71000bc980
71000bca7c  mov w8,#0xc0b
71000bca80  b 0x71000bc980
