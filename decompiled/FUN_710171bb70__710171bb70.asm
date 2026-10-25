// addr:      710171bb70
// offset:    0x171bb70
// name:      FUN_710171bb70
// mangled:   
// size:      352

710171bb70  stp x20,x19,[sp, #-0x20]!
710171bb74  stp x29,x30,[sp, #0x10]
710171bb78  add x29,sp,#0x10
710171bb7c  ldp x8,x19,[x0, #0x8]
710171bb80  ldr x8,[x8, #0x68]
710171bb84  ldr x8,[x8]
710171bb88  str x8,[x19]
710171bb8c  ldr x9,[x19, #0x658]
710171bb90  ldr x8,[x19, #0x648]
710171bb94  sub x9,x9,x8
710171bb98  orr x10,xzr,#-0x5555555555555556
710171bb9c  movk x10,#0xaaab
710171bba0  asr x9,x9,#0x3
710171bba4  mul x9,x9,x10
710171bba8  cmp x9,#0x63
710171bbac  b.hi 0x710171bc0c
710171bbb0  ldr x9,[x19, #0x650]
710171bbb4  mov w0,#0x960
710171bbb8  sub x20,x9,x8
710171bbbc  bl 0x71001b1820
710171bbc0  add x9,x0,x20
710171bbc4  add x8,x0,#0x960
710171bbc8  ldr x0,[x19, #0x648]
710171bbcc  ldr x11,[x19, #0x650]
710171bbd0  mov x10,x9
710171bbd4  cmp x11,x0
710171bbd8  b.eq 0x710171bbf8
710171bbdc  ldr x12,[x11, #-0x18]!
710171bbe0  cmp x0,x11
710171bbe4  ldp x13,x14,[x11, #0x8]
710171bbe8  str x12,[x10, #-0x18]!
710171bbec  stp x13,x14,[x10, #0x8]
710171bbf0  b.ne 0x710171bbdc
710171bbf4  ldr x0,[x19, #0x648]
710171bbf8  str x10,[x19, #0x648]
710171bbfc  str x9,[x19, #0x650]
710171bc00  str x8,[x19, #0x658]
710171bc04  cbz x0,0x710171bc0c
710171bc08  bl 0x71001b1870
710171bc0c  adrp x8,0x71052af000
710171bc10  ldr x20,[x19]
710171bc14  ldrb w8,[x8, #0x1d8]
710171bc18  cbz w8,0x710171bc6c
710171bc1c  adrp x8,0x71052af000
710171bc20  ldr x0,[x8, #0x1d0]
710171bc24  bl 0x7101717960
710171bc28  ldr w8,[x0]
710171bc2c  cbz w8,0x710171bc6c
710171bc30  adrp x9,0x71052af000
710171bc34  ldr x10,[x9, #0x1b0]
710171bc38  ldp x9,x10,[x10]
710171bc3c  sub x10,x10,x9
710171bc40  asr x10,x10,#0x3
710171bc44  cmp x10,x8
710171bc48  b.ls 0x710171bc80
710171bc4c  ldr x8,[x9, x8, LSL #0x3]
710171bc50  add x8,x8,#0x20
710171bc54  ldr x8,[x8]
710171bc58  cbz x8,0x710171bc98
710171bc5c  ldr x8,[x8, #0x10]
710171bc60  cbz x8,0x710171bc98
710171bc64  ldr x19,[x8, #0x10]
710171bc68  b 0x710171bc9c
710171bc6c  adrp x8,0x71052af000
710171bc70  add x8,x8,#0x138
710171bc74  ldr x8,[x8]
710171bc78  cbnz x8,0x710171bc5c
710171bc7c  b 0x710171bc98
710171bc80  adrp x0,0x710437b000
710171bc84  add x0,x0,#0xda
710171bc88  mov w1,#0x47
710171bc8c  orr w2,wzr,#0xe0000003
710171bc90  mov w3,wzr
710171bc94  bl 0x71001b1300
710171bc98  mov x19,xzr
710171bc9c  ldr x8,[x19, #0x78]!
710171bca0  ldr x8,[x8, #0x10]
710171bca4  mov x0,x19
710171bca8  blr x8
710171bcac  mov x8,#0xa7
710171bcb0  movk x8,#0xea60, LSL #32
710171bcb4  str x8,[x20, #0xc8]
710171bcb8  ldr x8,[x19]
710171bcbc  ldr x1,[x8, #0x20]
710171bcc0  mov x0,x19
710171bcc4  ldp x29,x30,[sp, #0x10]
710171bcc8  ldp x20,x19,[sp], #0x20
710171bccc  br x1
