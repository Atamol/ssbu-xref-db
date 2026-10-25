// addr:      7101ec7a70
// offset:    0x1ec7a70
// name:      FUN_7101ec7a70
// mangled:   
// size:      208

7101ec7a70  sub sp,sp,#0x40
7101ec7a74  str x19,[sp, #0x20]
7101ec7a78  stp x29,x30,[sp, #0x30]
7101ec7a7c  add x29,sp,#0x30
7101ec7a80  ldr x0,[x0, #0x8]
7101ec7a84  adrp x1,0x7104281000
7101ec7a88  add x1,x1,#0x265
7101ec7a8c  mov x8,sp
7101ec7a90  bl 0x7103776640
7101ec7a94  adrp x1,0x71043ad000
7101ec7a98  add x1,x1,#0xfe3
7101ec7a9c  add x8,sp,#0x10
7101ec7aa0  mov x0,sp
7101ec7aa4  bl 0x7103776910
7101ec7aa8  ldr x19,[sp, #0x8]
7101ec7aac  adrp x8,0x710523d000
7101ec7ab0  add x8,x8,#0x988
7101ec7ab4  stp x8,xzr,[sp]
7101ec7ab8  cbz x19,0x7101ec7adc
7101ec7abc  ldr x0,[x19, #0x18]
7101ec7ac0  adrp x8,0x710523d000
7101ec7ac4  add x8,x8,#0x9a8
7101ec7ac8  stp x8,xzr,[x19, #0x10]
7101ec7acc  cbz x0,0x7101ec7ad4
7101ec7ad0  bl 0x710392eb40
7101ec7ad4  mov x0,x19
7101ec7ad8  bl 0x710392eb40
7101ec7adc  adrp x8,0x7105329000
7101ec7ae0  ldr x8,[x8, #0xd78]
7101ec7ae4  ldr x8,[x8, #0x8]
7101ec7ae8  ldr w9,[x8, #0x750]
7101ec7aec  cmp w9,#0x1
7101ec7af0  b.ne 0x7101ec7afc
7101ec7af4  ldr w8,[x8, #0x5d8]
7101ec7af8  cbz w8,0x7101ec7b08
7101ec7afc  adrp x1,0x71043ad000
7101ec7b00  add x1,x1,#0xfc5
7101ec7b04  b 0x7101ec7b10
7101ec7b08  adrp x1,0x71043f1000
7101ec7b0c  add x1,x1,#0x78
7101ec7b10  add x0,sp,#0x10
7101ec7b14  bl 0x710377a120
7101ec7b18  ldr x0,[sp, #0x18]
7101ec7b1c  adrp x8,0x710523d000
7101ec7b20  add x8,x8,#0x9a8
7101ec7b24  stp x8,xzr,[sp, #0x10]
7101ec7b28  cbz x0,0x7101ec7b30
7101ec7b2c  bl 0x710392eb40
7101ec7b30  ldp x29,x30,[sp, #0x30]
7101ec7b34  ldr x19,[sp, #0x20]
7101ec7b38  add sp,sp,#0x40
7101ec7b3c  ret
