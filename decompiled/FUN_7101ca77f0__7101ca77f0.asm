// addr:      7101ca77f0
// offset:    0x1ca77f0
// name:      FUN_7101ca77f0
// mangled:   
// size:      252

7101ca77f0  sub sp,sp,#0x60
7101ca77f4  str x21,[sp, #0x30]
7101ca77f8  stp x20,x19,[sp, #0x40]
7101ca77fc  stp x29,x30,[sp, #0x50]
7101ca7800  add x29,sp,#0x50
7101ca7804  ldr x8,[x0, #0x150]
7101ca7808  add x0,sp,#0x20
7101ca780c  ldr x8,[x8]
7101ca7810  mov w19,w1
7101ca7814  add x1,x8,#0x8
7101ca7818  bl 0x7103776390
7101ca781c  adrp x1,0x71043ae000
7101ca7820  add x1,x1,#0xcc
7101ca7824  mov x8,sp
7101ca7828  add x0,sp,#0x20
7101ca782c  bl 0x7103776640
7101ca7830  adrp x1,0x7104431000
7101ca7834  add x1,x1,#0x6d5
7101ca7838  add x8,sp,#0x10
7101ca783c  mov x0,sp
7101ca7840  bl 0x7103776910
7101ca7844  sub w8,w19,#0x1
7101ca7848  cmp w8,#0x2
7101ca784c  b.hi 0x7101ca7860
7101ca7850  adrp x9,0x71050ae000
7101ca7854  add x9,x9,#0x80
7101ca7858  ldr x1,[x9, w8, SXTW #0x3]
7101ca785c  b 0x7101ca7868
7101ca7860  adrp x1,0x71042b4000
7101ca7864  add x1,x1,#0x4c6
7101ca7868  add x0,sp,#0x10
7101ca786c  bl 0x710377a120
7101ca7870  ldr x0,[sp, #0x18]
7101ca7874  adrp x20,0x710523d000
7101ca7878  add x20,x20,#0x9a8
7101ca787c  stp x20,xzr,[sp, #0x10]
7101ca7880  cbz x0,0x7101ca7888
7101ca7884  bl 0x710392eb40
7101ca7888  ldr x19,[sp, #0x8]
7101ca788c  adrp x21,0x710523d000
7101ca7890  add x21,x21,#0x988
7101ca7894  stp x21,xzr,[sp]
7101ca7898  cbz x19,0x7101ca78b4
7101ca789c  ldr x0,[x19, #0x18]
7101ca78a0  stp x20,xzr,[x19, #0x10]
7101ca78a4  cbz x0,0x7101ca78ac
7101ca78a8  bl 0x710392eb40
7101ca78ac  mov x0,x19
7101ca78b0  bl 0x710392eb40
7101ca78b4  ldr x19,[sp, #0x28]
7101ca78b8  stp x21,xzr,[sp, #0x20]
7101ca78bc  cbz x19,0x7101ca78d8
7101ca78c0  ldr x0,[x19, #0x18]
7101ca78c4  stp x20,xzr,[x19, #0x10]
7101ca78c8  cbz x0,0x7101ca78d0
7101ca78cc  bl 0x710392eb40
7101ca78d0  mov x0,x19
7101ca78d4  bl 0x710392eb40
7101ca78d8  ldp x29,x30,[sp, #0x50]
7101ca78dc  ldr x21,[sp, #0x30]
7101ca78e0  ldp x20,x19,[sp, #0x40]
7101ca78e4  add sp,sp,#0x60
7101ca78e8  ret
