// addr:      7102e1ce90
// offset:    0x2e1ce90
// name:      FUN_7102e1ce90
// mangled:   
// size:      440

7102e1ce90  sub sp,sp,#0x80
7102e1ce94  str d8,[sp, #0x50]
7102e1ce98  stp x20,x19,[sp, #0x60]
7102e1ce9c  stp x29,x30,[sp, #0x70]
7102e1cea0  add x29,sp,#0x70
7102e1cea4  ldr x8,[x0, #0x8]
7102e1cea8  mov v8.16B,v0.16B
7102e1ceac  mov x19,x0
7102e1ceb0  cbz x8,0x7102e1cecc
7102e1ceb4  ldr x0,[x8, #0x90]
7102e1ceb8  ldr x8,[x0]
7102e1cebc  ldr x8,[x8, #0x158]
7102e1cec0  blr x8
7102e1cec4  mov x20,x0
7102e1cec8  b 0x7102e1cee4
7102e1cecc  adrp x8,0x710532a000
7102e1ced0  add x8,x8,#0x9e0
7102e1ced4  ldarb w8,[x8]
7102e1ced8  tbz w8,#0x0,0x7102e1cff8
7102e1cedc  adrp x20,0x710532a000
7102e1cee0  add x20,x20,#0x9f0
7102e1cee4  ldr x8,[x20, #0x8]
7102e1cee8  ldr x9,[x20, #0x18]
7102e1ceec  str x9,[sp, #0x18]
7102e1cef0  str x8,[sp, #0x8]
7102e1cef4  ldr x8,[x20, #0x28]
7102e1cef8  ldr x9,[x20, #0x38]
7102e1cefc  str x9,[sp, #0x38]
7102e1cf00  str x8,[sp, #0x28]
7102e1cf04  ldr x8,[x20]
7102e1cf08  ldr x9,[x20, #0x10]
7102e1cf0c  str x9,[sp, #0x10]
7102e1cf10  str x8,[sp]
7102e1cf14  ldr x8,[x20, #0x20]
7102e1cf18  ldr x9,[x20, #0x30]
7102e1cf1c  mov v0.16B,v8.16B
7102e1cf20  mov x0,x19
7102e1cf24  str x9,[sp, #0x30]
7102e1cf28  str x8,[sp, #0x20]
7102e1cf2c  bl 0x7102e1d050
7102e1cf30  ldr x8,[x19, #0x18]
7102e1cf34  ldr x8,[x8, #0x38]
7102e1cf38  add x20,x19,#0x50
7102e1cf3c  cbz x8,0x7102e1cf5c
7102e1cf40  ldr x0,[x8, #0x130]
7102e1cf44  ldr x8,[x0]
7102e1cf48  ldr x8,[x8, #0x178]
7102e1cf4c  mov x2,sp
7102e1cf50  mov w3,#0x1
7102e1cf54  mov x1,x20
7102e1cf58  blr x8
7102e1cf5c  ldr x8,[x19, #0x20]
7102e1cf60  ldr x8,[x8, #0x38]
7102e1cf64  cbz x8,0x7102e1cf84
7102e1cf68  ldr x0,[x8, #0x130]
7102e1cf6c  ldr x8,[x0]
7102e1cf70  ldr x8,[x8, #0x178]
7102e1cf74  mov x2,sp
7102e1cf78  mov w3,#0x1
7102e1cf7c  mov x1,x20
7102e1cf80  blr x8
7102e1cf84  ldr x8,[x19, #0x30]
7102e1cf88  ldr x8,[x8, #0x38]
7102e1cf8c  cbz x8,0x7102e1cfac
7102e1cf90  ldr x0,[x8, #0x130]
7102e1cf94  ldr x8,[x0]
7102e1cf98  ldr x8,[x8, #0x168]
7102e1cf9c  mov x2,sp
7102e1cfa0  mov w3,#0x1
7102e1cfa4  mov x1,x20
7102e1cfa8  blr x8
7102e1cfac  ldr q0,[x19, #0x80]
7102e1cfb0  movi d1,#0x0
7102e1cfb4  ldr x8,[x19]
7102e1cfb8  mov v0.D[0x1],v1.D[0x0]
7102e1cfbc  ldrsw x9,[x19, #0x44]
7102e1cfc0  stur q0,[x29, #-0x30]
7102e1cfc4  ldr x8,[x8, #0x1370]
7102e1cfc8  adrp x10,0x710513f000
7102e1cfcc  add x10,x10,#0xc40
7102e1cfd0  fmov s0,wzr
7102e1cfd4  ldr x2,[x10, x9, LSL #0x3]
7102e1cfd8  sub x3,x29,#0x30
7102e1cfdc  ldp x0,x1,[x8]
7102e1cfe0  bl 0x71025f51e0
7102e1cfe4  ldr d8,[sp, #0x50]
7102e1cfe8  ldp x29,x30,[sp, #0x70]
7102e1cfec  ldp x20,x19,[sp, #0x60]
7102e1cff0  add sp,sp,#0x80
7102e1cff4  ret
7102e1cff8  adrp x0,0x710532a000
7102e1cffc  add x0,x0,#0x9e0
7102e1d000  bl 0x71039c06b0
7102e1d004  adrp x20,0x710532a000
7102e1d008  add x20,x20,#0x9f0
7102e1d00c  cbz w0,0x7102e1cee4
7102e1d010  adrp x8,0x7104468000
7102e1d014  adrp x9,0x710446a000
7102e1d018  ldr q1,[x9, #0x360]
7102e1d01c  ldr q0,[x8, #0xca0]
7102e1d020  adrp x10,0x7104465000
7102e1d024  adrp x8,0x710446a000
7102e1d028  stp q0,q1,[x20]
7102e1d02c  ldr q0,[x10, #0x6b0]
7102e1d030  ldr q1,[x8, #0x350]
7102e1d034  adrp x0,0x710532a000
7102e1d038  add x0,x0,#0x9e0
7102e1d03c  stp q0,q1,[x20, #0x20]
7102e1d040  bl 0x71039c06c0
7102e1d044  b 0x7102e1cee4
