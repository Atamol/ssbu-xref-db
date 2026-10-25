// addr:      7101e9bb40
// offset:    0x1e9bb40
// name:      FUN_7101e9bb40
// mangled:   
// size:      844

7101e9bb40  str d8,[sp, #-0x30]!
7101e9bb44  stp x20,x19,[sp, #0x10]
7101e9bb48  stp x29,x30,[sp, #0x20]
7101e9bb4c  add x29,sp,#0x20
7101e9bb50  ldr x8,[x0]
7101e9bb54  mov x19,x0
7101e9bb58  ldr x0,[x8]
7101e9bb5c  ldr x8,[x0]
7101e9bb60  ldr x8,[x8, #0x68]
7101e9bb64  blr x8
7101e9bb68  tbz w0,#0x0,0x7101e9bbe4
7101e9bb6c  ldr x8,[x19]
7101e9bb70  ldr x9,[x8]
7101e9bb74  ldr w9,[x9, #0x254]
7101e9bb78  cmn w9,#0x1
7101e9bb7c  and w10,w9,#0xff
7101e9bb80  ccmp w10,#0x3,#0x2,ne
7101e9bb84  b.hi 0x7101e9bbb0
7101e9bb88  add x9,x8,w9, UXTB  #0x3
7101e9bb8c  ldr x9,[x9, #0x48]
7101e9bb90  cbz x9,0x7101e9bbb0
7101e9bb94  ldrb w9,[x9, #0xb0]
7101e9bb98  cbz w9,0x7101e9bbb0
7101e9bb9c  mov x20,x19
7101e9bba0  ldrb w9,[x20, #0xb]!
7101e9bba4  cbz w9,0x7101e9be64
7101e9bba8  mov w8,#0x1
7101e9bbac  b 0x7101e9bbe0
7101e9bbb0  mov x20,x19
7101e9bbb4  ldrb w9,[x20, #0xb]!
7101e9bbb8  cbz w9,0x7101e9bbdc
7101e9bbbc  fmov s8,0x3f800000
7101e9bbc0  mov v0.16B,v8.16B
7101e9bbc4  add x0,x8,#0x18
7101e9bbc8  bl 0x710377aee0
7101e9bbcc  ldr x8,[x19]
7101e9bbd0  mov v0.16B,v8.16B
7101e9bbd4  add x0,x8,#0x38
7101e9bbd8  bl 0x710377aee0
7101e9bbdc  mov w8,wzr
7101e9bbe0  strb w8,[x20]
7101e9bbe4  ldr x20,[x19]
7101e9bbe8  ldr x19,[x20, #0x48]
7101e9bbec  cbz x19,0x7101e9bc80
7101e9bbf0  ldrb w8,[x19, #0x98]
7101e9bbf4  cbz w8,0x7101e9bc2c
7101e9bbf8  ldrb w8,[x19, #0xb5]
7101e9bbfc  cbz w8,0x7101e9bc2c
7101e9bc00  ldr x8,[x19, #0xa0]
7101e9bc04  cbz x8,0x7101e9bc24
7101e9bc08  ldr x8,[x8, #0x8]
7101e9bc0c  ldr x0,[x8, #0x8]
7101e9bc10  cbz x0,0x7101e9bc24
7101e9bc14  ldr x8,[x0]
7101e9bc18  ldr x8,[x8, #0x138]
7101e9bc1c  blr x8
7101e9bc20  tbz w0,#0x0,0x7101e9bc2c
7101e9bc24  mov x0,x19
7101e9bc28  bl 0x7101e9be90
7101e9bc2c  ldr x19,[x20, #0x48]
7101e9bc30  ldr x8,[x19, #0xa8]
7101e9bc34  cbz x8,0x7101e9bc80
7101e9bc38  ldr x8,[x8, #0x8]
7101e9bc3c  ldr x0,[x8, #0x8]
7101e9bc40  cbz x0,0x7101e9bc54
7101e9bc44  ldr x8,[x0]
7101e9bc48  ldr x8,[x8, #0x138]
7101e9bc4c  blr x8
7101e9bc50  tbz w0,#0x0,0x7101e9bc80
7101e9bc54  ldr x0,[x19, #0x28]
7101e9bc58  fmov s0,0x3f800000
7101e9bc5c  adrp x1,0x7104453000
7101e9bc60  add x1,x1,#0xca
7101e9bc64  bl 0x7103778300
7101e9bc68  ldr x0,[x19, #0xa8]
7101e9bc6c  str xzr,[x19, #0xa8]
7101e9bc70  cbz x0,0x7101e9bc80
7101e9bc74  ldr x8,[x0]
7101e9bc78  ldr x8,[x8, #0x8]
7101e9bc7c  blr x8
7101e9bc80  ldr x19,[x20, #0x50]
7101e9bc84  cbz x19,0x7101e9bd18
7101e9bc88  ldrb w8,[x19, #0x98]
7101e9bc8c  cbz w8,0x7101e9bcc4
7101e9bc90  ldrb w8,[x19, #0xb5]
7101e9bc94  cbz w8,0x7101e9bcc4
7101e9bc98  ldr x8,[x19, #0xa0]
7101e9bc9c  cbz x8,0x7101e9bcbc
7101e9bca0  ldr x8,[x8, #0x8]
7101e9bca4  ldr x0,[x8, #0x8]
7101e9bca8  cbz x0,0x7101e9bcbc
7101e9bcac  ldr x8,[x0]
7101e9bcb0  ldr x8,[x8, #0x138]
7101e9bcb4  blr x8
7101e9bcb8  tbz w0,#0x0,0x7101e9bcc4
7101e9bcbc  mov x0,x19
7101e9bcc0  bl 0x7101e9be90
7101e9bcc4  ldr x19,[x20, #0x50]
7101e9bcc8  ldr x8,[x19, #0xa8]
7101e9bccc  cbz x8,0x7101e9bd18
7101e9bcd0  ldr x8,[x8, #0x8]
7101e9bcd4  ldr x0,[x8, #0x8]
7101e9bcd8  cbz x0,0x7101e9bcec
7101e9bcdc  ldr x8,[x0]
7101e9bce0  ldr x8,[x8, #0x138]
7101e9bce4  blr x8
7101e9bce8  tbz w0,#0x0,0x7101e9bd18
7101e9bcec  ldr x0,[x19, #0x28]
7101e9bcf0  fmov s0,0x3f800000
7101e9bcf4  adrp x1,0x7104453000
7101e9bcf8  add x1,x1,#0xca
7101e9bcfc  bl 0x7103778300
7101e9bd00  ldr x0,[x19, #0xa8]
7101e9bd04  str xzr,[x19, #0xa8]
7101e9bd08  cbz x0,0x7101e9bd18
7101e9bd0c  ldr x8,[x0]
7101e9bd10  ldr x8,[x8, #0x8]
7101e9bd14  blr x8
7101e9bd18  ldr x19,[x20, #0x58]
7101e9bd1c  cbz x19,0x7101e9bdb0
7101e9bd20  ldrb w8,[x19, #0x98]
7101e9bd24  cbz w8,0x7101e9bd5c
7101e9bd28  ldrb w8,[x19, #0xb5]
7101e9bd2c  cbz w8,0x7101e9bd5c
7101e9bd30  ldr x8,[x19, #0xa0]
7101e9bd34  cbz x8,0x7101e9bd54
7101e9bd38  ldr x8,[x8, #0x8]
7101e9bd3c  ldr x0,[x8, #0x8]
7101e9bd40  cbz x0,0x7101e9bd54
7101e9bd44  ldr x8,[x0]
7101e9bd48  ldr x8,[x8, #0x138]
7101e9bd4c  blr x8
7101e9bd50  tbz w0,#0x0,0x7101e9bd5c
7101e9bd54  mov x0,x19
7101e9bd58  bl 0x7101e9be90
7101e9bd5c  ldr x19,[x20, #0x58]
7101e9bd60  ldr x8,[x19, #0xa8]
7101e9bd64  cbz x8,0x7101e9bdb0
7101e9bd68  ldr x8,[x8, #0x8]
7101e9bd6c  ldr x0,[x8, #0x8]
7101e9bd70  cbz x0,0x7101e9bd84
7101e9bd74  ldr x8,[x0]
7101e9bd78  ldr x8,[x8, #0x138]
7101e9bd7c  blr x8
7101e9bd80  tbz w0,#0x0,0x7101e9bdb0
7101e9bd84  ldr x0,[x19, #0x28]
7101e9bd88  fmov s0,0x3f800000
7101e9bd8c  adrp x1,0x7104453000
7101e9bd90  add x1,x1,#0xca
7101e9bd94  bl 0x7103778300
7101e9bd98  ldr x0,[x19, #0xa8]
7101e9bd9c  str xzr,[x19, #0xa8]
7101e9bda0  cbz x0,0x7101e9bdb0
7101e9bda4  ldr x8,[x0]
7101e9bda8  ldr x8,[x8, #0x8]
7101e9bdac  blr x8
7101e9bdb0  ldr x19,[x20, #0x60]
7101e9bdb4  cbz x19,0x7101e9be54
7101e9bdb8  ldrb w8,[x19, #0x98]
7101e9bdbc  cbz w8,0x7101e9bdf4
7101e9bdc0  ldrb w8,[x19, #0xb5]
7101e9bdc4  cbz w8,0x7101e9bdf4
7101e9bdc8  ldr x8,[x19, #0xa0]
7101e9bdcc  cbz x8,0x7101e9bdec
7101e9bdd0  ldr x8,[x8, #0x8]
7101e9bdd4  ldr x0,[x8, #0x8]
7101e9bdd8  cbz x0,0x7101e9bdec
7101e9bddc  ldr x8,[x0]
7101e9bde0  ldr x8,[x8, #0x138]
7101e9bde4  blr x8
7101e9bde8  tbz w0,#0x0,0x7101e9bdf4
7101e9bdec  mov x0,x19
7101e9bdf0  bl 0x7101e9be90
7101e9bdf4  ldr x19,[x20, #0x60]
7101e9bdf8  ldr x8,[x19, #0xa8]
7101e9bdfc  cbz x8,0x7101e9be54
7101e9be00  ldr x8,[x8, #0x8]
7101e9be04  ldr x0,[x8, #0x8]
7101e9be08  cbz x0,0x7101e9be1c
7101e9be0c  ldr x8,[x0]
7101e9be10  ldr x8,[x8, #0x138]
7101e9be14  blr x8
7101e9be18  tbz w0,#0x0,0x7101e9be54
7101e9be1c  ldr x0,[x19, #0x28]
7101e9be20  fmov s0,0x3f800000
7101e9be24  adrp x1,0x7104453000
7101e9be28  add x1,x1,#0xca
7101e9be2c  bl 0x7103778300
7101e9be30  ldr x0,[x19, #0xa8]
7101e9be34  str xzr,[x19, #0xa8]
7101e9be38  cbz x0,0x7101e9be54
7101e9be3c  ldr x8,[x0]
7101e9be40  ldr x1,[x8, #0x8]
7101e9be44  ldp x29,x30,[sp, #0x20]
7101e9be48  ldp x20,x19,[sp, #0x10]
7101e9be4c  ldr d8,[sp], #0x30
7101e9be50  br x1
7101e9be54  ldp x29,x30,[sp, #0x20]
7101e9be58  ldp x20,x19,[sp, #0x10]
7101e9be5c  ldr d8,[sp], #0x30
7101e9be60  ret
7101e9be64  fmov s8,0x3f800000
7101e9be68  mov v0.16B,v8.16B
7101e9be6c  add x0,x8,#0x8
7101e9be70  bl 0x710377aee0
7101e9be74  ldr x8,[x19]
7101e9be78  mov v0.16B,v8.16B
7101e9be7c  add x0,x8,#0x28
7101e9be80  bl 0x710377aee0
7101e9be84  mov w8,#0x1
7101e9be88  b 0x7101e9bbe0
