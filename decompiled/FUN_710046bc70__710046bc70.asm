// addr:      710046bc70
// offset:    0x46bc70
// name:      FUN_710046bc70
// mangled:   
// size:      1112

710046bc70  sub sp,sp,#0x100
710046bc74  str x28,[sp, #0xa0]
710046bc78  stp x26,x25,[sp, #0xb0]
710046bc7c  stp x24,x23,[sp, #0xc0]
710046bc80  stp x22,x21,[sp, #0xd0]
710046bc84  stp x20,x19,[sp, #0xe0]
710046bc88  stp x29,x30,[sp, #0xf0]
710046bc8c  add x29,sp,#0xf0
710046bc90  ldrb w8,[x0, #0x49]
710046bc94  cbz w8,0x710046c040
710046bc98  ldr w8,[x0]
710046bc9c  mov x19,x0
710046bca0  cmp w8,#0x3
710046bca4  b.eq 0x710046c040
710046bca8  ldr x8,[x19, #0x40]
710046bcac  ldr w8,[x8, #0xc]
710046bcb0  and w8,w8,#0x7f
710046bcb4  cbz w8,0x710046c040
710046bcb8  orr x8,xzr,#0x3f8000003f800000
710046bcbc  stp x8,x8,[sp, #0x60]
710046bcc0  adrp x8,0x7105333000
710046bcc4  add x8,x8,#0xfc8
710046bcc8  ldarb w8,[x8]
710046bccc  add x21,sp,#0x60
710046bcd0  mov w23,w2
710046bcd4  mov w20,w1
710046bcd8  add x22,x21,#0x10
710046bcdc  tbz w8,#0x0,0x710046c060
710046bce0  adrp x8,0x7105333000
710046bce4  add x8,x8,#0xf80
710046bce8  add x21,x21,#0x20
710046bcec  ldp x9,x8,[x8]
710046bcf0  stp x9,x8,[x22]
710046bcf4  adrp x8,0x7105333000
710046bcf8  add x8,x8,#0xfd0
710046bcfc  ldarb w8,[x8]
710046bd00  tbz w8,#0x0,0x710046c090
710046bd04  adrp x8,0x7105333000
710046bd08  add x8,x8,#0xf90
710046bd0c  ldp x9,x8,[x8]
710046bd10  stp x9,x8,[x21]
710046bd14  orr x8,xzr,#0x3f8000003f800000
710046bd18  stp x8,x8,[sp, #0x90]
710046bd1c  ldr w8,[x19]
710046bd20  cmp w8,w20
710046bd24  csel w8,w8,w20,gt
710046bd28  cbz w8,0x710046c040
710046bd2c  add x9,sp,#0x60
710046bd30  add x20,x9,w8, UXTW  #0x4
710046bd34  orr w8,wzr,#0x3f800000
710046bd38  str w8,[x20, #0xc]
710046bd3c  ldr x8,[x19, #0x40]
710046bd40  ldrb w8,[x8, #0x84]
710046bd44  cbz w8,0x710046c040
710046bd48  adrp x25,0x7105335000
710046bd4c  ldr x26,[x25, #0xb00]
710046bd50  ldr w8,[x26, #0x538]
710046bd54  ldrb w22,[x26, #0x534]
710046bd58  add x24,x26,#0x500
710046bd5c  mov x0,x24
710046bd60  sub w9,w8,#0x1
710046bd64  cmp w9,#0x4
710046bd68  csel w21,w8,wzr,cc
710046bd6c  bl 0x71035908f0
710046bd70  ldr w8,[x26, #0x528]
710046bd74  mov w9,#0x68
710046bd78  madd x8,x8,x9,x24
710046bd7c  ldr w24,[x8, #0xc4]
710046bd80  mov w8,#0x1
710046bd84  lsl w9,w8,w23
710046bd88  ldr x8,[x25, #0xb00]
710046bd8c  ldr w10,[x8, #0x538]
710046bd90  and w11,w10,#0xfffffffe
710046bd94  cmp w11,#0x2
710046bd98  strb w9,[x8, #0x534]
710046bd9c  b.ne 0x710046bde4
710046bda0  cmp w10,#0x2
710046bda4  b.eq 0x710046bdc0
710046bda8  cmp w10,#0x3
710046bdac  b.ne 0x710046bdd0
710046bdb0  and w10,w9,#0xff
710046bdb4  add x10,x8,x10, LSL #0x5
710046bdb8  mov w11,#0x7f60
710046bdbc  b 0x710046bdd8
710046bdc0  and w10,w9,#0xff
710046bdc4  add x10,x8,x10, LSL #0x5
710046bdc8  mov w11,#0x5f60
710046bdcc  b 0x710046bdd8
710046bdd0  add x10,x8,x10, LSL #0x5
710046bdd4  mov w11,#0x5ec0
710046bdd8  movk w11,#0x6, LSL #16
710046bddc  add x10,x10,x11
710046bde0  str x10,[x8, #0x540]
710046bde4  and w9,w9,#0xff
710046bde8  orr w10,wzr,#0x3
710046bdec  str w10,[x8, #0x538]
710046bdf0  add x9,x8,x9, LSL #0x5
710046bdf4  mov w10,#0x7f60
710046bdf8  movk w10,#0x6, LSL #16
710046bdfc  add x9,x9,x10
710046be00  str x9,[x8, #0x540]
710046be04  mov w8,#0x20
710046be08  adrp x9,0x7104497000
710046be0c  add x9,x9,#0x77c
710046be10  mov w0,#0x10
710046be14  stp xzr,xzr,[sp]
710046be18  strb w8,[sp]
710046be1c  ldp x8,x9,[x9]
710046be20  mov w1,#0x20
710046be24  str xzr,[sp, #0x10]
710046be28  stur x9,[sp, #0x9]
710046be2c  stur x8,[sp, #0x1]
710046be30  strb wzr,[sp, #0x11]
710046be34  bl 0x710392e290
710046be38  cbnz x0,0x710046be80
710046be3c  adrp x8,0x7105332000
710046be40  ldr x0,[x8, #0xf00]
710046be44  cbz x0,0x710046be7c
710046be48  mov w8,#0x20
710046be4c  stur wzr,[x29, #-0x44]
710046be50  sub x1,x29,#0x44
710046be54  str x8,[sp, #0x48]
710046be58  ldr x8,[x0]
710046be5c  ldr x8,[x8, #0x30]
710046be60  add x2,sp,#0x48
710046be64  blr x8
710046be68  tbz w0,#0x0,0x710046be7c
710046be6c  mov w0,#0x10
710046be70  mov w1,#0x20
710046be74  bl 0x710392e290
710046be78  cbnz x0,0x710046be80
710046be7c  mov x0,xzr
710046be80  mov w8,#0x21
710046be84  adrp x9,0x7104431000
710046be88  add x9,x9,#0x9be
710046be8c  str x8,[sp, #0x48]
710046be90  mov w8,#0x19
710046be94  add x1,sp,#0x48
710046be98  stp x8,x0,[sp, #0x50]
710046be9c  ldp x8,x10,[x9]
710046bea0  ldr x9,[x9, #0x10]
710046bea4  str x8,[x0]
710046bea8  mov w8,#0x53
710046beac  strb w8,[x0, #0x18]
710046beb0  stp x10,x9,[x0, #0x8]
710046beb4  strb wzr,[x0, #0x19]
710046beb8  mov x0,sp
710046bebc  bl 0x710359e710
710046bec0  ldrb w8,[sp, #0x48]
710046bec4  tbz w8,#0x0,0x710046bed4
710046bec8  ldr x0,[sp, #0x58]
710046becc  cbz x0,0x710046bed4
710046bed0  bl 0x710392eb40
710046bed4  ldrb w8,[sp]
710046bed8  tbz w8,#0x0,0x710046bee8
710046bedc  ldr x0,[sp, #0x10]
710046bee0  cbz x0,0x710046bee8
710046bee4  bl 0x710392eb40
710046bee8  ldr x0,[x19, #0x40]
710046beec  ldr x8,[x0]
710046bef0  ldr x8,[x8, #0x18]
710046bef4  fmov s0,0x3f800000
710046bef8  fmov s1,wzr
710046befc  mov x1,x20
710046bf00  mov w2,wzr
710046bf04  blr x8
710046bf08  mov w0,w21
710046bf0c  mov w1,w22
710046bf10  bl 0x710359e5e0
710046bf14  mov x0,sp
710046bf18  add x1,sp,#0x48
710046bf1c  str xzr,[sp]
710046bf20  stp xzr,xzr,[sp, #0x8]
710046bf24  str xzr,[sp, #0x48]
710046bf28  stp xzr,xzr,[sp, #0x50]
710046bf2c  bl 0x710359e710
710046bf30  ldrb w8,[sp, #0x48]
710046bf34  tbz w8,#0x0,0x710046bf44
710046bf38  ldr x0,[sp, #0x58]
710046bf3c  cbz x0,0x710046bf44
710046bf40  bl 0x710392eb40
710046bf44  ldrb w8,[sp]
710046bf48  tbz w8,#0x0,0x710046bf58
710046bf4c  ldr x0,[sp, #0x10]
710046bf50  cbz x0,0x710046bf58
710046bf54  bl 0x710392eb40
710046bf58  ldr x0,[x25, #0xb00]
710046bf5c  tbnz w24,#0x1f,0x710046c010
710046bf60  mov w8,#0xcdd0
710046bf64  movk w8,#0x4d, LSL #16
710046bf68  add x8,x0,x8
710046bf6c  mov w10,#0xcdd8
710046bf70  movk w10,#0x4d, LSL #16
710046bf74  and x9,x24,#0x7
710046bf78  ldr x11,[x0, x10, LSL #0x0]
710046bf7c  ldr x10,[x8]
710046bf80  sub x11,x11,x10
710046bf84  asr x11,x11,#0x5
710046bf88  cmp x11,x9
710046bf8c  b.ls 0x710046c0c0
710046bf90  add x8,x10,x9, LSL #0x5
710046bf94  ldr x9,[x8, #0x10]
710046bf98  cbz x9,0x710046bfd8
710046bf9c  ldr x9,[x9]
710046bfa0  ldr x10,[x8, #0x18]
710046bfa4  cmp x9,x10
710046bfa8  b.ne 0x710046bfd8
710046bfac  ldr x8,[x8, #0x8]
710046bfb0  mov w9,#0xcdb8
710046bfb4  movk w9,#0x4d, LSL #16
710046bfb8  str x8,[x0, x9, LSL #0x0]
710046bfbc  cbz x8,0x710046bfe4
710046bfc0  ldr x8,[x8, #0x8]
710046bfc4  mov w9,#0xcdc0
710046bfc8  movk w9,#0x4d, LSL #16
710046bfcc  str x8,[x0, x9, LSL #0x0]
710046bfd0  ldr x8,[x8]
710046bfd4  b 0x710046bff4
710046bfd8  mov w8,#0xcdb8
710046bfdc  movk w8,#0x4d, LSL #16
710046bfe0  str xzr,[x0, x8, LSL #0x0]
710046bfe4  mov w9,#0xcdc0
710046bfe8  movk w9,#0x4d, LSL #16
710046bfec  mov x8,xzr
710046bff0  str xzr,[x0, x9, LSL #0x0]
710046bff4  mov w9,#0xcdc8
710046bff8  movk w9,#0x4d, LSL #16
710046bffc  str x8,[x0, x9, LSL #0x0]
710046c000  ldr w8,[x0, #0x52c]
710046c004  cmp w8,w24
710046c008  b.eq 0x710046c010
710046c00c  str w24,[x0, #0x52c]
710046c010  adrp x8,0x7104468000
710046c014  adrp x9,0x710446a000
710046c018  ldr q1,[x9, #0x360]
710046c01c  ldr q0,[x8, #0xca0]
710046c020  adrp x10,0x7104465000
710046c024  adrp x8,0x710446a000
710046c028  stp q0,q1,[sp]
710046c02c  ldr q0,[x10, #0x6b0]
710046c030  ldr q1,[x8, #0x350]
710046c034  mov x1,sp
710046c038  stp q0,q1,[sp, #0x20]
710046c03c  bl 0x7103594510
710046c040  ldp x29,x30,[sp, #0xf0]
710046c044  ldr x28,[sp, #0xa0]
710046c048  ldp x20,x19,[sp, #0xe0]
710046c04c  ldp x22,x21,[sp, #0xd0]
710046c050  ldp x24,x23,[sp, #0xc0]
710046c054  ldp x26,x25,[sp, #0xb0]
710046c058  add sp,sp,#0x100
710046c05c  ret
710046c060  adrp x0,0x7105333000
710046c064  add x0,x0,#0xfc8
710046c068  bl 0x71039c06b0
710046c06c  cbz w0,0x710046bce0
710046c070  adrp x8,0x7105333000
710046c074  add x8,x8,#0xf80
710046c078  orr x9,xzr,#0x3f80000000000000
710046c07c  adrp x0,0x7105333000
710046c080  add x0,x0,#0xfc8
710046c084  stp x9,x9,[x8]
710046c088  bl 0x71039c06c0
710046c08c  b 0x710046bce0
710046c090  adrp x0,0x7105333000
710046c094  add x0,x0,#0xfd0
710046c098  bl 0x71039c06b0
710046c09c  cbz w0,0x710046bd04
710046c0a0  adrp x8,0x7105333000
710046c0a4  add x8,x8,#0xf90
710046c0a8  orr x9,xzr,#0x3f8000003f800000
710046c0ac  adrp x0,0x7105333000
710046c0b0  add x0,x0,#0xfd0
710046c0b4  stp xzr,x9,[x8]
710046c0b8  bl 0x71039c06c0
710046c0bc  b 0x710046bd04
710046c0c0  mov x0,x8
710046c0c4  bl 0x71039c1330
