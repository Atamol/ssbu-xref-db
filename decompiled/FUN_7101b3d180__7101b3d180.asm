// addr:      7101b3d180
// offset:    0x1b3d180
// name:      FUN_7101b3d180
// mangled:   
// size:      284

7101b3d180  stp d9,d8,[sp, #-0x60]!
7101b3d184  str x25,[sp, #0x10]
7101b3d188  stp x24,x23,[sp, #0x20]
7101b3d18c  stp x22,x21,[sp, #0x30]
7101b3d190  stp x20,x19,[sp, #0x40]
7101b3d194  stp x29,x30,[sp, #0x50]
7101b3d198  add x29,sp,#0x50
7101b3d19c  ldp x24,x8,[x0]
7101b3d1a0  ldr w8,[x8]
7101b3d1a4  mov w19,w5
7101b3d1a8  mov w21,w4
7101b3d1ac  mov w22,w3
7101b3d1b0  mov x20,x0
7101b3d1b4  mov w23,w2
7101b3d1b8  cmp w8,#0xa
7101b3d1bc  b.lt 0x7101b3d1e4
7101b3d1c0  mov w9,#0xcccd
7101b3d1c4  movk w9,#0xcccc, LSL #16
7101b3d1c8  umull x9,w8,w9
7101b3d1cc  lsr x9,x9,#0x23
7101b3d1d0  scvtf s8,w9
7101b3d1d4  mov w10,#0xfffffff6
7101b3d1d8  madd w8,w9,w10,w8
7101b3d1dc  fmov s0,0x3f800000
7101b3d1e0  b 0x7101b3d1ec
7101b3d1e4  fmov s8,wzr
7101b3d1e8  mov v0.16B,v8.16B
7101b3d1ec  add x25,x24,#0x20
7101b3d1f0  add x0,x25,w1, UXTW  #0x4
7101b3d1f4  scvtf s9,w8
7101b3d1f8  bl 0x710377b010
7101b3d1fc  mov v0.16B,v8.16B
7101b3d200  add x0,x25,w23, UXTW  #0x4
7101b3d204  bl 0x710377b010
7101b3d208  mov v0.16B,v9.16B
7101b3d20c  add x0,x25,w22, UXTW  #0x4
7101b3d210  bl 0x710377b010
7101b3d214  ldr x8,[x20, #0x8]
7101b3d218  ldr w8,[x8]
7101b3d21c  add x0,x25,w21, UXTW  #0x4
7101b3d220  cmp w8,#0x6
7101b3d224  b.lt 0x7101b3d254
7101b3d228  fmov s0,0x40c00000
7101b3d22c  bl 0x710377b010
7101b3d230  add x8,x24,w19, UXTW  #0x4
7101b3d234  add x0,x8,#0xb0
7101b3d238  ldr x8,[x20, #0x8]
7101b3d23c  ldr w3,[x8]
7101b3d240  adrp x1,0x710438c000
7101b3d244  add x1,x1,#0x5de
7101b3d248  mov w2,#0x1
7101b3d24c  bl 0x710377a280
7101b3d250  b 0x7101b3d280
7101b3d254  scvtf s0,w8
7101b3d258  bl 0x710377b010
7101b3d25c  add x8,x24,w19, UXTW  #0x4
7101b3d260  ldr x8,[x8, #0xb8]
7101b3d264  ldr x0,[x8, #0x10]
7101b3d268  cbz x0,0x7101b3d280
7101b3d26c  add x1,sp,#0x1c
7101b3d270  mov w2,wzr
7101b3d274  mov w3,wzr
7101b3d278  str wzr,[sp, #0x1c]
7101b3d27c  bl 0x71037a2270
7101b3d280  ldp x29,x30,[sp, #0x50]
7101b3d284  ldr x25,[sp, #0x10]
7101b3d288  ldp x20,x19,[sp, #0x40]
7101b3d28c  ldp x22,x21,[sp, #0x30]
7101b3d290  ldp x24,x23,[sp, #0x20]
7101b3d294  ldp d9,d8,[sp], #0x60
7101b3d298  ret
