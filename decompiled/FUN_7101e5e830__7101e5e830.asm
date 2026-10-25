// addr:      7101e5e830
// offset:    0x1e5e830
// name:      FUN_7101e5e830
// mangled:   
// size:      1064

7101e5e830  str x23,[sp, #-0x40]!
7101e5e834  stp x22,x21,[sp, #0x10]
7101e5e838  stp x20,x19,[sp, #0x20]
7101e5e83c  stp x29,x30,[sp, #0x30]
7101e5e840  add x29,sp,#0x30
7101e5e844  adrp x8,0x710532f000
7101e5e848  ldr x8,[x8, #0x730]
7101e5e84c  ldr x8,[x8, #0x8]
7101e5e850  ldr x8,[x8, #0x208]
7101e5e854  mov x20,x0
7101e5e858  ldr x0,[x8, #0x8]
7101e5e85c  mov w19,w1
7101e5e860  mov x1,#0xe86
7101e5e864  movk x1,#0x30ff, LSL #16
7101e5e868  movk x1,#0x15, LSL #32
7101e5e86c  mov x21,#0x5200000000000000
7101e5e870  bl 0x71032a3d90
7101e5e874  ldr x12,[x20, #0x3b8]
7101e5e878  and x10,x0,#-0x100000000000000
7101e5e87c  and x8,x0,#0xffffffffff
7101e5e880  cmp x10,x21
7101e5e884  ccmp x8,#0x0,#0x4,eq
7101e5e888  and x9,x12,#0xffffffffff
7101e5e88c  b.ne 0x7101e5e8cc
7101e5e890  and x11,x12,#-0x100000000000000
7101e5e894  cmp x10,x21
7101e5e898  cset w10,eq
7101e5e89c  cmp x8,#0x0
7101e5e8a0  cset w8,ne
7101e5e8a4  cmp x9,#0x0
7101e5e8a8  cset w9,ne
7101e5e8ac  cmp x11,x21
7101e5e8b0  and w8,w10,w8
7101e5e8b4  cset w10,eq
7101e5e8b8  and w9,w9,w10
7101e5e8bc  eor w8,w9,w8
7101e5e8c0  cmp w8,#0x1
7101e5e8c4  b.eq 0x7101e5e8e8
7101e5e8c8  b 0x7101e5e920
7101e5e8cc  and x11,x12,#-0x100000000000000
7101e5e8d0  cmp x11,x21
7101e5e8d4  b.ne 0x7101e5e894
7101e5e8d8  cbz x9,0x7101e5e894
7101e5e8dc  eor x8,x12,x0
7101e5e8e0  tst x8,#0xffffffffff
7101e5e8e4  b.eq 0x7101e5e920
7101e5e8e8  ldr x9,[x20, #0x3b0]
7101e5e8ec  ldr x8,[x9]
7101e5e8f0  ldr x8,[x8, #0x8]
7101e5e8f4  ldrb w10,[x8, #0x388]
7101e5e8f8  cbz w10,0x7101e5e920
7101e5e8fc  ldrb w9,[x9, #0x8]
7101e5e900  cmp x9,#0xd
7101e5e904  b.hi 0x7101e5e920
7101e5e908  add x8,x8,x9, LSL #0x3
7101e5e90c  and w9,w19,#0xff
7101e5e910  ldr x8,[x8, #0x8]
7101e5e914  cmp x8,#0x0
7101e5e918  ccmp w9,#0x4,#0x2,ne
7101e5e91c  b.cc 0x7101e5e944
7101e5e920  add x0,x20,#0x208
7101e5e924  mov w1,w19
7101e5e928  bl 0x7101e9b720
7101e5e92c  mov w0,wzr
7101e5e930  ldp x29,x30,[sp, #0x30]
7101e5e934  ldp x20,x19,[sp, #0x20]
7101e5e938  ldp x22,x21,[sp, #0x10]
7101e5e93c  ldr x23,[sp], #0x40
7101e5e940  ret
7101e5e944  and x22,x19,#0xff
7101e5e948  mov w9,#0x1c8
7101e5e94c  madd x9,x22,x9,x8
7101e5e950  ldrh w3,[x9, #0x8]
7101e5e954  orr w9,wzr,#0xffff
7101e5e958  add x21,x20,#0x208
7101e5e95c  cmp w3,w9
7101e5e960  b.eq 0x7101e5ea10
7101e5e964  mov w9,#0x1c8
7101e5e968  madd x8,x22,x9,x8
7101e5e96c  ldrb w4,[x8, #0xa]
7101e5e970  add x2,x20,#0x350
7101e5e974  mov x0,x21
7101e5e978  mov w1,w19
7101e5e97c  bl 0x7101e957e0
7101e5e980  ldr x21,[x20, #0x378]
7101e5e984  ldr x23,[x21, #0x10]
7101e5e988  cbz x23,0x7101e5ec50
7101e5e98c  ldr x8,[x20, #0x3b0]
7101e5e990  ldrb w8,[x8, #0x8]
7101e5e994  cmp w8,#0xd
7101e5e998  b.hi 0x7101e5ea90
7101e5e99c  mov w9,#0x1c8
7101e5e9a0  adrp x10,0x7105329000
7101e5e9a4  mul x9,x22,x9
7101e5e9a8  ldr x10,[x10, #0xf98]
7101e5e9ac  ldr x10,[x10]
7101e5e9b0  ldr x10,[x10, #0x30]
7101e5e9b4  ldrh w9,[x23, x9, LSL #0x0]
7101e5e9b8  ubfx x11,x9,#0x4,#0x1c
7101e5e9bc  cmp w11,#0x177
7101e5e9c0  b.cc 0x7101e5ea98
7101e5e9c4  mov w11,#0xffffe890
7101e5e9c8  add w11,w9,w11
7101e5e9cc  adrp x9,0x710532a000
7101e5e9d0  add x9,x9,#0x878
7101e5e9d4  and w12,w11,#0xffff
7101e5e9d8  cmp w12,#0x63
7101e5e9dc  b.hi 0x7101e5eaac
7101e5e9e0  and x11,x11,#0xffff
7101e5e9e4  mov w12,#0x50
7101e5e9e8  madd x10,x11,x12,x10
7101e5e9ec  mov w12,#0x8cc8
7101e5e9f0  movk w12,#0x8, LSL #16
7101e5e9f4  mov w11,#0x8cc0
7101e5e9f8  movk w11,#0x8, LSL #16
7101e5e9fc  ldrsh w12,[x10, x12, LSL #0x0]
7101e5ea00  add x10,x10,x11
7101e5ea04  cmn w12,#0x1
7101e5ea08  csel x9,x9,x10,eq
7101e5ea0c  b 0x7101e5eaac
7101e5ea10  ldrb w8,[x20, #0x212]
7101e5ea14  cbz w8,0x7101e5ea40
7101e5ea18  ldr x8,[x21]
7101e5ea1c  add x8,x8,x22, LSL #0x3
7101e5ea20  ldr x23,[x8, #0x48]
7101e5ea24  cbz x23,0x7101e5ea40
7101e5ea28  ldr x0,[x23, #0x8]
7101e5ea2c  fmov s0,0x3f800000
7101e5ea30  adrp x1,0x710438d000
7101e5ea34  add x1,x1,#0x258
7101e5ea38  bl 0x7103778300
7101e5ea3c  strb wzr,[x23, #0xb1]
7101e5ea40  mov x0,x21
7101e5ea44  mov w1,w19
7101e5ea48  bl 0x7101e9b720
7101e5ea4c  add x19,x20,x22, LSL #0x2
7101e5ea50  orr w20,wzr,#0xffff
7101e5ea54  ldrh w2,[x19, #0x354]
7101e5ea58  cmp x2,x20
7101e5ea5c  b.eq 0x7101e5e92c
7101e5ea60  adrp x8,0x7105329000
7101e5ea64  ldr x8,[x8, #0xf98]
7101e5ea68  ldr x8,[x8]
7101e5ea6c  ldr x0,[x8, #0x20]
7101e5ea70  ldrb w1,[x19, #0x356]
7101e5ea74  mov w3,wzr
7101e5ea78  add x21,x19,#0x354
7101e5ea7c  bl 0x710259c720
7101e5ea80  mov w0,wzr
7101e5ea84  strh w20,[x21]
7101e5ea88  strb wzr,[x19, #0x356]
7101e5ea8c  b 0x7101e5e930
7101e5ea90  mov x8,xzr
7101e5ea94  b 0x7101e5eac4
7101e5ea98  mov w11,#0x50
7101e5ea9c  madd x9,x9,x11,x10
7101e5eaa0  mov w10,#0x1940
7101e5eaa4  movk w10,#0x1, LSL #16
7101e5eaa8  add x9,x9,x10
7101e5eaac  add x8,x9,x8, LSL #0x1
7101e5eab0  mov x9,#0x5800
7101e5eab4  movk x9,#0xf847, LSL #16
7101e5eab8  movk x9,#0xd, LSL #32
7101e5eabc  ldrh w8,[x8, #0x20]
7101e5eac0  mul x8,x8,x9
7101e5eac4  ldr x0,[x21]
7101e5eac8  ldrb w9,[x0, #0x8]
7101e5eacc  mov w20,#0xf7cf
7101e5ead0  movk w20,#0xe353, LSL #16
7101e5ead4  cmp w9,w19, UXTB 
7101e5ead8  b.ls 0x7101e5eb88
7101e5eadc  and x9,x8,#0xfffff800
7101e5eae0  lsr x8,x8,#0x20
7101e5eae4  mul x10,x8,x20
7101e5eae8  mul x11,x9,x20
7101e5eaec  add x10,x10,x11, LSR #0x20
7101e5eaf0  mov w11,#0x1c8
7101e5eaf4  madd x11,x22,x11,x23
7101e5eaf8  ldr x11,[x11, #0x8]
7101e5eafc  and x12,x11,#0xffffffff
7101e5eb00  asr x13,x11,#0x20
7101e5eb04  mul x14,x13,x20
7101e5eb08  mul x15,x12,x20
7101e5eb0c  add x14,x14,x15, LSR #0x20
7101e5eb10  mov w15,#0x9ba5
7101e5eb14  movk w15,#0x20c4, LSL #16
7101e5eb18  mul x8,x8,x15
7101e5eb1c  mul x9,x9,x15
7101e5eb20  add x8,x8,x10, LSR #0x20
7101e5eb24  add x9,x9,w10, UXTW 
7101e5eb28  add x8,x8,x9, LSR #0x20
7101e5eb2c  mul x9,x12,x15
7101e5eb30  lsr x8,x8,#0x7
7101e5eb34  scvtf s0,x8
7101e5eb38  mul x8,x13,x15
7101e5eb3c  add x9,x9,w14, UXTW 
7101e5eb40  add x8,x8,x14, ASR #0x20
7101e5eb44  add x8,x8,x9, LSR #0x20
7101e5eb48  asr x8,x8,#0x7
7101e5eb4c  add x8,x8,x11, LSR #0x3f
7101e5eb50  scvtf s1,x8
7101e5eb54  fdiv s0,s0,s1
7101e5eb58  mov w2,#0x1
7101e5eb5c  mov w1,w19
7101e5eb60  bl 0x7101e9c280
7101e5eb64  tbz w0,#0x0,0x7101e5eb88
7101e5eb68  ldr x8,[x21, #0x8]
7101e5eb6c  orr w9,wzr,#0x30
7101e5eb70  madd x8,x22,x9,x8
7101e5eb74  ldr x0,[x8, #0x8]
7101e5eb78  fmov s0,0x3f800000
7101e5eb7c  adrp x1,0x710438b000
7101e5eb80  add x1,x1,#0x28f
7101e5eb84  bl 0x7103778300
7101e5eb88  mov w8,#0x1c8
7101e5eb8c  madd x9,x22,x8,x23
7101e5eb90  ldr x8,[x9, #0x18]
7101e5eb94  ldr x10,[x9, #0x8]
7101e5eb98  cmp x8,x10
7101e5eb9c  b.ne 0x7101e5eba8
7101e5eba0  fmov s0,0x3f800000
7101e5eba4  b 0x7101e5ec40
7101e5eba8  and x11,x10,#0xffffffff
7101e5ebac  asr x12,x10,#0x20
7101e5ebb0  mul x13,x12,x20
7101e5ebb4  mul x14,x11,x20
7101e5ebb8  mov w9,#0x9ba5
7101e5ebbc  movk w9,#0x20c4, LSL #16
7101e5ebc0  mul x12,x12,x9
7101e5ebc4  mul x11,x11,x9
7101e5ebc8  add x13,x13,x14, LSR #0x20
7101e5ebcc  add x11,x11,w13, UXTW 
7101e5ebd0  add x12,x12,x13, ASR #0x20
7101e5ebd4  add x11,x12,x11, LSR #0x20
7101e5ebd8  asr x11,x11,#0x7
7101e5ebdc  add x10,x11,x10, LSR #0x3f
7101e5ebe0  cmp x10,#0x1
7101e5ebe4  b.lt 0x7101e5ec3c
7101e5ebe8  and x11,x8,#0xffffffff
7101e5ebec  asr x12,x8,#0x20
7101e5ebf0  mul x13,x12,x20
7101e5ebf4  mul x14,x11,x20
7101e5ebf8  mul x12,x12,x9
7101e5ebfc  mul x9,x11,x9
7101e5ec00  scvtf s0,x10
7101e5ec04  add x13,x13,x14, LSR #0x20
7101e5ec08  add x9,x9,w13, UXTW 
7101e5ec0c  add x11,x12,x13, ASR #0x20
7101e5ec10  add x9,x11,x9, LSR #0x20
7101e5ec14  asr x9,x9,#0x7
7101e5ec18  add x8,x9,x8, LSR #0x3f
7101e5ec1c  scvtf s1,x8
7101e5ec20  fdiv s0,s1,s0
7101e5ec24  fmov s1,0x3f800000
7101e5ec28  fmin s1,s0,s1
7101e5ec2c  fcmp s0,#0.0
7101e5ec30  fmov s0,wzr
7101e5ec34  fcsel s0,s0,s1,mi
7101e5ec38  b 0x7101e5ec40
7101e5ec3c  fmov s0,wzr
7101e5ec40  add x8,x21,x22, LSL #0x4
7101e5ec44  mov w9,#0x3b
7101e5ec48  stp s0,s0,[x8, #0xa4]
7101e5ec4c  str w9,[x8, #0xb0]
7101e5ec50  mov w0,#0x1
7101e5ec54  b 0x7101e5e930
