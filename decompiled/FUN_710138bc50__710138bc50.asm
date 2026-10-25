// addr:      710138bc50
// offset:    0x138bc50
// name:      FUN_710138bc50
// mangled:   
// size:      208

710138bc50  str d8,[sp, #-0x20]!
710138bc54  str x19,[sp, #0x8]
710138bc58  stp x29,x30,[sp, #0x10]
710138bc5c  add x29,sp,#0x10
710138bc60  adrp x8,0x71052c3000
710138bc64  ldr x8,[x8, #0x420]
710138bc68  cbz x8,0x710138bce0
710138bc6c  ldr x8,[x0, #0x8]
710138bc70  mov x19,x0
710138bc74  cbz x8,0x710138bce0
710138bc78  ldr x8,[x19]
710138bc7c  ldr x8,[x8, #0x10]
710138bc80  mov x0,x19
710138bc84  mov v8.16B,v0.16B
710138bc88  blr x8
710138bc8c  tbz w0,#0x0,0x710138bce0
710138bc90  adrp x8,0x710532f000
710138bc94  ldr x8,[x8, #0x8b0]
710138bc98  cbz x8,0x710138bcb4
710138bc9c  ldr x8,[x8, #0x8]
710138bca0  ldr w9,[x8, #0x138]
710138bca4  cbz w9,0x710138bcb4
710138bca8  ldrb w8,[x8, #0x2b8]
710138bcac  cmp w8,#0xb
710138bcb0  b.eq 0x710138bce0
710138bcb4  ldr x8,[x19, #0x8]
710138bcb8  cbz x8,0x710138bd20
710138bcbc  ldr x8,[x8]
710138bcc0  ldrb w9,[x8, #0xd3a]
710138bcc4  cbz w9,0x710138bcf0
710138bcc8  ldr x8,[x8, #0xa50]
710138bccc  ldr x8,[x8, #0x8]
710138bcd0  cbz x8,0x710138bce0
710138bcd4  ldr x8,[x8, #0x80]
710138bcd8  ldr x0,[x8, #0x30]
710138bcdc  b 0x710138bd00
710138bce0  ldp x29,x30,[sp, #0x10]
710138bce4  ldr x19,[sp, #0x8]
710138bce8  ldr d8,[sp], #0x20
710138bcec  ret
710138bcf0  ldr x8,[x8, #0x420]
710138bcf4  ldr x8,[x8, #0x130]
710138bcf8  ldr x8,[x8, #0x80]
710138bcfc  ldr x0,[x8, #0x330]
710138bd00  ldp x29,x30,[sp, #0x10]
710138bd04  ldr x19,[sp, #0x8]
710138bd08  fcvtzs w3,s8
710138bd0c  adrp x1,0x7104401000
710138bd10  add x1,x1,#0x343
710138bd14  mov w2,#0x1
710138bd18  ldr d8,[sp], #0x20
710138bd1c  b 0x710377a280
