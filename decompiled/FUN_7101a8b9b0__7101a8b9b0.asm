// addr:      7101a8b9b0
// offset:    0x1a8b9b0
// name:      FUN_7101a8b9b0
// mangled:   
// size:      9916

7101a8b9b0  str d12,[sp, #-0x90]!
7101a8b9b4  stp d11,d10,[sp, #0x10]
7101a8b9b8  stp d9,d8,[sp, #0x20]
7101a8b9bc  stp x28,x27,[sp, #0x30]
7101a8b9c0  stp x26,x25,[sp, #0x40]
7101a8b9c4  stp x24,x23,[sp, #0x50]
7101a8b9c8  stp x22,x21,[sp, #0x60]
7101a8b9cc  stp x20,x19,[sp, #0x70]
7101a8b9d0  stp x29,x30,[sp, #0x80]
7101a8b9d4  add x29,sp,#0x80
7101a8b9d8  sub sp,sp,#0x1f0
7101a8b9dc  mov w8,#0x391c
7101a8b9e0  add x8,x0,x8
7101a8b9e4  str x8,[sp, #0x18]
7101a8b9e8  ldr w8,[x0, #0x10c]
7101a8b9ec  mov x19,x0
7101a8b9f0  cbz w8,0x7101a8bb6c
7101a8b9f4  ldr w8,[x19, #0x3824]
7101a8b9f8  cmp w8,#0x6
7101a8b9fc  b.hi 0x7101a8d228
7101a8ba00  adrp x9,0x71044f7000
7101a8ba04  add x9,x9,#0xb68
7101a8ba08  ldrsw x8,[x9, x8, LSL #0x2]
7101a8ba0c  add x8,x8,x9
7101a8ba10  br x8
7101a8ba14  ldr x8,[x19, #0x3920]
7101a8ba18  ldr w8,[x8, #0xe8]
7101a8ba1c  cmp w8,#0x6
7101a8ba20  ccmp w8,#0x0,#0x4,ne
7101a8ba24  b.ne 0x7101a8d228
7101a8ba28  ldr x8,[x19, #0x3850]
7101a8ba2c  ldr x9,[x19, #0x3848]
7101a8ba30  cmp x8,x9
7101a8ba34  b.ne 0x7101a8cac8
7101a8ba38  ldr x8,[x19, #0x3868]
7101a8ba3c  ldr x9,[x19, #0x3860]
7101a8ba40  cmp x8,x9
7101a8ba44  b.ne 0x7101a8cb14
7101a8ba48  ldr w8,[x19, #0x3914]
7101a8ba4c  cmp w8,#0x1
7101a8ba50  b.lt 0x7101a8d35c
7101a8ba54  mov w8,#0x3912
7101a8ba58  ldrb w8,[x19, x8, LSL ]
7101a8ba5c  cbz w8,0x7101a8badc
7101a8ba60  mov w8,#0x3913
7101a8ba64  ldrb w8,[x19, x8, LSL ]
7101a8ba68  cbnz w8,0x7101a8badc
7101a8ba6c  adrp x21,0x710532f000
7101a8ba70  ldr x8,[x21, #0x8d0]
7101a8ba74  ldr x22,[x8, #0x8]
7101a8ba78  adrp x8,0x7105329000
7101a8ba7c  ldr x20,[x8, #0xf38]
7101a8ba80  mov x0,x20
7101a8ba84  bl 0x71039c1a40
7101a8ba88  ldr x8,[x20, #0x28]
7101a8ba8c  ldrb w9,[x8, #0x58]
7101a8ba90  add x8,x8,#0x68
7101a8ba94  adrp x10,0x7104465000
7101a8ba98  add x10,x10,#0x568
7101a8ba9c  cmp w9,#0x0
7101a8baa0  csel x8,x10,x8,eq
7101a8baa4  ldr x23,[x8]
7101a8baa8  mov x0,x20
7101a8baac  bl 0x71039c1a50
7101a8bab0  ldr x8,[x22, #0x18]
7101a8bab4  cmp x8,x23
7101a8bab8  b.ne 0x7101a8bac0
7101a8babc  cbnz x8,0x7101a8badc
7101a8bac0  ldr x0,[x21, #0x8d0]
7101a8bac4  mov x1,#0x5d73
7101a8bac8  movk x1,#0xcace, LSL #16
7101a8bacc  movk x1,#0xff23, LSL #32
7101a8bad0  movk x1,#0xd9ff, LSL #48
7101a8bad4  mov w2,#0x1
7101a8bad8  bl 0x71033145d0
7101a8badc  adrp x8,0x710532f000
7101a8bae0  ldr x8,[x8, #0x8d0]
7101a8bae4  ldr x0,[x8, #0x8]
7101a8bae8  ldrb w8,[x0, #0x191]
7101a8baec  cbnz w8,0x7101a8d254
7101a8baf0  mov x20,#0x4bc9
7101a8baf4  movk x20,#0x59d6, LSL #16
7101a8baf8  movk x20,#0x19, LSL #32
7101a8bafc  mov w2,#0x4
7101a8bb00  mov x1,x20
7101a8bb04  bl 0x7103313f20
7101a8bb08  tbz w0,#0x0,0x7101a8d254
7101a8bb0c  add x0,sp,#0x160
7101a8bb10  mov x1,x20
7101a8bb14  bl 0x71024076d0
7101a8bb18  ldr x8,[sp, #0x170]
7101a8bb1c  adrp x9,0x7104f73000
7101a8bb20  add x9,x9,#0xd50
7101a8bb24  str x9,[sp, #0x168]
7101a8bb28  cbz x8,0x7101a8d280
7101a8bb2c  adrp x8,0x7106dd5000
7101a8bb30  ldrb w8,[x8, #0x3a8]
7101a8bb34  cmp w8,#0x1
7101a8bb38  b.ne 0x7101a8d280
7101a8bb3c  adrp x9,0x7106dd5000
7101a8bb40  ldr w8,[sp, #0x178]
7101a8bb44  ldr w9,[x9, #0x3ac]
7101a8bb48  cmp w8,w9
7101a8bb4c  b.ne 0x7101a8d280
7101a8bb50  ldr x8,[sp, #0x170]
7101a8bb54  ldr wzr,[x8, #0x38]!
7101a8bb58  ldaxr w9,[x8]
7101a8bb5c  sub w9,w9,#0x1
7101a8bb60  stlxr w10,w9,[x8]
7101a8bb64  cbnz w10,0x7101a8bb58
7101a8bb68  b 0x7101a8d280
7101a8bb6c  ldr x0,[x19, #0x128]
7101a8bb70  str wzr,[x19, #0x3824]
7101a8bb74  ldr x8,[x0]
7101a8bb78  ldr x8,[x8, #0x60]
7101a8bb7c  mov w1,wzr
7101a8bb80  blr x8
7101a8bb84  ldr x8,[x19, #0x128]
7101a8bb88  ldr x8,[x8, #0x38]
7101a8bb8c  cbz x8,0x7101a8bb9c
7101a8bb90  ldrb w9,[x8, #0x58]
7101a8bb94  and w9,w9,#0xfe
7101a8bb98  strb w9,[x8, #0x58]
7101a8bb9c  ldr x8,[x19, #0x3860]
7101a8bba0  str x8,[x19, #0x3868]
7101a8bba4  ldr x8,[x19, #0x3878]
7101a8bba8  ldr x9,[sp, #0x18]
7101a8bbac  str wzr,[x19, #0x3914]
7101a8bbb0  str x8,[x19, #0x3880]
7101a8bbb4  mov w8,#0x1
7101a8bbb8  strb w8,[x9]
7101a8bbbc  mov w8,#0x391d
7101a8bbc0  strh wzr,[x19, x8, LSL #0x0]
7101a8bbc4  mov w8,#0x3928
7101a8bbc8  strb wzr,[x19, x8, LSL ]
7101a8bbcc  ldr x26,[x19, #0x3848]
7101a8bbd0  ldr w8,[x26]
7101a8bbd4  str w8,[x19, #0x3938]
7101a8bbd8  ldr x27,[x19, #0x3850]
7101a8bbdc  cmp x27,x26
7101a8bbe0  ldr w8,[x26, #0x4]
7101a8bbe4  str w8,[x19, #0x393c]
7101a8bbe8  b.eq 0x7101a8d228
7101a8bbec  mov w8,#0x3898
7101a8bbf0  mov w9,#0x38a0
7101a8bbf4  add x8,x19,x8
7101a8bbf8  cmp x26,x27
7101a8bbfc  b.eq 0x7101a8c5a8
7101a8bc00  str x8,[sp, #0x28]
7101a8bc04  add x8,x19,x9
7101a8bc08  str x8,[sp, #0x30]
7101a8bc0c  mov w8,#0x38a8
7101a8bc10  add x8,x19,x8
7101a8bc14  str x8,[sp, #0x20]
7101a8bc18  mov w8,#0x38b0
7101a8bc1c  add x8,x19,x8
7101a8bc20  str x8,[sp, #0x10]
7101a8bc24  mov w8,#0x38b8
7101a8bc28  add x21,x19,x8
7101a8bc2c  sub x8,x29,#0xd0
7101a8bc30  add x8,x8,#0x20
7101a8bc34  orr w28,wzr,#0x38
7101a8bc38  mov w25,#0x6c8
7101a8bc3c  str x8,[sp, #0x38]
7101a8bc40  ldrsw x8,[x26]
7101a8bc44  cmp w8,#0x8
7101a8bc48  b.cs 0x7101a8e058
7101a8bc4c  ldrsw x9,[x26, #0x4]
7101a8bc50  cmp w9,#0x1e
7101a8bc54  b.cs 0x7101a8e058
7101a8bc58  madd x8,x8,x25,x19
7101a8bc5c  madd x8,x9,x28,x8
7101a8bc60  ldp x9,x10,[x8, #0x148]
7101a8bc64  ldp x11,x8,[x8, #0x158]
7101a8bc68  stp x11,x8,[x29, #-0xc0]
7101a8bc6c  stp x9,x10,[x29, #-0xd0]
7101a8bc70  ldr x8,[x19, #0x38a0]
7101a8bc74  ldr x9,[x19, #0x38a8]
7101a8bc78  cmp x8,x9
7101a8bc7c  b.eq 0x7101a8bca4
7101a8bc80  ldp x9,x10,[x29, #-0xd0]
7101a8bc84  ldp x11,x12,[x29, #-0xc0]
7101a8bc88  stp x11,x12,[x8, #0x10]
7101a8bc8c  stp x9,x10,[x8]
7101a8bc90  ldr x9,[sp, #0x30]
7101a8bc94  ldr x8,[x9]
7101a8bc98  add x8,x8,#0x20
7101a8bc9c  str x8,[x9]
7101a8bca0  b 0x7101a8bdb8
7101a8bca4  ldr x10,[sp, #0x28]
7101a8bca8  ldr x22,[x10]
7101a8bcac  sub x23,x8,x22
7101a8bcb0  asr x28,x23,#0x5
7101a8bcb4  add x8,x28,#0x1
7101a8bcb8  lsr x10,x8,#0x3b
7101a8bcbc  cbnz x10,0x7101a8e05c
7101a8bcc0  sub x9,x9,x22
7101a8bcc4  asr x10,x9,#0x5
7101a8bcc8  orr x11,xzr,#0x3fffffffffffffe
7101a8bccc  cmp x10,x11
7101a8bcd0  b.hi 0x7101a8bcf0
7101a8bcd4  asr x9,x9,#0x4
7101a8bcd8  cmp x9,x8
7101a8bcdc  csel x20,x8,x9,cc
7101a8bce0  cbz x20,0x7101a8bd54
7101a8bce4  lsr x8,x20,#0x3b
7101a8bce8  cbz x8,0x7101a8bcf4
7101a8bcec  b 0x7101a8e058
7101a8bcf0  orr x20,xzr,#0x7ffffffffffffff
7101a8bcf4  lsl x8,x20,#0x5
7101a8bcf8  cmp x8,#0x0
7101a8bcfc  csinc x25,x8,xzr,ne
7101a8bd00  mov w0,#0x10
7101a8bd04  mov x1,x25
7101a8bd08  bl 0x710392e290
7101a8bd0c  mov x24,x0
7101a8bd10  cbnz x0,0x7101a8bd58
7101a8bd14  adrp x8,0x7105332000
7101a8bd18  ldr x0,[x8, #0xf00]
7101a8bd1c  cbz x0,0x7101a8bd54
7101a8bd20  stur wzr,[x29, #-0x90]
7101a8bd24  str x25,[sp, #0x100]
7101a8bd28  ldr x8,[x0]
7101a8bd2c  ldr x8,[x8, #0x30]
7101a8bd30  sub x1,x29,#0x90
7101a8bd34  add x2,sp,#0x100
7101a8bd38  blr x8
7101a8bd3c  tbz w0,#0x0,0x7101a8bd54
7101a8bd40  mov w0,#0x10
7101a8bd44  mov x1,x25
7101a8bd48  bl 0x710392e290
7101a8bd4c  mov x24,x0
7101a8bd50  cbnz x0,0x7101a8bd58
7101a8bd54  mov x24,xzr
7101a8bd58  ldp x8,x9,[x29, #-0xd0]
7101a8bd5c  add x12,x24,x28, LSL #0x5
7101a8bd60  ldp x10,x11,[x29, #-0xc0]
7101a8bd64  add x20,x24,x20, LSL #0x5
7101a8bd68  add x25,x12,#0x20
7101a8bd6c  cmp x23,#0x1
7101a8bd70  stp x10,x11,[x12, #0x10]
7101a8bd74  stp x8,x9,[x12]
7101a8bd78  b.lt 0x7101a8bd8c
7101a8bd7c  mov x0,x24
7101a8bd80  mov x1,x22
7101a8bd84  mov x2,x23
7101a8bd88  bl 0x71039c00e0
7101a8bd8c  ldr x8,[sp, #0x28]
7101a8bd90  str x24,[x8]
7101a8bd94  ldr x8,[sp, #0x30]
7101a8bd98  str x25,[x8]
7101a8bd9c  ldr x8,[sp, #0x20]
7101a8bda0  orr w28,wzr,#0x38
7101a8bda4  mov w25,#0x6c8
7101a8bda8  str x20,[x8]
7101a8bdac  cbz x22,0x7101a8bdb8
7101a8bdb0  mov x0,x22
7101a8bdb4  bl 0x710392eb40
7101a8bdb8  ldr x8,[x19, #0x38b8]
7101a8bdbc  ldr x9,[x19, #0x38c0]
7101a8bdc0  cmp x8,x9
7101a8bdc4  ldr x22,[x19, #0x38b0]
7101a8bdc8  b.cs 0x7101a8be4c
7101a8bdcc  cmp x8,x22
7101a8bdd0  b.eq 0x7101a8bf10
7101a8bdd4  add x9,x22,#0x20
7101a8bdd8  sub x2,x8,x9
7101a8bddc  sub x10,x8,#0x20
7101a8bde0  cmp x10,x8
7101a8bde4  asr x9,x2,#0x5
7101a8bde8  b.cs 0x7101a8c1b8
7101a8bdec  sub x11,x8,x9, LSL #0x5
7101a8bdf0  mvn x12,x22
7101a8bdf4  add x12,x11,x12
7101a8bdf8  ubfx x11,x12,#0x5,#0x1b
7101a8bdfc  add w11,w11,#0x1
7101a8be00  ands x11,x11,#0x3
7101a8be04  b.eq 0x7101a8c02c
7101a8be08  add x13,x9,x11
7101a8be0c  neg x14,x11
7101a8be10  mov x11,x8
7101a8be14  ldp x15,x16,[x10]
7101a8be18  adds x14,x14,#0x1
7101a8be1c  ldp x17,x18,[x10, #0x10]
7101a8be20  add x10,x10,#0x20
7101a8be24  stp x17,x18,[x11, #0x10]
7101a8be28  stp x15,x16,[x11]
7101a8be2c  ldr x11,[x21]
7101a8be30  add x11,x11,#0x20
7101a8be34  str x11,[x21]
7101a8be38  b.ne 0x7101a8be14
7101a8be3c  add x10,x22,x13, LSL #0x5
7101a8be40  cmp x12,#0x60
7101a8be44  b.cs 0x7101a8c038
7101a8be48  b 0x7101a8c1b8
7101a8be4c  sub x8,x8,x22
7101a8be50  asr x8,x8,#0x5
7101a8be54  add x8,x8,#0x1
7101a8be58  lsr x10,x8,#0x3b
7101a8be5c  cbnz x10,0x7101a8e064
7101a8be60  sub x9,x9,x22
7101a8be64  asr x10,x9,#0x5
7101a8be68  orr x11,xzr,#0x3fffffffffffffe
7101a8be6c  cmp x10,x11
7101a8be70  b.hi 0x7101a8be90
7101a8be74  asr x9,x9,#0x4
7101a8be78  cmp x9,x8
7101a8be7c  csel x20,x8,x9,cc
7101a8be80  cbz x20,0x7101a8bf38
7101a8be84  lsr x8,x20,#0x3b
7101a8be88  cbz x8,0x7101a8be94
7101a8be8c  b 0x7101a8e058
7101a8be90  orr x20,xzr,#0x7ffffffffffffff
7101a8be94  lsl x8,x20,#0x5
7101a8be98  cmp x8,#0x0
7101a8be9c  csinc x23,x8,xzr,ne
7101a8bea0  mov w0,#0x10
7101a8bea4  mov x1,x23
7101a8bea8  bl 0x710392e290
7101a8beac  mov x24,x0
7101a8beb0  cbnz x0,0x7101a8bef8
7101a8beb4  adrp x8,0x7105332000
7101a8beb8  ldr x0,[x8, #0xf00]
7101a8bebc  cbz x0,0x7101a8bef4
7101a8bec0  stur wzr,[x29, #-0x90]
7101a8bec4  str x23,[sp, #0x100]
7101a8bec8  ldr x8,[x0]
7101a8becc  ldr x8,[x8, #0x30]
7101a8bed0  sub x1,x29,#0x90
7101a8bed4  add x2,sp,#0x100
7101a8bed8  blr x8
7101a8bedc  tbz w0,#0x0,0x7101a8bef4
7101a8bee0  mov w0,#0x10
7101a8bee4  mov x1,x23
7101a8bee8  bl 0x710392e290
7101a8beec  mov x24,x0
7101a8bef0  cbnz x0,0x7101a8bef8
7101a8bef4  mov x24,xzr
7101a8bef8  cbz x20,0x7101a8bf30
7101a8befc  add x20,x24,x20, LSL #0x5
7101a8bf00  add x23,x24,#0x20
7101a8bf04  mov x1,x22
7101a8bf08  mov x25,x24
7101a8bf0c  b 0x7101a8bfc0
7101a8bf10  ldp x8,x9,[x29, #-0xd0]
7101a8bf14  ldp x10,x11,[x29, #-0xc0]
7101a8bf18  stp x10,x11,[x22, #0x10]
7101a8bf1c  stp x8,x9,[x22]
7101a8bf20  ldr x8,[x21]
7101a8bf24  add x8,x8,#0x20
7101a8bf28  str x8,[x21]
7101a8bf2c  b 0x7101a8c1f8
7101a8bf30  mov x20,x24
7101a8bf34  b 0x7101a8bf3c
7101a8bf38  mov x24,xzr
7101a8bf3c  mov w0,#0x10
7101a8bf40  mov w1,#0x20
7101a8bf44  bl 0x710392e290
7101a8bf48  mov x25,x0
7101a8bf4c  cbnz x0,0x7101a8bf98
7101a8bf50  adrp x8,0x7105332000
7101a8bf54  ldr x0,[x8, #0xf00]
7101a8bf58  cbz x0,0x7101a8bf94
7101a8bf5c  mov w8,#0x20
7101a8bf60  stur wzr,[x29, #-0x90]
7101a8bf64  sub x1,x29,#0x90
7101a8bf68  str x8,[sp, #0x100]
7101a8bf6c  ldr x8,[x0]
7101a8bf70  ldr x8,[x8, #0x30]
7101a8bf74  add x2,sp,#0x100
7101a8bf78  blr x8
7101a8bf7c  tbz w0,#0x0,0x7101a8bf94
7101a8bf80  mov w0,#0x10
7101a8bf84  mov w1,#0x20
7101a8bf88  bl 0x710392e290
7101a8bf8c  mov x25,x0
7101a8bf90  cbnz x0,0x7101a8bf98
7101a8bf94  mov x25,xzr
7101a8bf98  add x23,x25,#0x20
7101a8bf9c  cbz x20,0x7101a8bfb8
7101a8bfa0  cbz x24,0x7101a8bfac
7101a8bfa4  mov x0,x24
7101a8bfa8  bl 0x710392eb40
7101a8bfac  ldr x8,[sp, #0x10]
7101a8bfb0  ldr x1,[x8]
7101a8bfb4  b 0x7101a8bfbc
7101a8bfb8  mov x1,x22
7101a8bfbc  mov x20,x23
7101a8bfc0  ldp x8,x9,[x29, #-0xd0]
7101a8bfc4  sub x2,x22,x1
7101a8bfc8  ldp x10,x11,[x29, #-0xc0]
7101a8bfcc  sub x24,x25,x2
7101a8bfd0  cmp x2,#0x1
7101a8bfd4  stp x10,x11,[x25, #0x10]
7101a8bfd8  stp x8,x9,[x25]
7101a8bfdc  b.lt 0x7101a8bfe8
7101a8bfe0  mov x0,x24
7101a8bfe4  bl 0x71039c00e0
7101a8bfe8  ldr x8,[x21]
7101a8bfec  sub x25,x8,x22
7101a8bff0  cmp x25,#0x1
7101a8bff4  b.lt 0x7101a8c00c
7101a8bff8  mov x0,x23
7101a8bffc  mov x1,x22
7101a8c000  mov x2,x25
7101a8c004  bl 0x71039c00e0
7101a8c008  add x23,x23,x25
7101a8c00c  ldr x0,[x19, #0x38b0]
7101a8c010  mov w25,#0x6c8
7101a8c014  str x24,[x19, #0x38b0]
7101a8c018  str x23,[x19, #0x38b8]
7101a8c01c  str x20,[x19, #0x38c0]
7101a8c020  cbz x0,0x7101a8c1f8
7101a8c024  bl 0x710392eb40
7101a8c028  b 0x7101a8c1f8
7101a8c02c  mov x11,x8
7101a8c030  cmp x12,#0x60
7101a8c034  b.cc 0x7101a8c1b8
7101a8c038  add x13,x10,#0x80
7101a8c03c  cmp x8,x13
7101a8c040  csel x12,x8,x13,hi
7101a8c044  sub x12,x12,x10
7101a8c048  sub x12,x12,#0x1
7101a8c04c  tbnz w12,#0x7,0x7101a8c0c4
7101a8c050  ldp x14,x15,[x10]
7101a8c054  ldp x16,x17,[x10, #0x10]
7101a8c058  stp x16,x17,[x11, #0x10]
7101a8c05c  stp x14,x15,[x11]
7101a8c060  ldr x11,[x21]
7101a8c064  add x14,x11,#0x20
7101a8c068  str x14,[x21]
7101a8c06c  ldp x14,x15,[x10, #0x20]
7101a8c070  ldp x16,x17,[x10, #0x30]
7101a8c074  stp x16,x17,[x11, #0x30]
7101a8c078  stp x14,x15,[x11, #0x20]
7101a8c07c  ldr x11,[x21]
7101a8c080  add x14,x11,#0x20
7101a8c084  str x14,[x21]
7101a8c088  ldp x14,x15,[x10, #0x40]
7101a8c08c  ldp x16,x17,[x10, #0x50]
7101a8c090  stp x16,x17,[x11, #0x30]
7101a8c094  stp x14,x15,[x11, #0x20]
7101a8c098  ldr x11,[x21]
7101a8c09c  add x14,x11,#0x20
7101a8c0a0  str x14,[x21]
7101a8c0a4  ldp x14,x15,[x10, #0x60]
7101a8c0a8  ldp x16,x10,[x10, #0x70]
7101a8c0ac  stp x16,x10,[x11, #0x30]
7101a8c0b0  stp x14,x15,[x11, #0x20]
7101a8c0b4  ldr x10,[x21]
7101a8c0b8  add x11,x10,#0x20
7101a8c0bc  mov x10,x13
7101a8c0c0  str x11,[x21]
7101a8c0c4  cmp x12,#0x80
7101a8c0c8  b.cc 0x7101a8c1b8
7101a8c0cc  ldp x12,x13,[x10]
7101a8c0d0  ldp x14,x15,[x10, #0x10]
7101a8c0d4  stp x14,x15,[x11, #0x10]
7101a8c0d8  stp x12,x13,[x11]
7101a8c0dc  ldr x11,[x21]
7101a8c0e0  add x12,x11,#0x20
7101a8c0e4  str x12,[x21]
7101a8c0e8  ldp x12,x13,[x10, #0x20]
7101a8c0ec  ldp x14,x15,[x10, #0x30]
7101a8c0f0  stp x14,x15,[x11, #0x30]
7101a8c0f4  stp x12,x13,[x11, #0x20]
7101a8c0f8  ldr x11,[x21]
7101a8c0fc  add x12,x11,#0x20
7101a8c100  str x12,[x21]
7101a8c104  ldp x12,x13,[x10, #0x40]
7101a8c108  ldp x14,x15,[x10, #0x50]
7101a8c10c  stp x14,x15,[x11, #0x30]
7101a8c110  stp x12,x13,[x11, #0x20]
7101a8c114  ldr x11,[x21]
7101a8c118  add x12,x11,#0x20
7101a8c11c  str x12,[x21]
7101a8c120  ldp x12,x13,[x10, #0x60]
7101a8c124  ldp x14,x15,[x10, #0x70]
7101a8c128  stp x14,x15,[x11, #0x30]
7101a8c12c  stp x12,x13,[x11, #0x20]
7101a8c130  ldr x11,[x21]
7101a8c134  add x12,x11,#0x20
7101a8c138  str x12,[x21]
7101a8c13c  ldp x12,x13,[x10, #0x80]
7101a8c140  ldp x14,x15,[x10, #0x90]
7101a8c144  stp x14,x15,[x11, #0x30]
7101a8c148  stp x12,x13,[x11, #0x20]
7101a8c14c  ldr x11,[x21]
7101a8c150  add x12,x11,#0x20
7101a8c154  str x12,[x21]
7101a8c158  ldp x12,x13,[x10, #0xa0]
7101a8c15c  ldp x14,x15,[x10, #0xb0]
7101a8c160  stp x14,x15,[x11, #0x30]
7101a8c164  stp x12,x13,[x11, #0x20]
7101a8c168  ldr x11,[x21]
7101a8c16c  add x12,x11,#0x20
7101a8c170  str x12,[x21]
7101a8c174  ldp x12,x13,[x10, #0xc0]
7101a8c178  ldp x14,x15,[x10, #0xd0]
7101a8c17c  stp x14,x15,[x11, #0x30]
7101a8c180  stp x12,x13,[x11, #0x20]
7101a8c184  ldr x11,[x21]
7101a8c188  add x12,x11,#0x20
7101a8c18c  str x12,[x21]
7101a8c190  ldp x12,x13,[x10, #0xe0]
7101a8c194  ldp x14,x15,[x10, #0xf0]
7101a8c198  add x10,x10,#0x100
7101a8c19c  cmp x10,x8
7101a8c1a0  stp x14,x15,[x11, #0x30]
7101a8c1a4  stp x12,x13,[x11, #0x20]
7101a8c1a8  ldr x11,[x21]
7101a8c1ac  add x11,x11,#0x20
7101a8c1b0  str x11,[x21]
7101a8c1b4  b.cc 0x7101a8c0cc
7101a8c1b8  cbz x2,0x7101a8c1c8
7101a8c1bc  sub x0,x8,x9, LSL #0x5
7101a8c1c0  mov x1,x22
7101a8c1c4  bl 0x71039c00a0
7101a8c1c8  sub x8,x29,#0xd0
7101a8c1cc  cmp x8,x22
7101a8c1d0  b.cc 0x7101a8c1e8
7101a8c1d4  ldr x8,[x21]
7101a8c1d8  sub x9,x29,#0xd0
7101a8c1dc  cmp x8,x9
7101a8c1e0  ldr x8,[sp, #0x38]
7101a8c1e4  csel x8,x8,x9,hi
7101a8c1e8  ldp x9,x10,[x8]
7101a8c1ec  ldp x11,x8,[x8, #0x10]
7101a8c1f0  stp x11,x8,[x22, #0x10]
7101a8c1f4  stp x9,x10,[x22]
7101a8c1f8  adrp x8,0x710532f000
7101a8c1fc  ldr x8,[x8, #0x730]
7101a8c200  ldr x8,[x8, #0x8]
7101a8c204  ldp w1,w2,[x26]
7101a8c208  ldr x0,[x8, #0x348]
7101a8c20c  bl 0x7103267660
7101a8c210  bl 0x7103268810
7101a8c214  add w8,w0,w0, LSL #0x1
7101a8c218  add w8,w8,#0x1
7101a8c21c  cmp w8,#0x1df
7101a8c220  b.hi 0x7101a8c258
7101a8c224  adrp x9,0x7105314000
7101a8c228  ldr x9,[x9, #0x510]
7101a8c22c  ldr x9,[x9]
7101a8c230  ldr x9,[x9, #0x248]
7101a8c234  ldr x9,[x9]
7101a8c238  ldr x9,[x9]
7101a8c23c  lsr w10,w8,#0x5
7101a8c240  mov w11,#0x1
7101a8c244  lsl x10,x10,#0x2
7101a8c248  lsl w8,w11,w8
7101a8c24c  ldr w11,[x9, x10, LSL #0x0]
7101a8c250  orr w8,w11,w8
7101a8c254  str w8,[x9, x10, LSL #0x0]
7101a8c258  ldrsw x8,[x26]
7101a8c25c  cmp w8,#0x8
7101a8c260  b.cs 0x7101a8e058
7101a8c264  madd x8,x8,x25,x19
7101a8c268  ldr w9,[x26, #0x4]
7101a8c26c  add x26,x26,#0x8
7101a8c270  cmp x26,x27
7101a8c274  str w9,[x8, #0x7f8]
7101a8c278  b.ne 0x7101a8bc40
7101a8c27c  b 0x7101a8c5c0
7101a8c280  ldr x8,[x19, #0x120]
7101a8c284  ldr x8,[x8]
7101a8c288  add x0,x8,#0x8
7101a8c28c  adrp x1,0x7104421000
7101a8c290  add x1,x1,#0xd19
7101a8c294  sub x8,x29,#0xd0
7101a8c298  bl 0x71037780e0
7101a8c29c  ldur x20,[x29, #-0xc8]
7101a8c2a0  ldr x0,[x20, #0x8]
7101a8c2a4  cbz x0,0x7101a8c95c
7101a8c2a8  ldr x8,[x0]
7101a8c2ac  ldr x8,[x8, #0x138]
7101a8c2b0  blr x8
7101a8c2b4  mov w21,w0
7101a8c2b8  b 0x7101a8c960
7101a8c2bc  ldr w8,[x19, #0x3914]
7101a8c2c0  subs w8,w8,#0x1
7101a8c2c4  b.lt 0x7101a8d224
7101a8c2c8  mov w9,#0x3928
7101a8c2cc  ldrb w9,[x19, x9, LSL ]
7101a8c2d0  cbz w9,0x7101a8cb20
7101a8c2d4  ldr s0,[x19, #0x392c]
7101a8c2d8  scvtf s0,s0
7101a8c2dc  mov x0,x19
7101a8c2e0  str wzr,[x19, #0x3914]
7101a8c2e4  str s0,[x19, #0x3840]
7101a8c2e8  bl 0x7101a936a0
7101a8c2ec  ldr w8,[x19, #0x3930]
7101a8c2f0  ldr w9,[x19, #0x3834]
7101a8c2f4  cmp w8,w9
7101a8c2f8  b.le 0x7101a8d228
7101a8c2fc  sub w8,w8,#0x1
7101a8c300  str w8,[x19, #0x3930]
7101a8c304  str w8,[x19, #0x3834]
7101a8c308  adrp x8,0x710532f000
7101a8c30c  ldr x8,[x8, #0x8d0]
7101a8c310  ldr x0,[x8, #0x8]
7101a8c314  ldrb w8,[x0, #0x191]
7101a8c318  cbnz w8,0x7101a8d0e8
7101a8c31c  mov x20,#0x7317
7101a8c320  movk x20,#0x6242, LSL #16
7101a8c324  movk x20,#0x1d, LSL #32
7101a8c328  mov w2,#0x4
7101a8c32c  mov x1,x20
7101a8c330  bl 0x7103313f20
7101a8c334  tbz w0,#0x0,0x7101a8d0e8
7101a8c338  add x0,sp,#0x40
7101a8c33c  mov x1,x20
7101a8c340  bl 0x71024076d0
7101a8c344  ldr x8,[sp, #0x50]
7101a8c348  adrp x9,0x7104f73000
7101a8c34c  add x9,x9,#0xd50
7101a8c350  str x9,[sp, #0x48]
7101a8c354  cbz x8,0x7101a8d114
7101a8c358  adrp x8,0x7106dd5000
7101a8c35c  ldrb w8,[x8, #0x3a8]
7101a8c360  cmp w8,#0x1
7101a8c364  b.ne 0x7101a8d114
7101a8c368  adrp x9,0x7106dd5000
7101a8c36c  ldr w8,[sp, #0x58]
7101a8c370  ldr w9,[x9, #0x3ac]
7101a8c374  cmp w8,w9
7101a8c378  b.ne 0x7101a8d114
7101a8c37c  ldr x8,[sp, #0x50]
7101a8c380  ldr wzr,[x8, #0x38]!
7101a8c384  ldaxr w9,[x8]
7101a8c388  sub w9,w9,#0x1
7101a8c38c  stlxr w10,w9,[x8]
7101a8c390  cbnz w10,0x7101a8c384
7101a8c394  b 0x7101a8d114
7101a8c398  ldr x8,[x19, #0x3920]
7101a8c39c  ldr w9,[x8, #0xe8]
7101a8c3a0  cbz w9,0x7101a8d1d0
7101a8c3a4  ldr w8,[x8, #0xf8]
7101a8c3a8  cbz w8,0x7101a8d1d0
7101a8c3ac  ldr x8,[x19, #0x3868]
7101a8c3b0  ldur w1,[x8, #-0x4]
7101a8c3b4  mov x0,x19
7101a8c3b8  bl 0x7101a91d70
7101a8c3bc  mov w8,#0x3779
7101a8c3c0  ldrb w8,[x19, x8, LSL ]
7101a8c3c4  cbz w8,0x7101a8d1d0
7101a8c3c8  ldr x8,[x19, #0x120]
7101a8c3cc  ldr x8,[x8]
7101a8c3d0  add x0,x8,#0x8
7101a8c3d4  adrp x1,0x7104291000
7101a8c3d8  add x1,x1,#0x691
7101a8c3dc  sub x8,x29,#0xd0
7101a8c3e0  bl 0x7103776640
7101a8c3e4  adrp x1,0x7104349000
7101a8c3e8  add x1,x1,#0xde4
7101a8c3ec  add x8,sp,#0x100
7101a8c3f0  sub x0,x29,#0xd0
7101a8c3f4  bl 0x71037780e0
7101a8c3f8  ldr x20,[sp, #0x108]
7101a8c3fc  ldr x21,[x20, #0x8]
7101a8c400  cbz x21,0x7101a8d184
7101a8c404  ldrb w8,[x20, #0x10]
7101a8c408  cbz w8,0x7101a8c4d0
7101a8c40c  ldr x8,[x20]
7101a8c410  ldr x23,[x8, #0x80]
7101a8c414  add x22,x8,#0x88
7101a8c418  cmp x23,x22
7101a8c41c  b.eq 0x7101a8c4d0
7101a8c420  ldr x0,[x23, #0x68]
7101a8c424  ldr x8,[x0]
7101a8c428  ldr x8,[x8, #0x148]
7101a8c42c  blr x8
7101a8c430  tbz w0,#0x0,0x7101a8c470
7101a8c434  ldr x8,[x21]
7101a8c438  ldr x1,[x23, #0x68]
7101a8c43c  mov x0,x21
7101a8c440  ldr x8,[x8, #0x120]
7101a8c444  blr x8
7101a8c448  tbz w0,#0x0,0x7101a8c470
7101a8c44c  ldr x0,[x23, #0x68]
7101a8c450  ldr x8,[x0]
7101a8c454  ldr x8,[x8, #0x178]
7101a8c458  blr x8
7101a8c45c  ldr x0,[x23, #0x68]
7101a8c460  ldr x8,[x0]
7101a8c464  ldr x8,[x8, #0x140]
7101a8c468  mov w1,wzr
7101a8c46c  blr x8
7101a8c470  ldr x8,[x23, #0x8]
7101a8c474  cbz x8,0x7101a8c488
7101a8c478  mov x23,x8
7101a8c47c  ldr x8,[x8]
7101a8c480  cbnz x8,0x7101a8c478
7101a8c484  b 0x7101a8c4b4
7101a8c488  mov x8,x23
7101a8c48c  ldr x9,[x8, #0x10]!
7101a8c490  ldr x10,[x9]
7101a8c494  cmp x10,x23
7101a8c498  b.eq 0x7101a8c4c0
7101a8c49c  ldr x9,[x8]
7101a8c4a0  mov x8,x9
7101a8c4a4  ldr x23,[x8, #0x10]!
7101a8c4a8  ldr x10,[x23]
7101a8c4ac  cmp x10,x9
7101a8c4b0  b.ne 0x7101a8c49c
7101a8c4b4  cmp x23,x22
7101a8c4b8  b.ne 0x7101a8c420
7101a8c4bc  b 0x7101a8c4cc
7101a8c4c0  mov x23,x9
7101a8c4c4  cmp x23,x22
7101a8c4c8  b.ne 0x7101a8c420
7101a8c4cc  ldr x21,[x20, #0x8]
7101a8c4d0  ldr x8,[x21]
7101a8c4d4  ldr x8,[x8, #0x188]
7101a8c4d8  mov x0,x21
7101a8c4dc  blr x8
7101a8c4e0  adrp x8,0x710523d000
7101a8c4e4  add x8,x8,#0x9e8
7101a8c4e8  stp x8,xzr,[sp, #0x100]
7101a8c4ec  b 0x7101a8d194
7101a8c4f0  ldr x8,[x19, #0x120]
7101a8c4f4  ldr x8,[x8]
7101a8c4f8  ldr x9,[x19, #0x3850]
7101a8c4fc  ldr x10,[x19, #0x3848]
7101a8c500  cmp x9,x10
7101a8c504  ldr x20,[x8]
7101a8c508  b.ne 0x7101a8c8c0
7101a8c50c  mov x0,x20
7101a8c510  mov w1,wzr
7101a8c514  bl 0x71037760f0
7101a8c518  mov w8,#0x3912
7101a8c51c  ldrb w8,[x19, x8, LSL ]
7101a8c520  cbz w8,0x7101a8c530
7101a8c524  mov w8,#0x3913
7101a8c528  ldrb w8,[x19, x8, LSL ]
7101a8c52c  cbz w8,0x7101a8d128
7101a8c530  adrp x8,0x710532f000
7101a8c534  ldr x8,[x8, #0x8d0]
7101a8c538  ldr x8,[x8, #0x8]
7101a8c53c  ldr x9,[x8]
7101a8c540  ldr x8,[x19, #0x3920]
7101a8c544  ldp x10,x11,[x8, #0x100]
7101a8c548  cmp x10,x11
7101a8c54c  b.ne 0x7101a8d154
7101a8c550  ldp x10,x11,[x8, #0x118]
7101a8c554  cmp x10,x11
7101a8c558  b.ne 0x7101a8d154
7101a8c55c  b 0x7101a8d348
7101a8c560  ldr x8,[x19, #0x120]
7101a8c564  ldr x8,[x8]
7101a8c568  add x0,x8,#0x8
7101a8c56c  adrp x1,0x71042a2000
7101a8c570  add x1,x1,#0xa1f
7101a8c574  sub x8,x29,#0xd0
7101a8c578  bl 0x71037780e0
7101a8c57c  ldur x20,[x29, #-0xc8]
7101a8c580  ldr x0,[x20, #0x8]
7101a8c584  cbz x0,0x7101a8c98c
7101a8c588  ldr x8,[x0]
7101a8c58c  ldr x8,[x8, #0x138]
7101a8c590  blr x8
7101a8c594  mov w21,w0
7101a8c598  b 0x7101a8c990
7101a8c59c  ldr x8,[x19, #0x3898]
7101a8c5a0  str x8,[x19, #0x38a0]
7101a8c5a4  b 0x7101a8d224
7101a8c5a8  str x8,[sp, #0x28]
7101a8c5ac  add x8,x19,x9
7101a8c5b0  str x8,[sp, #0x30]
7101a8c5b4  mov w8,#0x38a8
7101a8c5b8  add x8,x19,x8
7101a8c5bc  str x8,[sp, #0x20]
7101a8c5c0  mov w8,#0x3878
7101a8c5c4  add x27,x19,x8
7101a8c5c8  mov w8,#0x3778
7101a8c5cc  mov w20,wzr
7101a8c5d0  add x22,x19,#0x138
7101a8c5d4  str x27,[sp, #0x8]
7101a8c5d8  add x8,x19,x8
7101a8c5dc  mov x28,#0x6200000000000000
7101a8c5e0  str x8,[sp, #0x38]
7101a8c5e4  b 0x7101a8c5f0
7101a8c5e8  mov x26,xzr
7101a8c5ec  b 0x7101a8c7d4
7101a8c5f0  adrp x8,0x710532f000
7101a8c5f4  ldr x25,[x8, #0x730]
7101a8c5f8  add x21,x22,#0x690
7101a8c5fc  add x23,x22,#0x694
7101a8c600  mov w24,#0x1
7101a8c604  mov x26,x22
7101a8c608  ldr x8,[x25, #0x8]
7101a8c60c  ldr w1,[x23]
7101a8c610  ldr w2,[x26, #0xc]
7101a8c614  ldr x0,[x8, #0x348]
7101a8c618  bl 0x7103267660
7101a8c61c  and x9,x0,#-0x100000000000000
7101a8c620  and x8,x0,#0xffffffffff
7101a8c624  cmp x9,x28
7101a8c628  ccmp x8,#0x0,#0x4,eq
7101a8c62c  b.eq 0x7101a8c698
7101a8c630  ldrb w8,[x22, #0x690]
7101a8c634  cmp w8,#0x0
7101a8c638  cset w8,eq
7101a8c63c  and w24,w24,w8
7101a8c640  ldr w8,[x26]
7101a8c644  cmp w8,#0x3
7101a8c648  b.eq 0x7101a8c698
7101a8c64c  ldr x8,[x19, #0x3848]
7101a8c650  ldr x9,[x19, #0x3850]
7101a8c654  cmp x8,x9
7101a8c658  b.eq 0x7101a8c68c
7101a8c65c  ldr w10,[x23]
7101a8c660  ldr w11,[x26, #0xc]
7101a8c664  ldr w12,[x8]
7101a8c668  cmp w12,w10
7101a8c66c  b.ne 0x7101a8c67c
7101a8c670  ldr w12,[x8, #0x4]
7101a8c674  cmp w12,w11
7101a8c678  b.eq 0x7101a8c68c
7101a8c67c  add x8,x8,#0x8
7101a8c680  cmp x9,x8
7101a8c684  b.ne 0x7101a8c664
7101a8c688  mov x8,x9
7101a8c68c  cmp x8,x9
7101a8c690  cset w8,ne
7101a8c694  and w24,w24,w8
7101a8c698  add x26,x26,#0x38
7101a8c69c  cmp x26,x21
7101a8c6a0  b.ne 0x7101a8c608
7101a8c6a4  tbz w24,#0x0,0x7101a8c858
7101a8c6a8  ldrsw x8,[x23]
7101a8c6ac  cmp w8,#0x6
7101a8c6b0  b.ne 0x7101a8c6bc
7101a8c6b4  mov w20,#0x1
7101a8c6b8  b 0x7101a8c844
7101a8c6bc  cmp w8,#0x8
7101a8c6c0  b.cs 0x7101a8e058
7101a8c6c4  mov w9,#0x6c8
7101a8c6c8  madd x8,x8,x9,x19
7101a8c6cc  ldr x9,[x8, #0x7d0]
7101a8c6d0  ldr x10,[x8, #0x7d8]
7101a8c6d4  ldr x11,[x8, #0x7e0]
7101a8c6d8  ldr x8,[x8, #0x7e8]
7101a8c6dc  stp x11,x8,[x29, #-0xc0]
7101a8c6e0  stp x9,x10,[x29, #-0xd0]
7101a8c6e4  ldr x8,[x19, #0x38a0]
7101a8c6e8  ldr x9,[x19, #0x38a8]
7101a8c6ec  cmp x8,x9
7101a8c6f0  b.eq 0x7101a8c718
7101a8c6f4  ldp x9,x10,[x29, #-0xd0]
7101a8c6f8  ldp x11,x12,[x29, #-0xc0]
7101a8c6fc  stp x11,x12,[x8, #0x10]
7101a8c700  stp x9,x10,[x8]
7101a8c704  ldr x9,[sp, #0x30]
7101a8c708  ldr x8,[x9]
7101a8c70c  add x8,x8,#0x20
7101a8c710  str x8,[x9]
7101a8c714  b 0x7101a8c830
7101a8c718  ldr x10,[sp, #0x28]
7101a8c71c  ldr x24,[x10]
7101a8c720  sub x25,x8,x24
7101a8c724  asr x21,x25,#0x5
7101a8c728  add x8,x21,#0x1
7101a8c72c  lsr x10,x8,#0x3b
7101a8c730  cbnz x10,0x7101a8e05c
7101a8c734  sub x9,x9,x24
7101a8c738  asr x10,x9,#0x5
7101a8c73c  orr x11,xzr,#0x3fffffffffffffe
7101a8c740  cmp x10,x11
7101a8c744  str w20,[sp, #0x10]
7101a8c748  b.hi 0x7101a8c768
7101a8c74c  asr x9,x9,#0x4
7101a8c750  cmp x9,x8
7101a8c754  csel x20,x8,x9,cc
7101a8c758  cbz x20,0x7101a8c5e8
7101a8c75c  lsr x8,x20,#0x3b
7101a8c760  cbz x8,0x7101a8c76c
7101a8c764  b 0x7101a8e058
7101a8c768  orr x20,xzr,#0x7ffffffffffffff
7101a8c76c  lsl x8,x20,#0x5
7101a8c770  cmp x8,#0x0
7101a8c774  csinc x27,x8,xzr,ne
7101a8c778  mov w0,#0x10
7101a8c77c  mov x1,x27
7101a8c780  bl 0x710392e290
7101a8c784  mov x26,x0
7101a8c788  cbnz x0,0x7101a8c7d0
7101a8c78c  adrp x8,0x7105332000
7101a8c790  ldr x0,[x8, #0xf00]
7101a8c794  cbz x0,0x7101a8c7cc
7101a8c798  stur wzr,[x29, #-0x90]
7101a8c79c  str x27,[sp, #0x100]
7101a8c7a0  ldr x8,[x0]
7101a8c7a4  ldr x8,[x8, #0x30]
7101a8c7a8  sub x1,x29,#0x90
7101a8c7ac  add x2,sp,#0x100
7101a8c7b0  blr x8
7101a8c7b4  tbz w0,#0x0,0x7101a8c7cc
7101a8c7b8  mov w0,#0x10
7101a8c7bc  mov x1,x27
7101a8c7c0  bl 0x710392e290
7101a8c7c4  mov x26,x0
7101a8c7c8  cbnz x0,0x7101a8c7d0
7101a8c7cc  mov x26,xzr
7101a8c7d0  ldr x27,[sp, #0x8]
7101a8c7d4  ldp x8,x9,[x29, #-0xd0]
7101a8c7d8  add x12,x26,x21, LSL #0x5
7101a8c7dc  ldp x10,x11,[x29, #-0xc0]
7101a8c7e0  add x20,x26,x20, LSL #0x5
7101a8c7e4  add x21,x12,#0x20
7101a8c7e8  cmp x25,#0x1
7101a8c7ec  stp x10,x11,[x12, #0x10]
7101a8c7f0  stp x8,x9,[x12]
7101a8c7f4  b.lt 0x7101a8c808
7101a8c7f8  mov x0,x26
7101a8c7fc  mov x1,x24
7101a8c800  mov x2,x25
7101a8c804  bl 0x71039c00e0
7101a8c808  ldr x8,[sp, #0x28]
7101a8c80c  str x26,[x8]
7101a8c810  ldr x8,[sp, #0x30]
7101a8c814  str x21,[x8]
7101a8c818  ldr x8,[sp, #0x20]
7101a8c81c  str x20,[x8]
7101a8c820  ldr w20,[sp, #0x10]
7101a8c824  cbz x24,0x7101a8c830
7101a8c828  mov x0,x24
7101a8c82c  bl 0x710392eb40
7101a8c830  ldr x1,[x27]
7101a8c834  mov x0,x27
7101a8c838  mov x2,x23
7101a8c83c  bl 0x71019bfdd0
7101a8c840  ldr w8,[x23]
7101a8c844  ldr w9,[x22, #0x6c0]
7101a8c848  mov w0,#0x84
7101a8c84c  str w8,[x19, #0x3938]
7101a8c850  str w9,[x19, #0x393c]
7101a8c854  bl 0x710176b770
7101a8c858  ldr x8,[sp, #0x38]
7101a8c85c  add x22,x22,#0x6c8
7101a8c860  cmp x22,x8
7101a8c864  b.ne 0x7101a8c5f0
7101a8c868  tbz w20,#0x0,0x7101a8ccf8
7101a8c86c  orr w8,wzr,#0x6
7101a8c870  stur w8,[x29, #-0x74]
7101a8c874  ldr x8,[x19, #0x3080]
7101a8c878  ldr x9,[x19, #0x3088]
7101a8c87c  ldr x10,[x19, #0x3090]
7101a8c880  ldr x11,[x19, #0x3098]
7101a8c884  stp x10,x11,[x29, #-0xc0]
7101a8c888  stp x8,x9,[x29, #-0xd0]
7101a8c88c  ldr x8,[x19, #0x38a0]
7101a8c890  ldr x9,[x19, #0x38a8]
7101a8c894  cmp x8,x9
7101a8c898  b.eq 0x7101a8c910
7101a8c89c  ldp x9,x10,[x29, #-0xd0]
7101a8c8a0  ldp x11,x12,[x29, #-0xc0]
7101a8c8a4  stp x11,x12,[x8, #0x10]
7101a8c8a8  stp x9,x10,[x8]
7101a8c8ac  ldr x9,[sp, #0x30]
7101a8c8b0  ldr x8,[x9]
7101a8c8b4  add x8,x8,#0x20
7101a8c8b8  str x8,[x9]
7101a8c8bc  b 0x7101a8ccd8
7101a8c8c0  ldur w3,[x9, #-0x4]
7101a8c8c4  ldr w2,[x19, #0x377c]
7101a8c8c8  add x0,x8,#0x8
7101a8c8cc  adrp x1,0x71043f0000
7101a8c8d0  add x1,x1,#0x46b
7101a8c8d4  sub x8,x29,#0xd0
7101a8c8d8  bl 0x7103776640
7101a8c8dc  adrp x1,0x71043ff000
7101a8c8e0  add x1,x1,#0xfcb
7101a8c8e4  add x8,sp,#0x100
7101a8c8e8  sub x0,x29,#0xd0
7101a8c8ec  bl 0x71037780e0
7101a8c8f0  ldr x22,[sp, #0x108]
7101a8c8f4  ldr x0,[x22, #0x8]
7101a8c8f8  cbz x0,0x7101a8cf80
7101a8c8fc  ldr x8,[x0]
7101a8c900  ldr x8,[x8, #0x138]
7101a8c904  blr x8
7101a8c908  mov w21,w0
7101a8c90c  b 0x7101a8cf84
7101a8c910  ldr x10,[sp, #0x28]
7101a8c914  ldr x22,[x10]
7101a8c918  sub x23,x8,x22
7101a8c91c  asr x20,x23,#0x5
7101a8c920  add x8,x20,#0x1
7101a8c924  lsr x10,x8,#0x3b
7101a8c928  cbnz x10,0x7101a8e05c
7101a8c92c  sub x9,x9,x22
7101a8c930  asr x10,x9,#0x5
7101a8c934  orr x11,xzr,#0x3fffffffffffffe
7101a8c938  cmp x10,x11
7101a8c93c  b.hi 0x7101a8cc18
7101a8c940  asr x9,x9,#0x4
7101a8c944  cmp x9,x8
7101a8c948  csel x21,x8,x9,cc
7101a8c94c  cbz x21,0x7101a8cc7c
7101a8c950  lsr x8,x21,#0x3b
7101a8c954  cbz x8,0x7101a8cc1c
7101a8c958  b 0x7101a8e058
7101a8c95c  mov w21,#0x1
7101a8c960  adrp x8,0x710523d000
7101a8c964  add x8,x8,#0x9e8
7101a8c968  stp x8,xzr,[x29, #-0xd0]
7101a8c96c  cbz x20,0x7101a8c978
7101a8c970  mov x0,x20
7101a8c974  bl 0x710392eb40
7101a8c978  tbz w21,#0x0,0x7101a8d228
7101a8c97c  mov x0,x19
7101a8c980  mov w1,wzr
7101a8c984  bl 0x7101a8fdf0
7101a8c988  b 0x7101a8d224
7101a8c98c  mov w21,#0x1
7101a8c990  adrp x8,0x710523d000
7101a8c994  add x8,x8,#0x9e8
7101a8c998  stp x8,xzr,[x29, #-0xd0]
7101a8c99c  cbz x20,0x7101a8c9a8
7101a8c9a0  mov x0,x20
7101a8c9a4  bl 0x710392eb40
7101a8c9a8  tbz w21,#0x0,0x7101a8d228
7101a8c9ac  ldr w9,[x19, #0x3918]
7101a8c9b0  cmp w9,#0x1e
7101a8c9b4  b.lt 0x7101a8d580
7101a8c9b8  ldr x8,[x19, #0x3880]
7101a8c9bc  ldursw x8,[x8, #-0x4]
7101a8c9c0  cmp w8,#0x8
7101a8c9c4  b.cs 0x7101a8e058
7101a8c9c8  mov w10,#0x6c8
7101a8c9cc  madd x8,x8,x10,x19
7101a8c9d0  ldr x10,[x8, #0x7d0]
7101a8c9d4  ldr x11,[x8, #0x7d8]
7101a8c9d8  ldr x12,[x8, #0x7e0]
7101a8c9dc  ldr x8,[x8, #0x7e8]
7101a8c9e0  stp x12,x8,[x29, #-0xc0]
7101a8c9e4  stp x10,x11,[x29, #-0xd0]
7101a8c9e8  ldr x8,[x19, #0x3920]
7101a8c9ec  ldr w8,[x8, #0xe8]
7101a8c9f0  cmp w8,#0x6
7101a8c9f4  b.eq 0x7101a8c9fc
7101a8c9f8  cbnz w8,0x7101a8d580
7101a8c9fc  ldur x8,[x29, #-0xb8]
7101a8ca00  str x8,[sp, #0x118]
7101a8ca04  ldur x8,[x29, #-0xc0]
7101a8ca08  str x8,[sp, #0x110]
7101a8ca0c  ldur x8,[x29, #-0xc8]
7101a8ca10  str x8,[sp, #0x108]
7101a8ca14  ldur x8,[x29, #-0xd0]
7101a8ca18  str x8,[sp, #0x100]
7101a8ca1c  ldr x0,[x19, #0x38d8]
7101a8ca20  ldr x21,[x19, #0x38c8]
7101a8ca24  mov w8,#0x38c8
7101a8ca28  add x20,x19,x8
7101a8ca2c  cmp x0,x21
7101a8ca30  b.ne 0x7101a8d294
7101a8ca34  cbz x0,0x7101a8ca48
7101a8ca38  str x0,[x19, #0x38d0]
7101a8ca3c  bl 0x710392eb40
7101a8ca40  stp xzr,xzr,[x20, #0x8]
7101a8ca44  str xzr,[x20]
7101a8ca48  mov w0,#0x10
7101a8ca4c  mov w1,#0x20
7101a8ca50  bl 0x710392e290
7101a8ca54  cbnz x0,0x7101a8ca9c
7101a8ca58  adrp x8,0x7105332000
7101a8ca5c  ldr x0,[x8, #0xf00]
7101a8ca60  cbz x0,0x7101a8ca98
7101a8ca64  mov w8,#0x20
7101a8ca68  stur wzr,[x29, #-0x74]
7101a8ca6c  sub x1,x29,#0x74
7101a8ca70  stur x8,[x29, #-0x90]
7101a8ca74  ldr x8,[x0]
7101a8ca78  ldr x8,[x8, #0x30]
7101a8ca7c  sub x2,x29,#0x90
7101a8ca80  blr x8
7101a8ca84  tbz w0,#0x0,0x7101a8ca98
7101a8ca88  mov w0,#0x10
7101a8ca8c  mov w1,#0x20
7101a8ca90  bl 0x710392e290
7101a8ca94  cbnz x0,0x7101a8ca9c
7101a8ca98  mov x0,xzr
7101a8ca9c  add x8,x0,#0x20
7101a8caa0  str x0,[x19, #0x38d0]
7101a8caa4  str x0,[x19, #0x38c8]
7101a8caa8  str x8,[x19, #0x38d8]
7101a8caac  ldp x8,x9,[sp, #0x100]
7101a8cab0  ldp x10,x11,[sp, #0x110]
7101a8cab4  stp x8,x9,[x0]
7101a8cab8  mov x8,x0
7101a8cabc  stp x10,x11,[x0, #0x10]
7101a8cac0  add x8,x8,#0x20
7101a8cac4  b 0x7101a8d2d0
7101a8cac8  mov w9,#0x3890
7101a8cacc  mov w10,#0x1
7101a8cad0  strb w10,[x19, x9, LSL ]
7101a8cad4  ldur w1,[x8, #-0x8]
7101a8cad8  ldr w9,[x19, #0x377c]
7101a8cadc  cmp w1,w9
7101a8cae0  b.ne 0x7101a8d054
7101a8cae4  ldur w1,[x8, #-0x4]
7101a8cae8  mov x0,x19
7101a8caec  bl 0x7101a91d70
7101a8caf0  ldr x8,[x19, #0x3850]
7101a8caf4  mov w9,#0x3928
7101a8caf8  mov x0,x19
7101a8cafc  ldrb w9,[x19, x9, LSL ]
7101a8cb00  ldur w1,[x8, #-0x4]
7101a8cb04  cmp w9,#0x0
7101a8cb08  cset w2,eq
7101a8cb0c  mov w3,wzr
7101a8cb10  bl 0x7101a910c0
7101a8cb14  orr w8,wzr,#0x3
7101a8cb18  str w8,[x19, #0x3824]
7101a8cb1c  b 0x7101a8d228
7101a8cb20  mov w20,#0x6667
7101a8cb24  movk w20,#0x6666, LSL #16
7101a8cb28  smull x9,w8,w20
7101a8cb2c  lsr x10,x9,#0x3f
7101a8cb30  asr x9,x9,#0x22
7101a8cb34  str w8,[x19, #0x3914]
7101a8cb38  mov w21,#0xa
7101a8cb3c  neg w8,w8
7101a8cb40  fmov s2,0x41200000
7101a8cb44  ldr s1,[x19, #0x3840]
7101a8cb48  mov x0,x19
7101a8cb4c  add w9,w9,w10
7101a8cb50  madd w8,w9,w21,w8
7101a8cb54  add w8,w8,#0xa
7101a8cb58  scvtf s0,w8
7101a8cb5c  fdiv s0,s0,s2
7101a8cb60  fadd s0,s0,s1
7101a8cb64  bl 0x7101a936a0
7101a8cb68  ldrsw x9,[x19, #0x3914]
7101a8cb6c  mul x8,x9,x20
7101a8cb70  lsr x10,x8,#0x3f
7101a8cb74  asr x8,x8,#0x22
7101a8cb78  add w8,w8,w10
7101a8cb7c  msub w8,w8,w21,w9
7101a8cb80  cbnz w8,0x7101a8d228
7101a8cb84  ldr s0,[x19, #0x3840]
7101a8cb88  fmov s1,0x3f800000
7101a8cb8c  fadd s0,s0,s1
7101a8cb90  ldr x8,[x19, #0x38e8]
7101a8cb94  str s0,[x19, #0x3840]
7101a8cb98  ldrb w10,[x8]
7101a8cb9c  cmp w10,#0xc
7101a8cba0  b.ne 0x7101a8d4e4
7101a8cba4  ldur w11,[x8, #0x1]
7101a8cba8  subs w12,w11,#0x1
7101a8cbac  b.lt 0x7101a8d4e4
7101a8cbb0  ldr x15,[x19, #0x38e0]
7101a8cbb4  ldursw x11,[x8, #0x5]
7101a8cbb8  mov x16,#0x4e24
7101a8cbbc  movk x16,#0x58b0, LSL #16
7101a8cbc0  movk x16,#0xe, LSL #32
7101a8cbc4  mov w13,wzr
7101a8cbc8  ldp x14,x15,[x15, #0x20]
7101a8cbcc  add x15,x15,x11
7101a8cbd0  adrp x11,0x7104742000
7101a8cbd4  add x11,x11,#0xdbb
7101a8cbd8  add w17,w12,w13
7101a8cbdc  cmp w17,#0x0
7101a8cbe0  cinc w17,w17,lt
7101a8cbe4  asr w17,w17,#0x1
7101a8cbe8  add x18,x15,w17, SXTW  #0x3
7101a8cbec  ldr w0,[x18]
7101a8cbf0  ldr x0,[x14, x0, LSL #0x3]
7101a8cbf4  cmp x0,x16
7101a8cbf8  b.eq 0x7101a8d77c
7101a8cbfc  sub w18,w17,#0x1
7101a8cc00  cmp x0,x16
7101a8cc04  csel w12,w18,w12,hi
7101a8cc08  csinc w13,w13,w17,hi
7101a8cc0c  cmp w13,w12
7101a8cc10  b.le 0x7101a8cbd8
7101a8cc14  b 0x7101a8d4ec
7101a8cc18  orr x21,xzr,#0x7ffffffffffffff
7101a8cc1c  lsl x8,x21,#0x5
7101a8cc20  cmp x8,#0x0
7101a8cc24  csinc x25,x8,xzr,ne
7101a8cc28  mov w0,#0x10
7101a8cc2c  mov x1,x25
7101a8cc30  bl 0x710392e290
7101a8cc34  mov x24,x0
7101a8cc38  cbnz x0,0x7101a8cc80
7101a8cc3c  adrp x8,0x7105332000
7101a8cc40  ldr x0,[x8, #0xf00]
7101a8cc44  cbz x0,0x7101a8cc7c
7101a8cc48  stur wzr,[x29, #-0x90]
7101a8cc4c  str x25,[sp, #0x100]
7101a8cc50  ldr x8,[x0]
7101a8cc54  ldr x8,[x8, #0x30]
7101a8cc58  sub x1,x29,#0x90
7101a8cc5c  add x2,sp,#0x100
7101a8cc60  blr x8
7101a8cc64  tbz w0,#0x0,0x7101a8cc7c
7101a8cc68  mov w0,#0x10
7101a8cc6c  mov x1,x25
7101a8cc70  bl 0x710392e290
7101a8cc74  mov x24,x0
7101a8cc78  cbnz x0,0x7101a8cc80
7101a8cc7c  mov x24,xzr
7101a8cc80  ldp x8,x9,[x29, #-0xd0]
7101a8cc84  add x12,x24,x20, LSL #0x5
7101a8cc88  ldp x10,x11,[x29, #-0xc0]
7101a8cc8c  add x21,x24,x21, LSL #0x5
7101a8cc90  add x20,x12,#0x20
7101a8cc94  cmp x23,#0x1
7101a8cc98  stp x10,x11,[x12, #0x10]
7101a8cc9c  stp x8,x9,[x12]
7101a8cca0  b.lt 0x7101a8ccb4
7101a8cca4  mov x0,x24
7101a8cca8  mov x1,x22
7101a8ccac  mov x2,x23
7101a8ccb0  bl 0x71039c00e0
7101a8ccb4  ldr x8,[sp, #0x28]
7101a8ccb8  str x24,[x8]
7101a8ccbc  ldr x8,[sp, #0x30]
7101a8ccc0  str x20,[x8]
7101a8ccc4  ldr x8,[sp, #0x20]
7101a8ccc8  str x21,[x8]
7101a8cccc  cbz x22,0x7101a8ccd8
7101a8ccd0  mov x0,x22
7101a8ccd4  bl 0x710392eb40
7101a8ccd8  ldr x1,[x19, #0x3878]
7101a8ccdc  sub x2,x29,#0x74
7101a8cce0  mov x0,x27
7101a8cce4  bl 0x71019bfdd0
7101a8cce8  ldr w8,[x19, #0x30a8]
7101a8ccec  orr w9,wzr,#0x6
7101a8ccf0  str w9,[x19, #0x3938]
7101a8ccf4  str w8,[x19, #0x393c]
7101a8ccf8  ldr s0,[x19, #0x3840]
7101a8ccfc  fcvtzs w9,s0
7101a8cd00  ldr x11,[x19, #0x38e8]
7101a8cd04  ldrb w10,[x11]
7101a8cd08  ldr w8,[x19, #0x3834]
7101a8cd0c  cmp w10,#0xc
7101a8cd10  b.ne 0x7101a8cd98
7101a8cd14  ldur w10,[x11, #0x1]
7101a8cd18  subs w12,w10,#0x1
7101a8cd1c  b.lt 0x7101a8cd98
7101a8cd20  ldr x15,[x19, #0x38e0]
7101a8cd24  ldursw x10,[x11, #0x5]
7101a8cd28  mov x16,#0x4e24
7101a8cd2c  movk x16,#0x58b0, LSL #16
7101a8cd30  movk x16,#0xe, LSL #32
7101a8cd34  mov w13,wzr
7101a8cd38  ldp x14,x15,[x15, #0x20]
7101a8cd3c  add x15,x15,x10
7101a8cd40  adrp x10,0x7104742000
7101a8cd44  add x10,x10,#0xdbb
7101a8cd48  add w17,w12,w13
7101a8cd4c  cmp w17,#0x0
7101a8cd50  cinc w17,w17,lt
7101a8cd54  asr w17,w17,#0x1
7101a8cd58  add x18,x15,w17, SXTW  #0x3
7101a8cd5c  ldr w0,[x18]
7101a8cd60  ldr x0,[x14, x0, LSL #0x3]
7101a8cd64  cmp x0,x16
7101a8cd68  b.eq 0x7101a8cd88
7101a8cd6c  sub w18,w17,#0x1
7101a8cd70  cmp x0,x16
7101a8cd74  csel w12,w18,w12,hi
7101a8cd78  csinc w13,w13,w17,hi
7101a8cd7c  cmp w13,w12
7101a8cd80  b.le 0x7101a8cd48
7101a8cd84  b 0x7101a8cda0
7101a8cd88  ldrsw x10,[x18, #0x4]
7101a8cd8c  tbnz w10,#0x1f,0x7101a8cd98
7101a8cd90  add x10,x11,x10
7101a8cd94  b 0x7101a8cda0
7101a8cd98  adrp x10,0x7104742000
7101a8cd9c  add x10,x10,#0xdbb
7101a8cda0  ldrb w11,[x10]
7101a8cda4  sub w11,w11,#0x1
7101a8cda8  cmp w11,#0x6
7101a8cdac  b.hi 0x7101a8cdf8
7101a8cdb0  adrp x12,0x71044f7000
7101a8cdb4  add x12,x12,#0xbbc
7101a8cdb8  ldrsw x11,[x12, x11, LSL #0x2]
7101a8cdbc  add x11,x11,x12
7101a8cdc0  br x11
7101a8cdc4  ldrb w10,[x10, #0x1]
7101a8cdc8  cmp w10,#0x1
7101a8cdcc  b.lt 0x7101a8cdf8
7101a8cdd0  ldr x9,[x19, #0x3850]
7101a8cdd4  ldr x11,[x19, #0x3848]
7101a8cdd8  sub x9,x9,x11
7101a8cddc  asr x9,x9,#0x3
7101a8cde0  ucvtf s1,x9
7101a8cde4  fadd s0,s0,s1
7101a8cde8  fcvtzs w9,s0
7101a8cdec  sdiv w11,w9,w10
7101a8cdf0  msub w9,w11,w10,w9
7101a8cdf4  add w8,w11,w8
7101a8cdf8  adrp x10,0x7105314000
7101a8cdfc  ldr x10,[x10, #0x510]
7101a8ce00  ldr x10,[x10]
7101a8ce04  ldr x10,[x10, #0x248]
7101a8ce08  ldr x11,[x10]
7101a8ce0c  ldr x11,[x11]
7101a8ce10  strb w9,[x11, #0x2a5]
7101a8ce14  ldr x10,[x10]
7101a8ce18  ldr x10,[x10]
7101a8ce1c  strb w8,[x10, #0x2a4]
7101a8ce20  ldr x0,[x19, #0x3898]
7101a8ce24  ldr x1,[x19, #0x38a0]
7101a8ce28  str w9,[x19, #0x392c]
7101a8ce2c  str w8,[x19, #0x3930]
7101a8ce30  bl 0x7101782fa0
7101a8ce34  ldr x9,[sp, #0x18]
7101a8ce38  and w8,w0,#0x1
7101a8ce3c  strb w8,[x9]
7101a8ce40  adrp x8,0x7105314000
7101a8ce44  ldr x8,[x8, #0x508]
7101a8ce48  ldr x8,[x8]
7101a8ce4c  mov w9,#0x4dd8
7101a8ce50  movk w9,#0x5b, LSL #16
7101a8ce54  add x20,x8,x9
7101a8ce58  mov w9,#0x4de8
7101a8ce5c  movk w9,#0x5b, LSL #16
7101a8ce60  add x21,x8,x9
7101a8ce64  ldr x8,[x21]
7101a8ce68  cbz x8,0x7101a8ce80
7101a8ce6c  ldr x8,[x20]
7101a8ce70  ldrb w9,[x8, #0x10]
7101a8ce74  and w9,w9,#0x1
7101a8ce78  strb w9,[x8, #0x10]
7101a8ce7c  b 0x7101a8cef8
7101a8ce80  mov w0,#0x10
7101a8ce84  orr w1,wzr,#0x18
7101a8ce88  bl 0x710392e290
7101a8ce8c  cbnz x0,0x7101a8ced4
7101a8ce90  adrp x8,0x7105332000
7101a8ce94  ldr x0,[x8, #0xf00]
7101a8ce98  cbz x0,0x7101a8ced0
7101a8ce9c  orr w8,wzr,#0x18
7101a8cea0  str wzr,[sp, #0x100]
7101a8cea4  add x1,sp,#0x100
7101a8cea8  stur x8,[x29, #-0xd0]
7101a8ceac  ldr x8,[x0]
7101a8ceb0  ldr x8,[x8, #0x30]
7101a8ceb4  sub x2,x29,#0xd0
7101a8ceb8  blr x8
7101a8cebc  tbz w0,#0x0,0x7101a8ced0
7101a8cec0  mov w0,#0x10
7101a8cec4  orr w1,wzr,#0x18
7101a8cec8  bl 0x710392e290
7101a8cecc  cbnz x0,0x7101a8ced4
7101a8ced0  mov x0,xzr
7101a8ced4  strb wzr,[x0, #0x10]
7101a8ced8  str x20,[x0, #0x8]
7101a8cedc  ldr x8,[x20]
7101a8cee0  str x8,[x0]
7101a8cee4  str x0,[x8, #0x8]
7101a8cee8  str x0,[x20]
7101a8ceec  ldr x8,[x21]
7101a8cef0  add x8,x8,#0x1
7101a8cef4  str x8,[x21]
7101a8cef8  stp xzr,xzr,[x29, #-0xc8]
7101a8cefc  mov w8,#0x38b0
7101a8cf00  stur xzr,[x29, #-0xd0]
7101a8cf04  ldr x0,[x19, #0x3920]
7101a8cf08  add x2,x19,x8
7101a8cf0c  mov w1,#0x1
7101a8cf10  sub x3,x29,#0xd0
7101a8cf14  bl 0x7103382ea0
7101a8cf18  ldur x0,[x29, #-0xd0]
7101a8cf1c  cbz x0,0x7101a8cf28
7101a8cf20  stur x0,[x29, #-0xc8]
7101a8cf24  bl 0x710392eb40
7101a8cf28  ldr x8,[x19, #0x120]
7101a8cf2c  ldr x8,[x8]
7101a8cf30  ldr x0,[x8]
7101a8cf34  mov w1,#0x1
7101a8cf38  bl 0x71037760f0
7101a8cf3c  b 0x7101a8d228
7101a8cf40  ldur w10,[x10, #0x1]
7101a8cf44  cmp w10,#0x1
7101a8cf48  b.ge 0x7101a8cdd0
7101a8cf4c  b 0x7101a8cdf8
7101a8cf50  ldrsb w10,[x10, #0x1]
7101a8cf54  cmp w10,#0x1
7101a8cf58  b.ge 0x7101a8cdd0
7101a8cf5c  b 0x7101a8cdf8
7101a8cf60  ldursh w10,[x10, #0x1]
7101a8cf64  cmp w10,#0x1
7101a8cf68  b.ge 0x7101a8cdd0
7101a8cf6c  b 0x7101a8cdf8
7101a8cf70  ldurh w10,[x10, #0x1]
7101a8cf74  cmp w10,#0x1
7101a8cf78  b.ge 0x7101a8cdd0
7101a8cf7c  b 0x7101a8cdf8
7101a8cf80  mov w21,#0x1
7101a8cf84  adrp x8,0x710523d000
7101a8cf88  add x8,x8,#0x9e8
7101a8cf8c  stp x8,xzr,[sp, #0x100]
7101a8cf90  cbz x22,0x7101a8cf9c
7101a8cf94  mov x0,x22
7101a8cf98  bl 0x710392eb40
7101a8cf9c  ldur x22,[x29, #-0xc8]
7101a8cfa0  adrp x8,0x710523d000
7101a8cfa4  add x8,x8,#0x988
7101a8cfa8  stp x8,xzr,[x29, #-0xd0]
7101a8cfac  cbz x22,0x7101a8cfd0
7101a8cfb0  ldr x0,[x22, #0x18]
7101a8cfb4  adrp x8,0x710523d000
7101a8cfb8  add x8,x8,#0x9a8
7101a8cfbc  stp x8,xzr,[x22, #0x10]
7101a8cfc0  cbz x0,0x7101a8cfc8
7101a8cfc4  bl 0x710392eb40
7101a8cfc8  mov x0,x22
7101a8cfcc  bl 0x710392eb40
7101a8cfd0  tbz w21,#0x0,0x7101a8d010
7101a8cfd4  mov x0,x19
7101a8cfd8  bl 0x7101a90280
7101a8cfdc  mov w8,#0x3860
7101a8cfe0  add x0,x19,x8
7101a8cfe4  ldr x8,[x19, #0x3850]
7101a8cfe8  ldr x1,[x19, #0x3860]
7101a8cfec  sub x2,x8,#0x8
7101a8cff0  bl 0x7101a915d0
7101a8cff4  ldr x8,[x19, #0x3850]
7101a8cff8  ldr w9,[x19, #0x3914]
7101a8cffc  sub x8,x8,#0x8
7101a8d000  str x8,[x19, #0x3850]
7101a8d004  add w8,w9,#0xa
7101a8d008  str w8,[x19, #0x3914]
7101a8d00c  b 0x7101a8d224
7101a8d010  ldr x8,[x20, #0x600]
7101a8d014  ldrb w9,[x8, #0x4aa]
7101a8d018  cbz w9,0x7101a8d228
7101a8d01c  ldrb w8,[x8, #0x1a8]
7101a8d020  tbz w8,#0x1,0x7101a8d228
7101a8d024  ldr x8,[sp, #0x18]
7101a8d028  ldrb w8,[x8, #0xc]
7101a8d02c  cbnz w8,0x7101a8d228
7101a8d030  ldr x9,[sp, #0x18]
7101a8d034  mov w8,#0x1
7101a8d038  strb w8,[x9, #0xc]
7101a8d03c  ldr x8,[x19, #0x120]
7101a8d040  ldr x8,[x8]
7101a8d044  ldr x0,[x8]
7101a8d048  mov w1,wzr
7101a8d04c  bl 0x71037760f0
7101a8d050  b 0x7101a8d228
7101a8d054  mov w9,#0x3928
7101a8d058  ldrb w9,[x19, x9, LSL ]
7101a8d05c  cbz w9,0x7101a8d3e0
7101a8d060  cmp w1,#0x7
7101a8d064  b.hi 0x7101a8e058
7101a8d068  mov w9,#0x3860
7101a8d06c  add x20,x19,x9
7101a8d070  mov w21,#0x6c8
7101a8d074  orr w22,wzr,#0x38
7101a8d078  orr w23,wzr,#0x3
7101a8d07c  ldursw x8,[x8, #-0x4]
7101a8d080  cmp w8,#0x1e
7101a8d084  b.cs 0x7101a8e058
7101a8d088  smaddl x9,w1,w21,x19
7101a8d08c  madd x8,x8,x22,x9
7101a8d090  str w23,[x8, #0x138]
7101a8d094  ldr x8,[x19, #0x3850]
7101a8d098  ldr x1,[x19, #0x3860]
7101a8d09c  sub x2,x8,#0x8
7101a8d0a0  mov x0,x20
7101a8d0a4  bl 0x7101a915d0
7101a8d0a8  ldr x8,[x19, #0x3850]
7101a8d0ac  sub x8,x8,#0x8
7101a8d0b0  mov x0,x19
7101a8d0b4  str x8,[x19, #0x3850]
7101a8d0b8  bl 0x7101a90280
7101a8d0bc  ldr w8,[x19, #0x3914]
7101a8d0c0  add w8,w8,#0xa
7101a8d0c4  str w8,[x19, #0x3914]
7101a8d0c8  ldr x8,[x19, #0x3850]
7101a8d0cc  ldr x9,[x19, #0x3848]
7101a8d0d0  cmp x8,x9
7101a8d0d4  b.eq 0x7101a8d228
7101a8d0d8  ldur w1,[x8, #-0x8]
7101a8d0dc  cmp w1,#0x7
7101a8d0e0  b.ls 0x7101a8d07c
7101a8d0e4  b 0x7101a8e058
7101a8d0e8  mov x8,#0x650000000000
7101a8d0ec  movk x8,#0x87, LSL #48
7101a8d0f0  strb wzr,[sp, #0x60]
7101a8d0f4  stp xzr,x8,[sp, #0x50]
7101a8d0f8  mov x8,#-0x1
7101a8d0fc  stp x8,xzr,[sp, #0x68]
7101a8d100  adrp x8,0x7104f73000
7101a8d104  add x8,x8,#0xd50
7101a8d108  str wzr,[sp, #0x40]
7101a8d10c  str xzr,[sp, #0x78]
7101a8d110  str x8,[sp, #0x48]
7101a8d114  mov x0,x19
7101a8d118  str xzr,[sp, #0x50]
7101a8d11c  strb wzr,[sp, #0x60]
7101a8d120  bl 0x7101a93880
7101a8d124  b 0x7101a8d228
7101a8d128  ldr x8,[x19, #0x3920]
7101a8d12c  ldp x9,x10,[x8, #0x100]
7101a8d130  cmp x9,x10
7101a8d134  b.ne 0x7101a8d144
7101a8d138  ldp x9,x10,[x8, #0x118]
7101a8d13c  cmp x9,x10
7101a8d140  b.eq 0x7101a8d348
7101a8d144  mov x9,#0x5d73
7101a8d148  movk x9,#0xcace, LSL #16
7101a8d14c  movk x9,#0xff23, LSL #32
7101a8d150  movk x9,#0xd9ff, LSL #48
7101a8d154  str x9,[x8, #0x130]
7101a8d158  ldr w9,[x8, #0xe4]
7101a8d15c  mov w10,#0x1
7101a8d160  strb w10,[x8, #0x138]
7101a8d164  cmp w9,#0x13
7101a8d168  strb wzr,[x8, #0x14c]
7101a8d16c  b.cs 0x7101a8e058
7101a8d170  add x8,x8,w9, SXTW  #0x2
7101a8d174  str w10,[x8, #0x98]
7101a8d178  mov w8,#0x1
7101a8d17c  str w8,[x19, #0x3824]
7101a8d180  b 0x7101a8d228
7101a8d184  adrp x8,0x710523d000
7101a8d188  add x8,x8,#0x9e8
7101a8d18c  stp x8,xzr,[sp, #0x100]
7101a8d190  cbz x20,0x7101a8d19c
7101a8d194  mov x0,x20
7101a8d198  bl 0x710392eb40
7101a8d19c  ldur x20,[x29, #-0xc8]
7101a8d1a0  adrp x8,0x710523d000
7101a8d1a4  add x8,x8,#0x988
7101a8d1a8  stp x8,xzr,[x29, #-0xd0]
7101a8d1ac  cbz x20,0x7101a8d1d0
7101a8d1b0  ldr x0,[x20, #0x18]
7101a8d1b4  adrp x8,0x710523d000
7101a8d1b8  add x8,x8,#0x9a8
7101a8d1bc  stp x8,xzr,[x20, #0x10]
7101a8d1c0  cbz x0,0x7101a8d1c8
7101a8d1c4  bl 0x710392eb40
7101a8d1c8  mov x0,x20
7101a8d1cc  bl 0x710392eb40
7101a8d1d0  ldr x8,[x19, #0x3920]
7101a8d1d4  ldr w8,[x8, #0xe8]
7101a8d1d8  cmp w8,#0x6
7101a8d1dc  b.ne 0x7101a8d228
7101a8d1e0  ldr x9,[x19, #0x3868]
7101a8d1e4  ldursw x8,[x9, #-0x8]
7101a8d1e8  cmp w8,#0x8
7101a8d1ec  b.cs 0x7101a8e058
7101a8d1f0  ldursw x9,[x9, #-0x4]
7101a8d1f4  cmp w9,#0x1e
7101a8d1f8  b.cs 0x7101a8e058
7101a8d1fc  mov w10,#0x6c8
7101a8d200  madd x8,x8,x10,x19
7101a8d204  orr w10,wzr,#0x38
7101a8d208  madd x8,x9,x10,x8
7101a8d20c  mov w9,#0x1
7101a8d210  strb w9,[x8, #0x140]
7101a8d214  ldr x8,[x19, #0x3860]
7101a8d218  str x8,[x19, #0x3868]
7101a8d21c  ldr x8,[x19, #0x38b0]
7101a8d220  str x8,[x19, #0x38b8]
7101a8d224  str wzr,[x19, #0x3824]
7101a8d228  add sp,sp,#0x1f0
7101a8d22c  ldp d9,d8,[sp, #0x20]
7101a8d230  ldp d11,d10,[sp, #0x10]
7101a8d234  ldp x29,x30,[sp, #0x80]
7101a8d238  ldp x20,x19,[sp, #0x70]
7101a8d23c  ldp x22,x21,[sp, #0x60]
7101a8d240  ldp x24,x23,[sp, #0x50]
7101a8d244  ldp x26,x25,[sp, #0x40]
7101a8d248  ldp x28,x27,[sp, #0x30]
7101a8d24c  ldr d12,[sp], #0x90
7101a8d250  ret
7101a8d254  mov x8,#0x650000000000
7101a8d258  movk x8,#0x87, LSL #48
7101a8d25c  strb wzr,[sp, #0x180]
7101a8d260  stp xzr,x8,[sp, #0x170]
7101a8d264  mov x8,#-0x1
7101a8d268  stp x8,xzr,[sp, #0x188]
7101a8d26c  adrp x8,0x7104f73000
7101a8d270  add x8,x8,#0xd50
7101a8d274  str wzr,[sp, #0x160]
7101a8d278  str xzr,[sp, #0x198]
7101a8d27c  str x8,[sp, #0x168]
7101a8d280  mov w8,#0x4
7101a8d284  str xzr,[sp, #0x170]
7101a8d288  strb wzr,[sp, #0x180]
7101a8d28c  str w8,[x19, #0x3824]
7101a8d290  b 0x7101a8d228
7101a8d294  ldr x9,[x19, #0x38d0]
7101a8d298  add x8,sp,#0x100
7101a8d29c  add x23,x8,#0x20
7101a8d2a0  subs x25,x9,x21
7101a8d2a4  add x24,x8,x25
7101a8d2a8  csel x26,x24,x23,eq
7101a8d2ac  subs x22,x26,x8
7101a8d2b0  b.eq 0x7101a8d2c4
7101a8d2b4  add x1,sp,#0x100
7101a8d2b8  mov x0,x21
7101a8d2bc  mov x2,x22
7101a8d2c0  bl 0x71039c00a0
7101a8d2c4  cbz x25,0x7101a8d58c
7101a8d2c8  asr x8,x22,#0x5
7101a8d2cc  add x8,x21,x8, LSL #0x5
7101a8d2d0  str x8,[x19, #0x38d0]
7101a8d2d4  stp xzr,xzr,[sp, #0x108]
7101a8d2d8  mov w1,#0x1
7101a8d2dc  str xzr,[sp, #0x100]
7101a8d2e0  ldr x0,[x19, #0x3920]
7101a8d2e4  add x3,sp,#0x100
7101a8d2e8  mov x2,x20
7101a8d2ec  bl 0x7103382ea0
7101a8d2f0  ldr x0,[sp, #0x100]
7101a8d2f4  cbz x0,0x7101a8d300
7101a8d2f8  str x0,[sp, #0x108]
7101a8d2fc  bl 0x710392eb40
7101a8d300  mov w8,#0x3912
7101a8d304  ldrb w8,[x19, x8, LSL ]
7101a8d308  cbz w8,0x7101a8d318
7101a8d30c  mov w8,#0x3913
7101a8d310  ldrb w8,[x19, x8, LSL ]
7101a8d314  cbz w8,0x7101a8d518
7101a8d318  adrp x8,0x710532f000
7101a8d31c  ldr x8,[x8, #0x8d0]
7101a8d320  ldr x8,[x8, #0x8]
7101a8d324  ldr x9,[x8]
7101a8d328  ldr x8,[x19, #0x3920]
7101a8d32c  ldp x10,x11,[x8, #0x100]
7101a8d330  cmp x10,x11
7101a8d334  b.ne 0x7101a8d544
7101a8d338  ldp x10,x11,[x8, #0x118]
7101a8d33c  cmp x10,x11
7101a8d340  b.ne 0x7101a8d544
7101a8d344  b 0x7101a8d6fc
7101a8d348  ldr w9,[x8, #0xe4]
7101a8d34c  cmp w9,#0x13
7101a8d350  b.cs 0x7101a8e058
7101a8d354  orr w10,wzr,#0x6
7101a8d358  b 0x7101a8d170
7101a8d35c  ldr x8,[x19, #0x3880]
7101a8d360  ldr x9,[x19, #0x3878]
7101a8d364  cmp x8,x9
7101a8d368  b.ne 0x7101a8d67c
7101a8d36c  ldr x8,[x19, #0x38a0]
7101a8d370  ldr x9,[x19, #0x3898]
7101a8d374  cmp x8,x9
7101a8d378  b.ne 0x7101a8d718
7101a8d37c  ldr x8,[sp, #0x18]
7101a8d380  adrp x9,0x710532f000
7101a8d384  ldr x20,[x9, #0x820]
7101a8d388  ldrb w8,[x8]
7101a8d38c  cbz w8,0x7101a8d9e8
7101a8d390  ldr x20,[x20, #0x8]
7101a8d394  ldr x8,[x20, #0x110]
7101a8d398  ldr x0,[x8, #0x80]
7101a8d39c  bl 0x7101eefe30
7101a8d3a0  ldr w8,[x20, #0xf8]
7101a8d3a4  cmp w8,#0x0
7101a8d3a8  ldrb w9,[x20, #0x142]
7101a8d3ac  cset w8,ne
7101a8d3b0  orn w8,w8,w0
7101a8d3b4  and w8,w8,#0x1
7101a8d3b8  orr w8,w8,w9
7101a8d3bc  cbnz w8,0x7101a8d228
7101a8d3c0  ldr x9,[sp, #0x18]
7101a8d3c4  ldrb w8,[x9, #0x1]
7101a8d3c8  cbz w8,0x7101a8dc14
7101a8d3cc  strb wzr,[x9, #0x1]
7101a8d3d0  mov w8,#0x391e
7101a8d3d4  mov w9,#0x1
7101a8d3d8  strb w9,[x19, x8, LSL ]
7101a8d3dc  b 0x7101a8d228
7101a8d3e0  mov x0,x19
7101a8d3e4  bl 0x7101a91970
7101a8d3e8  ldrsw x8,[x19, #0x377c]
7101a8d3ec  cmp w8,#0x8
7101a8d3f0  b.cs 0x7101a8e058
7101a8d3f4  add x8,x19,x8, LSL #0x3
7101a8d3f8  ldr x9,[x8, #0x3780]
7101a8d3fc  ldr x10,[x9, #0x1b8]
7101a8d400  cbz x10,0x7101a8dd00
7101a8d404  ldr w8,[x9, #0x254]
7101a8d408  add x11,x9,#0x1b8
7101a8d40c  mov x9,x11
7101a8d410  ldr w12,[x10, #0x20]
7101a8d414  cmp w12,w8
7101a8d418  cset w12,lt
7101a8d41c  csel x9,x9,x10,lt
7101a8d420  ldr x10,[x10, w12, UXTW #0x3]
7101a8d424  cbnz x10,0x7101a8d410
7101a8d428  cmp x9,x11
7101a8d42c  b.eq 0x7101a8dd00
7101a8d430  ldr w10,[x9, #0x20]
7101a8d434  cmp w10,w8
7101a8d438  b.gt 0x7101a8dd00
7101a8d43c  ldr x20,[x9, #0x28]
7101a8d440  cbz x20,0x7101a8dd00
7101a8d444  ldr x8,[x20]
7101a8d448  ldr x8,[x8, #0x218]
7101a8d44c  mov x0,x20
7101a8d450  mov w1,wzr
7101a8d454  blr x8
7101a8d458  ldr x8,[x20]
7101a8d45c  ldr x8,[x8, #0x410]
7101a8d460  mov x0,x20
7101a8d464  blr x8
7101a8d468  ldr x8,[x20]
7101a8d46c  ldr x8,[x8, #0x3f0]
7101a8d470  mov x0,x20
7101a8d474  mov w1,wzr
7101a8d478  blr x8
7101a8d47c  ldr x8,[x20]
7101a8d480  ldr x8,[x8, #0x140]
7101a8d484  mov x0,x20
7101a8d488  blr x8
7101a8d48c  cmp w0,#0x6
7101a8d490  b.eq 0x7101a8d4bc
7101a8d494  ldr x8,[x20]
7101a8d498  ldr x8,[x8, #0x140]
7101a8d49c  mov x0,x20
7101a8d4a0  blr x8
7101a8d4a4  cmp w0,#0x1
7101a8d4a8  b.eq 0x7101a8d4bc
7101a8d4ac  ldr x8,[x20]
7101a8d4b0  ldr x8,[x8, #0x400]
7101a8d4b4  mov x0,x20
7101a8d4b8  blr x8
7101a8d4bc  ldr x8,[x20]
7101a8d4c0  ldr x8,[x8, #0x158]
7101a8d4c4  mov x0,x20
7101a8d4c8  blr x8
7101a8d4cc  tbnz w0,#0x0,0x7101a8dd00
7101a8d4d0  ldr x8,[x20]
7101a8d4d4  ldr x8,[x8, #0x370]
7101a8d4d8  mov x0,x20
7101a8d4dc  blr x8
7101a8d4e0  b 0x7101a8dd00
7101a8d4e4  adrp x11,0x7104742000
7101a8d4e8  add x11,x11,#0xdbb
7101a8d4ec  ldrb w12,[x11]
7101a8d4f0  sub w12,w12,#0x1
7101a8d4f4  cmp w12,#0x6
7101a8d4f8  b.hi 0x7101a8d840
7101a8d4fc  adrp x13,0x71044f7000
7101a8d500  add x13,x13,#0xb84
7101a8d504  ldrsw x12,[x13, x12, LSL #0x2]
7101a8d508  add x12,x12,x13
7101a8d50c  br x12
7101a8d510  ldrb w11,[x11, #0x1]
7101a8d514  b 0x7101a8d85c
7101a8d518  ldr x8,[x19, #0x3920]
7101a8d51c  ldp x9,x10,[x8, #0x100]
7101a8d520  cmp x9,x10
7101a8d524  b.ne 0x7101a8d534
7101a8d528  ldp x9,x10,[x8, #0x118]
7101a8d52c  cmp x9,x10
7101a8d530  b.eq 0x7101a8d6fc
7101a8d534  mov x9,#0x5d73
7101a8d538  movk x9,#0xcace, LSL #16
7101a8d53c  movk x9,#0xff23, LSL #32
7101a8d540  movk x9,#0xd9ff, LSL #48
7101a8d544  ldr w10,[x8, #0xe4]
7101a8d548  mov w11,#0x1
7101a8d54c  strb w11,[x8, #0x138]
7101a8d550  strb wzr,[x8, #0x14c]
7101a8d554  cmp w10,#0x13
7101a8d558  str x9,[x8, #0x130]
7101a8d55c  b.cs 0x7101a8e058
7101a8d560  add x8,x8,w10, SXTW  #0x2
7101a8d564  str w11,[x8, #0x98]
7101a8d568  ldr x8,[x19, #0x3880]
7101a8d56c  mov w9,wzr
7101a8d570  str wzr,[x19, #0x3918]
7101a8d574  str wzr,[x19, #0x3824]
7101a8d578  sub x8,x8,#0x4
7101a8d57c  str x8,[x19, #0x3880]
7101a8d580  add w8,w9,#0x1
7101a8d584  str w8,[x19, #0x3918]
7101a8d588  b 0x7101a8d228
7101a8d58c  cmp x26,x23
7101a8d590  b.eq 0x7101a8d2d4
7101a8d594  asr x10,x25,#0x5
7101a8d598  mvn x9,x10
7101a8d59c  add x9,x23,x9, LSL #0x5
7101a8d5a0  add x11,sp,#0x100
7101a8d5a4  ldr x8,[x19, #0x38d0]
7101a8d5a8  sub x9,x9,x11
7101a8d5ac  ubfx x11,x9,#0x5,#0x1b
7101a8d5b0  add w11,w11,#0x1
7101a8d5b4  ands x11,x11,#0x3
7101a8d5b8  b.eq 0x7101a8d5f4
7101a8d5bc  add x10,x10,x11
7101a8d5c0  neg x11,x11
7101a8d5c4  ldp x12,x13,[x24]
7101a8d5c8  adds x11,x11,#0x1
7101a8d5cc  ldp x14,x15,[x24, #0x10]
7101a8d5d0  add x24,x24,#0x20
7101a8d5d4  stp x14,x15,[x8, #0x10]
7101a8d5d8  stp x12,x13,[x8]
7101a8d5dc  ldr x8,[x19, #0x38d0]
7101a8d5e0  add x8,x8,#0x20
7101a8d5e4  str x8,[x19, #0x38d0]
7101a8d5e8  b.ne 0x7101a8d5c4
7101a8d5ec  add x11,sp,#0x100
7101a8d5f0  add x24,x11,x10, LSL #0x5
7101a8d5f4  cmp x9,#0x60
7101a8d5f8  b.cc 0x7101a8d2d4
7101a8d5fc  ldp x9,x10,[x24]
7101a8d600  ldp x11,x12,[x24, #0x10]
7101a8d604  stp x11,x12,[x8, #0x10]
7101a8d608  stp x9,x10,[x8]
7101a8d60c  ldr x8,[x19, #0x38d0]
7101a8d610  add x9,x8,#0x20
7101a8d614  str x9,[x19, #0x38d0]
7101a8d618  ldp x9,x10,[x24, #0x20]
7101a8d61c  ldp x11,x12,[x24, #0x30]
7101a8d620  stp x11,x12,[x8, #0x30]
7101a8d624  stp x9,x10,[x8, #0x20]
7101a8d628  ldr x8,[x19, #0x38d0]
7101a8d62c  add x9,x8,#0x20
7101a8d630  str x9,[x19, #0x38d0]
7101a8d634  ldp x9,x10,[x24, #0x40]
7101a8d638  ldp x11,x12,[x24, #0x50]
7101a8d63c  stp x11,x12,[x8, #0x30]
7101a8d640  stp x9,x10,[x8, #0x20]
7101a8d644  ldr x8,[x19, #0x38d0]
7101a8d648  add x9,x8,#0x20
7101a8d64c  str x9,[x19, #0x38d0]
7101a8d650  ldp x9,x10,[x24, #0x60]
7101a8d654  ldp x11,x12,[x24, #0x70]
7101a8d658  add x24,x24,#0x80
7101a8d65c  cmp x24,x23
7101a8d660  stp x11,x12,[x8, #0x30]
7101a8d664  stp x9,x10,[x8, #0x20]
7101a8d668  ldr x8,[x19, #0x38d0]
7101a8d66c  add x8,x8,#0x20
7101a8d670  str x8,[x19, #0x38d0]
7101a8d674  b.ne 0x7101a8d5fc
7101a8d678  b 0x7101a8d2d4
7101a8d67c  ldursw x1,[x8, #-0x4]
7101a8d680  ldr w8,[x19, #0x377c]
7101a8d684  cmp w1,w8
7101a8d688  b.ne 0x7101a8dcf8
7101a8d68c  cmp w1,#0x8
7101a8d690  b.cs 0x7101a8e058
7101a8d694  mov w8,#0x6c8
7101a8d698  madd x8,x1,x8,x19
7101a8d69c  mov w9,#0x1
7101a8d6a0  strb w9,[x8, #0x7c8]
7101a8d6a4  ldr x8,[x19, #0x120]
7101a8d6a8  ldr x8,[x8]
7101a8d6ac  add x0,x8,#0x8
7101a8d6b0  adrp x1,0x71042f8000
7101a8d6b4  add x1,x1,#0xa08
7101a8d6b8  add x8,sp,#0x100
7101a8d6bc  bl 0x7103776640
7101a8d6c0  ldr x8,[x19, #0x120]
7101a8d6c4  ldr x8,[x8]
7101a8d6c8  ldr x8,[x8, #0x10]
7101a8d6cc  ldr x0,[x8, #0x8]
7101a8d6d0  cbz x0,0x7101a8d7b0
7101a8d6d4  adrp x1,0x71042a2000
7101a8d6d8  add x1,x1,#0xa1f
7101a8d6dc  bl 0x71037964b0
7101a8d6e0  cbz x0,0x7101a8d7b0
7101a8d6e4  ldr x8,[x0]
7101a8d6e8  ldr x8,[x8, #0x130]
7101a8d6ec  blr x8
7101a8d6f0  tbz w0,#0x0,0x7101a8d7b0
7101a8d6f4  ldr x20,[sp, #0x108]
7101a8d6f8  b 0x7101a8d990
7101a8d6fc  ldr w10,[x8, #0xe4]
7101a8d700  cmp w10,#0x13
7101a8d704  b.cs 0x7101a8e058
7101a8d708  orr w11,wzr,#0x6
7101a8d70c  b 0x7101a8d560
7101a8d710  ldur w11,[x11, #0x1]
7101a8d714  b 0x7101a8d85c
7101a8d718  adrp x8,0x7105329000
7101a8d71c  ldr x8,[x8, #0xf98]
7101a8d720  ldr x8,[x8]
7101a8d724  ldr x8,[x8, #0x30]
7101a8d728  mov w9,#0x8d68
7101a8d72c  movk w9,#0x8, LSL #16
7101a8d730  add x8,x8,x9
7101a8d734  mov w9,#0x1f40
7101a8d738  ldursh w10,[x8, #-0xa0]
7101a8d73c  cmn w10,#0x1
7101a8d740  b.ne 0x7101a8d798
7101a8d744  ldursh w10,[x8, #-0x50]
7101a8d748  cmn w10,#0x1
7101a8d74c  b.ne 0x7101a8d798
7101a8d750  ldrsh w10,[x8]
7101a8d754  cmn w10,#0x1
7101a8d758  b.ne 0x7101a8d798
7101a8d75c  ldrsh w10,[x8, #0x50]
7101a8d760  cmn w10,#0x1
7101a8d764  b.ne 0x7101a8d798
7101a8d768  subs x9,x9,#0x140
7101a8d76c  add x8,x8,#0x140
7101a8d770  b.ne 0x7101a8d738
7101a8d774  mov w8,wzr
7101a8d778  b 0x7101a8d79c
7101a8d77c  ldrsw x11,[x18, #0x4]
7101a8d780  adrp x12,0x7104742000
7101a8d784  add x12,x12,#0xdbb
7101a8d788  add x13,x8,x11
7101a8d78c  tst w11,#0x80000000
7101a8d790  csel x11,x12,x13,ne
7101a8d794  b 0x7101a8d4ec
7101a8d798  mov w8,#0x1
7101a8d79c  mov w9,#0x391d
7101a8d7a0  strb w8,[x19, x9, LSL ]
7101a8d7a4  orr w8,wzr,#0x6
7101a8d7a8  str w8,[x19, #0x3824]
7101a8d7ac  b 0x7101a8d228
7101a8d7b0  adrp x8,0x710532f000
7101a8d7b4  ldr x8,[x8, #0x8d0]
7101a8d7b8  ldr x0,[x8, #0x8]
7101a8d7bc  ldrb w8,[x0, #0x191]
7101a8d7c0  cbnz w8,0x7101a8d920
7101a8d7c4  mov x20,#0x440c
7101a8d7c8  movk x20,#0xb1ad, LSL #16
7101a8d7cc  movk x20,#0x1c, LSL #32
7101a8d7d0  mov w2,#0x4
7101a8d7d4  mov x1,x20
7101a8d7d8  bl 0x7103313f20
7101a8d7dc  tbz w0,#0x0,0x7101a8d920
7101a8d7e0  sub x0,x29,#0xd0
7101a8d7e4  mov x1,x20
7101a8d7e8  bl 0x71024076d0
7101a8d7ec  ldur x8,[x29, #-0xc0]
7101a8d7f0  adrp x9,0x7104f73000
7101a8d7f4  add x9,x9,#0xd50
7101a8d7f8  stur x9,[x29, #-0xc8]
7101a8d7fc  cbz x8,0x7101a8d94c
7101a8d800  adrp x8,0x7106dd5000
7101a8d804  ldrb w8,[x8, #0x3a8]
7101a8d808  cmp w8,#0x1
7101a8d80c  b.ne 0x7101a8d94c
7101a8d810  adrp x9,0x7106dd5000
7101a8d814  ldur w8,[x29, #-0xb8]
7101a8d818  ldr w9,[x9, #0x3ac]
7101a8d81c  cmp w8,w9
7101a8d820  b.ne 0x7101a8d94c
7101a8d824  ldur x8,[x29, #-0xc0]
7101a8d828  ldr wzr,[x8, #0x38]!
7101a8d82c  ldaxr w9,[x8]
7101a8d830  sub w9,w9,#0x1
7101a8d834  stlxr w10,w9,[x8]
7101a8d838  cbnz w10,0x7101a8d82c
7101a8d83c  b 0x7101a8d94c
7101a8d840  mov w11,wzr
7101a8d844  b 0x7101a8d85c
7101a8d848  ldrsb w11,[x11, #0x1]
7101a8d84c  b 0x7101a8d85c
7101a8d850  ldursh w11,[x11, #0x1]
7101a8d854  b 0x7101a8d85c
7101a8d858  ldurh w11,[x11, #0x1]
7101a8d85c  scvtf s1,w11
7101a8d860  fcmp s0,s1
7101a8d864  b.lt 0x7101a8db2c
7101a8d868  cmp w10,#0xc
7101a8d86c  b.ne 0x7101a8d8e4
7101a8d870  ldur w9,[x8, #0x1]
7101a8d874  subs w10,w9,#0x1
7101a8d878  b.lt 0x7101a8d8e4
7101a8d87c  ldr x13,[x19, #0x38e0]
7101a8d880  ldursw x9,[x8, #0x5]
7101a8d884  mov x14,#0x4e24
7101a8d888  movk x14,#0x58b0, LSL #16
7101a8d88c  movk x14,#0xe, LSL #32
7101a8d890  mov w11,wzr
7101a8d894  ldp x12,x13,[x13, #0x20]
7101a8d898  add x13,x13,x9
7101a8d89c  adrp x9,0x7104742000
7101a8d8a0  add x9,x9,#0xdbb
7101a8d8a4  add w15,w10,w11
7101a8d8a8  cmp w15,#0x0
7101a8d8ac  cinc w15,w15,lt
7101a8d8b0  asr w15,w15,#0x1
7101a8d8b4  add x16,x13,w15, SXTW  #0x3
7101a8d8b8  ldr w17,[x16]
7101a8d8bc  ldr x17,[x12, x17, LSL #0x3]
7101a8d8c0  cmp x17,x14
7101a8d8c4  b.eq 0x7101a8d9cc
7101a8d8c8  sub w16,w15,#0x1
7101a8d8cc  cmp x17,x14
7101a8d8d0  csel w10,w16,w10,hi
7101a8d8d4  csinc w11,w11,w15,hi
7101a8d8d8  cmp w11,w10
7101a8d8dc  b.le 0x7101a8d8a4
7101a8d8e0  b 0x7101a8d8ec
7101a8d8e4  adrp x9,0x7104742000
7101a8d8e8  add x9,x9,#0xdbb
7101a8d8ec  ldrb w8,[x9]
7101a8d8f0  sub w8,w8,#0x1
7101a8d8f4  cmp w8,#0x6
7101a8d8f8  b.hi 0x7101a8da2c
7101a8d8fc  adrp x10,0x71044f7000
7101a8d900  add x10,x10,#0xba0
7101a8d904  ldrsw x8,[x10, x8, LSL #0x2]
7101a8d908  add x8,x8,x10
7101a8d90c  br x8
7101a8d910  ldrb w8,[x9, #0x1]
7101a8d914  b 0x7101a8da48
7101a8d918  ldur w8,[x9, #0x1]
7101a8d91c  b 0x7101a8da48
7101a8d920  mov x8,#0x650000000000
7101a8d924  movk x8,#0x87, LSL #48
7101a8d928  sturb wzr,[x29, #-0xb0]
7101a8d92c  stp xzr,x8,[x29, #-0xc0]
7101a8d930  mov x8,#-0x1
7101a8d934  stp x8,xzr,[x29, #-0xa8]
7101a8d938  adrp x8,0x7104f73000
7101a8d93c  add x8,x8,#0xd50
7101a8d940  stur wzr,[x29, #-0xd0]
7101a8d944  stur xzr,[x29, #-0x98]
7101a8d948  stur x8,[x29, #-0xc8]
7101a8d94c  stur xzr,[x29, #-0xc0]
7101a8d950  sturb wzr,[x29, #-0xb0]
7101a8d954  ldr x8,[x19, #0x120]
7101a8d958  ldr x8,[x8]
7101a8d95c  fmov s8,0x3f800000
7101a8d960  mov v0.16B,v8.16B
7101a8d964  adrp x1,0x71042a2000
7101a8d968  add x1,x1,#0xa1f
7101a8d96c  ldr x0,[x8, #0x10]
7101a8d970  bl 0x7103778300
7101a8d974  ldr x20,[sp, #0x108]
7101a8d978  mov v0.16B,v8.16B
7101a8d97c  adrp x1,0x710438b000
7101a8d980  add x1,x1,#0x28f
7101a8d984  mov x0,x20
7101a8d988  bl 0x7103778300
7101a8d98c  str wzr,[x19, #0x3918]
7101a8d990  adrp x8,0x710523d000
7101a8d994  add x8,x8,#0x988
7101a8d998  stp x8,xzr,[sp, #0x100]
7101a8d99c  cbz x20,0x7101a8d9c0
7101a8d9a0  ldr x0,[x20, #0x18]
7101a8d9a4  adrp x8,0x710523d000
7101a8d9a8  add x8,x8,#0x9a8
7101a8d9ac  stp x8,xzr,[x20, #0x10]
7101a8d9b0  cbz x0,0x7101a8d9b8
7101a8d9b4  bl 0x710392eb40
7101a8d9b8  mov x0,x20
7101a8d9bc  bl 0x710392eb40
7101a8d9c0  mov w8,#0x5
7101a8d9c4  str w8,[x19, #0x3824]
7101a8d9c8  b 0x7101a8d228
7101a8d9cc  ldrsw x9,[x16, #0x4]
7101a8d9d0  adrp x10,0x7104742000
7101a8d9d4  add x10,x10,#0xdbb
7101a8d9d8  add x8,x8,x9
7101a8d9dc  tst w9,#0x80000000
7101a8d9e0  csel x9,x10,x8,ne
7101a8d9e4  b 0x7101a8d8ec
7101a8d9e8  adrp x8,0x710532f000
7101a8d9ec  ldr x8,[x8, #0x730]
7101a8d9f0  ldr x8,[x8, #0x8]
7101a8d9f4  ldr x0,[x8, #0x1c8]
7101a8d9f8  mov x19,#0x5fa4
7101a8d9fc  movk x19,#0x90c1, LSL #16
7101a8da00  movk x19,#0xff1c, LSL #32
7101a8da04  movk x19,#0x58ff, LSL #48
7101a8da08  mov x1,x19
7101a8da0c  bl 0x7103291150
7101a8da10  tbz w0,#0x0,0x7101a8dbfc
7101a8da14  ldr x0,[x20, #0x10]
7101a8da18  mov x1,x19
7101a8da1c  bl 0x71032edf70
7101a8da20  ldp x0,x1,[x20, #0x8]
7101a8da24  bl 0x71032f1bb0
7101a8da28  b 0x7101a8dc04
7101a8da2c  mov w8,wzr
7101a8da30  b 0x7101a8da48
7101a8da34  ldrsb w8,[x9, #0x1]
7101a8da38  b 0x7101a8da48
7101a8da3c  ldursh w8,[x9, #0x1]
7101a8da40  b 0x7101a8da48
7101a8da44  ldurh w8,[x9, #0x1]
7101a8da48  scvtf s1,w8
7101a8da4c  fsub s0,s0,s1
7101a8da50  mov x0,x19
7101a8da54  str s0,[x19, #0x3840]
7101a8da58  bl 0x7101a936a0
7101a8da5c  adrp x8,0x710532f000
7101a8da60  ldr x8,[x8, #0x8d0]
7101a8da64  ldr x0,[x8, #0x8]
7101a8da68  ldrb w8,[x0, #0x191]
7101a8da6c  cbnz w8,0x7101a8daec
7101a8da70  mov x20,#0x7317
7101a8da74  movk x20,#0x6242, LSL #16
7101a8da78  movk x20,#0x1d, LSL #32
7101a8da7c  mov w2,#0x4
7101a8da80  mov x1,x20
7101a8da84  bl 0x7103313f20
7101a8da88  tbz w0,#0x0,0x7101a8daec
7101a8da8c  add x0,sp,#0xc0
7101a8da90  mov x1,x20
7101a8da94  bl 0x71024076d0
7101a8da98  ldr x8,[sp, #0xd0]
7101a8da9c  adrp x9,0x7104f73000
7101a8daa0  add x9,x9,#0xd50
7101a8daa4  str x9,[sp, #0xc8]
7101a8daa8  cbz x8,0x7101a8db18
7101a8daac  adrp x8,0x7106dd5000
7101a8dab0  ldrb w8,[x8, #0x3a8]
7101a8dab4  cmp w8,#0x1
7101a8dab8  b.ne 0x7101a8db18
7101a8dabc  adrp x9,0x7106dd5000
7101a8dac0  ldr w8,[sp, #0xd8]
7101a8dac4  ldr w9,[x9, #0x3ac]
7101a8dac8  cmp w8,w9
7101a8dacc  b.ne 0x7101a8db18
7101a8dad0  ldr x8,[sp, #0xd0]
7101a8dad4  ldr wzr,[x8, #0x38]!
7101a8dad8  ldaxr w9,[x8]
7101a8dadc  sub w9,w9,#0x1
7101a8dae0  stlxr w10,w9,[x8]
7101a8dae4  cbnz w10,0x7101a8dad8
7101a8dae8  b 0x7101a8db18
7101a8daec  mov x8,#0x650000000000
7101a8daf0  movk x8,#0x87, LSL #48
7101a8daf4  strb wzr,[sp, #0xe0]
7101a8daf8  stp xzr,x8,[sp, #0xd0]
7101a8dafc  mov x8,#-0x1
7101a8db00  stp x8,xzr,[sp, #0xe8]
7101a8db04  adrp x8,0x7104f73000
7101a8db08  add x8,x8,#0xd50
7101a8db0c  str wzr,[sp, #0xc0]
7101a8db10  str xzr,[sp, #0xf8]
7101a8db14  str x8,[sp, #0xc8]
7101a8db18  mov x0,x19
7101a8db1c  str xzr,[sp, #0xd0]
7101a8db20  strb wzr,[sp, #0xe0]
7101a8db24  bl 0x7101a93880
7101a8db28  ldr w9,[x19, #0x3914]
7101a8db2c  cmp w9,#0x1
7101a8db30  b.lt 0x7101a8d228
7101a8db34  adrp x8,0x710532f000
7101a8db38  ldr x8,[x8, #0x8d0]
7101a8db3c  ldr x0,[x8, #0x8]
7101a8db40  ldrb w8,[x0, #0x191]
7101a8db44  cbnz w8,0x7101a8dbc4
7101a8db48  mov x19,#0x4bc9
7101a8db4c  movk x19,#0x59d6, LSL #16
7101a8db50  movk x19,#0x19, LSL #32
7101a8db54  mov w2,#0x4
7101a8db58  mov x1,x19
7101a8db5c  bl 0x7103313f20
7101a8db60  tbz w0,#0x0,0x7101a8dbc4
7101a8db64  add x0,sp,#0x80
7101a8db68  mov x1,x19
7101a8db6c  bl 0x71024076d0
7101a8db70  ldr x8,[sp, #0x90]
7101a8db74  adrp x9,0x7104f73000
7101a8db78  add x9,x9,#0xd50
7101a8db7c  str x9,[sp, #0x88]
7101a8db80  cbz x8,0x7101a8dbf0
7101a8db84  adrp x8,0x7106dd5000
7101a8db88  ldrb w8,[x8, #0x3a8]
7101a8db8c  cmp w8,#0x1
7101a8db90  b.ne 0x7101a8dbf0
7101a8db94  adrp x9,0x7106dd5000
7101a8db98  ldr w8,[sp, #0x98]
7101a8db9c  ldr w9,[x9, #0x3ac]
7101a8dba0  cmp w8,w9
7101a8dba4  b.ne 0x7101a8dbf0
7101a8dba8  ldr x8,[sp, #0x90]
7101a8dbac  ldr wzr,[x8, #0x38]!
7101a8dbb0  ldaxr w9,[x8]
7101a8dbb4  sub w9,w9,#0x1
7101a8dbb8  stlxr w10,w9,[x8]
7101a8dbbc  cbnz w10,0x7101a8dbb0
7101a8dbc0  b 0x7101a8dbf0
7101a8dbc4  mov x8,#0x650000000000
7101a8dbc8  movk x8,#0x87, LSL #48
7101a8dbcc  strb wzr,[sp, #0xa0]
7101a8dbd0  stp xzr,x8,[sp, #0x90]
7101a8dbd4  mov x8,#-0x1
7101a8dbd8  stp x8,xzr,[sp, #0xa8]
7101a8dbdc  adrp x8,0x7104f73000
7101a8dbe0  add x8,x8,#0xd50
7101a8dbe4  str wzr,[sp, #0x80]
7101a8dbe8  str xzr,[sp, #0xb8]
7101a8dbec  str x8,[sp, #0x88]
7101a8dbf0  str xzr,[sp, #0x90]
7101a8dbf4  strb wzr,[sp, #0xa0]
7101a8dbf8  b 0x7101a8d228
7101a8dbfc  ldr x8,[x20, #0x8]
7101a8dc00  str wzr,[x8, #0x118]
7101a8dc04  ldr x9,[sp, #0x18]
7101a8dc08  mov w8,#0x1
7101a8dc0c  strb w8,[x9]
7101a8dc10  b 0x7101a8d228
7101a8dc14  mov w8,#0x3779
7101a8dc18  ldrb w8,[x19, x8, LSL ]
7101a8dc1c  cbz w8,0x7101a8dc44
7101a8dc20  mov w8,#0x3890
7101a8dc24  strb wzr,[x19, x8, LSL ]
7101a8dc28  ldrsw x8,[x19, #0x104]
7101a8dc2c  cmp w8,#0x13
7101a8dc30  b.cs 0x7101a8e058
7101a8dc34  add x8,x19,x8, LSL #0x2
7101a8dc38  mov w9,#0x5
7101a8dc3c  str w9,[x8, #0xb8]
7101a8dc40  b 0x7101a8d228
7101a8dc44  ldrsw x1,[x19, #0x3938]
7101a8dc48  ldr w8,[x19, #0x377c]
7101a8dc4c  cmp w1,w8
7101a8dc50  b.ne 0x7101a8dcf8
7101a8dc54  mov w8,#0x391e
7101a8dc58  ldrb w8,[x19, x8, LSL ]
7101a8dc5c  cbnz w8,0x7101a8d228
7101a8dc60  cmp w1,#0x8
7101a8dc64  b.cs 0x7101a8e058
7101a8dc68  add x8,x19,x1, LSL #0x3
7101a8dc6c  ldr w2,[x19, #0x393c]
7101a8dc70  add x0,sp,#0x100
7101a8dc74  ldr x1,[x8, #0x3780]
7101a8dc78  bl 0x7103771d60
7101a8dc7c  ldr x20,[sp, #0x108]
7101a8dc80  ldr x1,[x20]
7101a8dc84  sub x0,x29,#0xd0
7101a8dc88  bl 0x710377ad90
7101a8dc8c  ldur x0,[x29, #-0xc8]
7101a8dc90  ldr x8,[x0]
7101a8dc94  cbz x8,0x7101a8dd0c
7101a8dc98  movi v2.2D,#0x0
7101a8dc9c  ldr s4,[x8, #0x30]
7101a8dca0  add x9,x8,#0x34
7101a8dca4  ldp s0,s1,[x8, #0x50]
7101a8dca8  add x10,x8,#0x38
7101a8dcac  ldp s5,s7,[x8, #0x48]
7101a8dcb0  mov v3.16B,v2.16B
7101a8dcb4  fmul s1,s1,s7
7101a8dcb8  fmul s0,s0,s5
7101a8dcbc  fabs s0,s0
7101a8dcc0  mov v3.S[0x0],v4.S[0x0]
7101a8dcc4  fmov s5,0x3f000000
7101a8dcc8  fmul s6,s0,s5
7101a8dccc  ld1 {v3.S}[1],[x9]
7101a8dcd0  ldrb w9,[x8, #0x5b]
7101a8dcd4  ld1 {v3.S}[2],[x10]
7101a8dcd8  fabs s1,s1
7101a8dcdc  and w10,w9,#0x3
7101a8dce0  cmp w10,#0x2
7101a8dce4  b.eq 0x7101a8dd28
7101a8dce8  cmp w10,#0x1
7101a8dcec  b.ne 0x7101a8dd30
7101a8dcf0  fadd s4,s4,s6
7101a8dcf4  b 0x7101a8dd2c
7101a8dcf8  mov x0,x19
7101a8dcfc  bl 0x7101a91970
7101a8dd00  mov w8,#0x2
7101a8dd04  str w8,[x19, #0x3824]
7101a8dd08  b 0x7101a8d228
7101a8dd0c  adrp x8,0x71052a8000
7101a8dd10  ldr x8,[x8, #0xa88]
7101a8dd14  ldr q5,[x8]
7101a8dd18  fmov s0,wzr
7101a8dd1c  mov v1.16B,v0.16B
7101a8dd20  dup s4,v5.S[0x1]
7101a8dd24  b 0x7101a8dda8
7101a8dd28  fsub s4,s4,s6
7101a8dd2c  mov v3.S[0x0],v4.S[0x0]
7101a8dd30  fmul s4,s1,s5
7101a8dd34  ubfx w9,w9,#0x2,#0x2
7101a8dd38  cmp w9,#0x2
7101a8dd3c  b.eq 0x7101a8dd54
7101a8dd40  cmp w9,#0x1
7101a8dd44  b.ne 0x7101a8dd60
7101a8dd48  dup s5,v3.S[0x1]
7101a8dd4c  fsub s4,s5,s4
7101a8dd50  b 0x7101a8dd5c
7101a8dd54  dup s5,v3.S[0x1]
7101a8dd58  fadd s4,s4,s5
7101a8dd5c  mov v3.S[0x1],v4.S[0x0]
7101a8dd60  ldr x8,[x8, #0x18]
7101a8dd64  cbz x8,0x7101a8dda0
7101a8dd68  ldp s4,s6,[x8, #0x30]
7101a8dd6c  fadd s5,s3,s4
7101a8dd70  dup s4,v3.S[0x1]
7101a8dd74  fadd s4,s4,s6
7101a8dd78  dup s7,v3.S[0x2]
7101a8dd7c  mov v3.16B,v2.16B
7101a8dd80  mov v3.S[0x0],v5.S[0x0]
7101a8dd84  ldr s6,[x8, #0x38]
7101a8dd88  mov v3.S[0x1],v4.S[0x0]
7101a8dd8c  fadd s6,s7,s6
7101a8dd90  mov v3.S[0x2],v6.S[0x0]
7101a8dd94  ldr x8,[x8, #0x18]
7101a8dd98  cbnz x8,0x7101a8dd68
7101a8dd9c  b 0x7101a8dda8
7101a8dda0  dup s4,v3.S[0x1]
7101a8dda4  mov v5.16B,v3.16B
7101a8dda8  movi v3.2D,#0x0
7101a8ddac  mov v3.S[0x0],v0.S[0x0]
7101a8ddb0  mov v3.S[0x1],v1.S[0x0]
7101a8ddb4  movi v1.4S,#0x3f, LSL #24
7101a8ddb8  fmul v1.4S,v3.4S,v1.4S
7101a8ddbc  adrp x8,0x7104472000
7101a8ddc0  ldr s2,[x8, #0x8b8]
7101a8ddc4  adrp x8,0x7104472000
7101a8ddc8  ldr s8,[x8, #0x4c4]
7101a8ddcc  dup s3,v1.S[0x1]
7101a8ddd0  fadd s2,s5,s2
7101a8ddd4  fsub s0,s8,s4
7101a8ddd8  fsub s9,s2,s1
7101a8dddc  fadd s1,s2,s1
7101a8dde0  fmov s2,0x3f000000
7101a8dde4  fsub s1,s1,s9
7101a8dde8  fsub s10,s0,s3
7101a8ddec  fadd s0,s0,s3
7101a8ddf0  fmul s11,s1,s2
7101a8ddf4  fsub s0,s0,s10
7101a8ddf8  fmul s12,s0,s2
7101a8ddfc  adrp x22,0x710523d000
7101a8de00  add x22,x22,#0x9a8
7101a8de04  stp x22,xzr,[x29, #-0xd0]
7101a8de08  cbz x0,0x7101a8de10
7101a8de0c  bl 0x710392eb40
7101a8de10  fadd s9,s9,s11
7101a8de14  fadd s10,s10,s12
7101a8de18  adrp x8,0x710523d000
7101a8de1c  add x8,x8,#0x9c8
7101a8de20  stp x8,xzr,[sp, #0x100]
7101a8de24  cbz x20,0x7101a8de30
7101a8de28  mov x0,x20
7101a8de2c  bl 0x710392eb40
7101a8de30  adrp x8,0x7104473000
7101a8de34  ldr s2,[x8, #0x208]
7101a8de38  ldr x8,[x19, #0x128]
7101a8de3c  ldp s3,s4,[x8, #0x90]
7101a8de40  fadd s2,s9,s2
7101a8de44  ldp s5,s6,[x8, #0x98]
7101a8de48  fcmp s2,s3
7101a8de4c  fcsel s2,s3,s2,mi
7101a8de50  fsub s0,s8,s10
7101a8de54  fcmp s4,s2
7101a8de58  movi v7.2D,#0x0
7101a8de5c  mov v1.16B,v7.16B
7101a8de60  fcsel s2,s4,s2,mi
7101a8de64  fcmp s0,s5
7101a8de68  fcsel s0,s5,s0,mi
7101a8de6c  fcmp s6,s0
7101a8de70  mov v1.S[0x0],v2.S[0x0]
7101a8de74  fcsel s0,s6,s0,mi
7101a8de78  mov v1.S[0x1],v0.S[0x0]
7101a8de7c  str q1,[x8, #0x70]
7101a8de80  ldp x9,x10,[x8, #0x70]
7101a8de84  stp x9,x10,[x8, #0x60]
7101a8de88  ldr q0,[x8, #0x60]
7101a8de8c  fcmp s0,s3
7101a8de90  dup s1,v0.S[0x1]
7101a8de94  fcsel s0,s3,s0,mi
7101a8de98  fcmp s4,s0
7101a8de9c  fcsel s0,s4,s0,mi
7101a8dea0  fcmp s1,s5
7101a8dea4  fcsel s1,s5,s1,mi
7101a8dea8  fcmp s6,s1
7101a8deac  mov v7.S[0x0],v0.S[0x0]
7101a8deb0  fcsel s1,s6,s1,mi
7101a8deb4  mov v7.S[0x1],v1.S[0x0]
7101a8deb8  str q7,[x8, #0x60]
7101a8debc  ldr x8,[x8, #0x38]
7101a8dec0  cbz x8,0x7101a8ded4
7101a8dec4  ldrb w9,[x8, #0x58]
7101a8dec8  orr w9,w9,#0x10
7101a8decc  stp s0,s1,[x8, #0x30]
7101a8ded0  strb w9,[x8, #0x58]
7101a8ded4  mov w8,#0x3890
7101a8ded8  strb wzr,[x19, x8, LSL ]
7101a8dedc  ldr x8,[x19, #0x120]
7101a8dee0  ldr x8,[x8]
7101a8dee4  ldr x0,[x8]
7101a8dee8  mov w1,#0x1
7101a8deec  bl 0x71037760f0
7101a8def0  adrp x8,0x710532f000
7101a8def4  ldr x8,[x8, #0x730]
7101a8def8  ldr x23,[x8, #0x8]
7101a8defc  ldr x8,[x19, #0x120]
7101a8df00  ldr x8,[x8]
7101a8df04  ldr w20,[x19, #0x393c]
7101a8df08  adrp x1,0x7104432000
7101a8df0c  add x1,x1,#0xb34
7101a8df10  add x0,x8,#0x8
7101a8df14  sub x8,x29,#0xd0
7101a8df18  bl 0x7103776910
7101a8df1c  ldr w1,[x19, #0x377c]
7101a8df20  ldr x0,[x23, #0x348]
7101a8df24  mov w2,w20
7101a8df28  ldr x21,[x19, #0x118]
7101a8df2c  bl 0x7103267660
7101a8df30  mov x1,x0
7101a8df34  mov x0,x21
7101a8df38  bl 0x7103240a70
7101a8df3c  ldur x20,[x29, #-0xc8]
7101a8df40  mov x1,x0
7101a8df44  mov x0,x20
7101a8df48  bl 0x7103778b80
7101a8df4c  stp x22,xzr,[x29, #-0xd0]
7101a8df50  cbz x20,0x7101a8df5c
7101a8df54  mov x0,x20
7101a8df58  bl 0x710392eb40
7101a8df5c  ldr x8,[x19, #0x120]
7101a8df60  ldr x8,[x8]
7101a8df64  ldr x0,[x8, #0x10]
7101a8df68  fmov s0,0x3f800000
7101a8df6c  adrp x1,0x710437c000
7101a8df70  add x1,x1,#0x77
7101a8df74  bl 0x7103778300
7101a8df78  adrp x8,0x710532f000
7101a8df7c  ldr x8,[x8, #0x8d0]
7101a8df80  ldr x0,[x8, #0x8]
7101a8df84  ldrb w8,[x0, #0x191]
7101a8df88  cbnz w8,0x7101a8e008
7101a8df8c  mov x20,#0xf89a
7101a8df90  movk x20,#0xb197, LSL #16
7101a8df94  movk x20,#0x19, LSL #32
7101a8df98  mov w2,#0x4
7101a8df9c  mov x1,x20
7101a8dfa0  bl 0x7103313f20
7101a8dfa4  tbz w0,#0x0,0x7101a8e008
7101a8dfa8  add x0,sp,#0x120
7101a8dfac  mov x1,x20
7101a8dfb0  bl 0x71024076d0
7101a8dfb4  ldr x8,[sp, #0x130]
7101a8dfb8  adrp x9,0x7104f73000
7101a8dfbc  add x9,x9,#0xd50
7101a8dfc0  str x9,[sp, #0x128]
7101a8dfc4  cbz x8,0x7101a8e034
7101a8dfc8  adrp x8,0x7106dd5000
7101a8dfcc  ldrb w8,[x8, #0x3a8]
7101a8dfd0  cmp w8,#0x1
7101a8dfd4  b.ne 0x7101a8e034
7101a8dfd8  adrp x9,0x7106dd5000
7101a8dfdc  ldr w8,[sp, #0x138]
7101a8dfe0  ldr w9,[x9, #0x3ac]
7101a8dfe4  cmp w8,w9
7101a8dfe8  b.ne 0x7101a8e034
7101a8dfec  ldr x8,[sp, #0x130]
7101a8dff0  ldr wzr,[x8, #0x38]!
7101a8dff4  ldaxr w9,[x8]
7101a8dff8  sub w9,w9,#0x1
7101a8dffc  stlxr w10,w9,[x8]
7101a8e000  cbnz w10,0x7101a8dff4
7101a8e004  b 0x7101a8e034
7101a8e008  mov x8,#0x650000000000
7101a8e00c  movk x8,#0x87, LSL #48
7101a8e010  strb wzr,[sp, #0x140]
7101a8e014  stp xzr,x8,[sp, #0x130]
7101a8e018  mov x8,#-0x1
7101a8e01c  stp x8,xzr,[sp, #0x148]
7101a8e020  adrp x8,0x7104f73000
7101a8e024  add x8,x8,#0xd50
7101a8e028  str wzr,[sp, #0x120]
7101a8e02c  str xzr,[sp, #0x158]
7101a8e030  str x8,[sp, #0x128]
7101a8e034  str xzr,[sp, #0x130]
7101a8e038  strb wzr,[sp, #0x140]
7101a8e03c  ldrsw x8,[x19, #0x104]
7101a8e040  cmp w8,#0x13
7101a8e044  b.cs 0x7101a8e058
7101a8e048  add x8,x19,x8, LSL #0x2
7101a8e04c  mov w9,#0x4
7101a8e050  str w9,[x8, #0xb8]
7101a8e054  b 0x7101a8d228
7101a8e058  bl 0x71039c2650
7101a8e05c  ldr x0,[sp, #0x28]
7101a8e060  bl 0x71039c0c00
7101a8e064  ldr x0,[sp, #0x10]
7101a8e068  bl 0x71039c0c00
