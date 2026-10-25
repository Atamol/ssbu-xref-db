// addr:      710233bbc0
// offset:    0x233bbc0
// name:      FUN_710233bbc0
// mangled:   
// size:      1080

710233bbc0  sub sp,sp,#0x50
710233bbc4  str x23,[sp, #0x10]
710233bbc8  stp x22,x21,[sp, #0x20]
710233bbcc  stp x20,x19,[sp, #0x30]
710233bbd0  stp x29,x30,[sp, #0x40]
710233bbd4  add x29,sp,#0x40
710233bbd8  mov x20,x1
710233bbdc  mov x19,x0
710233bbe0  add x22,x0,#0x50
710233bbe4  mov w1,#0x120
710233bbe8  mov w0,#0x10
710233bbec  bl 0x710392e290
710233bbf0  mov x21,x0
710233bbf4  cbnz x0,0x710233bc40
710233bbf8  adrp x8,0x7105332000
710233bbfc  ldr x0,[x8, #0xf00]
710233bc00  cbz x0,0x710233bc3c
710233bc04  mov w8,#0x120
710233bc08  str wzr,[sp, #0x1c]
710233bc0c  add x1,sp,#0x1c
710233bc10  str x8,[sp, #0x8]
710233bc14  ldr x8,[x0]
710233bc18  ldr x8,[x8, #0x30]
710233bc1c  add x2,sp,#0x8
710233bc20  blr x8
710233bc24  tbz w0,#0x0,0x710233bc3c
710233bc28  mov w1,#0x120
710233bc2c  mov w0,#0x10
710233bc30  bl 0x710392e290
710233bc34  mov x21,x0
710233bc38  cbnz x0,0x710233bc40
710233bc3c  mov x21,xzr
710233bc40  mov w8,#0xffffffff
710233bc44  mov w0,#0x10
710233bc48  mov w1,#0x80
710233bc4c  stp x22,x21,[x21]
710233bc50  str w8,[x21, #0xf8]
710233bc54  stp xzr,xzr,[x21, #0x10]
710233bc58  strb wzr,[x21, #0xfc]
710233bc5c  str xzr,[x21, #0x30]
710233bc60  strh wzr,[x21, #0x108]
710233bc64  str xzr,[x21, #0x100]
710233bc68  stp xzr,xzr,[x21, #0x20]
710233bc6c  stp xzr,x8,[x21, #0xe8]
710233bc70  stp xzr,xzr,[x21, #0xd8]
710233bc74  stp xzr,xzr,[x21, #0xc8]
710233bc78  stp xzr,xzr,[x21, #0xb8]
710233bc7c  stp xzr,xzr,[x21, #0xa8]
710233bc80  stp xzr,xzr,[x21, #0x98]
710233bc84  stp xzr,xzr,[x21, #0x88]
710233bc88  stp xzr,xzr,[x21, #0x78]
710233bc8c  stp xzr,xzr,[x21, #0x68]
710233bc90  stp xzr,xzr,[x21, #0x58]
710233bc94  stp xzr,xzr,[x21, #0x48]
710233bc98  stp xzr,xzr,[x21, #0x38]
710233bc9c  bl 0x710392e290
710233bca0  cbnz x0,0x710233bce8
710233bca4  adrp x8,0x7105332000
710233bca8  ldr x0,[x8, #0xf00]
710233bcac  cbz x0,0x710233bce4
710233bcb0  mov w8,#0x80
710233bcb4  str wzr,[sp, #0x1c]
710233bcb8  add x1,sp,#0x1c
710233bcbc  str x8,[sp, #0x8]
710233bcc0  ldr x8,[x0]
710233bcc4  ldr x8,[x8, #0x30]
710233bcc8  add x2,sp,#0x8
710233bccc  blr x8
710233bcd0  tbz w0,#0x0,0x710233bce4
710233bcd4  mov w0,#0x10
710233bcd8  mov w1,#0x80
710233bcdc  bl 0x710392e290
710233bce0  cbnz x0,0x710233bce8
710233bce4  mov x0,xzr
710233bce8  adrp x8,0x7105181000
710233bcec  add x8,x8,#0xb40
710233bcf0  str x8,[x0]
710233bcf4  mov x8,x0
710233bcf8  adrp x1,0x7105328000
710233bcfc  add x1,x1,#0xbb0
710233bd00  str xzr,[x8, #0x10]!
710233bd04  str x8,[x0, #0x8]
710233bd08  mov x8,x0
710233bd0c  str xzr,[x8, #0x28]!
710233bd10  stp xzr,x8,[x0, #0x18]
710233bd14  mov x8,x0
710233bd18  str xzr,[x8, #0x40]!
710233bd1c  stp xzr,x8,[x0, #0x30]
710233bd20  mov x8,x0
710233bd24  str xzr,[x8, #0x58]!
710233bd28  stp xzr,x8,[x0, #0x48]
710233bd2c  mov w8,#0x2
710233bd30  str xzr,[x0, #0x60]
710233bd34  str w8,[x0, #0x68]
710233bd38  str wzr,[x0, #0x78]
710233bd3c  str xzr,[x0, #0x70]
710233bd40  str x0,[x21, #0x110]
710233bd44  ldr x0,[x21]
710233bd48  strb wzr,[x21, #0x118]
710233bd4c  bl 0x7103723a90
710233bd50  adrp x8,0x710233a000
710233bd54  add x8,x8,#0x720
710233bd58  adrp x9,0x710233a000
710233bd5c  add x9,x9,#0x7d0
710233bd60  stp x8,xzr,[x21, #0x30]
710233bd64  adrp x8,0x710233a000
710233bd68  add x8,x8,#0x750
710233bd6c  stp x8,xzr,[x21, #0x40]
710233bd70  adrp x8,0x710233a000
710233bd74  add x8,x8,#0x980
710233bd78  stp x8,xzr,[x21, #0x60]
710233bd7c  adrp x8,0x710233b000
710233bd80  add x8,x8,#0x450
710233bd84  stp x8,xzr,[x21, #0x70]
710233bd88  ldrsw x8,[x21, #0xec]
710233bd8c  stp x9,xzr,[x21, #0x50]
710233bd90  adrp x9,0x710233b000
710233bd94  add x9,x9,#0x710
710233bd98  cmp w8,#0x13
710233bd9c  stp x9,xzr,[x21, #0x80]
710233bda0  adrp x9,0x710233b000
710233bda4  add x9,x9,#0x960
710233bda8  stp x9,xzr,[x21, #0x90]
710233bdac  b.cs 0x710233bfcc
710233bdb0  add x8,x21,x8, LSL #0x2
710233bdb4  str wzr,[x8, #0xa0]
710233bdb8  ldr x22,[x20, #0xa8]
710233bdbc  cbz x22,0x710233befc
710233bdc0  adrp x23,0x7105324000
710233bdc4  add x23,x23,#0x750
710233bdc8  ldarb w8,[x23]
710233bdcc  tbz w8,#0x0,0x710233bf6c
710233bdd0  ldr x8,[x22]
710233bdd4  ldr x8,[x8]
710233bdd8  mov x0,x22
710233bddc  blr x8
710233bde0  cbz x0,0x710233bdfc
710233bde4  adrp x8,0x7105324000
710233bde8  add x8,x8,#0x758
710233bdec  cmp x0,x8
710233bdf0  b.eq 0x710233be08
710233bdf4  ldr x0,[x0]
710233bdf8  cbnz x0,0x710233bdec
710233bdfc  ldr x22,[x20, #0xa8]
710233be00  cbnz x22,0x710233be60
710233be04  b 0x710233befc
710233be08  mov w8,#0x1
710233be0c  strb w8,[x21, #0x100]
710233be10  ldrb w8,[x22, #0x8]
710233be14  strb w8,[x21, #0x101]
710233be18  ldrb w8,[x22, #0x9]
710233be1c  strb w8,[x21, #0x102]
710233be20  ldrb w8,[x22, #0xa]
710233be24  strb w8,[x21, #0x103]
710233be28  ldrb w8,[x22, #0xb]
710233be2c  strb w8,[x21, #0x104]
710233be30  ldrb w8,[x22, #0xc]
710233be34  strb w8,[x21, #0x105]
710233be38  ldrb w8,[x22, #0xd]
710233be3c  strb w8,[x21, #0x106]
710233be40  ldrb w8,[x22, #0xe]
710233be44  strb w8,[x21, #0x107]
710233be48  ldrb w8,[x22, #0xf]
710233be4c  strb w8,[x21, #0x108]
710233be50  ldrb w8,[x22, #0x10]
710233be54  strb w8,[x21, #0x109]
710233be58  ldr x22,[x20, #0xa8]
710233be5c  cbz x22,0x710233befc
710233be60  adrp x8,0x7105328000
710233be64  add x8,x8,#0x150
710233be68  ldarb w8,[x8]
710233be6c  tbz w8,#0x0,0x710233bf94
710233be70  ldr x8,[x22]
710233be74  ldr x8,[x8]
710233be78  mov x0,x22
710233be7c  blr x8
710233be80  cbz x0,0x710233befc
710233be84  adrp x8,0x7105328000
710233be88  add x8,x8,#0x158
710233be8c  cmp x0,x8
710233be90  b.eq 0x710233bea0
710233be94  ldr x0,[x0]
710233be98  cbnz x0,0x710233be8c
710233be9c  b 0x710233befc
710233bea0  ldr w8,[x20, #0x14]
710233bea4  mov w9,#0xf1af
710233bea8  movk w9,#0xcf91, LSL #16
710233beac  cmp w8,w9
710233beb0  b.ne 0x710233befc
710233beb4  add x0,x20,#0x1c
710233beb8  adrp x1,0x7104463000
710233bebc  add x1,x1,#0x8b4
710233bec0  bl 0x71039c0060
710233bec4  cbnz w0,0x710233befc
710233bec8  ldr w8,[x22, #0x8]
710233becc  mov w9,#0x9dc5
710233bed0  movk w9,#0x811c, LSL #16
710233bed4  cmp w8,w9
710233bed8  b.ne 0x710233befc
710233bedc  ldrb w8,[x22, #0x10]
710233bee0  cbnz w8,0x710233befc
710233bee4  ldrsw x8,[x21, #0xec]
710233bee8  cmp w8,#0x13
710233beec  b.cs 0x710233bfcc
710233bef0  add x8,x21,x8, LSL #0x2
710233bef4  mov w9,#0x1
710233bef8  str w9,[x8, #0xa0]
710233befc  ldr x20,[x19, #0xe8]
710233bf00  str x21,[x19, #0xe8]
710233bf04  cbz x20,0x710233bf54
710233bf08  ldr x0,[x20]
710233bf0c  adrp x1,0x7105328000
710233bf10  add x1,x1,#0xbb0
710233bf14  bl 0x7103723e70
710233bf18  ldr x0,[x20, #0x110]
710233bf1c  bl 0x710323b9e0
710233bf20  ldr x0,[x20, #0x110]
710233bf24  str xzr,[x20, #0x110]
710233bf28  cbz x0,0x710233bf38
710233bf2c  ldr x8,[x0]
710233bf30  ldr x8,[x8, #0x8]
710233bf34  blr x8
710233bf38  mov x0,x20
710233bf3c  ldp x29,x30,[sp, #0x40]
710233bf40  ldp x20,x19,[sp, #0x30]
710233bf44  ldr x23,[sp, #0x10]
710233bf48  ldp x22,x21,[sp, #0x20]
710233bf4c  add sp,sp,#0x50
710233bf50  b 0x710392eb40
710233bf54  ldp x29,x30,[sp, #0x40]
710233bf58  ldr x23,[sp, #0x10]
710233bf5c  ldp x20,x19,[sp, #0x30]
710233bf60  ldp x22,x21,[sp, #0x20]
710233bf64  add sp,sp,#0x50
710233bf68  ret
710233bf6c  adrp x0,0x7105324000
710233bf70  add x0,x0,#0x750
710233bf74  bl 0x71039c06b0
710233bf78  cbz w0,0x710233bdd0
710233bf7c  adrp x8,0x7105324000
710233bf80  adrp x0,0x7105324000
710233bf84  add x0,x0,#0x750
710233bf88  str xzr,[x8, #0x758]
710233bf8c  bl 0x71039c06c0
710233bf90  b 0x710233bdd0
710233bf94  adrp x0,0x7105328000
710233bf98  add x0,x0,#0x150
710233bf9c  bl 0x71039c06b0
710233bfa0  cbz w0,0x710233be70
710233bfa4  ldarb w8,[x23]
710233bfa8  tbz w8,#0x0,0x710233bfd0
710233bfac  adrp x8,0x7105328000
710233bfb0  adrp x9,0x7105324000
710233bfb4  add x9,x9,#0x758
710233bfb8  adrp x0,0x7105328000
710233bfbc  add x0,x0,#0x150
710233bfc0  str x9,[x8, #0x158]
710233bfc4  bl 0x71039c06c0
710233bfc8  b 0x710233be70
710233bfcc  bl 0x71039c2650
710233bfd0  adrp x0,0x7105324000
710233bfd4  add x0,x0,#0x750
710233bfd8  bl 0x71039c06b0
710233bfdc  cbz w0,0x710233bfac
710233bfe0  adrp x8,0x7105324000
710233bfe4  adrp x0,0x7105324000
710233bfe8  add x0,x0,#0x750
710233bfec  str xzr,[x8, #0x758]
710233bff0  bl 0x71039c06c0
710233bff4  b 0x710233bfac
