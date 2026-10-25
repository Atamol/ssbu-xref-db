// addr:      7101dbbc70
// offset:    0x1dbbc70
// name:      FUN_7101dbbc70
// mangled:   
// size:      672

7101dbbc70  sub sp,sp,#0x60
7101dbbc74  str d8,[sp, #0x20]
7101dbbc78  str x23,[sp, #0x28]
7101dbbc7c  stp x22,x21,[sp, #0x30]
7101dbbc80  stp x20,x19,[sp, #0x40]
7101dbbc84  stp x29,x30,[sp, #0x50]
7101dbbc88  add x29,sp,#0x50
7101dbbc8c  ldr w8,[x0, #0xc4]
7101dbbc90  mov x19,x0
7101dbbc94  cbz w8,0x7101dbbd44
7101dbbc98  ldr x8,[x19, #0x2e8]
7101dbbc9c  ldr x9,[x19, #0x2e0]
7101dbbca0  cmp x8,x9
7101dbbca4  b.eq 0x7101dbbef4
7101dbbca8  ldr x8,[x19, #0xe0]
7101dbbcac  ldr x0,[x8, #0x8]
7101dbbcb0  cbz x0,0x7101dbbd7c
7101dbbcb4  ldrb w10,[x19, #0x2d8]
7101dbbcb8  adrp x8,0x710434a000
7101dbbcbc  add x8,x8,#0x7d0
7101dbbcc0  adrp x9,0x7104421000
7101dbbcc4  add x9,x9,#0x55
7101dbbcc8  cmp w10,#0x0
7101dbbccc  csel x1,x9,x8,eq
7101dbbcd0  bl 0x71037964b0
7101dbbcd4  cbz x0,0x7101dbbd7c
7101dbbcd8  ldr x8,[x0]
7101dbbcdc  ldr x8,[x8, #0x198]
7101dbbce0  blr x8
7101dbbce4  adrp x9,0x7104472000
7101dbbce8  ldr s1,[x9, #0xd38]
7101dbbcec  ldr w8,[x19, #0x2f8]
7101dbbcf0  fcmp s0,s1
7101dbbcf4  add x21,x19,#0x2f8
7101dbbcf8  ccmp w8,#0x1,#0x0,gt
7101dbbcfc  b.ne 0x7101dbbd84
7101dbbd00  ldr x20,[x19, #0x2e0]
7101dbbd04  ldr x19,[x19, #0x2e8]
7101dbbd08  cmp x20,x19
7101dbbd0c  b.eq 0x7101dbbd3c
7101dbbd10  mov w22,#0x2
7101dbbd14  ldr w8,[x20, #0x10]
7101dbbd18  cbz w8,0x7101dbbd30
7101dbbd1c  ldrb w1,[x20, #0x14]
7101dbbd20  ldrb w2,[x20, #0x15]
7101dbbd24  mov x0,x20
7101dbbd28  bl 0x71025b1740
7101dbbd2c  str w22,[x20, #0x10]
7101dbbd30  add x20,x20,#0x18
7101dbbd34  cmp x19,x20
7101dbbd38  b.ne 0x7101dbbd14
7101dbbd3c  mov w8,#0x2
7101dbbd40  b 0x7101dbbde4
7101dbbd44  ldr x8,[x19, #0xd0]
7101dbbd48  ldr x0,[x8]
7101dbbd4c  mov w2,#0x3000
7101dbbd50  movk w2,#0x2, LSL #16
7101dbbd54  mov w1,#0x1
7101dbbd58  bl 0x7103775dc0
7101dbbd5c  ldrb w8,[x19, #0x2d8]
7101dbbd60  ldr x0,[x19, #0xe0]
7101dbbd64  cbz w8,0x7101dbbdec
7101dbbd68  fmov s0,0x3f800000
7101dbbd6c  adrp x1,0x710434a000
7101dbbd70  add x1,x1,#0x7d0
7101dbbd74  bl 0x7103778300
7101dbbd78  b 0x7101dbbedc
7101dbbd7c  ldr w8,[x19, #0x2f8]
7101dbbd80  add x21,x19,#0x2f8
7101dbbd84  cmp w8,#0x2
7101dbbd88  b.ne 0x7101dbbef4
7101dbbd8c  ldr x20,[x19, #0x2e0]
7101dbbd90  ldr x19,[x19, #0x2e8]
7101dbbd94  cmp x20,x19
7101dbbd98  b.eq 0x7101dbbde0
7101dbbd9c  mov w23,#0x1
7101dbbda0  orr w22,wzr,#0x3
7101dbbda4  ldr w8,[x20, #0x10]
7101dbbda8  cmp w8,#0x2
7101dbbdac  b.ne 0x7101dbbdd0
7101dbbdb0  ldrb w1,[x20, #0x14]
7101dbbdb4  ldrb w2,[x20, #0x15]
7101dbbdb8  mov x0,x20
7101dbbdbc  bl 0x71025b18c0
7101dbbdc0  tbz w0,#0x0,0x7101dbbdcc
7101dbbdc4  str w22,[x20, #0x10]
7101dbbdc8  b 0x7101dbbdd0
7101dbbdcc  mov w23,wzr
7101dbbdd0  add x20,x20,#0x18
7101dbbdd4  cmp x19,x20
7101dbbdd8  b.ne 0x7101dbbda4
7101dbbddc  tbz w23,#0x0,0x7101dbbef4
7101dbbde0  orr w8,wzr,#0x3
7101dbbde4  str w8,[x21]
7101dbbde8  b 0x7101dbbef4
7101dbbdec  fmov s8,0x3f800000
7101dbbdf0  mov v0.16B,v8.16B
7101dbbdf4  adrp x1,0x7104421000
7101dbbdf8  add x1,x1,#0x55
7101dbbdfc  add x21,x19,#0xd8
7101dbbe00  bl 0x7103778300
7101dbbe04  adrp x1,0x7104454000
7101dbbe08  add x1,x1,#0xf18
7101dbbe0c  add x8,sp,#0x10
7101dbbe10  mov x0,x21
7101dbbe14  bl 0x7103776640
7101dbbe18  ldr x20,[sp, #0x18]
7101dbbe1c  mov v0.16B,v8.16B
7101dbbe20  adrp x22,0x710432a000
7101dbbe24  add x22,x22,#0x70e
7101dbbe28  mov x1,x22
7101dbbe2c  mov x0,x20
7101dbbe30  bl 0x7103778300
7101dbbe34  mov v0.16B,v8.16B
7101dbbe38  adrp x23,0x71043f0000
7101dbbe3c  add x23,x23,#0xfa9
7101dbbe40  mov x0,x20
7101dbbe44  mov x1,x23
7101dbbe48  bl 0x7103778300
7101dbbe4c  adrp x1,0x71042d6000
7101dbbe50  add x1,x1,#0x714
7101dbbe54  mov x8,sp
7101dbbe58  mov x0,x21
7101dbbe5c  bl 0x7103776640
7101dbbe60  ldr x21,[sp, #0x8]
7101dbbe64  mov v0.16B,v8.16B
7101dbbe68  mov x1,x22
7101dbbe6c  mov x0,x21
7101dbbe70  bl 0x7103778300
7101dbbe74  mov v0.16B,v8.16B
7101dbbe78  mov x0,x21
7101dbbe7c  mov x1,x23
7101dbbe80  bl 0x7103778300
7101dbbe84  adrp x22,0x710523d000
7101dbbe88  add x22,x22,#0x988
7101dbbe8c  stp x22,xzr,[sp]
7101dbbe90  cbz x21,0x7101dbbeb4
7101dbbe94  ldr x0,[x21, #0x18]
7101dbbe98  adrp x8,0x710523d000
7101dbbe9c  add x8,x8,#0x9a8
7101dbbea0  stp x8,xzr,[x21, #0x10]
7101dbbea4  cbz x0,0x7101dbbeac
7101dbbea8  bl 0x710392eb40
7101dbbeac  mov x0,x21
7101dbbeb0  bl 0x710392eb40
7101dbbeb4  stp x22,xzr,[sp, #0x10]
7101dbbeb8  cbz x20,0x7101dbbedc
7101dbbebc  ldr x0,[x20, #0x18]
7101dbbec0  adrp x8,0x710523d000
7101dbbec4  add x8,x8,#0x9a8
7101dbbec8  stp x8,xzr,[x20, #0x10]
7101dbbecc  cbz x0,0x7101dbbed4
7101dbbed0  bl 0x710392eb40
7101dbbed4  mov x0,x20
7101dbbed8  bl 0x710392eb40
7101dbbedc  ldr x8,[x19, #0x2e8]
7101dbbee0  ldr x9,[x19, #0x2e0]
7101dbbee4  cmp x8,x9
7101dbbee8  b.eq 0x7101dbbef4
7101dbbeec  mov w8,#0x1
7101dbbef0  str w8,[x19, #0x2f8]
7101dbbef4  ldr d8,[sp, #0x20]
7101dbbef8  ldp x29,x30,[sp, #0x50]
7101dbbefc  ldp x20,x19,[sp, #0x40]
7101dbbf00  ldr x23,[sp, #0x28]
7101dbbf04  ldp x22,x21,[sp, #0x30]
7101dbbf08  add sp,sp,#0x60
7101dbbf0c  ret
