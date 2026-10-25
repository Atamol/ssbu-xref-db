// addr:      7101dc7ad0
// offset:    0x1dc7ad0
// name:      FUN_7101dc7ad0
// mangled:   
// size:      280

7101dc7ad0  sub sp,sp,#0x30
7101dc7ad4  str x19,[sp, #0x10]
7101dc7ad8  stp x29,x30,[sp, #0x20]
7101dc7adc  add x29,sp,#0x20
7101dc7ae0  mov x19,x0
7101dc7ae4  add x0,x0,#0x20
7101dc7ae8  adrp x1,0x710439d000
7101dc7aec  add x1,x1,#0x8ae
7101dc7af0  mov x8,sp
7101dc7af4  bl 0x7103776910
7101dc7af8  ldr x8,[x19, #0x30]
7101dc7afc  ldr w8,[x8, #0x254]
7101dc7b00  cmp w8,#0x4
7101dc7b04  b.hi 0x7101dc7bc0
7101dc7b08  adrp x9,0x71044fb000
7101dc7b0c  add x9,x9,#0x570
7101dc7b10  ldrsw x8,[x9, x8, LSL #0x2]
7101dc7b14  add x8,x8,x9
7101dc7b18  br x8
7101dc7b1c  ldr x0,[x19, #0x28]
7101dc7b20  fmov s0,0x3f800000
7101dc7b24  adrp x1,0x7104454000
7101dc7b28  add x1,x1,#0xf7c
7101dc7b2c  bl 0x7103778300
7101dc7b30  adrp x1,0x71043cf000
7101dc7b34  add x1,x1,#0x8b6
7101dc7b38  b 0x7101dc7bb8
7101dc7b3c  ldr x0,[x19, #0x28]
7101dc7b40  fmov s0,0x3f800000
7101dc7b44  adrp x1,0x71042b4000
7101dc7b48  add x1,x1,#0x7c4
7101dc7b4c  bl 0x7103778300
7101dc7b50  adrp x1,0x7104280000
7101dc7b54  add x1,x1,#0xf70
7101dc7b58  b 0x7101dc7bb8
7101dc7b5c  ldr x0,[x19, #0x28]
7101dc7b60  fmov s0,0x3f800000
7101dc7b64  adrp x1,0x7104270000
7101dc7b68  add x1,x1,#0x436
7101dc7b6c  bl 0x7103778300
7101dc7b70  adrp x1,0x71042f8000
7101dc7b74  add x1,x1,#0x798
7101dc7b78  b 0x7101dc7bb8
7101dc7b7c  ldr x0,[x19, #0x28]
7101dc7b80  fmov s0,0x3f800000
7101dc7b84  adrp x1,0x7104433000
7101dc7b88  add x1,x1,#0x53b
7101dc7b8c  bl 0x7103778300
7101dc7b90  adrp x1,0x71043e0000
7101dc7b94  add x1,x1,#0x5f2
7101dc7b98  b 0x7101dc7bb8
7101dc7b9c  ldr x0,[x19, #0x28]
7101dc7ba0  fmov s0,0x3f800000
7101dc7ba4  adrp x1,0x71043ad000
7101dc7ba8  add x1,x1,#0xc89
7101dc7bac  bl 0x7103778300
7101dc7bb0  adrp x1,0x710439d000
7101dc7bb4  add x1,x1,#0x8c5
7101dc7bb8  mov x0,sp
7101dc7bbc  bl 0x710377a120
7101dc7bc0  ldr x0,[sp, #0x8]
7101dc7bc4  adrp x8,0x710523d000
7101dc7bc8  add x8,x8,#0x9a8
7101dc7bcc  stp x8,xzr,[sp]
7101dc7bd0  cbz x0,0x7101dc7bd8
7101dc7bd4  bl 0x710392eb40
7101dc7bd8  ldp x29,x30,[sp, #0x20]
7101dc7bdc  ldr x19,[sp, #0x10]
7101dc7be0  add sp,sp,#0x30
7101dc7be4  ret
