// addr:      710023bb70
// offset:    0x23bb70
// name:      FUN_710023bb70
// mangled:   
// size:      280

710023bb70  stp x22,x21,[sp, #-0x30]!
710023bb74  stp x20,x19,[sp, #0x10]
710023bb78  stp x29,x30,[sp, #0x20]
710023bb7c  add x29,sp,#0x20
710023bb80  adrp x8,0x71052a4000
710023bb84  ldr x8,[x8, #0xda8]
710023bb88  adrp x22,0x71052a4000
710023bb8c  ldrb w8,[x8]
710023bb90  ldr x22,[x22, #0xdb0]
710023bb94  mov w19,w1
710023bb98  mov x20,x0
710023bb9c  add x21,x22,#0x28
710023bba0  cbz w8,0x710023bbdc
710023bba4  adrp x8,0x71052a4000
710023bba8  ldr x8,[x8, #0xdb8]
710023bbac  ldr x0,[x8]
710023bbb0  bl 0x7101717960
710023bbb4  ldr w8,[x0]
710023bbb8  cbz w8,0x710023bbdc
710023bbbc  ldr x10,[x22, #0xa0]
710023bbc0  ldp x9,x10,[x10]
710023bbc4  sub x10,x10,x9
710023bbc8  asr x10,x10,#0x3
710023bbcc  cmp x10,x8
710023bbd0  b.ls 0x710023bbf4
710023bbd4  ldr x8,[x9, x8, LSL #0x3]
710023bbd8  add x21,x8,#0x20
710023bbdc  ldr x8,[x21]
710023bbe0  cbz x8,0x710023bc0c
710023bbe4  ldr x8,[x8, #0x10]
710023bbe8  cbz x8,0x710023bc0c
710023bbec  ldr x21,[x8, #0x10]
710023bbf0  b 0x710023bc10
710023bbf4  adrp x0,0x71042c4000
710023bbf8  add x0,x0,#0x35f
710023bbfc  mov w1,#0x47
710023bc00  orr w2,wzr,#0xe0000003
710023bc04  mov w3,wzr
710023bc08  bl 0x71001b1300
710023bc0c  mov x21,xzr
710023bc10  ldr x8,[x21, #0x78]!
710023bc14  ldr x8,[x8, #0x10]
710023bc18  mov x0,x21
710023bc1c  blr x8
710023bc20  ldr x9,[x20, #0x90]!
710023bc24  cbz x9,0x710023bc58
710023bc28  mov x8,x20
710023bc2c  ldrh w10,[x9, #0x20]
710023bc30  cmp w10,w19, UXTH 
710023bc34  cset w10,cc
710023bc38  csel x8,x8,x9,cc
710023bc3c  ldr x9,[x9, w10, UXTW #0x3]
710023bc40  cbnz x9,0x710023bc2c
710023bc44  cmp x8,x20
710023bc48  b.eq 0x710023bc58
710023bc4c  ldrh w9,[x8, #0x20]
710023bc50  cmp w9,w19, UXTH 
710023bc54  b.ls 0x710023bc60
710023bc58  mov x19,xzr
710023bc5c  b 0x710023bc64
710023bc60  ldr x19,[x8, #0x28]
710023bc64  ldr x8,[x21]
710023bc68  ldr x8,[x8, #0x20]
710023bc6c  mov x0,x21
710023bc70  blr x8
710023bc74  mov x0,x19
710023bc78  ldp x29,x30,[sp, #0x20]
710023bc7c  ldp x20,x19,[sp, #0x10]
710023bc80  ldp x22,x21,[sp], #0x30
710023bc84  ret
