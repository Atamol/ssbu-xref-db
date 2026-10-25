// addr:      7101dfe430
// offset:    0x1dfe430
// name:      FUN_7101dfe430
// mangled:   
// size:      368

7101dfe430  sub sp,sp,#0x40
7101dfe434  stp x20,x19,[sp, #0x20]
7101dfe438  stp x29,x30,[sp, #0x30]
7101dfe43c  add x29,sp,#0x30
7101dfe440  mov x9,x1
7101dfe444  mov x19,x0
7101dfe448  adrp x1,0x71042f8000
7101dfe44c  add x1,x1,#0x851
7101dfe450  add x8,sp,#0x10
7101dfe454  mov x0,x9
7101dfe458  mov x20,x2
7101dfe45c  bl 0x7103776640
7101dfe460  ldr w8,[x19, #0x2ac]
7101dfe464  ldr x19,[sp, #0x18]
7101dfe468  and w8,w8,#0xfffffffe
7101dfe46c  cmp w8,#0x6
7101dfe470  b.ne 0x7101dfe518
7101dfe474  fmov s0,0x3f800000
7101dfe478  adrp x1,0x7104292000
7101dfe47c  add x1,x1,#0x57e
7101dfe480  mov x0,x19
7101dfe484  bl 0x7103778300
7101dfe488  adrp x1,0x710434a000
7101dfe48c  add x1,x1,#0x8da
7101dfe490  mov x8,sp
7101dfe494  add x0,sp,#0x10
7101dfe498  bl 0x7103776910
7101dfe49c  mvn w8,w20
7101dfe4a0  mov w3,wzr
7101dfe4a4  tst w8,#0xffff
7101dfe4a8  b.eq 0x7101dfe534
7101dfe4ac  sxth w8,w20
7101dfe4b0  cmp w8,#0x7cf
7101dfe4b4  b.gt 0x7101dfe534
7101dfe4b8  adrp x8,0x710532f000
7101dfe4bc  ldr x8,[x8, #0x730]
7101dfe4c0  ldr x8,[x8, #0x8]
7101dfe4c4  ldr x8,[x8, #0x1d8]
7101dfe4c8  lsl x9,x20,#0x30
7101dfe4cc  add x9,x8,x9, ASR #0x2f
7101dfe4d0  ldp x10,x8,[x8, #0x20]
7101dfe4d4  ldrh w9,[x9, #0x60]
7101dfe4d8  sub x8,x8,x10
7101dfe4dc  mov w10,#0xcccd
7101dfe4e0  movk w10,#0xcccc, LSL #16
7101dfe4e4  lsr x8,x8,#0x6
7101dfe4e8  mul w8,w8,w10
7101dfe4ec  cmp w8,w9
7101dfe4f0  b.ls 0x7101dfe530
7101dfe4f4  adrp x8,0x7105329000
7101dfe4f8  ldr x8,[x8, #0xf98]
7101dfe4fc  ldr x8,[x8]
7101dfe500  ldr x8,[x8, #0x30]
7101dfe504  sxth x9,w20
7101dfe508  mov w10,#0x24
7101dfe50c  madd x8,x9,x10,x8
7101dfe510  ldrh w3,[x8, #0x20]
7101dfe514  b 0x7101dfe534
7101dfe518  fmov s0,0x3f800000
7101dfe51c  adrp x1,0x71043cd000
7101dfe520  add x1,x1,#0x335
7101dfe524  mov x0,x19
7101dfe528  bl 0x7103778300
7101dfe52c  b 0x7101dfe560
7101dfe530  mov w3,wzr
7101dfe534  adrp x1,0x71042b4000
7101dfe538  add x1,x1,#0x894
7101dfe53c  mov x0,sp
7101dfe540  mov w2,#0x1
7101dfe544  bl 0x710377a280
7101dfe548  ldr x0,[sp, #0x8]
7101dfe54c  adrp x8,0x710523d000
7101dfe550  add x8,x8,#0x9a8
7101dfe554  stp x8,xzr,[sp]
7101dfe558  cbz x0,0x7101dfe560
7101dfe55c  bl 0x710392eb40
7101dfe560  adrp x8,0x710523d000
7101dfe564  add x8,x8,#0x988
7101dfe568  stp x8,xzr,[sp, #0x10]
7101dfe56c  cbz x19,0x7101dfe590
7101dfe570  ldr x0,[x19, #0x18]
7101dfe574  adrp x8,0x710523d000
7101dfe578  add x8,x8,#0x9a8
7101dfe57c  stp x8,xzr,[x19, #0x10]
7101dfe580  cbz x0,0x7101dfe588
7101dfe584  bl 0x710392eb40
7101dfe588  mov x0,x19
7101dfe58c  bl 0x710392eb40
7101dfe590  ldp x29,x30,[sp, #0x30]
7101dfe594  ldp x20,x19,[sp, #0x20]
7101dfe598  add sp,sp,#0x40
7101dfe59c  ret
