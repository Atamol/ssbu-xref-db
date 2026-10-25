// addr:      7101b8ce10
// offset:    0x1b8ce10
// name:      FUN_7101b8ce10
// mangled:   
// size:      392

7101b8ce10  sub sp,sp,#0x40
7101b8ce14  str x21,[sp, #0x10]
7101b8ce18  stp x20,x19,[sp, #0x20]
7101b8ce1c  stp x29,x30,[sp, #0x30]
7101b8ce20  add x29,sp,#0x30
7101b8ce24  ldr w8,[x0, #0x114]
7101b8ce28  mov x19,x0
7101b8ce2c  cbz w8,0x7101b8ceb0
7101b8ce30  ldr x8,[x19, #0x10]
7101b8ce34  ldr x0,[x8, #0x8]
7101b8ce38  cbz x0,0x7101b8ce5c
7101b8ce3c  adrp x1,0x710436c000
7101b8ce40  add x1,x1,#0x4ef
7101b8ce44  bl 0x71037964b0
7101b8ce48  cbz x0,0x7101b8ce5c
7101b8ce4c  ldr x8,[x0]
7101b8ce50  ldr x8,[x8, #0x138]
7101b8ce54  blr x8
7101b8ce58  tbz w0,#0x0,0x7101b8cf80
7101b8ce5c  add x0,x19,#0x18
7101b8ce60  adrp x1,0x710432a000
7101b8ce64  add x1,x1,#0x87b
7101b8ce68  mov x8,sp
7101b8ce6c  bl 0x71037780e0
7101b8ce70  fmov s0,0x3f800000
7101b8ce74  mov x0,sp
7101b8ce78  bl 0x710377aee0
7101b8ce7c  ldr x0,[sp, #0x8]
7101b8ce80  adrp x8,0x710523d000
7101b8ce84  add x8,x8,#0x9e8
7101b8ce88  stp x8,xzr,[sp]
7101b8ce8c  cbz x0,0x7101b8ce94
7101b8ce90  bl 0x710392eb40
7101b8ce94  ldrsw x8,[x19, #0x10c]
7101b8ce98  cmp w8,#0x13
7101b8ce9c  b.cs 0x7101b8cf94
7101b8cea0  add x8,x19,x8, LSL #0x2
7101b8cea4  mov w9,#0x2
7101b8cea8  str w9,[x8, #0xc0]
7101b8ceac  b 0x7101b8cf80
7101b8ceb0  ldrb w8,[x19, #0x128]
7101b8ceb4  cbz w8,0x7101b8cf18
7101b8ceb8  add x20,x19,#0x8
7101b8cebc  adrp x1,0x7104433000
7101b8cec0  add x1,x1,#0x29f
7101b8cec4  mov x8,sp
7101b8cec8  mov x0,x20
7101b8cecc  bl 0x7103776910
7101b8ced0  ldr x21,[sp, #0x8]
7101b8ced4  ldr x0,[x21, #0x8]
7101b8ced8  cbz x0,0x7101b8cefc
7101b8cedc  adrp x8,0x710593b000
7101b8cee0  ldr x8,[x8, #0xc38]
7101b8cee4  cbz x8,0x7101b8cefc
7101b8cee8  ldr x8,[x8, #0x8]
7101b8ceec  ldr x1,[x8, #0x78]
7101b8cef0  cbz x1,0x7101b8cefc
7101b8cef4  mov w2,wzr
7101b8cef8  bl 0x710379e9c0
7101b8cefc  adrp x8,0x710523d000
7101b8cf00  add x8,x8,#0x9a8
7101b8cf04  stp x8,xzr,[sp]
7101b8cf08  cbz x21,0x7101b8cf1c
7101b8cf0c  mov x0,x21
7101b8cf10  bl 0x710392eb40
7101b8cf14  b 0x7101b8cf1c
7101b8cf18  add x20,x19,#0x8
7101b8cf1c  adrp x1,0x710436c000
7101b8cf20  add x1,x1,#0x4ef
7101b8cf24  mov x8,sp
7101b8cf28  mov x0,x20
7101b8cf2c  bl 0x71037780e0
7101b8cf30  fmov s0,0x3f800000
7101b8cf34  mov x0,sp
7101b8cf38  bl 0x710377aee0
7101b8cf3c  ldr x0,[sp, #0x8]
7101b8cf40  adrp x8,0x710523d000
7101b8cf44  add x8,x8,#0x9e8
7101b8cf48  stp x8,xzr,[sp]
7101b8cf4c  cbz x0,0x7101b8cf54
7101b8cf50  bl 0x710392eb40
7101b8cf54  ldr w8,[x19, #0x124]
7101b8cf58  add w8,w8,#0x3b
7101b8cf5c  mov w9,#0x8889
7101b8cf60  movk w9,#0x8888, LSL #16
7101b8cf64  umull x8,w8,w9
7101b8cf68  add x0,x19,#0x28
7101b8cf6c  adrp x1,0x71043cf000
7101b8cf70  add x1,x1,#0x1be
7101b8cf74  mov w2,#0x1
7101b8cf78  lsr x3,x8,#0x25
7101b8cf7c  bl 0x710377a280
7101b8cf80  ldp x29,x30,[sp, #0x30]
7101b8cf84  ldr x21,[sp, #0x10]
7101b8cf88  ldp x20,x19,[sp, #0x20]
7101b8cf8c  add sp,sp,#0x40
7101b8cf90  ret
7101b8cf94  bl 0x71039c2650
