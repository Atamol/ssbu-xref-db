// addr:      710148bc30
// offset:    0x148bc30
// name:      FUN_710148bc30
// mangled:   
// size:      792

710148bc30  sub sp,sp,#0x60
710148bc34  str d8,[sp, #0x30]
710148bc38  str x21,[sp, #0x38]
710148bc3c  stp x20,x19,[sp, #0x40]
710148bc40  stp x29,x30,[sp, #0x50]
710148bc44  add x29,sp,#0x50
710148bc48  ldr w8,[x0, #0x1dc]
710148bc4c  mov x19,x0
710148bc50  cbz w8,0x710148bcf8
710148bc54  adrp x8,0x7105329000
710148bc58  ldr x8,[x8, #0xf98]
710148bc5c  ldr x8,[x8]
710148bc60  ldr x8,[x8, #0x50]
710148bc64  ldr x8,[x8, #0x150]
710148bc68  ldr w9,[x8, #0x108]
710148bc6c  cmp w9,#0x8
710148bc70  b.ne 0x710148bf2c
710148bc74  ldr w9,[x8, #0x118]
710148bc78  cmn w9,#0x1
710148bc7c  b.ne 0x710148bcdc
710148bc80  ldr w9,[x8, #0x124]
710148bc84  ldr w10,[x8, #0x120]
710148bc88  and w9,w9,#0xf
710148bc8c  ldr w8,[x8, #0x11c]
710148bc90  and w8,w8,w10
710148bc94  cmn w8,#0x1
710148bc98  ccmp w9,#0xf,#0x0,eq
710148bc9c  b.ne 0x710148bcdc
710148bca0  ldr x8,[x19, #0x1f0]
710148bca4  ldr x8,[x8, #0x80]
710148bca8  fmov s8,0x3f800000
710148bcac  mov v0.16B,v8.16B
710148bcb0  adrp x1,0x71042f8000
710148bcb4  add x1,x1,#0x76c
710148bcb8  ldr x0,[x8, #0x20]
710148bcbc  bl 0x7103778300
710148bcc0  ldr x8,[x19, #0x1f0]
710148bcc4  ldr x8,[x8, #0x80]
710148bcc8  ldr x0,[x8, #0x20]
710148bccc  mov v0.16B,v8.16B
710148bcd0  adrp x1,0x71042c5000
710148bcd4  add x1,x1,#0x289
710148bcd8  bl 0x7103778300
710148bcdc  ldrsw x8,[x19, #0x1d4]
710148bce0  cmp w8,#0x13
710148bce4  b.cs 0x710148bf44
710148bce8  add x8,x19,x8, LSL #0x2
710148bcec  mov w9,#0xb
710148bcf0  str w9,[x8, #0x188]
710148bcf4  b 0x710148bf2c
710148bcf8  mov w8,#0x1
710148bcfc  strb w8,[x19, #0x1fb]
710148bd00  ldrb w8,[x19, #0x1f9]
710148bd04  sub w8,w8,#0x1
710148bd08  strb w8,[x19, #0x1f9]
710148bd0c  adrp x8,0x7105314000
710148bd10  ldr x8,[x8, #0x510]
710148bd14  ldr x8,[x8]
710148bd18  ldr x8,[x8, #0xd8]
710148bd1c  ldr x8,[x8]
710148bd20  ldr x8,[x8]
710148bd24  ldrb w9,[x8, #0xb]
710148bd28  cbz w9,0x710148bd34
710148bd2c  sub w9,w9,#0x1
710148bd30  strb w9,[x8, #0xb]
710148bd34  mov x0,x19
710148bd38  bl 0x710148d4e0
710148bd3c  ldr x8,[x19, #0x1f0]
710148bd40  ldr x20,[x8, #0x80]
710148bd44  fmov s8,0x3f800000
710148bd48  mov v0.16B,v8.16B
710148bd4c  ldr x0,[x20, #0x20]
710148bd50  adrp x1,0x7104308000
710148bd54  add x1,x1,#0x8f6
710148bd58  add x19,x20,#0x18
710148bd5c  bl 0x7103778300
710148bd60  ldr x0,[x20, #0x20]
710148bd64  mov v0.16B,v8.16B
710148bd68  adrp x1,0x710436c000
710148bd6c  add x1,x1,#0x86f
710148bd70  bl 0x7103778300
710148bd74  adrp x1,0x71043f0000
710148bd78  add x1,x1,#0xd84
710148bd7c  add x8,sp,#0x8
710148bd80  mov x0,x19
710148bd84  bl 0x7103776640
710148bd88  adrp x1,0x710424f000
710148bd8c  add x1,x1,#0x9b3
710148bd90  add x8,sp,#0x20
710148bd94  add x0,sp,#0x8
710148bd98  bl 0x7103776910
710148bd9c  adrp x1,0x7104422000
710148bda0  add x1,x1,#0x7c0
710148bda4  add x0,sp,#0x20
710148bda8  bl 0x710377a120
710148bdac  ldr x0,[sp, #0x28]
710148bdb0  adrp x21,0x710523d000
710148bdb4  add x21,x21,#0x9a8
710148bdb8  stp x21,xzr,[sp, #0x20]
710148bdbc  cbz x0,0x710148bdc4
710148bdc0  bl 0x710392eb40
710148bdc4  ldr x0,[x20]
710148bdc8  mov x1,#0x5401
710148bdcc  movk x1,#0x3f2a, LSL #16
710148bdd0  movk x1,#0xff20, LSL #32
710148bdd4  movk x1,#0x2dff, LSL #48
710148bdd8  bl 0x7103240590
710148bddc  mov x20,x0
710148bde0  adrp x1,0x710432a000
710148bde4  add x1,x1,#0x50a
710148bde8  add x8,sp,#0x20
710148bdec  add x0,sp,#0x8
710148bdf0  bl 0x7103776910
710148bdf4  ldr x19,[sp, #0x28]
710148bdf8  mov x0,x19
710148bdfc  mov x1,x20
710148be00  bl 0x7103778b80
710148be04  stp x21,xzr,[sp, #0x20]
710148be08  cbz x19,0x710148be14
710148be0c  mov x0,x19
710148be10  bl 0x710392eb40
710148be14  ldr x19,[sp, #0x10]
710148be18  fmov s0,0x3f800000
710148be1c  adrp x1,0x7104421000
710148be20  add x1,x1,#0x55
710148be24  mov x0,x19
710148be28  bl 0x7103778300
710148be2c  adrp x8,0x710523d000
710148be30  add x8,x8,#0x988
710148be34  stp x8,xzr,[sp, #0x8]
710148be38  cbz x19,0x710148be54
710148be3c  ldr x0,[x19, #0x18]
710148be40  stp x21,xzr,[x19, #0x10]
710148be44  cbz x0,0x710148be4c
710148be48  bl 0x710392eb40
710148be4c  mov x0,x19
710148be50  bl 0x710392eb40
710148be54  adrp x8,0x7105329000
710148be58  ldr x8,[x8, #0xf98]
710148be5c  ldr x8,[x8]
710148be60  ldr x8,[x8, #0x50]
710148be64  ldr x8,[x8, #0x150]
710148be68  ldr w9,[x8, #0x108]
710148be6c  cmp w9,#0x7
710148be70  b.eq 0x710148be8c
710148be74  ldrsw x9,[x8, #0x104]
710148be78  cmp w9,#0x13
710148be7c  b.cs 0x710148bf44
710148be80  add x8,x8,x9, LSL #0x2
710148be84  orr w9,wzr,#0x7
710148be88  str w9,[x8, #0xb8]
710148be8c  adrp x8,0x71052b9000
710148be90  mov w9,#0x56
710148be94  ldr x8,[x8, #0x4f8]
710148be98  str x9,[sp, #0x10]
710148be9c  mov w9,#0x5
710148bea0  str w9,[sp, #0x18]
710148bea4  adrp x9,0x7105069000
710148bea8  add x9,x9,#0x478
710148beac  str x9,[sp, #0x8]
710148beb0  mov w9,#0x1
710148beb4  strb w9,[sp, #0x1c]
710148beb8  ldr x19,[x8]
710148bebc  ldr w8,[x19]
710148bec0  cmp w8,#0x57
710148bec4  b.cc 0x710148bf2c
710148bec8  ldr w8,[x19, #0x18]
710148becc  ldr x9,[x19, #0x8]
710148bed0  add w8,w8,#0x1
710148bed4  str w8,[x19, #0x18]
710148bed8  ldr x21,[x9, #0x818]
710148bedc  add x20,x9,#0x818
710148bee0  cmp x20,x21
710148bee4  b.eq 0x710148bf10
710148bee8  ldr x0,[x21, #0x10]
710148beec  cbz x0,0x710148bf00
710148bef0  ldr x8,[x0]
710148bef4  ldr x8,[x8, #0x18]
710148bef8  add x1,sp,#0x8
710148befc  blr x8
710148bf00  ldr x21,[x21]
710148bf04  cmp x20,x21
710148bf08  b.ne 0x710148bee8
710148bf0c  ldr w8,[x19, #0x18]
710148bf10  subs w8,w8,#0x1
710148bf14  str w8,[x19, #0x18]
710148bf18  b.ne 0x710148bf2c
710148bf1c  ldr w8,[x19, #0x1c]
710148bf20  cbz w8,0x710148bf2c
710148bf24  mov x0,x19
710148bf28  bl 0x71037ae770
710148bf2c  ldr d8,[sp, #0x30]
710148bf30  ldp x29,x30,[sp, #0x50]
710148bf34  ldp x20,x19,[sp, #0x40]
710148bf38  ldr x21,[sp, #0x38]
710148bf3c  add sp,sp,#0x60
710148bf40  ret
710148bf44  bl 0x71039c2650
