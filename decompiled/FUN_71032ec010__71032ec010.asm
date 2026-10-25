// addr:      71032ec010
// offset:    0x32ec010
// name:      FUN_71032ec010
// mangled:   
// size:      300

71032ec010  sub sp,sp,#0x30
71032ec014  stp x20,x19,[sp, #0x10]
71032ec018  stp x29,x30,[sp, #0x20]
71032ec01c  add x29,sp,#0x20
71032ec020  mov w20,w1
71032ec024  mov x19,x0
71032ec028  tbz w1,#0x0,0x71032ec0d4
71032ec02c  ldrb w8,[x19, #0x1f3]
71032ec030  cbz w8,0x71032ec0d4
71032ec034  ldp x8,x9,[x19, #0x100]
71032ec038  subs x10,x9,x8
71032ec03c  asr x10,x10,#0x3
71032ec040  mov w11,#0x155
71032ec044  mul x10,x10,x11
71032ec048  sub x10,x10,#0x1
71032ec04c  csel x11,xzr,x10,eq
71032ec050  ldp x10,x12,[x19, #0x118]
71032ec054  add x10,x12,x10
71032ec058  cmp x11,x10
71032ec05c  b.ne 0x71032ec074
71032ec060  add x0,x19,#0xf8
71032ec064  bl 0x7101afbf30
71032ec068  ldp x10,x11,[x19, #0x118]
71032ec06c  add x10,x10,x11
71032ec070  ldp x8,x9,[x19, #0x100]
71032ec074  cmp x9,x8
71032ec078  b.eq 0x71032ec0b4
71032ec07c  mov x9,#0x6019
71032ec080  movk x9,#0x180, LSL #16
71032ec084  movk x9,#0x1806, LSL #32
71032ec088  movk x9,#0x8060, LSL #48
71032ec08c  umulh x9,x10,x9
71032ec090  sub x11,x10,x9
71032ec094  add x9,x9,x11, LSR #0x1
71032ec098  mov x11,#-0x155
71032ec09c  lsr x9,x9,#0x8
71032ec0a0  ldr x8,[x8, x9, LSL #0x3]
71032ec0a4  madd x9,x9,x11,x10
71032ec0a8  orr w10,wzr,#0xc
71032ec0ac  madd x8,x9,x10,x8
71032ec0b0  b 0x71032ec0b8
71032ec0b4  mov x8,xzr
71032ec0b8  mov x9,#0x4
71032ec0bc  movk x9,#0x1, LSL #32
71032ec0c0  str x9,[x8]
71032ec0c4  str wzr,[x8, #0x8]
71032ec0c8  ldr x8,[x19, #0x120]
71032ec0cc  add x8,x8,#0x1
71032ec0d0  str x8,[x19, #0x120]
71032ec0d4  mvn w8,w20
71032ec0d8  and w20,w8,#0x1
71032ec0dc  ldr x8,[x19, #0x130]
71032ec0e0  ldr x8,[x8]
71032ec0e4  add x0,x8,#0x8
71032ec0e8  adrp x1,0x71043ad000
71032ec0ec  add x1,x1,#0xfe3
71032ec0f0  mov x8,sp
71032ec0f4  bl 0x7103776910
71032ec0f8  ldr x0,[sp, #0x8]
71032ec0fc  ldr x8,[x0]
71032ec100  cbz x8,0x71032ec114
71032ec104  ldrb w9,[x8, #0x58]
71032ec108  and w9,w9,#0xfe
71032ec10c  orr w9,w9,w20
71032ec110  strb w9,[x8, #0x58]
71032ec114  adrp x8,0x710523d000
71032ec118  add x8,x8,#0x9a8
71032ec11c  stp x8,xzr,[sp]
71032ec120  cbz x0,0x71032ec128
71032ec124  bl 0x710392eb40
71032ec128  strb w20,[x19, #0x200]
71032ec12c  ldp x29,x30,[sp, #0x20]
71032ec130  ldp x20,x19,[sp, #0x10]
71032ec134  add sp,sp,#0x30
71032ec138  ret
