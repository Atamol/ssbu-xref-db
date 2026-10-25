// addr:      7101e5b7d0
// offset:    0x1e5b7d0
// name:      FUN_7101e5b7d0
// mangled:   
// size:      520

7101e5b7d0  stp x24,x23,[sp, #-0x40]!
7101e5b7d4  stp x22,x21,[sp, #0x10]
7101e5b7d8  stp x20,x19,[sp, #0x20]
7101e5b7dc  stp x29,x30,[sp, #0x30]
7101e5b7e0  add x29,sp,#0x30
7101e5b7e4  ldrb w8,[x0, #0x381]
7101e5b7e8  mov x19,x0
7101e5b7ec  cbz w8,0x7101e5b970
7101e5b7f0  ldrb w20,[x19, #0x382]
7101e5b7f4  cmp x20,#0x3
7101e5b7f8  b.hi 0x7101e5b9c4
7101e5b7fc  ldr x8,[x19, #0x208]
7101e5b800  add x9,x8,x20, LSL #0x3
7101e5b804  ldr x9,[x9, #0x48]
7101e5b808  mov w22,w20
7101e5b80c  cbz x9,0x7101e5b850
7101e5b810  ldrb w9,[x9, #0xb3]
7101e5b814  mov w22,w20
7101e5b818  cbz w9,0x7101e5b850
7101e5b81c  ldrb w9,[x19, #0x210]
7101e5b820  sub w9,w9,#0x1
7101e5b824  cmp w9,w20
7101e5b828  csinc w22,wzr,w20,le
7101e5b82c  and w9,w22,#0xff
7101e5b830  cmp w9,#0x3
7101e5b834  b.hi 0x7101e5b84c
7101e5b838  add x8,x8,w22, UXTB  #0x3
7101e5b83c  ldr x8,[x8, #0x48]
7101e5b840  cbz x8,0x7101e5b84c
7101e5b844  ldrb w8,[x8, #0xb3]
7101e5b848  cbnz w8,0x7101e5b850
7101e5b84c  mov w22,w20
7101e5b850  add x21,x19,#0x208
7101e5b854  cmp w20,#0x3
7101e5b858  b.hi 0x7101e5b88c
7101e5b85c  ldrb w8,[x19, #0x212]
7101e5b860  cbz w8,0x7101e5b88c
7101e5b864  ldr x8,[x21]
7101e5b868  add x8,x8,x20, LSL #0x3
7101e5b86c  ldr x23,[x8, #0x48]
7101e5b870  cbz x23,0x7101e5b88c
7101e5b874  ldr x0,[x23, #0x8]
7101e5b878  fmov s0,0x3f800000
7101e5b87c  adrp x1,0x710438d000
7101e5b880  add x1,x1,#0x258
7101e5b884  bl 0x7103778300
7101e5b888  strb wzr,[x23, #0xb1]
7101e5b88c  mov x0,x21
7101e5b890  mov w1,w20
7101e5b894  bl 0x7101e9b720
7101e5b898  add x21,x19,x20, LSL #0x2
7101e5b89c  ldrh w2,[x21, #0x354]
7101e5b8a0  orr w23,wzr,#0xffff
7101e5b8a4  cmp x2,x23
7101e5b8a8  b.eq 0x7101e5b8d4
7101e5b8ac  adrp x8,0x7105329000
7101e5b8b0  ldr x8,[x8, #0xf98]
7101e5b8b4  ldr x8,[x8]
7101e5b8b8  ldr x0,[x8, #0x20]
7101e5b8bc  ldrb w1,[x21, #0x356]
7101e5b8c0  mov w3,wzr
7101e5b8c4  add x24,x21,#0x354
7101e5b8c8  bl 0x710259c720
7101e5b8cc  strh w23,[x24]
7101e5b8d0  strb wzr,[x21, #0x356]
7101e5b8d4  ldr x8,[x19, #0x378]
7101e5b8d8  add x8,x8,x20, LSL #0x4
7101e5b8dc  mov w9,#0x3b
7101e5b8e0  str w9,[x8, #0xb0]
7101e5b8e4  stur xzr,[x8, #0xa4]
7101e5b8e8  orr w8,wzr,#0x30
7101e5b8ec  madd x21,x20,x8,x19
7101e5b8f0  ldr x0,[x21, #0x220]
7101e5b8f4  fmov s0,0x3f800000
7101e5b8f8  adrp x1,0x71043ef000
7101e5b8fc  add x1,x1,#0x74a
7101e5b900  bl 0x7103778300
7101e5b904  ldr x8,[x21, #0x240]
7101e5b908  ldr x0,[x8]
7101e5b90c  mov w1,wzr
7101e5b910  bl 0x710377aa20
7101e5b914  ldr x0,[x19, #0x390]
7101e5b918  add x8,x19,#0x388
7101e5b91c  b 0x7101e5b924
7101e5b920  ldr x0,[x0, #0x8]
7101e5b924  cmp x8,x0
7101e5b928  b.eq 0x7101e5b964
7101e5b92c  ldrb w9,[x0, #0x10]
7101e5b930  cmp w9,w20
7101e5b934  b.ne 0x7101e5b920
7101e5b938  cmp x8,x0
7101e5b93c  b.eq 0x7101e5b964
7101e5b940  ldp x8,x9,[x0]
7101e5b944  str x9,[x8, #0x8]
7101e5b948  ldp x8,x9,[x0]
7101e5b94c  str x8,[x9]
7101e5b950  ldr x8,[x19, #0x398]
7101e5b954  sub x8,x8,#0x1
7101e5b958  str x8,[x19, #0x398]
7101e5b95c  cbz x0,0x7101e5b964
7101e5b960  bl 0x710392eb40
7101e5b964  mov w8,#0x1
7101e5b968  strb w22,[x19, #0x382]
7101e5b96c  strb w8,[x19, #0x381]
7101e5b970  add x8,x19,#0x1e4
7101e5b974  orr x9,xzr,#-0x100000000
7101e5b978  str wzr,[x19, #0x1d8]
7101e5b97c  stp xzr,xzr,[x19, #0x10]
7101e5b980  stp xzr,xzr,[x19, #0x1c8]
7101e5b984  stp xzr,xzr,[x19, #0x1b8]
7101e5b988  stp xzr,xzr,[x19, #0x1a8]
7101e5b98c  stp xzr,xzr,[x19, #0x198]
7101e5b990  str x9,[x8]
7101e5b994  mov x8,#0x15
7101e5b998  movk x8,#0x13, LSL #32
7101e5b99c  orr x9,xzr,#-0xffffffff
7101e5b9a0  str x8,[x19, #0x190]
7101e5b9a4  add x8,x19,#0x1dc
7101e5b9a8  strb wzr,[x19, #0x1ec]
7101e5b9ac  str x9,[x8]
7101e5b9b0  ldp x29,x30,[sp, #0x30]
7101e5b9b4  ldp x20,x19,[sp, #0x20]
7101e5b9b8  ldp x22,x21,[sp, #0x10]
7101e5b9bc  ldp x24,x23,[sp], #0x40
7101e5b9c0  ret
7101e5b9c4  add x0,x19,#0x208
7101e5b9c8  mov w1,w20
7101e5b9cc  bl 0x7101e9b720
7101e5b9d0  cmp w20,#0x4
7101e5b9d4  bl 0x71039c2650
