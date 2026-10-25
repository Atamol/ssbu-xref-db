// addr:      710020bb80
// offset:    0x20bb80
// name:      FUN_710020bb80
// mangled:   
// size:      528

710020bb80  str x23,[sp, #-0x40]!
710020bb84  stp x22,x21,[sp, #0x10]
710020bb88  stp x20,x19,[sp, #0x20]
710020bb8c  stp x29,x30,[sp, #0x30]
710020bb90  add x29,sp,#0x30
710020bb94  adrp x8,0x71052a4000
710020bb98  ldr x8,[x8, #0xda8]
710020bb9c  adrp x23,0x71052a4000
710020bba0  ldrb w8,[x8]
710020bba4  ldr x23,[x23, #0xdb0]
710020bba8  mov x21,x2
710020bbac  mov x22,x1
710020bbb0  mov x19,x0
710020bbb4  add x20,x23,#0x28
710020bbb8  cbz w8,0x710020bbf4
710020bbbc  adrp x8,0x71052a4000
710020bbc0  ldr x8,[x8, #0xdb8]
710020bbc4  ldr x0,[x8]
710020bbc8  bl 0x7101717960
710020bbcc  ldr w8,[x0]
710020bbd0  cbz w8,0x710020bbf4
710020bbd4  ldr x10,[x23, #0xa0]
710020bbd8  ldp x9,x10,[x10]
710020bbdc  sub x10,x10,x9
710020bbe0  asr x10,x10,#0x3
710020bbe4  cmp x10,x8
710020bbe8  b.ls 0x710020bc0c
710020bbec  ldr x8,[x9, x8, LSL #0x3]
710020bbf0  add x20,x8,#0x20
710020bbf4  ldr x8,[x20]
710020bbf8  cbz x8,0x710020bc24
710020bbfc  ldr x8,[x8, #0x10]
710020bc00  cbz x8,0x710020bc24
710020bc04  ldr x20,[x8, #0x10]
710020bc08  b 0x710020bc28
710020bc0c  adrp x0,0x71042c4000
710020bc10  add x0,x0,#0x35f
710020bc14  mov w1,#0x47
710020bc18  orr w2,wzr,#0xe0000003
710020bc1c  mov w3,wzr
710020bc20  bl 0x71001b1300
710020bc24  mov x20,xzr
710020bc28  ldr x8,[x20, #0x78]!
710020bc2c  ldr x8,[x8, #0x10]
710020bc30  mov x0,x20
710020bc34  blr x8
710020bc38  ldr x0,[x19, #0x110]
710020bc3c  cbz x0,0x710020bcf0
710020bc40  add x8,x19,#0x110
710020bc44  mov x23,x8
710020bc48  mov x9,x0
710020bc4c  ldr x10,[x9, #0x20]
710020bc50  cmp x10,x22
710020bc54  cset w10,cc
710020bc58  csel x23,x23,x9,cc
710020bc5c  ldr x9,[x9, w10, UXTW #0x3]
710020bc60  cbnz x9,0x710020bc4c
710020bc64  cmp x23,x8
710020bc68  b.eq 0x710020bcf0
710020bc6c  ldr x9,[x23, #0x20]
710020bc70  cmp x9,x22
710020bc74  ccmp x23,x8,#0x4,ls
710020bc78  b.eq 0x710020bcf0
710020bc7c  ldr x9,[x23, #0x20]
710020bc80  cmp x9,x22
710020bc84  b.ne 0x710020bcf0
710020bc88  ldr x10,[x23, #0x28]
710020bc8c  ldr x9,[x23, #0x8]
710020bc90  cmp x10,x21
710020bc94  b.eq 0x710020bd1c
710020bc98  cbz x9,0x710020bcac
710020bc9c  mov x23,x9
710020bca0  ldr x9,[x9]
710020bca4  cbnz x9,0x710020bc9c
710020bca8  b 0x710020bcd8
710020bcac  mov x9,x23
710020bcb0  ldr x10,[x9, #0x10]!
710020bcb4  ldr x11,[x10]
710020bcb8  cmp x11,x23
710020bcbc  b.eq 0x710020bce4
710020bcc0  ldr x10,[x9]
710020bcc4  mov x9,x10
710020bcc8  ldr x23,[x9, #0x10]!
710020bccc  ldr x11,[x23]
710020bcd0  cmp x11,x10
710020bcd4  b.ne 0x710020bcc0
710020bcd8  cmp x23,x8
710020bcdc  b.ne 0x710020bc7c
710020bce0  b 0x710020bcf0
710020bce4  mov x23,x10
710020bce8  cmp x23,x8
710020bcec  b.ne 0x710020bc7c
710020bcf0  mov w19,wzr
710020bcf4  ldr x8,[x20]
710020bcf8  ldr x8,[x8, #0x20]
710020bcfc  mov x0,x20
710020bd00  blr x8
710020bd04  mov w0,w19
710020bd08  ldp x29,x30,[sp, #0x30]
710020bd0c  ldp x20,x19,[sp, #0x20]
710020bd10  ldp x22,x21,[sp, #0x10]
710020bd14  ldr x23,[sp], #0x40
710020bd18  ret
710020bd1c  cbz x9,0x710020bd30
710020bd20  mov x8,x9
710020bd24  ldr x9,[x9]
710020bd28  cbnz x9,0x710020bd20
710020bd2c  b 0x710020bd5c
710020bd30  mov x9,x23
710020bd34  ldr x8,[x9, #0x10]!
710020bd38  ldr x10,[x8]
710020bd3c  cmp x10,x23
710020bd40  b.eq 0x710020bd5c
710020bd44  ldr x10,[x9]
710020bd48  mov x9,x10
710020bd4c  ldr x8,[x9, #0x10]!
710020bd50  ldr x11,[x8]
710020bd54  cmp x11,x10
710020bd58  b.ne 0x710020bd44
710020bd5c  ldr x9,[x19, #0x108]
710020bd60  cmp x9,x23
710020bd64  b.ne 0x710020bd6c
710020bd68  str x8,[x19, #0x108]
710020bd6c  ldr x8,[x19, #0x118]
710020bd70  sub x8,x8,#0x1
710020bd74  mov x1,x23
710020bd78  str x8,[x19, #0x118]
710020bd7c  bl 0x7101412010
710020bd80  mov x0,x23
710020bd84  bl 0x71001b1870
710020bd88  mov w19,#0x1
710020bd8c  b 0x710020bcf4
