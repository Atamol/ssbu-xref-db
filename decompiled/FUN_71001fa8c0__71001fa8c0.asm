// addr:      71001fa8c0
// offset:    0x1fa8c0
// name:      FUN_71001fa8c0
// mangled:   
// size:      1188

71001fa8c0  sub sp,sp,#0xb0
71001fa8c4  stp x28,x27,[sp, #0x50]
71001fa8c8  stp x26,x25,[sp, #0x60]
71001fa8cc  stp x24,x23,[sp, #0x70]
71001fa8d0  stp x22,x21,[sp, #0x80]
71001fa8d4  stp x20,x19,[sp, #0x90]
71001fa8d8  stp x29,x30,[sp, #0xa0]
71001fa8dc  add x29,sp,#0xa0
71001fa8e0  str w6,[sp, #0x14]
71001fa8e4  str x2,[sp, #0x8]
71001fa8e8  adrp x8,0x71052a4000
71001fa8ec  ldr x8,[x8, #0xda8]
71001fa8f0  adrp x24,0x71052a4000
71001fa8f4  mov w25,w5
71001fa8f8  mov w21,w4
71001fa8fc  mov w20,w3
71001fa900  mov w27,w1
71001fa904  mov x22,x0
71001fa908  ldrb w8,[x8]
71001fa90c  ldr x24,[x24, #0xdb0]
71001fa910  mov w26,w7
71001fa914  add x19,x24,#0x28
71001fa918  cbz w8,0x71001fa954
71001fa91c  adrp x8,0x71052a4000
71001fa920  ldr x8,[x8, #0xdb8]
71001fa924  ldr x0,[x8]
71001fa928  bl 0x7101717960
71001fa92c  ldr w8,[x0]
71001fa930  cbz w8,0x71001fa954
71001fa934  ldr x10,[x24, #0xa0]
71001fa938  ldp x9,x10,[x10]
71001fa93c  sub x10,x10,x9
71001fa940  asr x10,x10,#0x3
71001fa944  cmp x10,x8
71001fa948  b.ls 0x71001fa96c
71001fa94c  ldr x8,[x9, x8, LSL #0x3]
71001fa950  add x19,x8,#0x20
71001fa954  ldr x8,[x19]
71001fa958  cbz x8,0x71001fa984
71001fa95c  ldr x8,[x8, #0x10]
71001fa960  cbz x8,0x71001fa984
71001fa964  ldr x19,[x8, #0x10]
71001fa968  b 0x71001fa988
71001fa96c  adrp x0,0x71042c4000
71001fa970  add x0,x0,#0x35f
71001fa974  mov w1,#0x47
71001fa978  orr w2,wzr,#0xe0000003
71001fa97c  mov w3,wzr
71001fa980  bl 0x71001b1300
71001fa984  mov x19,xzr
71001fa988  ldr x8,[x19, #0x78]!
71001fa98c  ldr x8,[x8, #0x10]
71001fa990  mov x0,x19
71001fa994  blr x8
71001fa998  tst w27,#0xffff
71001fa99c  strh wzr,[sp, #0x34]
71001fa9a0  b.ne 0x71001faa3c
71001fa9a4  cbnz w21,0x71001faa3c
71001fa9a8  ldr x8,[x22, #0x2c8]
71001fa9ac  ldr x9,[x22, #0x2d0]
71001fa9b0  cmp x8,x9
71001fa9b4  b.eq 0x71001faa38
71001fa9b8  sub x9,x9,#0x10
71001fa9bc  sub x9,x9,x8
71001fa9c0  lsr x10,x9,#0x4
71001fa9c4  add w9,w10,#0x1
71001fa9c8  and x9,x9,#0x1
71001fa9cc  mov w27,wzr
71001fa9d0  cbz x10,0x71001faa18
71001fa9d4  sub x11,x9,#0x1
71001fa9d8  sub x10,x11,x10
71001fa9dc  ldr w11,[x8]
71001fa9e0  cbz w11,0x71001fa9fc
71001fa9e4  ldr w11,[x8, #0x10]
71001fa9e8  cbz w11,0x71001faa08
71001fa9ec  add x8,x8,#0x20
71001fa9f0  adds x10,x10,#0x2
71001fa9f4  b.ne 0x71001fa9dc
71001fa9f8  b 0x71001faa18
71001fa9fc  ldrh w27,[x8, #0x4]
71001faa00  ldr w11,[x8, #0x10]
71001faa04  cbnz w11,0x71001fa9ec
71001faa08  ldrh w27,[x8, #0x14]
71001faa0c  add x8,x8,#0x20
71001faa10  adds x10,x10,#0x2
71001faa14  b.ne 0x71001fa9dc
71001faa18  cbz x9,0x71001faa3c
71001faa1c  ldr w9,[x8]
71001faa20  cbnz w9,0x71001faa3c
71001faa24  ldrh w27,[x8, #0x4]
71001faa28  ldrb w23,[x29, #0x10]
71001faa2c  cbz w21,0x71001faa44
71001faa30  tbz w23,#0x0,0x71001faaa8
71001faa34  b 0x71001faa44
71001faa38  mov w27,wzr
71001faa3c  ldrb w23,[x29, #0x10]
71001faa40  cbnz w21,0x71001faa30
71001faa44  add x1,sp,#0x38
71001faa48  mov x0,x22
71001faa4c  str w21,[sp, #0x38]
71001faa50  strh w27,[sp, #0x3c]
71001faa54  bl 0x71001fa660
71001faa58  cbz x0,0x71001faaa8
71001faa5c  mov x28,x0
71001faa60  cbz w21,0x71001faa84
71001faa64  ldr x8,[x28, #0xb0]
71001faa68  ldr x0,[x8, #0x10]
71001faa6c  ldr x8,[x0]
71001faa70  ldr x8,[x8, #0x48]
71001faa74  blr x8
71001faa78  ldr w8,[sp, #0x14]
71001faa7c  eor w8,w0,w8
71001faa80  tbnz w8,#0x0,0x71001faaa8
71001faa84  ldr w8,[x28, #0xd8]
71001faa88  add w8,w8,#0x1
71001faa8c  mov x0,x28
71001faa90  str w8,[x28, #0xd8]
71001faa94  bl 0x71001c38c0
71001faa98  bl 0x71001beb30
71001faa9c  tst w0,#0xffff
71001faaa0  strh w0,[sp, #0x34]
71001faaa4  b.ne 0x71001faadc
71001faaa8  tbz w23,#0x0,0x71001faab4
71001faaac  mov w20,wzr
71001faab0  b 0x71001fad30
71001faab4  ldr w8,[sp, #0x14]
71001faab8  and w4,w25,#0x1
71001faabc  and w6,w26,#0x1
71001faac0  add x2,sp,#0x34
71001faac4  mov x0,x22
71001faac8  mov w1,w27
71001faacc  mov w3,w21
71001faad0  and w5,w8,#0x1
71001faad4  bl 0x71001f9fb0
71001faad8  tbz w0,#0x0,0x71001fac40
71001faadc  tbz w20,#0x0,0x71001fad1c
71001faae0  cbnz w21,0x71001faaec
71001faae4  ldrh w8,[sp, #0x34]
71001faae8  strh w8,[x22, #0x128]
71001faaec  add x8,sp,#0x18
71001faaf0  stp x8,x8,[sp, #0x18]
71001faaf4  str xzr,[sp, #0x28]
71001faaf8  adrp x23,0x71052a6000
71001faafc  ldr x23,[x23, #0xe78]
71001fab00  ldr x0,[x23]
71001fab04  ldr x8,[x0]
71001fab08  ldr x8,[x8, #0x10]
71001fab0c  add x1,sp,#0x18
71001fab10  blr x8
71001fab14  adrp x20,0x71052a4000
71001fab18  ldr x8,[sp, #0x28]
71001fab1c  ldr x20,[x20, #0xda8]
71001fab20  cbz x8,0x71001facac
71001fab24  adrp x28,0x71052a4000
71001fab28  ldrh w22,[sp, #0x34]
71001fab2c  ldr x28,[x28, #0xdb8]
71001fab30  adrp x23,0x710449c000
71001fab34  add x23,x23,#0xe68
71001fab38  mov w21,w21
71001fab3c  mov w27,#0x47
71001fab40  adrp x25,0x71042c4000
71001fab44  add x25,x25,#0x35f
71001fab48  ldr x26,[sp, #0x20]
71001fab4c  ldrb w8,[x26, #0x78]
71001fab50  cbnz w8,0x71001fab5c
71001fab54  add x0,x26,#0x10
71001fab58  bl 0x71001f2180
71001fab5c  ldr x0,[x26, #0x18]
71001fab60  mov w1,w22
71001fab64  bl 0x71001bee30
71001fab68  strb wzr,[x26, #0x79]
71001fab6c  ldr x8,[sp, #0x20]
71001fab70  add x0,x8,#0x10
71001fab74  add x8,sp,#0x38
71001fab78  mov x1,x23
71001fab7c  mov x2,x21
71001fab80  bl 0x71001f2a80
71001fab84  ldrb w8,[x20]
71001fab88  add x26,x24,#0x18
71001fab8c  cbz w8,0x71001fabc0
71001fab90  ldr x0,[x28]
71001fab94  bl 0x7101717960
71001fab98  ldr w8,[x0]
71001fab9c  cbz w8,0x71001fabc0
71001faba0  ldr x10,[x24, #0xa0]
71001faba4  ldp x9,x10,[x10]
71001faba8  sub x10,x10,x9
71001fabac  asr x10,x10,#0x3
71001fabb0  cmp x10,x8
71001fabb4  b.ls 0x71001fabd0
71001fabb8  ldr x8,[x9, x8, LSL #0x3]
71001fabbc  add x26,x8,#0x10
71001fabc0  ldr x8,[x26]
71001fabc4  cbz x8,0x71001fabe4
71001fabc8  ldr x0,[x8, #0x10]
71001fabcc  b 0x71001fabe8
71001fabd0  orr w2,wzr,#0xe0000003
71001fabd4  mov x0,x25
71001fabd8  mov w1,w27
71001fabdc  mov w3,wzr
71001fabe0  bl 0x71001b1300
71001fabe4  mov x0,xzr
71001fabe8  ldr x8,[sp, #0x20]
71001fabec  add x1,x8,#0x10
71001fabf0  bl 0x71001ef610
71001fabf4  ldr x26,[sp, #0x20]
71001fabf8  ldp x8,x9,[x26]
71001fabfc  str x9,[x8, #0x8]
71001fac00  ldr x9,[x26, #0x8]
71001fac04  str x8,[x9]
71001fac08  ldr x8,[sp, #0x28]
71001fac0c  sub x8,x8,#0x1
71001fac10  str x8,[sp, #0x28]
71001fac14  mov x0,x26
71001fac18  ldr x8,[x0, #0x10]!
71001fac1c  ldr x8,[x8]
71001fac20  blr x8
71001fac24  mov x0,x26
71001fac28  bl 0x71001b1870
71001fac2c  ldr x8,[sp, #0x28]
71001fac30  cbnz x8,0x71001fab48
71001fac34  adrp x23,0x71052a6000
71001fac38  ldr x23,[x23, #0xe78]
71001fac3c  b 0x71001facb0
71001fac40  adrp x20,0x71052a4000
71001fac44  ldr x20,[x20, #0xda8]
71001fac48  ldrb w8,[x20]
71001fac4c  cbz w8,0x71001faaac
71001fac50  adrp x21,0x71052a4000
71001fac54  ldr x21,[x21, #0xdb8]
71001fac58  ldr x0,[x21]
71001fac5c  bl 0x7101717960
71001fac60  ldr w8,[x0]
71001fac64  cbz w8,0x71001fac98
71001fac68  ldr x9,[x24, #0xa0]
71001fac6c  ldp x10,x9,[x9]
71001fac70  sub x9,x9,x10
71001fac74  asr x9,x9,#0x3
71001fac78  cmp x9,x8
71001fac7c  b.hi 0x71001fac98
71001fac80  adrp x0,0x71042c4000
71001fac84  add x0,x0,#0x35f
71001fac88  mov w1,#0x47
71001fac8c  orr w2,wzr,#0xe0000003
71001fac90  mov w3,wzr
71001fac94  bl 0x71001b1300
71001fac98  ldrb w8,[x20]
71001fac9c  cbz w8,0x71001faaac
71001faca0  ldr x0,[x21]
71001faca4  bl 0x7101717960
71001faca8  b 0x71001faaac
71001facac  ldrh w22,[sp, #0x34]
71001facb0  ldr x0,[x23]
71001facb4  ldr x8,[x0]
71001facb8  ldr x8,[x8, #0x60]
71001facbc  mov w1,w22
71001facc0  blr x8
71001facc4  ldr x8,[sp, #0x28]
71001facc8  cbz x8,0x71001fad1c
71001faccc  ldp x8,x21,[sp, #0x18]
71001facd0  ldr x9,[x8, #0x8]
71001facd4  ldr x10,[x21]
71001facd8  str x9,[x10, #0x8]
71001facdc  ldr x8,[x8, #0x8]
71001face0  add x20,sp,#0x18
71001face4  cmp x21,x20
71001face8  str x10,[x8]
71001facec  str xzr,[sp, #0x28]
71001facf0  b.eq 0x71001fad1c
71001facf4  mov x0,x21
71001facf8  ldr x22,[x21, #0x8]
71001facfc  ldr x8,[x0, #0x10]!
71001fad00  ldr x8,[x8]
71001fad04  blr x8
71001fad08  mov x0,x21
71001fad0c  bl 0x71001b1870
71001fad10  cmp x22,x20
71001fad14  mov x21,x22
71001fad18  b.ne 0x71001facf4
71001fad1c  ldr x9,[sp, #0x8]
71001fad20  cbz x9,0x71001fad2c
71001fad24  ldrh w8,[sp, #0x34]
71001fad28  strh w8,[x9]
71001fad2c  mov w20,#0x1
71001fad30  ldr x8,[x19]
71001fad34  ldr x8,[x8, #0x20]
71001fad38  mov x0,x19
71001fad3c  blr x8
71001fad40  mov w0,w20
71001fad44  ldp x29,x30,[sp, #0xa0]
71001fad48  ldp x20,x19,[sp, #0x90]
71001fad4c  ldp x22,x21,[sp, #0x80]
71001fad50  ldp x24,x23,[sp, #0x70]
71001fad54  ldp x26,x25,[sp, #0x60]
71001fad58  ldp x28,x27,[sp, #0x50]
71001fad5c  add sp,sp,#0xb0
71001fad60  ret
