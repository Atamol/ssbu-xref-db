// addr:      7102b5b9e0
// offset:    0x2b5b9e0
// name:      FUN_7102b5b9e0
// mangled:   
// size:      13460

7102b5b9e0  stp d9,d8,[sp, #-0x70]!
7102b5b9e4  stp x28,x27,[sp, #0x10]
7102b5b9e8  stp x26,x25,[sp, #0x20]
7102b5b9ec  stp x24,x23,[sp, #0x30]
7102b5b9f0  stp x22,x21,[sp, #0x40]
7102b5b9f4  stp x20,x19,[sp, #0x50]
7102b5b9f8  stp x29,x30,[sp, #0x60]
7102b5b9fc  add x29,sp,#0x60
7102b5ba00  sub sp,sp,#0x1d0
7102b5ba04  stp x1,x3,[x0]
7102b5ba08  adrp x8,0x7105314000
7102b5ba0c  add x8,x8,#0x4d8
7102b5ba10  ldarb w8,[x8]
7102b5ba14  mov x20,x4
7102b5ba18  mov x26,x2
7102b5ba1c  mov x25,x1
7102b5ba20  mov x28,x0
7102b5ba24  tbz w8,#0x0,0x7102b5ede4
7102b5ba28  adrp x8,0x71052c5000
7102b5ba2c  ldrb w8,[x8, #0x1ba]
7102b5ba30  mov x19,x28
7102b5ba34  str xzr,[x19, #0x18]!
7102b5ba38  sturb w8,[x19, #-0x8]
7102b5ba3c  mov x8,x19
7102b5ba40  mov w0,#0x10
7102b5ba44  str xzr,[x8, #0x8]!
7102b5ba48  str x8,[sp, #0x58]
7102b5ba4c  mov x8,x19
7102b5ba50  orr w1,wzr,#0x70
7102b5ba54  str xzr,[x8, #0x38]!
7102b5ba58  str x8,[sp, #0x48]
7102b5ba5c  mov x8,x19
7102b5ba60  str xzr,[x19, #0x70]
7102b5ba64  str xzr,[x8, #0x68]!
7102b5ba68  str x8,[sp, #0x20]
7102b5ba6c  stp xzr,xzr,[x19, #0x88]
7102b5ba70  stp xzr,xzr,[x19, #0x78]
7102b5ba74  str xzr,[x19, #0x40]
7102b5ba78  str xzr,[x19, #0x10]
7102b5ba7c  stp xzr,xzr,[x19, #0x58]
7102b5ba80  stp xzr,xzr,[x19, #0x48]
7102b5ba84  stp xzr,xzr,[x19, #0x28]
7102b5ba88  stp xzr,xzr,[x19, #0x18]
7102b5ba8c  bl 0x710392e290
7102b5ba90  mov x21,x0
7102b5ba94  cbnz x0,0x7102b5bae0
7102b5ba98  adrp x8,0x7105332000
7102b5ba9c  ldr x0,[x8, #0xf00]
7102b5baa0  cbz x0,0x7102b5badc
7102b5baa4  orr w8,wzr,#0x70
7102b5baa8  stur wzr,[x29, #-0xb0]
7102b5baac  sub x1,x29,#0xb0
7102b5bab0  str x8,[sp, #0xe0]
7102b5bab4  ldr x8,[x0]
7102b5bab8  ldr x8,[x8, #0x30]
7102b5babc  add x2,sp,#0xe0
7102b5bac0  blr x8
7102b5bac4  tbz w0,#0x0,0x7102b5badc
7102b5bac8  mov w0,#0x10
7102b5bacc  orr w1,wzr,#0x70
7102b5bad0  bl 0x710392e290
7102b5bad4  mov x21,x0
7102b5bad8  cbnz x0,0x7102b5bae0
7102b5badc  mov x21,xzr
7102b5bae0  str wzr,[x21, #0x10]
7102b5bae4  strb wzr,[x21, #0x48]
7102b5bae8  adrp x9,0x71052a8000
7102b5baec  stp xzr,xzr,[x21, #0x38]
7102b5baf0  adrp x8,0x7105117000
7102b5baf4  add x8,x8,#0xb60
7102b5baf8  mov w1,#0x960
7102b5bafc  mov w0,#0x10
7102b5bb00  str xzr,[x21, #0x30]
7102b5bb04  ldr x9,[x9, #0xa80]
7102b5bb08  stp x8,x25,[x21]
7102b5bb0c  ldr q0,[x9]
7102b5bb10  str xzr,[x21, #0x60]
7102b5bb14  strh wzr,[x21, #0x68]
7102b5bb18  str q0,[x21, #0x50]
7102b5bb1c  bl 0x710392e290
7102b5bb20  cbnz x0,0x7102b5bb68
7102b5bb24  adrp x8,0x7105332000
7102b5bb28  ldr x0,[x8, #0xf00]
7102b5bb2c  cbz x0,0x7102b5bb64
7102b5bb30  mov w8,#0x960
7102b5bb34  stur wzr,[x29, #-0xb0]
7102b5bb38  sub x1,x29,#0xb0
7102b5bb3c  str x8,[sp, #0xe0]
7102b5bb40  ldr x8,[x0]
7102b5bb44  ldr x8,[x8, #0x30]
7102b5bb48  add x2,sp,#0xe0
7102b5bb4c  blr x8
7102b5bb50  tbz w0,#0x0,0x7102b5bb64
7102b5bb54  mov w1,#0x960
7102b5bb58  mov w0,#0x10
7102b5bb5c  bl 0x710392e290
7102b5bb60  cbnz x0,0x7102b5bb68
7102b5bb64  mov x0,xzr
7102b5bb68  add x8,x0,#0x960
7102b5bb6c  str x20,[sp, #0x70]
7102b5bb70  str x8,[x21, #0x28]
7102b5bb74  stp x0,x0,[x21, #0x18]
7102b5bb78  ldr x0,[x19]
7102b5bb7c  str x21,[x19]
7102b5bb80  cbz x0,0x7102b5bb90
7102b5bb84  ldr x8,[x0]
7102b5bb88  ldr x8,[x8, #0x8]
7102b5bb8c  blr x8
7102b5bb90  ldr w20,[x26, #0x8]
7102b5bb94  cbz w20,0x7102b5bc04
7102b5bb98  ldr x23,[x26, #0x10]
7102b5bb9c  mov x22,xzr
7102b5bba0  adrp x21,0x71042c2000
7102b5bba4  add x21,x21,#0xf27
7102b5bba8  add x0,x23,#0x48
7102b5bbac  mov x1,x21
7102b5bbb0  bl 0x71039c0060
7102b5bbb4  cbz w0,0x7102b5bbcc
7102b5bbb8  add x22,x22,#0x1
7102b5bbbc  add x23,x23,#0x160
7102b5bbc0  cmp x22,x20
7102b5bbc4  b.cc 0x7102b5bba8
7102b5bbc8  mov x23,xzr
7102b5bbcc  cbz w20,0x7102b5bc08
7102b5bbd0  ldr x24,[x26, #0x10]
7102b5bbd4  mov x22,xzr
7102b5bbd8  adrp x21,0x710427e000
7102b5bbdc  add x21,x21,#0xc13
7102b5bbe0  add x0,x24,#0x48
7102b5bbe4  mov x1,x21
7102b5bbe8  bl 0x71039c0060
7102b5bbec  cbz w0,0x7102b5bc0c
7102b5bbf0  add x22,x22,#0x1
7102b5bbf4  add x24,x24,#0x160
7102b5bbf8  cmp x22,x20
7102b5bbfc  b.cc 0x7102b5bbe0
7102b5bc00  b 0x7102b5bc08
7102b5bc04  mov x23,xzr
7102b5bc08  mov x24,xzr
7102b5bc0c  mov w0,#0x10
7102b5bc10  orr w1,wzr,#0x1e0
7102b5bc14  bl 0x710392e290
7102b5bc18  cbnz x0,0x7102b5bc60
7102b5bc1c  adrp x8,0x7105332000
7102b5bc20  ldr x0,[x8, #0xf00]
7102b5bc24  cbz x0,0x7102b5bc5c
7102b5bc28  orr w8,wzr,#0x1e0
7102b5bc2c  stur wzr,[x29, #-0xb0]
7102b5bc30  sub x1,x29,#0xb0
7102b5bc34  str x8,[sp, #0xe0]
7102b5bc38  ldr x8,[x0]
7102b5bc3c  ldr x8,[x8, #0x30]
7102b5bc40  add x2,sp,#0xe0
7102b5bc44  blr x8
7102b5bc48  tbz w0,#0x0,0x7102b5bc5c
7102b5bc4c  mov w0,#0x10
7102b5bc50  orr w1,wzr,#0x1e0
7102b5bc54  bl 0x710392e290
7102b5bc58  cbnz x0,0x7102b5bc60
7102b5bc5c  mov x0,xzr
7102b5bc60  add x8,x0,#0x1e0
7102b5bc64  stp x0,x0,[x29, #-0xf0]
7102b5bc68  stur x8,[x29, #-0xe0]
7102b5bc6c  ldr w8,[x26, #0x8]
7102b5bc70  mov w22,#0x9dc5
7102b5bc74  movk w22,#0x811c, LSL #16
7102b5bc78  str x28,[sp, #0x78]
7102b5bc7c  str x26,[sp, #0x60]
7102b5bc80  str x23,[sp, #0x40]
7102b5bc84  str x24,[sp, #0x30]
7102b5bc88  cbz w8,0x7102b5bcb4
7102b5bc8c  add x8,sp,#0xe0
7102b5bc90  add x9,x8,#0x14
7102b5bc94  mov x27,xzr
7102b5bc98  add x25,x8,#0x15
7102b5bc9c  mov w21,#0x160
7102b5bca0  str x9,[sp, #0x80]
7102b5bca4  orr x9,x8,#0x4
7102b5bca8  mov w24,#0x89
7102b5bcac  str x9,[sp, #0x50]
7102b5bcb0  b 0x7102b5bcc4
7102b5bcb4  mov x8,x0
7102b5bcb8  b 0x7102b5c074
7102b5bcbc  mov x0,xzr
7102b5bcc0  b 0x7102b5beb4
7102b5bcc4  ldr x8,[x26, #0x10]
7102b5bcc8  madd x23,x27,x21,x8
7102b5bccc  add x1,x23,#0x48
7102b5bcd0  add x0,sp,#0xe0
7102b5bcd4  bl 0x7102b6db30
7102b5bcd8  ldrb w8,[sp, #0xe0]
7102b5bcdc  cbz w8,0x7102b5c060
7102b5bce0  ldrb w20,[sp, #0xf4]
7102b5bce4  cbz w20,0x7102b5c05c
7102b5bce8  mov x8,x25
7102b5bcec  mov w10,w20
7102b5bcf0  mov w9,w22
7102b5bcf4  mul w9,w9,w24
7102b5bcf8  and w10,w10,#0xff
7102b5bcfc  eor w9,w9,w10
7102b5bd00  ldrb w10,[x8], #0x1
7102b5bd04  cbnz w10,0x7102b5bcf4
7102b5bd08  mov w8,#0xd075
7102b5bd0c  movk w8,#0x8a7d, LSL #16
7102b5bd10  cmp w9,w8
7102b5bd14  b.ne 0x7102b5bd2c
7102b5bd18  ldr x0,[sp, #0x80]
7102b5bd1c  adrp x1,0x71042c2000
7102b5bd20  add x1,x1,#0xf15
7102b5bd24  bl 0x71039c0060
7102b5bd28  cbz w0,0x7102b5bdb0
7102b5bd2c  mov x8,x25
7102b5bd30  mov w9,w22
7102b5bd34  and w10,w20,#0xff
7102b5bd38  mul w9,w9,w24
7102b5bd3c  eor w9,w9,w10
7102b5bd40  ldrb w20,[x8], #0x1
7102b5bd44  cbnz w20,0x7102b5bd34
7102b5bd48  mov w8,#0x308b
7102b5bd4c  movk w8,#0x196f, LSL #16
7102b5bd50  cmp w9,w8
7102b5bd54  b.ne 0x7102b5c050
7102b5bd58  ldr x0,[sp, #0x80]
7102b5bd5c  adrp x1,0x7104348000
7102b5bd60  add x1,x1,#0x4b0
7102b5bd64  bl 0x71039c0060
7102b5bd68  cbnz w0,0x7102b5c050
7102b5bd6c  ldr x9,[sp, #0x50]
7102b5bd70  ldr x8,[x9]
7102b5bd74  ldr w9,[x9, #0x8]
7102b5bd78  stur w9,[x29, #-0xa8]
7102b5bd7c  stur x8,[x29, #-0xb0]
7102b5bd80  ldp x8,x9,[x29, #-0xe8]
7102b5bd84  cmp x8,x9
7102b5bd88  b.cs 0x7102b5bf24
7102b5bd8c  str x23,[x8]
7102b5bd90  ldur x9,[x29, #-0xb0]
7102b5bd94  ldur w10,[x29, #-0xa8]
7102b5bd98  str w10,[x8, #0x10]
7102b5bd9c  str x9,[x8, #0x8]
7102b5bda0  ldur x8,[x29, #-0xe8]
7102b5bda4  add x8,x8,#0x18
7102b5bda8  stur x8,[x29, #-0xe8]
7102b5bdac  b 0x7102b5c04c
7102b5bdb0  ldr x26,[x19]
7102b5bdb4  ldp x9,x8,[x26, #0x20]
7102b5bdb8  ldur x13,[sp, #0xe4]
7102b5bdbc  ldr w12,[sp, #0xec]
7102b5bdc0  cmp x9,x8
7102b5bdc4  b.cs 0x7102b5bde4
7102b5bdc8  stp x23,x13,[x9]
7102b5bdcc  str w12,[x9, #0x10]
7102b5bdd0  ldr x8,[x26, #0x20]
7102b5bdd4  add x8,x8,#0x18
7102b5bdd8  str x8,[x26, #0x20]
7102b5bddc  ldr x26,[sp, #0x60]
7102b5bde0  b 0x7102b5c050
7102b5bde4  add x0,x26,#0x18
7102b5bde8  ldr x21,[x0]
7102b5bdec  sub x28,x9,x21
7102b5bdf0  orr x10,xzr,#-0x5555555555555556
7102b5bdf4  movk x10,#0xaaab
7102b5bdf8  asr x9,x28,#0x3
7102b5bdfc  mul x20,x9,x10
7102b5be00  orr x22,xzr,#-0x5555555555555556
7102b5be04  movk x22,#0xaaa, LSL #48
7102b5be08  add x9,x20,#0x1
7102b5be0c  cmp x9,x22
7102b5be10  b.hi 0x7102b5ee40
7102b5be14  sub x8,x8,x21
7102b5be18  asr x8,x8,#0x3
7102b5be1c  mul x8,x8,x10
7102b5be20  orr x10,xzr,#0x5555555555555555
7102b5be24  movk x10,#0x555, LSL #48
7102b5be28  cmp x8,x10
7102b5be2c  b.cs 0x7102b5be40
7102b5be30  lsl x8,x8,#0x1
7102b5be34  cmp x8,x9
7102b5be38  csel x22,x9,x8,cc
7102b5be3c  cbz x22,0x7102b5bcbc
7102b5be40  add x8,x22,x22, LSL #0x1
7102b5be44  lsl x8,x8,#0x3
7102b5be48  cmp x8,#0x0
7102b5be4c  csinc x1,x8,xzr,ne
7102b5be50  mov w0,#0x10
7102b5be54  str x13,[sp, #0x28]
7102b5be58  str w12,[sp, #0x38]
7102b5be5c  str x1,[sp, #0x18]
7102b5be60  bl 0x710392e290
7102b5be64  cbnz x0,0x7102b5beac
7102b5be68  adrp x8,0x7105332000
7102b5be6c  ldr x0,[x8, #0xf00]
7102b5be70  cbz x0,0x7102b5bea8
7102b5be74  ldr x8,[sp, #0x18]
7102b5be78  stur wzr,[x29, #-0xd8]
7102b5be7c  sub x1,x29,#0xd8
7102b5be80  sub x2,x29,#0xb0
7102b5be84  stur x8,[x29, #-0xb0]
7102b5be88  ldr x8,[x0]
7102b5be8c  ldr x8,[x8, #0x30]
7102b5be90  blr x8
7102b5be94  tbz w0,#0x0,0x7102b5bea8
7102b5be98  ldr x1,[sp, #0x18]
7102b5be9c  mov w0,#0x10
7102b5bea0  bl 0x710392e290
7102b5bea4  cbnz x0,0x7102b5beac
7102b5bea8  mov x0,xzr
7102b5beac  ldr w12,[sp, #0x38]
7102b5beb0  ldr x13,[sp, #0x28]
7102b5beb4  orr x9,xzr,#0x5555555555555555
7102b5beb8  movk x9,#0xd555, LSL #48
7102b5bebc  smulh x9,x28,x9
7102b5bec0  orr w11,wzr,#0x18
7102b5bec4  madd x8,x20,x11,x0
7102b5bec8  madd x20,x22,x11,x0
7102b5becc  stp x23,x13,[x8]
7102b5bed0  add x22,x8,#0x18
7102b5bed4  cmp x28,#0x1
7102b5bed8  str w12,[x8, #0x10]
7102b5bedc  asr x10,x9,#0x2
7102b5bee0  add x9,x10,x9, LSR #0x3f
7102b5bee4  madd x23,x9,x11,x8
7102b5bee8  b.lt 0x7102b5befc
7102b5beec  mov x0,x23
7102b5bef0  mov x1,x21
7102b5bef4  mov x2,x28
7102b5bef8  bl 0x71039c00e0
7102b5befc  stp x23,x22,[x26, #0x18]
7102b5bf00  ldr x28,[sp, #0x78]
7102b5bf04  str x20,[x26, #0x28]
7102b5bf08  ldr x26,[sp, #0x60]
7102b5bf0c  mov w22,#0x9dc5
7102b5bf10  movk w22,#0x811c, LSL #16
7102b5bf14  cbz x21,0x7102b5c050
7102b5bf18  mov x0,x21
7102b5bf1c  bl 0x710392eb40
7102b5bf20  b 0x7102b5c050
7102b5bf24  ldur x28,[x29, #-0xf0]
7102b5bf28  sub x21,x8,x28
7102b5bf2c  orr x10,xzr,#-0x5555555555555556
7102b5bf30  movk x10,#0xaaab
7102b5bf34  asr x8,x21,#0x3
7102b5bf38  mul x20,x8,x10
7102b5bf3c  orr x26,xzr,#-0x5555555555555556
7102b5bf40  movk x26,#0xaaa, LSL #48
7102b5bf44  add x8,x20,#0x1
7102b5bf48  cmp x8,x26
7102b5bf4c  b.hi 0x7102b5ee44
7102b5bf50  sub x9,x9,x28
7102b5bf54  asr x9,x9,#0x3
7102b5bf58  mul x9,x9,x10
7102b5bf5c  orr x10,xzr,#0x5555555555555555
7102b5bf60  movk x10,#0x555, LSL #48
7102b5bf64  cmp x9,x10
7102b5bf68  b.cs 0x7102b5bf7c
7102b5bf6c  lsl x9,x9,#0x1
7102b5bf70  cmp x9,x8
7102b5bf74  csel x26,x8,x9,cc
7102b5bf78  cbz x26,0x7102b5bfd8
7102b5bf7c  add x8,x26,x26, LSL #0x1
7102b5bf80  lsl x8,x8,#0x3
7102b5bf84  cmp x8,#0x0
7102b5bf88  csinc x22,x8,xzr,ne
7102b5bf8c  mov w0,#0x10
7102b5bf90  mov x1,x22
7102b5bf94  bl 0x710392e290
7102b5bf98  cbnz x0,0x7102b5bfdc
7102b5bf9c  adrp x8,0x7105332000
7102b5bfa0  ldr x0,[x8, #0xf00]
7102b5bfa4  cbz x0,0x7102b5bfd8
7102b5bfa8  str wzr,[sp, #0xc8]
7102b5bfac  stur x22,[x29, #-0xd8]
7102b5bfb0  ldr x8,[x0]
7102b5bfb4  ldr x8,[x8, #0x30]
7102b5bfb8  add x1,sp,#0xc8
7102b5bfbc  sub x2,x29,#0xd8
7102b5bfc0  blr x8
7102b5bfc4  tbz w0,#0x0,0x7102b5bfd8
7102b5bfc8  mov w0,#0x10
7102b5bfcc  mov x1,x22
7102b5bfd0  bl 0x710392e290
7102b5bfd4  cbnz x0,0x7102b5bfdc
7102b5bfd8  mov x0,xzr
7102b5bfdc  orr w11,wzr,#0x18
7102b5bfe0  madd x8,x20,x11,x0
7102b5bfe4  ldur x9,[x29, #-0xb0]
7102b5bfe8  ldur w10,[x29, #-0xa8]
7102b5bfec  stp x23,x9,[x8]
7102b5bff0  orr x9,xzr,#0x5555555555555555
7102b5bff4  movk x9,#0xd555, LSL #48
7102b5bff8  smulh x9,x21,x9
7102b5bffc  str w10,[x8, #0x10]
7102b5c000  asr x10,x9,#0x2
7102b5c004  add x9,x10,x9, LSR #0x3f
7102b5c008  madd x20,x26,x11,x0
7102b5c00c  add x22,x8,#0x18
7102b5c010  madd x23,x9,x11,x8
7102b5c014  cmp x21,#0x1
7102b5c018  b.lt 0x7102b5c02c
7102b5c01c  mov x0,x23
7102b5c020  mov x1,x28
7102b5c024  mov x2,x21
7102b5c028  bl 0x71039c00e0
7102b5c02c  ldr x26,[sp, #0x60]
7102b5c030  stp x23,x22,[x29, #-0xf0]
7102b5c034  mov w22,#0x9dc5
7102b5c038  movk w22,#0x811c, LSL #16
7102b5c03c  stur x20,[x29, #-0xe0]
7102b5c040  cbz x28,0x7102b5c04c
7102b5c044  mov x0,x28
7102b5c048  bl 0x710392eb40
7102b5c04c  ldr x28,[sp, #0x78]
7102b5c050  ldrb w8,[sp, #0xe0]
7102b5c054  mov w21,#0x160
7102b5c058  cbz w8,0x7102b5c060
7102b5c05c  strb wzr,[sp, #0xe0]
7102b5c060  ldr w8,[x26, #0x8]
7102b5c064  add x27,x27,#0x1
7102b5c068  cmp x27,x8
7102b5c06c  b.cc 0x7102b5bcc4
7102b5c070  ldp x0,x8,[x29, #-0xf0]
7102b5c074  orr x9,xzr,#-0x5555555555555556
7102b5c078  subs x21,x8,x0
7102b5c07c  movk x9,#0xaaab
7102b5c080  stp xzr,xzr,[sp, #0xd0]
7102b5c084  str xzr,[sp, #0x98]
7102b5c088  stp xzr,xzr,[sp, #0xc0]
7102b5c08c  stp xzr,xzr,[sp, #0xb0]
7102b5c090  stp xzr,xzr,[sp, #0xa0]
7102b5c094  b.eq 0x7102b5c110
7102b5c098  asr x8,x21,#0x3
7102b5c09c  mul x19,x8,x9
7102b5c0a0  orr x8,xzr,#-0x5555555555555556
7102b5c0a4  movk x8,#0xaaa, LSL #48
7102b5c0a8  cmp x19,x8
7102b5c0ac  b.hi 0x7102b5ee2c
7102b5c0b0  mov w0,#0x10
7102b5c0b4  mov x1,x21
7102b5c0b8  bl 0x710392e290
7102b5c0bc  cbnz x0,0x7102b5c100
7102b5c0c0  adrp x8,0x7105332000
7102b5c0c4  ldr x0,[x8, #0xf00]
7102b5c0c8  cbz x0,0x7102b5c0fc
7102b5c0cc  stur wzr,[x29, #-0xb0]
7102b5c0d0  str x21,[sp, #0xe0]
7102b5c0d4  ldr x8,[x0]
7102b5c0d8  ldr x8,[x8, #0x30]
7102b5c0dc  sub x1,x29,#0xb0
7102b5c0e0  add x2,sp,#0xe0
7102b5c0e4  blr x8
7102b5c0e8  tbz w0,#0x0,0x7102b5c0fc
7102b5c0ec  mov w0,#0x10
7102b5c0f0  mov x1,x21
7102b5c0f4  bl 0x710392e290
7102b5c0f8  cbnz x0,0x7102b5c100
7102b5c0fc  mov x0,xzr
7102b5c100  orr w8,wzr,#0x18
7102b5c104  madd x8,x19,x8,x0
7102b5c108  str x8,[sp, #0xd8]
7102b5c10c  stp x0,x0,[sp, #0xc8]
7102b5c110  ldr w8,[x26, #0xf8]
7102b5c114  cbz w8,0x7102b5c15c
7102b5c118  add x8,sp,#0xe0
7102b5c11c  orr x9,x8,#0x4
7102b5c120  str x9,[sp, #0x38]
7102b5c124  add x9,sp,#0xb0
7102b5c128  add x9,x9,#0x8
7102b5c12c  mov x25,xzr
7102b5c130  add x20,x8,#0x14
7102b5c134  add x27,x8,#0x15
7102b5c138  mov w24,#0x140
7102b5c13c  mov w19,#0x89
7102b5c140  str x20,[sp, #0x80]
7102b5c144  str x27,[sp, #0x50]
7102b5c148  str x9,[sp, #0x28]
7102b5c14c  add x9,x8,#0x38
7102b5c150  add x8,x8,#0x39
7102b5c154  stp x9,x8,[sp, #0x10]
7102b5c158  b 0x7102b5c510
7102b5c15c  add x8,sp,#0xb0
7102b5c160  add x8,x8,#0x8
7102b5c164  str x8,[sp, #0x28]
7102b5c168  b 0x7102b5d4ec
7102b5c16c  ldr x9,[sp, #0x38]
7102b5c170  ldr x8,[x9]
7102b5c174  ldr w9,[x9, #0x8]
7102b5c178  stur w9,[x29, #-0xa8]
7102b5c17c  stur x8,[x29, #-0xb0]
7102b5c180  ldp x8,x9,[x28, #0x88]
7102b5c184  cmp x8,x9
7102b5c188  b.cs 0x7102b5c1c4
7102b5c18c  ldur x9,[x29, #-0xb0]
7102b5c190  ldur w10,[x29, #-0xa8]
7102b5c194  str x9,[x8]
7102b5c198  mov w9,#0x2
7102b5c19c  stp w10,w9,[x8, #0x8]
7102b5c1a0  ldr q0,[sp]
7102b5c1a4  str q0,[x8, #0x10]
7102b5c1a8  ldr x8,[x28, #0x88]
7102b5c1ac  add x20,x8,#0x20
7102b5c1b0  str x20,[x28, #0x88]
7102b5c1b4  mov x21,x28
7102b5c1b8  b 0x7102b5c32c
7102b5c1bc  mov x23,xzr
7102b5c1c0  b 0x7102b5d1a4
7102b5c1c4  ldr x10,[sp, #0x20]
7102b5c1c8  ldr x28,[x10]
7102b5c1cc  sub x21,x8,x28
7102b5c1d0  asr x26,x21,#0x5
7102b5c1d4  add x8,x26,#0x1
7102b5c1d8  lsr x10,x8,#0x3b
7102b5c1dc  cbnz x10,0x7102b5ee4c
7102b5c1e0  sub x9,x9,x28
7102b5c1e4  asr x10,x9,#0x5
7102b5c1e8  orr x11,xzr,#0x3fffffffffffffe
7102b5c1ec  cmp x10,x11
7102b5c1f0  b.hi 0x7102b5c25c
7102b5c1f4  asr x9,x9,#0x4
7102b5c1f8  cmp x9,x8
7102b5c1fc  csel x20,x8,x9,cc
7102b5c200  cbz x20,0x7102b5c2c0
7102b5c204  lsr x8,x20,#0x3b
7102b5c208  cbz x8,0x7102b5c260
7102b5c20c  b 0x7102b5ee2c
7102b5c210  ldr x10,[sp, #0x20]
7102b5c214  ldr x28,[x10]
7102b5c218  sub x21,x8,x28
7102b5c21c  asr x26,x21,#0x5
7102b5c220  add x8,x26,#0x1
7102b5c224  lsr x10,x8,#0x3b
7102b5c228  cbnz x10,0x7102b5ee4c
7102b5c22c  sub x9,x9,x28
7102b5c230  asr x10,x9,#0x5
7102b5c234  orr x11,xzr,#0x3fffffffffffffe
7102b5c238  cmp x10,x11
7102b5c23c  b.hi 0x7102b5c454
7102b5c240  asr x9,x9,#0x4
7102b5c244  cmp x9,x8
7102b5c248  csel x20,x8,x9,cc
7102b5c24c  cbz x20,0x7102b5c4b8
7102b5c250  lsr x8,x20,#0x3b
7102b5c254  cbz x8,0x7102b5c458
7102b5c258  b 0x7102b5ee2c
7102b5c25c  orr x20,xzr,#0x7ffffffffffffff
7102b5c260  lsl x8,x20,#0x5
7102b5c264  cmp x8,#0x0
7102b5c268  csinc x24,x8,xzr,ne
7102b5c26c  mov w0,#0x10
7102b5c270  mov x1,x24
7102b5c274  bl 0x710392e290
7102b5c278  mov x23,x0
7102b5c27c  cbnz x0,0x7102b5c2c4
7102b5c280  adrp x8,0x7105332000
7102b5c284  ldr x0,[x8, #0xf00]
7102b5c288  cbz x0,0x7102b5c2c0
7102b5c28c  stur wzr,[x29, #-0xb4]
7102b5c290  stur x24,[x29, #-0xd8]
7102b5c294  ldr x8,[x0]
7102b5c298  ldr x8,[x8, #0x30]
7102b5c29c  sub x1,x29,#0xb4
7102b5c2a0  sub x2,x29,#0xd8
7102b5c2a4  blr x8
7102b5c2a8  tbz w0,#0x0,0x7102b5c2c0
7102b5c2ac  mov w0,#0x10
7102b5c2b0  mov x1,x24
7102b5c2b4  bl 0x710392e290
7102b5c2b8  mov x23,x0
7102b5c2bc  cbnz x0,0x7102b5c2c4
7102b5c2c0  mov x23,xzr
7102b5c2c4  ldur x8,[x29, #-0xb0]
7102b5c2c8  ldr q0,[sp]
7102b5c2cc  add x10,x23,x26, LSL #0x5
7102b5c2d0  ldur w9,[x29, #-0xa8]
7102b5c2d4  add x22,x23,x20, LSL #0x5
7102b5c2d8  add x20,x10,#0x20
7102b5c2dc  str x8,[x10]
7102b5c2e0  mov w8,#0x2
7102b5c2e4  cmp x21,#0x1
7102b5c2e8  str q0,[x10, #0x10]
7102b5c2ec  stp w9,w8,[x10, #0x8]
7102b5c2f0  b.lt 0x7102b5c304
7102b5c2f4  mov x0,x23
7102b5c2f8  mov x1,x28
7102b5c2fc  mov x2,x21
7102b5c300  bl 0x71039c00e0
7102b5c304  ldr x21,[sp, #0x78]
7102b5c308  stp x23,x20,[x21, #0x80]
7102b5c30c  ldr x26,[sp, #0x60]
7102b5c310  str x22,[x21, #0x90]
7102b5c314  mov w22,#0x9dc5
7102b5c318  movk w22,#0x811c, LSL #16
7102b5c31c  cbz x28,0x7102b5c32c
7102b5c320  mov x0,x28
7102b5c324  bl 0x710392eb40
7102b5c328  ldr x20,[x21, #0x88]
7102b5c32c  ldr x9,[sp, #0x38]
7102b5c330  ldr x8,[x9]
7102b5c334  ldr w9,[x9, #0x8]
7102b5c338  stur w9,[x29, #-0xa8]
7102b5c33c  stur x8,[x29, #-0xb0]
7102b5c340  ldr x8,[x21, #0x90]
7102b5c344  cmp x20,x8
7102b5c348  b.cs 0x7102b5c378
7102b5c34c  ldur x8,[x29, #-0xb0]
7102b5c350  ldur w9,[x29, #-0xa8]
7102b5c354  str x8,[x20]
7102b5c358  orr w8,wzr,#0x3
7102b5c35c  stp w9,w8,[x20, #0x8]
7102b5c360  ldr q0,[sp]
7102b5c364  str q0,[x20, #0x10]
7102b5c368  ldr x8,[x21, #0x88]
7102b5c36c  add x8,x8,#0x20
7102b5c370  str x8,[x21, #0x88]
7102b5c374  b 0x7102b5d200
7102b5c378  ldr x9,[sp, #0x20]
7102b5c37c  ldr x28,[x9]
7102b5c380  sub x21,x20,x28
7102b5c384  asr x26,x21,#0x5
7102b5c388  add x9,x26,#0x1
7102b5c38c  lsr x10,x9,#0x3b
7102b5c390  cbnz x10,0x7102b5ee4c
7102b5c394  sub x8,x8,x28
7102b5c398  asr x10,x8,#0x5
7102b5c39c  orr x11,xzr,#0x3fffffffffffffe
7102b5c3a0  cmp x10,x11
7102b5c3a4  b.hi 0x7102b5c3c4
7102b5c3a8  asr x8,x8,#0x4
7102b5c3ac  cmp x8,x9
7102b5c3b0  csel x20,x9,x8,cc
7102b5c3b4  cbz x20,0x7102b5c428
7102b5c3b8  lsr x8,x20,#0x3b
7102b5c3bc  cbz x8,0x7102b5c3c8
7102b5c3c0  b 0x7102b5ee2c
7102b5c3c4  orr x20,xzr,#0x7ffffffffffffff
7102b5c3c8  lsl x8,x20,#0x5
7102b5c3cc  cmp x8,#0x0
7102b5c3d0  csinc x24,x8,xzr,ne
7102b5c3d4  mov w0,#0x10
7102b5c3d8  mov x1,x24
7102b5c3dc  bl 0x710392e290
7102b5c3e0  mov x23,x0
7102b5c3e4  cbnz x0,0x7102b5c42c
7102b5c3e8  adrp x8,0x7105332000
7102b5c3ec  ldr x0,[x8, #0xf00]
7102b5c3f0  cbz x0,0x7102b5c428
7102b5c3f4  stur wzr,[x29, #-0xb4]
7102b5c3f8  stur x24,[x29, #-0xd8]
7102b5c3fc  ldr x8,[x0]
7102b5c400  ldr x8,[x8, #0x30]
7102b5c404  sub x1,x29,#0xb4
7102b5c408  sub x2,x29,#0xd8
7102b5c40c  blr x8
7102b5c410  tbz w0,#0x0,0x7102b5c428
7102b5c414  mov w0,#0x10
7102b5c418  mov x1,x24
7102b5c41c  bl 0x710392e290
7102b5c420  mov x23,x0
7102b5c424  cbnz x0,0x7102b5c42c
7102b5c428  mov x23,xzr
7102b5c42c  ldr q0,[sp]
7102b5c430  ldur x8,[x29, #-0xb0]
7102b5c434  add x10,x23,x26, LSL #0x5
7102b5c438  ldur w9,[x29, #-0xa8]
7102b5c43c  add x20,x23,x20, LSL #0x5
7102b5c440  str x8,[x10]
7102b5c444  str q0,[x10, #0x10]
7102b5c448  str w9,[x10, #0x8]
7102b5c44c  orr w8,wzr,#0x3
7102b5c450  b 0x7102b5c4e0
7102b5c454  orr x20,xzr,#0x7ffffffffffffff
7102b5c458  lsl x8,x20,#0x5
7102b5c45c  cmp x8,#0x0
7102b5c460  csinc x24,x8,xzr,ne
7102b5c464  mov w0,#0x10
7102b5c468  mov x1,x24
7102b5c46c  bl 0x710392e290
7102b5c470  mov x23,x0
7102b5c474  cbnz x0,0x7102b5c4bc
7102b5c478  adrp x8,0x7105332000
7102b5c47c  ldr x0,[x8, #0xf00]
7102b5c480  cbz x0,0x7102b5c4b8
7102b5c484  stur wzr,[x29, #-0xb4]
7102b5c488  stur x24,[x29, #-0xd8]
7102b5c48c  ldr x8,[x0]
7102b5c490  ldr x8,[x8, #0x30]
7102b5c494  sub x1,x29,#0xb4
7102b5c498  sub x2,x29,#0xd8
7102b5c49c  blr x8
7102b5c4a0  tbz w0,#0x0,0x7102b5c4b8
7102b5c4a4  mov w0,#0x10
7102b5c4a8  mov x1,x24
7102b5c4ac  bl 0x710392e290
7102b5c4b0  mov x23,x0
7102b5c4b4  cbnz x0,0x7102b5c4bc
7102b5c4b8  mov x23,xzr
7102b5c4bc  ldur x8,[x29, #-0xb0]
7102b5c4c0  ldr q0,[sp]
7102b5c4c4  add x10,x23,x26, LSL #0x5
7102b5c4c8  ldur w9,[x29, #-0xa8]
7102b5c4cc  add x20,x23,x20, LSL #0x5
7102b5c4d0  str x8,[x10]
7102b5c4d4  mov w8,#0x1
7102b5c4d8  str w9,[x10, #0x8]
7102b5c4dc  str q0,[x10, #0x10]
7102b5c4e0  add x22,x10,#0x20
7102b5c4e4  cmp x21,#0x1
7102b5c4e8  str w8,[x10, #0xc]
7102b5c4ec  b.lt 0x7102b5c500
7102b5c4f0  mov x0,x23
7102b5c4f4  mov x1,x28
7102b5c4f8  mov x2,x21
7102b5c4fc  bl 0x71039c00e0
7102b5c500  ldr x8,[sp, #0x78]
7102b5c504  stp x23,x22,[x8, #0x80]
7102b5c508  str x20,[x8, #0x90]
7102b5c50c  b 0x7102b5d1e8
7102b5c510  ldr x21,[x26, #0x100]
7102b5c514  madd x23,x25,x24,x21
7102b5c518  add x0,x23,#0x48
7102b5c51c  bl 0x71039c0070
7102b5c520  cmp w0,#0xc
7102b5c524  b.hi 0x7102b5c530
7102b5c528  strb wzr,[sp, #0xe0]
7102b5c52c  b 0x7102b5d214
7102b5c530  madd x8,x25,x24,x21
7102b5c534  add x1,x8,#0x55
7102b5c538  add x0,sp,#0xe0
7102b5c53c  bl 0x7102b6db30
7102b5c540  ldrb w8,[sp, #0xe0]
7102b5c544  cbz w8,0x7102b5d214
7102b5c548  ldrb w24,[sp, #0xf4]
7102b5c54c  cbz w24,0x7102b5c528
7102b5c550  mov x8,x27
7102b5c554  mov w10,w24
7102b5c558  mov w9,w22
7102b5c55c  mul w9,w9,w19
7102b5c560  and w10,w10,#0xff
7102b5c564  eor w9,w9,w10
7102b5c568  ldrb w10,[x8], #0x1
7102b5c56c  cbnz w10,0x7102b5c55c
7102b5c570  mov w8,#0xe964
7102b5c574  movk w8,#0x4e9c, LSL #16
7102b5c578  cmp w9,w8
7102b5c57c  b.ne 0x7102b5c594
7102b5c580  mov x0,x20
7102b5c584  adrp x1,0x710426e000
7102b5c588  add x1,x1,#0x5e
7102b5c58c  bl 0x71039c0060
7102b5c590  cbz w0,0x7102b5c878
7102b5c594  mov x8,x27
7102b5c598  mov w10,w24
7102b5c59c  mov w9,w22
7102b5c5a0  mul w9,w9,w19
7102b5c5a4  and w10,w10,#0xff
7102b5c5a8  eor w9,w9,w10
7102b5c5ac  ldrb w10,[x8], #0x1
7102b5c5b0  cbnz w10,0x7102b5c5a0
7102b5c5b4  mov w8,#0xdc9
7102b5c5b8  movk w8,#0xbd11, LSL #16
7102b5c5bc  cmp w9,w8
7102b5c5c0  b.ne 0x7102b5c5d8
7102b5c5c4  mov x0,x20
7102b5c5c8  adrp x1,0x71042c2000
7102b5c5cc  add x1,x1,#0xf1c
7102b5c5d0  bl 0x71039c0060
7102b5c5d4  cbz w0,0x7102b5c930
7102b5c5d8  mov x8,x27
7102b5c5dc  mov w10,w24
7102b5c5e0  mov w9,w22
7102b5c5e4  mul w9,w9,w19
7102b5c5e8  and w10,w10,#0xff
7102b5c5ec  eor w9,w9,w10
7102b5c5f0  ldrb w10,[x8], #0x1
7102b5c5f4  cbnz w10,0x7102b5c5e4
7102b5c5f8  mov w8,#0xda28
7102b5c5fc  movk w8,#0x60f8, LSL #16
7102b5c600  cmp w9,w8
7102b5c604  b.ne 0x7102b5c61c
7102b5c608  mov x0,x20
7102b5c60c  adrp x1,0x71043ee000
7102b5c610  add x1,x1,#0xc70
7102b5c614  bl 0x71039c0060
7102b5c618  cbz w0,0x7102b5ca2c
7102b5c61c  mov x8,x27
7102b5c620  mov w10,w24
7102b5c624  mov w9,w22
7102b5c628  mul w9,w9,w19
7102b5c62c  and w10,w10,#0xff
7102b5c630  eor w9,w9,w10
7102b5c634  ldrb w10,[x8], #0x1
7102b5c638  cbnz w10,0x7102b5c628
7102b5c63c  mov w8,#0x6fc4
7102b5c640  movk w8,#0x4993, LSL #16
7102b5c644  cmp w9,w8
7102b5c648  b.ne 0x7102b5c660
7102b5c64c  mov x0,x20
7102b5c650  adrp x1,0x71042f5000
7102b5c654  add x1,x1,#0xf29
7102b5c658  bl 0x71039c0060
7102b5c65c  cbz w0,0x7102b5ca84
7102b5c660  mov x8,x27
7102b5c664  mov w10,w24
7102b5c668  mov w9,w22
7102b5c66c  mul w9,w9,w19
7102b5c670  and w10,w10,#0xff
7102b5c674  eor w9,w9,w10
7102b5c678  ldrb w10,[x8], #0x1
7102b5c67c  cbnz w10,0x7102b5c66c
7102b5c680  mov w8,#0x308b
7102b5c684  movk w8,#0x196f, LSL #16
7102b5c688  cmp w9,w8
7102b5c68c  b.ne 0x7102b5c6a4
7102b5c690  mov x0,x20
7102b5c694  adrp x1,0x7104348000
7102b5c698  add x1,x1,#0x4b0
7102b5c69c  bl 0x71039c0060
7102b5c6a0  cbz w0,0x7102b5cadc
7102b5c6a4  mov x8,x27
7102b5c6a8  mov w10,w24
7102b5c6ac  mov w9,w22
7102b5c6b0  mul w9,w9,w19
7102b5c6b4  and w10,w10,#0xff
7102b5c6b8  eor w9,w9,w10
7102b5c6bc  ldrb w10,[x8], #0x1
7102b5c6c0  cbnz w10,0x7102b5c6b0
7102b5c6c4  mov w8,#0x69d9
7102b5c6c8  movk w8,#0x160d, LSL #16
7102b5c6cc  cmp w9,w8
7102b5c6d0  b.ne 0x7102b5c6e8
7102b5c6d4  mov x0,x20
7102b5c6d8  adrp x1,0x710425d000
7102b5c6dc  add x1,x1,#0x5fa
7102b5c6e0  bl 0x71039c0060
7102b5c6e4  cbz w0,0x7102b5cb34
7102b5c6e8  mov x8,x27
7102b5c6ec  mov w10,w24
7102b5c6f0  mov w9,w22
7102b5c6f4  mul w9,w9,w19
7102b5c6f8  and w10,w10,#0xff
7102b5c6fc  eor w9,w9,w10
7102b5c700  ldrb w10,[x8], #0x1
7102b5c704  cbnz w10,0x7102b5c6f4
7102b5c708  mov w8,#0x9578
7102b5c70c  movk w8,#0x9a53, LSL #16
7102b5c710  cmp w9,w8
7102b5c714  b.ne 0x7102b5c72c
7102b5c718  mov x0,x20
7102b5c71c  adrp x1,0x7104306000
7102b5c720  add x1,x1,#0x7a2
7102b5c724  bl 0x71039c0060
7102b5c728  cbz w0,0x7102b5cbdc
7102b5c72c  mov x8,x27
7102b5c730  mov w9,w22
7102b5c734  and w10,w24,#0xff
7102b5c738  mul w9,w9,w19
7102b5c73c  eor w9,w9,w10
7102b5c740  ldrb w24,[x8], #0x1
7102b5c744  cbnz w24,0x7102b5c734
7102b5c748  mov w8,#0x172
7102b5c74c  movk w8,#0xdec7, LSL #16
7102b5c750  cmp w9,w8
7102b5c754  mov w23,#0x140
7102b5c758  b.ne 0x7102b5d204
7102b5c75c  ldr x0,[sp, #0x80]
7102b5c760  adrp x1,0x7104431000
7102b5c764  add x1,x1,#0x26c
7102b5c768  bl 0x71039c0060
7102b5c76c  cbnz w0,0x7102b5d204
7102b5c770  madd x8,x25,x23,x21
7102b5c774  ldr w8,[x8, #0x108]
7102b5c778  cmp w8,#0x1
7102b5c77c  b.ne 0x7102b5d204
7102b5c780  ldrb w20,[sp, #0x118]
7102b5c784  cbz w20,0x7102b5d204
7102b5c788  madd x8,x25,x23,x21
7102b5c78c  movi v0.2D,#0x0
7102b5c790  add x9,x8,#0x10c
7102b5c794  add x8,x8,#0x110
7102b5c798  ld1 {v0.S}[0],[x9]
7102b5c79c  mov w9,w22
7102b5c7a0  ld1 {v0.S}[1],[x8]
7102b5c7a4  ldr x8,[sp, #0x18]
7102b5c7a8  mov w10,w20
7102b5c7ac  str q0,[sp]
7102b5c7b0  mul w9,w9,w19
7102b5c7b4  and w10,w10,#0xff
7102b5c7b8  eor w9,w9,w10
7102b5c7bc  ldrb w10,[x8], #0x1
7102b5c7c0  cbnz w10,0x7102b5c7b0
7102b5c7c4  mov w8,#0x1242
7102b5c7c8  movk w8,#0xa0db, LSL #16
7102b5c7cc  cmp w9,w8
7102b5c7d0  b.ne 0x7102b5c7e8
7102b5c7d4  ldr x0,[sp, #0x10]
7102b5c7d8  adrp x1,0x7104452000
7102b5c7dc  add x1,x1,#0xa59
7102b5c7e0  bl 0x71039c0060
7102b5c7e4  cbz w0,0x7102b5c16c
7102b5c7e8  cbz w20,0x7102b5d204
7102b5c7ec  ldr x8,[sp, #0x18]
7102b5c7f0  mov w9,w22
7102b5c7f4  and w10,w20,#0xff
7102b5c7f8  mul w9,w9,w19
7102b5c7fc  eor w9,w9,w10
7102b5c800  ldrb w20,[x8], #0x1
7102b5c804  cbnz w20,0x7102b5c7f4
7102b5c808  mov w8,#0x3e4d
7102b5c80c  movk w8,#0xe3c8, LSL #16
7102b5c810  cmp w9,w8
7102b5c814  b.ne 0x7102b5d204
7102b5c818  ldr x0,[sp, #0x10]
7102b5c81c  adrp x1,0x7104306000
7102b5c820  add x1,x1,#0x7ad
7102b5c824  bl 0x71039c0060
7102b5c828  cbnz w0,0x7102b5d204
7102b5c82c  ldr x9,[sp, #0x38]
7102b5c830  ldr x8,[x9]
7102b5c834  ldr w9,[x9, #0x8]
7102b5c838  stur w9,[x29, #-0xa8]
7102b5c83c  stur x8,[x29, #-0xb0]
7102b5c840  ldp x8,x9,[x28, #0x88]
7102b5c844  cmp x8,x9
7102b5c848  b.cs 0x7102b5c210
7102b5c84c  ldur x9,[x29, #-0xb0]
7102b5c850  ldur w10,[x29, #-0xa8]
7102b5c854  str x9,[x8]
7102b5c858  mov w9,#0x1
7102b5c85c  stp w10,w9,[x8, #0x8]
7102b5c860  ldr q0,[sp]
7102b5c864  str q0,[x8, #0x10]
7102b5c868  ldr x8,[x28, #0x88]
7102b5c86c  add x8,x8,#0x20
7102b5c870  str x8,[x28, #0x88]
7102b5c874  b 0x7102b5d200
7102b5c878  ldr x8,[sp, #0x40]
7102b5c87c  mov w20,#0x140
7102b5c880  cbz x8,0x7102b5d204
7102b5c884  madd x8,x25,x20,x21
7102b5c888  ldr w8,[x8, #0x108]
7102b5c88c  cmp w8,#0x1
7102b5c890  b.ne 0x7102b5d204
7102b5c894  mov w0,#0x10
7102b5c898  mov w1,#0x50
7102b5c89c  bl 0x710392e290
7102b5c8a0  mov x28,x0
7102b5c8a4  cbnz x0,0x7102b5c8f0
7102b5c8a8  adrp x8,0x7105332000
7102b5c8ac  ldr x0,[x8, #0xf00]
7102b5c8b0  cbz x0,0x7102b5c8ec
7102b5c8b4  mov w8,#0x50
7102b5c8b8  stur wzr,[x29, #-0xd8]
7102b5c8bc  sub x1,x29,#0xd8
7102b5c8c0  stur x8,[x29, #-0xb0]
7102b5c8c4  ldr x8,[x0]
7102b5c8c8  ldr x8,[x8, #0x30]
7102b5c8cc  sub x2,x29,#0xb0
7102b5c8d0  blr x8
7102b5c8d4  tbz w0,#0x0,0x7102b5c8ec
7102b5c8d8  mov w0,#0x10
7102b5c8dc  mov w1,#0x50
7102b5c8e0  bl 0x710392e290
7102b5c8e4  mov x28,x0
7102b5c8e8  cbnz x0,0x7102b5c8f0
7102b5c8ec  mov x28,xzr
7102b5c8f0  ldr x11,[sp, #0x78]
7102b5c8f4  ldr x8,[x11]
7102b5c8f8  ldr x10,[sp, #0x38]
7102b5c8fc  mov w9,#0x1
7102b5c900  str w9,[x28, #0x8]
7102b5c904  ldr x9,[x10]
7102b5c908  ldr w10,[x10, #0x8]
7102b5c90c  stur x9,[x28, #0xc]
7102b5c910  str x8,[x28, #0x20]
7102b5c914  ldr x8,[sp, #0x40]
7102b5c918  stp x8,xzr,[x28, #0x28]
7102b5c91c  madd x8,x25,x20,x21
7102b5c920  movi v0.2D,#0x0
7102b5c924  adrp x9,0x7105117000
7102b5c928  add x9,x9,#0x828
7102b5c92c  b 0x7102b5c9e4
7102b5c930  ldr x8,[sp, #0x30]
7102b5c934  mov w20,#0x140
7102b5c938  cbz x8,0x7102b5d204
7102b5c93c  madd x8,x25,x20,x21
7102b5c940  ldr w8,[x8, #0x108]
7102b5c944  cmp w8,#0x1
7102b5c948  b.ne 0x7102b5d204
7102b5c94c  mov w0,#0x10
7102b5c950  mov w1,#0x50
7102b5c954  bl 0x710392e290
7102b5c958  mov x28,x0
7102b5c95c  cbnz x0,0x7102b5c9a8
7102b5c960  adrp x8,0x7105332000
7102b5c964  ldr x0,[x8, #0xf00]
7102b5c968  cbz x0,0x7102b5c9a4
7102b5c96c  mov w8,#0x50
7102b5c970  stur wzr,[x29, #-0xd8]
7102b5c974  sub x1,x29,#0xd8
7102b5c978  stur x8,[x29, #-0xb0]
7102b5c97c  ldr x8,[x0]
7102b5c980  ldr x8,[x8, #0x30]
7102b5c984  sub x2,x29,#0xb0
7102b5c988  blr x8
7102b5c98c  tbz w0,#0x0,0x7102b5c9a4
7102b5c990  mov w0,#0x10
7102b5c994  mov w1,#0x50
7102b5c998  bl 0x710392e290
7102b5c99c  mov x28,x0
7102b5c9a0  cbnz x0,0x7102b5c9a8
7102b5c9a4  mov x28,xzr
7102b5c9a8  ldr x11,[sp, #0x78]
7102b5c9ac  ldr x8,[x11]
7102b5c9b0  ldr x10,[sp, #0x38]
7102b5c9b4  orr w9,wzr,#0x3
7102b5c9b8  str w9,[x28, #0x8]
7102b5c9bc  ldr x9,[x10]
7102b5c9c0  ldr w10,[x10, #0x8]
7102b5c9c4  stur x9,[x28, #0xc]
7102b5c9c8  str x8,[x28, #0x20]
7102b5c9cc  ldr x8,[sp, #0x30]
7102b5c9d0  stp x8,xzr,[x28, #0x28]
7102b5c9d4  madd x8,x25,x20,x21
7102b5c9d8  movi v0.2D,#0x0
7102b5c9dc  adrp x9,0x7105117000
7102b5c9e0  add x9,x9,#0xa28
7102b5c9e4  str w10,[x28, #0x14]
7102b5c9e8  strb wzr,[x28, #0x18]
7102b5c9ec  str x9,[x28]
7102b5c9f0  add x9,x8,#0x10c
7102b5c9f4  add x8,x8,#0x110
7102b5c9f8  stp xzr,xzr,[x28, #0x38]
7102b5c9fc  ld1 {v0.S}[0],[x9]
7102b5ca00  ld1 {v0.S}[1],[x8]
7102b5ca04  str q0,[x28, #0x30]
7102b5ca08  ldp x9,x8,[x11, #0x28]
7102b5ca0c  cmp x9,x8
7102b5ca10  b.cs 0x7102b5cca8
7102b5ca14  str x28,[x9]
7102b5ca18  ldr x8,[x11, #0x28]
7102b5ca1c  add x8,x8,#0x8
7102b5ca20  str x8,[x11, #0x28]
7102b5ca24  mov x28,x11
7102b5ca28  b 0x7102b5d204
7102b5ca2c  mov w8,#0x140
7102b5ca30  madd x8,x25,x8,x21
7102b5ca34  ldr w8,[x8, #0x108]
7102b5ca38  cmp w8,#0x3
7102b5ca3c  b.ne 0x7102b5d204
7102b5ca40  ldr x9,[sp, #0x38]
7102b5ca44  ldr x8,[x9]
7102b5ca48  ldr w9,[x9, #0x8]
7102b5ca4c  stur w9,[x29, #-0xa8]
7102b5ca50  stur x8,[x29, #-0xb0]
7102b5ca54  ldp x8,x9,[sp, #0xb8]
7102b5ca58  cmp x8,x9
7102b5ca5c  b.cs 0x7102b5cda8
7102b5ca60  str x23,[x8]
7102b5ca64  ldur x9,[x29, #-0xb0]
7102b5ca68  ldur w10,[x29, #-0xa8]
7102b5ca6c  str w10,[x8, #0x10]
7102b5ca70  str x9,[x8, #0x8]
7102b5ca74  ldr x8,[sp, #0xb8]
7102b5ca78  add x8,x8,#0x18
7102b5ca7c  str x8,[sp, #0xb8]
7102b5ca80  b 0x7102b5d200
7102b5ca84  mov w8,#0x140
7102b5ca88  madd x8,x25,x8,x21
7102b5ca8c  ldr w8,[x8, #0x108]
7102b5ca90  cmp w8,#0x1
7102b5ca94  b.ne 0x7102b5d204
7102b5ca98  ldr x9,[sp, #0x38]
7102b5ca9c  ldr x8,[x9]
7102b5caa0  ldr w9,[x9, #0x8]
7102b5caa4  stur w9,[x29, #-0xa8]
7102b5caa8  stur x8,[x29, #-0xb0]
7102b5caac  ldp x8,x9,[sp, #0xa0]
7102b5cab0  cmp x8,x9
7102b5cab4  b.cs 0x7102b5cebc
7102b5cab8  str x23,[x8]
7102b5cabc  ldur x9,[x29, #-0xb0]
7102b5cac0  ldur w10,[x29, #-0xa8]
7102b5cac4  str w10,[x8, #0x10]
7102b5cac8  str x9,[x8, #0x8]
7102b5cacc  ldr x8,[sp, #0xa0]
7102b5cad0  add x8,x8,#0x18
7102b5cad4  str x8,[sp, #0xa0]
7102b5cad8  b 0x7102b5d200
7102b5cadc  mov w8,#0x140
7102b5cae0  madd x8,x25,x8,x21
7102b5cae4  ldr w8,[x8, #0x108]
7102b5cae8  cmp w8,#0x4
7102b5caec  b.ne 0x7102b5d204
7102b5caf0  ldr x9,[sp, #0x38]
7102b5caf4  ldr x8,[x9]
7102b5caf8  ldr w9,[x9, #0x8]
7102b5cafc  stur w9,[x29, #-0xa8]
7102b5cb00  stur x8,[x29, #-0xb0]
7102b5cb04  ldp x8,x9,[sp, #0xd0]
7102b5cb08  cmp x8,x9
7102b5cb0c  b.cs 0x7102b5cfd0
7102b5cb10  str x23,[x8]
7102b5cb14  ldur x9,[x29, #-0xb0]
7102b5cb18  ldur w10,[x29, #-0xa8]
7102b5cb1c  str w10,[x8, #0x10]
7102b5cb20  str x9,[x8, #0x8]
7102b5cb24  ldr x8,[sp, #0xd0]
7102b5cb28  add x8,x8,#0x18
7102b5cb2c  str x8,[sp, #0xd0]
7102b5cb30  b 0x7102b5d200
7102b5cb34  mov w10,#0x140
7102b5cb38  madd x8,x25,x10,x21
7102b5cb3c  ldr w8,[x8, #0x108]
7102b5cb40  ldr w9,[sp, #0x114]
7102b5cb44  cmp w8,#0x1
7102b5cb48  ccmp w9,#0x3,#0x0,eq
7102b5cb4c  b.ne 0x7102b5d204
7102b5cb50  ldrb w8,[sp, #0x118]
7102b5cb54  cmp w8,#0x53
7102b5cb58  b.ne 0x7102b5d204
7102b5cb5c  ldrb w8,[sp, #0x119]
7102b5cb60  cmp w8,#0x50
7102b5cb64  b.ne 0x7102b5d204
7102b5cb68  ldrb w8,[sp, #0x11a]
7102b5cb6c  subs w27,w8,#0x30
7102b5cb70  b.cc 0x7102b5d204
7102b5cb74  and w8,w27,#0xff
7102b5cb78  cmp w8,#0x9
7102b5cb7c  b.hi 0x7102b5d204
7102b5cb80  madd x8,x25,x10,x21
7102b5cb84  movi v0.2D,#0x0
7102b5cb88  add x9,x8,#0x10c
7102b5cb8c  add x8,x8,#0x110
7102b5cb90  ld1 {v0.S}[0],[x9]
7102b5cb94  ldr x9,[sp, #0x38]
7102b5cb98  ld1 {v0.S}[1],[x8]
7102b5cb9c  ldr x8,[x9]
7102b5cba0  ldr w9,[x9, #0x8]
7102b5cba4  stur w9,[x29, #-0xa8]
7102b5cba8  stur x8,[x29, #-0xb0]
7102b5cbac  ldp x8,x9,[x28, #0x58]
7102b5cbb0  cmp x8,x9
7102b5cbb4  b.cs 0x7102b5d0e4
7102b5cbb8  str q0,[x8]
7102b5cbbc  ldur x9,[x29, #-0xb0]
7102b5cbc0  ldur w10,[x29, #-0xa8]
7102b5cbc4  str x9,[x8, #0x10]
7102b5cbc8  stp w10,w27,[x8, #0x18]
7102b5cbcc  ldr x8,[x28, #0x58]
7102b5cbd0  add x8,x8,#0x20
7102b5cbd4  str x8,[x28, #0x58]
7102b5cbd8  b 0x7102b5d200
7102b5cbdc  mov w8,#0x140
7102b5cbe0  madd x8,x25,x8,x21
7102b5cbe4  ldr w8,[x8, #0x108]
7102b5cbe8  cmp w8,#0x3
7102b5cbec  b.ne 0x7102b5d204
7102b5cbf0  mov w0,#0x10
7102b5cbf4  orr w1,wzr,#0x38
7102b5cbf8  bl 0x710392e290
7102b5cbfc  mov x28,x0
7102b5cc00  cbnz x0,0x7102b5cc4c
7102b5cc04  adrp x8,0x7105332000
7102b5cc08  ldr x0,[x8, #0xf00]
7102b5cc0c  cbz x0,0x7102b5cc48
7102b5cc10  orr w8,wzr,#0x38
7102b5cc14  stur wzr,[x29, #-0xd8]
7102b5cc18  sub x1,x29,#0xd8
7102b5cc1c  stur x8,[x29, #-0xb0]
7102b5cc20  ldr x8,[x0]
7102b5cc24  ldr x8,[x8, #0x30]
7102b5cc28  sub x2,x29,#0xb0
7102b5cc2c  blr x8
7102b5cc30  tbz w0,#0x0,0x7102b5cc48
7102b5cc34  mov w0,#0x10
7102b5cc38  orr w1,wzr,#0x38
7102b5cc3c  bl 0x710392e290
7102b5cc40  mov x28,x0
7102b5cc44  cbnz x0,0x7102b5cc4c
7102b5cc48  mov x28,xzr
7102b5cc4c  ldr x9,[sp, #0x38]
7102b5cc50  orr w8,wzr,#0x6
7102b5cc54  str w8,[x28, #0x8]
7102b5cc58  ldr x8,[x9]
7102b5cc5c  ldr w9,[x9, #0x8]
7102b5cc60  stur x8,[x28, #0xc]
7102b5cc64  stp x23,xzr,[x28, #0x20]
7102b5cc68  ldr x10,[sp, #0x78]
7102b5cc6c  adrp x8,0x7105117000
7102b5cc70  add x8,x8,#0x980
7102b5cc74  str w9,[x28, #0x14]
7102b5cc78  strb wzr,[x28, #0x18]
7102b5cc7c  str x8,[x28]
7102b5cc80  strb wzr,[x28, #0x30]
7102b5cc84  ldp x9,x8,[x10, #0x28]
7102b5cc88  cmp x9,x8
7102b5cc8c  b.cs 0x7102b5cca8
7102b5cc90  str x28,[x9]
7102b5cc94  ldr x8,[x10, #0x28]
7102b5cc98  add x8,x8,#0x8
7102b5cc9c  str x8,[x10, #0x28]
7102b5cca0  mov x28,x10
7102b5cca4  b 0x7102b5d204
7102b5cca8  ldr x10,[sp, #0x58]
7102b5ccac  ldr x23,[x10]
7102b5ccb0  sub x21,x9,x23
7102b5ccb4  asr x26,x21,#0x3
7102b5ccb8  add x9,x26,#0x1
7102b5ccbc  lsr x10,x9,#0x3d
7102b5ccc0  cbnz x10,0x7102b5ee24
7102b5ccc4  sub x8,x8,x23
7102b5ccc8  asr x10,x8,#0x3
7102b5cccc  orr x11,xzr,#0xffffffffffffffe
7102b5ccd0  cmp x10,x11
7102b5ccd4  b.hi 0x7102b5ccf4
7102b5ccd8  asr x8,x8,#0x2
7102b5ccdc  cmp x8,x9
7102b5cce0  csel x20,x9,x8,cc
7102b5cce4  cbz x20,0x7102b5cd58
7102b5cce8  lsr x8,x20,#0x3d
7102b5ccec  cbz x8,0x7102b5ccf8
7102b5ccf0  b 0x7102b5ee2c
7102b5ccf4  orr x20,xzr,#0x1fffffffffffffff
7102b5ccf8  lsl x8,x20,#0x3
7102b5ccfc  cmp x8,#0x0
7102b5cd00  csinc x24,x8,xzr,ne
7102b5cd04  mov w0,#0x10
7102b5cd08  mov x1,x24
7102b5cd0c  bl 0x710392e290
7102b5cd10  mov x27,x0
7102b5cd14  cbnz x0,0x7102b5cd5c
7102b5cd18  adrp x8,0x7105332000
7102b5cd1c  ldr x0,[x8, #0xf00]
7102b5cd20  cbz x0,0x7102b5cd58
7102b5cd24  stur wzr,[x29, #-0xd8]
7102b5cd28  stur x24,[x29, #-0xb0]
7102b5cd2c  ldr x8,[x0]
7102b5cd30  ldr x8,[x8, #0x30]
7102b5cd34  sub x1,x29,#0xd8
7102b5cd38  sub x2,x29,#0xb0
7102b5cd3c  blr x8
7102b5cd40  tbz w0,#0x0,0x7102b5cd58
7102b5cd44  mov w0,#0x10
7102b5cd48  mov x1,x24
7102b5cd4c  bl 0x710392e290
7102b5cd50  mov x27,x0
7102b5cd54  cbnz x0,0x7102b5cd5c
7102b5cd58  mov x27,xzr
7102b5cd5c  add x22,x27,x26, LSL #0x3
7102b5cd60  add x20,x27,x20, LSL #0x3
7102b5cd64  cmp x21,#0x1
7102b5cd68  str x28,[x22], #0x8
7102b5cd6c  b.lt 0x7102b5cd80
7102b5cd70  mov x0,x27
7102b5cd74  mov x1,x23
7102b5cd78  mov x2,x21
7102b5cd7c  bl 0x71039c00e0
7102b5cd80  ldr x28,[sp, #0x78]
7102b5cd84  stp x27,x22,[x28, #0x20]
7102b5cd88  str x20,[x28, #0x30]
7102b5cd8c  ldr x26,[sp, #0x60]
7102b5cd90  mov w22,#0x9dc5
7102b5cd94  movk w22,#0x811c, LSL #16
7102b5cd98  cbz x23,0x7102b5d204
7102b5cd9c  mov x0,x23
7102b5cda0  bl 0x710392eb40
7102b5cda4  b 0x7102b5d204
7102b5cda8  ldr x28,[sp, #0xb0]
7102b5cdac  sub x21,x8,x28
7102b5cdb0  orr x10,xzr,#-0x5555555555555556
7102b5cdb4  movk x10,#0xaaab
7102b5cdb8  asr x8,x21,#0x3
7102b5cdbc  mul x20,x8,x10
7102b5cdc0  orr x26,xzr,#-0x5555555555555556
7102b5cdc4  movk x26,#0xaaa, LSL #48
7102b5cdc8  add x8,x20,#0x1
7102b5cdcc  cmp x8,x26
7102b5cdd0  b.hi 0x7102b5ee54
7102b5cdd4  sub x9,x9,x28
7102b5cdd8  asr x9,x9,#0x3
7102b5cddc  mul x9,x9,x10
7102b5cde0  orr x10,xzr,#0x5555555555555555
7102b5cde4  movk x10,#0x555, LSL #48
7102b5cde8  cmp x9,x10
7102b5cdec  b.cs 0x7102b5ce00
7102b5cdf0  lsl x9,x9,#0x1
7102b5cdf4  cmp x9,x8
7102b5cdf8  csel x26,x8,x9,cc
7102b5cdfc  cbz x26,0x7102b5ce5c
7102b5ce00  add x8,x26,x26, LSL #0x1
7102b5ce04  lsl x8,x8,#0x3
7102b5ce08  cmp x8,#0x0
7102b5ce0c  csinc x24,x8,xzr,ne
7102b5ce10  mov w0,#0x10
7102b5ce14  mov x1,x24
7102b5ce18  bl 0x710392e290
7102b5ce1c  cbnz x0,0x7102b5ce60
7102b5ce20  adrp x8,0x7105332000
7102b5ce24  ldr x0,[x8, #0xf00]
7102b5ce28  cbz x0,0x7102b5ce5c
7102b5ce2c  stur wzr,[x29, #-0xb4]
7102b5ce30  stur x24,[x29, #-0xd8]
7102b5ce34  ldr x8,[x0]
7102b5ce38  ldr x8,[x8, #0x30]
7102b5ce3c  sub x1,x29,#0xb4
7102b5ce40  sub x2,x29,#0xd8
7102b5ce44  blr x8
7102b5ce48  tbz w0,#0x0,0x7102b5ce5c
7102b5ce4c  mov w0,#0x10
7102b5ce50  mov x1,x24
7102b5ce54  bl 0x710392e290
7102b5ce58  cbnz x0,0x7102b5ce60
7102b5ce5c  mov x0,xzr
7102b5ce60  orr w11,wzr,#0x18
7102b5ce64  madd x8,x20,x11,x0
7102b5ce68  ldur x9,[x29, #-0xb0]
7102b5ce6c  ldur w10,[x29, #-0xa8]
7102b5ce70  stp x23,x9,[x8]
7102b5ce74  orr x9,xzr,#0x5555555555555555
7102b5ce78  movk x9,#0xd555, LSL #48
7102b5ce7c  smulh x9,x21,x9
7102b5ce80  str w10,[x8, #0x10]
7102b5ce84  asr x10,x9,#0x2
7102b5ce88  add x9,x10,x9, LSR #0x3f
7102b5ce8c  madd x20,x26,x11,x0
7102b5ce90  add x22,x8,#0x18
7102b5ce94  madd x23,x9,x11,x8
7102b5ce98  cmp x21,#0x1
7102b5ce9c  b.lt 0x7102b5ceb0
7102b5cea0  mov x0,x23
7102b5cea4  mov x1,x28
7102b5cea8  mov x2,x21
7102b5ceac  bl 0x71039c00e0
7102b5ceb0  stp x23,x22,[sp, #0xb0]
7102b5ceb4  str x20,[sp, #0xc0]
7102b5ceb8  b 0x7102b5d1e8
7102b5cebc  ldr x28,[sp, #0x98]
7102b5cec0  sub x21,x8,x28
7102b5cec4  orr x10,xzr,#-0x5555555555555556
7102b5cec8  movk x10,#0xaaab
7102b5cecc  asr x8,x21,#0x3
7102b5ced0  mul x20,x8,x10
7102b5ced4  orr x26,xzr,#-0x5555555555555556
7102b5ced8  movk x26,#0xaaa, LSL #48
7102b5cedc  add x8,x20,#0x1
7102b5cee0  cmp x8,x26
7102b5cee4  b.hi 0x7102b5ee5c
7102b5cee8  sub x9,x9,x28
7102b5ceec  asr x9,x9,#0x3
7102b5cef0  mul x9,x9,x10
7102b5cef4  orr x10,xzr,#0x5555555555555555
7102b5cef8  movk x10,#0x555, LSL #48
7102b5cefc  cmp x9,x10
7102b5cf00  b.cs 0x7102b5cf14
7102b5cf04  lsl x9,x9,#0x1
7102b5cf08  cmp x9,x8
7102b5cf0c  csel x26,x8,x9,cc
7102b5cf10  cbz x26,0x7102b5cf70
7102b5cf14  add x8,x26,x26, LSL #0x1
7102b5cf18  lsl x8,x8,#0x3
7102b5cf1c  cmp x8,#0x0
7102b5cf20  csinc x24,x8,xzr,ne
7102b5cf24  mov w0,#0x10
7102b5cf28  mov x1,x24
7102b5cf2c  bl 0x710392e290
7102b5cf30  cbnz x0,0x7102b5cf74
7102b5cf34  adrp x8,0x7105332000
7102b5cf38  ldr x0,[x8, #0xf00]
7102b5cf3c  cbz x0,0x7102b5cf70
7102b5cf40  stur wzr,[x29, #-0xb4]
7102b5cf44  stur x24,[x29, #-0xd8]
7102b5cf48  ldr x8,[x0]
7102b5cf4c  ldr x8,[x8, #0x30]
7102b5cf50  sub x1,x29,#0xb4
7102b5cf54  sub x2,x29,#0xd8
7102b5cf58  blr x8
7102b5cf5c  tbz w0,#0x0,0x7102b5cf70
7102b5cf60  mov w0,#0x10
7102b5cf64  mov x1,x24
7102b5cf68  bl 0x710392e290
7102b5cf6c  cbnz x0,0x7102b5cf74
7102b5cf70  mov x0,xzr
7102b5cf74  orr w11,wzr,#0x18
7102b5cf78  madd x8,x20,x11,x0
7102b5cf7c  ldur x9,[x29, #-0xb0]
7102b5cf80  ldur w10,[x29, #-0xa8]
7102b5cf84  stp x23,x9,[x8]
7102b5cf88  orr x9,xzr,#0x5555555555555555
7102b5cf8c  movk x9,#0xd555, LSL #48
7102b5cf90  smulh x9,x21,x9
7102b5cf94  str w10,[x8, #0x10]
7102b5cf98  asr x10,x9,#0x2
7102b5cf9c  add x9,x10,x9, LSR #0x3f
7102b5cfa0  madd x20,x26,x11,x0
7102b5cfa4  add x22,x8,#0x18
7102b5cfa8  madd x23,x9,x11,x8
7102b5cfac  cmp x21,#0x1
7102b5cfb0  b.lt 0x7102b5cfc4
7102b5cfb4  mov x0,x23
7102b5cfb8  mov x1,x28
7102b5cfbc  mov x2,x21
7102b5cfc0  bl 0x71039c00e0
7102b5cfc4  stp x23,x22,[sp, #0x98]
7102b5cfc8  str x20,[sp, #0xa8]
7102b5cfcc  b 0x7102b5d1e8
7102b5cfd0  ldr x28,[sp, #0xc8]
7102b5cfd4  sub x21,x8,x28
7102b5cfd8  orr x10,xzr,#-0x5555555555555556
7102b5cfdc  movk x10,#0xaaab
7102b5cfe0  asr x8,x21,#0x3
7102b5cfe4  mul x20,x8,x10
7102b5cfe8  orr x26,xzr,#-0x5555555555555556
7102b5cfec  movk x26,#0xaaa, LSL #48
7102b5cff0  add x8,x20,#0x1
7102b5cff4  cmp x8,x26
7102b5cff8  b.hi 0x7102b5ee64
7102b5cffc  sub x9,x9,x28
7102b5d000  asr x9,x9,#0x3
7102b5d004  mul x9,x9,x10
7102b5d008  orr x10,xzr,#0x5555555555555555
7102b5d00c  movk x10,#0x555, LSL #48
7102b5d010  cmp x9,x10
7102b5d014  b.cs 0x7102b5d028
7102b5d018  lsl x9,x9,#0x1
7102b5d01c  cmp x9,x8
7102b5d020  csel x26,x8,x9,cc
7102b5d024  cbz x26,0x7102b5d084
7102b5d028  add x8,x26,x26, LSL #0x1
7102b5d02c  lsl x8,x8,#0x3
7102b5d030  cmp x8,#0x0
7102b5d034  csinc x24,x8,xzr,ne
7102b5d038  mov w0,#0x10
7102b5d03c  mov x1,x24
7102b5d040  bl 0x710392e290
7102b5d044  cbnz x0,0x7102b5d088
7102b5d048  adrp x8,0x7105332000
7102b5d04c  ldr x0,[x8, #0xf00]
7102b5d050  cbz x0,0x7102b5d084
7102b5d054  stur wzr,[x29, #-0xb4]
7102b5d058  stur x24,[x29, #-0xd8]
7102b5d05c  ldr x8,[x0]
7102b5d060  ldr x8,[x8, #0x30]
7102b5d064  sub x1,x29,#0xb4
7102b5d068  sub x2,x29,#0xd8
7102b5d06c  blr x8
7102b5d070  tbz w0,#0x0,0x7102b5d084
7102b5d074  mov w0,#0x10
7102b5d078  mov x1,x24
7102b5d07c  bl 0x710392e290
7102b5d080  cbnz x0,0x7102b5d088
7102b5d084  mov x0,xzr
7102b5d088  orr w11,wzr,#0x18
7102b5d08c  madd x8,x20,x11,x0
7102b5d090  ldur x9,[x29, #-0xb0]
7102b5d094  ldur w10,[x29, #-0xa8]
7102b5d098  stp x23,x9,[x8]
7102b5d09c  orr x9,xzr,#0x5555555555555555
7102b5d0a0  movk x9,#0xd555, LSL #48
7102b5d0a4  smulh x9,x21,x9
7102b5d0a8  str w10,[x8, #0x10]
7102b5d0ac  asr x10,x9,#0x2
7102b5d0b0  add x9,x10,x9, LSR #0x3f
7102b5d0b4  madd x20,x26,x11,x0
7102b5d0b8  add x22,x8,#0x18
7102b5d0bc  madd x23,x9,x11,x8
7102b5d0c0  cmp x21,#0x1
7102b5d0c4  b.lt 0x7102b5d0d8
7102b5d0c8  mov x0,x23
7102b5d0cc  mov x1,x28
7102b5d0d0  mov x2,x21
7102b5d0d4  bl 0x71039c00e0
7102b5d0d8  stp x23,x22,[sp, #0xc8]
7102b5d0dc  str x20,[sp, #0xd8]
7102b5d0e0  b 0x7102b5d1e8
7102b5d0e4  ldr x10,[sp, #0x48]
7102b5d0e8  ldr x28,[x10]
7102b5d0ec  sub x21,x8,x28
7102b5d0f0  asr x26,x21,#0x5
7102b5d0f4  add x8,x26,#0x1
7102b5d0f8  lsr x10,x8,#0x3b
7102b5d0fc  cbnz x10,0x7102b5ee6c
7102b5d100  sub x9,x9,x28
7102b5d104  asr x10,x9,#0x5
7102b5d108  orr x11,xzr,#0x3fffffffffffffe
7102b5d10c  cmp x10,x11
7102b5d110  b.hi 0x7102b5d134
7102b5d114  asr x9,x9,#0x4
7102b5d118  cmp x9,x8
7102b5d11c  csel x20,x8,x9,cc
7102b5d120  cbz x20,0x7102b5c1bc
7102b5d124  lsr x8,x20,#0x3b
7102b5d128  str q0,[sp]
7102b5d12c  cbz x8,0x7102b5d13c
7102b5d130  b 0x7102b5ee2c
7102b5d134  str q0,[sp]
7102b5d138  orr x20,xzr,#0x7ffffffffffffff
7102b5d13c  lsl x8,x20,#0x5
7102b5d140  cmp x8,#0x0
7102b5d144  csinc x24,x8,xzr,ne
7102b5d148  mov w0,#0x10
7102b5d14c  mov x1,x24
7102b5d150  bl 0x710392e290
7102b5d154  mov x23,x0
7102b5d158  cbnz x0,0x7102b5d1a0
7102b5d15c  adrp x8,0x7105332000
7102b5d160  ldr x0,[x8, #0xf00]
7102b5d164  cbz x0,0x7102b5d19c
7102b5d168  stur wzr,[x29, #-0xb4]
7102b5d16c  stur x24,[x29, #-0xd8]
7102b5d170  ldr x8,[x0]
7102b5d174  ldr x8,[x8, #0x30]
7102b5d178  sub x1,x29,#0xb4
7102b5d17c  sub x2,x29,#0xd8
7102b5d180  blr x8
7102b5d184  tbz w0,#0x0,0x7102b5d19c
7102b5d188  mov w0,#0x10
7102b5d18c  mov x1,x24
7102b5d190  bl 0x710392e290
7102b5d194  mov x23,x0
7102b5d198  cbnz x0,0x7102b5d1a0
7102b5d19c  mov x23,xzr
7102b5d1a0  ldr q0,[sp]
7102b5d1a4  add x8,x23,x26, LSL #0x5
7102b5d1a8  add x20,x23,x20, LSL #0x5
7102b5d1ac  add x22,x8,#0x20
7102b5d1b0  str q0,[x8]
7102b5d1b4  ldur x9,[x29, #-0xb0]
7102b5d1b8  ldur w10,[x29, #-0xa8]
7102b5d1bc  cmp x21,#0x1
7102b5d1c0  str x9,[x8, #0x10]
7102b5d1c4  stp w10,w27,[x8, #0x18]
7102b5d1c8  b.lt 0x7102b5d1dc
7102b5d1cc  mov x0,x23
7102b5d1d0  mov x1,x28
7102b5d1d4  mov x2,x21
7102b5d1d8  bl 0x71039c00e0
7102b5d1dc  ldr x8,[sp, #0x78]
7102b5d1e0  stp x23,x22,[x8, #0x50]
7102b5d1e4  str x20,[x8, #0x60]
7102b5d1e8  ldr x26,[sp, #0x60]
7102b5d1ec  mov w22,#0x9dc5
7102b5d1f0  movk w22,#0x811c, LSL #16
7102b5d1f4  cbz x28,0x7102b5d200
7102b5d1f8  mov x0,x28
7102b5d1fc  bl 0x710392eb40
7102b5d200  ldr x28,[sp, #0x78]
7102b5d204  ldrb w8,[sp, #0xe0]
7102b5d208  ldr x20,[sp, #0x80]
7102b5d20c  ldr x27,[sp, #0x50]
7102b5d210  cbnz w8,0x7102b5c528
7102b5d214  ldr w8,[x26, #0xf8]
7102b5d218  add x25,x25,#0x1
7102b5d21c  cmp x25,x8
7102b5d220  mov w24,#0x140
7102b5d224  b.cc 0x7102b5c510
7102b5d228  ldp x19,x23,[sp, #0xb0]
7102b5d22c  cmp x19,x23
7102b5d230  b.eq 0x7102b5d4ec
7102b5d234  adrp x27,0x7105117000
7102b5d238  add x27,x27,#0xa68
7102b5d23c  mov w20,#0x4
7102b5d240  adrp x21,0x7105117000
7102b5d244  add x21,x21,#0x940
7102b5d248  str x23,[sp, #0x50]
7102b5d24c  b 0x7102b5d284
7102b5d250  ldr x8,[x8]
7102b5d254  cbz x8,0x7102b5d2cc
7102b5d258  ldr w9,[x8, #0x108]
7102b5d25c  cmp w9,#0x1
7102b5d260  b.ne 0x7102b5d2cc
7102b5d264  movi v0.2D,#0x0
7102b5d268  add x9,x8,#0x10c
7102b5d26c  add x8,x8,#0x110
7102b5d270  ld1 {v0.S}[0],[x9]
7102b5d274  ld1 {v0.S}[1],[x8]
7102b5d278  b 0x7102b5d2d8
7102b5d27c  mov x26,xzr
7102b5d280  b 0x7102b5d48c
7102b5d284  ldp x8,x9,[sp, #0x98]
7102b5d288  cmp x8,x9
7102b5d28c  b.eq 0x7102b5d2cc
7102b5d290  ldr w10,[x19, #0x8]
7102b5d294  ldr w11,[x8, #0x8]
7102b5d298  cmp w10,w11
7102b5d29c  b.ne 0x7102b5d2c0
7102b5d2a0  ldr w11,[x19, #0xc]
7102b5d2a4  ldr w12,[x8, #0xc]
7102b5d2a8  cmp w11,w12
7102b5d2ac  b.ne 0x7102b5d2c0
7102b5d2b0  ldr w11,[x19, #0x10]
7102b5d2b4  ldr w12,[x8, #0x10]
7102b5d2b8  cmp w11,w12
7102b5d2bc  b.eq 0x7102b5d250
7102b5d2c0  add x8,x8,#0x18
7102b5d2c4  cmp x9,x8
7102b5d2c8  b.ne 0x7102b5d294
7102b5d2cc  adrp x8,0x71052a8000
7102b5d2d0  ldr x8,[x8, #0xa80]
7102b5d2d4  ldr q0,[x8]
7102b5d2d8  mov w0,#0x10
7102b5d2dc  orr w1,wzr,#0x70
7102b5d2e0  str q0,[sp, #0x80]
7102b5d2e4  bl 0x710392e290
7102b5d2e8  mov x24,x0
7102b5d2ec  cbnz x0,0x7102b5d338
7102b5d2f0  adrp x8,0x7105332000
7102b5d2f4  ldr x0,[x8, #0xf00]
7102b5d2f8  cbz x0,0x7102b5d334
7102b5d2fc  orr w8,wzr,#0x70
7102b5d300  stur wzr,[x29, #-0xb0]
7102b5d304  sub x1,x29,#0xb0
7102b5d308  str x8,[sp, #0xe0]
7102b5d30c  ldr x8,[x0]
7102b5d310  ldr x8,[x8, #0x30]
7102b5d314  add x2,sp,#0xe0
7102b5d318  blr x8
7102b5d31c  tbz w0,#0x0,0x7102b5d334
7102b5d320  mov w0,#0x10
7102b5d324  orr w1,wzr,#0x70
7102b5d328  bl 0x710392e290
7102b5d32c  mov x24,x0
7102b5d330  cbnz x0,0x7102b5d338
7102b5d334  mov x24,xzr
7102b5d338  ldr q0,[sp, #0x80]
7102b5d33c  ldr x8,[x28]
7102b5d340  movi v1.2D,#0x0
7102b5d344  ldr x9,[x19]
7102b5d348  str x27,[x24]
7102b5d34c  str w20,[x24, #0x8]
7102b5d350  ldr x10,[x19, #0x8]
7102b5d354  ldr w11,[x19, #0x10]
7102b5d358  str w11,[x24, #0x14]
7102b5d35c  str q0,[x24, #0x50]
7102b5d360  mov v0.16B,v1.16B
7102b5d364  stur x10,[x24, #0xc]
7102b5d368  strb wzr,[x24, #0x18]
7102b5d36c  str x21,[x24]
7102b5d370  str x8,[x24, #0x20]
7102b5d374  add x8,x9,#0x10c
7102b5d378  str xzr,[x24, #0x60]
7102b5d37c  stp xzr,xzr,[x24, #0x40]
7102b5d380  stp xzr,xzr,[x24, #0x30]
7102b5d384  ld1 {v0.S}[0],[x8]
7102b5d388  add x8,x9,#0x114
7102b5d38c  ld1 {v0.S}[1],[x8]
7102b5d390  add x8,x9,#0x110
7102b5d394  str q0,[x24, #0x30]
7102b5d398  mov v0.16B,v1.16B
7102b5d39c  ld1 {v0.S}[0],[x8]
7102b5d3a0  add x8,x9,#0x118
7102b5d3a4  ld1 {v0.S}[1],[x8]
7102b5d3a8  str q0,[x24, #0x40]
7102b5d3ac  ldp x9,x8,[x28, #0x28]
7102b5d3b0  cmp x9,x8
7102b5d3b4  b.cs 0x7102b5d3cc
7102b5d3b8  str x24,[x9]
7102b5d3bc  ldr x8,[x28, #0x28]
7102b5d3c0  add x8,x8,#0x8
7102b5d3c4  str x8,[x28, #0x28]
7102b5d3c8  b 0x7102b5d4e0
7102b5d3cc  ldr x10,[sp, #0x58]
7102b5d3d0  ldr x25,[x10]
7102b5d3d4  mov x23,x21
7102b5d3d8  sub x21,x9,x25
7102b5d3dc  asr x28,x21,#0x3
7102b5d3e0  add x9,x28,#0x1
7102b5d3e4  lsr x10,x9,#0x3d
7102b5d3e8  cbnz x10,0x7102b5ee24
7102b5d3ec  sub x8,x8,x25
7102b5d3f0  asr x10,x8,#0x3
7102b5d3f4  orr x11,xzr,#0xffffffffffffffe
7102b5d3f8  cmp x10,x11
7102b5d3fc  b.hi 0x7102b5d41c
7102b5d400  asr x8,x8,#0x2
7102b5d404  cmp x8,x9
7102b5d408  csel x20,x9,x8,cc
7102b5d40c  cbz x20,0x7102b5d27c
7102b5d410  lsr x8,x20,#0x3d
7102b5d414  cbz x8,0x7102b5d420
7102b5d418  b 0x7102b5ee2c
7102b5d41c  orr x20,xzr,#0x1fffffffffffffff
7102b5d420  lsl x8,x20,#0x3
7102b5d424  cmp x8,#0x0
7102b5d428  csinc x27,x8,xzr,ne
7102b5d42c  mov w0,#0x10
7102b5d430  mov x1,x27
7102b5d434  bl 0x710392e290
7102b5d438  mov x26,x0
7102b5d43c  cbnz x0,0x7102b5d484
7102b5d440  adrp x8,0x7105332000
7102b5d444  ldr x0,[x8, #0xf00]
7102b5d448  cbz x0,0x7102b5d480
7102b5d44c  stur wzr,[x29, #-0xb0]
7102b5d450  str x27,[sp, #0xe0]
7102b5d454  ldr x8,[x0]
7102b5d458  ldr x8,[x8, #0x30]
7102b5d45c  sub x1,x29,#0xb0
7102b5d460  add x2,sp,#0xe0
7102b5d464  blr x8
7102b5d468  tbz w0,#0x0,0x7102b5d480
7102b5d46c  mov w0,#0x10
7102b5d470  mov x1,x27
7102b5d474  bl 0x710392e290
7102b5d478  mov x26,x0
7102b5d47c  cbnz x0,0x7102b5d484
7102b5d480  mov x26,xzr
7102b5d484  adrp x27,0x7105117000
7102b5d488  add x27,x27,#0xa68
7102b5d48c  add x22,x26,x28, LSL #0x3
7102b5d490  add x20,x26,x20, LSL #0x3
7102b5d494  cmp x21,#0x1
7102b5d498  str x24,[x22], #0x8
7102b5d49c  b.lt 0x7102b5d4b0
7102b5d4a0  mov x0,x26
7102b5d4a4  mov x1,x25
7102b5d4a8  mov x2,x21
7102b5d4ac  bl 0x71039c00e0
7102b5d4b0  ldr x28,[sp, #0x78]
7102b5d4b4  stp x26,x22,[x28, #0x20]
7102b5d4b8  ldr x26,[sp, #0x60]
7102b5d4bc  mov x21,x23
7102b5d4c0  ldr x23,[sp, #0x50]
7102b5d4c4  str x20,[x28, #0x30]
7102b5d4c8  mov w22,#0x9dc5
7102b5d4cc  movk w22,#0x811c, LSL #16
7102b5d4d0  mov w20,#0x4
7102b5d4d4  cbz x25,0x7102b5d4e0
7102b5d4d8  mov x0,x25
7102b5d4dc  bl 0x710392eb40
7102b5d4e0  add x19,x19,#0x18
7102b5d4e4  cmp x19,x23
7102b5d4e8  b.ne 0x7102b5d284
7102b5d4ec  ldp x19,x23,[x29, #-0xf0]
7102b5d4f0  cmp x19,x23
7102b5d4f4  b.eq 0x7102b5d728
7102b5d4f8  adrp x27,0x7105117000
7102b5d4fc  add x27,x27,#0xa68
7102b5d500  b 0x7102b5d6d0
7102b5d504  mov w0,#0x10
7102b5d508  mov w1,#0x40
7102b5d50c  bl 0x710392e290
7102b5d510  mov x24,x0
7102b5d514  cbnz x0,0x7102b5d560
7102b5d518  adrp x8,0x7105332000
7102b5d51c  ldr x0,[x8, #0xf00]
7102b5d520  cbz x0,0x7102b5d55c
7102b5d524  mov w8,#0x40
7102b5d528  stur wzr,[x29, #-0xb0]
7102b5d52c  sub x1,x29,#0xb0
7102b5d530  str x8,[sp, #0xe0]
7102b5d534  ldr x8,[x0]
7102b5d538  ldr x8,[x8, #0x30]
7102b5d53c  add x2,sp,#0xe0
7102b5d540  blr x8
7102b5d544  tbz w0,#0x0,0x7102b5d55c
7102b5d548  mov w0,#0x10
7102b5d54c  mov w1,#0x40
7102b5d550  bl 0x710392e290
7102b5d554  mov x24,x0
7102b5d558  cbnz x0,0x7102b5d560
7102b5d55c  mov x24,xzr
7102b5d560  ldr x8,[x28]
7102b5d564  ldr x9,[x19]
7102b5d568  ldr x10,[x20]
7102b5d56c  str x27,[x24]
7102b5d570  str wzr,[x24, #0x8]
7102b5d574  ldr x11,[x21]
7102b5d578  ldr w12,[x21, #0x8]
7102b5d57c  stur x11,[x24, #0xc]
7102b5d580  adrp x11,0x7105117000
7102b5d584  add x11,x11,#0xb20
7102b5d588  str w12,[x24, #0x14]
7102b5d58c  strb wzr,[x24, #0x18]
7102b5d590  stp x8,x9,[x24, #0x20]
7102b5d594  str x11,[x24]
7102b5d598  stp x10,xzr,[x24, #0x30]
7102b5d59c  ldp x9,x8,[x28, #0x28]
7102b5d5a0  cmp x9,x8
7102b5d5a4  b.cs 0x7102b5d5bc
7102b5d5a8  str x24,[x9]
7102b5d5ac  ldr x8,[x28, #0x28]
7102b5d5b0  add x8,x8,#0x8
7102b5d5b4  str x8,[x28, #0x28]
7102b5d5b8  b 0x7102b5d71c
7102b5d5bc  ldr x10,[sp, #0x58]
7102b5d5c0  ldr x25,[x10]
7102b5d5c4  sub x21,x9,x25
7102b5d5c8  asr x28,x21,#0x3
7102b5d5cc  add x9,x28,#0x1
7102b5d5d0  lsr x10,x9,#0x3d
7102b5d5d4  cbnz x10,0x7102b5ee24
7102b5d5d8  sub x8,x8,x25
7102b5d5dc  asr x10,x8,#0x3
7102b5d5e0  orr x11,xzr,#0xffffffffffffffe
7102b5d5e4  cmp x10,x11
7102b5d5e8  b.hi 0x7102b5d60c
7102b5d5ec  asr x8,x8,#0x2
7102b5d5f0  cmp x8,x9
7102b5d5f4  csel x20,x9,x8,cc
7102b5d5f8  cbz x20,0x7102b5d6c8
7102b5d5fc  mov x22,x27
7102b5d600  lsr x8,x20,#0x3d
7102b5d604  cbz x8,0x7102b5d614
7102b5d608  b 0x7102b5ee2c
7102b5d60c  mov x22,x27
7102b5d610  orr x20,xzr,#0x1fffffffffffffff
7102b5d614  lsl x8,x20,#0x3
7102b5d618  cmp x8,#0x0
7102b5d61c  csinc x27,x8,xzr,ne
7102b5d620  mov w0,#0x10
7102b5d624  mov x1,x27
7102b5d628  bl 0x710392e290
7102b5d62c  mov x26,x0
7102b5d630  cbnz x0,0x7102b5d678
7102b5d634  adrp x8,0x7105332000
7102b5d638  ldr x0,[x8, #0xf00]
7102b5d63c  cbz x0,0x7102b5d674
7102b5d640  stur wzr,[x29, #-0xb0]
7102b5d644  str x27,[sp, #0xe0]
7102b5d648  ldr x8,[x0]
7102b5d64c  ldr x8,[x8, #0x30]
7102b5d650  sub x1,x29,#0xb0
7102b5d654  add x2,sp,#0xe0
7102b5d658  blr x8
7102b5d65c  tbz w0,#0x0,0x7102b5d674
7102b5d660  mov w0,#0x10
7102b5d664  mov x1,x27
7102b5d668  bl 0x710392e290
7102b5d66c  mov x26,x0
7102b5d670  cbnz x0,0x7102b5d678
7102b5d674  mov x26,xzr
7102b5d678  mov x27,x22
7102b5d67c  add x22,x26,x28, LSL #0x3
7102b5d680  add x20,x26,x20, LSL #0x3
7102b5d684  cmp x21,#0x1
7102b5d688  str x24,[x22], #0x8
7102b5d68c  b.lt 0x7102b5d6a0
7102b5d690  mov x0,x26
7102b5d694  mov x1,x25
7102b5d698  mov x2,x21
7102b5d69c  bl 0x71039c00e0
7102b5d6a0  ldr x28,[sp, #0x78]
7102b5d6a4  stp x26,x22,[x28, #0x20]
7102b5d6a8  ldr x26,[sp, #0x60]
7102b5d6ac  mov w22,#0x9dc5
7102b5d6b0  movk w22,#0x811c, LSL #16
7102b5d6b4  str x20,[x28, #0x30]
7102b5d6b8  cbz x25,0x7102b5d71c
7102b5d6bc  mov x0,x25
7102b5d6c0  bl 0x710392eb40
7102b5d6c4  b 0x7102b5d71c
7102b5d6c8  mov x26,xzr
7102b5d6cc  b 0x7102b5d67c
7102b5d6d0  ldp x20,x8,[sp, #0xc8]
7102b5d6d4  cmp x20,x8
7102b5d6d8  b.eq 0x7102b5d71c
7102b5d6dc  mov x21,x19
7102b5d6e0  ldr w9,[x21, #0x8]!
7102b5d6e4  ldr w10,[x20, #0x8]
7102b5d6e8  cmp w9,w10
7102b5d6ec  b.ne 0x7102b5d710
7102b5d6f0  ldr w10,[x19, #0xc]
7102b5d6f4  ldr w11,[x20, #0xc]
7102b5d6f8  cmp w10,w11
7102b5d6fc  b.ne 0x7102b5d710
7102b5d700  ldr w10,[x19, #0x10]
7102b5d704  ldr w11,[x20, #0x10]
7102b5d708  cmp w10,w11
7102b5d70c  b.eq 0x7102b5d504
7102b5d710  add x20,x20,#0x18
7102b5d714  cmp x8,x20
7102b5d718  b.ne 0x7102b5d6e4
7102b5d71c  add x19,x19,#0x18
7102b5d720  cmp x19,x23
7102b5d724  b.ne 0x7102b5d6d0
7102b5d728  ldr w8,[x26, #0x68]
7102b5d72c  cbz w8,0x7102b5dbbc
7102b5d730  add x8,sp,#0xe0
7102b5d734  add x25,x8,#0x14
7102b5d738  orr x27,x8,#0x4
7102b5d73c  sub x8,x29,#0xb0
7102b5d740  orr x9,x8,#0x4
7102b5d744  str x9,[sp, #0x50]
7102b5d748  mov w9,#0x5
7102b5d74c  mov x19,xzr
7102b5d750  mov w23,#0x130
7102b5d754  mov w24,#0x89
7102b5d758  orr x8,x8,x9
7102b5d75c  str x8,[sp, #0x80]
7102b5d760  b 0x7102b5d818
7102b5d764  orr x20,xzr,#0x1fffffffffffffff
7102b5d768  lsl x8,x20,#0x3
7102b5d76c  cmp x8,#0x0
7102b5d770  csinc x1,x8,xzr,ne
7102b5d774  mov w0,#0x10
7102b5d778  str x1,[sp, #0x38]
7102b5d77c  bl 0x710392e290
7102b5d780  mov x26,x0
7102b5d784  cbnz x0,0x7102b5d7d0
7102b5d788  adrp x8,0x7105332000
7102b5d78c  ldr x0,[x8, #0xf00]
7102b5d790  cbz x0,0x7102b5d7cc
7102b5d794  ldr x8,[sp, #0x38]
7102b5d798  stur wzr,[x29, #-0xb4]
7102b5d79c  sub x1,x29,#0xb4
7102b5d7a0  sub x2,x29,#0xd8
7102b5d7a4  stur x8,[x29, #-0xd8]
7102b5d7a8  ldr x8,[x0]
7102b5d7ac  ldr x8,[x8, #0x30]
7102b5d7b0  blr x8
7102b5d7b4  tbz w0,#0x0,0x7102b5d7cc
7102b5d7b8  ldr x1,[sp, #0x38]
7102b5d7bc  mov w0,#0x10
7102b5d7c0  bl 0x710392e290
7102b5d7c4  mov x26,x0
7102b5d7c8  cbnz x0,0x7102b5d7d0
7102b5d7cc  mov x26,xzr
7102b5d7d0  add x22,x26,x22, LSL #0x3
7102b5d7d4  add x20,x26,x20, LSL #0x3
7102b5d7d8  cmp x27,#0x1
7102b5d7dc  str x28,[x22], #0x8
7102b5d7e0  b.lt 0x7102b5d7f4
7102b5d7e4  mov x0,x26
7102b5d7e8  mov x1,x21
7102b5d7ec  mov x2,x27
7102b5d7f0  bl 0x71039c00e0
7102b5d7f4  ldr x28,[sp, #0x78]
7102b5d7f8  stp x26,x22,[x28, #0x20]
7102b5d7fc  ldr x26,[sp, #0x60]
7102b5d800  mov w22,#0x9dc5
7102b5d804  movk w22,#0x811c, LSL #16
7102b5d808  str x20,[x28, #0x30]
7102b5d80c  ldr x27,[sp, #0x40]
7102b5d810  cbnz x21,0x7102b5db98
7102b5d814  b 0x7102b5dba0
7102b5d818  ldr x20,[x26, #0x70]
7102b5d81c  madd x21,x19,x23,x20
7102b5d820  add x0,x21,#0x48
7102b5d824  bl 0x71039c0070
7102b5d828  cmp w0,#0xc
7102b5d82c  b.ls 0x7102b5dba8
7102b5d830  madd x8,x19,x23,x20
7102b5d834  add x1,x8,#0x55
7102b5d838  add x0,sp,#0xe0
7102b5d83c  bl 0x7102b6db30
7102b5d840  ldrb w8,[sp, #0xe0]
7102b5d844  cbz w8,0x7102b5dbac
7102b5d848  sub x0,x29,#0xb0
7102b5d84c  mov x1,x25
7102b5d850  bl 0x7102b5ee80
7102b5d854  ldurb w20,[x29, #-0xac]
7102b5d858  cbz w20,0x7102b5dba0
7102b5d85c  ldr x8,[sp, #0x80]
7102b5d860  mov w10,w20
7102b5d864  mov w9,w22
7102b5d868  mul w9,w9,w24
7102b5d86c  and w10,w10,#0xff
7102b5d870  eor w9,w9,w10
7102b5d874  ldrb w10,[x8], #0x1
7102b5d878  cbnz w10,0x7102b5d868
7102b5d87c  mov w8,#0xd075
7102b5d880  movk w8,#0x8a7d, LSL #16
7102b5d884  cmp w9,w8
7102b5d888  b.ne 0x7102b5d8a0
7102b5d88c  ldr x0,[sp, #0x50]
7102b5d890  adrp x1,0x71042c2000
7102b5d894  add x1,x1,#0xf15
7102b5d898  bl 0x71039c0060
7102b5d89c  cbz w0,0x7102b5d9d8
7102b5d8a0  ldr x8,[sp, #0x80]
7102b5d8a4  mov w9,w22
7102b5d8a8  and w10,w20,#0xff
7102b5d8ac  mul w9,w9,w24
7102b5d8b0  eor w9,w9,w10
7102b5d8b4  ldrb w20,[x8], #0x1
7102b5d8b8  cbnz w20,0x7102b5d8a8
7102b5d8bc  mov w8,#0x7a9c
7102b5d8c0  movk w8,#0x6f42, LSL #16
7102b5d8c4  cmp w9,w8
7102b5d8c8  b.ne 0x7102b5dba0
7102b5d8cc  ldr x0,[sp, #0x50]
7102b5d8d0  adrp x1,0x7104338000
7102b5d8d4  add x1,x1,#0x3ff
7102b5d8d8  bl 0x71039c0060
7102b5d8dc  cbnz w0,0x7102b5dba0
7102b5d8e0  ldrb w8,[x28, #0x10]
7102b5d8e4  cbz w8,0x7102b5dba0
7102b5d8e8  mov w0,#0x10
7102b5d8ec  orr w1,wzr,#0x38
7102b5d8f0  bl 0x710392e290
7102b5d8f4  mov x28,x0
7102b5d8f8  cbnz x0,0x7102b5d944
7102b5d8fc  adrp x8,0x7105332000
7102b5d900  ldr x0,[x8, #0xf00]
7102b5d904  cbz x0,0x7102b5d940
7102b5d908  orr w8,wzr,#0x38
7102b5d90c  stur wzr,[x29, #-0xb4]
7102b5d910  sub x1,x29,#0xb4
7102b5d914  stur x8,[x29, #-0xd8]
7102b5d918  ldr x8,[x0]
7102b5d91c  ldr x8,[x8, #0x30]
7102b5d920  sub x2,x29,#0xd8
7102b5d924  blr x8
7102b5d928  tbz w0,#0x0,0x7102b5d940
7102b5d92c  mov w0,#0x10
7102b5d930  orr w1,wzr,#0x38
7102b5d934  bl 0x710392e290
7102b5d938  mov x28,x0
7102b5d93c  cbnz x0,0x7102b5d944
7102b5d940  mov x28,xzr
7102b5d944  ldr x11,[sp, #0x78]
7102b5d948  mov w9,#0x5
7102b5d94c  ldr x8,[x11]
7102b5d950  str w9,[x28, #0x8]
7102b5d954  ldr x9,[x27]
7102b5d958  ldr w10,[x27, #0x8]
7102b5d95c  stur x9,[x28, #0xc]
7102b5d960  adrp x9,0x7105117000
7102b5d964  add x9,x9,#0xaa8
7102b5d968  str w10,[x28, #0x14]
7102b5d96c  strb wzr,[x28, #0x18]
7102b5d970  str x9,[x28]
7102b5d974  stp x8,x21,[x28, #0x20]
7102b5d978  str xzr,[x28, #0x30]
7102b5d97c  ldp x9,x8,[x11, #0x28]
7102b5d980  cmp x9,x8
7102b5d984  b.cc 0x7102b5da78
7102b5d988  ldr x10,[sp, #0x58]
7102b5d98c  ldr x21,[x10]
7102b5d990  str x27,[sp, #0x40]
7102b5d994  sub x27,x9,x21
7102b5d998  asr x22,x27,#0x3
7102b5d99c  add x9,x22,#0x1
7102b5d9a0  lsr x10,x9,#0x3d
7102b5d9a4  cbnz x10,0x7102b5ee24
7102b5d9a8  sub x8,x8,x21
7102b5d9ac  asr x10,x8,#0x3
7102b5d9b0  orr x11,xzr,#0xffffffffffffffe
7102b5d9b4  cmp x10,x11
7102b5d9b8  b.hi 0x7102b5d764
7102b5d9bc  asr x8,x8,#0x2
7102b5d9c0  cmp x8,x9
7102b5d9c4  csel x20,x9,x8,cc
7102b5d9c8  cbz x20,0x7102b5d7cc
7102b5d9cc  lsr x8,x20,#0x3d
7102b5d9d0  cbz x8,0x7102b5d768
7102b5d9d4  b 0x7102b5ee2c
7102b5d9d8  mov w0,#0x10
7102b5d9dc  orr w1,wzr,#0x38
7102b5d9e0  bl 0x710392e290
7102b5d9e4  mov x28,x0
7102b5d9e8  cbnz x0,0x7102b5da34
7102b5d9ec  adrp x8,0x7105332000
7102b5d9f0  ldr x0,[x8, #0xf00]
7102b5d9f4  cbz x0,0x7102b5da30
7102b5d9f8  orr w8,wzr,#0x38
7102b5d9fc  stur wzr,[x29, #-0xb4]
7102b5da00  sub x1,x29,#0xb4
7102b5da04  stur x8,[x29, #-0xd8]
7102b5da08  ldr x8,[x0]
7102b5da0c  ldr x8,[x8, #0x30]
7102b5da10  sub x2,x29,#0xd8
7102b5da14  blr x8
7102b5da18  tbz w0,#0x0,0x7102b5da30
7102b5da1c  mov w0,#0x10
7102b5da20  orr w1,wzr,#0x38
7102b5da24  bl 0x710392e290
7102b5da28  mov x28,x0
7102b5da2c  cbnz x0,0x7102b5da34
7102b5da30  mov x28,xzr
7102b5da34  ldr x11,[sp, #0x78]
7102b5da38  mov w9,#0x5
7102b5da3c  ldr x8,[x11]
7102b5da40  str w9,[x28, #0x8]
7102b5da44  ldr x9,[x27]
7102b5da48  ldr w10,[x27, #0x8]
7102b5da4c  stur x9,[x28, #0xc]
7102b5da50  adrp x9,0x7105117000
7102b5da54  add x9,x9,#0xaa8
7102b5da58  str w10,[x28, #0x14]
7102b5da5c  strb wzr,[x28, #0x18]
7102b5da60  str x9,[x28]
7102b5da64  stp x8,x21,[x28, #0x20]
7102b5da68  str xzr,[x28, #0x30]
7102b5da6c  ldp x9,x8,[x11, #0x28]
7102b5da70  cmp x9,x8
7102b5da74  b.cs 0x7102b5da98
7102b5da78  str x28,[x9]
7102b5da7c  ldr x8,[x11, #0x28]
7102b5da80  add x8,x8,#0x8
7102b5da84  str x8,[x11, #0x28]
7102b5da88  mov x28,x11
7102b5da8c  ldrb w8,[sp, #0xe0]
7102b5da90  cbnz w8,0x7102b5dba8
7102b5da94  b 0x7102b5dbac
7102b5da98  ldr x10,[sp, #0x58]
7102b5da9c  stp x25,x27,[sp, #0x38]
7102b5daa0  ldr x21,[x10]
7102b5daa4  sub x27,x9,x21
7102b5daa8  asr x25,x27,#0x3
7102b5daac  add x9,x25,#0x1
7102b5dab0  lsr x10,x9,#0x3d
7102b5dab4  cbnz x10,0x7102b5ee24
7102b5dab8  sub x8,x8,x21
7102b5dabc  asr x10,x8,#0x3
7102b5dac0  orr x11,xzr,#0xffffffffffffffe
7102b5dac4  cmp x10,x11
7102b5dac8  b.hi 0x7102b5dae8
7102b5dacc  asr x8,x8,#0x2
7102b5dad0  cmp x8,x9
7102b5dad4  csel x20,x9,x8,cc
7102b5dad8  cbz x20,0x7102b5db4c
7102b5dadc  lsr x8,x20,#0x3d
7102b5dae0  cbz x8,0x7102b5daec
7102b5dae4  b 0x7102b5ee2c
7102b5dae8  orr x20,xzr,#0x1fffffffffffffff
7102b5daec  lsl x8,x20,#0x3
7102b5daf0  cmp x8,#0x0
7102b5daf4  csinc x22,x8,xzr,ne
7102b5daf8  mov w0,#0x10
7102b5dafc  mov x1,x22
7102b5db00  bl 0x710392e290
7102b5db04  mov x26,x0
7102b5db08  cbnz x0,0x7102b5db50
7102b5db0c  adrp x8,0x7105332000
7102b5db10  ldr x0,[x8, #0xf00]
7102b5db14  cbz x0,0x7102b5db4c
7102b5db18  stur wzr,[x29, #-0xb4]
7102b5db1c  stur x22,[x29, #-0xd8]
7102b5db20  ldr x8,[x0]
7102b5db24  ldr x8,[x8, #0x30]
7102b5db28  sub x1,x29,#0xb4
7102b5db2c  sub x2,x29,#0xd8
7102b5db30  blr x8
7102b5db34  tbz w0,#0x0,0x7102b5db4c
7102b5db38  mov w0,#0x10
7102b5db3c  mov x1,x22
7102b5db40  bl 0x710392e290
7102b5db44  mov x26,x0
7102b5db48  cbnz x0,0x7102b5db50
7102b5db4c  mov x26,xzr
7102b5db50  add x22,x26,x25, LSL #0x3
7102b5db54  add x20,x26,x20, LSL #0x3
7102b5db58  cmp x27,#0x1
7102b5db5c  str x28,[x22], #0x8
7102b5db60  b.lt 0x7102b5db74
7102b5db64  mov x0,x26
7102b5db68  mov x1,x21
7102b5db6c  mov x2,x27
7102b5db70  bl 0x71039c00e0
7102b5db74  ldr x28,[sp, #0x78]
7102b5db78  stp x26,x22,[x28, #0x20]
7102b5db7c  ldr x26,[sp, #0x60]
7102b5db80  ldr x25,[sp, #0x38]
7102b5db84  str x20,[x28, #0x30]
7102b5db88  mov w22,#0x9dc5
7102b5db8c  movk w22,#0x811c, LSL #16
7102b5db90  ldr x27,[sp, #0x40]
7102b5db94  cbz x21,0x7102b5dba0
7102b5db98  mov x0,x21
7102b5db9c  bl 0x710392eb40
7102b5dba0  ldrb w8,[sp, #0xe0]
7102b5dba4  cbz w8,0x7102b5dbac
7102b5dba8  strb wzr,[sp, #0xe0]
7102b5dbac  ldr w8,[x26, #0x68]
7102b5dbb0  add x19,x19,#0x1
7102b5dbb4  cmp x19,x8
7102b5dbb8  b.cc 0x7102b5d818
7102b5dbbc  ldr x9,[sp, #0x70]
7102b5dbc0  ldr w9,[x9, #0x24c]
7102b5dbc4  cmp w9,#0x1
7102b5dbc8  b.eq 0x7102b5dc1c
7102b5dbcc  cbnz w9,0x7102b5dd18
7102b5dbd0  cbz w8,0x7102b5dd18
7102b5dbd4  ldr x23,[x26, #0x70]
7102b5dbd8  mov x19,xzr
7102b5dbdc  mov w20,w8
7102b5dbe0  adrp x21,0x71043ab000
7102b5dbe4  add x21,x21,#0xbb8
7102b5dbe8  add x0,x23,#0x48
7102b5dbec  bl 0x71039c0070
7102b5dbf0  cmp x0,#0xd
7102b5dbf4  b.cc 0x7102b5dc08
7102b5dbf8  add x0,x23,#0x55
7102b5dbfc  mov x1,x21
7102b5dc00  bl 0x71039c0060
7102b5dc04  cbz w0,0x7102b5dc68
7102b5dc08  add x19,x19,#0x1
7102b5dc0c  add x23,x23,#0x130
7102b5dc10  cmp x19,x20
7102b5dc14  b.cc 0x7102b5dbe8
7102b5dc18  b 0x7102b5dd18
7102b5dc1c  cbz w8,0x7102b5dd18
7102b5dc20  ldr x23,[x26, #0x70]
7102b5dc24  mov x19,xzr
7102b5dc28  mov w20,w8
7102b5dc2c  adrp x21,0x7104420000
7102b5dc30  add x21,x21,#0x5ab
7102b5dc34  add x0,x23,#0x48
7102b5dc38  bl 0x71039c0070
7102b5dc3c  cmp x0,#0xd
7102b5dc40  b.cc 0x7102b5dc54
7102b5dc44  add x0,x23,#0x55
7102b5dc48  mov x1,x21
7102b5dc4c  bl 0x71039c0060
7102b5dc50  cbz w0,0x7102b5dc68
7102b5dc54  add x19,x19,#0x1
7102b5dc58  add x23,x23,#0x130
7102b5dc5c  cmp x19,x20
7102b5dc60  b.cc 0x7102b5dc34
7102b5dc64  b 0x7102b5dd18
7102b5dc68  cbz x23,0x7102b5dd18
7102b5dc6c  mov w0,#0x10
7102b5dc70  mov w1,#0x10
7102b5dc74  bl 0x710392e290
7102b5dc78  mov x21,x0
7102b5dc7c  cbnz x0,0x7102b5dcc8
7102b5dc80  adrp x8,0x7105332000
7102b5dc84  ldr x0,[x8, #0xf00]
7102b5dc88  cbz x0,0x7102b5dcc4
7102b5dc8c  mov w8,#0x10
7102b5dc90  stur wzr,[x29, #-0xb0]
7102b5dc94  sub x1,x29,#0xb0
7102b5dc98  str x8,[sp, #0xe0]
7102b5dc9c  ldr x8,[x0]
7102b5dca0  ldr x8,[x8, #0x30]
7102b5dca4  add x2,sp,#0xe0
7102b5dca8  blr x8
7102b5dcac  tbz w0,#0x0,0x7102b5dcc4
7102b5dcb0  mov w0,#0x10
7102b5dcb4  mov w1,#0x10
7102b5dcb8  bl 0x710392e290
7102b5dcbc  mov x21,x0
7102b5dcc0  cbnz x0,0x7102b5dcc8
7102b5dcc4  mov x21,xzr
7102b5dcc8  ldr x8,[x28]
7102b5dccc  stp x8,xzr,[x21]
7102b5dcd0  ldr x8,[x8]
7102b5dcd4  ldr x8,[x8, #0x300]
7102b5dcd8  ldr x0,[x8, #0x28]
7102b5dcdc  cbz x0,0x7102b5dce8
7102b5dce0  mov x1,x23
7102b5dce4  bl 0x71025f5870
7102b5dce8  str x0,[x21, #0x8]
7102b5dcec  ldr x23,[x28, #0x70]
7102b5dcf0  str x21,[x28, #0x70]
7102b5dcf4  cbz x23,0x7102b5dd18
7102b5dcf8  ldp x8,x1,[x23]
7102b5dcfc  ldr x8,[x8]
7102b5dd00  ldr x8,[x8, #0x300]
7102b5dd04  ldr x0,[x8, #0x28]
7102b5dd08  bl 0x710262c8a0
7102b5dd0c  mov x0,x23
7102b5dd10  str xzr,[x23, #0x8]
7102b5dd14  bl 0x710392eb40
7102b5dd18  ldrb w8,[x28, #0x10]
7102b5dd1c  cbz w8,0x7102b5de7c
7102b5dd20  ldr x8,[sp, #0x70]
7102b5dd24  ldr w8,[x8, #0x24c]
7102b5dd28  cmp w8,#0x1
7102b5dd2c  b.eq 0x7102b5dd80
7102b5dd30  cbnz w8,0x7102b5de7c
7102b5dd34  ldr w19,[x26, #0x68]
7102b5dd38  cbz w19,0x7102b5de7c
7102b5dd3c  ldr x22,[x26, #0x70]
7102b5dd40  mov x20,xzr
7102b5dd44  adrp x21,0x71043ff000
7102b5dd48  add x21,x21,#0x54d
7102b5dd4c  add x0,x22,#0x48
7102b5dd50  bl 0x71039c0070
7102b5dd54  cmp x0,#0xd
7102b5dd58  b.cc 0x7102b5dd6c
7102b5dd5c  add x0,x22,#0x55
7102b5dd60  mov x1,x21
7102b5dd64  bl 0x71039c0060
7102b5dd68  cbz w0,0x7102b5ddcc
7102b5dd6c  add x20,x20,#0x1
7102b5dd70  add x22,x22,#0x130
7102b5dd74  cmp x20,x19
7102b5dd78  b.cc 0x7102b5dd4c
7102b5dd7c  b 0x7102b5de7c
7102b5dd80  ldr w19,[x26, #0x68]
7102b5dd84  cbz w19,0x7102b5de7c
7102b5dd88  ldr x22,[x26, #0x70]
7102b5dd8c  mov x20,xzr
7102b5dd90  adrp x21,0x71043de000
7102b5dd94  add x21,x21,#0x233
7102b5dd98  add x0,x22,#0x48
7102b5dd9c  bl 0x71039c0070
7102b5dda0  cmp x0,#0xd
7102b5dda4  b.cc 0x7102b5ddb8
7102b5dda8  add x0,x22,#0x55
7102b5ddac  mov x1,x21
7102b5ddb0  bl 0x71039c0060
7102b5ddb4  cbz w0,0x7102b5ddcc
7102b5ddb8  add x20,x20,#0x1
7102b5ddbc  add x22,x22,#0x130
7102b5ddc0  cmp x20,x19
7102b5ddc4  b.cc 0x7102b5dd98
7102b5ddc8  b 0x7102b5de7c
7102b5ddcc  cbz x22,0x7102b5de7c
7102b5ddd0  mov w0,#0x10
7102b5ddd4  mov w1,#0x10
7102b5ddd8  bl 0x710392e290
7102b5dddc  mov x21,x0
7102b5dde0  cbnz x0,0x7102b5de2c
7102b5dde4  adrp x8,0x7105332000
7102b5dde8  ldr x0,[x8, #0xf00]
7102b5ddec  cbz x0,0x7102b5de28
7102b5ddf0  mov w8,#0x10
7102b5ddf4  stur wzr,[x29, #-0xb0]
7102b5ddf8  sub x1,x29,#0xb0
7102b5ddfc  str x8,[sp, #0xe0]
7102b5de00  ldr x8,[x0]
7102b5de04  ldr x8,[x8, #0x30]
7102b5de08  add x2,sp,#0xe0
7102b5de0c  blr x8
7102b5de10  tbz w0,#0x0,0x7102b5de28
7102b5de14  mov w0,#0x10
7102b5de18  mov w1,#0x10
7102b5de1c  bl 0x710392e290
7102b5de20  mov x21,x0
7102b5de24  cbnz x0,0x7102b5de2c
7102b5de28  mov x21,xzr
7102b5de2c  ldr x8,[x28]
7102b5de30  stp x8,xzr,[x21]
7102b5de34  ldr x8,[x8]
7102b5de38  ldr x8,[x8, #0x300]
7102b5de3c  ldr x0,[x8, #0x28]
7102b5de40  cbz x0,0x7102b5de4c
7102b5de44  mov x1,x22
7102b5de48  bl 0x71025f5870
7102b5de4c  str x0,[x21, #0x8]
7102b5de50  ldr x22,[x28, #0x78]
7102b5de54  str x21,[x28, #0x78]
7102b5de58  cbz x22,0x7102b5de7c
7102b5de5c  ldp x8,x1,[x22]
7102b5de60  ldr x8,[x8]
7102b5de64  ldr x8,[x8, #0x300]
7102b5de68  ldr x0,[x8, #0x28]
7102b5de6c  bl 0x710262c8a0
7102b5de70  mov x0,x22
7102b5de74  str xzr,[x22, #0x8]
7102b5de78  bl 0x710392eb40
7102b5de7c  ldr x20,[sp, #0x70]
7102b5de80  ldr s0,[x20, #0x250]
7102b5de84  ldr x19,[x28, #0x18]
7102b5de88  fcvtzs w8,s0
7102b5de8c  str xzr,[sp, #0xe0]
7102b5de90  stp xzr,xzr,[sp, #0xe8]
7102b5de94  scvtf s0,w8
7102b5de98  str q0,[sp, #0x80]
7102b5de9c  ldp x25,x26,[x19, #0x18]
7102b5dea0  cmp x25,x26
7102b5dea4  b.eq 0x7102b5e300
7102b5dea8  mov x22,xzr
7102b5deac  mov x28,xzr
7102b5deb0  ldr w8,[x25, #0x8]
7102b5deb4  ldr w9,[x20, #0x24c]
7102b5deb8  cmp w8,w9
7102b5debc  b.ne 0x7102b5dfe0
7102b5dec0  ldp w8,w9,[x25, #0xc]
7102b5dec4  add x8,x20,x8, LSL #0x4
7102b5dec8  ldr w8,[x8, #0x254]
7102b5decc  cmp w9,w8
7102b5ded0  b.ne 0x7102b5dfe0
7102b5ded4  ldr x8,[sp, #0xf0]
7102b5ded8  cmp x28,x8
7102b5dedc  b.eq 0x7102b5def8
7102b5dee0  ldr x8,[x25]
7102b5dee4  str x8,[x28]
7102b5dee8  ldr x8,[sp, #0xe8]
7102b5deec  add x28,x8,#0x8
7102b5def0  str x28,[sp, #0xe8]
7102b5def4  b 0x7102b5dfe0
7102b5def8  ldr x21,[sp, #0xe0]
7102b5defc  sub x23,x28,x21
7102b5df00  asr x20,x23,#0x3
7102b5df04  add x8,x20,#0x1
7102b5df08  lsr x9,x8,#0x3d
7102b5df0c  cbnz x9,0x7102b5ee38
7102b5df10  orr x9,xzr,#0xffffffffffffffe
7102b5df14  cmp x20,x9
7102b5df18  b.hi 0x7102b5df38
7102b5df1c  asr x9,x23,#0x2
7102b5df20  cmp x9,x8
7102b5df24  csel x27,x8,x9,cc
7102b5df28  cbz x27,0x7102b5df9c
7102b5df2c  lsr x8,x27,#0x3d
7102b5df30  cbz x8,0x7102b5df3c
7102b5df34  b 0x7102b5ee2c
7102b5df38  orr x27,xzr,#0x1fffffffffffffff
7102b5df3c  lsl x8,x27,#0x3
7102b5df40  cmp x8,#0x0
7102b5df44  csinc x24,x8,xzr,ne
7102b5df48  mov w0,#0x10
7102b5df4c  mov x1,x24
7102b5df50  bl 0x710392e290
7102b5df54  mov x22,x0
7102b5df58  cbnz x0,0x7102b5dfa0
7102b5df5c  adrp x8,0x7105332000
7102b5df60  ldr x0,[x8, #0xf00]
7102b5df64  cbz x0,0x7102b5df9c
7102b5df68  stur wzr,[x29, #-0xd8]
7102b5df6c  stur x24,[x29, #-0xb0]
7102b5df70  ldr x8,[x0]
7102b5df74  ldr x8,[x8, #0x30]
7102b5df78  sub x1,x29,#0xd8
7102b5df7c  sub x2,x29,#0xb0
7102b5df80  blr x8
7102b5df84  tbz w0,#0x0,0x7102b5df9c
7102b5df88  mov w0,#0x10
7102b5df8c  mov x1,x24
7102b5df90  bl 0x710392e290
7102b5df94  mov x22,x0
7102b5df98  cbnz x0,0x7102b5dfa0
7102b5df9c  mov x22,xzr
7102b5dfa0  ldr x8,[x25]
7102b5dfa4  add x28,x22,x20, LSL #0x3
7102b5dfa8  add x20,x22,x27, LSL #0x3
7102b5dfac  str x8,[x28], #0x8
7102b5dfb0  cmp x23,#0x1
7102b5dfb4  b.lt 0x7102b5dfc8
7102b5dfb8  mov x0,x22
7102b5dfbc  mov x1,x21
7102b5dfc0  mov x2,x23
7102b5dfc4  bl 0x71039c00e0
7102b5dfc8  stp x22,x28,[sp, #0xe0]
7102b5dfcc  str x20,[sp, #0xf0]
7102b5dfd0  cbz x21,0x7102b5dfdc
7102b5dfd4  mov x0,x21
7102b5dfd8  bl 0x710392eb40
7102b5dfdc  ldr x20,[sp, #0x70]
7102b5dfe0  add x25,x25,#0x18
7102b5dfe4  cmp x26,x25
7102b5dfe8  b.ne 0x7102b5deb0
7102b5dfec  cmp x22,x28
7102b5dff0  b.eq 0x7102b5e2dc
7102b5dff4  ldr q0,[sp, #0x80]
7102b5dff8  movi v1.2D,#0x0
7102b5dffc  add x8,x19,#0x30
7102b5e000  mov v1.S[0x0],v0.S[0x0]
7102b5e004  str x8,[sp, #0x58]
7102b5e008  adrp x8,0x7104472000
7102b5e00c  ldr s8,[x8, #0x970]
7102b5e010  fmov s9,0xbf800000
7102b5e014  mov w27,#0x1
7102b5e018  adrp x23,0x710507f000
7102b5e01c  add x23,x23,#0x650
7102b5e020  adrp x25,0x7102b6e000
7102b5e024  add x25,x25,#0xac0
7102b5e028  orr w26,wzr,#0x10001
7102b5e02c  str q1,[sp, #0x60]
7102b5e030  b 0x7102b5e03c
7102b5e034  mov x26,xzr
7102b5e038  b 0x7102b5e27c
7102b5e03c  ldr x1,[x22]
7102b5e040  ldr x0,[x19, #0x8]
7102b5e044  bl 0x7102b58580
7102b5e048  ldr x9,[x0, #0x8]
7102b5e04c  ldrb w10,[x9, #0xe7]
7102b5e050  ldrb w9,[x9, #0xe8]
7102b5e054  ldrb w8,[x0, #0x128]
7102b5e058  cmp w8,#0x0
7102b5e05c  orr w9,w9,w10
7102b5e060  and w8,w9,#0xff
7102b5e064  mov x24,x0
7102b5e068  ccmp w8,#0x0,#0x0,ne
7102b5e06c  b.eq 0x7102b5e078
7102b5e070  strb w27,[x24, #0x129]
7102b5e074  b 0x7102b5e0a0
7102b5e078  ldr q0,[x24, #0x10]
7102b5e07c  ldr q1,[sp, #0x80]
7102b5e080  fabd s1,s0,s1
7102b5e084  fcmp s1,s8
7102b5e088  b.gt 0x7102b5e09c
7102b5e08c  dup s0,v0.S[0x1]
7102b5e090  fabs s0,s0
7102b5e094  fcmp s0,s8
7102b5e098  b.le 0x7102b5e0a8
7102b5e09c  strb w27,[x24, #0x12a]
7102b5e0a0  ldr q0,[sp, #0x60]
7102b5e0a4  str q0,[x24, #0x10]
7102b5e0a8  ldr s0,[x24, #0x30]
7102b5e0ac  fabs s0,s0
7102b5e0b0  fcmp s0,s8
7102b5e0b4  b.mi 0x7102b5e0c0
7102b5e0b8  str wzr,[x24, #0x30]
7102b5e0bc  strb w27,[x24, #0x129]
7102b5e0c0  ldr q0,[x24, #0x50]
7102b5e0c4  fadd s1,s0,s9
7102b5e0c8  fabs s1,s1
7102b5e0cc  fcmp s1,s8
7102b5e0d0  b.mi 0x7102b5e0e4
7102b5e0d4  fmov s1,0x3f800000
7102b5e0d8  mov v0.S[0x0],v1.S[0x0]
7102b5e0dc  str q0,[x24, #0x50]
7102b5e0e0  strb w27,[x24, #0x129]
7102b5e0e4  dup s1,v0.S[0x1]
7102b5e0e8  fadd s1,s1,s9
7102b5e0ec  fabs s1,s1
7102b5e0f0  fcmp s1,s8
7102b5e0f4  b.mi 0x7102b5e108
7102b5e0f8  fmov s1,0x3f800000
7102b5e0fc  mov v0.S[0x1],v1.S[0x0]
7102b5e100  str q0,[x24, #0x50]
7102b5e104  strb w27,[x24, #0x129]
7102b5e108  ldr x8,[x24, #0x68]
7102b5e10c  cbz x8,0x7102b5e140
7102b5e110  ldrh w9,[x8, #0x8]
7102b5e114  sub w9,w9,#0x1
7102b5e118  sxth w10,w9
7102b5e11c  cmp w10,#0x0
7102b5e120  strh w9,[x8, #0x8]
7102b5e124  b.gt 0x7102b5e13c
7102b5e128  ldr x0,[x24, #0x68]
7102b5e12c  cbz x0,0x7102b5e13c
7102b5e130  ldr x8,[x0]
7102b5e134  ldr x8,[x8, #0x8]
7102b5e138  blr x8
7102b5e13c  str xzr,[x24, #0x68]
7102b5e140  mov w0,#0x10
7102b5e144  mov w1,#0x20
7102b5e148  bl 0x710392e290
7102b5e14c  cbnz x0,0x7102b5e194
7102b5e150  adrp x8,0x7105332000
7102b5e154  ldr x0,[x8, #0xf00]
7102b5e158  cbz x0,0x7102b5e190
7102b5e15c  mov w8,#0x20
7102b5e160  stur wzr,[x29, #-0xd8]
7102b5e164  sub x1,x29,#0xd8
7102b5e168  stur x8,[x29, #-0xb0]
7102b5e16c  ldr x8,[x0]
7102b5e170  ldr x8,[x8, #0x30]
7102b5e174  sub x2,x29,#0xb0
7102b5e178  blr x8
7102b5e17c  tbz w0,#0x0,0x7102b5e190
7102b5e180  mov w0,#0x10
7102b5e184  mov w1,#0x20
7102b5e188  bl 0x710392e290
7102b5e18c  cbnz x0,0x7102b5e194
7102b5e190  mov x0,xzr
7102b5e194  str w26,[x0, #0x8]
7102b5e198  str x23,[x0]
7102b5e19c  stp x19,x25,[x0, #0x10]
7102b5e1a0  str x0,[x24, #0x68]
7102b5e1a4  ldp x9,x8,[x19, #0x38]
7102b5e1a8  cmp x9,x8
7102b5e1ac  b.eq 0x7102b5e1c4
7102b5e1b0  str x24,[x9]
7102b5e1b4  ldr x8,[x19, #0x38]
7102b5e1b8  add x8,x8,#0x8
7102b5e1bc  str x8,[x19, #0x38]
7102b5e1c0  b 0x7102b5e2cc
7102b5e1c4  ldr x10,[sp, #0x58]
7102b5e1c8  ldr x21,[x10]
7102b5e1cc  sub x25,x9,x21
7102b5e1d0  asr x20,x25,#0x3
7102b5e1d4  add x9,x20,#0x1
7102b5e1d8  lsr x10,x9,#0x3d
7102b5e1dc  cbnz x10,0x7102b5ee24
7102b5e1e0  sub x8,x8,x21
7102b5e1e4  asr x10,x8,#0x3
7102b5e1e8  orr x11,xzr,#0xffffffffffffffe
7102b5e1ec  cmp x10,x11
7102b5e1f0  b.hi 0x7102b5e210
7102b5e1f4  asr x8,x8,#0x2
7102b5e1f8  cmp x8,x9
7102b5e1fc  csel x23,x9,x8,cc
7102b5e200  cbz x23,0x7102b5e034
7102b5e204  lsr x8,x23,#0x3d
7102b5e208  cbz x8,0x7102b5e214
7102b5e20c  b 0x7102b5ee2c
7102b5e210  orr x23,xzr,#0x1fffffffffffffff
7102b5e214  lsl x8,x23,#0x3
7102b5e218  cmp x8,#0x0
7102b5e21c  csinc x27,x8,xzr,ne
7102b5e220  mov w0,#0x10
7102b5e224  mov x1,x27
7102b5e228  bl 0x710392e290
7102b5e22c  mov x26,x0
7102b5e230  cbnz x0,0x7102b5e278
7102b5e234  adrp x8,0x7105332000
7102b5e238  ldr x0,[x8, #0xf00]
7102b5e23c  cbz x0,0x7102b5e274
7102b5e240  stur wzr,[x29, #-0xd8]
7102b5e244  stur x27,[x29, #-0xb0]
7102b5e248  ldr x8,[x0]
7102b5e24c  ldr x8,[x8, #0x30]
7102b5e250  sub x1,x29,#0xd8
7102b5e254  sub x2,x29,#0xb0
7102b5e258  blr x8
7102b5e25c  tbz w0,#0x0,0x7102b5e274
7102b5e260  mov w0,#0x10
7102b5e264  mov x1,x27
7102b5e268  bl 0x710392e290
7102b5e26c  mov x26,x0
7102b5e270  cbnz x0,0x7102b5e278
7102b5e274  mov x26,xzr
7102b5e278  mov w27,#0x1
7102b5e27c  add x20,x26,x20, LSL #0x3
7102b5e280  add x23,x26,x23, LSL #0x3
7102b5e284  cmp x25,#0x1
7102b5e288  str x24,[x20], #0x8
7102b5e28c  b.lt 0x7102b5e2a0
7102b5e290  mov x0,x26
7102b5e294  mov x1,x21
7102b5e298  mov x2,x25
7102b5e29c  bl 0x71039c00e0
7102b5e2a0  stp x26,x20,[x19, #0x30]
7102b5e2a4  ldr x20,[sp, #0x70]
7102b5e2a8  str x23,[x19, #0x40]
7102b5e2ac  adrp x23,0x710507f000
7102b5e2b0  add x23,x23,#0x650
7102b5e2b4  adrp x25,0x7102b6e000
7102b5e2b8  add x25,x25,#0xac0
7102b5e2bc  orr w26,wzr,#0x10001
7102b5e2c0  cbz x21,0x7102b5e2cc
7102b5e2c4  mov x0,x21
7102b5e2c8  bl 0x710392eb40
7102b5e2cc  add x22,x22,#0x8
7102b5e2d0  cmp x28,x22
7102b5e2d4  b.ne 0x7102b5e03c
7102b5e2d8  ldr x22,[sp, #0xe0]
7102b5e2dc  ldr x28,[sp, #0x78]
7102b5e2e0  mov w8,#0x1
7102b5e2e4  str w8,[x19, #0x10]
7102b5e2e8  cbz x22,0x7102b5e308
7102b5e2ec  str x22,[sp, #0xe8]
7102b5e2f0  cbz x22,0x7102b5e308
7102b5e2f4  mov x0,x22
7102b5e2f8  bl 0x710392eb40
7102b5e2fc  b 0x7102b5e308
7102b5e300  mov w8,#0x1
7102b5e304  str w8,[x19, #0x10]
7102b5e308  mov w0,#0x10
7102b5e30c  orr w1,wzr,#0x18
7102b5e310  bl 0x710392e290
7102b5e314  mov x22,x0
7102b5e318  cbnz x0,0x7102b5e364
7102b5e31c  adrp x8,0x7105332000
7102b5e320  ldr x0,[x8, #0xf00]
7102b5e324  cbz x0,0x7102b5e360
7102b5e328  orr w8,wzr,#0x18
7102b5e32c  stur wzr,[x29, #-0xb0]
7102b5e330  sub x1,x29,#0xb0
7102b5e334  str x8,[sp, #0xe0]
7102b5e338  ldr x8,[x0]
7102b5e33c  ldr x8,[x8, #0x30]
7102b5e340  add x2,sp,#0xe0
7102b5e344  blr x8
7102b5e348  tbz w0,#0x0,0x7102b5e360
7102b5e34c  mov w0,#0x10
7102b5e350  orr w1,wzr,#0x18
7102b5e354  bl 0x710392e290
7102b5e358  mov x22,x0
7102b5e35c  cbnz x0,0x7102b5e364
7102b5e360  mov x22,xzr
7102b5e364  ldr x23,[x28]
7102b5e368  mov w0,#0x10
7102b5e36c  orr w1,wzr,#0x18
7102b5e370  stp xzr,xzr,[x22, #0x8]
7102b5e374  str xzr,[x22]
7102b5e378  bl 0x710392e290
7102b5e37c  mov x24,x0
7102b5e380  cbnz x0,0x7102b5e3cc
7102b5e384  adrp x8,0x7105332000
7102b5e388  ldr x0,[x8, #0xf00]
7102b5e38c  cbz x0,0x7102b5e3c8
7102b5e390  orr w8,wzr,#0x18
7102b5e394  stur wzr,[x29, #-0xb0]
7102b5e398  sub x1,x29,#0xb0
7102b5e39c  str x8,[sp, #0xe0]
7102b5e3a0  ldr x8,[x0]
7102b5e3a4  ldr x8,[x8, #0x30]
7102b5e3a8  add x2,sp,#0xe0
7102b5e3ac  blr x8
7102b5e3b0  tbz w0,#0x0,0x7102b5e3c8
7102b5e3b4  mov w0,#0x10
7102b5e3b8  orr w1,wzr,#0x18
7102b5e3bc  bl 0x710392e290
7102b5e3c0  mov x24,x0
7102b5e3c4  cbnz x0,0x7102b5e3cc
7102b5e3c8  mov x24,xzr
7102b5e3cc  ldr q0,[sp, #0x80]
7102b5e3d0  ldr x3,[sp, #0x48]
7102b5e3d4  mov x0,x24
7102b5e3d8  mov x1,x23
7102b5e3dc  mov x2,x20
7102b5e3e0  mov w4,wzr
7102b5e3e4  bl 0x7102b6eaf0
7102b5e3e8  ldr x21,[x22]
7102b5e3ec  str x24,[x22]
7102b5e3f0  cbz x21,0x7102b5e43c
7102b5e3f4  ldp x24,x19,[x21]
7102b5e3f8  cmp x24,x19
7102b5e3fc  b.eq 0x7102b5e424
7102b5e400  ldr x0,[x24]
7102b5e404  cbz x0,0x7102b5e414
7102b5e408  ldr x8,[x0]
7102b5e40c  ldr x8,[x8, #0x20]
7102b5e410  blr x8
7102b5e414  add x24,x24,#0x8
7102b5e418  cmp x19,x24
7102b5e41c  b.ne 0x7102b5e400
7102b5e420  ldr x24,[x21]
7102b5e424  cbz x24,0x7102b5e434
7102b5e428  mov x0,x24
7102b5e42c  str x24,[x21, #0x8]
7102b5e430  bl 0x710392eb40
7102b5e434  mov x0,x21
7102b5e438  bl 0x710392eb40
7102b5e43c  mov w0,#0x10
7102b5e440  orr w1,wzr,#0x18
7102b5e444  bl 0x710392e290
7102b5e448  mov x24,x0
7102b5e44c  cbnz x0,0x7102b5e498
7102b5e450  adrp x8,0x7105332000
7102b5e454  ldr x0,[x8, #0xf00]
7102b5e458  cbz x0,0x7102b5e494
7102b5e45c  orr w8,wzr,#0x18
7102b5e460  stur wzr,[x29, #-0xb0]
7102b5e464  sub x1,x29,#0xb0
7102b5e468  str x8,[sp, #0xe0]
7102b5e46c  ldr x8,[x0]
7102b5e470  ldr x8,[x8, #0x30]
7102b5e474  add x2,sp,#0xe0
7102b5e478  blr x8
7102b5e47c  tbz w0,#0x0,0x7102b5e494
7102b5e480  mov w0,#0x10
7102b5e484  orr w1,wzr,#0x18
7102b5e488  bl 0x710392e290
7102b5e48c  mov x24,x0
7102b5e490  cbnz x0,0x7102b5e498
7102b5e494  mov x24,xzr
7102b5e498  ldr q0,[sp, #0x80]
7102b5e49c  ldr x3,[sp, #0x48]
7102b5e4a0  mov w4,#0x1
7102b5e4a4  mov x0,x24
7102b5e4a8  mov x1,x23
7102b5e4ac  mov x2,x20
7102b5e4b0  bl 0x7102b6eaf0
7102b5e4b4  ldr x21,[x22, #0x8]
7102b5e4b8  str x24,[x22, #0x8]
7102b5e4bc  cbz x21,0x7102b5e508
7102b5e4c0  ldp x24,x19,[x21]
7102b5e4c4  cmp x24,x19
7102b5e4c8  b.eq 0x7102b5e4f0
7102b5e4cc  ldr x0,[x24]
7102b5e4d0  cbz x0,0x7102b5e4e0
7102b5e4d4  ldr x8,[x0]
7102b5e4d8  ldr x8,[x8, #0x20]
7102b5e4dc  blr x8
7102b5e4e0  add x24,x24,#0x8
7102b5e4e4  cmp x19,x24
7102b5e4e8  b.ne 0x7102b5e4cc
7102b5e4ec  ldr x24,[x21]
7102b5e4f0  cbz x24,0x7102b5e500
7102b5e4f4  mov x0,x24
7102b5e4f8  str x24,[x21, #0x8]
7102b5e4fc  bl 0x710392eb40
7102b5e500  mov x0,x21
7102b5e504  bl 0x710392eb40
7102b5e508  mov w0,#0x10
7102b5e50c  orr w1,wzr,#0x18
7102b5e510  bl 0x710392e290
7102b5e514  mov x24,x0
7102b5e518  cbnz x0,0x7102b5e564
7102b5e51c  adrp x8,0x7105332000
7102b5e520  ldr x0,[x8, #0xf00]
7102b5e524  cbz x0,0x7102b5e560
7102b5e528  orr w8,wzr,#0x18
7102b5e52c  stur wzr,[x29, #-0xb0]
7102b5e530  sub x1,x29,#0xb0
7102b5e534  str x8,[sp, #0xe0]
7102b5e538  ldr x8,[x0]
7102b5e53c  ldr x8,[x8, #0x30]
7102b5e540  add x2,sp,#0xe0
7102b5e544  blr x8
7102b5e548  tbz w0,#0x0,0x7102b5e560
7102b5e54c  mov w0,#0x10
7102b5e550  orr w1,wzr,#0x18
7102b5e554  bl 0x710392e290
7102b5e558  mov x24,x0
7102b5e55c  cbnz x0,0x7102b5e564
7102b5e560  mov x24,xzr
7102b5e564  ldr q0,[sp, #0x80]
7102b5e568  ldr x3,[sp, #0x48]
7102b5e56c  mov w4,#0x2
7102b5e570  mov x0,x24
7102b5e574  mov x1,x23
7102b5e578  mov x2,x20
7102b5e57c  bl 0x7102b6eaf0
7102b5e580  ldr x21,[x22, #0x10]
7102b5e584  str x24,[x22, #0x10]
7102b5e588  cbz x21,0x7102b5e5d4
7102b5e58c  ldp x23,x19,[x21]
7102b5e590  cmp x23,x19
7102b5e594  b.eq 0x7102b5e5bc
7102b5e598  ldr x0,[x23]
7102b5e59c  cbz x0,0x7102b5e5ac
7102b5e5a0  ldr x8,[x0]
7102b5e5a4  ldr x8,[x8, #0x20]
7102b5e5a8  blr x8
7102b5e5ac  add x23,x23,#0x8
7102b5e5b0  cmp x19,x23
7102b5e5b4  b.ne 0x7102b5e598
7102b5e5b8  ldr x23,[x21]
7102b5e5bc  cbz x23,0x7102b5e5cc
7102b5e5c0  mov x0,x23
7102b5e5c4  str x23,[x21, #0x8]
7102b5e5c8  bl 0x710392eb40
7102b5e5cc  mov x0,x21
7102b5e5d0  bl 0x710392eb40
7102b5e5d4  ldr x21,[x28, #0x68]
7102b5e5d8  str x22,[x28, #0x68]
7102b5e5dc  cbz x21,0x7102b5e5f0
7102b5e5e0  mov x0,x21
7102b5e5e4  bl 0x7102b6f1a0
7102b5e5e8  mov x0,x21
7102b5e5ec  bl 0x710392eb40
7102b5e5f0  ldr x9,[x28, #0x8]
7102b5e5f4  ldp x8,x19,[x28, #0x18]
7102b5e5f8  add x10,x20,#0x244
7102b5e5fc  ldr q0,[sp, #0x80]
7102b5e600  stur x9,[x29, #-0xd8]
7102b5e604  ldr x9,[x10]
7102b5e608  stur x9,[x29, #-0xd0]
7102b5e60c  stur s0,[x29, #-0xc8]
7102b5e610  stur x8,[x29, #-0xc0]
7102b5e614  ldr x27,[x28, #0x28]
7102b5e618  cmp x19,x27
7102b5e61c  b.eq 0x7102b5e78c
7102b5e620  add x21,x28,#0x38
7102b5e624  ldr x22,[x19]
7102b5e628  ldr w8,[x22, #0xc]
7102b5e62c  ldr w9,[x20, #0x24c]
7102b5e630  cmp w8,w9
7102b5e634  b.ne 0x7102b5e780
7102b5e638  ldp w8,w9,[x22, #0x10]
7102b5e63c  add x8,x20,x8, LSL #0x4
7102b5e640  ldr w8,[x8, #0x254]
7102b5e644  cmp w9,w8
7102b5e648  b.ne 0x7102b5e780
7102b5e64c  ldrb w8,[x22, #0x18]
7102b5e650  cbnz w8,0x7102b5e670
7102b5e654  ldr x8,[x22]
7102b5e658  ldr x8,[x8, #0x10]
7102b5e65c  sub x1,x29,#0xd8
7102b5e660  mov x0,x22
7102b5e664  blr x8
7102b5e668  mov w8,#0x1
7102b5e66c  strb w8,[x22, #0x18]
7102b5e670  ldp x9,x8,[x28, #0x40]
7102b5e674  cmp x9,x8
7102b5e678  b.eq 0x7102b5e690
7102b5e67c  str x22,[x9]
7102b5e680  ldr x8,[x28, #0x40]
7102b5e684  add x8,x8,#0x8
7102b5e688  str x8,[x28, #0x40]
7102b5e68c  b 0x7102b5e780
7102b5e690  ldr x23,[x21]
7102b5e694  sub x24,x9,x23
7102b5e698  asr x20,x24,#0x3
7102b5e69c  add x9,x20,#0x1
7102b5e6a0  lsr x10,x9,#0x3d
7102b5e6a4  cbnz x10,0x7102b5ee30
7102b5e6a8  sub x8,x8,x23
7102b5e6ac  asr x10,x8,#0x3
7102b5e6b0  orr x11,xzr,#0xffffffffffffffe
7102b5e6b4  cmp x10,x11
7102b5e6b8  b.hi 0x7102b5e6d8
7102b5e6bc  asr x8,x8,#0x2
7102b5e6c0  cmp x8,x9
7102b5e6c4  csel x28,x9,x8,cc
7102b5e6c8  cbz x28,0x7102b5e73c
7102b5e6cc  lsr x8,x28,#0x3d
7102b5e6d0  cbz x8,0x7102b5e6dc
7102b5e6d4  b 0x7102b5ee2c
7102b5e6d8  orr x28,xzr,#0x1fffffffffffffff
7102b5e6dc  lsl x8,x28,#0x3
7102b5e6e0  cmp x8,#0x0
7102b5e6e4  csinc x26,x8,xzr,ne
7102b5e6e8  mov w0,#0x10
7102b5e6ec  mov x1,x26
7102b5e6f0  bl 0x710392e290
7102b5e6f4  mov x25,x0
7102b5e6f8  cbnz x0,0x7102b5e740
7102b5e6fc  adrp x8,0x7105332000
7102b5e700  ldr x0,[x8, #0xf00]
7102b5e704  cbz x0,0x7102b5e73c
7102b5e708  stur wzr,[x29, #-0xb0]
7102b5e70c  str x26,[sp, #0xe0]
7102b5e710  ldr x8,[x0]
7102b5e714  ldr x8,[x8, #0x30]
7102b5e718  sub x1,x29,#0xb0
7102b5e71c  add x2,sp,#0xe0
7102b5e720  blr x8
7102b5e724  tbz w0,#0x0,0x7102b5e73c
7102b5e728  mov w0,#0x10
7102b5e72c  mov x1,x26
7102b5e730  bl 0x710392e290
7102b5e734  mov x25,x0
7102b5e738  cbnz x0,0x7102b5e740
7102b5e73c  mov x25,xzr
7102b5e740  add x20,x25,x20, LSL #0x3
7102b5e744  cmp x24,#0x1
7102b5e748  str x22,[x20], #0x8
7102b5e74c  add x22,x25,x28, LSL #0x3
7102b5e750  b.lt 0x7102b5e764
7102b5e754  mov x0,x25
7102b5e758  mov x1,x23
7102b5e75c  mov x2,x24
7102b5e760  bl 0x71039c00e0
7102b5e764  ldr x28,[sp, #0x78]
7102b5e768  stp x25,x20,[x28, #0x38]
7102b5e76c  ldr x20,[sp, #0x70]
7102b5e770  str x22,[x28, #0x48]
7102b5e774  cbz x23,0x7102b5e780
7102b5e778  mov x0,x23
7102b5e77c  bl 0x710392eb40
7102b5e780  add x19,x19,#0x8
7102b5e784  cmp x27,x19
7102b5e788  b.ne 0x7102b5e624
7102b5e78c  ldp x19,x26,[x28, #0x80]
7102b5e790  cmp x19,x26
7102b5e794  b.eq 0x7102b5e938
7102b5e798  add x21,x28,#0x98
7102b5e79c  orr x27,xzr,#0x3fffffffffffffe
7102b5e7a0  b 0x7102b5e7ac
7102b5e7a4  mov x24,xzr
7102b5e7a8  b 0x7102b5e8d8
7102b5e7ac  ldr w8,[x19]
7102b5e7b0  ldr w9,[x20, #0x24c]
7102b5e7b4  cmp w8,w9
7102b5e7b8  b.ne 0x7102b5e92c
7102b5e7bc  ldp w8,w9,[x19, #0x4]
7102b5e7c0  add x8,x20,x8, LSL #0x4
7102b5e7c4  ldr w8,[x8, #0x254]
7102b5e7c8  cmp w9,w8
7102b5e7cc  b.ne 0x7102b5e92c
7102b5e7d0  ldr x8,[x19, #0x8]
7102b5e7d4  str x8,[sp, #0xe8]
7102b5e7d8  ldr x8,[x19]
7102b5e7dc  str x8,[sp, #0xe0]
7102b5e7e0  ldr q1,[x19, #0x10]
7102b5e7e4  ldr q0,[sp, #0x80]
7102b5e7e8  ldp x8,x9,[x28, #0xa0]
7102b5e7ec  cmp x8,x9
7102b5e7f0  fadd s0,s1,s0
7102b5e7f4  mov v1.S[0x0],v0.S[0x0]
7102b5e7f8  b.eq 0x7102b5e820
7102b5e7fc  ldr x9,[sp, #0xe8]
7102b5e800  str x9,[x8, #0x8]
7102b5e804  ldr x9,[sp, #0xe0]
7102b5e808  str x9,[x8]
7102b5e80c  str q1,[x8, #0x10]
7102b5e810  ldr x8,[x28, #0xa0]
7102b5e814  add x8,x8,#0x20
7102b5e818  str x8,[x28, #0xa0]
7102b5e81c  b 0x7102b5e92c
7102b5e820  ldr x22,[x21]
7102b5e824  sub x23,x8,x22
7102b5e828  asr x20,x23,#0x5
7102b5e82c  add x8,x20,#0x1
7102b5e830  lsr x10,x8,#0x3b
7102b5e834  cbnz x10,0x7102b5ee30
7102b5e838  sub x9,x9,x22
7102b5e83c  asr x10,x9,#0x5
7102b5e840  cmp x10,x27
7102b5e844  b.hi 0x7102b5e868
7102b5e848  asr x9,x9,#0x4
7102b5e84c  cmp x9,x8
7102b5e850  csel x28,x8,x9,cc
7102b5e854  cbz x28,0x7102b5e7a4
7102b5e858  lsr x8,x28,#0x3b
7102b5e85c  str q1,[sp, #0x60]
7102b5e860  cbz x8,0x7102b5e870
7102b5e864  b 0x7102b5ee2c
7102b5e868  str q1,[sp, #0x60]
7102b5e86c  orr x28,xzr,#0x7ffffffffffffff
7102b5e870  lsl x8,x28,#0x5
7102b5e874  cmp x8,#0x0
7102b5e878  csinc x25,x8,xzr,ne
7102b5e87c  mov w0,#0x10
7102b5e880  mov x1,x25
7102b5e884  bl 0x710392e290
7102b5e888  mov x24,x0
7102b5e88c  cbnz x0,0x7102b5e8d4
7102b5e890  adrp x8,0x7105332000
7102b5e894  ldr x0,[x8, #0xf00]
7102b5e898  cbz x0,0x7102b5e8d0
7102b5e89c  stur wzr,[x29, #-0xb4]
7102b5e8a0  stur x25,[x29, #-0xb0]
7102b5e8a4  ldr x8,[x0]
7102b5e8a8  ldr x8,[x8, #0x30]
7102b5e8ac  sub x1,x29,#0xb4
7102b5e8b0  sub x2,x29,#0xb0
7102b5e8b4  blr x8
7102b5e8b8  tbz w0,#0x0,0x7102b5e8d0
7102b5e8bc  mov w0,#0x10
7102b5e8c0  mov x1,x25
7102b5e8c4  bl 0x710392e290
7102b5e8c8  mov x24,x0
7102b5e8cc  cbnz x0,0x7102b5e8d4
7102b5e8d0  mov x24,xzr
7102b5e8d4  ldr q1,[sp, #0x60]
7102b5e8d8  ldr x9,[sp, #0xe8]
7102b5e8dc  add x8,x24,x20, LSL #0x5
7102b5e8e0  add x20,x24,x28, LSL #0x5
7102b5e8e4  add x25,x8,#0x20
7102b5e8e8  str x9,[x8, #0x8]
7102b5e8ec  ldr x9,[sp, #0xe0]
7102b5e8f0  cmp x23,#0x1
7102b5e8f4  str x9,[x8]
7102b5e8f8  str q1,[x8, #0x10]
7102b5e8fc  b.lt 0x7102b5e910
7102b5e900  mov x0,x24
7102b5e904  mov x1,x22
7102b5e908  mov x2,x23
7102b5e90c  bl 0x71039c00e0
7102b5e910  ldr x28,[sp, #0x78]
7102b5e914  stp x24,x25,[x28, #0x98]
7102b5e918  str x20,[x28, #0xa8]
7102b5e91c  ldr x20,[sp, #0x70]
7102b5e920  cbz x22,0x7102b5e92c
7102b5e924  mov x0,x22
7102b5e928  bl 0x710392eb40
7102b5e92c  add x19,x19,#0x20
7102b5e930  cmp x26,x19
7102b5e934  b.ne 0x7102b5e7ac
7102b5e938  ldr x8,[x28]
7102b5e93c  ldr x8,[x8]
7102b5e940  ldrb w9,[x8, #0xc8]
7102b5e944  cbz w9,0x7102b5ed7c
7102b5e948  ldr x8,[x8, #0x310]
7102b5e94c  ldr x20,[x8, #0x118]
7102b5e950  cbz x20,0x7102b5ed7c
7102b5e954  mov x0,x20
7102b5e958  mov w1,wzr
7102b5e95c  bl 0x710261f440
7102b5e960  ldr x8,[sp, #0x70]
7102b5e964  ldr w4,[x8, #0x254]
7102b5e968  ldr w8,[x8, #0x24c]
7102b5e96c  adrp x21,0x7104306000
7102b5e970  add x21,x21,#0x7c6
7102b5e974  adrp x22,0x71043bc000
7102b5e978  add x22,x22,#0x7d1
7102b5e97c  mov w5,#0x41
7102b5e980  add x0,sp,#0xe0
7102b5e984  cmp w8,#0x1
7102b5e988  csel x3,x22,x21,eq
7102b5e98c  bl 0x7102b5f110
7102b5e990  ldr x8,[x20]
7102b5e994  ldrb w9,[x8, #0x80]
7102b5e998  cbz w9,0x7102b5ea20
7102b5e99c  ldr x0,[x8, #0x30]
7102b5e9a0  ldrb w11,[sp, #0xe4]
7102b5e9a4  cbz w11,0x7102b5ea04
7102b5e9a8  mov w9,#0x5
7102b5e9ac  add x10,sp,#0xe0
7102b5e9b0  mov x8,xzr
7102b5e9b4  orr x10,x10,x9
7102b5e9b8  mov w9,#0xffffffff
7102b5e9bc  orr x12,xzr,#0x100000000
7102b5e9c0  adrp x13,0x7104754000
7102b5e9c4  add x13,x13,#0x84
7102b5e9c8  and w11,w11,#0xff
7102b5e9cc  sub w14,w11,#0x41
7102b5e9d0  add w15,w11,#0x20
7102b5e9d4  cmp w14,#0x1a
7102b5e9d8  csel w11,w15,w11,cc
7102b5e9dc  eor w11,w11,w9
7102b5e9e0  and w11,w11,#0xff
7102b5e9e4  ldr w11,[x13, w11, UXTW #0x2]
7102b5e9e8  eor w9,w11,w9, LSR #0x8
7102b5e9ec  ldrb w11,[x10], #0x1
7102b5e9f0  add x8,x8,x12
7102b5e9f4  cbnz w11,0x7102b5e9c8
7102b5e9f8  mvn w9,w9
7102b5e9fc  and x8,x8,#0xff00000000
7102b5ea00  b 0x7102b5ea0c
7102b5ea04  mov x9,xzr
7102b5ea08  mov x8,xzr
7102b5ea0c  orr x1,x8,x9
7102b5ea10  ldr x8,[x0]
7102b5ea14  ldr x8,[x8, #0x180]
7102b5ea18  mov w2,#0x1
7102b5ea1c  blr x8
7102b5ea20  ldr x8,[sp, #0x70]
7102b5ea24  ldr w4,[x8, #0x264]
7102b5ea28  ldr w8,[x8, #0x24c]
7102b5ea2c  cmp w8,#0x1
7102b5ea30  csel x3,x22,x21,eq
7102b5ea34  mov w5,#0x42
7102b5ea38  add x0,sp,#0xe0
7102b5ea3c  bl 0x7102b5f110
7102b5ea40  ldr x8,[x20]
7102b5ea44  ldrb w9,[x8, #0x80]
7102b5ea48  cbz w9,0x7102b5ead0
7102b5ea4c  ldr x0,[x8, #0x30]
7102b5ea50  ldrb w11,[sp, #0xe4]
7102b5ea54  cbz w11,0x7102b5eab4
7102b5ea58  mov w9,#0x5
7102b5ea5c  add x10,sp,#0xe0
7102b5ea60  mov x8,xzr
7102b5ea64  orr x10,x10,x9
7102b5ea68  mov w9,#0xffffffff
7102b5ea6c  orr x12,xzr,#0x100000000
7102b5ea70  adrp x13,0x7104754000
7102b5ea74  add x13,x13,#0x84
7102b5ea78  and w11,w11,#0xff
7102b5ea7c  sub w14,w11,#0x41
7102b5ea80  add w15,w11,#0x20
7102b5ea84  cmp w14,#0x1a
7102b5ea88  csel w11,w15,w11,cc
7102b5ea8c  eor w11,w11,w9
7102b5ea90  and w11,w11,#0xff
7102b5ea94  ldr w11,[x13, w11, UXTW #0x2]
7102b5ea98  eor w9,w11,w9, LSR #0x8
7102b5ea9c  ldrb w11,[x10], #0x1
7102b5eaa0  add x8,x8,x12
7102b5eaa4  cbnz w11,0x7102b5ea78
7102b5eaa8  mvn w9,w9
7102b5eaac  and x8,x8,#0xff00000000
7102b5eab0  b 0x7102b5eabc
7102b5eab4  mov x9,xzr
7102b5eab8  mov x8,xzr
7102b5eabc  orr x1,x8,x9
7102b5eac0  ldr x8,[x0]
7102b5eac4  ldr x8,[x8, #0x180]
7102b5eac8  mov w2,#0x1
7102b5eacc  blr x8
7102b5ead0  ldr x8,[sp, #0x70]
7102b5ead4  ldr w4,[x8, #0x274]
7102b5ead8  ldr w8,[x8, #0x24c]
7102b5eadc  cmp w8,#0x1
7102b5eae0  csel x3,x22,x21,eq
7102b5eae4  mov w5,#0x43
7102b5eae8  add x0,sp,#0xe0
7102b5eaec  sub x19,x29,#0xb0
7102b5eaf0  bl 0x7102b5f110
7102b5eaf4  ldr x8,[x20]
7102b5eaf8  ldrb w9,[x8, #0x80]
7102b5eafc  cbz w9,0x7102b5eb84
7102b5eb00  ldr x0,[x8, #0x30]
7102b5eb04  ldrb w11,[sp, #0xe4]
7102b5eb08  cbz w11,0x7102b5eb68
7102b5eb0c  mov w9,#0x5
7102b5eb10  add x10,sp,#0xe0
7102b5eb14  mov x8,xzr
7102b5eb18  orr x10,x10,x9
7102b5eb1c  mov w9,#0xffffffff
7102b5eb20  orr x12,xzr,#0x100000000
7102b5eb24  adrp x13,0x7104754000
7102b5eb28  add x13,x13,#0x84
7102b5eb2c  and w11,w11,#0xff
7102b5eb30  sub w14,w11,#0x41
7102b5eb34  add w15,w11,#0x20
7102b5eb38  cmp w14,#0x1a
7102b5eb3c  csel w11,w15,w11,cc
7102b5eb40  eor w11,w11,w9
7102b5eb44  and w11,w11,#0xff
7102b5eb48  ldr w11,[x13, w11, UXTW #0x2]
7102b5eb4c  eor w9,w11,w9, LSR #0x8
7102b5eb50  ldrb w11,[x10], #0x1
7102b5eb54  add x8,x8,x12
7102b5eb58  cbnz w11,0x7102b5eb2c
7102b5eb5c  mvn w9,w9
7102b5eb60  and x8,x8,#0xff00000000
7102b5eb64  b 0x7102b5eb70
7102b5eb68  mov x9,xzr
7102b5eb6c  mov x8,xzr
7102b5eb70  orr x1,x8,x9
7102b5eb74  ldr x8,[x0]
7102b5eb78  ldr x8,[x8, #0x180]
7102b5eb7c  mov w2,#0x1
7102b5eb80  blr x8
7102b5eb84  movi v0.2D,#0x0
7102b5eb88  ldr q2,[sp, #0x80]
7102b5eb8c  mov v1.16B,v0.16B
7102b5eb90  mov v1.S[0x0],v2.S[0x0]
7102b5eb94  ldr q2,[x20, #0x10]
7102b5eb98  str q1,[x20, #0x20]
7102b5eb9c  fadd v1.4S,v2.4S,v1.4S
7102b5eba0  mov w0,wzr
7102b5eba4  str q1,[sp, #0x80]
7102b5eba8  bl 0x71003d7950
7102b5ebac  adrp x8,0x7104468000
7102b5ebb0  ldr q1,[x8, #0x1b0]
7102b5ebb4  adrp x8,0x7104465000
7102b5ebb8  ldr d2,[x8, #0x310]
7102b5ebbc  adrp x8,0x7104465000
7102b5ebc0  and v3.16B,v0.16B,v1.16B
7102b5ebc4  tbl v4.8B,{v3.16B},v2.8B
7102b5ebc8  ldr d2,[x8, #0x1e8]
7102b5ebcc  adrp x8,0x7104465000
7102b5ebd0  ldr d5,[x8, #0x2f8]
7102b5ebd4  ext v1.8B,v3.8B,v3.8B,0x4
7102b5ebd8  tbl v2.8B,{v3.16B},v2.8B
7102b5ebdc  mov v1.D[0x1],v4.D[0x0]
7102b5ebe0  tbl v5.8B,{v3.16B},v5.8B
7102b5ebe4  mov v2.D[0x1],v5.D[0x0]
7102b5ebe8  adrp x8,0x7104466000
7102b5ebec  fmul v1.4S,v1.4S,v1.4S
7102b5ebf0  sub x1,x29,#0xb0
7102b5ebf4  fadd v1.4S,v1.4S,v1.4S
7102b5ebf8  fmul v2.4S,v2.4S,v2.4S
7102b5ebfc  fadd v2.4S,v2.4S,v2.4S
7102b5ec00  fadd v1.4S,v2.4S,v1.4S
7102b5ec04  ldr q2,[x8, #0x2b0]
7102b5ec08  adrp x8,0x7104465000
7102b5ec0c  ldr d6,[x8, #0x5f8]
7102b5ec10  tbl v6.8B,{v3.16B},v6.8B
7102b5ec14  fsub v1.4S,v2.4S,v1.4S
7102b5ec18  adrp x8,0x7104465000
7102b5ec1c  mov v6.D[0x1],v4.D[0x0]
7102b5ec20  fmul v4.4S,v6.4S,v3.4S
7102b5ec24  ldr d6,[x8, #0x2a0]
7102b5ec28  fadd v4.4S,v4.4S,v4.4S
7102b5ec2c  tbl v3.8B,{v3.16B},v6.8B
7102b5ec30  mov v3.D[0x1],v5.D[0x0]
7102b5ec34  adrp x8,0x7104465000
7102b5ec38  fmul v0.4S,v3.4S,v0.S[0x3]
7102b5ec3c  fadd v0.4S,v0.4S,v0.4S
7102b5ec40  fadd v5.4S,v4.4S,v0.4S
7102b5ec44  fsub v6.4S,v4.4S,v0.4S
7102b5ec48  ldr d0,[x8, #0x3e8]
7102b5ec4c  adrp x8,0x7104465000
7102b5ec50  tbl v2.8B,{v5.16B,v6.16B},v0.8B
7102b5ec54  ldr d0,[x8, #0x378]
7102b5ec58  adrp x8,0x7104465000
7102b5ec5c  tbl v0.8B,{v5.16B,v6.16B},v0.8B
7102b5ec60  mov v2.D[0x1],v0.D[0x0]
7102b5ec64  ldr d0,[x8, #0x628]
7102b5ec68  adrp x8,0x7104465000
7102b5ec6c  tbl v4.8B,{v5.16B,v6.16B},v0.8B
7102b5ec70  ldr d0,[x8, #0x1f0]
7102b5ec74  adrp x8,0x7104465000
7102b5ec78  tbl v0.8B,{v5.16B,v6.16B},v0.8B
7102b5ec7c  mov v4.D[0x1],v0.D[0x0]
7102b5ec80  ldr d0,[x8, #0x250]
7102b5ec84  adrp x8,0x7104465000
7102b5ec88  ldr d5,[x8, #0x498]
7102b5ec8c  adrp x8,0x7104465000
7102b5ec90  mov v3.16B,v1.16B
7102b5ec94  tbl v0.8B,{v3.16B,v4.16B},v0.8B
7102b5ec98  tbl v5.8B,{v3.16B,v4.16B},v5.8B
7102b5ec9c  mov v0.D[0x1],v5.D[0x0]
7102b5eca0  ldr d5,[x8, #0x1c0]
7102b5eca4  adrp x8,0x7104465000
7102b5eca8  ldr d6,[x8, #0x180]
7102b5ecac  adrp x8,0x7104465000
7102b5ecb0  tbl v5.8B,{v3.16B,v4.16B},v5.8B
7102b5ecb4  tbl v3.8B,{v3.16B,v4.16B},v6.8B
7102b5ecb8  mov v5.D[0x1],v3.D[0x0]
7102b5ecbc  ldr d3,[x8, #0x298]
7102b5ecc0  adrp x8,0x7104465000
7102b5ecc4  ldr d4,[x8, #0x188]
7102b5ecc8  tbl v3.8B,{v1.16B,v2.16B},v3.8B
7102b5eccc  tbl v1.8B,{v1.16B,v2.16B},v4.8B
7102b5ecd0  ldr q4,[sp, #0x80]
7102b5ecd4  mov v3.D[0x1],v1.D[0x0]
7102b5ecd8  ldr q1,[x20, #0x30]
7102b5ecdc  fmul v0.4S,v0.4S,v1.S[0x0]
7102b5ece0  fmul v2.4S,v5.4S,v1.S[0x1]
7102b5ece4  fmul v1.4S,v3.4S,v1.S[0x2]
7102b5ece8  fmov s3,0x3f800000
7102b5ecec  stp q0,q2,[x19]
7102b5ecf0  mov v4.S[0x3],v3.S[0x0]
7102b5ecf4  stp q1,q4,[x19, #0x20]
7102b5ecf8  ldr x19,[x20]
7102b5ecfc  ldr x0,[x19, #0x30]
7102b5ed00  ldr x8,[x0]
7102b5ed04  ldr x8,[x8, #0x148]
7102b5ed08  blr x8
7102b5ed0c  ldr x19,[x19, #0x78]
7102b5ed10  cbz x19,0x7102b5ed7c
7102b5ed14  ldur x8,[x29, #-0x98]
7102b5ed18  str x8,[sp, #0xf8]
7102b5ed1c  ldur x8,[x29, #-0xa0]
7102b5ed20  str x8,[sp, #0xf0]
7102b5ed24  ldur x8,[x29, #-0xa8]
7102b5ed28  str x8,[sp, #0xe8]
7102b5ed2c  ldur x8,[x29, #-0xb0]
7102b5ed30  str x8,[sp, #0xe0]
7102b5ed34  ldur x8,[x29, #-0x78]
7102b5ed38  str x8,[sp, #0x118]
7102b5ed3c  ldur x8,[x29, #-0x80]
7102b5ed40  str x8,[sp, #0x110]
7102b5ed44  ldur x8,[x29, #-0x88]
7102b5ed48  str x8,[sp, #0x108]
7102b5ed4c  ldur x8,[x29, #-0x90]
7102b5ed50  str x8,[sp, #0x100]
7102b5ed54  ldr x8,[x19, #0x8]
7102b5ed58  ldrb w9,[x8, #0xa8]
7102b5ed5c  cbz w9,0x7102b5ed74
7102b5ed60  ldr x0,[x8, #0x48]
7102b5ed64  ldr x8,[x0]
7102b5ed68  ldr x8,[x8, #0x20]
7102b5ed6c  add x1,sp,#0xe0
7102b5ed70  blr x8
7102b5ed74  mov w8,#0x1
7102b5ed78  strb w8,[x19, #0x20]
7102b5ed7c  ldr x0,[sp, #0x98]
7102b5ed80  cbz x0,0x7102b5ed8c
7102b5ed84  str x0,[sp, #0xa0]
7102b5ed88  bl 0x710392eb40
7102b5ed8c  ldr x0,[sp, #0xb0]
7102b5ed90  cbz x0,0x7102b5eda0
7102b5ed94  ldr x8,[sp, #0x28]
7102b5ed98  str x0,[x8]
7102b5ed9c  bl 0x710392eb40
7102b5eda0  ldr x0,[sp, #0xc8]
7102b5eda4  cbz x0,0x7102b5edb0
7102b5eda8  str x0,[sp, #0xd0]
7102b5edac  bl 0x710392eb40
7102b5edb0  ldur x0,[x29, #-0xf0]
7102b5edb4  cbz x0,0x7102b5edc0
7102b5edb8  stur x0,[x29, #-0xe8]
7102b5edbc  bl 0x710392eb40
7102b5edc0  add sp,sp,#0x1d0
7102b5edc4  ldp x29,x30,[sp, #0x60]
7102b5edc8  ldp x20,x19,[sp, #0x50]
7102b5edcc  ldp x22,x21,[sp, #0x40]
7102b5edd0  ldp x24,x23,[sp, #0x30]
7102b5edd4  ldp x26,x25,[sp, #0x20]
7102b5edd8  ldp x28,x27,[sp, #0x10]
7102b5eddc  ldp d9,d8,[sp], #0x70
7102b5ede0  ret
7102b5ede4  adrp x0,0x7105314000
7102b5ede8  add x0,x0,#0x4d8
7102b5edec  bl 0x71039c06b0
7102b5edf0  cbz w0,0x7102b5ba28
7102b5edf4  bl 0x7101764000
7102b5edf8  adrp x0,0x7101763000
7102b5edfc  add x0,x0,#0xc40
7102b5ee00  adrp x1,0x71052c5000
7102b5ee04  add x1,x1,#0x180
7102b5ee08  adrp x2,0x7104f17000
7102b5ee0c  add x2,x2,#0x0
7102b5ee10  bl 0x71000001c0
7102b5ee14  adrp x0,0x7105314000
7102b5ee18  add x0,x0,#0x4d8
7102b5ee1c  bl 0x71039c06c0
7102b5ee20  b 0x7102b5ba28
7102b5ee24  ldr x0,[sp, #0x58]
7102b5ee28  bl 0x71039c0c00
7102b5ee2c  bl 0x71039c2650
7102b5ee30  mov x0,x21
7102b5ee34  bl 0x71039c0c00
7102b5ee38  add x0,sp,#0xe0
7102b5ee3c  bl 0x71039c0c00
7102b5ee40  bl 0x71039c0c00
7102b5ee44  sub x0,x29,#0xf0
7102b5ee48  bl 0x71039c0c00
7102b5ee4c  ldr x0,[sp, #0x20]
7102b5ee50  bl 0x71039c0c00
7102b5ee54  add x0,sp,#0xb0
7102b5ee58  bl 0x71039c0c00
7102b5ee5c  add x0,sp,#0x98
7102b5ee60  bl 0x71039c0c00
7102b5ee64  add x0,sp,#0xc8
7102b5ee68  bl 0x71039c0c00
7102b5ee6c  ldr x0,[sp, #0x48]
7102b5ee70  bl 0x71039c0c00
