// addr:      7101ad7870
// offset:    0x1ad7870
// name:      FUN_7101ad7870
// mangled:   
// size:      672

7101ad7870  sub sp,sp,#0xe0
7101ad7874  str d8,[sp, #0x80]
7101ad7878  stp x26,x25,[sp, #0x90]
7101ad787c  stp x24,x23,[sp, #0xa0]
7101ad7880  stp x22,x21,[sp, #0xb0]
7101ad7884  stp x20,x19,[sp, #0xc0]
7101ad7888  stp x29,x30,[sp, #0xd0]
7101ad788c  add x29,sp,#0xd0
7101ad7890  mov w19,w2
7101ad7894  mov w2,w1
7101ad7898  mov x20,x0
7101ad789c  adrp x1,0x71042c5000
7101ad78a0  add x1,x1,#0x15
7101ad78a4  strb wzr,[sp, #0x40]
7101ad78a8  add x0,sp,#0x38
7101ad78ac  str xzr,[sp, #0x38]
7101ad78b0  add x21,sp,#0x38
7101ad78b4  bl 0x710062dc20
7101ad78b8  ldr x8,[x20, #0x10]!
7101ad78bc  ldr x9,[x20, #0x8]
7101ad78c0  cmp x9,x8
7101ad78c4  b.eq 0x7101ad7b08
7101ad78c8  ldr x8,[x8]
7101ad78cc  ldr x8,[x8]
7101ad78d0  ldr x8,[x8]
7101ad78d4  add x0,x8,#0x8
7101ad78d8  add x1,x21,#0x8
7101ad78dc  add x8,sp,#0x28
7101ad78e0  bl 0x7103776640
7101ad78e4  adrp x1,0x7104359000
7101ad78e8  add x1,x1,#0xb85
7101ad78ec  add x8,sp,#0x18
7101ad78f0  add x0,sp,#0x28
7101ad78f4  bl 0x7103776640
7101ad78f8  mov w0,#0x10
7101ad78fc  mov w1,#0x20
7101ad7900  bl 0x710392e290
7101ad7904  mov x20,x0
7101ad7908  cbnz x0,0x7101ad7954
7101ad790c  adrp x8,0x7105332000
7101ad7910  ldr x0,[x8, #0xf00]
7101ad7914  cbz x0,0x7101ad7950
7101ad7918  mov w8,#0x20
7101ad791c  stur wzr,[x29, #-0x44]
7101ad7920  sub x1,x29,#0x44
7101ad7924  str x8,[sp, #0x8]
7101ad7928  ldr x8,[x0]
7101ad792c  ldr x8,[x8, #0x30]
7101ad7930  add x2,sp,#0x8
7101ad7934  blr x8
7101ad7938  tbz w0,#0x0,0x7101ad7950
7101ad793c  mov w0,#0x10
7101ad7940  mov w1,#0x20
7101ad7944  bl 0x710392e290
7101ad7948  mov x20,x0
7101ad794c  cbnz x0,0x7101ad7954
7101ad7950  mov x20,xzr
7101ad7954  fmov s8,0x3f800000
7101ad7958  mov w21,wzr
7101ad795c  adrp x23,0x710436a000
7101ad7960  add x23,x23,#0xc27
7101ad7964  adrp x25,0x710523d000
7101ad7968  add x25,x25,#0x9a8
7101ad796c  stp xzr,xzr,[x20, #0x10]
7101ad7970  stp xzr,xzr,[x20]
7101ad7974  tbz w19,#0x0,0x7101ad79fc
7101ad7978  mov w26,#0x1
7101ad797c  adrp x24,0x7104319000
7101ad7980  add x24,x24,#0x47e
7101ad7984  add x8,sp,#0x8
7101ad7988  add x0,sp,#0x18
7101ad798c  mov x1,x23
7101ad7990  mov w2,w21
7101ad7994  bl 0x7103776910
7101ad7998  ldr x19,[sp, #0x10]
7101ad799c  str xzr,[sp, #0x10]
7101ad79a0  cbz x20,0x7101ad79ac
7101ad79a4  mov x0,x20
7101ad79a8  bl 0x710392eb40
7101ad79ac  stp x25,xzr,[sp, #0x8]
7101ad79b0  ldr x0,[x19]
7101ad79b4  bl 0x710377aae0
7101ad79b8  cbz x0,0x7101ad79c0
7101ad79bc  strb w26,[x0, #0x13a]
7101ad79c0  ldr x8,[x19]
7101ad79c4  cbz x8,0x7101ad79d4
7101ad79c8  ldrb w9,[x8, #0x58]
7101ad79cc  orr w9,w9,#0x1
7101ad79d0  strb w9,[x8, #0x58]
7101ad79d4  ldr x22,[sp, #0x20]
7101ad79d8  mov v0.16B,v8.16B
7101ad79dc  mov x1,x24
7101ad79e0  mov x0,x22
7101ad79e4  bl 0x7103778300
7101ad79e8  add w21,w21,#0x1
7101ad79ec  cmp w21,#0x10
7101ad79f0  mov x20,x19
7101ad79f4  b.ne 0x7101ad7984
7101ad79f8  b 0x7101ad7a80
7101ad79fc  adrp x24,0x7104338000
7101ad7a00  add x24,x24,#0xaad
7101ad7a04  add x8,sp,#0x8
7101ad7a08  add x0,sp,#0x18
7101ad7a0c  mov x1,x23
7101ad7a10  mov w2,w21
7101ad7a14  bl 0x7103776910
7101ad7a18  ldr x19,[sp, #0x10]
7101ad7a1c  str xzr,[sp, #0x10]
7101ad7a20  cbz x20,0x7101ad7a2c
7101ad7a24  mov x0,x20
7101ad7a28  bl 0x710392eb40
7101ad7a2c  stp x25,xzr,[sp, #0x8]
7101ad7a30  ldr x0,[x19]
7101ad7a34  mov w1,wzr
7101ad7a38  bl 0x710377aa20
7101ad7a3c  ldr x8,[x19]
7101ad7a40  cbz x8,0x7101ad7a50
7101ad7a44  ldrb w9,[x8, #0x58]
7101ad7a48  and w9,w9,#0xfe
7101ad7a4c  strb w9,[x8, #0x58]
7101ad7a50  ldr x22,[sp, #0x20]
7101ad7a54  mov v0.16B,v8.16B
7101ad7a58  mov x1,x24
7101ad7a5c  mov x0,x22
7101ad7a60  bl 0x7103778300
7101ad7a64  ldr x0,[x19]
7101ad7a68  mov w1,#0x1
7101ad7a6c  bl 0x710377acb0
7101ad7a70  add w21,w21,#0x1
7101ad7a74  cmp w21,#0x10
7101ad7a78  mov x20,x19
7101ad7a7c  b.ne 0x7101ad7a04
7101ad7a80  mov x0,x19
7101ad7a84  bl 0x710392eb40
7101ad7a88  adrp x19,0x710523d000
7101ad7a8c  add x19,x19,#0x988
7101ad7a90  stp x19,xzr,[sp, #0x18]
7101ad7a94  cbz x22,0x7101ad7ab8
7101ad7a98  ldr x0,[x22, #0x18]
7101ad7a9c  adrp x8,0x710523d000
7101ad7aa0  add x8,x8,#0x9a8
7101ad7aa4  stp x8,xzr,[x22, #0x10]
7101ad7aa8  cbz x0,0x7101ad7ab0
7101ad7aac  bl 0x710392eb40
7101ad7ab0  mov x0,x22
7101ad7ab4  bl 0x710392eb40
7101ad7ab8  str x19,[sp, #0x28]
7101ad7abc  ldr x19,[sp, #0x30]
7101ad7ac0  str xzr,[sp, #0x30]
7101ad7ac4  cbz x19,0x7101ad7ae8
7101ad7ac8  ldr x0,[x19, #0x18]
7101ad7acc  adrp x8,0x710523d000
7101ad7ad0  add x8,x8,#0x9a8
7101ad7ad4  stp x8,xzr,[x19, #0x10]
7101ad7ad8  cbz x0,0x7101ad7ae0
7101ad7adc  bl 0x710392eb40
7101ad7ae0  mov x0,x19
7101ad7ae4  bl 0x710392eb40
7101ad7ae8  ldr d8,[sp, #0x80]
7101ad7aec  ldp x29,x30,[sp, #0xd0]
7101ad7af0  ldp x20,x19,[sp, #0xc0]
7101ad7af4  ldp x22,x21,[sp, #0xb0]
7101ad7af8  ldp x24,x23,[sp, #0xa0]
7101ad7afc  ldp x26,x25,[sp, #0x90]
7101ad7b00  add sp,sp,#0xe0
7101ad7b04  ret
7101ad7b08  mov x0,x20
7101ad7b0c  bl 0x71039c1330
