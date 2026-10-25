// addr:      7101b49f10
// offset:    0x1b49f10
// name:      FUN_7101b49f10
// mangled:   
// size:      1068

7101b49f10  sub sp,sp,#0x80
7101b49f14  str x21,[sp, #0x50]
7101b49f18  stp x20,x19,[sp, #0x60]
7101b49f1c  stp x29,x30,[sp, #0x70]
7101b49f20  add x29,sp,#0x70
7101b49f24  mov w21,w3
7101b49f28  mov w20,w2
7101b49f2c  mov x19,x0
7101b49f30  cmp w1,#0x4
7101b49f34  strb wzr,[sp, #0x10]
7101b49f38  str xzr,[sp, #0x8]
7101b49f3c  b.hi 0x7101b4a298
7101b49f40  mov w8,w1
7101b49f44  adrp x9,0x71044f8000
7101b49f48  add x9,x9,#0x6f8
7101b49f4c  ldrsw x8,[x9, x8, LSL #0x2]
7101b49f50  add x8,x8,x9
7101b49f54  br x8
7101b49f58  mov x10,#0x735f
7101b49f5c  movk x10,#0x6174, LSL #16
7101b49f60  movk x10,#0x6567, LSL #32
7101b49f64  movk x10,#0x705f, LSL #48
7101b49f68  str x10,[sp, #0x18]
7101b49f6c  mov w10,#0x6b6f
7101b49f70  strh w10,[sp, #0x20]
7101b49f74  mov x10,#0x5f65
7101b49f78  movk x10,#0x7473, LSL #16
7101b49f7c  movk x10,#0x6461, LSL #32
7101b49f80  movk x10,#0x7569, LSL #48
7101b49f84  stur x10,[sp, #0x22]
7101b49f88  mov w10,#0x5f6d
7101b49f8c  movk w10,#0x7974, LSL #16
7101b49f90  stur w10,[sp, #0x2a]
7101b49f94  mov w10,#0x6570
7101b49f98  mov x9,#0x656d
7101b49f9c  movk x9,#0x5f6c, LSL #16
7101b49fa0  movk x9,#0x6e69, LSL #32
7101b49fa4  movk x9,#0x6f66, LSL #48
7101b49fa8  str x9,[sp, #0x10]
7101b49fac  strh w10,[sp, #0x2e]
7101b49fb0  mov x10,#0x6e5f
7101b49fb4  movk x10,#0x726f, LSL #16
7101b49fb8  movk x10,#0x616d, LSL #32
7101b49fbc  movk x10,#0x6c, LSL #48
7101b49fc0  str x10,[sp, #0x30]
7101b49fc4  add x9,sp,#0x8
7101b49fc8  mov w10,#0x27
7101b49fcc  str w10,[sp, #0xc]
7101b49fd0  mov w8,#0x9dc5
7101b49fd4  movk w8,#0x811c, LSL #16
7101b49fd8  add x9,x9,#0x9
7101b49fdc  mov w11,#0x6d
7101b49fe0  mov w10,#0x89
7101b49fe4  mul w8,w8,w10
7101b49fe8  and w11,w11,#0xff
7101b49fec  eor w8,w8,w11
7101b49ff0  ldrb w11,[x9], #0x1
7101b49ff4  cbnz w11,0x7101b49fe4
7101b49ff8  b 0x7101b4a294
7101b49ffc  mov w10,#0x6b6f
7101b4a000  strh w10,[sp, #0x20]
7101b4a004  mov x10,#0x5f65
7101b4a008  movk x10,#0x7473, LSL #16
7101b4a00c  movk x10,#0x6461, LSL #32
7101b4a010  movk x10,#0x7569, LSL #48
7101b4a014  stur x10,[sp, #0x22]
7101b4a018  mov w10,#0x5f6d
7101b4a01c  movk w10,#0x7974, LSL #16
7101b4a020  stur w10,[sp, #0x2a]
7101b4a024  mov w10,#0x6570
7101b4a028  mov x9,#0x735f
7101b4a02c  movk x9,#0x6174, LSL #16
7101b4a030  movk x9,#0x6567, LSL #32
7101b4a034  movk x9,#0x705f, LSL #48
7101b4a038  strh w10,[sp, #0x2e]
7101b4a03c  mov w10,#0x675f
7101b4a040  movk w10,#0x6172, LSL #16
7101b4a044  mov x8,#0x656d
7101b4a048  movk x8,#0x5f6c, LSL #16
7101b4a04c  str w10,[sp, #0x30]
7101b4a050  mov w10,#0x7373
7101b4a054  str x9,[sp, #0x18]
7101b4a058  strh w10,[sp, #0x34]
7101b4a05c  movk x8,#0x6e69, LSL #32
7101b4a060  movk x8,#0x6f66, LSL #48
7101b4a064  str x8,[sp, #0x10]
7101b4a068  add x9,sp,#0x8
7101b4a06c  mov w10,#0x26
7101b4a070  str w10,[sp, #0xc]
7101b4a074  mov w8,#0x9dc5
7101b4a078  movk w8,#0x811c, LSL #16
7101b4a07c  strb wzr,[sp, #0x36]
7101b4a080  add x9,x9,#0x9
7101b4a084  mov w11,#0x6d
7101b4a088  mov w10,#0x89
7101b4a08c  mul w8,w8,w10
7101b4a090  and w11,w11,#0xff
7101b4a094  eor w8,w8,w11
7101b4a098  ldrb w11,[x9], #0x1
7101b4a09c  cbnz w11,0x7101b4a08c
7101b4a0a0  b 0x7101b4a294
7101b4a0a4  mov w10,#0x6b6f
7101b4a0a8  strh w10,[sp, #0x20]
7101b4a0ac  mov x10,#0x5f65
7101b4a0b0  movk x10,#0x7473, LSL #16
7101b4a0b4  movk x10,#0x6461, LSL #32
7101b4a0b8  movk x10,#0x7569, LSL #48
7101b4a0bc  stur x10,[sp, #0x22]
7101b4a0c0  mov w10,#0x5f6d
7101b4a0c4  movk w10,#0x7974, LSL #16
7101b4a0c8  stur w10,[sp, #0x2a]
7101b4a0cc  mov w10,#0x6570
7101b4a0d0  mov x9,#0x735f
7101b4a0d4  movk x9,#0x6174, LSL #16
7101b4a0d8  movk x9,#0x6567, LSL #32
7101b4a0dc  movk x9,#0x705f, LSL #48
7101b4a0e0  strh w10,[sp, #0x2e]
7101b4a0e4  mov w10,#0x775f
7101b4a0e8  movk w10,#0x7461, LSL #16
7101b4a0ec  mov x8,#0x656d
7101b4a0f0  movk x8,#0x5f6c, LSL #16
7101b4a0f4  str w10,[sp, #0x30]
7101b4a0f8  mov w10,#0x7265
7101b4a0fc  str x9,[sp, #0x18]
7101b4a100  strh w10,[sp, #0x34]
7101b4a104  movk x8,#0x6e69, LSL #32
7101b4a108  movk x8,#0x6f66, LSL #48
7101b4a10c  str x8,[sp, #0x10]
7101b4a110  add x9,sp,#0x8
7101b4a114  mov w10,#0x26
7101b4a118  str w10,[sp, #0xc]
7101b4a11c  mov w8,#0x9dc5
7101b4a120  movk w8,#0x811c, LSL #16
7101b4a124  strb wzr,[sp, #0x36]
7101b4a128  add x9,x9,#0x9
7101b4a12c  mov w11,#0x6d
7101b4a130  mov w10,#0x89
7101b4a134  mul w8,w8,w10
7101b4a138  and w11,w11,#0xff
7101b4a13c  eor w8,w8,w11
7101b4a140  ldrb w11,[x9], #0x1
7101b4a144  cbnz w11,0x7101b4a134
7101b4a148  b 0x7101b4a294
7101b4a14c  mov w10,#0x6b6f
7101b4a150  strh w10,[sp, #0x20]
7101b4a154  mov x10,#0x5f65
7101b4a158  movk x10,#0x7473, LSL #16
7101b4a15c  movk x10,#0x6461, LSL #32
7101b4a160  movk x10,#0x7569, LSL #48
7101b4a164  stur x10,[sp, #0x22]
7101b4a168  mov w10,#0x5f6d
7101b4a16c  movk w10,#0x7974, LSL #16
7101b4a170  stur w10,[sp, #0x2a]
7101b4a174  mov w10,#0x6570
7101b4a178  mov x9,#0x735f
7101b4a17c  movk x9,#0x6174, LSL #16
7101b4a180  movk x9,#0x6567, LSL #32
7101b4a184  movk x9,#0x705f, LSL #48
7101b4a188  strh w10,[sp, #0x2e]
7101b4a18c  mov w10,#0x665f
7101b4a190  movk w10,#0x616c, LSL #16
7101b4a194  mov x8,#0x656d
7101b4a198  movk x8,#0x5f6c, LSL #16
7101b4a19c  str w10,[sp, #0x30]
7101b4a1a0  mov w10,#0x6572
7101b4a1a4  str x9,[sp, #0x18]
7101b4a1a8  strh w10,[sp, #0x34]
7101b4a1ac  movk x8,#0x6e69, LSL #32
7101b4a1b0  movk x8,#0x6f66, LSL #48
7101b4a1b4  str x8,[sp, #0x10]
7101b4a1b8  add x9,sp,#0x8
7101b4a1bc  mov w10,#0x26
7101b4a1c0  str w10,[sp, #0xc]
7101b4a1c4  mov w8,#0x9dc5
7101b4a1c8  movk w8,#0x811c, LSL #16
7101b4a1cc  strb wzr,[sp, #0x36]
7101b4a1d0  add x9,x9,#0x9
7101b4a1d4  mov w11,#0x6d
7101b4a1d8  mov w10,#0x89
7101b4a1dc  mul w8,w8,w10
7101b4a1e0  and w11,w11,#0xff
7101b4a1e4  eor w8,w8,w11
7101b4a1e8  ldrb w11,[x9], #0x1
7101b4a1ec  cbnz w11,0x7101b4a1dc
7101b4a1f0  b 0x7101b4a294
7101b4a1f4  mov w10,#0x6b6f
7101b4a1f8  strh w10,[sp, #0x20]
7101b4a1fc  mov x10,#0x5f65
7101b4a200  movk x10,#0x7473, LSL #16
7101b4a204  movk x10,#0x6461, LSL #32
7101b4a208  movk x10,#0x7569, LSL #48
7101b4a20c  stur x10,[sp, #0x22]
7101b4a210  mov w10,#0x5f6d
7101b4a214  movk w10,#0x7974, LSL #16
7101b4a218  stur w10,[sp, #0x2a]
7101b4a21c  mov w10,#0x6570
7101b4a220  mov x9,#0x735f
7101b4a224  movk x9,#0x6174, LSL #16
7101b4a228  movk x9,#0x6567, LSL #32
7101b4a22c  movk x9,#0x705f, LSL #48
7101b4a230  strh w10,[sp, #0x2e]
7101b4a234  mov w10,#0x725f
7101b4a238  movk w10,#0x636f, LSL #16
7101b4a23c  mov x8,#0x656d
7101b4a240  movk x8,#0x5f6c, LSL #16
7101b4a244  str w10,[sp, #0x30]
7101b4a248  mov w10,#0x6b
7101b4a24c  str x9,[sp, #0x18]
7101b4a250  strh w10,[sp, #0x34]
7101b4a254  movk x8,#0x6e69, LSL #32
7101b4a258  movk x8,#0x6f66, LSL #48
7101b4a25c  str x8,[sp, #0x10]
7101b4a260  add x9,sp,#0x8
7101b4a264  mov w10,#0x25
7101b4a268  str w10,[sp, #0xc]
7101b4a26c  mov w8,#0x9dc5
7101b4a270  movk w8,#0x811c, LSL #16
7101b4a274  add x9,x9,#0x9
7101b4a278  mov w11,#0x6d
7101b4a27c  mov w10,#0x89
7101b4a280  mul w8,w8,w10
7101b4a284  and w11,w11,#0xff
7101b4a288  eor w8,w8,w11
7101b4a28c  ldrb w11,[x9], #0x1
7101b4a290  cbnz w11,0x7101b4a280
7101b4a294  str w8,[sp, #0x8]
7101b4a298  add x8,sp,#0x8
7101b4a29c  add x0,x19,#0x38
7101b4a2a0  add x1,x8,#0x8
7101b4a2a4  bl 0x710377a120
7101b4a2a8  tbz w21,#0x0,0x7101b4a2c0
7101b4a2ac  add x0,x19,#0x58
7101b4a2b0  adrp x1,0x71043be000
7101b4a2b4  add x1,x1,#0x36b
7101b4a2b8  bl 0x710377a120
7101b4a2bc  b 0x7101b4a2e0
7101b4a2c0  ldr x8,[x19, #0x60]
7101b4a2c4  ldr x0,[x8, #0x10]
7101b4a2c8  cbz x0,0x7101b4a2e0
7101b4a2cc  sub x1,x29,#0x14
7101b4a2d0  mov w2,wzr
7101b4a2d4  mov w3,wzr
7101b4a2d8  stur wzr,[x29, #-0x14]
7101b4a2dc  bl 0x71037a2270
7101b4a2e0  ldr x8,[x19, #0x70]
7101b4a2e4  ldr x0,[x8, #0x10]
7101b4a2e8  cbz x0,0x7101b4a300
7101b4a2ec  sub x1,x29,#0x14
7101b4a2f0  mov w2,wzr
7101b4a2f4  mov w3,wzr
7101b4a2f8  stur wzr,[x29, #-0x14]
7101b4a2fc  bl 0x71037a2270
7101b4a300  cmp w20,#0x8
7101b4a304  mov w8,#0x8
7101b4a308  csel w8,w20,w8,lt
7101b4a30c  cmp w8,#0x2
7101b4a310  mov w9,#0x2
7101b4a314  csel w8,w8,w9,gt
7101b4a318  sub w8,w8,#0x2
7101b4a31c  scvtf s0,w8
7101b4a320  add x0,x19,#0x158
7101b4a324  bl 0x710377b010
7101b4a328  ldp x29,x30,[sp, #0x70]
7101b4a32c  ldr x21,[sp, #0x50]
7101b4a330  ldp x20,x19,[sp, #0x60]
7101b4a334  add sp,sp,#0x80
7101b4a338  ret
