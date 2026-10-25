// addr:      7101ef0690
// offset:    0x1ef0690
// name:      FUN_7101ef0690
// mangled:   
// size:      1436

7101ef0690  sub sp,sp,#0xd0
7101ef0694  str x21,[sp, #0xa0]
7101ef0698  stp x20,x19,[sp, #0xb0]
7101ef069c  stp x29,x30,[sp, #0xc0]
7101ef06a0  add x29,sp,#0xc0
7101ef06a4  ldr x9,[x0]
7101ef06a8  ldr x21,[x9]
7101ef06ac  ldrb w9,[x1, #0x2]
7101ef06b0  mov w19,w2
7101ef06b4  mov x20,x1
7101ef06b8  mov w8,#0x9dc5
7101ef06bc  movk w8,#0x811c, LSL #16
7101ef06c0  add x0,x21,#0x8
7101ef06c4  cmp w9,#0x2
7101ef06c8  b.eq 0x7101ef074c
7101ef06cc  cmp w9,#0x1
7101ef06d0  b.eq 0x7101ef0804
7101ef06d4  cbnz w9,0x7101ef0878
7101ef06d8  mov x10,#0x656d
7101ef06dc  movk x10,#0x5f6c, LSL #16
7101ef06e0  mov x9,#0x1700000000
7101ef06e4  movk x10,#0x7572, LSL #32
7101ef06e8  movk x10,#0x656c, LSL #48
7101ef06ec  add x11,sp,#0x58
7101ef06f0  stp x9,x10,[sp, #0x58]
7101ef06f4  mov x10,#0x745f
7101ef06f8  movk x10,#0x6165, LSL #16
7101ef06fc  movk x10,#0x5f6d, LSL #32
7101ef0700  movk x10,#0x6f66, LSL #48
7101ef0704  str x10,[sp, #0x68]
7101ef0708  mov w10,#0x6d72
7101ef070c  strh w10,[sp, #0x70]
7101ef0710  mov w10,#0x7461
7101ef0714  movk w10,#0x305f, LSL #16
7101ef0718  stur w10,[sp, #0x72]
7101ef071c  orr w12,wzr,#0x30
7101ef0720  add x9,x11,#0x9
7101ef0724  strh w12,[sp, #0x76]
7101ef0728  mov w11,#0x6d
7101ef072c  mov w10,#0x89
7101ef0730  mov w12,w8
7101ef0734  mul w12,w12,w10
7101ef0738  and w11,w11,#0xff
7101ef073c  eor w12,w12,w11
7101ef0740  ldrb w11,[x9], #0x1
7101ef0744  cbnz w11,0x7101ef0734
7101ef0748  b 0x7101ef09a0
7101ef074c  cmp w19,#0x1
7101ef0750  b.eq 0x7101ef0884
7101ef0754  cbnz w19,0x7101ef0930
7101ef0758  mov x9,#0x2b00000000
7101ef075c  str x9,[sp, #0x58]
7101ef0760  mov x9,#0x656d
7101ef0764  movk x9,#0x5f6c, LSL #16
7101ef0768  movk x9,#0x6574, LSL #32
7101ef076c  movk x9,#0x6d61, LSL #48
7101ef0770  add x10,sp,#0x58
7101ef0774  mov w12,#0x7376
7101ef0778  movk w12,#0x33, LSL #16
7101ef077c  str x9,[sp, #0x60]
7101ef0780  add x9,x10,#0x9
7101ef0784  str w12,[sp, #0x88]
7101ef0788  mov x10,#0x635f
7101ef078c  movk x10,#0x6d6f, LSL #16
7101ef0790  movk x10,#0x6570, LSL #32
7101ef0794  movk x10,#0x6974, LSL #48
7101ef0798  str x10,[sp, #0x68]
7101ef079c  mov w10,#0x6974
7101ef07a0  strh w10,[sp, #0x70]
7101ef07a4  mov x10,#0x6e6f
7101ef07a8  movk x10,#0x6d5f, LSL #16
7101ef07ac  movk x10,#0x7461, LSL #32
7101ef07b0  movk x10,#0x6863, LSL #48
7101ef07b4  stur x10,[sp, #0x72]
7101ef07b8  mov w10,#0x7075
7101ef07bc  movk w10,#0x725f, LSL #16
7101ef07c0  stur w10,[sp, #0x7a]
7101ef07c4  mov w10,#0x6c75
7101ef07c8  strh w10,[sp, #0x7e]
7101ef07cc  mov x10,#0x5f65
7101ef07d0  movk x10,#0x6977, LSL #16
7101ef07d4  movk x10,#0x736e, LSL #32
7101ef07d8  movk x10,#0x335f, LSL #48
7101ef07dc  str x10,[sp, #0x80]
7101ef07e0  mov w11,#0x6d
7101ef07e4  mov w10,#0x89
7101ef07e8  mov w12,w8
7101ef07ec  mul w12,w12,w10
7101ef07f0  and w11,w11,#0xff
7101ef07f4  eor w12,w12,w11
7101ef07f8  ldrb w11,[x9], #0x1
7101ef07fc  cbnz w11,0x7101ef07ec
7101ef0800  b 0x7101ef09a0
7101ef0804  mov x10,#0x656d
7101ef0808  movk x10,#0x5f6c, LSL #16
7101ef080c  mov x9,#0x1700000000
7101ef0810  movk x10,#0x7572, LSL #32
7101ef0814  movk x10,#0x656c, LSL #48
7101ef0818  add x11,sp,#0x58
7101ef081c  stp x9,x10,[sp, #0x58]
7101ef0820  mov x10,#0x745f
7101ef0824  movk x10,#0x6165, LSL #16
7101ef0828  movk x10,#0x5f6d, LSL #32
7101ef082c  movk x10,#0x6f66, LSL #48
7101ef0830  str x10,[sp, #0x68]
7101ef0834  mov w10,#0x6d72
7101ef0838  strh w10,[sp, #0x70]
7101ef083c  mov w10,#0x7461
7101ef0840  movk w10,#0x305f, LSL #16
7101ef0844  stur w10,[sp, #0x72]
7101ef0848  mov w12,#0x31
7101ef084c  add x9,x11,#0x9
7101ef0850  strh w12,[sp, #0x76]
7101ef0854  mov w11,#0x6d
7101ef0858  mov w10,#0x89
7101ef085c  mov w12,w8
7101ef0860  mul w12,w12,w10
7101ef0864  and w11,w11,#0xff
7101ef0868  eor w12,w12,w11
7101ef086c  ldrb w11,[x9], #0x1
7101ef0870  cbnz w11,0x7101ef0860
7101ef0874  b 0x7101ef09a0
7101ef0878  strb wzr,[sp, #0x60]
7101ef087c  stp w8,wzr,[sp, #0x58]
7101ef0880  b 0x7101ef09a4
7101ef0884  mov x9,#0x2b00000000
7101ef0888  str x9,[sp, #0x58]
7101ef088c  mov x9,#0x656d
7101ef0890  movk x9,#0x5f6c, LSL #16
7101ef0894  movk x9,#0x6574, LSL #32
7101ef0898  movk x9,#0x6d61, LSL #48
7101ef089c  add x10,sp,#0x58
7101ef08a0  mov w12,#0x7376
7101ef08a4  movk w12,#0x35, LSL #16
7101ef08a8  str x9,[sp, #0x60]
7101ef08ac  add x9,x10,#0x9
7101ef08b0  str w12,[sp, #0x88]
7101ef08b4  mov x10,#0x635f
7101ef08b8  movk x10,#0x6d6f, LSL #16
7101ef08bc  movk x10,#0x6570, LSL #32
7101ef08c0  movk x10,#0x6974, LSL #48
7101ef08c4  str x10,[sp, #0x68]
7101ef08c8  mov w10,#0x6974
7101ef08cc  strh w10,[sp, #0x70]
7101ef08d0  mov x10,#0x6e6f
7101ef08d4  movk x10,#0x6d5f, LSL #16
7101ef08d8  movk x10,#0x7461, LSL #32
7101ef08dc  movk x10,#0x6863, LSL #48
7101ef08e0  stur x10,[sp, #0x72]
7101ef08e4  mov w10,#0x7075
7101ef08e8  movk w10,#0x725f, LSL #16
7101ef08ec  stur w10,[sp, #0x7a]
7101ef08f0  mov w10,#0x6c75
7101ef08f4  strh w10,[sp, #0x7e]
7101ef08f8  mov x10,#0x5f65
7101ef08fc  movk x10,#0x6977, LSL #16
7101ef0900  movk x10,#0x736e, LSL #32
7101ef0904  movk x10,#0x355f, LSL #48
7101ef0908  str x10,[sp, #0x80]
7101ef090c  mov w11,#0x6d
7101ef0910  mov w10,#0x89
7101ef0914  mov w12,w8
7101ef0918  mul w12,w12,w10
7101ef091c  and w11,w11,#0xff
7101ef0920  eor w12,w12,w11
7101ef0924  ldrb w11,[x9], #0x1
7101ef0928  cbnz w11,0x7101ef0918
7101ef092c  b 0x7101ef09a0
7101ef0930  mov x10,#0x656d
7101ef0934  movk x10,#0x5f6c, LSL #16
7101ef0938  mov x9,#0x1700000000
7101ef093c  movk x10,#0x7572, LSL #32
7101ef0940  movk x10,#0x656c, LSL #48
7101ef0944  add x11,sp,#0x58
7101ef0948  stp x9,x10,[sp, #0x58]
7101ef094c  mov x10,#0x745f
7101ef0950  movk x10,#0x6165, LSL #16
7101ef0954  movk x10,#0x5f6d, LSL #32
7101ef0958  movk x10,#0x6f66, LSL #48
7101ef095c  str x10,[sp, #0x68]
7101ef0960  mov w10,#0x6d72
7101ef0964  strh w10,[sp, #0x70]
7101ef0968  mov w10,#0x7461
7101ef096c  movk w10,#0x305f, LSL #16
7101ef0970  stur w10,[sp, #0x72]
7101ef0974  mov w12,#0x32
7101ef0978  add x9,x11,#0x9
7101ef097c  strh w12,[sp, #0x76]
7101ef0980  mov w11,#0x6d
7101ef0984  mov w10,#0x89
7101ef0988  mov w12,w8
7101ef098c  mul w12,w12,w10
7101ef0990  and w11,w11,#0xff
7101ef0994  eor w12,w12,w11
7101ef0998  ldrb w11,[x9], #0x1
7101ef099c  cbnz w11,0x7101ef098c
7101ef09a0  str w12,[sp, #0x58]
7101ef09a4  ldrb w9,[x20, #0x1]
7101ef09a8  cmp w9,#0x2
7101ef09ac  b.eq 0x7101ef0a1c
7101ef09b0  cmp w9,#0x1
7101ef09b4  b.eq 0x7101ef0a84
7101ef09b8  cbnz w9,0x7101ef0ae4
7101ef09bc  mov x10,#0x656d
7101ef09c0  movk x10,#0x5f6c, LSL #16
7101ef09c4  mov x9,#0x1200000000
7101ef09c8  movk x10,#0x7572, LSL #32
7101ef09cc  movk x10,#0x656c, LSL #48
7101ef09d0  strb wzr,[sp, #0x2a]
7101ef09d4  stp x9,x10,[sp, #0x10]
7101ef09d8  mov x10,#0x725f
7101ef09dc  movk x10,#0x6c75, LSL #16
7101ef09e0  movk x10,#0x5f65, LSL #32
7101ef09e4  movk x10,#0x6974, LSL #48
7101ef09e8  add x11,sp,#0x10
7101ef09ec  str x10,[sp, #0x20]
7101ef09f0  mov w10,#0x656d
7101ef09f4  add x9,x11,#0x9
7101ef09f8  strh w10,[sp, #0x28]
7101ef09fc  mov w11,#0x6d
7101ef0a00  mov w10,#0x89
7101ef0a04  mul w8,w8,w10
7101ef0a08  and w11,w11,#0xff
7101ef0a0c  eor w8,w8,w11
7101ef0a10  ldrb w11,[x9], #0x1
7101ef0a14  cbnz w11,0x7101ef0a04
7101ef0a18  b 0x7101ef0aec
7101ef0a1c  mov x10,#0x656d
7101ef0a20  movk x10,#0x5f6c, LSL #16
7101ef0a24  mov x9,#0x1500000000
7101ef0a28  movk x10,#0x7572, LSL #32
7101ef0a2c  movk x10,#0x656c, LSL #48
7101ef0a30  add x11,sp,#0x10
7101ef0a34  stp x9,x10,[sp, #0x10]
7101ef0a38  mov x10,#0x725f
7101ef0a3c  movk x10,#0x6c75, LSL #16
7101ef0a40  movk x10,#0x5f65, LSL #32
7101ef0a44  movk x10,#0x7473, LSL #48
7101ef0a48  str x10,[sp, #0x20]
7101ef0a4c  mov w10,#0x6d61
7101ef0a50  strh w10,[sp, #0x28]
7101ef0a54  add x9,x11,#0x9
7101ef0a58  mov w12,#0x6e69
7101ef0a5c  movk w12,#0x61, LSL #16
7101ef0a60  mov w11,#0x6d
7101ef0a64  stur w12,[sp, #0x2a]
7101ef0a68  mov w10,#0x89
7101ef0a6c  mul w8,w8,w10
7101ef0a70  and w11,w11,#0xff
7101ef0a74  eor w8,w8,w11
7101ef0a78  ldrb w11,[x9], #0x1
7101ef0a7c  cbnz w11,0x7101ef0a6c
7101ef0a80  b 0x7101ef0aec
7101ef0a84  mov x10,#0x656d
7101ef0a88  movk x10,#0x5f6c, LSL #16
7101ef0a8c  mov x9,#0x1300000000
7101ef0a90  movk x10,#0x7572, LSL #32
7101ef0a94  movk x10,#0x656c, LSL #48
7101ef0a98  add x11,sp,#0x10
7101ef0a9c  stp x9,x10,[sp, #0x10]
7101ef0aa0  mov x10,#0x725f
7101ef0aa4  movk x10,#0x6c75, LSL #16
7101ef0aa8  movk x10,#0x5f65, LSL #32
7101ef0aac  movk x10,#0x7473, LSL #48
7101ef0ab0  str x10,[sp, #0x20]
7101ef0ab4  mov w10,#0x636f
7101ef0ab8  movk w10,#0x6b, LSL #16
7101ef0abc  add x9,x11,#0x9
7101ef0ac0  str w10,[sp, #0x28]
7101ef0ac4  mov w11,#0x6d
7101ef0ac8  mov w10,#0x89
7101ef0acc  mul w8,w8,w10
7101ef0ad0  and w11,w11,#0xff
7101ef0ad4  eor w8,w8,w11
7101ef0ad8  ldrb w11,[x9], #0x1
7101ef0adc  cbnz w11,0x7101ef0acc
7101ef0ae0  b 0x7101ef0aec
7101ef0ae4  strb wzr,[sp, #0x18]
7101ef0ae8  str wzr,[sp, #0x14]
7101ef0aec  str w8,[sp, #0x10]
7101ef0af0  adrp x1,0x710425f000
7101ef0af4  add x1,x1,#0xd0b
7101ef0af8  mov x8,sp
7101ef0afc  bl 0x7103776910
7101ef0b00  ldrh w8,[x20, #0x4]
7101ef0b04  cbz w8,0x7101ef0bd0
7101ef0b08  mov w9,#0xb3c5
7101ef0b0c  movk w9,#0x91a2, LSL #16
7101ef0b10  mov w10,#0x8889
7101ef0b14  movk w10,#0x8888, LSL #16
7101ef0b18  umull x9,w8,w9
7101ef0b1c  umull x10,w8,w10
7101ef0b20  mov w12,#0x4240
7101ef0b24  movk w12,#0xf, LSL #16
7101ef0b28  mov w13,#0x3e7
7101ef0b2c  mov w1,#0x5
7101ef0b30  mov x0,sp
7101ef0b34  mov w4,#0x1
7101ef0b38  lsr x9,x9,#0x2b
7101ef0b3c  mul x9,x9,x12
7101ef0b40  lsr x10,x10,#0x25
7101ef0b44  mov w11,#0xffffffc4
7101ef0b48  madd w8,w10,w11,w8
7101ef0b4c  cmp w10,#0x3e7
7101ef0b50  mov w11,#0x3e8
7101ef0b54  csel x10,x10,x13,cc
7101ef0b58  madd x9,x10,x11,x9
7101ef0b5c  and w10,w8,#0xffff
7101ef0b60  and x8,x8,#0xffff
7101ef0b64  cmp w10,#0x3e7
7101ef0b68  csel x8,x8,x13,cc
7101ef0b6c  add x12,sp,#0x58
7101ef0b70  add x2,x12,#0x8
7101ef0b74  add x5,x9,x8
7101ef0b78  add x8,sp,#0x10
7101ef0b7c  add x3,x8,#0x8
7101ef0b80  mov w6,wzr
7101ef0b84  bl 0x710377a310
7101ef0b88  ldrb w8,[x20, #0x2]
7101ef0b8c  cbz w8,0x7101ef0c00
7101ef0b90  ldr x0,[x21, #0x10]
7101ef0b94  adrp x1,0x7104433000
7101ef0b98  add x1,x1,#0x8f5
7101ef0b9c  fmov s0,0x3f800000
7101ef0ba0  bl 0x7103778300
7101ef0ba4  ldr x0,[sp, #0x8]
7101ef0ba8  adrp x8,0x710523d000
7101ef0bac  add x8,x8,#0x9a8
7101ef0bb0  stp x8,xzr,[sp]
7101ef0bb4  cbz x0,0x7101ef0bbc
7101ef0bb8  bl 0x710392eb40
7101ef0bbc  ldp x29,x30,[sp, #0xc0]
7101ef0bc0  ldr x21,[sp, #0xa0]
7101ef0bc4  ldp x20,x19,[sp, #0xb0]
7101ef0bc8  add sp,sp,#0xd0
7101ef0bcc  ret
7101ef0bd0  add x8,sp,#0x58
7101ef0bd4  add x2,x8,#0x8
7101ef0bd8  add x8,sp,#0x10
7101ef0bdc  add x3,x8,#0x8
7101ef0be0  mov w1,#0x5
7101ef0be4  mov x0,sp
7101ef0be8  mov w6,#0x1
7101ef0bec  mov w4,wzr
7101ef0bf0  mov w5,wzr
7101ef0bf4  bl 0x710377a310
7101ef0bf8  ldrb w8,[x20, #0x2]
7101ef0bfc  cbnz w8,0x7101ef0b90
7101ef0c00  cmp w19,#0x1
7101ef0c04  b.eq 0x7101ef0c1c
7101ef0c08  cbnz w19,0x7101ef0ba4
7101ef0c0c  ldr x0,[x21, #0x10]
7101ef0c10  adrp x1,0x710436c000
7101ef0c14  add x1,x1,#0xbbd
7101ef0c18  b 0x7101ef0b9c
7101ef0c1c  ldr x0,[x21, #0x10]
7101ef0c20  adrp x1,0x71042a3000
7101ef0c24  add x1,x1,#0x7d6
7101ef0c28  b 0x7101ef0b9c
