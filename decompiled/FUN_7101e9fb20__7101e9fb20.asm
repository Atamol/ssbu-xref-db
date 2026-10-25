// addr:      7101e9fb20
// offset:    0x1e9fb20
// name:      FUN_7101e9fb20
// mangled:   
// size:      1704

7101e9fb20  sub sp,sp,#0xd0
7101e9fb24  stp x28,x27,[sp, #0x70]
7101e9fb28  stp x26,x25,[sp, #0x80]
7101e9fb2c  stp x24,x23,[sp, #0x90]
7101e9fb30  stp x22,x21,[sp, #0xa0]
7101e9fb34  stp x20,x19,[sp, #0xb0]
7101e9fb38  stp x29,x30,[sp, #0xc0]
7101e9fb3c  add x29,sp,#0xc0
7101e9fb40  mov x22,x1
7101e9fb44  mov x19,x0
7101e9fb48  mov w1,#0x88
7101e9fb4c  mov w0,#0x10
7101e9fb50  bl 0x710392e290
7101e9fb54  mov x20,x0
7101e9fb58  cbnz x0,0x7101e9fba4
7101e9fb5c  adrp x8,0x7105332000
7101e9fb60  ldr x0,[x8, #0xf00]
7101e9fb64  cbz x0,0x7101e9fba0
7101e9fb68  mov w8,#0x88
7101e9fb6c  str wzr,[sp, #0x38]
7101e9fb70  add x1,sp,#0x38
7101e9fb74  str x8,[sp, #0x48]
7101e9fb78  ldr x8,[x0]
7101e9fb7c  ldr x8,[x8, #0x30]
7101e9fb80  add x2,sp,#0x48
7101e9fb84  blr x8
7101e9fb88  tbz w0,#0x0,0x7101e9fba0
7101e9fb8c  mov w1,#0x88
7101e9fb90  mov w0,#0x10
7101e9fb94  bl 0x710392e290
7101e9fb98  mov x20,x0
7101e9fb9c  cbnz x0,0x7101e9fba4
7101e9fba0  mov x20,xzr
7101e9fba4  adrp x8,0x71050b2000
7101e9fba8  add x8,x8,#0x370
7101e9fbac  mov w1,#0x50
7101e9fbb0  stp x8,xzr,[x20]
7101e9fbb4  orr x8,xzr,#0x1ffffffff
7101e9fbb8  stp xzr,x8,[x20, #0x60]
7101e9fbbc  mov w8,#0x1
7101e9fbc0  mov w0,#0x10
7101e9fbc4  stp xzr,xzr,[x20, #0x10]
7101e9fbc8  strb wzr,[x20, #0x58]
7101e9fbcc  str x22,[x20, #0x78]
7101e9fbd0  strb w8,[x20, #0x70]
7101e9fbd4  stp xzr,xzr,[x20, #0x48]
7101e9fbd8  bl 0x710392e290
7101e9fbdc  mov x21,x0
7101e9fbe0  cbnz x0,0x7101e9fc2c
7101e9fbe4  adrp x8,0x7105332000
7101e9fbe8  ldr x0,[x8, #0xf00]
7101e9fbec  cbz x0,0x7101e9fc28
7101e9fbf0  mov w8,#0x50
7101e9fbf4  str wzr,[sp, #0x38]
7101e9fbf8  add x1,sp,#0x38
7101e9fbfc  str x8,[sp, #0x48]
7101e9fc00  ldr x8,[x0]
7101e9fc04  ldr x8,[x8, #0x30]
7101e9fc08  add x2,sp,#0x48
7101e9fc0c  blr x8
7101e9fc10  tbz w0,#0x0,0x7101e9fc28
7101e9fc14  mov w1,#0x50
7101e9fc18  mov w0,#0x10
7101e9fc1c  bl 0x710392e290
7101e9fc20  mov x21,x0
7101e9fc24  cbnz x0,0x7101e9fc2c
7101e9fc28  mov x21,xzr
7101e9fc2c  mov w0,#0x10
7101e9fc30  mov w1,#0x8
7101e9fc34  bl 0x710392e290
7101e9fc38  mov x23,x0
7101e9fc3c  cbnz x0,0x7101e9fc88
7101e9fc40  adrp x8,0x7105332000
7101e9fc44  ldr x0,[x8, #0xf00]
7101e9fc48  cbz x0,0x7101e9fc84
7101e9fc4c  mov w8,#0x8
7101e9fc50  str wzr,[sp, #0x38]
7101e9fc54  add x1,sp,#0x38
7101e9fc58  str x8,[sp, #0x48]
7101e9fc5c  ldr x8,[x0]
7101e9fc60  ldr x8,[x8, #0x30]
7101e9fc64  add x2,sp,#0x48
7101e9fc68  blr x8
7101e9fc6c  tbz w0,#0x0,0x7101e9fc84
7101e9fc70  mov w0,#0x10
7101e9fc74  mov w1,#0x8
7101e9fc78  bl 0x710392e290
7101e9fc7c  mov x23,x0
7101e9fc80  cbnz x0,0x7101e9fc88
7101e9fc84  mov x23,xzr
7101e9fc88  mov x0,x23
7101e9fc8c  bl 0x7103773200
7101e9fc90  str wzr,[x21, #0x48]
7101e9fc94  stp xzr,xzr,[x21, #0x38]
7101e9fc98  adrp x2,0x7104545000
7101e9fc9c  add x2,x2,#0xc78
7101e9fca0  mov w3,#0x1
7101e9fca4  stp xzr,xzr,[x21, #0x28]
7101e9fca8  mov x0,x21
7101e9fcac  str x23,[x21]
7101e9fcb0  stp xzr,xzr,[x21, #0x18]
7101e9fcb4  stp xzr,xzr,[x21, #0x8]
7101e9fcb8  str x21,[x20, #0x80]
7101e9fcbc  ldr x1,[x22]
7101e9fcc0  bl 0x71032cbf30
7101e9fcc4  ldr x8,[x21]
7101e9fcc8  ldr x8,[x8]
7101e9fccc  add x0,x8,#0x8
7101e9fcd0  adrp x1,0x71042d6000
7101e9fcd4  add x1,x1,#0x9ee
7101e9fcd8  add x8,sp,#0x28
7101e9fcdc  bl 0x7103776910
7101e9fce0  ldr x22,[sp, #0x30]
7101e9fce4  ldr x0,[x22]
7101e9fce8  cbz x0,0x7101e9fd1c
7101e9fcec  adrp x1,0x71042e7000
7101e9fcf0  add x1,x1,#0x922
7101e9fcf4  bl 0x71000598d0
7101e9fcf8  cbz x0,0x7101e9fd1c
7101e9fcfc  ldrb w8,[x0, #0xa]
7101e9fd00  cmp w8,#0x1
7101e9fd04  b.ne 0x7101e9fd1c
7101e9fd08  ldrh w8,[x0, #0x8]
7101e9fd0c  cbz w8,0x7101e9fd20
7101e9fd10  ldr w8,[x0, #0x4]
7101e9fd14  ldr w8,[x0, x8, LSL #0x0]
7101e9fd18  b 0x7101e9fd20
7101e9fd1c  mov w8,wzr
7101e9fd20  str w8,[x21, #0x20]
7101e9fd24  ldr x0,[x22]
7101e9fd28  cbz x0,0x7101e9fd5c
7101e9fd2c  adrp x1,0x7104270000
7101e9fd30  add x1,x1,#0x629
7101e9fd34  bl 0x71000598d0
7101e9fd38  cbz x0,0x7101e9fd5c
7101e9fd3c  ldrb w8,[x0, #0xa]
7101e9fd40  cmp w8,#0x1
7101e9fd44  b.ne 0x7101e9fd5c
7101e9fd48  ldrh w8,[x0, #0x8]
7101e9fd4c  cbz w8,0x7101e9fd60
7101e9fd50  ldr w8,[x0, #0x4]
7101e9fd54  ldr w8,[x0, x8, LSL #0x0]
7101e9fd58  b 0x7101e9fd60
7101e9fd5c  mov w8,wzr
7101e9fd60  str w8,[x21, #0x24]
7101e9fd64  ldr x0,[x22]
7101e9fd68  str x22,[sp]
7101e9fd6c  stp x20,x19,[sp, #0x8]
7101e9fd70  cbz x0,0x7101e9fda4
7101e9fd74  adrp x1,0x71043f0000
7101e9fd78  add x1,x1,#0xfde
7101e9fd7c  bl 0x71000598d0
7101e9fd80  cbz x0,0x7101e9fda4
7101e9fd84  ldrb w8,[x0, #0xa]
7101e9fd88  cmp w8,#0x1
7101e9fd8c  b.ne 0x7101e9fda4
7101e9fd90  ldrh w8,[x0, #0x8]
7101e9fd94  cbz w8,0x7101e9fda8
7101e9fd98  ldr w8,[x0, #0x4]
7101e9fd9c  ldr w8,[x0, x8, LSL #0x0]
7101e9fda0  b 0x7101e9fda8
7101e9fda4  mov w8,wzr
7101e9fda8  adrp x1,0x7104308000
7101e9fdac  add x1,x1,#0xb24
7101e9fdb0  mov x0,x21
7101e9fdb4  mov w2,wzr
7101e9fdb8  str w8,[x21, #0x28]
7101e9fdbc  bl 0x7101e9cad0
7101e9fdc0  adrp x1,0x710438d000
7101e9fdc4  add x1,x1,#0x262
7101e9fdc8  mov w2,#0x1
7101e9fdcc  mov x0,x21
7101e9fdd0  bl 0x7101e9cad0
7101e9fdd4  adrp x1,0x7104443000
7101e9fdd8  add x1,x1,#0xe20
7101e9fddc  mov w2,#0x2
7101e9fde0  mov x0,x21
7101e9fde4  bl 0x7101e9cad0
7101e9fde8  ldr x8,[x21]
7101e9fdec  ldr x8,[x8]
7101e9fdf0  add x0,x8,#0x8
7101e9fdf4  adrp x1,0x7104281000
7101e9fdf8  add x1,x1,#0x1d9
7101e9fdfc  add x8,sp,#0x48
7101e9fe00  bl 0x7103777850
7101e9fe04  ldp x8,x24,[sp, #0x48]
7101e9fe08  cmp x8,x24
7101e9fe0c  str x8,[sp, #0x18]
7101e9fe10  b.eq 0x7101ea0024
7101e9fe14  ldr x26,[sp, #0x18]
7101e9fe18  orr x23,xzr,#-0x5555555555555556
7101e9fe1c  orr x22,xzr,#-0x5555555555555556
7101e9fe20  movk x23,#0xaaa, LSL #48
7101e9fe24  adrp x20,0x7104867000
7101e9fe28  add x20,x20,#0xc2e
7101e9fe2c  add x8,x21,#0x30
7101e9fe30  movk x22,#0xaaab
7101e9fe34  str x8,[sp, #0x20]
7101e9fe38  adrp x28,0x710523d000
7101e9fe3c  add x28,x28,#0x9a8
7101e9fe40  add x0,sp,#0x38
7101e9fe44  mov x1,x26
7101e9fe48  bl 0x7103778ab0
7101e9fe4c  ldr w19,[x21, #0x48]
7101e9fe50  add w8,w19,#0x1
7101e9fe54  str w8,[x21, #0x48]
7101e9fe58  ldr x8,[sp, #0x40]
7101e9fe5c  ldr x8,[x8]
7101e9fe60  add x9,x8,#0xb0
7101e9fe64  cmp x8,#0x0
7101e9fe68  csel x25,x20,x9,eq
7101e9fe6c  ldp x8,x9,[x21, #0x38]
7101e9fe70  cmp x8,x9
7101e9fe74  b.eq 0x7101e9feac
7101e9fe78  str w19,[x8]
7101e9fe7c  str x25,[x8, #0x8]
7101e9fe80  strb wzr,[x8, #0x10]
7101e9fe84  ldr w9,[sp, #0x60]
7101e9fe88  ldrh w10,[sp, #0x64]
7101e9fe8c  ldrb w11,[sp, #0x66]
7101e9fe90  strb w11,[x8, #0x17]
7101e9fe94  sturh w10,[x8, #0x15]
7101e9fe98  stur w9,[x8, #0x11]
7101e9fe9c  ldr x8,[x21, #0x38]
7101e9fea0  add x8,x8,#0x18
7101e9fea4  str x8,[x21, #0x38]
7101e9fea8  b 0x7101e9fff4
7101e9feac  ldr x10,[sp, #0x20]
7101e9feb0  ldr x27,[x10]
7101e9feb4  sub x28,x8,x27
7101e9feb8  asr x8,x28,#0x3
7101e9febc  mul x20,x8,x22
7101e9fec0  add x8,x20,#0x1
7101e9fec4  cmp x8,x23
7101e9fec8  b.hi 0x7101ea01bc
7101e9fecc  sub x9,x9,x27
7101e9fed0  asr x9,x9,#0x3
7101e9fed4  mul x9,x9,x22
7101e9fed8  orr x10,xzr,#0x5555555555555555
7101e9fedc  movk x10,#0x5554
7101e9fee0  movk x10,#0x555, LSL #48
7101e9fee4  cmp x9,x10
7101e9fee8  b.hi 0x7101e9fefc
7101e9feec  lsl x9,x9,#0x1
7101e9fef0  cmp x9,x8
7101e9fef4  csel x23,x8,x9,cc
7101e9fef8  cbz x23,0x7101e9ff58
7101e9fefc  add x8,x23,x23, LSL #0x1
7101e9ff00  lsl x8,x8,#0x3
7101e9ff04  cmp x8,#0x0
7101e9ff08  csinc x22,x8,xzr,ne
7101e9ff0c  mov w0,#0x10
7101e9ff10  mov x1,x22
7101e9ff14  bl 0x710392e290
7101e9ff18  cbnz x0,0x7101e9ff5c
7101e9ff1c  adrp x8,0x7105332000
7101e9ff20  ldr x0,[x8, #0xf00]
7101e9ff24  cbz x0,0x7101e9ff58
7101e9ff28  stur wzr,[x29, #-0x54]
7101e9ff2c  str x22,[sp, #0x60]
7101e9ff30  ldr x8,[x0]
7101e9ff34  ldr x8,[x8, #0x30]
7101e9ff38  sub x1,x29,#0x54
7101e9ff3c  add x2,sp,#0x60
7101e9ff40  blr x8
7101e9ff44  tbz w0,#0x0,0x7101e9ff58
7101e9ff48  mov w0,#0x10
7101e9ff4c  mov x1,x22
7101e9ff50  bl 0x710392e290
7101e9ff54  cbnz x0,0x7101e9ff5c
7101e9ff58  mov x0,xzr
7101e9ff5c  orr w12,wzr,#0x18
7101e9ff60  madd x8,x20,x12,x0
7101e9ff64  madd x20,x23,x12,x0
7101e9ff68  str w19,[x8]
7101e9ff6c  str x25,[x8, #0x8]
7101e9ff70  strb wzr,[x8, #0x10]
7101e9ff74  ldr w9,[sp, #0x60]
7101e9ff78  ldrh w10,[sp, #0x64]
7101e9ff7c  ldrb w11,[sp, #0x66]
7101e9ff80  stur w9,[x8, #0x11]
7101e9ff84  orr x9,xzr,#0x5555555555555555
7101e9ff88  movk x9,#0xd555, LSL #48
7101e9ff8c  smulh x9,x28,x9
7101e9ff90  sturh w10,[x8, #0x15]
7101e9ff94  asr x10,x9,#0x2
7101e9ff98  add x9,x10,x9, LSR #0x3f
7101e9ff9c  madd x22,x9,x12,x8
7101e9ffa0  add x19,x8,#0x18
7101e9ffa4  cmp x28,#0x1
7101e9ffa8  strb w11,[x8, #0x17]
7101e9ffac  b.lt 0x7101e9ffc0
7101e9ffb0  mov x0,x22
7101e9ffb4  mov x1,x27
7101e9ffb8  mov x2,x28
7101e9ffbc  bl 0x71039c00e0
7101e9ffc0  stp x22,x19,[x21, #0x30]
7101e9ffc4  orr x23,xzr,#-0x5555555555555556
7101e9ffc8  orr x22,xzr,#-0x5555555555555556
7101e9ffcc  str x20,[x21, #0x40]
7101e9ffd0  movk x23,#0xaaa, LSL #48
7101e9ffd4  adrp x20,0x7104867000
7101e9ffd8  add x20,x20,#0xc2e
7101e9ffdc  movk x22,#0xaaab
7101e9ffe0  adrp x28,0x710523d000
7101e9ffe4  add x28,x28,#0x9a8
7101e9ffe8  cbz x27,0x7101e9fff4
7101e9ffec  mov x0,x27
7101e9fff0  bl 0x710392eb40
7101e9fff4  ldr x0,[sp, #0x40]
7101e9fff8  ldr x8,[x0]
7101e9fffc  cbz x8,0x7101ea000c
7101ea0000  ldrb w9,[x8, #0x58]
7101ea0004  and w9,w9,#0xfe
7101ea0008  strb w9,[x8, #0x58]
7101ea000c  stp x28,xzr,[sp, #0x38]
7101ea0010  cbz x0,0x7101ea0018
7101ea0014  bl 0x710392eb40
7101ea0018  add x26,x26,#0x10
7101ea001c  cmp x24,x26
7101ea0020  b.ne 0x7101e9fe40
7101ea0024  ldr x19,[sp, #0x18]
7101ea0028  cbnz x19,0x7101ea0040
7101ea002c  b 0x7101ea0054
7101ea0030  ldr x8,[x24, #-0x10]!
7101ea0034  ldr x8,[x8]
7101ea0038  mov x0,x24
7101ea003c  blr x8
7101ea0040  cmp x19,x24
7101ea0044  b.ne 0x7101ea0030
7101ea0048  mov x0,x19
7101ea004c  str x19,[sp, #0x50]
7101ea0050  bl 0x710392eb40
7101ea0054  ldr x0,[sp]
7101ea0058  adrp x8,0x710523d000
7101ea005c  add x8,x8,#0x9a8
7101ea0060  stp x8,xzr,[sp, #0x28]
7101ea0064  cbz x0,0x7101ea006c
7101ea0068  bl 0x710392eb40
7101ea006c  ldp x20,x19,[sp, #0x8]
7101ea0070  adrp x8,0x7105333000
7101ea0074  add x8,x8,#0x600
7101ea0078  str x8,[x20, #0x10]
7101ea007c  ldp w9,w8,[x8, #0x60]
7101ea0080  stp w9,w8,[x20, #0x68]
7101ea0084  adrp x8,0x7105333000
7101ea0088  add x8,x8,#0x650
7101ea008c  mov w9,#0x1
7101ea0090  ldaxrb w10,[x8]
7101ea0094  stxrb w11,w9,[x8]
7101ea0098  and w10,w10,#0x1
7101ea009c  cmp w11,#0x0
7101ea00a0  ccmp w10,#0x0,#0x0,eq
7101ea00a4  b.ne 0x7101ea0090
7101ea00a8  adrp x8,0x7105333000
7101ea00ac  add x8,x8,#0x648
7101ea00b0  ldr x9,[x8]
7101ea00b4  str x9,[x20, #0x48]
7101ea00b8  mov x0,x20
7101ea00bc  str x20,[x8], #0x8
7101ea00c0  stlrb wzr,[x8]
7101ea00c4  bl 0x71032caea0
7101ea00c8  ldr x0,[x19, #0xe0]
7101ea00cc  str x20,[x19, #0xe0]
7101ea00d0  cbz x0,0x7101ea00dc
7101ea00d4  bl 0x71032cad20
7101ea00d8  ldr x20,[x19, #0xe0]
7101ea00dc  strb wzr,[x20, #0x70]
7101ea00e0  ldrsw x8,[x19, #0xb4]
7101ea00e4  cmp w8,#0x13
7101ea00e8  b.cs 0x7101ea01c4
7101ea00ec  add x8,x19,x8, LSL #0x2
7101ea00f0  str wzr,[x8, #0x68]
7101ea00f4  ldr x8,[x19, #0xe0]
7101ea00f8  strb wzr,[x19, #0xc8]
7101ea00fc  str wzr,[x19, #0xf8]
7101ea0100  stp xzr,xzr,[x19, #0xe8]
7101ea0104  ldr x19,[x8, #0x80]
7101ea0108  ldp x8,x9,[x19, #0x8]
7101ea010c  cmp x9,x8
7101ea0110  b.eq 0x7101ea0148
7101ea0114  orr x21,xzr,#-0x5555555555555556
7101ea0118  mov x20,xzr
7101ea011c  movk x21,#0xaaab
7101ea0120  mov x0,x19
7101ea0124  mov w1,w20
7101ea0128  bl 0x7101e9cdb0
7101ea012c  ldp x8,x9,[x19, #0x8]
7101ea0130  sub x8,x9,x8
7101ea0134  asr x8,x8,#0x3
7101ea0138  mul x8,x8,x21
7101ea013c  add x20,x20,#0x1
7101ea0140  cmp x8,x20
7101ea0144  b.hi 0x7101ea0120
7101ea0148  ldp x8,x9,[x19, #0x30]
7101ea014c  cmp x9,x8
7101ea0150  str wzr,[x19, #0x2c]
7101ea0154  b.eq 0x7101ea018c
7101ea0158  orr x21,xzr,#-0x5555555555555556
7101ea015c  mov x20,xzr
7101ea0160  movk x21,#0xaaab
7101ea0164  mov x0,x19
7101ea0168  mov w1,w20
7101ea016c  bl 0x7101e9ced0
7101ea0170  ldp x8,x9,[x19, #0x30]
7101ea0174  sub x8,x9,x8
7101ea0178  asr x8,x8,#0x3
7101ea017c  mul x8,x8,x21
7101ea0180  add x20,x20,#0x1
7101ea0184  cmp x8,x20
7101ea0188  b.hi 0x7101ea0164
7101ea018c  str wzr,[x19, #0x48]
7101ea0190  adrp x8,0x7105326000
7101ea0194  ldr x8,[x8, #0x3b0]
7101ea0198  ldp x29,x30,[sp, #0xc0]
7101ea019c  ldr x0,[x8, #0x8]
7101ea01a0  ldp x20,x19,[sp, #0xb0]
7101ea01a4  ldp x22,x21,[sp, #0xa0]
7101ea01a8  ldp x24,x23,[sp, #0x90]
7101ea01ac  ldp x26,x25,[sp, #0x80]
7101ea01b0  ldp x28,x27,[sp, #0x70]
7101ea01b4  add sp,sp,#0xd0
7101ea01b8  b 0x7101ea3e60
7101ea01bc  ldr x0,[sp, #0x20]
7101ea01c0  bl 0x71039c0c00
7101ea01c4  bl 0x71039c2650
