// addr:      7101ddc760
// offset:    0x1ddc760
// name:      FUN_7101ddc760
// mangled:   
// size:      560

7101ddc760  sub sp,sp,#0x60
7101ddc764  str x21,[sp, #0x30]
7101ddc768  stp x20,x19,[sp, #0x40]
7101ddc76c  stp x29,x30,[sp, #0x50]
7101ddc770  add x29,sp,#0x50
7101ddc774  add x20,x0,#0x18
7101ddc778  mov w21,w1
7101ddc77c  mov x19,x0
7101ddc780  adrp x1,0x71042b4000
7101ddc784  add x1,x1,#0xa41
7101ddc788  add x8,sp,#0x20
7101ddc78c  mov x0,x20
7101ddc790  bl 0x7103776640
7101ddc794  adrp x1,0x710436c000
7101ddc798  add x1,x1,#0x8f9
7101ddc79c  add x8,sp,#0x10
7101ddc7a0  add x0,sp,#0x20
7101ddc7a4  bl 0x7103776640
7101ddc7a8  adrp x8,0x7105314000
7101ddc7ac  ldr x8,[x8, #0x510]
7101ddc7b0  ldr x8,[x8]
7101ddc7b4  ldr x8,[x8, #0xd8]
7101ddc7b8  ldr x8,[x8]
7101ddc7bc  ldr x8,[x8]
7101ddc7c0  ldr w3,[x8, #0x24]
7101ddc7c4  ldr x0,[x19, #0x98]
7101ddc7c8  str w3,[x19, #0x1010]
7101ddc7cc  tbz w21,#0x0,0x7101ddc93c
7101ddc7d0  ldr w8,[x0, #0x94]
7101ddc7d4  cmp w8,w3
7101ddc7d8  b.eq 0x7101ddc7ec
7101ddc7dc  add x1,x0,#0x18
7101ddc7e0  mov w2,#0x1
7101ddc7e4  str w3,[x0, #0x94]
7101ddc7e8  bl 0x710377a280
7101ddc7ec  adrp x1,0x710432a000
7101ddc7f0  add x1,x1,#0x5a6
7101ddc7f4  mov x8,sp
7101ddc7f8  mov x0,x20
7101ddc7fc  bl 0x7103776910
7101ddc800  ldr x0,[sp, #0x8]
7101ddc804  ldr x8,[x0]
7101ddc808  cbz x8,0x7101ddc818
7101ddc80c  ldrb w9,[x8, #0x58]
7101ddc810  orr w9,w9,#0x1
7101ddc814  strb w9,[x8, #0x58]
7101ddc818  adrp x8,0x710523d000
7101ddc81c  add x8,x8,#0x9a8
7101ddc820  stp x8,xzr,[sp]
7101ddc824  cbz x0,0x7101ddc82c
7101ddc828  bl 0x710392eb40
7101ddc82c  ldr x0,[sp, #0x28]
7101ddc830  fmov s0,wzr
7101ddc834  adrp x1,0x71043be000
7101ddc838  add x1,x1,#0xb1c
7101ddc83c  bl 0x7103778630
7101ddc840  ldr w8,[x19, #0x1014]
7101ddc844  cbz w8,0x7101ddc94c
7101ddc848  adrp x1,0x7104401000
7101ddc84c  add x1,x1,#0xa40
7101ddc850  mov x8,sp
7101ddc854  add x0,sp,#0x20
7101ddc858  bl 0x7103776910
7101ddc85c  ldr w3,[x19, #0x1014]
7101ddc860  adrp x1,0x71042e7000
7101ddc864  add x1,x1,#0x6fd
7101ddc868  mov x0,sp
7101ddc86c  mov w2,#0x1
7101ddc870  bl 0x710377a280
7101ddc874  ldr x0,[sp, #0x8]
7101ddc878  adrp x19,0x710523d000
7101ddc87c  add x19,x19,#0x9a8
7101ddc880  stp x19,xzr,[sp]
7101ddc884  cbz x0,0x7101ddc88c
7101ddc888  bl 0x710392eb40
7101ddc88c  adrp x1,0x7104401000
7101ddc890  add x1,x1,#0xa40
7101ddc894  mov x8,sp
7101ddc898  add x0,sp,#0x20
7101ddc89c  bl 0x7103776910
7101ddc8a0  ldr x0,[sp, #0x8]
7101ddc8a4  ldr x8,[x0]
7101ddc8a8  cbz x8,0x7101ddc8b8
7101ddc8ac  ldrb w9,[x8, #0x58]
7101ddc8b0  orr w9,w9,#0x1
7101ddc8b4  strb w9,[x8, #0x58]
7101ddc8b8  str x19,[sp]
7101ddc8bc  str xzr,[sp, #0x8]
7101ddc8c0  cbz x0,0x7101ddc8c8
7101ddc8c4  bl 0x710392eb40
7101ddc8c8  ldr x19,[sp, #0x18]
7101ddc8cc  adrp x20,0x710523d000
7101ddc8d0  add x20,x20,#0x988
7101ddc8d4  stp x20,xzr,[sp, #0x10]
7101ddc8d8  cbz x19,0x7101ddc8fc
7101ddc8dc  ldr x0,[x19, #0x18]
7101ddc8e0  adrp x8,0x710523d000
7101ddc8e4  add x8,x8,#0x9a8
7101ddc8e8  stp x8,xzr,[x19, #0x10]
7101ddc8ec  cbz x0,0x7101ddc8f4
7101ddc8f0  bl 0x710392eb40
7101ddc8f4  mov x0,x19
7101ddc8f8  bl 0x710392eb40
7101ddc8fc  ldr x19,[sp, #0x28]
7101ddc900  stp x20,xzr,[sp, #0x20]
7101ddc904  cbz x19,0x7101ddc928
7101ddc908  ldr x0,[x19, #0x18]
7101ddc90c  adrp x8,0x710523d000
7101ddc910  add x8,x8,#0x9a8
7101ddc914  stp x8,xzr,[x19, #0x10]
7101ddc918  cbz x0,0x7101ddc920
7101ddc91c  bl 0x710392eb40
7101ddc920  mov x0,x19
7101ddc924  bl 0x710392eb40
7101ddc928  ldp x29,x30,[sp, #0x50]
7101ddc92c  ldr x21,[sp, #0x30]
7101ddc930  ldp x20,x19,[sp, #0x40]
7101ddc934  add sp,sp,#0x60
7101ddc938  ret
7101ddc93c  mov w1,w3
7101ddc940  bl 0x7103399f50
7101ddc944  ldr w8,[x19, #0x1014]
7101ddc948  cbnz w8,0x7101ddc848
7101ddc94c  adrp x1,0x7104401000
7101ddc950  add x1,x1,#0xa40
7101ddc954  mov x8,sp
7101ddc958  add x0,sp,#0x20
7101ddc95c  bl 0x7103776910
7101ddc960  ldr x0,[sp, #0x8]
7101ddc964  ldr x8,[x0]
7101ddc968  cbz x8,0x7101ddc978
7101ddc96c  ldrb w9,[x8, #0x58]
7101ddc970  and w9,w9,#0xfe
7101ddc974  strb w9,[x8, #0x58]
7101ddc978  adrp x8,0x710523d000
7101ddc97c  add x8,x8,#0x9a8
7101ddc980  str x8,[sp]
7101ddc984  str xzr,[sp, #0x8]
7101ddc988  cbnz x0,0x7101ddc8c4
7101ddc98c  b 0x7101ddc8c8
