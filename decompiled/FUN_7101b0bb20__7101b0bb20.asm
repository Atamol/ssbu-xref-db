// addr:      7101b0bb20
// offset:    0x1b0bb20
// name:      FUN_7101b0bb20
// mangled:   
// size:      1116

7101b0bb20  stp x22,x21,[sp, #-0x30]!
7101b0bb24  stp x20,x19,[sp, #0x10]
7101b0bb28  stp x29,x30,[sp, #0x20]
7101b0bb2c  add x29,sp,#0x20
7101b0bb30  ldr x20,[x0, #0x40]
7101b0bb34  mov x19,x0
7101b0bb38  adrp x8,0x71050aa000
7101b0bb3c  add x8,x8,#0x2e8
7101b0bb40  str x8,[x0]
7101b0bb44  cbz x20,0x7101b0bc8c
7101b0bb48  ldr x8,[x20]
7101b0bb4c  ldr x21,[x8]
7101b0bb50  ldrsw x22,[x19, #0x494]
7101b0bb54  str wzr,[x8, #0x10]
7101b0bb58  ldr x8,[x21, #0x10]
7101b0bb5c  mov w9,#0x48
7101b0bb60  str x21,[x8]
7101b0bb64  str w9,[x8, #0x8]
7101b0bb68  ldp x9,x8,[x21, #0x10]
7101b0bb6c  add x10,x9,#0x10
7101b0bb70  str x10,[x21, #0x10]
7101b0bb74  ldr x10,[x8, #0xc8]
7101b0bb78  str x9,[x21, #0x10]
7101b0bb7c  cmp x10,x21
7101b0bb80  b.eq 0x7101b0bba4
7101b0bb84  adrp x1,0x710435b000
7101b0bb88  add x1,x1,#0x212
7101b0bb8c  mov x0,x21
7101b0bb90  bl 0x71038f4b20
7101b0bb94  orr w1,wzr,#0xfffffffe
7101b0bb98  mov x0,x21
7101b0bb9c  bl 0x71038f4fc0
7101b0bba0  b 0x7101b0bc1c
7101b0bba4  ldr x8,[x8, #0x40]
7101b0bba8  ldr w9,[x8, #0xc]
7101b0bbac  cmp w9,#0x2
7101b0bbb0  b.cc 0x7101b0bbc0
7101b0bbb4  ldr x8,[x8, #0x10]
7101b0bbb8  add x1,x8,#0x10
7101b0bbbc  b 0x7101b0bc0c
7101b0bbc0  ldr x9,[x8, #0x18]
7101b0bbc4  ldrb w8,[x8, #0xb]
7101b0bbc8  mov w10,#0xffffffff
7101b0bbcc  lsl x8,x10,x8
7101b0bbd0  mvn w8,w8
7101b0bbd4  and x8,x8,#0x2
7101b0bbd8  add x1,x9,x8, LSL #0x5
7101b0bbdc  adrp x8,0x7104862000
7101b0bbe0  add x8,x8,#0x960
7101b0bbe4  ldr w9,[x1, #0x18]
7101b0bbe8  cmp w9,#0x13
7101b0bbec  b.ne 0x7101b0bbfc
7101b0bbf0  ldr x9,[x1, #0x10]
7101b0bbf4  cmp x9,#0x2
7101b0bbf8  b.eq 0x7101b0bc0c
7101b0bbfc  ldrsw x9,[x1, #0x1c]
7101b0bc00  add x1,x1,x9, LSL #0x5
7101b0bc04  cbnz w9,0x7101b0bbe4
7101b0bc08  mov x1,x8
7101b0bc0c  adrp x2,0x710435b000
7101b0bc10  add x2,x2,#0x212
7101b0bc14  mov x0,x21
7101b0bc18  bl 0x71038f4d40
7101b0bc1c  ldr x9,[x21, #0x10]
7101b0bc20  sub x8,x9,#0x10
7101b0bc24  adrp x10,0x7104862000
7101b0bc28  add x10,x10,#0x960
7101b0bc2c  cmp x8,x10
7101b0bc30  b.eq 0x7101b0bc88
7101b0bc34  ldur w9,[x9, #-0x8]
7101b0bc38  and w9,w9,#0xf
7101b0bc3c  cmp w9,#0x6
7101b0bc40  b.ne 0x7101b0bc88
7101b0bc44  ldr x8,[x20]
7101b0bc48  ldr x8,[x8]
7101b0bc4c  ldr x9,[x8, #0x10]
7101b0bc50  mov w10,#0x13
7101b0bc54  str w10,[x9, #0x8]
7101b0bc58  str x22,[x9]
7101b0bc5c  ldr x9,[x8, #0x10]
7101b0bc60  add x9,x9,#0x10
7101b0bc64  str x9,[x8, #0x10]
7101b0bc68  ldr x8,[x20]
7101b0bc6c  ldr w9,[x8, #0x10]
7101b0bc70  add w9,w9,#0x1
7101b0bc74  mov x0,x20
7101b0bc78  mov w1,wzr
7101b0bc7c  str w9,[x8, #0x10]
7101b0bc80  bl 0x7103377130
7101b0bc84  b 0x7101b0bc8c
7101b0bc88  str x8,[x21, #0x10]
7101b0bc8c  add x0,x19,#0x530
7101b0bc90  bl 0x71033997f0
7101b0bc94  ldr x0,[x19, #0x518]
7101b0bc98  adrp x8,0x710523d000
7101b0bc9c  add x8,x8,#0x7d8
7101b0bca0  str x8,[x19, #0x510]
7101b0bca4  str xzr,[x19, #0x518]
7101b0bca8  cbz x0,0x7101b0bcb0
7101b0bcac  bl 0x710392eb40
7101b0bcb0  ldr x0,[x19, #0x4e8]
7101b0bcb4  cbz x0,0x7101b0bcc0
7101b0bcb8  str x0,[x19, #0x4f0]
7101b0bcbc  bl 0x710392eb40
7101b0bcc0  adrp x8,0x7104f73000
7101b0bcc4  add x8,x8,#0xd50
7101b0bcc8  str x8,[x19, #0x4a8]
7101b0bccc  ldr x8,[x19, #0x4b0]
7101b0bcd0  cbz x8,0x7101b0bd0c
7101b0bcd4  adrp x9,0x7106dd5000
7101b0bcd8  ldrb w9,[x9, #0x3a8]
7101b0bcdc  cmp w9,#0x1
7101b0bce0  b.ne 0x7101b0bd0c
7101b0bce4  adrp x10,0x7106dd5000
7101b0bce8  ldr w9,[x19, #0x4b8]
7101b0bcec  ldr w10,[x10, #0x3ac]
7101b0bcf0  cmp w9,w10
7101b0bcf4  b.ne 0x7101b0bd0c
7101b0bcf8  ldr wzr,[x8, #0x38]!
7101b0bcfc  ldaxr w9,[x8]
7101b0bd00  sub w9,w9,#0x1
7101b0bd04  stlxr w10,w9,[x8]
7101b0bd08  cbnz w10,0x7101b0bcfc
7101b0bd0c  add x0,x19,#0x488
7101b0bd10  str xzr,[x19, #0x4b0]
7101b0bd14  add x20,x19,#0x470
7101b0bd18  strb wzr,[x19, #0x4c0]
7101b0bd1c  bl 0x710339b480
7101b0bd20  add x0,x19,#0x480
7101b0bd24  bl 0x710339b480
7101b0bd28  add x0,x19,#0x478
7101b0bd2c  bl 0x710339b480
7101b0bd30  mov x0,x20
7101b0bd34  bl 0x710339b480
7101b0bd38  ldr x21,[x19, #0x450]
7101b0bd3c  cbz x21,0x7101b0bd74
7101b0bd40  ldr x20,[x19, #0x458]
7101b0bd44  cmp x20,x21
7101b0bd48  b.eq 0x7101b0bf4c
7101b0bd4c  ldr x8,[x20, #-0x10]!
7101b0bd50  ldr x8,[x8]
7101b0bd54  mov x0,x20
7101b0bd58  blr x8
7101b0bd5c  cmp x21,x20
7101b0bd60  b.ne 0x7101b0bd4c
7101b0bd64  ldr x0,[x19, #0x450]
7101b0bd68  str x21,[x19, #0x458]
7101b0bd6c  cbz x0,0x7101b0bd74
7101b0bd70  bl 0x710392eb40
7101b0bd74  ldr x21,[x19, #0x438]
7101b0bd78  cbz x21,0x7101b0bdb0
7101b0bd7c  ldr x20,[x19, #0x440]
7101b0bd80  cmp x20,x21
7101b0bd84  b.eq 0x7101b0bf5c
7101b0bd88  ldr x8,[x20, #-0x10]!
7101b0bd8c  ldr x8,[x8]
7101b0bd90  mov x0,x20
7101b0bd94  blr x8
7101b0bd98  cmp x21,x20
7101b0bd9c  b.ne 0x7101b0bd88
7101b0bda0  ldr x0,[x19, #0x438]
7101b0bda4  str x21,[x19, #0x440]
7101b0bda8  cbz x0,0x7101b0bdb0
7101b0bdac  bl 0x710392eb40
7101b0bdb0  ldr x20,[x19, #0x418]
7101b0bdb4  adrp x8,0x71050aa000
7101b0bdb8  add x8,x8,#0x330
7101b0bdbc  str x8,[x19, #0x408]
7101b0bdc0  cbz x20,0x7101b0bdf8
7101b0bdc4  ldr x21,[x19, #0x420]
7101b0bdc8  cmp x21,x20
7101b0bdcc  b.eq 0x7101b0bf6c
7101b0bdd0  ldr x0,[x21, #-0x8]!
7101b0bdd4  str xzr,[x21]
7101b0bdd8  cbz x0,0x7101b0bde0
7101b0bddc  bl 0x710392eb40
7101b0bde0  cmp x20,x21
7101b0bde4  b.ne 0x7101b0bdd0
7101b0bde8  ldr x0,[x19, #0x418]
7101b0bdec  str x20,[x19, #0x420]
7101b0bdf0  cbz x0,0x7101b0bdf8
7101b0bdf4  bl 0x710392eb40
7101b0bdf8  ldr x0,[x19, #0x400]
7101b0bdfc  str xzr,[x19, #0x400]
7101b0be00  cbz x0,0x7101b0be10
7101b0be04  ldr x8,[x0]
7101b0be08  ldr x8,[x8, #0x8]
7101b0be0c  blr x8
7101b0be10  ldr x0,[x19, #0x3f8]
7101b0be14  str xzr,[x19, #0x3f8]
7101b0be18  cbz x0,0x7101b0be28
7101b0be1c  ldr x8,[x0]
7101b0be20  ldr x8,[x8, #0x8]
7101b0be24  blr x8
7101b0be28  ldr x0,[x19, #0x3f0]
7101b0be2c  str xzr,[x19, #0x3f0]
7101b0be30  cbz x0,0x7101b0be40
7101b0be34  ldr x8,[x0]
7101b0be38  ldr x8,[x8, #0x8]
7101b0be3c  blr x8
7101b0be40  ldr x0,[x19, #0x3e8]
7101b0be44  adrp x8,0x710523d000
7101b0be48  add x8,x8,#0x9e8
7101b0be4c  str x8,[x19, #0x3e0]
7101b0be50  str xzr,[x19, #0x3e8]
7101b0be54  cbz x0,0x7101b0be5c
7101b0be58  bl 0x710392eb40
7101b0be5c  ldr x20,[x19, #0x3d8]
7101b0be60  adrp x8,0x710523d000
7101b0be64  add x8,x8,#0x988
7101b0be68  str x8,[x19, #0x3d0]
7101b0be6c  str xzr,[x19, #0x3d8]
7101b0be70  cbz x20,0x7101b0be94
7101b0be74  ldr x0,[x20, #0x18]
7101b0be78  adrp x8,0x710523d000
7101b0be7c  add x8,x8,#0x9a8
7101b0be80  stp x8,xzr,[x20, #0x10]
7101b0be84  cbz x0,0x7101b0be8c
7101b0be88  bl 0x710392eb40
7101b0be8c  mov x0,x20
7101b0be90  bl 0x710392eb40
7101b0be94  ldr x0,[x19, #0x3b0]
7101b0be98  cbz x0,0x7101b0bea4
7101b0be9c  str x0,[x19, #0x3b8]
7101b0bea0  bl 0x710392eb40
7101b0bea4  ldr x20,[x19, #0x298]
7101b0bea8  adrp x8,0x710523d000
7101b0beac  add x8,x8,#0xa48
7101b0beb0  str x8,[x19, #0x290]
7101b0beb4  str xzr,[x19, #0x298]
7101b0beb8  cbz x20,0x7101b0bf38
7101b0bebc  ldr x21,[x20, #0x8]
7101b0bec0  stp xzr,xzr,[x20]
7101b0bec4  cbz x21,0x7101b0bf30
7101b0bec8  add x8,x21,#0x8
7101b0becc  ldaxr x9,[x8]
7101b0bed0  sub x10,x9,#0x1
7101b0bed4  stlxr w11,x10,[x8]
7101b0bed8  cbnz w11,0x7101b0becc
7101b0bedc  cbnz x9,0x7101b0bef8
7101b0bee0  ldr x8,[x21]
7101b0bee4  ldr x8,[x8, #0x10]
7101b0bee8  mov x0,x21
7101b0beec  blr x8
7101b0bef0  mov x0,x21
7101b0bef4  bl 0x71039c2670
7101b0bef8  ldr x21,[x20, #0x8]
7101b0befc  cbz x21,0x7101b0bf30
7101b0bf00  add x8,x21,#0x8
7101b0bf04  ldaxr x9,[x8]
7101b0bf08  sub x10,x9,#0x1
7101b0bf0c  stlxr w11,x10,[x8]
7101b0bf10  cbnz w11,0x7101b0bf04
7101b0bf14  cbnz x9,0x7101b0bf30
7101b0bf18  ldr x8,[x21]
7101b0bf1c  ldr x8,[x8, #0x10]
7101b0bf20  mov x0,x21
7101b0bf24  blr x8
7101b0bf28  mov x0,x21
7101b0bf2c  bl 0x71039c2670
7101b0bf30  mov x0,x20
7101b0bf34  bl 0x710392eb40
7101b0bf38  mov x0,x19
7101b0bf3c  ldp x29,x30,[sp, #0x20]
7101b0bf40  ldp x20,x19,[sp, #0x10]
7101b0bf44  ldp x22,x21,[sp], #0x30
7101b0bf48  b 0x71032cbe10
7101b0bf4c  mov x0,x21
7101b0bf50  str x21,[x19, #0x458]
7101b0bf54  cbnz x0,0x7101b0bd70
7101b0bf58  b 0x7101b0bd74
7101b0bf5c  mov x0,x21
7101b0bf60  str x21,[x19, #0x440]
7101b0bf64  cbnz x0,0x7101b0bdac
7101b0bf68  b 0x7101b0bdb0
7101b0bf6c  mov x0,x20
7101b0bf70  str x20,[x19, #0x420]
7101b0bf74  cbnz x0,0x7101b0bdf4
7101b0bf78  b 0x7101b0bdf8
