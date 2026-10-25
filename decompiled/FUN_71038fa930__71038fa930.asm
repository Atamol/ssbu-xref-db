// addr:      71038fa930
// offset:    0x38fa930
// name:      FUN_71038fa930
// mangled:   
// size:      968

71038fa930  str x21,[sp, #-0x30]!
71038fa934  stp x20,x19,[sp, #0x10]
71038fa938  stp x29,x30,[sp, #0x20]
71038fa93c  add x29,sp,#0x20
71038fa940  mov x9,#0xf8ff
71038fa944  movk x9,#0x3fff, LSL #16
71038fa948  mov x10,#-0xfffe
71038fa94c  mov x19,x3
71038fa950  mov w8,#0xffffffff
71038fa954  movk x9,#0x35b8, LSL #32
71038fa958  movk x10,#0xfffe, LSL #16
71038fa95c  adrp x11,0x7104535000
71038fa960  add x11,x11,#0xf50
71038fa964  ldrsw x13,[x0, #0x24]
71038fa968  mov w12,w1
71038fa96c  cmp w13,#0x1
71038fa970  b.lt 0x71038fa9b4
71038fa974  ldr x16,[x0, #0x50]
71038fa978  mov x14,xzr
71038fa97c  add w15,w2,#0x1
71038fa980  add x16,x16,#0xc
71038fa984  ldur w17,[x16, #-0x4]
71038fa988  cmp w17,w12
71038fa98c  b.gt 0x71038fa9b4
71038fa990  ldr w17,[x16]
71038fa994  cmp w17,w12
71038fa998  b.le 0x71038fa9a4
71038fa99c  subs w15,w15,#0x1
71038fa9a0  b.eq 0x71038faa98
71038fa9a4  add x14,x14,#0x1
71038fa9a8  add x16,x16,#0x10
71038fa9ac  cmp x14,x13
71038fa9b0  b.lt 0x71038fa984
71038fa9b4  cmp w12,#0x1
71038fa9b8  str xzr,[x19]
71038fa9bc  b.lt 0x71038faa90
71038fa9c0  ldr x13,[x0, #0x38]
71038fa9c4  mov x14,xzr
71038fa9c8  mov w15,wzr
71038fa9cc  mov w1,w8
71038fa9d0  ldr w17,[x13, x14, LSL #0x2]
71038fa9d4  and w18,w17,#0x3f
71038fa9d8  sub w18,w18,#0x4
71038fa9dc  ubfx w16,w17,#0x6,#0x8
71038fa9e0  cmp w18,#0x25
71038fa9e4  b.hi 0x71038faa10
71038fa9e8  ldrsw x18,[x11, x18, LSL #0x2]
71038fa9ec  add x18,x18,x11
71038fa9f0  br x18
71038fa9f4  cmp x14,w15, SXTW 
71038fa9f8  csinv w18,w14,wzr,ge
71038fa9fc  cmp w16,w2
71038faa00  add w16,w16,w17, LSR #0x17
71038faa04  ccmp w16,w2,#0x8,le
71038faa08  csel w1,w1,w18,lt
71038faa0c  b 0x71038faa60
71038faa10  lsr x17,x9,x17
71038faa14  cmp x14,w15, SXTW 
71038faa18  and x17,x17,#0x1
71038faa1c  csinv w18,w14,wzr,ge
71038faa20  cmp w16,w2
71038faa24  ccmp x17,#0x0,#0x4,eq
71038faa28  csel w1,w1,w18,eq
71038faa2c  b 0x71038faa60
71038faa30  add x16,x14,x17, LSR #0xe
71038faa34  add x16,x16,x10
71038faa38  cmp x14,w16, SXTW 
71038faa3c  ccmp w16,w12,#0x0,lt
71038faa40  ccmp w16,w15,#0x4,le
71038faa44  csel w15,w16,w15,gt
71038faa48  b 0x71038faa60
71038faa4c  add w16,w16,#0x2
71038faa50  cmp x14,w15, SXTW 
71038faa54  csinv w17,w14,wzr,ge
71038faa58  cmp w16,w2
71038faa5c  csel w1,w1,w17,gt
71038faa60  add x14,x14,#0x1
71038faa64  cmp x12,x14
71038faa68  b.ne 0x71038fa9d0
71038faa6c  cmn w1,#0x1
71038faa70  b.eq 0x71038faa90
71038faa74  ldr w12,[x13, w1, SXTW #0x2]
71038faa78  ands w14,w12,#0x3f
71038faa7c  b.ne 0x71038faac0
71038faa80  ubfx x2,x12,#0x17,#0x9
71038faa84  ubfx x12,x12,#0x6,#0x1a
71038faa88  cmp w2,w12, UXTB 
71038faa8c  b.cc 0x71038fa964
71038faa90  mov x21,xzr
71038faa94  b 0x71038faaac
71038faa98  ldur x8,[x16, #-0xc]
71038faa9c  add x8,x8,#0x18
71038faaa0  str x8,[x19]
71038faaa4  adrp x21,0x7104421000
71038faaa8  add x21,x21,#0x58
71038faaac  ldp x29,x30,[sp, #0x20]
71038faab0  mov x0,x21
71038faab4  ldp x20,x19,[sp, #0x10]
71038faab8  ldr x21,[sp], #0x30
71038faabc  ret
71038faac0  sub w8,w14,#0x1
71038faac4  mov x21,xzr
71038faac8  cmp w8,#0xb
71038faacc  b.hi 0x71038faaac
71038faad0  adrp x9,0x7104535000
71038faad4  add x9,x9,#0xfe8
71038faad8  ldrsw x8,[x9, x8, LSL #0x2]
71038faadc  add x8,x8,x9
71038faae0  br x8
71038faae4  and w8,w12,#0x3f
71038faae8  cmp w8,#0x1
71038faaec  b.ne 0x71038fabe0
71038faaf0  ubfx x8,x12,#0xe,#0x12
71038faaf4  b 0x71038fabf0
71038faaf8  and w8,w12,#0x3f
71038faafc  lsr x10,x12,#0x17
71038fab00  cmp w8,#0x7
71038fab04  b.ne 0x71038fac24
71038fab08  ldrsw x8,[x0, #0x24]
71038fab0c  cmp w8,#0x1
71038fab10  b.lt 0x71038fab54
71038fab14  ldr x11,[x0, #0x50]
71038fab18  mov x9,xzr
71038fab1c  add w10,w10,#0x1
71038fab20  add x11,x11,#0xc
71038fab24  ldur w13,[x11, #-0x4]
71038fab28  cmp w13,w1
71038fab2c  b.gt 0x71038fab54
71038fab30  ldr w13,[x11]
71038fab34  cmp w13,w1
71038fab38  b.le 0x71038fab44
71038fab3c  subs w10,w10,#0x1
71038fab40  b.eq 0x71038face8
71038fab44  add x9,x9,#0x1
71038fab48  add x11,x11,#0x10
71038fab4c  cmp x9,x8
71038fab50  b.lt 0x71038fab24
71038fab54  mov x20,xzr
71038fab58  tbz w12,#0x16,0x71038fac48
71038fab5c  ldr x8,[x0, #0x30]
71038fab60  ubfx w9,w12,#0xe,#0x8
71038fab64  add x10,x8,w9, UXTW  #0x4
71038fab68  ldr w10,[x10, #0x8]
71038fab6c  and w10,w10,#0xf
71038fab70  cmp w10,#0x4
71038fab74  b.ne 0x71038fac64
71038fab78  lsl x9,x9,#0x4
71038fab7c  ldr x8,[x8, x9, LSL #0x0]
71038fab80  add x8,x8,#0x18
71038fab84  b 0x71038fac6c
71038fab88  ldr x9,[x0, #0x58]
71038fab8c  lsr x8,x12,#0x13
71038fab90  and x8,x8,#0x1ff0
71038fab94  ldr x8,[x9, x8, LSL #0x0]
71038fab98  adrp x9,0x7104307000
71038fab9c  add x9,x9,#0xa71
71038faba0  add x10,x8,#0x18
71038faba4  cmp x8,#0x0
71038faba8  csel x8,x9,x10,eq
71038fabac  str x8,[x19]
71038fabb0  adrp x21,0x7104348000
71038fabb4  add x21,x21,#0xeac
71038fabb8  b 0x71038faaac
71038fabbc  tbnz w12,#0x16,0x71038faca0
71038fabc0  ubfx w2,w12,#0xe,#0x9
71038fabc4  mov x3,x19
71038fabc8  bl 0x71038fa930
71038fabcc  cbz x0,0x71038facd0
71038fabd0  ldrb w8,[x0]
71038fabd4  cmp w8,#0x63
71038fabd8  b.eq 0x71038facdc
71038fabdc  b 0x71038facd0
71038fabe0  sxtw x8,w1
71038fabe4  add x8,x13,x8, LSL #0x2
71038fabe8  ldr w8,[x8, #0x4]
71038fabec  lsr w8,w8,#0x6
71038fabf0  ldr x9,[x0, #0x30]
71038fabf4  add x10,x9,w8, UXTW  #0x4
71038fabf8  ldr w10,[x10, #0x8]
71038fabfc  and w10,w10,#0xf
71038fac00  cmp w10,#0x4
71038fac04  b.ne 0x71038faa90
71038fac08  lsl x8,x8,#0x4
71038fac0c  ldr x8,[x9, x8, LSL #0x0]
71038fac10  add x8,x8,#0x18
71038fac14  str x8,[x19]
71038fac18  adrp x21,0x71043ac000
71038fac1c  add x21,x21,#0x469
71038fac20  b 0x71038faaac
71038fac24  ldr x8,[x0, #0x58]
71038fac28  lsl x9,x10,#0x4
71038fac2c  ldr x8,[x8, x9, LSL #0x0]
71038fac30  adrp x9,0x7104307000
71038fac34  add x9,x9,#0xa71
71038fac38  add x10,x8,#0x18
71038fac3c  cmp x8,#0x0
71038fac40  csel x20,x9,x10,eq
71038fac44  tbnz w12,#0x16,0x71038fab5c
71038fac48  ubfx w2,w12,#0xe,#0x9
71038fac4c  mov x3,x19
71038fac50  bl 0x71038fa930
71038fac54  cbz x0,0x71038fac64
71038fac58  ldrb w8,[x0]
71038fac5c  cmp w8,#0x63
71038fac60  b.eq 0x71038fac70
71038fac64  adrp x8,0x7104307000
71038fac68  add x8,x8,#0xa71
71038fac6c  str x8,[x19]
71038fac70  adrp x21,0x7104359000
71038fac74  add x21,x21,#0xf98
71038fac78  cbz x20,0x71038faaac
71038fac7c  adrp x1,0x710436a000
71038fac80  add x1,x1,#0xf58
71038fac84  mov x0,x20
71038fac88  bl 0x71039c0060
71038fac8c  adrp x8,0x71043ac000
71038fac90  add x8,x8,#0x462
71038fac94  cmp w0,#0x0
71038fac98  csel x21,x8,x21,eq
71038fac9c  b 0x71038faaac
71038faca0  ldr x8,[x0, #0x30]
71038faca4  lsr x9,x12,#0xe
71038faca8  add x9,x8,w9, UXTB  #0x4
71038facac  ldr w9,[x9, #0x8]
71038facb0  and w9,w9,#0xf
71038facb4  cmp w9,#0x4
71038facb8  b.ne 0x71038facd0
71038facbc  ubfx x9,x12,#0xe,#0x8
71038facc0  lsl x9,x9,#0x4
71038facc4  ldr x8,[x8, x9, LSL #0x0]
71038facc8  add x8,x8,#0x18
71038faccc  b 0x71038facd8
71038facd0  adrp x8,0x7104307000
71038facd4  add x8,x8,#0xa71
71038facd8  str x8,[x19]
71038facdc  adrp x21,0x710425d000
71038face0  add x21,x21,#0xf65
71038face4  b 0x71038faaac
71038face8  ldur x8,[x11, #-0xc]
71038facec  add x20,x8,#0x18
71038facf0  tbnz w12,#0x16,0x71038fab5c
71038facf4  b 0x71038fac48
