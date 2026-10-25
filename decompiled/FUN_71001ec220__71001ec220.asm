// addr:      71001ec220
// offset:    0x1ec220
// name:      FUN_71001ec220
// mangled:   
// size:      256

71001ec220  str x23,[sp, #-0x40]!
71001ec224  stp x22,x21,[sp, #0x10]
71001ec228  stp x20,x19,[sp, #0x20]
71001ec22c  stp x29,x30,[sp, #0x30]
71001ec230  add x29,sp,#0x30
71001ec234  ldr w8,[x0, #0xb4]
71001ec238  mov x20,x2
71001ec23c  mov x21,x1
71001ec240  mov x19,x0
71001ec244  add x22,x0,#0xa0
71001ec248  cbz w8,0x71001ec254
71001ec24c  mov x0,x22
71001ec250  bl 0x71001d1590
71001ec254  mov w0,#0x1c8
71001ec258  bl 0x71001af850
71001ec25c  mov x23,x0
71001ec260  cbz x0,0x71001ec278
71001ec264  mov x0,x23
71001ec268  mov x1,x22
71001ec26c  mov x2,x21
71001ec270  mov x3,x20
71001ec274  bl 0x71001ed620
71001ec278  str x23,[x19, #0x98]
71001ec27c  adrp x8,0x71052a4000
71001ec280  ldr x8,[x8, #0xda8]
71001ec284  adrp x21,0x71052a4000
71001ec288  ldrb w8,[x8]
71001ec28c  ldr x21,[x21, #0xdb0]
71001ec290  add x20,x21,#0x28
71001ec294  cbz w8,0x71001ec2d0
71001ec298  adrp x8,0x71052a4000
71001ec29c  ldr x8,[x8, #0xdb8]
71001ec2a0  ldr x0,[x8]
71001ec2a4  bl 0x7101717960
71001ec2a8  ldr w8,[x0]
71001ec2ac  cbz w8,0x71001ec2d0
71001ec2b0  ldr x10,[x21, #0xa0]
71001ec2b4  ldp x9,x10,[x10]
71001ec2b8  sub x10,x10,x9
71001ec2bc  asr x10,x10,#0x3
71001ec2c0  cmp x10,x8
71001ec2c4  b.ls 0x71001ec2e8
71001ec2c8  ldr x8,[x9, x8, LSL #0x3]
71001ec2cc  add x20,x8,#0x20
71001ec2d0  ldr x8,[x20]
71001ec2d4  cbz x8,0x71001ec300
71001ec2d8  ldr x8,[x8, #0x10]
71001ec2dc  cbz x8,0x71001ec300
71001ec2e0  ldr x0,[x8, #0x10]
71001ec2e4  b 0x71001ec304
71001ec2e8  adrp x0,0x71042c4000
71001ec2ec  add x0,x0,#0x35f
71001ec2f0  mov w1,#0x47
71001ec2f4  orr w2,wzr,#0xe0000003
71001ec2f8  mov w3,wzr
71001ec2fc  bl 0x71001b1300
71001ec300  mov x0,xzr
71001ec304  ldr x1,[x19, #0x98]
71001ec308  ldp x29,x30,[sp, #0x30]
71001ec30c  ldp x20,x19,[sp, #0x20]
71001ec310  mov w2,wzr
71001ec314  ldp x22,x21,[sp, #0x10]
71001ec318  ldr x23,[sp], #0x40
71001ec31c  b 0x71001ccdf0
