// addr:      7101b4ee40
// offset:    0x1b4ee40
// name:      FUN_7101b4ee40
// mangled:   
// size:      472

7101b4ee40  sub sp,sp,#0x70
7101b4ee44  str d8,[sp, #0x10]
7101b4ee48  stp x26,x25,[sp, #0x20]
7101b4ee4c  stp x24,x23,[sp, #0x30]
7101b4ee50  stp x22,x21,[sp, #0x40]
7101b4ee54  stp x20,x19,[sp, #0x50]
7101b4ee58  stp x29,x30,[sp, #0x60]
7101b4ee5c  add x29,sp,#0x60
7101b4ee60  fmov s0,0x3f800000
7101b4ee64  mov x19,x0
7101b4ee68  add x0,x0,#0x30
7101b4ee6c  mov x22,x6
7101b4ee70  mov w23,w5
7101b4ee74  mov w25,w4
7101b4ee78  mov x24,x3
7101b4ee7c  mov x21,x2
7101b4ee80  mov x20,x1
7101b4ee84  bl 0x710377aee0
7101b4ee88  add w8,w25,#0x1
7101b4ee8c  cmp w8,#0x8
7101b4ee90  mov w8,#0x8
7101b4ee94  csinc w8,w8,w25,ge
7101b4ee98  cmp w8,#0x1
7101b4ee9c  csinc w2,w8,wzr,gt
7101b4eea0  add x0,x19,#0xd0
7101b4eea4  adrp x1,0x710439d000
7101b4eea8  add x1,x1,#0x180
7101b4eeac  bl 0x710377a120
7101b4eeb0  cmp w23,#0x3e7
7101b4eeb4  mov w8,#0x3e7
7101b4eeb8  csel w8,w23,w8,lt
7101b4eebc  bic w3,w8,w8, ASR #0x1f
7101b4eec0  add x0,x19,#0xe0
7101b4eec4  adrp x1,0x710439d000
7101b4eec8  add x1,x1,#0x1a0
7101b4eecc  mov w2,#0x1
7101b4eed0  bl 0x710377a280
7101b4eed4  ldr x23,[x21]
7101b4eed8  cmp w24,#0x1f
7101b4eedc  b.hi 0x7101b4ef60
7101b4eee0  sxtw x24,w24
7101b4eee4  cmp x24,#0x20
7101b4eee8  b.cs 0x7101b4f014
7101b4eeec  adrp x8,0x710532f000
7101b4eef0  ldr x8,[x8, #0x730]
7101b4eef4  ldr x8,[x8, #0x8]
7101b4eef8  adrp x25,0x710593b000
7101b4eefc  add x0,x8,#0x160
7101b4ef00  ldr x8,[x25, #0xc38]
7101b4ef04  ldr x8,[x8, #0x8]
7101b4ef08  ldr x26,[x8, x24, LSL #0x3]
7101b4ef0c  mov x1,x23
7101b4ef10  bl 0x7103265e70
7101b4ef14  cbz x26,0x7101b4ef60
7101b4ef18  tbz w0,#0x0,0x7101b4ef60
7101b4ef1c  ldr s0,[x22, #0x10]
7101b4ef20  ldr x0,[x19, #0x128]
7101b4ef24  mov x1,x22
7101b4ef28  bl 0x7103779770
7101b4ef2c  ldr x8,[x19, #0x128]
7101b4ef30  ldr x0,[x8, #0x8]
7101b4ef34  cbz x0,0x7101b4ef54
7101b4ef38  ldr x8,[x25, #0xc38]
7101b4ef3c  cbz x8,0x7101b4ef54
7101b4ef40  ldr x8,[x8, #0x8]
7101b4ef44  ldr x1,[x8, x24, LSL #0x3]
7101b4ef48  cbz x1,0x7101b4ef54
7101b4ef4c  mov w2,wzr
7101b4ef50  bl 0x710379e9c0
7101b4ef54  add x0,x19,#0x80
7101b4ef58  fmov s0,0x3f800000
7101b4ef5c  b 0x7101b4efb0
7101b4ef60  adrp x8,0x71052a8000
7101b4ef64  ldr x8,[x8, #0xa80]
7101b4ef68  ldr q0,[x8]
7101b4ef6c  fmov s8,0x3f800000
7101b4ef70  mov x1,sp
7101b4ef74  str q0,[sp]
7101b4ef78  ldr x0,[x19, #0x128]
7101b4ef7c  mov v0.16B,v8.16B
7101b4ef80  bl 0x7103779770
7101b4ef84  ldr x8,[x19]
7101b4ef88  ldr x0,[x8, #0x78]
7101b4ef8c  ldr w2,[x21, #0x8]
7101b4ef90  mov w3,#0x4
7101b4ef94  mov x1,x23
7101b4ef98  bl 0x710323f330
7101b4ef9c  mov x1,x0
7101b4efa0  ldr x0,[x19, #0x128]
7101b4efa4  bl 0x7103778b80
7101b4efa8  mov v0.16B,v8.16B
7101b4efac  add x0,x19,#0x90
7101b4efb0  bl 0x710377aee0
7101b4efb4  ldrb w8,[x20, #0x4]
7101b4efb8  cmp w8,#0x0
7101b4efbc  mov w8,#0x2
7101b4efc0  csel x8,xzr,x8,eq
7101b4efc4  ldrh w8,[x20, x8, LSL #0x0]
7101b4efc8  sub w8,w8,#0x2
7101b4efcc  cmp w8,#0xc
7101b4efd0  b.hi 0x7101b4efe8
7101b4efd4  sxth x8,w8
7101b4efd8  adrp x9,0x7104544000
7101b4efdc  add x9,x9,#0xa60
7101b4efe0  ldr s0,[x9,x8, lsl #2]
7101b4efe4  b 0x7101b4efec
7101b4efe8  fmov s0,wzr
7101b4efec  add x0,x19,#0x50
7101b4eff0  bl 0x710377b010
7101b4eff4  ldr d8,[sp, #0x10]
7101b4eff8  ldp x29,x30,[sp, #0x60]
7101b4effc  ldp x20,x19,[sp, #0x50]
7101b4f000  ldp x22,x21,[sp, #0x40]
7101b4f004  ldp x24,x23,[sp, #0x30]
7101b4f008  ldp x26,x25,[sp, #0x20]
7101b4f00c  add sp,sp,#0x70
7101b4f010  ret
7101b4f014  bl 0x71039c2650
