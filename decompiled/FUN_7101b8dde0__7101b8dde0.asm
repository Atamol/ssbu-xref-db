// addr:      7101b8dde0
// offset:    0x1b8dde0
// name:      FUN_7101b8dde0
// mangled:   
// size:      508

7101b8dde0  sub sp,sp,#0x50
7101b8dde4  stp x22,x21,[sp, #0x20]
7101b8dde8  stp x20,x19,[sp, #0x30]
7101b8ddec  stp x29,x30,[sp, #0x40]
7101b8ddf0  add x29,sp,#0x40
7101b8ddf4  ldr x8,[x0, #0x8]
7101b8ddf8  ldr x8,[x8]
7101b8ddfc  mov x19,x0
7101b8de00  add x0,x8,#0x8
7101b8de04  add x8,sp,#0x10
7101b8de08  mov w20,w2
7101b8de0c  bl 0x7103776640
7101b8de10  mov w8,#0x48
7101b8de14  sxtw x21,w20
7101b8de18  smaddl x20,w20,w8,x19
7101b8de1c  mov w8,#0xb
7101b8de20  str w8,[x20, #0x78]
7101b8de24  adrp x1,0x71042e7000
7101b8de28  add x1,x1,#0x718
7101b8de2c  mov x8,sp
7101b8de30  add x0,sp,#0x10
7101b8de34  mov x22,sp
7101b8de38  bl 0x7103776910
7101b8de3c  add x8,x20,#0x90
7101b8de40  cmp x8,x22
7101b8de44  b.eq 0x7101b8de68
7101b8de48  mov w8,#0x48
7101b8de4c  madd x8,x21,x8,x19
7101b8de50  ldr x9,[sp, #0x8]
7101b8de54  str xzr,[sp, #0x8]
7101b8de58  ldr x0,[x8, #0x98]
7101b8de5c  str x9,[x8, #0x98]
7101b8de60  cbz x0,0x7101b8de68
7101b8de64  bl 0x710392eb40
7101b8de68  ldr x0,[sp, #0x8]
7101b8de6c  adrp x20,0x710523d000
7101b8de70  add x20,x20,#0x9a8
7101b8de74  stp x20,xzr,[sp]
7101b8de78  cbz x0,0x7101b8de80
7101b8de7c  bl 0x710392eb40
7101b8de80  adrp x1,0x710425f000
7101b8de84  add x1,x1,#0xfb
7101b8de88  mov x8,sp
7101b8de8c  add x0,sp,#0x10
7101b8de90  mov x22,sp
7101b8de94  bl 0x7103776910
7101b8de98  mov w8,#0x48
7101b8de9c  madd x8,x21,x8,x19
7101b8dea0  add x8,x8,#0xa0
7101b8dea4  cmp x8,x22
7101b8dea8  b.eq 0x7101b8decc
7101b8deac  mov w8,#0x48
7101b8deb0  madd x8,x21,x8,x19
7101b8deb4  ldr x9,[sp, #0x8]
7101b8deb8  str xzr,[sp, #0x8]
7101b8debc  ldr x0,[x8, #0xa8]
7101b8dec0  str x9,[x8, #0xa8]
7101b8dec4  cbz x0,0x7101b8decc
7101b8dec8  bl 0x710392eb40
7101b8decc  ldr x0,[sp, #0x8]
7101b8ded0  stp x20,xzr,[sp]
7101b8ded4  cbz x0,0x7101b8dedc
7101b8ded8  bl 0x710392eb40
7101b8dedc  adrp x1,0x71042d6000
7101b8dee0  add x1,x1,#0x88
7101b8dee4  mov x8,sp
7101b8dee8  add x0,sp,#0x10
7101b8deec  mov x22,sp
7101b8def0  bl 0x7103776910
7101b8def4  mov w8,#0x48
7101b8def8  madd x8,x21,x8,x19
7101b8defc  add x8,x8,#0x80
7101b8df00  cmp x8,x22
7101b8df04  b.eq 0x7101b8df28
7101b8df08  mov w8,#0x48
7101b8df0c  madd x8,x21,x8,x19
7101b8df10  ldr x9,[sp, #0x8]
7101b8df14  str xzr,[sp, #0x8]
7101b8df18  ldr x0,[x8, #0x88]
7101b8df1c  str x9,[x8, #0x88]
7101b8df20  cbz x0,0x7101b8df28
7101b8df24  bl 0x710392eb40
7101b8df28  ldr x0,[sp, #0x8]
7101b8df2c  stp x20,xzr,[sp]
7101b8df30  cbz x0,0x7101b8df38
7101b8df34  bl 0x710392eb40
7101b8df38  adrp x1,0x710426f000
7101b8df3c  add x1,x1,#0xda4
7101b8df40  mov x8,sp
7101b8df44  add x0,sp,#0x10
7101b8df48  mov x22,sp
7101b8df4c  bl 0x71037780e0
7101b8df50  mov w8,#0x48
7101b8df54  madd x8,x21,x8,x19
7101b8df58  add x8,x8,#0xb0
7101b8df5c  cmp x8,x22
7101b8df60  b.eq 0x7101b8df84
7101b8df64  mov w8,#0x48
7101b8df68  madd x8,x21,x8,x19
7101b8df6c  ldr x9,[sp, #0x8]
7101b8df70  str xzr,[sp, #0x8]
7101b8df74  ldr x0,[x8, #0xb8]
7101b8df78  str x9,[x8, #0xb8]
7101b8df7c  cbz x0,0x7101b8df84
7101b8df80  bl 0x710392eb40
7101b8df84  ldr x0,[sp, #0x8]
7101b8df88  adrp x8,0x710523d000
7101b8df8c  add x8,x8,#0x9e8
7101b8df90  stp x8,xzr,[sp]
7101b8df94  cbz x0,0x7101b8df9c
7101b8df98  bl 0x710392eb40
7101b8df9c  ldr x19,[sp, #0x18]
7101b8dfa0  adrp x8,0x710523d000
7101b8dfa4  add x8,x8,#0x988
7101b8dfa8  stp x8,xzr,[sp, #0x10]
7101b8dfac  cbz x19,0x7101b8dfc8
7101b8dfb0  ldr x0,[x19, #0x18]
7101b8dfb4  stp x20,xzr,[x19, #0x10]
7101b8dfb8  cbz x0,0x7101b8dfc0
7101b8dfbc  bl 0x710392eb40
7101b8dfc0  mov x0,x19
7101b8dfc4  bl 0x710392eb40
7101b8dfc8  ldp x29,x30,[sp, #0x40]
7101b8dfcc  ldp x20,x19,[sp, #0x30]
7101b8dfd0  ldp x22,x21,[sp, #0x20]
7101b8dfd4  add sp,sp,#0x50
7101b8dfd8  ret
