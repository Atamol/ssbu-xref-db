// addr:      7101dcfc60
// offset:    0x1dcfc60
// name:      FUN_7101dcfc60
// mangled:   
// size:      1108

7101dcfc60  sub sp,sp,#0x60
7101dcfc64  str x23,[sp, #0x20]
7101dcfc68  stp x22,x21,[sp, #0x30]
7101dcfc6c  stp x20,x19,[sp, #0x40]
7101dcfc70  stp x29,x30,[sp, #0x50]
7101dcfc74  add x29,sp,#0x50
7101dcfc78  tbnz w1,#0x1f,0x7101dd008c
7101dcfc7c  ldr x20,[x0, #0x8]
7101dcfc80  ldr x8,[x20, #0x20]
7101dcfc84  ldr x8,[x8]
7101dcfc88  ldp x23,x8,[x8]
7101dcfc8c  sub x8,x8,x23
7101dcfc90  asr x9,x8,#0x2
7101dcfc94  ldr x8,[x2, #0x8]
7101dcfc98  and w22,w1,#0xffff
7101dcfc9c  add x21,x23,w22, UXTW  #0x2
7101dcfca0  cmp x21,#0x0
7101dcfca4  ccmp x9,x22,#0x0,ne
7101dcfca8  ldr x8,[x8, #0x8]
7101dcfcac  mov x19,x2
7101dcfcb0  b.hi 0x7101dcfcd0
7101dcfcb4  cbz x8,0x7101dd008c
7101dcfcb8  ldr x8,[x8, #0x18]
7101dcfcbc  cbz x8,0x7101dd008c
7101dcfcc0  ldrb w9,[x8, #0x58]
7101dcfcc4  and w9,w9,#0xfe
7101dcfcc8  strb w9,[x8, #0x58]
7101dcfccc  b 0x7101dd008c
7101dcfcd0  cbz x8,0x7101dcfce8
7101dcfcd4  ldr x8,[x8, #0x18]
7101dcfcd8  cbz x8,0x7101dcfce8
7101dcfcdc  ldrb w9,[x8, #0x58]
7101dcfce0  orr w9,w9,#0x1
7101dcfce4  strb w9,[x8, #0x58]
7101dcfce8  adrp x1,0x71042c5000
7101dcfcec  add x1,x1,#0x423
7101dcfcf0  add x8,sp,#0x10
7101dcfcf4  mov x0,x19
7101dcfcf8  bl 0x7103776640
7101dcfcfc  ldrh w1,[x21]
7101dcfd00  add x0,sp,#0x10
7101dcfd04  bl 0x7101dcf780
7101dcfd08  adrp x1,0x7104308000
7101dcfd0c  add x1,x1,#0xa37
7101dcfd10  mov x8,sp
7101dcfd14  mov x0,x19
7101dcfd18  bl 0x7103776910
7101dcfd1c  add x23,x23,x22, LSL #0x2
7101dcfd20  ldrb w3,[x23, #0x2]!
7101dcfd24  adrp x1,0x7104412000
7101dcfd28  add x1,x1,#0xe16
7101dcfd2c  mov x0,sp
7101dcfd30  mov w2,#0x1
7101dcfd34  bl 0x710377a280
7101dcfd38  ldr x0,[sp, #0x8]
7101dcfd3c  adrp x22,0x710523d000
7101dcfd40  add x22,x22,#0x9a8
7101dcfd44  stp x22,xzr,[sp]
7101dcfd48  cbz x0,0x7101dcfd50
7101dcfd4c  bl 0x710392eb40
7101dcfd50  ldrb w8,[x23]
7101dcfd54  ldr x0,[x19, #0x8]
7101dcfd58  cbz w8,0x7101dcfdc0
7101dcfd5c  fmov s0,0x3f800000
7101dcfd60  adrp x1,0x710438c000
7101dcfd64  add x1,x1,#0xf86
7101dcfd68  bl 0x7103778300
7101dcfd6c  ldr x8,[x20, #0x20]
7101dcfd70  mov w20,#0x1
7101dcfd74  ldr x10,[x8]
7101dcfd78  ldrh w8,[x10, #0x18]
7101dcfd7c  tst w8,#0xff
7101dcfd80  b.eq 0x7101dcff6c
7101dcfd84  and w8,w8,#0xff00
7101dcfd88  cmp w8,#0x400
7101dcfd8c  b.ne 0x7101dcff6c
7101dcfd90  ldr x11,[x10, #0x28]
7101dcfd94  cbz x11,0x7101dcff68
7101dcfd98  ldrsh x8,[x21]
7101dcfd9c  sub x12,x11,#0x1
7101dcfda0  ands x13,x12,x11
7101dcfda4  b.eq 0x7101dcfea4
7101dcfda8  cmp x11,x8
7101dcfdac  mov x9,x8
7101dcfdb0  b.hi 0x7101dcfea8
7101dcfdb4  udiv x9,x8,x11
7101dcfdb8  msub x9,x9,x11,x8
7101dcfdbc  b 0x7101dcfea8
7101dcfdc0  fmov s0,0x3f800000
7101dcfdc4  adrp x1,0x7104422000
7101dcfdc8  add x1,x1,#0x8f0
7101dcfdcc  bl 0x7103778300
7101dcfdd0  mov w0,#0x10
7101dcfdd4  mov w1,#0x8
7101dcfdd8  bl 0x710392e290
7101dcfddc  mov x20,x0
7101dcfde0  cbnz x0,0x7101dcfe2c
7101dcfde4  adrp x8,0x7105332000
7101dcfde8  ldr x0,[x8, #0xf00]
7101dcfdec  cbz x0,0x7101dcfe28
7101dcfdf0  mov w8,#0x8
7101dcfdf4  stur wzr,[x29, #-0x24]
7101dcfdf8  sub x1,x29,#0x24
7101dcfdfc  str x8,[sp]
7101dcfe00  ldr x8,[x0]
7101dcfe04  ldr x8,[x8, #0x30]
7101dcfe08  mov x2,sp
7101dcfe0c  blr x8
7101dcfe10  tbz w0,#0x0,0x7101dcfe28
7101dcfe14  mov w0,#0x10
7101dcfe18  mov w1,#0x8
7101dcfe1c  bl 0x710392e290
7101dcfe20  mov x20,x0
7101dcfe24  cbnz x0,0x7101dcfe2c
7101dcfe28  mov x20,xzr
7101dcfe2c  str xzr,[x20]
7101dcfe30  ldr x8,[x19, #0x8]
7101dcfe34  ldr x8,[x8, #0x8]
7101dcfe38  cbz x8,0x7101dcfe98
7101dcfe3c  ldr x0,[x8, #0x60]
7101dcfe40  cbz x0,0x7101dcfe98
7101dcfe44  ldr x8,[x8, #0x18]
7101dcfe48  add x1,x8,#0xb0
7101dcfe4c  bl 0x7103796f20
7101dcfe50  str x0,[x20]
7101dcfe54  cbz x0,0x7101dcff1c
7101dcfe58  ldr x8,[x0]
7101dcfe5c  ldr x8,[x8, #0x208]
7101dcfe60  mov w1,wzr
7101dcfe64  mov x19,x0
7101dcfe68  blr x8
7101dcfe6c  ldr x8,[x19]
7101dcfe70  ldr x8,[x8, #0x200]
7101dcfe74  mov x0,x19
7101dcfe78  blr x8
7101dcfe7c  tbz w0,#0x0,0x7101dcff00
7101dcfe80  ldr x8,[x19]
7101dcfe84  ldr x8,[x8, #0x210]
7101dcfe88  mov x0,x19
7101dcfe8c  blr x8
7101dcfe90  eor w8,w0,#0x1
7101dcfe94  b 0x7101dcff04
7101dcfe98  str xzr,[x20]
7101dcfe9c  mov x0,x20
7101dcfea0  b 0x7101dd005c
7101dcfea4  and x9,x12,x8
7101dcfea8  ldr x10,[x10, #0x20]
7101dcfeac  ldr x10,[x10, x9, LSL #0x3]
7101dcfeb0  cbz x10,0x7101dcff68
7101dcfeb4  ldr x10,[x10]
7101dcfeb8  cbz x10,0x7101dcff68
7101dcfebc  cbz x13,0x7101dcff24
7101dcfec0  ldr x12,[x10, #0x8]
7101dcfec4  cmp x12,x8
7101dcfec8  b.ne 0x7101dcfedc
7101dcfecc  ldrh w12,[x10, #0x10]
7101dcfed0  cmp w12,w8, UXTH 
7101dcfed4  b.ne 0x7101dcfef4
7101dcfed8  b 0x7101dcff5c
7101dcfedc  cmp x12,x11
7101dcfee0  b.cc 0x7101dcfeec
7101dcfee4  udiv x13,x12,x11
7101dcfee8  msub x12,x13,x11,x12
7101dcfeec  cmp x12,x9
7101dcfef0  b.ne 0x7101dcff68
7101dcfef4  ldr x10,[x10]
7101dcfef8  cbnz x10,0x7101dcfec0
7101dcfefc  b 0x7101dcff68
7101dcff00  mov w8,#0x1
7101dcff04  ldr x9,[x19]
7101dcff08  ldr x9,[x9, #0x388]
7101dcff0c  and w1,w8,#0x1
7101dcff10  mov x0,x19
7101dcff14  mov w2,wzr
7101dcff18  blr x9
7101dcff1c  mov x0,x20
7101dcff20  b 0x7101dd005c
7101dcff24  mov w20,#0x1
7101dcff28  ldr x11,[x10, #0x8]
7101dcff2c  and x13,x11,x12
7101dcff30  cmp x11,x8
7101dcff34  ccmp x13,x9,#0x4,ne
7101dcff38  b.ne 0x7101dcff68
7101dcff3c  cmp x11,x8
7101dcff40  b.ne 0x7101dcff50
7101dcff44  ldrh w11,[x10, #0x10]
7101dcff48  cmp w11,w8, UXTH 
7101dcff4c  b.eq 0x7101dcff5c
7101dcff50  ldr x10,[x10]
7101dcff54  cbnz x10,0x7101dcff28
7101dcff58  b 0x7101dcff6c
7101dcff5c  ldp x8,x9,[x10, #0x18]
7101dcff60  cmp x9,x8
7101dcff64  b.ne 0x7101dd00a4
7101dcff68  mov w20,#0x1
7101dcff6c  mov w0,#0x10
7101dcff70  mov w1,#0x8
7101dcff74  bl 0x710392e290
7101dcff78  mov x21,x0
7101dcff7c  cbnz x0,0x7101dcffc8
7101dcff80  adrp x8,0x7105332000
7101dcff84  ldr x0,[x8, #0xf00]
7101dcff88  cbz x0,0x7101dcffc4
7101dcff8c  mov w8,#0x8
7101dcff90  stur wzr,[x29, #-0x24]
7101dcff94  sub x1,x29,#0x24
7101dcff98  str x8,[sp]
7101dcff9c  ldr x8,[x0]
7101dcffa0  ldr x8,[x8, #0x30]
7101dcffa4  mov x2,sp
7101dcffa8  blr x8
7101dcffac  tbz w0,#0x0,0x7101dcffc4
7101dcffb0  mov w0,#0x10
7101dcffb4  mov w1,#0x8
7101dcffb8  bl 0x710392e290
7101dcffbc  mov x21,x0
7101dcffc0  cbnz x0,0x7101dcffc8
7101dcffc4  mov x21,xzr
7101dcffc8  str xzr,[x21]
7101dcffcc  ldr x8,[x19, #0x8]
7101dcffd0  ldr x8,[x8, #0x8]
7101dcffd4  cbz x8,0x7101dd0034
7101dcffd8  ldr x0,[x8, #0x60]
7101dcffdc  cbz x0,0x7101dd0034
7101dcffe0  ldr x8,[x8, #0x18]
7101dcffe4  add x1,x8,#0xb0
7101dcffe8  bl 0x7103796f20
7101dcffec  str x0,[x21]
7101dcfff0  cbz x0,0x7101dd0058
7101dcfff4  ldr x8,[x0]
7101dcfff8  ldr x8,[x8, #0x208]
7101dcfffc  mov w1,w20
7101dd0000  mov x19,x0
7101dd0004  blr x8
7101dd0008  ldr x8,[x19]
7101dd000c  ldr x8,[x8, #0x200]
7101dd0010  mov x0,x19
7101dd0014  blr x8
7101dd0018  tbz w0,#0x0,0x7101dd003c
7101dd001c  ldr x8,[x19]
7101dd0020  ldr x8,[x8, #0x210]
7101dd0024  mov x0,x19
7101dd0028  blr x8
7101dd002c  eor w8,w0,#0x1
7101dd0030  b 0x7101dd0040
7101dd0034  str xzr,[x21]
7101dd0038  b 0x7101dd0058
7101dd003c  mov w8,#0x1
7101dd0040  ldr x9,[x19]
7101dd0044  ldr x9,[x9, #0x388]
7101dd0048  and w1,w8,#0x1
7101dd004c  mov x0,x19
7101dd0050  mov w2,wzr
7101dd0054  blr x9
7101dd0058  mov x0,x21
7101dd005c  bl 0x710392eb40
7101dd0060  ldr x19,[sp, #0x18]
7101dd0064  adrp x8,0x710523d000
7101dd0068  add x8,x8,#0x988
7101dd006c  stp x8,xzr,[sp, #0x10]
7101dd0070  cbz x19,0x7101dd008c
7101dd0074  ldr x0,[x19, #0x18]
7101dd0078  stp x22,xzr,[x19, #0x10]
7101dd007c  cbz x0,0x7101dd0084
7101dd0080  bl 0x710392eb40
7101dd0084  mov x0,x19
7101dd0088  bl 0x710392eb40
7101dd008c  ldp x29,x30,[sp, #0x50]
7101dd0090  ldr x23,[sp, #0x20]
7101dd0094  ldp x20,x19,[sp, #0x40]
7101dd0098  ldp x22,x21,[sp, #0x30]
7101dd009c  add sp,sp,#0x60
7101dd00a0  ret
7101dd00a4  ldp x8,x9,[x10, #0x18]
7101dd00a8  cmp x9,x8
7101dd00ac  cset w20,eq
7101dd00b0  b 0x7101dcff6c
