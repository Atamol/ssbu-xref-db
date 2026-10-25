// addr:      710009bda0
// offset:    0x9bda0
// name:      FUN_710009bda0
// mangled:   
// size:      588

710009bda0  sub sp,sp,#0x90
710009bda4  stp x28,x27,[sp, #0x30]
710009bda8  stp x26,x25,[sp, #0x40]
710009bdac  stp x24,x23,[sp, #0x50]
710009bdb0  stp x22,x21,[sp, #0x60]
710009bdb4  stp x20,x19,[sp, #0x70]
710009bdb8  stp x29,x30,[sp, #0x80]
710009bdbc  add x29,sp,#0x80
710009bdc0  str x1,[x0, #0x10]
710009bdc4  mov x19,x0
710009bdc8  ldr x0,[x1, #0x20]
710009bdcc  str x0,[x19, #0x18]
710009bdd0  ldr x9,[x1, #0x28]
710009bdd4  str x9,[x19, #0x20]
710009bdd8  ldr x9,[x9, #0x18]
710009bddc  adrp x24,0x710436b000
710009bde0  add x24,x24,#0x515
710009bde4  adrp x8,0x7104329000
710009bde8  add x8,x8,#0x1fc
710009bdec  adrp x10,0x7104421000
710009bdf0  add x10,x10,#0x4ef
710009bdf4  str x9,[x19, #0x28]
710009bdf8  add x9,sp,#0x8
710009bdfc  stp x24,x8,[sp, #0x8]
710009be00  adrp x8,0x7104453000
710009be04  add x8,x8,#0xbbe
710009be08  stp x10,x8,[sp, #0x18]
710009be0c  adrp x8,0x71042f6000
710009be10  add x8,x8,#0xd76
710009be14  mov x1,x24
710009be18  mov x20,x2
710009be1c  add x25,x9,#0x8
710009be20  str x8,[sp, #0x28]
710009be24  bl 0x710009bff0
710009be28  mov x21,x0
710009be2c  mov x26,xzr
710009be30  mov w27,#0x40
710009be34  adrp x22,0x710438b000
710009be38  add x22,x22,#0xd30
710009be3c  adrp x23,0x710427f000
710009be40  add x23,x23,#0xb7f
710009be44  b 0x710009be54
710009be48  ldr x24,[x25, x26, LSL #0x0]
710009be4c  add x26,x26,#0x8
710009be50  add x27,x27,#0x4
710009be54  ldr x0,[x19, #0x18]
710009be58  mov x1,x24
710009be5c  bl 0x710009bff0
710009be60  mov x24,x0
710009be64  cmp x26,#0x20
710009be68  b.ne 0x710009be9c
710009be6c  cbnz x24,0x710009be9c
710009be70  ldrb w8,[x20, #0x14]
710009be74  cmp x8,#0xff
710009be78  b.eq 0x710009bf24
710009be7c  ldr x0,[x19, #0x18]
710009be80  ldr x9,[x0, #0x10]
710009be84  cbz x9,0x710009bf24
710009be88  add x8,x9,x8, LSL #0x4
710009be8c  ldr x8,[x8, #0x20]
710009be90  add x1,x8,#0x2
710009be94  bl 0x710009bff0
710009be98  mov x24,x0
710009be9c  cbz x24,0x710009bf24
710009bea0  ldr w28,[x24, #0x8]
710009bea4  cmp x26,#0x20
710009bea8  b.ne 0x710009bf40
710009beac  ldr x0,[x19, #0x18]
710009beb0  mov x1,x22
710009beb4  bl 0x710009bff0
710009beb8  cbz x0,0x710009bf54
710009bebc  ldr w8,[x0, #0x8]
710009bec0  cmp w28,w8
710009bec4  b.ne 0x710009bf84
710009bec8  cmp w28,#0x901
710009becc  mov w8,#0xb01
710009bed0  csel w8,w8,w28,eq
710009bed4  mov w9,#0x1201
710009bed8  cmp w8,w9
710009bedc  mov w9,#0x1501
710009bee0  csel w8,w9,w8,eq
710009bee4  mov w9,#0x1205
710009bee8  cmp w8,w9
710009beec  mov w9,#0x1505
710009bef0  csel w8,w9,w8,eq
710009bef4  mov w9,#0x1705
710009bef8  cmp w8,w9
710009befc  mov w9,#0x1905
710009bf00  csel w8,w9,w8,eq
710009bf04  cmp w8,#0x902
710009bf08  mov w9,#0xb02
710009bf0c  csel w8,w9,w8,eq
710009bf10  mov w9,#0x1202
710009bf14  cmp w8,w9
710009bf18  mov w9,#0x1502
710009bf1c  csel w28,w9,w8,eq
710009bf20  b 0x710009bf98
710009bf24  ldrb w8,[x21, #0xe]
710009bf28  add x9,x19,x27
710009bf2c  str w8,[x9, #0x14]
710009bf30  ldr w8,[x21, #0x8]
710009bf34  mov x24,x21
710009bf38  str w8,[x9]
710009bf3c  b 0x710009bfa4
710009bf40  add x8,x19,x27
710009bf44  str w28,[x8]
710009bf48  ldrb w9,[x24, #0xe]
710009bf4c  str w9,[x8, #0x14]
710009bf50  b 0x710009bfa4
710009bf54  ldrb w8,[x20, #0x15]
710009bf58  cmp x8,#0xff
710009bf5c  b.eq 0x710009bf98
710009bf60  ldr x0,[x19, #0x18]
710009bf64  ldr x9,[x0, #0x10]
710009bf68  cbz x9,0x710009bf98
710009bf6c  add x8,x9,x8, LSL #0x4
710009bf70  ldr x8,[x8, #0x20]
710009bf74  add x1,x8,#0x2
710009bf78  bl 0x710009bff0
710009bf7c  cbnz x0,0x710009bebc
710009bf80  b 0x710009bf98
710009bf84  ldr x8,[x19, #0x10]
710009bf88  ldr x8,[x8, #0x8]
710009bf8c  add x1,x8,#0x2
710009bf90  mov x0,x23
710009bf94  bl 0x7100093660
710009bf98  str w28,[x19, #0x50]
710009bf9c  ldrb w8,[x24, #0xe]
710009bfa0  str w8,[x19, #0x64]
710009bfa4  ldrh w8,[x24, #0xc]
710009bfa8  add x9,x19,x26
710009bfac  cmp x26,#0x20
710009bfb0  str x8,[x9, #0x68]
710009bfb4  b.ne 0x710009be48
710009bfb8  ldr x8,[x19, #0x28]
710009bfbc  ldr x0,[x8, #0x10]
710009bfc0  add x1,x19,#0x30
710009bfc4  bl 0x7100031a20
710009bfc8  ldp x29,x30,[sp, #0x80]
710009bfcc  mov w0,#0x1
710009bfd0  ldp x20,x19,[sp, #0x70]
710009bfd4  ldp x22,x21,[sp, #0x60]
710009bfd8  ldp x24,x23,[sp, #0x50]
710009bfdc  ldp x26,x25,[sp, #0x40]
710009bfe0  ldp x28,x27,[sp, #0x30]
710009bfe4  add sp,sp,#0x90
710009bfe8  ret
