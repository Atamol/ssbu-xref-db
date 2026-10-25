// addr:      71001edb60
// offset:    0x1edb60
// name:      FUN_71001edb60
// mangled:   
// size:      256

71001edb60  sub sp,sp,#0x50
71001edb64  str x21,[sp, #0x20]
71001edb68  stp x20,x19,[sp, #0x30]
71001edb6c  stp x29,x30,[sp, #0x40]
71001edb70  add x29,sp,#0x40
71001edb74  adrp x8,0x71052a4000
71001edb78  ldr x8,[x8, #0xda8]
71001edb7c  adrp x21,0x71052a4000
71001edb80  ldrb w8,[x8]
71001edb84  ldr x21,[x21, #0xdb0]
71001edb88  mov x19,x0
71001edb8c  add x20,x21,#0x28
71001edb90  cbz w8,0x71001edbcc
71001edb94  adrp x8,0x71052a4000
71001edb98  ldr x8,[x8, #0xdb8]
71001edb9c  ldr x0,[x8]
71001edba0  bl 0x7101717960
71001edba4  ldr w8,[x0]
71001edba8  cbz w8,0x71001edbcc
71001edbac  ldr x10,[x21, #0xa0]
71001edbb0  ldp x9,x10,[x10]
71001edbb4  sub x10,x10,x9
71001edbb8  asr x10,x10,#0x3
71001edbbc  cmp x10,x8
71001edbc0  b.ls 0x71001edc48
71001edbc4  ldr x8,[x9, x8, LSL #0x3]
71001edbc8  add x20,x8,#0x20
71001edbcc  ldr x8,[x20]
71001edbd0  ldr x8,[x8, #0x10]
71001edbd4  ldr x0,[x8, #0x18]
71001edbd8  ldr w1,[x19, #0xa0]
71001edbdc  bl 0x71001cd7d0
71001edbe0  cbz x0,0x71001edc30
71001edbe4  mov x20,x0
71001edbe8  mov w8,#0x1
71001edbec  movk w8,#0x8001, LSL #16
71001edbf0  add x0,sp,#0x8
71001edbf4  sub x1,x29,#0x14
71001edbf8  stur w8,[x29, #-0x14]
71001edbfc  bl 0x71001b4200
71001edc00  orr w1,wzr,#0x3
71001edc04  add x2,sp,#0x8
71001edc08  mov x0,x20
71001edc0c  mov w3,wzr
71001edc10  bl 0x71001d0f00
71001edc14  mov x0,x19
71001edc18  bl 0x71001cd870
71001edc1c  ldp x29,x30,[sp, #0x40]
71001edc20  ldr x21,[sp, #0x20]
71001edc24  ldp x20,x19,[sp, #0x30]
71001edc28  add sp,sp,#0x50
71001edc2c  ret
71001edc30  mov x0,x19
71001edc34  ldp x29,x30,[sp, #0x40]
71001edc38  ldp x20,x19,[sp, #0x30]
71001edc3c  ldr x21,[sp, #0x20]
71001edc40  add sp,sp,#0x50
71001edc44  b 0x71001cd870
71001edc48  adrp x0,0x71042c4000
71001edc4c  add x0,x0,#0x35f
71001edc50  mov w1,#0x47
71001edc54  orr w2,wzr,#0xe0000003
71001edc58  mov w3,wzr
71001edc5c  bl 0x71001b1300
