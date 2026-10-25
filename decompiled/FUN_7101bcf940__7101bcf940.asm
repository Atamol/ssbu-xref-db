// addr:      7101bcf940
// offset:    0x1bcf940
// name:      FUN_7101bcf940
// mangled:   
// size:      9548

7101bcf940  stp x28,x27,[sp, #-0x60]!
7101bcf944  stp x26,x25,[sp, #0x10]
7101bcf948  stp x24,x23,[sp, #0x20]
7101bcf94c  stp x22,x21,[sp, #0x30]
7101bcf950  stp x20,x19,[sp, #0x40]
7101bcf954  stp x29,x30,[sp, #0x50]
7101bcf958  add x29,sp,#0x50
7101bcf95c  sub sp,sp,#0x250
7101bcf960  mov x26,x0
7101bcf964  mov x20,x0
7101bcf968  mov w0,#0x10
7101bcf96c  str x1,[x26], #0x8
7101bcf970  mov w1,#0x8
7101bcf974  mov x23,x2
7101bcf978  bl 0x710392e290
7101bcf97c  mov x21,x0
7101bcf980  cbnz x0,0x7101bcf9cc
7101bcf984  adrp x8,0x7105332000
7101bcf988  ldr x0,[x8, #0xf00]
7101bcf98c  cbz x0,0x7101bcf9c8
7101bcf990  mov w8,#0x8
7101bcf994  stur wzr,[x29, #-0xb0]
7101bcf998  sub x1,x29,#0xb0
7101bcf99c  str x8,[sp, #0xc0]
7101bcf9a0  ldr x8,[x0]
7101bcf9a4  ldr x8,[x8, #0x30]
7101bcf9a8  add x2,sp,#0xc0
7101bcf9ac  blr x8
7101bcf9b0  tbz w0,#0x0,0x7101bcf9c8
7101bcf9b4  mov w0,#0x10
7101bcf9b8  mov w1,#0x8
7101bcf9bc  bl 0x710392e290
7101bcf9c0  mov x21,x0
7101bcf9c4  cbnz x0,0x7101bcf9cc
7101bcf9c8  mov x21,xzr
7101bcf9cc  mov x0,x21
7101bcf9d0  bl 0x7103773200
7101bcf9d4  add x0,x20,#0x10
7101bcf9d8  mov x1,x26
7101bcf9dc  str x21,[x20, #0x8]
7101bcf9e0  bl 0x7101414b10
7101bcf9e4  add x24,x20,#0x20
7101bcf9e8  mov x0,x24
7101bcf9ec  bl 0x7101bcec20
7101bcf9f0  mov w0,#0x10
7101bcf9f4  orr w1,wzr,#0xc0
7101bcf9f8  bl 0x710392e290
7101bcf9fc  mov x21,x0
7101bcfa00  cbnz x0,0x7101bcfa4c
7101bcfa04  adrp x8,0x7105332000
7101bcfa08  ldr x0,[x8, #0xf00]
7101bcfa0c  cbz x0,0x7101bcfa48
7101bcfa10  orr w8,wzr,#0xc0
7101bcfa14  stur wzr,[x29, #-0xb0]
7101bcfa18  sub x1,x29,#0xb0
7101bcfa1c  str x8,[sp, #0xc0]
7101bcfa20  ldr x8,[x0]
7101bcfa24  ldr x8,[x8, #0x30]
7101bcfa28  add x2,sp,#0xc0
7101bcfa2c  blr x8
7101bcfa30  tbz w0,#0x0,0x7101bcfa48
7101bcfa34  mov w0,#0x10
7101bcfa38  orr w1,wzr,#0xc0
7101bcfa3c  bl 0x710392e290
7101bcfa40  mov x21,x0
7101bcfa44  cbnz x0,0x7101bcfa4c
7101bcfa48  mov x21,xzr
7101bcfa4c  mov x0,x21
7101bcfa50  strb wzr,[x21]
7101bcfa54  strh wzr,[x21, #0x18]
7101bcfa58  stp xzr,xzr,[x21, #0x8]
7101bcfa5c  mov x22,x21
7101bcfa60  mov x25,x21
7101bcfa64  str xzr,[x21, #0x58]
7101bcfa68  str xzr,[x21, #0x48]
7101bcfa6c  str xzr,[x21, #0x38]
7101bcfa70  stp xzr,xzr,[x21, #0x20]
7101bcfa74  str xzr,[x0, #0x30]!
7101bcfa78  str xzr,[x22, #0x50]!
7101bcfa7c  str xzr,[x25, #0x40]!
7101bcfa80  bl 0x7103776290
7101bcfa84  mov x0,x25
7101bcfa88  bl 0x7103776290
7101bcfa8c  mov x0,x22
7101bcfa90  bl 0x7103776290
7101bcfa94  adrp x8,0x71050ac000
7101bcfa98  add x8,x8,#0x38
7101bcfa9c  adrp x25,0x710523d000
7101bcfaa0  add x25,x25,#0x9e8
7101bcfaa4  mov w0,#0x10
7101bcfaa8  str x8,[x21, #0x28]
7101bcfaac  orr w1,wzr,#0x18
7101bcfab0  stp xzr,xzr,[x21, #0x80]
7101bcfab4  stp xzr,xzr,[x21, #0x70]
7101bcfab8  str xzr,[x21, #0x90]
7101bcfabc  stp xzr,xzr,[x21, #0x60]
7101bcfac0  stp xzr,xzr,[x21, #0xa8]
7101bcfac4  stp x25,xzr,[x21, #0x98]
7101bcfac8  bl 0x710392e290
7101bcfacc  cbnz x0,0x7101bcfb14
7101bcfad0  adrp x8,0x7105332000
7101bcfad4  ldr x0,[x8, #0xf00]
7101bcfad8  cbz x0,0x7101bcfb10
7101bcfadc  orr w8,wzr,#0x18
7101bcfae0  stur wzr,[x29, #-0xb0]
7101bcfae4  sub x1,x29,#0xb0
7101bcfae8  str x8,[sp, #0xc0]
7101bcfaec  ldr x8,[x0]
7101bcfaf0  ldr x8,[x8, #0x30]
7101bcfaf4  add x2,sp,#0xc0
7101bcfaf8  blr x8
7101bcfafc  tbz w0,#0x0,0x7101bcfb10
7101bcfb00  mov w0,#0x10
7101bcfb04  orr w1,wzr,#0x18
7101bcfb08  bl 0x710392e290
7101bcfb0c  cbnz x0,0x7101bcfb14
7101bcfb10  mov x0,xzr
7101bcfb14  mov w19,#0x1
7101bcfb18  stp xzr,xzr,[x0]
7101bcfb1c  strb w19,[x0, #0x10]
7101bcfb20  orr w1,wzr,#0x18
7101bcfb24  stp x0,x25,[x21, #0xa0]
7101bcfb28  mov w0,#0x10
7101bcfb2c  bl 0x710392e290
7101bcfb30  cbnz x0,0x7101bcfb78
7101bcfb34  adrp x8,0x7105332000
7101bcfb38  ldr x0,[x8, #0xf00]
7101bcfb3c  cbz x0,0x7101bcfb74
7101bcfb40  orr w8,wzr,#0x18
7101bcfb44  stur wzr,[x29, #-0xb0]
7101bcfb48  sub x1,x29,#0xb0
7101bcfb4c  str x8,[sp, #0xc0]
7101bcfb50  ldr x8,[x0]
7101bcfb54  ldr x8,[x8, #0x30]
7101bcfb58  add x2,sp,#0xc0
7101bcfb5c  blr x8
7101bcfb60  tbz w0,#0x0,0x7101bcfb74
7101bcfb64  mov w0,#0x10
7101bcfb68  orr w1,wzr,#0x18
7101bcfb6c  bl 0x710392e290
7101bcfb70  cbnz x0,0x7101bcfb78
7101bcfb74  mov x0,xzr
7101bcfb78  stp xzr,xzr,[x0]
7101bcfb7c  adrp x28,0x71050ab000
7101bcfb80  add x28,x28,#0x348
7101bcfb84  strb w19,[x0, #0x10]
7101bcfb88  mov w1,#0x10
7101bcfb8c  str x0,[x21, #0xb0]
7101bcfb90  mov w0,#0x10
7101bcfb94  str x28,[x21, #0x90]
7101bcfb98  str wzr,[x21, #0xb8]
7101bcfb9c  str x21,[x20, #0x28]
7101bcfba0  bl 0x710392e290
7101bcfba4  mov x22,x0
7101bcfba8  cbnz x0,0x7101bcfbf4
7101bcfbac  adrp x8,0x7105332000
7101bcfbb0  ldr x0,[x8, #0xf00]
7101bcfbb4  cbz x0,0x7101bcfbf0
7101bcfbb8  mov w8,#0x10
7101bcfbbc  stur wzr,[x29, #-0xb0]
7101bcfbc0  sub x1,x29,#0xb0
7101bcfbc4  str x8,[sp, #0xc0]
7101bcfbc8  ldr x8,[x0]
7101bcfbcc  ldr x8,[x8, #0x30]
7101bcfbd0  add x2,sp,#0xc0
7101bcfbd4  blr x8
7101bcfbd8  tbz w0,#0x0,0x7101bcfbf0
7101bcfbdc  mov w0,#0x10
7101bcfbe0  mov w1,#0x10
7101bcfbe4  bl 0x710392e290
7101bcfbe8  mov x22,x0
7101bcfbec  cbnz x0,0x7101bcfbf4
7101bcfbf0  mov x22,xzr
7101bcfbf4  adrp x27,0x710523d000
7101bcfbf8  add x27,x27,#0x9a8
7101bcfbfc  mov w0,#0x10
7101bcfc00  mov w1,#0x20
7101bcfc04  str x27,[x22]
7101bcfc08  bl 0x710392e290
7101bcfc0c  cbnz x0,0x7101bcfc54
7101bcfc10  adrp x8,0x7105332000
7101bcfc14  ldr x0,[x8, #0xf00]
7101bcfc18  cbz x0,0x7101bcfc50
7101bcfc1c  mov w8,#0x20
7101bcfc20  stur wzr,[x29, #-0xb0]
7101bcfc24  sub x1,x29,#0xb0
7101bcfc28  str x8,[sp, #0xc0]
7101bcfc2c  ldr x8,[x0]
7101bcfc30  ldr x8,[x8, #0x30]
7101bcfc34  add x2,sp,#0xc0
7101bcfc38  blr x8
7101bcfc3c  tbz w0,#0x0,0x7101bcfc50
7101bcfc40  mov w0,#0x10
7101bcfc44  mov w1,#0x20
7101bcfc48  bl 0x710392e290
7101bcfc4c  cbnz x0,0x7101bcfc54
7101bcfc50  mov x0,xzr
7101bcfc54  stp xzr,xzr,[x0, #0x10]
7101bcfc58  stp xzr,xzr,[x0]
7101bcfc5c  str x0,[x22, #0x8]
7101bcfc60  add x0,x20,#0x38
7101bcfc64  str x22,[x20, #0x30]
7101bcfc68  str x0,[sp, #0x28]
7101bcfc6c  bl 0x7101bcd660
7101bcfc70  add x0,x20,#0x40
7101bcfc74  bl 0x7101bcc0a0
7101bcfc78  adrp x8,0x71050ac000
7101bcfc7c  add x8,x8,#0xc8
7101bcfc80  mov w0,#0x10
7101bcfc84  mov w1,#0x20
7101bcfc88  stp x8,xzr,[x20, #0x48]
7101bcfc8c  stp xzr,xzr,[x20, #0x88]
7101bcfc90  stp xzr,xzr,[x20, #0x78]
7101bcfc94  stp xzr,xzr,[x20, #0x68]
7101bcfc98  stp x27,xzr,[x20, #0x58]
7101bcfc9c  bl 0x710392e290
7101bcfca0  cbnz x0,0x7101bcfce8
7101bcfca4  adrp x8,0x7105332000
7101bcfca8  ldr x0,[x8, #0xf00]
7101bcfcac  cbz x0,0x7101bcfce4
7101bcfcb0  mov w8,#0x20
7101bcfcb4  stur wzr,[x29, #-0xb0]
7101bcfcb8  sub x1,x29,#0xb0
7101bcfcbc  str x8,[sp, #0xc0]
7101bcfcc0  ldr x8,[x0]
7101bcfcc4  ldr x8,[x8, #0x30]
7101bcfcc8  add x2,sp,#0xc0
7101bcfccc  blr x8
7101bcfcd0  tbz w0,#0x0,0x7101bcfce4
7101bcfcd4  mov w0,#0x10
7101bcfcd8  mov w1,#0x20
7101bcfcdc  bl 0x710392e290
7101bcfce0  cbnz x0,0x7101bcfce8
7101bcfce4  mov x0,xzr
7101bcfce8  stp xzr,xzr,[x0, #0x10]
7101bcfcec  mov w1,#0x20
7101bcfcf0  stp xzr,xzr,[x0]
7101bcfcf4  stp x0,x27,[x20, #0x60]
7101bcfcf8  mov w0,#0x10
7101bcfcfc  bl 0x710392e290
7101bcfd00  cbnz x0,0x7101bcfd48
7101bcfd04  adrp x8,0x7105332000
7101bcfd08  ldr x0,[x8, #0xf00]
7101bcfd0c  cbz x0,0x7101bcfd44
7101bcfd10  mov w8,#0x20
7101bcfd14  stur wzr,[x29, #-0xb0]
7101bcfd18  sub x1,x29,#0xb0
7101bcfd1c  str x8,[sp, #0xc0]
7101bcfd20  ldr x8,[x0]
7101bcfd24  ldr x8,[x8, #0x30]
7101bcfd28  add x2,sp,#0xc0
7101bcfd2c  blr x8
7101bcfd30  tbz w0,#0x0,0x7101bcfd44
7101bcfd34  mov w0,#0x10
7101bcfd38  mov w1,#0x20
7101bcfd3c  bl 0x710392e290
7101bcfd40  cbnz x0,0x7101bcfd48
7101bcfd44  mov x0,xzr
7101bcfd48  stp xzr,xzr,[x0, #0x10]
7101bcfd4c  mov w1,#0x20
7101bcfd50  stp xzr,xzr,[x0]
7101bcfd54  stp x0,x27,[x20, #0x70]
7101bcfd58  mov w0,#0x10
7101bcfd5c  bl 0x710392e290
7101bcfd60  cbnz x0,0x7101bcfda8
7101bcfd64  adrp x8,0x7105332000
7101bcfd68  ldr x0,[x8, #0xf00]
7101bcfd6c  cbz x0,0x7101bcfda4
7101bcfd70  mov w8,#0x20
7101bcfd74  stur wzr,[x29, #-0xb0]
7101bcfd78  sub x1,x29,#0xb0
7101bcfd7c  str x8,[sp, #0xc0]
7101bcfd80  ldr x8,[x0]
7101bcfd84  ldr x8,[x8, #0x30]
7101bcfd88  add x2,sp,#0xc0
7101bcfd8c  blr x8
7101bcfd90  tbz w0,#0x0,0x7101bcfda4
7101bcfd94  mov w0,#0x10
7101bcfd98  mov w1,#0x20
7101bcfd9c  bl 0x710392e290
7101bcfda0  cbnz x0,0x7101bcfda8
7101bcfda4  mov x0,xzr
7101bcfda8  stp xzr,xzr,[x0, #0x10]
7101bcfdac  mov w1,#0x20
7101bcfdb0  stp xzr,xzr,[x0]
7101bcfdb4  stp x0,x27,[x20, #0x80]
7101bcfdb8  mov w0,#0x10
7101bcfdbc  bl 0x710392e290
7101bcfdc0  cbnz x0,0x7101bcfe08
7101bcfdc4  adrp x8,0x7105332000
7101bcfdc8  ldr x0,[x8, #0xf00]
7101bcfdcc  cbz x0,0x7101bcfe04
7101bcfdd0  mov w8,#0x20
7101bcfdd4  stur wzr,[x29, #-0xb0]
7101bcfdd8  sub x1,x29,#0xb0
7101bcfddc  str x8,[sp, #0xc0]
7101bcfde0  ldr x8,[x0]
7101bcfde4  ldr x8,[x8, #0x30]
7101bcfde8  add x2,sp,#0xc0
7101bcfdec  blr x8
7101bcfdf0  tbz w0,#0x0,0x7101bcfe04
7101bcfdf4  mov w0,#0x10
7101bcfdf8  mov w1,#0x20
7101bcfdfc  bl 0x710392e290
7101bcfe00  cbnz x0,0x7101bcfe08
7101bcfe04  mov x0,xzr
7101bcfe08  stp xzr,xzr,[x0, #0x10]
7101bcfe0c  adrp x8,0x71050ab000
7101bcfe10  add x8,x8,#0x5a8
7101bcfe14  stp xzr,xzr,[x0]
7101bcfe18  orr w1,wzr,#0x18
7101bcfe1c  str x8,[x20, #0x50]
7101bcfe20  stp x0,xzr,[x20, #0x90]
7101bcfe24  mov w0,#0x10
7101bcfe28  stp xzr,xzr,[x20, #0xd0]
7101bcfe2c  stp xzr,xzr,[x20, #0xc0]
7101bcfe30  stp xzr,xzr,[x20, #0xb0]
7101bcfe34  stp x25,xzr,[x20, #0xa0]
7101bcfe38  bl 0x710392e290
7101bcfe3c  cbnz x0,0x7101bcfe84
7101bcfe40  adrp x8,0x7105332000
7101bcfe44  ldr x0,[x8, #0xf00]
7101bcfe48  cbz x0,0x7101bcfe80
7101bcfe4c  orr w8,wzr,#0x18
7101bcfe50  stur wzr,[x29, #-0xb0]
7101bcfe54  sub x1,x29,#0xb0
7101bcfe58  str x8,[sp, #0xc0]
7101bcfe5c  ldr x8,[x0]
7101bcfe60  ldr x8,[x8, #0x30]
7101bcfe64  add x2,sp,#0xc0
7101bcfe68  blr x8
7101bcfe6c  tbz w0,#0x0,0x7101bcfe80
7101bcfe70  mov w0,#0x10
7101bcfe74  orr w1,wzr,#0x18
7101bcfe78  bl 0x710392e290
7101bcfe7c  cbnz x0,0x7101bcfe84
7101bcfe80  mov x0,xzr
7101bcfe84  mov w19,#0x1
7101bcfe88  stp xzr,xzr,[x0]
7101bcfe8c  strb w19,[x0, #0x10]
7101bcfe90  orr w1,wzr,#0x18
7101bcfe94  stp x0,x25,[x20, #0xa8]
7101bcfe98  mov w0,#0x10
7101bcfe9c  bl 0x710392e290
7101bcfea0  cbnz x0,0x7101bcfee8
7101bcfea4  adrp x8,0x7105332000
7101bcfea8  ldr x0,[x8, #0xf00]
7101bcfeac  cbz x0,0x7101bcfee4
7101bcfeb0  orr w8,wzr,#0x18
7101bcfeb4  stur wzr,[x29, #-0xb0]
7101bcfeb8  sub x1,x29,#0xb0
7101bcfebc  str x8,[sp, #0xc0]
7101bcfec0  ldr x8,[x0]
7101bcfec4  ldr x8,[x8, #0x30]
7101bcfec8  add x2,sp,#0xc0
7101bcfecc  blr x8
7101bcfed0  tbz w0,#0x0,0x7101bcfee4
7101bcfed4  mov w0,#0x10
7101bcfed8  orr w1,wzr,#0x18
7101bcfedc  bl 0x710392e290
7101bcfee0  cbnz x0,0x7101bcfee8
7101bcfee4  mov x0,xzr
7101bcfee8  stp xzr,xzr,[x0]
7101bcfeec  orr w1,wzr,#0x18
7101bcfef0  strb w19,[x0, #0x10]
7101bcfef4  stp x0,x25,[x20, #0xb8]
7101bcfef8  mov w0,#0x10
7101bcfefc  bl 0x710392e290
7101bcff00  cbnz x0,0x7101bcff48
7101bcff04  adrp x8,0x7105332000
7101bcff08  ldr x0,[x8, #0xf00]
7101bcff0c  cbz x0,0x7101bcff44
7101bcff10  orr w8,wzr,#0x18
7101bcff14  stur wzr,[x29, #-0xb0]
7101bcff18  sub x1,x29,#0xb0
7101bcff1c  str x8,[sp, #0xc0]
7101bcff20  ldr x8,[x0]
7101bcff24  ldr x8,[x8, #0x30]
7101bcff28  add x2,sp,#0xc0
7101bcff2c  blr x8
7101bcff30  tbz w0,#0x0,0x7101bcff44
7101bcff34  mov w0,#0x10
7101bcff38  orr w1,wzr,#0x18
7101bcff3c  bl 0x710392e290
7101bcff40  cbnz x0,0x7101bcff48
7101bcff44  mov x0,xzr
7101bcff48  mov w19,#0x1
7101bcff4c  stp xzr,xzr,[x0]
7101bcff50  strb w19,[x0, #0x10]
7101bcff54  orr w1,wzr,#0x18
7101bcff58  stp x0,x25,[x20, #0xc8]
7101bcff5c  mov w0,#0x10
7101bcff60  bl 0x710392e290
7101bcff64  cbnz x0,0x7101bcffac
7101bcff68  adrp x8,0x7105332000
7101bcff6c  ldr x0,[x8, #0xf00]
7101bcff70  cbz x0,0x7101bcffa8
7101bcff74  orr w8,wzr,#0x18
7101bcff78  stur wzr,[x29, #-0xb0]
7101bcff7c  sub x1,x29,#0xb0
7101bcff80  str x8,[sp, #0xc0]
7101bcff84  ldr x8,[x0]
7101bcff88  ldr x8,[x8, #0x30]
7101bcff8c  add x2,sp,#0xc0
7101bcff90  blr x8
7101bcff94  tbz w0,#0x0,0x7101bcffa8
7101bcff98  mov w0,#0x10
7101bcff9c  orr w1,wzr,#0x18
7101bcffa0  bl 0x710392e290
7101bcffa4  cbnz x0,0x7101bcffac
7101bcffa8  mov x0,xzr
7101bcffac  stp xzr,xzr,[x0]
7101bcffb0  adrp x8,0x71050ab000
7101bcffb4  add x8,x8,#0x368
7101bcffb8  strb w19,[x0, #0x10]
7101bcffbc  mov w1,#0x20
7101bcffc0  stp x0,xzr,[x20, #0xd8]
7101bcffc4  mov w0,#0x10
7101bcffc8  str x8,[x20, #0x98]
7101bcffcc  stp x27,xzr,[x20, #0xe8]
7101bcffd0  bl 0x710392e290
7101bcffd4  cbnz x0,0x7101bd001c
7101bcffd8  adrp x8,0x7105332000
7101bcffdc  ldr x0,[x8, #0xf00]
7101bcffe0  cbz x0,0x7101bd0018
7101bcffe4  mov w8,#0x20
7101bcffe8  stur wzr,[x29, #-0xb0]
7101bcffec  sub x1,x29,#0xb0
7101bcfff0  str x8,[sp, #0xc0]
7101bcfff4  ldr x8,[x0]
7101bcfff8  ldr x8,[x8, #0x30]
7101bcfffc  add x2,sp,#0xc0
7101bd0000  blr x8
7101bd0004  tbz w0,#0x0,0x7101bd0018
7101bd0008  mov w0,#0x10
7101bd000c  mov w1,#0x20
7101bd0010  bl 0x710392e290
7101bd0014  cbnz x0,0x7101bd001c
7101bd0018  mov x0,xzr
7101bd001c  mov x9,x20
7101bd0020  stp xzr,xzr,[x0, #0x10]
7101bd0024  stp xzr,xzr,[x0]
7101bd0028  adrp x8,0x71050ab000
7101bd002c  add x8,x8,#0x428
7101bd0030  orr w1,wzr,#0x18
7101bd0034  str xzr,[x9, #0xf8]!
7101bd0038  stur x0,[x9, #-0x8]
7101bd003c  mov w0,#0x10
7101bd0040  stur x8,[x9, #-0x18]
7101bd0044  stp xzr,xzr,[x9, #0x18]
7101bd0048  stp x25,xzr,[x9, #0x8]
7101bd004c  str x9,[sp, #0x20]
7101bd0050  bl 0x710392e290
7101bd0054  cbnz x0,0x7101bd009c
7101bd0058  adrp x8,0x7105332000
7101bd005c  ldr x0,[x8, #0xf00]
7101bd0060  cbz x0,0x7101bd0098
7101bd0064  orr w8,wzr,#0x18
7101bd0068  stur wzr,[x29, #-0xb0]
7101bd006c  sub x1,x29,#0xb0
7101bd0070  str x8,[sp, #0xc0]
7101bd0074  ldr x8,[x0]
7101bd0078  ldr x8,[x8, #0x30]
7101bd007c  add x2,sp,#0xc0
7101bd0080  blr x8
7101bd0084  tbz w0,#0x0,0x7101bd0098
7101bd0088  mov w0,#0x10
7101bd008c  orr w1,wzr,#0x18
7101bd0090  bl 0x710392e290
7101bd0094  cbnz x0,0x7101bd009c
7101bd0098  mov x0,xzr
7101bd009c  mov w19,#0x1
7101bd00a0  stp xzr,xzr,[x0]
7101bd00a4  strb w19,[x0, #0x10]
7101bd00a8  orr w1,wzr,#0x18
7101bd00ac  stp x0,x25,[x20, #0x108]
7101bd00b0  mov w0,#0x10
7101bd00b4  bl 0x710392e290
7101bd00b8  cbnz x0,0x7101bd0100
7101bd00bc  adrp x8,0x7105332000
7101bd00c0  ldr x0,[x8, #0xf00]
7101bd00c4  cbz x0,0x7101bd00fc
7101bd00c8  orr w8,wzr,#0x18
7101bd00cc  stur wzr,[x29, #-0xb0]
7101bd00d0  sub x1,x29,#0xb0
7101bd00d4  str x8,[sp, #0xc0]
7101bd00d8  ldr x8,[x0]
7101bd00dc  ldr x8,[x8, #0x30]
7101bd00e0  add x2,sp,#0xc0
7101bd00e4  blr x8
7101bd00e8  tbz w0,#0x0,0x7101bd00fc
7101bd00ec  mov w0,#0x10
7101bd00f0  orr w1,wzr,#0x18
7101bd00f4  bl 0x710392e290
7101bd00f8  cbnz x0,0x7101bd0100
7101bd00fc  mov x0,xzr
7101bd0100  stp xzr,xzr,[x0]
7101bd0104  adrp x2,0x7104544000
7101bd0108  add x2,x2,#0xe38
7101bd010c  strb w19,[x0, #0x10]
7101bd0110  ldr x8,[x20]
7101bd0114  str x0,[x20, #0x118]
7101bd0118  mov w3,#0x1
7101bd011c  mov x0,x26
7101bd0120  str x28,[x20, #0xf8]
7101bd0124  ldr x8,[x8, #0x78]
7101bd0128  ldr x1,[x8]
7101bd012c  bl 0x71032cbf30
7101bd0130  ldr x8,[x20, #0x8]
7101bd0134  ldr x8,[x8]
7101bd0138  ldr x8,[x8]
7101bd013c  ldr x8,[x8, #0x600]
7101bd0140  mov w9,#0x8
7101bd0144  str w9,[x8, #0x488]
7101bd0148  ldr w9,[x8, #0x484]
7101bd014c  cbnz w9,0x7101bd0164
7101bd0150  ldr w9,[x8, #0x48c]
7101bd0154  cmp w9,#0x8
7101bd0158  b.eq 0x7101bd0164
7101bd015c  mov w9,#0x8
7101bd0160  str w9,[x8, #0x48c]
7101bd0164  ldr x8,[x26]
7101bd0168  ldr x8,[x8]
7101bd016c  add x1,x8,#0x8
7101bd0170  add x0,sp,#0x90
7101bd0174  add x19,sp,#0xc0
7101bd0178  str x26,[sp, #0x38]
7101bd017c  bl 0x7103776390
7101bd0180  ldr x0,[x24]
7101bd0184  add x1,sp,#0x90
7101bd0188  bl 0x7101bcf520
7101bd018c  ldr x24,[sp, #0x98]
7101bd0190  adrp x28,0x710523d000
7101bd0194  add x28,x28,#0x988
7101bd0198  stp x28,xzr,[sp, #0x90]
7101bd019c  cbz x24,0x7101bd01b8
7101bd01a0  ldr x0,[x24, #0x18]
7101bd01a4  stp x27,xzr,[x24, #0x10]
7101bd01a8  cbz x0,0x7101bd01b0
7101bd01ac  bl 0x710392eb40
7101bd01b0  mov x0,x24
7101bd01b4  bl 0x710392eb40
7101bd01b8  ldrb w8,[x23]
7101bd01bc  str w8,[sp, #0x34]
7101bd01c0  ldrb w8,[x23, #0x1]
7101bd01c4  str w8,[sp, #0xc]
7101bd01c8  ldrb w8,[x23, #0x2]
7101bd01cc  str w8,[sp, #0x10]
7101bd01d0  ldrb w8,[x23, #0x3]
7101bd01d4  str w8,[sp, #0x14]
7101bd01d8  ldrb w8,[x23, #0x4]
7101bd01dc  str w8,[sp, #0x18]
7101bd01e0  ldrb w8,[x23, #0x5]
7101bd01e4  str w8,[sp, #0x1c]
7101bd01e8  ldr x8,[x20, #0x8]
7101bd01ec  ldr x8,[x8]
7101bd01f0  add x1,x8,#0x8
7101bd01f4  add x0,sp,#0x80
7101bd01f8  bl 0x7103776390
7101bd01fc  ldr x21,[x20, #0x28]
7101bd0200  add x0,sp,#0xa0
7101bd0204  add x1,sp,#0x80
7101bd0208  bl 0x7103776390
7101bd020c  adrp x8,0x710424f000
7101bd0210  add x8,x8,#0x369
7101bd0214  str x8,[sp, #0xc8]
7101bd0218  adrp x8,0x71043ad000
7101bd021c  add x8,x8,#0x648
7101bd0220  mov w24,#0x1
7101bd0224  add x0,x21,#0x90
7101bd0228  str x8,[sp, #0xd8]
7101bd022c  add x22,sp,#0xc0
7101bd0230  mov w8,#0x2
7101bd0234  add x1,sp,#0xa0
7101bd0238  str wzr,[sp, #0xc0]
7101bd023c  sub x2,x29,#0xb0
7101bd0240  str w24,[sp, #0xd0]
7101bd0244  sub x25,x29,#0xb0
7101bd0248  stp x22,x8,[x29, #-0xb0]
7101bd024c  bl 0x7101b85d60
7101bd0250  mov w26,#0x101
7101bd0254  str xzr,[sp, #0xc0]
7101bd0258  add x0,sp,#0xc0
7101bd025c  strh w26,[sp, #0xc8]
7101bd0260  stur wzr,[x19, #0xa]
7101bd0264  mov x19,#0x41f0000000000000
7101bd0268  strh wzr,[sp, #0xce]
7101bd026c  add x23,x22,#0x90
7101bd0270  str w24,[sp, #0xd0]
7101bd0274  strh w24,[sp, #0xd4]
7101bd0278  strb w24,[sp, #0xd6]
7101bd027c  str x19,[sp, #0xd8]
7101bd0280  str wzr,[sp, #0xe0]
7101bd0284  str xzr,[sp, #0x110]
7101bd0288  str xzr,[sp, #0x140]
7101bd028c  str xzr,[sp, #0x170]
7101bd0290  str xzr,[sp, #0x1a0]
7101bd0294  str xzr,[sp, #0x1d0]
7101bd0298  str wzr,[sp, #0x1e0]
7101bd029c  bl 0x710337df20
7101bd02a0  orr x8,xzr,#0x400000000
7101bd02a4  adrp x22,0x71050ab000
7101bd02a8  add x22,x22,#0xf70
7101bd02ac  sub x0,x29,#0xb0
7101bd02b0  mov x1,x23
7101bd02b4  str x8,[sp, #0xc0]
7101bd02b8  str wzr,[sp, #0xdc]
7101bd02bc  strb w24,[sp, #0xc8]
7101bd02c0  stur x22,[x29, #-0xb0]
7101bd02c4  stur x25,[x29, #-0x90]
7101bd02c8  bl 0x7101989a30
7101bd02cc  ldur x0,[x29, #-0x90]
7101bd02d0  cmp x25,x0
7101bd02d4  b.eq 0x7101bd02e8
7101bd02d8  cbz x0,0x7101bd02f4
7101bd02dc  ldr x8,[x0]
7101bd02e0  ldr x8,[x8, #0x28]
7101bd02e4  b 0x7101bd02f0
7101bd02e8  ldr x8,[x0]
7101bd02ec  ldr x8,[x8, #0x20]
7101bd02f0  blr x8
7101bd02f4  add x8,sp,#0xc0
7101bd02f8  add x1,x8,#0x60
7101bd02fc  sub x23,x29,#0xb0
7101bd0300  sub x0,x29,#0xb0
7101bd0304  stur x22,[x29, #-0xb0]
7101bd0308  stur x23,[x29, #-0x90]
7101bd030c  bl 0x7101989a30
7101bd0310  ldur x0,[x29, #-0x90]
7101bd0314  cmp x23,x0
7101bd0318  b.eq 0x7101bd032c
7101bd031c  cbz x0,0x7101bd0338
7101bd0320  ldr x8,[x0]
7101bd0324  ldr x8,[x8, #0x28]
7101bd0328  b 0x7101bd0334
7101bd032c  ldr x8,[x0]
7101bd0330  ldr x8,[x8, #0x20]
7101bd0334  blr x8
7101bd0338  add x8,sp,#0xc0
7101bd033c  add x1,x8,#0xf0
7101bd0340  stur x22,[x29, #-0xb0]
7101bd0344  sub x22,x29,#0xb0
7101bd0348  sub x0,x29,#0xb0
7101bd034c  stur x22,[x29, #-0x90]
7101bd0350  bl 0x7101989a30
7101bd0354  ldur x0,[x29, #-0x90]
7101bd0358  cmp x22,x0
7101bd035c  b.eq 0x7101bd0370
7101bd0360  cbz x0,0x7101bd037c
7101bd0364  ldr x8,[x0]
7101bd0368  ldr x8,[x8, #0x28]
7101bd036c  b 0x7101bd0378
7101bd0370  ldr x8,[x0]
7101bd0374  ldr x8,[x8, #0x20]
7101bd0378  blr x8
7101bd037c  add x23,x21,#0x8
7101bd0380  adrp x2,0x71042b4000
7101bd0384  add x2,x2,#0x1dc
7101bd0388  add x1,sp,#0xa0
7101bd038c  add x3,sp,#0xc0
7101bd0390  mov x0,x23
7101bd0394  bl 0x7103770b30
7101bd0398  adrp x2,0x71043be000
7101bd039c  add x2,x2,#0x4b3
7101bd03a0  mov x0,x23
7101bd03a4  mov w1,wzr
7101bd03a8  bl 0x71037717d0
7101bd03ac  ldr x9,[x21, #0x8]
7101bd03b0  ldr x8,[x9, #0x1b8]
7101bd03b4  cbz x8,0x7101bd04a4
7101bd03b8  add x9,x9,#0x1b8
7101bd03bc  mov x10,x9
7101bd03c0  mov x11,x8
7101bd03c4  ldr w12,[x11, #0x20]
7101bd03c8  cmp w12,#0x0
7101bd03cc  cset w12,lt
7101bd03d0  csel x10,x10,x11,lt
7101bd03d4  ldr x11,[x11, w12, UXTW #0x3]
7101bd03d8  cbnz x11,0x7101bd03c4
7101bd03dc  cmp x10,x9
7101bd03e0  b.eq 0x7101bd043c
7101bd03e4  ldr w11,[x10, #0x20]
7101bd03e8  cmp w11,#0x0
7101bd03ec  b.gt 0x7101bd043c
7101bd03f0  ldr x24,[x10, #0x28]
7101bd03f4  cbz x24,0x7101bd043c
7101bd03f8  ldr w8,[sp, #0x34]
7101bd03fc  cmp w8,#0x0
7101bd0400  ldr x8,[x24]
7101bd0404  cset w1,ne
7101bd0408  cset w25,eq
7101bd040c  ldr x8,[x8, #0x1f8]
7101bd0410  mov x0,x24
7101bd0414  blr x8
7101bd0418  ldr x8,[x24]
7101bd041c  ldr x8,[x8, #0x388]
7101bd0420  mov x0,x24
7101bd0424  mov w1,w25
7101bd0428  mov w2,wzr
7101bd042c  blr x8
7101bd0430  ldr x8,[x23]
7101bd0434  add x9,x8,#0x1b8
7101bd0438  ldr x8,[x8, #0x1b8]
7101bd043c  cbz x8,0x7101bd04a4
7101bd0440  mov x10,x9
7101bd0444  ldr w11,[x8, #0x20]
7101bd0448  cmp w11,#0x0
7101bd044c  cset w11,lt
7101bd0450  csel x10,x10,x8,lt
7101bd0454  ldr x8,[x8, w11, UXTW #0x3]
7101bd0458  cbnz x8,0x7101bd0444
7101bd045c  cmp x10,x9
7101bd0460  b.eq 0x7101bd04a4
7101bd0464  ldr w8,[x10, #0x20]
7101bd0468  cmp w8,#0x0
7101bd046c  b.gt 0x7101bd04a4
7101bd0470  ldr x24,[x10, #0x28]
7101bd0474  cbz x24,0x7101bd04a4
7101bd0478  ldr x8,[x24]
7101bd047c  ldr x8,[x8, #0x208]
7101bd0480  mov x0,x24
7101bd0484  mov w1,wzr
7101bd0488  blr x8
7101bd048c  ldr x8,[x24]
7101bd0490  ldr x8,[x8, #0x388]
7101bd0494  mov w1,#0x1
7101bd0498  mov x0,x24
7101bd049c  mov w2,wzr
7101bd04a0  blr x8
7101bd04a4  adrp x2,0x710438c000
7101bd04a8  add x2,x2,#0x818
7101bd04ac  mov w1,#0x1
7101bd04b0  mov x0,x23
7101bd04b4  bl 0x71037717d0
7101bd04b8  ldr x9,[x23]
7101bd04bc  ldr x8,[x9, #0x1b8]
7101bd04c0  cbz x8,0x7101bd05b0
7101bd04c4  add x9,x9,#0x1b8
7101bd04c8  mov x10,x9
7101bd04cc  mov x11,x8
7101bd04d0  ldr w12,[x11, #0x20]
7101bd04d4  cmp w12,#0x1
7101bd04d8  cset w12,lt
7101bd04dc  csel x10,x10,x11,lt
7101bd04e0  ldr x11,[x11, w12, UXTW #0x3]
7101bd04e4  cbnz x11,0x7101bd04d0
7101bd04e8  cmp x10,x9
7101bd04ec  b.eq 0x7101bd0548
7101bd04f0  ldr w11,[x10, #0x20]
7101bd04f4  cmp w11,#0x1
7101bd04f8  b.gt 0x7101bd0548
7101bd04fc  ldr x24,[x10, #0x28]
7101bd0500  cbz x24,0x7101bd0548
7101bd0504  ldr w8,[sp, #0x34]
7101bd0508  cmp w8,#0x0
7101bd050c  ldr x8,[x24]
7101bd0510  cset w1,ne
7101bd0514  cset w25,eq
7101bd0518  ldr x8,[x8, #0x1f8]
7101bd051c  mov x0,x24
7101bd0520  blr x8
7101bd0524  ldr x8,[x24]
7101bd0528  ldr x8,[x8, #0x388]
7101bd052c  mov x0,x24
7101bd0530  mov w1,w25
7101bd0534  mov w2,wzr
7101bd0538  blr x8
7101bd053c  ldr x8,[x23]
7101bd0540  add x9,x8,#0x1b8
7101bd0544  ldr x8,[x8, #0x1b8]
7101bd0548  cbz x8,0x7101bd05b0
7101bd054c  mov x10,x9
7101bd0550  ldr w11,[x8, #0x20]
7101bd0554  cmp w11,#0x1
7101bd0558  cset w11,lt
7101bd055c  csel x10,x10,x8,lt
7101bd0560  ldr x8,[x8, w11, UXTW #0x3]
7101bd0564  cbnz x8,0x7101bd0550
7101bd0568  cmp x10,x9
7101bd056c  b.eq 0x7101bd05b0
7101bd0570  ldr w8,[x10, #0x20]
7101bd0574  cmp w8,#0x1
7101bd0578  b.gt 0x7101bd05b0
7101bd057c  ldr x24,[x10, #0x28]
7101bd0580  cbz x24,0x7101bd05b0
7101bd0584  ldr x8,[x24]
7101bd0588  ldr x8,[x8, #0x208]
7101bd058c  mov x0,x24
7101bd0590  mov w1,wzr
7101bd0594  blr x8
7101bd0598  ldr x8,[x24]
7101bd059c  ldr x8,[x8, #0x388]
7101bd05a0  mov w1,#0x1
7101bd05a4  mov x0,x24
7101bd05a8  mov w2,wzr
7101bd05ac  blr x8
7101bd05b0  ldr w8,[sp, #0x34]
7101bd05b4  cbnz w8,0x7101bd05c0
7101bd05b8  ldr x0,[x23]
7101bd05bc  bl 0x710376b960
7101bd05c0  ldr x0,[sp, #0x1d0]
7101bd05c4  add x8,sp,#0xc0
7101bd05c8  add x8,x8,#0xf0
7101bd05cc  cmp x8,x0
7101bd05d0  b.eq 0x7101bd05e4
7101bd05d4  cbz x0,0x7101bd05f0
7101bd05d8  ldr x8,[x0]
7101bd05dc  ldr x8,[x8, #0x28]
7101bd05e0  b 0x7101bd05ec
7101bd05e4  ldr x8,[x0]
7101bd05e8  ldr x8,[x8, #0x20]
7101bd05ec  blr x8
7101bd05f0  ldr x0,[sp, #0x1a0]
7101bd05f4  add x8,sp,#0xc0
7101bd05f8  add x8,x8,#0xc0
7101bd05fc  cmp x8,x0
7101bd0600  b.eq 0x7101bd0614
7101bd0604  cbz x0,0x7101bd0620
7101bd0608  ldr x8,[x0]
7101bd060c  ldr x8,[x8, #0x28]
7101bd0610  b 0x7101bd061c
7101bd0614  ldr x8,[x0]
7101bd0618  ldr x8,[x8, #0x20]
7101bd061c  blr x8
7101bd0620  ldr x0,[sp, #0x170]
7101bd0624  add x8,sp,#0xc0
7101bd0628  add x8,x8,#0x90
7101bd062c  cmp x8,x0
7101bd0630  b.eq 0x7101bd0644
7101bd0634  cbz x0,0x7101bd0650
7101bd0638  ldr x8,[x0]
7101bd063c  ldr x8,[x8, #0x28]
7101bd0640  b 0x7101bd064c
7101bd0644  ldr x8,[x0]
7101bd0648  ldr x8,[x8, #0x20]
7101bd064c  blr x8
7101bd0650  ldr x0,[sp, #0x140]
7101bd0654  add x8,sp,#0xc0
7101bd0658  add x8,x8,#0x60
7101bd065c  cmp x8,x0
7101bd0660  b.eq 0x7101bd0674
7101bd0664  cbz x0,0x7101bd0680
7101bd0668  ldr x8,[x0]
7101bd066c  ldr x8,[x8, #0x28]
7101bd0670  b 0x7101bd067c
7101bd0674  ldr x8,[x0]
7101bd0678  ldr x8,[x8, #0x20]
7101bd067c  blr x8
7101bd0680  ldr x0,[sp, #0x110]
7101bd0684  add x8,sp,#0xc0
7101bd0688  add x8,x8,#0x30
7101bd068c  cmp x8,x0
7101bd0690  b.eq 0x7101bd06a4
7101bd0694  cbz x0,0x7101bd06b0
7101bd0698  ldr x8,[x0]
7101bd069c  ldr x8,[x8, #0x28]
7101bd06a0  b 0x7101bd06ac
7101bd06a4  ldr x8,[x0]
7101bd06a8  ldr x8,[x8, #0x20]
7101bd06ac  blr x8
7101bd06b0  add x0,sp,#0xb0
7101bd06b4  add x1,sp,#0xa0
7101bd06b8  bl 0x7103776390
7101bd06bc  add x8,sp,#0xc0
7101bd06c0  str xzr,[sp, #0xc0]
7101bd06c4  strh w26,[sp, #0xc8]
7101bd06c8  stur wzr,[x8, #0xa]
7101bd06cc  mov w22,#0x1
7101bd06d0  add x8,sp,#0xc0
7101bd06d4  add x0,sp,#0xc0
7101bd06d8  strh wzr,[sp, #0xce]
7101bd06dc  add x23,x8,#0x90
7101bd06e0  str w22,[sp, #0xd0]
7101bd06e4  strh w22,[sp, #0xd4]
7101bd06e8  strb w22,[sp, #0xd6]
7101bd06ec  str x19,[sp, #0xd8]
7101bd06f0  str wzr,[sp, #0xe0]
7101bd06f4  str xzr,[sp, #0x110]
7101bd06f8  str xzr,[sp, #0x140]
7101bd06fc  str xzr,[sp, #0x170]
7101bd0700  str xzr,[sp, #0x1a0]
7101bd0704  str xzr,[sp, #0x1d0]
7101bd0708  str wzr,[sp, #0x1e0]
7101bd070c  bl 0x710337df20
7101bd0710  adrp x8,0x71050ab000
7101bd0714  add x8,x8,#0xfb8
7101bd0718  sub x19,x29,#0xb0
7101bd071c  sub x0,x29,#0xb0
7101bd0720  mov x1,x23
7101bd0724  str xzr,[sp, #0xc0]
7101bd0728  strb w22,[sp, #0xc8]
7101bd072c  strb w22,[sp, #0xca]
7101bd0730  stur x8,[x29, #-0xb0]
7101bd0734  stur x19,[x29, #-0x90]
7101bd0738  bl 0x7101989a30
7101bd073c  ldur x0,[x29, #-0x90]
7101bd0740  cmp x19,x0
7101bd0744  b.eq 0x7101bd0758
7101bd0748  cbz x0,0x7101bd0764
7101bd074c  ldr x8,[x0]
7101bd0750  ldr x8,[x8, #0x28]
7101bd0754  b 0x7101bd0760
7101bd0758  ldr x8,[x0]
7101bd075c  ldr x8,[x8, #0x20]
7101bd0760  blr x8
7101bd0764  add x24,x21,#0x20
7101bd0768  adrp x2,0x710435b000
7101bd076c  add x2,x2,#0x561
7101bd0770  add x1,sp,#0xb0
7101bd0774  add x3,sp,#0xc0
7101bd0778  mov x0,x24
7101bd077c  bl 0x7103770b30
7101bd0780  adrp x23,0x71042a3000
7101bd0784  add x23,x23,#0x84e
7101bd0788  mov x0,x24
7101bd078c  mov w1,wzr
7101bd0790  mov x2,x23
7101bd0794  bl 0x71037717d0
7101bd0798  ldr x0,[x21, #0x20]
7101bd079c  mov w2,#0x2
7101bd07a0  mov w1,wzr
7101bd07a4  mov w3,wzr
7101bd07a8  bl 0x7103771930
7101bd07ac  ldr x1,[x21, #0x20]
7101bd07b0  sub x0,x29,#0xb0
7101bd07b4  mov w2,wzr
7101bd07b8  bl 0x7103771d60
7101bd07bc  ldur x25,[x29, #-0xa8]
7101bd07c0  ldr x0,[x25]
7101bd07c4  cbz x0,0x7101bd07dc
7101bd07c8  ldr x8,[x0]
7101bd07cc  ldr x8,[x8, #0x268]
7101bd07d0  mov w1,#0x1
7101bd07d4  mov w2,#0x1
7101bd07d8  blr x8
7101bd07dc  adrp x19,0x710523d000
7101bd07e0  add x19,x19,#0x9c8
7101bd07e4  stp x19,xzr,[x29, #-0xb0]
7101bd07e8  cbz x25,0x7101bd07f4
7101bd07ec  mov x0,x25
7101bd07f0  bl 0x710392eb40
7101bd07f4  adrp x25,0x710425f000
7101bd07f8  add x25,x25,#0xde2
7101bd07fc  mov w1,#0x1
7101bd0800  mov x0,x24
7101bd0804  mov x2,x25
7101bd0808  bl 0x71037717d0
7101bd080c  ldr x0,[x24]
7101bd0810  mov w1,#0x1
7101bd0814  orr w2,wzr,#0x3
7101bd0818  mov w3,wzr
7101bd081c  bl 0x7103771930
7101bd0820  ldr x1,[x24]
7101bd0824  sub x0,x29,#0xb0
7101bd0828  mov w2,#0x1
7101bd082c  bl 0x7103771d60
7101bd0830  ldur x24,[x29, #-0xa8]
7101bd0834  ldr x0,[x24]
7101bd0838  cbz x0,0x7101bd0850
7101bd083c  ldr x8,[x0]
7101bd0840  ldr x8,[x8, #0x268]
7101bd0844  mov w1,#0x1
7101bd0848  mov w2,#0x1
7101bd084c  blr x8
7101bd0850  stp x19,xzr,[x29, #-0xb0]
7101bd0854  cbz x24,0x7101bd0860
7101bd0858  mov x0,x24
7101bd085c  bl 0x710392eb40
7101bd0860  mov w8,#0x1
7101bd0864  stur w8,[x29, #-0xa0]
7101bd0868  mov w8,#0x2
7101bd086c  adrp x9,0x710438c000
7101bd0870  add x9,x9,#0x824
7101bd0874  sub x0,x29,#0x70
7101bd0878  stur wzr,[x29, #-0xb0]
7101bd087c  stur x23,[x29, #-0xa8]
7101bd0880  stur x25,[x29, #-0x98]
7101bd0884  stur w8,[x29, #-0x90]
7101bd0888  add x22,x21,#0x30
7101bd088c  sub x19,x29,#0x70
7101bd0890  stur x9,[x29, #-0x88]
7101bd0894  bl 0x7103776290
7101bd0898  cmp x22,x19
7101bd089c  b.eq 0x7101bd0910
7101bd08a0  ldur x8,[x29, #-0x68]
7101bd08a4  ldr x8,[x8]
7101bd08a8  ldr x9,[x21, #0x38]
7101bd08ac  str x8,[x9]
7101bd08b0  ldur x8,[x29, #-0x68]
7101bd08b4  ldr x8,[x8, #0x8]
7101bd08b8  ldr x9,[x21, #0x38]
7101bd08bc  str x8,[x9, #0x8]
7101bd08c0  ldur x9,[x29, #-0x68]
7101bd08c4  ldr x8,[x21, #0x38]
7101bd08c8  cmp x8,x9
7101bd08cc  b.eq 0x7101bd0910
7101bd08d0  ldr x10,[x9, #0x18]
7101bd08d4  ldr x10,[x10]
7101bd08d8  ldr x11,[x8, #0x18]
7101bd08dc  str x10,[x11]
7101bd08e0  ldr x10,[x9, #0x18]
7101bd08e4  ldr x10,[x10, #0x8]
7101bd08e8  ldr x11,[x8, #0x18]
7101bd08ec  str x10,[x11, #0x8]
7101bd08f0  ldr x10,[x9, #0x18]
7101bd08f4  ldr x10,[x10, #0x10]
7101bd08f8  ldr x11,[x8, #0x18]
7101bd08fc  str x10,[x11, #0x10]
7101bd0900  ldr x9,[x9, #0x18]
7101bd0904  ldr x9,[x9, #0x18]
7101bd0908  ldr x8,[x8, #0x18]
7101bd090c  str x9,[x8, #0x18]
7101bd0910  add x8,x21,#0x40
7101bd0914  cmp x8,x19
7101bd0918  adrp x25,0x710523d000
7101bd091c  add x25,x25,#0x9e8
7101bd0920  b.eq 0x7101bd0994
7101bd0924  ldur x8,[x29, #-0x68]
7101bd0928  ldr x8,[x8]
7101bd092c  ldr x9,[x21, #0x48]
7101bd0930  str x8,[x9]
7101bd0934  ldur x8,[x29, #-0x68]
7101bd0938  ldr x8,[x8, #0x8]
7101bd093c  ldr x9,[x21, #0x48]
7101bd0940  str x8,[x9, #0x8]
7101bd0944  ldur x9,[x29, #-0x68]
7101bd0948  ldr x8,[x21, #0x48]
7101bd094c  cmp x8,x9
7101bd0950  b.eq 0x7101bd0994
7101bd0954  ldr x10,[x9, #0x18]
7101bd0958  ldr x10,[x10]
7101bd095c  ldr x11,[x8, #0x18]
7101bd0960  str x10,[x11]
7101bd0964  ldr x10,[x9, #0x18]
7101bd0968  ldr x10,[x10, #0x8]
7101bd096c  ldr x11,[x8, #0x18]
7101bd0970  str x10,[x11, #0x8]
7101bd0974  ldr x10,[x9, #0x18]
7101bd0978  ldr x10,[x10, #0x10]
7101bd097c  ldr x11,[x8, #0x18]
7101bd0980  str x10,[x11, #0x10]
7101bd0984  ldr x9,[x9, #0x18]
7101bd0988  ldr x9,[x9, #0x18]
7101bd098c  ldr x8,[x8, #0x18]
7101bd0990  str x9,[x8, #0x18]
7101bd0994  add x8,x21,#0x50
7101bd0998  sub x9,x29,#0x70
7101bd099c  cmp x8,x9
7101bd09a0  b.eq 0x7101bd0a14
7101bd09a4  ldur x8,[x29, #-0x68]
7101bd09a8  ldr x8,[x8]
7101bd09ac  ldr x9,[x21, #0x58]
7101bd09b0  str x8,[x9]
7101bd09b4  ldur x8,[x29, #-0x68]
7101bd09b8  ldr x8,[x8, #0x8]
7101bd09bc  ldr x9,[x21, #0x58]
7101bd09c0  str x8,[x9, #0x8]
7101bd09c4  ldur x23,[x29, #-0x68]
7101bd09c8  ldr x8,[x21, #0x58]
7101bd09cc  cmp x8,x23
7101bd09d0  b.eq 0x7101bd0a18
7101bd09d4  ldr x9,[x23, #0x18]
7101bd09d8  ldr x9,[x9]
7101bd09dc  ldr x10,[x8, #0x18]
7101bd09e0  str x9,[x10]
7101bd09e4  ldr x9,[x23, #0x18]
7101bd09e8  ldr x9,[x9, #0x8]
7101bd09ec  ldr x10,[x8, #0x18]
7101bd09f0  str x9,[x10, #0x8]
7101bd09f4  ldr x9,[x23, #0x18]
7101bd09f8  ldr x9,[x9, #0x10]
7101bd09fc  ldr x10,[x8, #0x18]
7101bd0a00  str x9,[x10, #0x10]
7101bd0a04  ldr x9,[x23, #0x18]
7101bd0a08  ldr x9,[x9, #0x18]
7101bd0a0c  ldr x8,[x8, #0x18]
7101bd0a10  str x9,[x8, #0x18]
7101bd0a14  ldur x23,[x29, #-0x68]
7101bd0a18  stp x28,xzr,[x29, #-0x70]
7101bd0a1c  cbz x23,0x7101bd0a38
7101bd0a20  ldr x0,[x23, #0x18]
7101bd0a24  stp x27,xzr,[x23, #0x10]
7101bd0a28  cbz x0,0x7101bd0a30
7101bd0a2c  bl 0x710392eb40
7101bd0a30  mov x0,x23
7101bd0a34  bl 0x710392eb40
7101bd0a38  ldur w8,[x29, #-0xb0]
7101bd0a3c  cmp w8,#0x3
7101bd0a40  b.cs 0x7101bd1e80
7101bd0a44  ldur x1,[x29, #-0xa8]
7101bd0a48  sub x8,x29,#0x70
7101bd0a4c  add x0,sp,#0xb0
7101bd0a50  sub x19,x29,#0x70
7101bd0a54  bl 0x7103776640
7101bd0a58  ldursw x8,[x29, #-0xb0]
7101bd0a5c  cmp w8,#0x3
7101bd0a60  b.cs 0x7101bd1e80
7101bd0a64  add x8,x21,x8, LSL #0x4
7101bd0a68  add x9,x8,#0x30
7101bd0a6c  cmp x9,x19
7101bd0a70  b.eq 0x7101bd0aa0
7101bd0a74  ldur x9,[x29, #-0x68]
7101bd0a78  stur xzr,[x29, #-0x68]
7101bd0a7c  ldr x23,[x8, #0x38]
7101bd0a80  str x9,[x8, #0x38]
7101bd0a84  cbz x23,0x7101bd0aa0
7101bd0a88  ldr x0,[x23, #0x18]
7101bd0a8c  stp x27,xzr,[x23, #0x10]
7101bd0a90  cbz x0,0x7101bd0a98
7101bd0a94  bl 0x710392eb40
7101bd0a98  mov x0,x23
7101bd0a9c  bl 0x710392eb40
7101bd0aa0  ldur x23,[x29, #-0x68]
7101bd0aa4  stp x28,xzr,[x29, #-0x70]
7101bd0aa8  cbz x23,0x7101bd0ac4
7101bd0aac  ldr x0,[x23, #0x18]
7101bd0ab0  stp x27,xzr,[x23, #0x10]
7101bd0ab4  cbz x0,0x7101bd0abc
7101bd0ab8  bl 0x710392eb40
7101bd0abc  mov x0,x23
7101bd0ac0  bl 0x710392eb40
7101bd0ac4  ldur w8,[x29, #-0xa0]
7101bd0ac8  cmp w8,#0x2
7101bd0acc  b.hi 0x7101bd1e80
7101bd0ad0  ldur x1,[x29, #-0x98]
7101bd0ad4  sub x8,x29,#0x70
7101bd0ad8  add x0,sp,#0xb0
7101bd0adc  sub x19,x29,#0x70
7101bd0ae0  bl 0x7103776640
7101bd0ae4  ldursw x8,[x29, #-0xa0]
7101bd0ae8  cmp w8,#0x2
7101bd0aec  b.hi 0x7101bd1e80
7101bd0af0  add x8,x21,x8, LSL #0x4
7101bd0af4  add x9,x8,#0x30
7101bd0af8  cmp x9,x19
7101bd0afc  b.eq 0x7101bd0b2c
7101bd0b00  ldur x9,[x29, #-0x68]
7101bd0b04  stur xzr,[x29, #-0x68]
7101bd0b08  ldr x23,[x8, #0x38]
7101bd0b0c  str x9,[x8, #0x38]
7101bd0b10  cbz x23,0x7101bd0b2c
7101bd0b14  ldr x0,[x23, #0x18]
7101bd0b18  stp x27,xzr,[x23, #0x10]
7101bd0b1c  cbz x0,0x7101bd0b24
7101bd0b20  bl 0x710392eb40
7101bd0b24  mov x0,x23
7101bd0b28  bl 0x710392eb40
7101bd0b2c  ldur x23,[x29, #-0x68]
7101bd0b30  stp x28,xzr,[x29, #-0x70]
7101bd0b34  cbz x23,0x7101bd0b50
7101bd0b38  ldr x0,[x23, #0x18]
7101bd0b3c  stp x27,xzr,[x23, #0x10]
7101bd0b40  cbz x0,0x7101bd0b48
7101bd0b44  bl 0x710392eb40
7101bd0b48  mov x0,x23
7101bd0b4c  bl 0x710392eb40
7101bd0b50  ldur w8,[x29, #-0x90]
7101bd0b54  cmp w8,#0x2
7101bd0b58  b.hi 0x7101bd1e80
7101bd0b5c  ldur x1,[x29, #-0x88]
7101bd0b60  sub x8,x29,#0x70
7101bd0b64  add x0,sp,#0xb0
7101bd0b68  sub x19,x29,#0x70
7101bd0b6c  bl 0x7103776640
7101bd0b70  ldursw x8,[x29, #-0x90]
7101bd0b74  cmp w8,#0x2
7101bd0b78  b.hi 0x7101bd1e80
7101bd0b7c  add x8,x21,x8, LSL #0x4
7101bd0b80  add x9,x8,#0x30
7101bd0b84  cmp x9,x19
7101bd0b88  b.eq 0x7101bd0bb8
7101bd0b8c  ldur x9,[x29, #-0x68]
7101bd0b90  stur xzr,[x29, #-0x68]
7101bd0b94  ldr x23,[x8, #0x38]
7101bd0b98  str x9,[x8, #0x38]
7101bd0b9c  cbz x23,0x7101bd0bb8
7101bd0ba0  ldr x0,[x23, #0x18]
7101bd0ba4  stp x27,xzr,[x23, #0x10]
7101bd0ba8  cbz x0,0x7101bd0bb0
7101bd0bac  bl 0x710392eb40
7101bd0bb0  mov x0,x23
7101bd0bb4  bl 0x710392eb40
7101bd0bb8  ldur x23,[x29, #-0x68]
7101bd0bbc  stp x28,xzr,[x29, #-0x70]
7101bd0bc0  cbz x23,0x7101bd0bdc
7101bd0bc4  ldr x0,[x23, #0x18]
7101bd0bc8  stp x27,xzr,[x23, #0x10]
7101bd0bcc  cbz x0,0x7101bd0bd4
7101bd0bd0  bl 0x710392eb40
7101bd0bd4  mov x0,x23
7101bd0bd8  bl 0x710392eb40
7101bd0bdc  mov w8,#0x1
7101bd0be0  strb w8,[x21, #0x18]
7101bd0be4  ldr x0,[sp, #0x1d0]
7101bd0be8  add x8,sp,#0xc0
7101bd0bec  add x8,x8,#0xf0
7101bd0bf0  cmp x8,x0
7101bd0bf4  b.eq 0x7101bd0c08
7101bd0bf8  cbz x0,0x7101bd0c14
7101bd0bfc  ldr x8,[x0]
7101bd0c00  ldr x8,[x8, #0x28]
7101bd0c04  b 0x7101bd0c10
7101bd0c08  ldr x8,[x0]
7101bd0c0c  ldr x8,[x8, #0x20]
7101bd0c10  blr x8
7101bd0c14  ldr x0,[sp, #0x1a0]
7101bd0c18  add x8,sp,#0xc0
7101bd0c1c  add x8,x8,#0xc0
7101bd0c20  cmp x8,x0
7101bd0c24  b.eq 0x7101bd0c38
7101bd0c28  cbz x0,0x7101bd0c44
7101bd0c2c  ldr x8,[x0]
7101bd0c30  ldr x8,[x8, #0x28]
7101bd0c34  b 0x7101bd0c40
7101bd0c38  ldr x8,[x0]
7101bd0c3c  ldr x8,[x8, #0x20]
7101bd0c40  blr x8
7101bd0c44  ldr x0,[sp, #0x170]
7101bd0c48  add x8,sp,#0xc0
7101bd0c4c  add x8,x8,#0x90
7101bd0c50  cmp x8,x0
7101bd0c54  b.eq 0x7101bd0c68
7101bd0c58  cbz x0,0x7101bd0c74
7101bd0c5c  ldr x8,[x0]
7101bd0c60  ldr x8,[x8, #0x28]
7101bd0c64  b 0x7101bd0c70
7101bd0c68  ldr x8,[x0]
7101bd0c6c  ldr x8,[x8, #0x20]
7101bd0c70  blr x8
7101bd0c74  ldr x0,[sp, #0x140]
7101bd0c78  add x8,sp,#0xc0
7101bd0c7c  add x8,x8,#0x60
7101bd0c80  cmp x8,x0
7101bd0c84  b.eq 0x7101bd0c98
7101bd0c88  cbz x0,0x7101bd0ca4
7101bd0c8c  ldr x8,[x0]
7101bd0c90  ldr x8,[x8, #0x28]
7101bd0c94  b 0x7101bd0ca0
7101bd0c98  ldr x8,[x0]
7101bd0c9c  ldr x8,[x8, #0x20]
7101bd0ca0  blr x8
7101bd0ca4  ldr x0,[sp, #0x110]
7101bd0ca8  add x8,sp,#0xc0
7101bd0cac  add x8,x8,#0x30
7101bd0cb0  cmp x8,x0
7101bd0cb4  b.eq 0x7101bd0cc8
7101bd0cb8  cbz x0,0x7101bd0cd4
7101bd0cbc  ldr x8,[x0]
7101bd0cc0  ldr x8,[x8, #0x28]
7101bd0cc4  b 0x7101bd0cd0
7101bd0cc8  ldr x8,[x0]
7101bd0ccc  ldr x8,[x8, #0x20]
7101bd0cd0  blr x8
7101bd0cd4  ldr x23,[sp, #0xb8]
7101bd0cd8  stp x28,xzr,[sp, #0xb0]
7101bd0cdc  cbz x23,0x7101bd0cf8
7101bd0ce0  ldr x0,[x23, #0x18]
7101bd0ce4  stp x27,xzr,[x23, #0x10]
7101bd0ce8  cbz x0,0x7101bd0cf0
7101bd0cec  bl 0x710392eb40
7101bd0cf0  mov x0,x23
7101bd0cf4  bl 0x710392eb40
7101bd0cf8  mov w1,#0x88
7101bd0cfc  mov w0,#0x10
7101bd0d00  bl 0x710392e290
7101bd0d04  mov x23,x0
7101bd0d08  cbnz x0,0x7101bd0d54
7101bd0d0c  adrp x8,0x7105332000
7101bd0d10  ldr x0,[x8, #0xf00]
7101bd0d14  cbz x0,0x7101bd0d50
7101bd0d18  mov w8,#0x88
7101bd0d1c  stur wzr,[x29, #-0xb0]
7101bd0d20  sub x1,x29,#0xb0
7101bd0d24  str x8,[sp, #0xc0]
7101bd0d28  ldr x8,[x0]
7101bd0d2c  ldr x8,[x8, #0x30]
7101bd0d30  add x2,sp,#0xc0
7101bd0d34  blr x8
7101bd0d38  tbz w0,#0x0,0x7101bd0d50
7101bd0d3c  mov w1,#0x88
7101bd0d40  mov w0,#0x10
7101bd0d44  bl 0x710392e290
7101bd0d48  mov x23,x0
7101bd0d4c  cbnz x0,0x7101bd0d54
7101bd0d50  mov x23,xzr
7101bd0d54  adrp x8,0x71050ac000
7101bd0d58  add x8,x8,#0x0
7101bd0d5c  mov x19,x23
7101bd0d60  mov w0,#0x10
7101bd0d64  mov w1,#0x20
7101bd0d68  str x8,[x23]
7101bd0d6c  stp xzr,xzr,[x23, #0x8]
7101bd0d70  strh wzr,[x19, #0x18]!
7101bd0d74  stur xzr,[x23, #0x44]
7101bd0d78  stur xzr,[x23, #0x3c]
7101bd0d7c  str wzr,[x23, #0x5c]
7101bd0d80  stur xzr,[x23, #0x54]
7101bd0d84  stur xzr,[x23, #0x4c]
7101bd0d88  stur xzr,[x23, #0x34]
7101bd0d8c  stur xzr,[x23, #0x2c]
7101bd0d90  stur xzr,[x23, #0x24]
7101bd0d94  stur xzr,[x23, #0x1c]
7101bd0d98  str x27,[x23, #0x40]
7101bd0d9c  bl 0x710392e290
7101bd0da0  cbnz x0,0x7101bd0de8
7101bd0da4  adrp x8,0x7105332000
7101bd0da8  ldr x0,[x8, #0xf00]
7101bd0dac  cbz x0,0x7101bd0de4
7101bd0db0  mov w8,#0x20
7101bd0db4  stur wzr,[x29, #-0xb0]
7101bd0db8  sub x1,x29,#0xb0
7101bd0dbc  str x8,[sp, #0xc0]
7101bd0dc0  ldr x8,[x0]
7101bd0dc4  ldr x8,[x8, #0x30]
7101bd0dc8  add x2,sp,#0xc0
7101bd0dcc  blr x8
7101bd0dd0  tbz w0,#0x0,0x7101bd0de4
7101bd0dd4  mov w0,#0x10
7101bd0dd8  mov w1,#0x20
7101bd0ddc  bl 0x710392e290
7101bd0de0  cbnz x0,0x7101bd0de8
7101bd0de4  mov x0,xzr
7101bd0de8  stp xzr,xzr,[x0, #0x10]
7101bd0dec  mov w1,#0x20
7101bd0df0  stp xzr,xzr,[x0]
7101bd0df4  stp x0,x27,[x23, #0x48]
7101bd0df8  mov w0,#0x10
7101bd0dfc  bl 0x710392e290
7101bd0e00  cbnz x0,0x7101bd0e48
7101bd0e04  adrp x8,0x7105332000
7101bd0e08  ldr x0,[x8, #0xf00]
7101bd0e0c  cbz x0,0x7101bd0e44
7101bd0e10  mov w8,#0x20
7101bd0e14  stur wzr,[x29, #-0xb0]
7101bd0e18  sub x1,x29,#0xb0
7101bd0e1c  str x8,[sp, #0xc0]
7101bd0e20  ldr x8,[x0]
7101bd0e24  ldr x8,[x8, #0x30]
7101bd0e28  add x2,sp,#0xc0
7101bd0e2c  blr x8
7101bd0e30  tbz w0,#0x0,0x7101bd0e44
7101bd0e34  mov w0,#0x10
7101bd0e38  mov w1,#0x20
7101bd0e3c  bl 0x710392e290
7101bd0e40  cbnz x0,0x7101bd0e48
7101bd0e44  mov x0,xzr
7101bd0e48  stp xzr,xzr,[x0, #0x10]
7101bd0e4c  adrp x8,0x71050ab000
7101bd0e50  add x8,x8,#0xdb0
7101bd0e54  stp xzr,xzr,[x0]
7101bd0e58  orr w1,wzr,#0x18
7101bd0e5c  str x8,[x23, #0x38]
7101bd0e60  stp x0,xzr,[x23, #0x58]
7101bd0e64  mov w0,#0x10
7101bd0e68  stp xzr,xzr,[x23, #0x78]
7101bd0e6c  stp x25,xzr,[x23, #0x68]
7101bd0e70  bl 0x710392e290
7101bd0e74  cbnz x0,0x7101bd0ebc
7101bd0e78  adrp x8,0x7105332000
7101bd0e7c  ldr x0,[x8, #0xf00]
7101bd0e80  cbz x0,0x7101bd0eb8
7101bd0e84  orr w8,wzr,#0x18
7101bd0e88  stur wzr,[x29, #-0xb0]
7101bd0e8c  sub x1,x29,#0xb0
7101bd0e90  str x8,[sp, #0xc0]
7101bd0e94  ldr x8,[x0]
7101bd0e98  ldr x8,[x8, #0x30]
7101bd0e9c  add x2,sp,#0xc0
7101bd0ea0  blr x8
7101bd0ea4  tbz w0,#0x0,0x7101bd0eb8
7101bd0ea8  mov w0,#0x10
7101bd0eac  orr w1,wzr,#0x18
7101bd0eb0  bl 0x710392e290
7101bd0eb4  cbnz x0,0x7101bd0ebc
7101bd0eb8  mov x0,xzr
7101bd0ebc  mov w22,#0x1
7101bd0ec0  stp xzr,xzr,[x0]
7101bd0ec4  strb w22,[x0, #0x10]
7101bd0ec8  orr w1,wzr,#0x18
7101bd0ecc  stp x0,x25,[x23, #0x70]
7101bd0ed0  mov w0,#0x10
7101bd0ed4  bl 0x710392e290
7101bd0ed8  cbnz x0,0x7101bd0f20
7101bd0edc  adrp x8,0x7105332000
7101bd0ee0  ldr x0,[x8, #0xf00]
7101bd0ee4  cbz x0,0x7101bd0f1c
7101bd0ee8  orr w8,wzr,#0x18
7101bd0eec  stur wzr,[x29, #-0xb0]
7101bd0ef0  sub x1,x29,#0xb0
7101bd0ef4  str x8,[sp, #0xc0]
7101bd0ef8  ldr x8,[x0]
7101bd0efc  ldr x8,[x8, #0x30]
7101bd0f00  add x2,sp,#0xc0
7101bd0f04  blr x8
7101bd0f08  tbz w0,#0x0,0x7101bd0f1c
7101bd0f0c  mov w0,#0x10
7101bd0f10  orr w1,wzr,#0x18
7101bd0f14  bl 0x710392e290
7101bd0f18  cbnz x0,0x7101bd0f20
7101bd0f1c  mov x0,xzr
7101bd0f20  adrp x8,0x71050ab000
7101bd0f24  add x8,x8,#0x348
7101bd0f28  strb w22,[x0, #0x10]
7101bd0f2c  stp xzr,xzr,[x0]
7101bd0f30  str x0,[x23, #0x80]
7101bd0f34  str x8,[x23, #0x60]
7101bd0f38  ldr x24,[x21, #0x78]
7101bd0f3c  stp x19,x23,[x21, #0x70]
7101bd0f40  cbz x24,0x7101bd0f74
7101bd0f44  add x8,x24,#0x8
7101bd0f48  ldaxr x9,[x8]
7101bd0f4c  sub x10,x9,#0x1
7101bd0f50  stlxr w11,x10,[x8]
7101bd0f54  cbnz w11,0x7101bd0f48
7101bd0f58  cbnz x9,0x7101bd0f74
7101bd0f5c  ldr x8,[x24]
7101bd0f60  ldr x8,[x8, #0x10]
7101bd0f64  mov x0,x24
7101bd0f68  blr x8
7101bd0f6c  mov x0,x24
7101bd0f70  bl 0x71039c2670
7101bd0f74  ldr w8,[sp, #0xc]
7101bd0f78  stp xzr,xzr,[sp, #0xc8]
7101bd0f7c  str xzr,[sp, #0xc0]
7101bd0f80  cbz w8,0x7101bd0ffc
7101bd0f84  mov w0,#0x10
7101bd0f88  mov w1,#0x4
7101bd0f8c  bl 0x710392e290
7101bd0f90  ldr w19,[sp, #0x10]
7101bd0f94  mov x23,x0
7101bd0f98  cbnz x0,0x7101bd0fe4
7101bd0f9c  adrp x8,0x7105332000
7101bd0fa0  ldr x0,[x8, #0xf00]
7101bd0fa4  cbz x0,0x7101bd0fe0
7101bd0fa8  mov w8,#0x4
7101bd0fac  stur wzr,[x29, #-0x70]
7101bd0fb0  sub x1,x29,#0x70
7101bd0fb4  stur x8,[x29, #-0xb0]
7101bd0fb8  ldr x8,[x0]
7101bd0fbc  ldr x8,[x8, #0x30]
7101bd0fc0  sub x2,x29,#0xb0
7101bd0fc4  blr x8
7101bd0fc8  tbz w0,#0x0,0x7101bd0fe0
7101bd0fcc  mov w0,#0x10
7101bd0fd0  mov w1,#0x4
7101bd0fd4  bl 0x710392e290
7101bd0fd8  mov x23,x0
7101bd0fdc  cbnz x0,0x7101bd0fe4
7101bd0fe0  mov x23,xzr
7101bd0fe4  mov x8,x23
7101bd0fe8  str wzr,[x8], #0x4
7101bd0fec  stp x23,x8,[sp, #0xc0]
7101bd0ff0  str x8,[sp, #0xd0]
7101bd0ff4  cbnz w19,0x7101bd100c
7101bd0ff8  b 0x7101bd10f4
7101bd0ffc  ldr w19,[sp, #0x10]
7101bd1000  mov x23,xzr
7101bd1004  mov x8,xzr
7101bd1008  cbz w19,0x7101bd10f4
7101bd100c  sub x24,x8,x23
7101bd1010  asr x19,x24,#0x2
7101bd1014  add x8,x19,#0x1
7101bd1018  lsr x9,x8,#0x3e
7101bd101c  cbnz x9,0x7101bd1e84
7101bd1020  orr x9,xzr,#0x1ffffffffffffffe
7101bd1024  cmp x19,x9
7101bd1028  b.hi 0x7101bd1048
7101bd102c  asr x9,x24,#0x1
7101bd1030  cmp x9,x8
7101bd1034  csel x22,x8,x9,cc
7101bd1038  cbz x22,0x7101bd1e70
7101bd103c  lsr x8,x22,#0x3e
7101bd1040  cbz x8,0x7101bd104c
7101bd1044  b 0x7101bd1e80
7101bd1048  orr x22,xzr,#0x3fffffffffffffff
7101bd104c  lsl x8,x22,#0x2
7101bd1050  cmp x8,#0x0
7101bd1054  csinc x25,x8,xzr,ne
7101bd1058  mov w0,#0x10
7101bd105c  mov x1,x25
7101bd1060  bl 0x710392e290
7101bd1064  mov x26,x0
7101bd1068  cbnz x0,0x7101bd10b0
7101bd106c  adrp x8,0x7105332000
7101bd1070  ldr x0,[x8, #0xf00]
7101bd1074  cbz x0,0x7101bd10ac
7101bd1078  stur wzr,[x29, #-0x70]
7101bd107c  stur x25,[x29, #-0xb0]
7101bd1080  ldr x8,[x0]
7101bd1084  ldr x8,[x8, #0x30]
7101bd1088  sub x1,x29,#0x70
7101bd108c  sub x2,x29,#0xb0
7101bd1090  blr x8
7101bd1094  tbz w0,#0x0,0x7101bd10ac
7101bd1098  mov w0,#0x10
7101bd109c  mov x1,x25
7101bd10a0  bl 0x710392e290
7101bd10a4  mov x26,x0
7101bd10a8  cbnz x0,0x7101bd10b0
7101bd10ac  mov x26,xzr
7101bd10b0  adrp x25,0x710523d000
7101bd10b4  add x25,x25,#0x9e8
7101bd10b8  add x19,x26,x19, LSL #0x2
7101bd10bc  mov w8,#0x1
7101bd10c0  add x22,x26,x22, LSL #0x2
7101bd10c4  str w8,[x19], #0x4
7101bd10c8  cmp x24,#0x1
7101bd10cc  b.lt 0x7101bd10e0
7101bd10d0  mov x0,x26
7101bd10d4  mov x1,x23
7101bd10d8  mov x2,x24
7101bd10dc  bl 0x71039c00e0
7101bd10e0  stp x26,x19,[sp, #0xc0]
7101bd10e4  str x22,[sp, #0xd0]
7101bd10e8  cbz x23,0x7101bd10f4
7101bd10ec  mov x0,x23
7101bd10f0  bl 0x710392eb40
7101bd10f4  ldr w8,[sp, #0x14]
7101bd10f8  cbz w8,0x7101bd121c
7101bd10fc  ldp x9,x8,[sp, #0xc8]
7101bd1100  cmp x9,x8
7101bd1104  b.cs 0x7101bd1128
7101bd1108  mov w8,#0x2
7101bd110c  str w8,[x9]
7101bd1110  ldr x8,[sp, #0xc8]
7101bd1114  add x8,x8,#0x4
7101bd1118  str x8,[sp, #0xc8]
7101bd111c  ldr w8,[sp, #0x18]
7101bd1120  cbnz w8,0x7101bd1224
7101bd1124  b 0x7101bd1344
7101bd1128  ldr x23,[sp, #0xc0]
7101bd112c  sub x24,x9,x23
7101bd1130  asr x19,x24,#0x2
7101bd1134  add x9,x19,#0x1
7101bd1138  lsr x10,x9,#0x3e
7101bd113c  cbnz x10,0x7101bd1e84
7101bd1140  sub x8,x8,x23
7101bd1144  asr x10,x8,#0x2
7101bd1148  orr x11,xzr,#0x1ffffffffffffffe
7101bd114c  cmp x10,x11
7101bd1150  b.hi 0x7101bd1170
7101bd1154  asr x8,x8,#0x1
7101bd1158  cmp x8,x9
7101bd115c  csel x22,x9,x8,cc
7101bd1160  cbz x22,0x7101bd11d4
7101bd1164  lsr x8,x22,#0x3e
7101bd1168  cbz x8,0x7101bd1174
7101bd116c  b 0x7101bd1e80
7101bd1170  orr x22,xzr,#0x3fffffffffffffff
7101bd1174  lsl x8,x22,#0x2
7101bd1178  cmp x8,#0x0
7101bd117c  csinc x26,x8,xzr,ne
7101bd1180  mov w0,#0x10
7101bd1184  mov x1,x26
7101bd1188  bl 0x710392e290
7101bd118c  mov x25,x0
7101bd1190  cbnz x0,0x7101bd11d8
7101bd1194  adrp x8,0x7105332000
7101bd1198  ldr x0,[x8, #0xf00]
7101bd119c  cbz x0,0x7101bd11d4
7101bd11a0  stur wzr,[x29, #-0x70]
7101bd11a4  stur x26,[x29, #-0xb0]
7101bd11a8  ldr x8,[x0]
7101bd11ac  ldr x8,[x8, #0x30]
7101bd11b0  sub x1,x29,#0x70
7101bd11b4  sub x2,x29,#0xb0
7101bd11b8  blr x8
7101bd11bc  tbz w0,#0x0,0x7101bd11d4
7101bd11c0  mov w0,#0x10
7101bd11c4  mov x1,x26
7101bd11c8  bl 0x710392e290
7101bd11cc  mov x25,x0
7101bd11d0  cbnz x0,0x7101bd11d8
7101bd11d4  mov x25,xzr
7101bd11d8  add x19,x25,x19, LSL #0x2
7101bd11dc  mov w8,#0x2
7101bd11e0  add x22,x25,x22, LSL #0x2
7101bd11e4  str w8,[x19], #0x4
7101bd11e8  cmp x24,#0x1
7101bd11ec  b.lt 0x7101bd1200
7101bd11f0  mov x0,x25
7101bd11f4  mov x1,x23
7101bd11f8  mov x2,x24
7101bd11fc  bl 0x71039c00e0
7101bd1200  stp x25,x19,[sp, #0xc0]
7101bd1204  adrp x25,0x710523d000
7101bd1208  add x25,x25,#0x9e8
7101bd120c  str x22,[sp, #0xd0]
7101bd1210  cbz x23,0x7101bd121c
7101bd1214  mov x0,x23
7101bd1218  bl 0x710392eb40
7101bd121c  ldr w8,[sp, #0x18]
7101bd1220  cbz w8,0x7101bd1344
7101bd1224  ldp x9,x8,[sp, #0xc8]
7101bd1228  cmp x9,x8
7101bd122c  b.cs 0x7101bd1250
7101bd1230  orr w8,wzr,#0x3
7101bd1234  str w8,[x9]
7101bd1238  ldr x8,[sp, #0xc8]
7101bd123c  add x8,x8,#0x4
7101bd1240  str x8,[sp, #0xc8]
7101bd1244  ldr w8,[sp, #0x1c]
7101bd1248  cbnz w8,0x7101bd134c
7101bd124c  b 0x7101bd1464
7101bd1250  ldr x23,[sp, #0xc0]
7101bd1254  sub x24,x9,x23
7101bd1258  asr x19,x24,#0x2
7101bd125c  add x9,x19,#0x1
7101bd1260  lsr x10,x9,#0x3e
7101bd1264  cbnz x10,0x7101bd1e84
7101bd1268  sub x8,x8,x23
7101bd126c  asr x10,x8,#0x2
7101bd1270  orr x11,xzr,#0x1ffffffffffffffe
7101bd1274  cmp x10,x11
7101bd1278  b.hi 0x7101bd1298
7101bd127c  asr x8,x8,#0x1
7101bd1280  cmp x8,x9
7101bd1284  csel x22,x9,x8,cc
7101bd1288  cbz x22,0x7101bd12fc
7101bd128c  lsr x8,x22,#0x3e
7101bd1290  cbz x8,0x7101bd129c
7101bd1294  b 0x7101bd1e80
7101bd1298  orr x22,xzr,#0x3fffffffffffffff
7101bd129c  lsl x8,x22,#0x2
7101bd12a0  cmp x8,#0x0
7101bd12a4  csinc x26,x8,xzr,ne
7101bd12a8  mov w0,#0x10
7101bd12ac  mov x1,x26
7101bd12b0  bl 0x710392e290
7101bd12b4  mov x25,x0
7101bd12b8  cbnz x0,0x7101bd1300
7101bd12bc  adrp x8,0x7105332000
7101bd12c0  ldr x0,[x8, #0xf00]
7101bd12c4  cbz x0,0x7101bd12fc
7101bd12c8  stur wzr,[x29, #-0x70]
7101bd12cc  stur x26,[x29, #-0xb0]
7101bd12d0  ldr x8,[x0]
7101bd12d4  ldr x8,[x8, #0x30]
7101bd12d8  sub x1,x29,#0x70
7101bd12dc  sub x2,x29,#0xb0
7101bd12e0  blr x8
7101bd12e4  tbz w0,#0x0,0x7101bd12fc
7101bd12e8  mov w0,#0x10
7101bd12ec  mov x1,x26
7101bd12f0  bl 0x710392e290
7101bd12f4  mov x25,x0
7101bd12f8  cbnz x0,0x7101bd1300
7101bd12fc  mov x25,xzr
7101bd1300  add x19,x25,x19, LSL #0x2
7101bd1304  orr w8,wzr,#0x3
7101bd1308  add x22,x25,x22, LSL #0x2
7101bd130c  str w8,[x19], #0x4
7101bd1310  cmp x24,#0x1
7101bd1314  b.lt 0x7101bd1328
7101bd1318  mov x0,x25
7101bd131c  mov x1,x23
7101bd1320  mov x2,x24
7101bd1324  bl 0x71039c00e0
7101bd1328  stp x25,x19,[sp, #0xc0]
7101bd132c  adrp x25,0x710523d000
7101bd1330  add x25,x25,#0x9e8
7101bd1334  str x22,[sp, #0xd0]
7101bd1338  cbz x23,0x7101bd1344
7101bd133c  mov x0,x23
7101bd1340  bl 0x710392eb40
7101bd1344  ldr w8,[sp, #0x1c]
7101bd1348  cbz w8,0x7101bd1464
7101bd134c  ldp x9,x8,[sp, #0xc8]
7101bd1350  cmp x9,x8
7101bd1354  b.cs 0x7101bd1370
7101bd1358  mov w8,#0x4
7101bd135c  str w8,[x9]
7101bd1360  ldr x8,[sp, #0xc8]
7101bd1364  add x8,x8,#0x4
7101bd1368  str x8,[sp, #0xc8]
7101bd136c  b 0x7101bd1464
7101bd1370  ldr x23,[sp, #0xc0]
7101bd1374  sub x24,x9,x23
7101bd1378  asr x19,x24,#0x2
7101bd137c  add x9,x19,#0x1
7101bd1380  lsr x10,x9,#0x3e
7101bd1384  cbnz x10,0x7101bd1e84
7101bd1388  sub x8,x8,x23
7101bd138c  asr x10,x8,#0x2
7101bd1390  orr x11,xzr,#0x1ffffffffffffffe
7101bd1394  cmp x10,x11
7101bd1398  b.hi 0x7101bd13b8
7101bd139c  asr x8,x8,#0x1
7101bd13a0  cmp x8,x9
7101bd13a4  csel x22,x9,x8,cc
7101bd13a8  cbz x22,0x7101bd141c
7101bd13ac  lsr x8,x22,#0x3e
7101bd13b0  cbz x8,0x7101bd13bc
7101bd13b4  b 0x7101bd1e80
7101bd13b8  orr x22,xzr,#0x3fffffffffffffff
7101bd13bc  lsl x8,x22,#0x2
7101bd13c0  cmp x8,#0x0
7101bd13c4  csinc x26,x8,xzr,ne
7101bd13c8  mov w0,#0x10
7101bd13cc  mov x1,x26
7101bd13d0  bl 0x710392e290
7101bd13d4  mov x25,x0
7101bd13d8  cbnz x0,0x7101bd1420
7101bd13dc  adrp x8,0x7105332000
7101bd13e0  ldr x0,[x8, #0xf00]
7101bd13e4  cbz x0,0x7101bd141c
7101bd13e8  stur wzr,[x29, #-0x70]
7101bd13ec  stur x26,[x29, #-0xb0]
7101bd13f0  ldr x8,[x0]
7101bd13f4  ldr x8,[x8, #0x30]
7101bd13f8  sub x1,x29,#0x70
7101bd13fc  sub x2,x29,#0xb0
7101bd1400  blr x8
7101bd1404  tbz w0,#0x0,0x7101bd141c
7101bd1408  mov w0,#0x10
7101bd140c  mov x1,x26
7101bd1410  bl 0x710392e290
7101bd1414  mov x25,x0
7101bd1418  cbnz x0,0x7101bd1420
7101bd141c  mov x25,xzr
7101bd1420  add x19,x25,x19, LSL #0x2
7101bd1424  mov w8,#0x4
7101bd1428  add x22,x25,x22, LSL #0x2
7101bd142c  str w8,[x19], #0x4
7101bd1430  cmp x24,#0x1
7101bd1434  b.lt 0x7101bd1448
7101bd1438  mov x0,x25
7101bd143c  mov x1,x23
7101bd1440  mov x2,x24
7101bd1444  bl 0x71039c00e0
7101bd1448  stp x25,x19,[sp, #0xc0]
7101bd144c  adrp x25,0x710523d000
7101bd1450  add x25,x25,#0x9e8
7101bd1454  str x22,[sp, #0xd0]
7101bd1458  cbz x23,0x7101bd1464
7101bd145c  mov x0,x23
7101bd1460  bl 0x710392eb40
7101bd1464  ldr x23,[x21, #0x70]
7101bd1468  sub x0,x29,#0xb0
7101bd146c  add x1,sp,#0xa0
7101bd1470  bl 0x7103776390
7101bd1474  adrp x2,0x71043be000
7101bd1478  add x2,x2,#0x4b3
7101bd147c  sub x1,x29,#0xb0
7101bd1480  add x3,sp,#0xc0
7101bd1484  mov x0,x23
7101bd1488  bl 0x7101bc9cc0
7101bd148c  ldur x23,[x29, #-0xa8]
7101bd1490  stp x28,xzr,[x29, #-0xb0]
7101bd1494  cbz x23,0x7101bd14b0
7101bd1498  ldr x0,[x23, #0x18]
7101bd149c  stp x27,xzr,[x23, #0x10]
7101bd14a0  cbz x0,0x7101bd14a8
7101bd14a4  bl 0x710392eb40
7101bd14a8  mov x0,x23
7101bd14ac  bl 0x710392eb40
7101bd14b0  ldr x0,[sp, #0xc0]
7101bd14b4  cbz x0,0x7101bd14c0
7101bd14b8  str x0,[sp, #0xc8]
7101bd14bc  bl 0x710392eb40
7101bd14c0  mov w1,#0x88
7101bd14c4  mov w0,#0x10
7101bd14c8  bl 0x710392e290
7101bd14cc  mov x23,x0
7101bd14d0  cbnz x0,0x7101bd151c
7101bd14d4  adrp x8,0x7105332000
7101bd14d8  ldr x0,[x8, #0xf00]
7101bd14dc  cbz x0,0x7101bd1518
7101bd14e0  mov w8,#0x88
7101bd14e4  stur wzr,[x29, #-0x70]
7101bd14e8  sub x1,x29,#0x70
7101bd14ec  str x8,[sp, #0xc0]
7101bd14f0  ldr x8,[x0]
7101bd14f4  ldr x8,[x8, #0x30]
7101bd14f8  add x2,sp,#0xc0
7101bd14fc  blr x8
7101bd1500  tbz w0,#0x0,0x7101bd1518
7101bd1504  mov w1,#0x88
7101bd1508  mov w0,#0x10
7101bd150c  bl 0x710392e290
7101bd1510  mov x23,x0
7101bd1514  cbnz x0,0x7101bd151c
7101bd1518  mov x23,xzr
7101bd151c  adrp x8,0x71050ac000
7101bd1520  add x8,x8,#0x0
7101bd1524  mov x19,x23
7101bd1528  mov w0,#0x10
7101bd152c  mov w1,#0x20
7101bd1530  str x8,[x23]
7101bd1534  stp xzr,xzr,[x23, #0x8]
7101bd1538  strh wzr,[x19, #0x18]!
7101bd153c  stur xzr,[x23, #0x44]
7101bd1540  stur xzr,[x23, #0x3c]
7101bd1544  str wzr,[x23, #0x5c]
7101bd1548  stur xzr,[x23, #0x54]
7101bd154c  stur xzr,[x23, #0x4c]
7101bd1550  stur xzr,[x23, #0x34]
7101bd1554  stur xzr,[x23, #0x2c]
7101bd1558  stur xzr,[x23, #0x24]
7101bd155c  stur xzr,[x23, #0x1c]
7101bd1560  str x27,[x23, #0x40]
7101bd1564  bl 0x710392e290
7101bd1568  cbnz x0,0x7101bd15b0
7101bd156c  adrp x8,0x7105332000
7101bd1570  ldr x0,[x8, #0xf00]
7101bd1574  cbz x0,0x7101bd15ac
7101bd1578  mov w8,#0x20
7101bd157c  stur wzr,[x29, #-0x70]
7101bd1580  sub x1,x29,#0x70
7101bd1584  str x8,[sp, #0xc0]
7101bd1588  ldr x8,[x0]
7101bd158c  ldr x8,[x8, #0x30]
7101bd1590  add x2,sp,#0xc0
7101bd1594  blr x8
7101bd1598  tbz w0,#0x0,0x7101bd15ac
7101bd159c  mov w0,#0x10
7101bd15a0  mov w1,#0x20
7101bd15a4  bl 0x710392e290
7101bd15a8  cbnz x0,0x7101bd15b0
7101bd15ac  mov x0,xzr
7101bd15b0  stp xzr,xzr,[x0, #0x10]
7101bd15b4  mov w1,#0x20
7101bd15b8  stp xzr,xzr,[x0]
7101bd15bc  stp x0,x27,[x23, #0x48]
7101bd15c0  mov w0,#0x10
7101bd15c4  bl 0x710392e290
7101bd15c8  cbnz x0,0x7101bd1610
7101bd15cc  adrp x8,0x7105332000
7101bd15d0  ldr x0,[x8, #0xf00]
7101bd15d4  cbz x0,0x7101bd160c
7101bd15d8  mov w8,#0x20
7101bd15dc  stur wzr,[x29, #-0x70]
7101bd15e0  sub x1,x29,#0x70
7101bd15e4  str x8,[sp, #0xc0]
7101bd15e8  ldr x8,[x0]
7101bd15ec  ldr x8,[x8, #0x30]
7101bd15f0  add x2,sp,#0xc0
7101bd15f4  blr x8
7101bd15f8  tbz w0,#0x0,0x7101bd160c
7101bd15fc  mov w0,#0x10
7101bd1600  mov w1,#0x20
7101bd1604  bl 0x710392e290
7101bd1608  cbnz x0,0x7101bd1610
7101bd160c  mov x0,xzr
7101bd1610  stp xzr,xzr,[x0, #0x10]
7101bd1614  adrp x8,0x71050ab000
7101bd1618  add x8,x8,#0xdb0
7101bd161c  stp xzr,xzr,[x0]
7101bd1620  orr w1,wzr,#0x18
7101bd1624  str x8,[x23, #0x38]
7101bd1628  stp x0,xzr,[x23, #0x58]
7101bd162c  mov w0,#0x10
7101bd1630  stp xzr,xzr,[x23, #0x78]
7101bd1634  stp x25,xzr,[x23, #0x68]
7101bd1638  bl 0x710392e290
7101bd163c  cbnz x0,0x7101bd1684
7101bd1640  adrp x8,0x7105332000
7101bd1644  ldr x0,[x8, #0xf00]
7101bd1648  cbz x0,0x7101bd1680
7101bd164c  orr w8,wzr,#0x18
7101bd1650  stur wzr,[x29, #-0x70]
7101bd1654  sub x1,x29,#0x70
7101bd1658  str x8,[sp, #0xc0]
7101bd165c  ldr x8,[x0]
7101bd1660  ldr x8,[x8, #0x30]
7101bd1664  add x2,sp,#0xc0
7101bd1668  blr x8
7101bd166c  tbz w0,#0x0,0x7101bd1680
7101bd1670  mov w0,#0x10
7101bd1674  orr w1,wzr,#0x18
7101bd1678  bl 0x710392e290
7101bd167c  cbnz x0,0x7101bd1684
7101bd1680  mov x0,xzr
7101bd1684  mov w22,#0x1
7101bd1688  stp xzr,xzr,[x0]
7101bd168c  strb w22,[x0, #0x10]
7101bd1690  orr w1,wzr,#0x18
7101bd1694  stp x0,x25,[x23, #0x70]
7101bd1698  mov w0,#0x10
7101bd169c  bl 0x710392e290
7101bd16a0  cbnz x0,0x7101bd16e8
7101bd16a4  adrp x8,0x7105332000
7101bd16a8  ldr x0,[x8, #0xf00]
7101bd16ac  cbz x0,0x7101bd16e4
7101bd16b0  orr w8,wzr,#0x18
7101bd16b4  stur wzr,[x29, #-0x70]
7101bd16b8  sub x1,x29,#0x70
7101bd16bc  str x8,[sp, #0xc0]
7101bd16c0  ldr x8,[x0]
7101bd16c4  ldr x8,[x8, #0x30]
7101bd16c8  add x2,sp,#0xc0
7101bd16cc  blr x8
7101bd16d0  tbz w0,#0x0,0x7101bd16e4
7101bd16d4  mov w0,#0x10
7101bd16d8  orr w1,wzr,#0x18
7101bd16dc  bl 0x710392e290
7101bd16e0  cbnz x0,0x7101bd16e8
7101bd16e4  mov x0,xzr
7101bd16e8  adrp x8,0x71050ab000
7101bd16ec  add x8,x8,#0x348
7101bd16f0  strb w22,[x0, #0x10]
7101bd16f4  stp xzr,xzr,[x0]
7101bd16f8  str x0,[x23, #0x80]
7101bd16fc  str x8,[x23, #0x60]
7101bd1700  ldr x24,[x21, #0x88]
7101bd1704  stp x19,x23,[x21, #0x80]
7101bd1708  cbz x24,0x7101bd173c
7101bd170c  add x8,x24,#0x8
7101bd1710  ldaxr x9,[x8]
7101bd1714  sub x10,x9,#0x1
7101bd1718  stlxr w11,x10,[x8]
7101bd171c  cbnz w11,0x7101bd1710
7101bd1720  cbnz x9,0x7101bd173c
7101bd1724  ldr x8,[x24]
7101bd1728  ldr x8,[x8, #0x10]
7101bd172c  mov x0,x24
7101bd1730  blr x8
7101bd1734  mov x0,x24
7101bd1738  bl 0x71039c2670
7101bd173c  ldr x23,[x21, #0x80]
7101bd1740  sub x0,x29,#0x70
7101bd1744  add x1,sp,#0xa0
7101bd1748  bl 0x7103776390
7101bd174c  mov w0,#0x10
7101bd1750  mov w1,#0x8
7101bd1754  bl 0x710392e290
7101bd1758  cbnz x0,0x7101bd17a0
7101bd175c  adrp x8,0x7105332000
7101bd1760  ldr x0,[x8, #0xf00]
7101bd1764  cbz x0,0x7101bd179c
7101bd1768  mov w8,#0x8
7101bd176c  stur wzr,[x29, #-0x74]
7101bd1770  sub x1,x29,#0x74
7101bd1774  str x8,[sp, #0xc0]
7101bd1778  ldr x8,[x0]
7101bd177c  ldr x8,[x8, #0x30]
7101bd1780  add x2,sp,#0xc0
7101bd1784  blr x8
7101bd1788  tbz w0,#0x0,0x7101bd179c
7101bd178c  mov w0,#0x10
7101bd1790  mov w1,#0x8
7101bd1794  bl 0x710392e290
7101bd1798  cbnz x0,0x7101bd17a0
7101bd179c  mov x0,xzr
7101bd17a0  mov x9,#0x5
7101bd17a4  add x8,x0,#0x8
7101bd17a8  str x8,[sp, #0xd0]
7101bd17ac  movk x9,#0x6, LSL #32
7101bd17b0  str x9,[x0]
7101bd17b4  adrp x2,0x710438c000
7101bd17b8  add x2,x2,#0x818
7101bd17bc  stp x0,x8,[sp, #0xc0]
7101bd17c0  sub x1,x29,#0x70
7101bd17c4  add x3,sp,#0xc0
7101bd17c8  mov x0,x23
7101bd17cc  bl 0x7101bc9cc0
7101bd17d0  ldr x0,[sp, #0xc0]
7101bd17d4  cbz x0,0x7101bd17e0
7101bd17d8  str x0,[sp, #0xc8]
7101bd17dc  bl 0x710392eb40
7101bd17e0  ldur x23,[x29, #-0x68]
7101bd17e4  stp x28,xzr,[x29, #-0x70]
7101bd17e8  cbz x23,0x7101bd1804
7101bd17ec  ldr x0,[x23, #0x18]
7101bd17f0  stp x27,xzr,[x23, #0x10]
7101bd17f4  cbz x0,0x7101bd17fc
7101bd17f8  bl 0x710392eb40
7101bd17fc  mov x0,x23
7101bd1800  bl 0x710392eb40
7101bd1804  ldr w8,[sp, #0x34]
7101bd1808  cbz w8,0x7101bd1880
7101bd180c  ldp x8,x23,[x21, #0x70]
7101bd1810  cbz x23,0x7101bd183c
7101bd1814  add x9,x23,#0x8
7101bd1818  ldxr x10,[x9]
7101bd181c  add x10,x10,#0x1
7101bd1820  stxr w11,x10,[x9]
7101bd1824  cbnz w11,0x7101bd1818
7101bd1828  add x9,x23,#0x10
7101bd182c  ldxr x10,[x9]
7101bd1830  add x10,x10,#0x1
7101bd1834  stxr w11,x10,[x9]
7101bd1838  cbnz w11,0x7101bd182c
7101bd183c  ldr x0,[x21, #0x68]
7101bd1840  stp x8,x23,[x21, #0x60]
7101bd1844  cbz x0,0x7101bd184c
7101bd1848  bl 0x71039c2670
7101bd184c  cbz x23,0x7101bd1880
7101bd1850  add x8,x23,#0x8
7101bd1854  ldaxr x9,[x8]
7101bd1858  sub x10,x9,#0x1
7101bd185c  stlxr w11,x10,[x8]
7101bd1860  cbnz w11,0x7101bd1854
7101bd1864  cbnz x9,0x7101bd1880
7101bd1868  ldr x8,[x23]
7101bd186c  ldr x8,[x8, #0x10]
7101bd1870  mov x0,x23
7101bd1874  blr x8
7101bd1878  mov x0,x23
7101bd187c  bl 0x71039c2670
7101bd1880  ldr x0,[x21, #0x8]
7101bd1884  ldr x8,[x0]
7101bd1888  ldr x8,[x8, #0x60]
7101bd188c  mov w1,wzr
7101bd1890  blr x8
7101bd1894  ldr x0,[x21, #0x8]
7101bd1898  bl 0x710376b960
7101bd189c  ldr x0,[x21, #0x20]
7101bd18a0  ldr x8,[x0]
7101bd18a4  ldr x8,[x8, #0x60]
7101bd18a8  mov w1,wzr
7101bd18ac  blr x8
7101bd18b0  mov w8,#0x1
7101bd18b4  strb w8,[x21]
7101bd18b8  ldr x23,[sp, #0xa8]
7101bd18bc  stp x28,xzr,[sp, #0xa0]
7101bd18c0  cbz x23,0x7101bd18dc
7101bd18c4  ldr x0,[x23, #0x18]
7101bd18c8  stp x27,xzr,[x23, #0x10]
7101bd18cc  cbz x0,0x7101bd18d4
7101bd18d0  bl 0x710392eb40
7101bd18d4  mov x0,x23
7101bd18d8  bl 0x710392eb40
7101bd18dc  ldr x23,[sp, #0x88]
7101bd18e0  stp x28,xzr,[sp, #0x80]
7101bd18e4  cbz x23,0x7101bd1900
7101bd18e8  ldr x0,[x23, #0x18]
7101bd18ec  stp x27,xzr,[x23, #0x10]
7101bd18f0  cbz x0,0x7101bd18f8
7101bd18f4  bl 0x710392eb40
7101bd18f8  mov x0,x23
7101bd18fc  bl 0x710392eb40
7101bd1900  ldr x8,[x20, #0x8]
7101bd1904  ldr x8,[x8]
7101bd1908  add x1,x8,#0x8
7101bd190c  add x0,sp,#0x70
7101bd1910  bl 0x7103776390
7101bd1914  ldr x19,[x20, #0x30]
7101bd1918  sub x0,x29,#0xb0
7101bd191c  add x1,sp,#0x70
7101bd1920  bl 0x7103776390
7101bd1924  adrp x1,0x710426f000
7101bd1928  add x1,x1,#0xff0
7101bd192c  add x8,sp,#0xc0
7101bd1930  sub x0,x29,#0xb0
7101bd1934  add x21,sp,#0xc0
7101bd1938  bl 0x7103776910
7101bd193c  cmp x19,x21
7101bd1940  b.eq 0x7101bd195c
7101bd1944  ldr x8,[sp, #0xc8]
7101bd1948  str xzr,[sp, #0xc8]
7101bd194c  ldr x0,[x19, #0x8]
7101bd1950  str x8,[x19, #0x8]
7101bd1954  cbz x0,0x7101bd195c
7101bd1958  bl 0x710392eb40
7101bd195c  ldr x0,[sp, #0xc8]
7101bd1960  stp x27,xzr,[sp, #0xc0]
7101bd1964  cbz x0,0x7101bd196c
7101bd1968  bl 0x710392eb40
7101bd196c  ldur x23,[x29, #-0xa8]
7101bd1970  stp x28,xzr,[x29, #-0xb0]
7101bd1974  cbz x23,0x7101bd1990
7101bd1978  ldr x0,[x23, #0x18]
7101bd197c  stp x27,xzr,[x23, #0x10]
7101bd1980  cbz x0,0x7101bd1988
7101bd1984  bl 0x710392eb40
7101bd1988  mov x0,x23
7101bd198c  bl 0x710392eb40
7101bd1990  ldr x23,[sp, #0x78]
7101bd1994  stp x28,xzr,[sp, #0x70]
7101bd1998  cbz x23,0x7101bd19b4
7101bd199c  ldr x0,[x23, #0x18]
7101bd19a0  stp x27,xzr,[x23, #0x10]
7101bd19a4  cbz x0,0x7101bd19ac
7101bd19a8  bl 0x710392eb40
7101bd19ac  mov x0,x23
7101bd19b0  bl 0x710392eb40
7101bd19b4  ldr x8,[sp, #0x38]
7101bd19b8  ldr x8,[x8]
7101bd19bc  ldr x8,[x8]
7101bd19c0  add x1,x8,#0x8
7101bd19c4  add x0,sp,#0x60
7101bd19c8  bl 0x7103776390
7101bd19cc  ldr x8,[sp, #0x28]
7101bd19d0  ldr x0,[x8]
7101bd19d4  add x1,sp,#0x60
7101bd19d8  mov w2,#0x1
7101bd19dc  bl 0x7101bcdd20
7101bd19e0  ldr x21,[sp, #0x68]
7101bd19e4  stp x28,xzr,[sp, #0x60]
7101bd19e8  cbz x21,0x7101bd1a04
7101bd19ec  ldr x0,[x21, #0x18]
7101bd19f0  stp x27,xzr,[x21, #0x10]
7101bd19f4  cbz x0,0x7101bd19fc
7101bd19f8  bl 0x710392eb40
7101bd19fc  mov x0,x21
7101bd1a00  bl 0x710392eb40
7101bd1a04  ldr x8,[x20, #0x8]
7101bd1a08  ldr x8,[x8]
7101bd1a0c  add x1,x8,#0x8
7101bd1a10  add x0,sp,#0x50
7101bd1a14  bl 0x7103776390
7101bd1a18  ldr x8,[x20]
7101bd1a1c  ldr x2,[x8, #0x78]
7101bd1a20  ldr x0,[x20, #0x40]
7101bd1a24  add x1,sp,#0x50
7101bd1a28  mov w3,#0x2
7101bd1a2c  mov w4,#0x2
7101bd1a30  mov w19,#0x2
7101bd1a34  bl 0x7101bcc690
7101bd1a38  ldr x21,[sp, #0x58]
7101bd1a3c  stp x28,xzr,[sp, #0x50]
7101bd1a40  cbz x21,0x7101bd1a5c
7101bd1a44  ldr x0,[x21, #0x18]
7101bd1a48  stp x27,xzr,[x21, #0x10]
7101bd1a4c  cbz x0,0x7101bd1a54
7101bd1a50  bl 0x710392eb40
7101bd1a54  mov x0,x21
7101bd1a58  bl 0x710392eb40
7101bd1a5c  ldr x8,[x20, #0x8]
7101bd1a60  ldr x8,[x8]
7101bd1a64  add x0,x8,#0x8
7101bd1a68  adrp x1,0x710434a000
7101bd1a6c  add x1,x1,#0x2b7
7101bd1a70  add x8,sp,#0x40
7101bd1a74  bl 0x7103776640
7101bd1a78  adrp x8,0x710433a000
7101bd1a7c  add x8,x8,#0x373
7101bd1a80  str x8,[sp, #0xc8]
7101bd1a84  adrp x8,0x710437c000
7101bd1a88  add x8,x8,#0x772
7101bd1a8c  str x8,[sp, #0xd8]
7101bd1a90  adrp x8,0x710424f000
7101bd1a94  add x8,x8,#0x713
7101bd1a98  mov w21,#0x1
7101bd1a9c  add x0,x20,#0x50
7101bd1aa0  str x8,[sp, #0xe8]
7101bd1aa4  orr w22,wzr,#0x3
7101bd1aa8  adrp x8,0x7104433000
7101bd1aac  add x8,x8,#0x34b
7101bd1ab0  str wzr,[sp, #0xc0]
7101bd1ab4  add x23,sp,#0xc0
7101bd1ab8  mov w24,#0x4
7101bd1abc  str w21,[sp, #0xd0]
7101bd1ac0  add x1,sp,#0x40
7101bd1ac4  sub x2,x29,#0xb0
7101bd1ac8  str w19,[sp, #0xe0]
7101bd1acc  str w22,[sp, #0xf0]
7101bd1ad0  str x8,[sp, #0xf8]
7101bd1ad4  stp x23,x24,[x29, #-0xb0]
7101bd1ad8  bl 0x7101b8b370
7101bd1adc  adrp x8,0x7104421000
7101bd1ae0  add x8,x8,#0x55
7101bd1ae4  add x1,sp,#0x40
7101bd1ae8  str x8,[sp, #0xc8]
7101bd1aec  adrp x8,0x710438b000
7101bd1af0  add x8,x8,#0x28f
7101bd1af4  add x0,x20,#0x98
7101bd1af8  str x8,[sp, #0xd8]
7101bd1afc  adrp x25,0x710428f000
7101bd1b00  add x25,x25,#0xf7d
7101bd1b04  adrp x8,0x7104348000
7101bd1b08  add x8,x8,#0x100
7101bd1b0c  sub x2,x29,#0xb0
7101bd1b10  str wzr,[sp, #0xc0]
7101bd1b14  str w21,[sp, #0xd0]
7101bd1b18  str w19,[sp, #0xe0]
7101bd1b1c  str x25,[sp, #0xe8]
7101bd1b20  str w22,[sp, #0xf0]
7101bd1b24  str x8,[sp, #0xf8]
7101bd1b28  stp x23,x24,[x29, #-0xb0]
7101bd1b2c  bl 0x7101bce9f0
7101bd1b30  ldr x21,[sp, #0x48]
7101bd1b34  stp x28,xzr,[sp, #0x40]
7101bd1b38  cbz x21,0x7101bd1b54
7101bd1b3c  ldr x0,[x21, #0x18]
7101bd1b40  stp x27,xzr,[x21, #0x10]
7101bd1b44  cbz x0,0x7101bd1b4c
7101bd1b48  bl 0x710392eb40
7101bd1b4c  mov x0,x21
7101bd1b50  bl 0x710392eb40
7101bd1b54  ldr x8,[sp, #0x38]
7101bd1b58  ldr x8,[x8]
7101bd1b5c  ldr x23,[x8]
7101bd1b60  mov w0,#0x10
7101bd1b64  mov w1,#0x10
7101bd1b68  bl 0x710392e290
7101bd1b6c  mov x21,x0
7101bd1b70  cbnz x0,0x7101bd1bbc
7101bd1b74  adrp x8,0x7105332000
7101bd1b78  ldr x0,[x8, #0xf00]
7101bd1b7c  cbz x0,0x7101bd1bb8
7101bd1b80  mov w8,#0x10
7101bd1b84  stur wzr,[x29, #-0xb0]
7101bd1b88  sub x1,x29,#0xb0
7101bd1b8c  str x8,[sp, #0xc0]
7101bd1b90  ldr x8,[x0]
7101bd1b94  ldr x8,[x8, #0x30]
7101bd1b98  add x2,sp,#0xc0
7101bd1b9c  blr x8
7101bd1ba0  tbz w0,#0x0,0x7101bd1bb8
7101bd1ba4  mov w0,#0x10
7101bd1ba8  mov w1,#0x10
7101bd1bac  bl 0x710392e290
7101bd1bb0  mov x21,x0
7101bd1bb4  cbnz x0,0x7101bd1bbc
7101bd1bb8  mov x21,xzr
7101bd1bbc  adrp x8,0x710424f000
7101bd1bc0  add x8,x8,#0xb8d
7101bd1bc4  adrp x9,0x71042a1000
7101bd1bc8  add x9,x9,#0xaf1
7101bd1bcc  mov w0,#0x10
7101bd1bd0  mov w1,#0x10
7101bd1bd4  stp x8,x9,[x21]
7101bd1bd8  str wzr,[sp, #0xc0]
7101bd1bdc  bl 0x710392e290
7101bd1be0  cbnz x0,0x7101bd1c28
7101bd1be4  adrp x8,0x7105332000
7101bd1be8  ldr x0,[x8, #0xf00]
7101bd1bec  cbz x0,0x7101bd1c24
7101bd1bf0  mov w8,#0x10
7101bd1bf4  stur wzr,[x29, #-0x70]
7101bd1bf8  sub x1,x29,#0x70
7101bd1bfc  stur x8,[x29, #-0xb0]
7101bd1c00  ldr x8,[x0]
7101bd1c04  ldr x8,[x8, #0x30]
7101bd1c08  sub x2,x29,#0xb0
7101bd1c0c  blr x8
7101bd1c10  tbz w0,#0x0,0x7101bd1c24
7101bd1c14  mov w0,#0x10
7101bd1c18  mov w1,#0x10
7101bd1c1c  bl 0x710392e290
7101bd1c20  cbnz x0,0x7101bd1c28
7101bd1c24  mov x0,xzr
7101bd1c28  add x8,x0,#0x10
7101bd1c2c  str x8,[sp, #0xd8]
7101bd1c30  mov w1,#0x20
7101bd1c34  ldp x9,x10,[x21]
7101bd1c38  stp x9,x10,[x0]
7101bd1c3c  stp x0,x8,[sp, #0xc8]
7101bd1c40  mov w0,#0x10
7101bd1c44  bl 0x710392e290
7101bd1c48  cbnz x0,0x7101bd1c90
7101bd1c4c  adrp x8,0x7105332000
7101bd1c50  ldr x0,[x8, #0xf00]
7101bd1c54  cbz x0,0x7101bd1c8c
7101bd1c58  mov w8,#0x20
7101bd1c5c  stur wzr,[x29, #-0x70]
7101bd1c60  sub x1,x29,#0x70
7101bd1c64  stur x8,[x29, #-0xb0]
7101bd1c68  ldr x8,[x0]
7101bd1c6c  ldr x8,[x8, #0x30]
7101bd1c70  sub x2,x29,#0xb0
7101bd1c74  blr x8
7101bd1c78  tbz w0,#0x0,0x7101bd1c8c
7101bd1c7c  mov w0,#0x10
7101bd1c80  mov w1,#0x20
7101bd1c84  bl 0x710392e290
7101bd1c88  cbnz x0,0x7101bd1c90
7101bd1c8c  mov x0,xzr
7101bd1c90  stp xzr,xzr,[x0, #0x10]
7101bd1c94  stp xzr,xzr,[x0]
7101bd1c98  ldr x8,[x20, #0xf0]
7101bd1c9c  str xzr,[x8]
7101bd1ca0  ldr x8,[x0, #0x8]
7101bd1ca4  ldr x9,[x20, #0xf0]
7101bd1ca8  str x8,[x9, #0x8]
7101bd1cac  ldr x8,[x0, #0x10]
7101bd1cb0  ldr x9,[x20, #0xf0]
7101bd1cb4  str x8,[x9, #0x10]
7101bd1cb8  ldr x8,[x0, #0x18]
7101bd1cbc  ldr x9,[x20, #0xf0]
7101bd1cc0  str x8,[x9, #0x18]
7101bd1cc4  cbz x0,0x7101bd1ccc
7101bd1cc8  bl 0x710392eb40
7101bd1ccc  ldr w8,[sp, #0xc0]
7101bd1cd0  cbnz w8,0x7101bd1e80
7101bd1cd4  add x1,x23,#0x8
7101bd1cd8  sub x0,x29,#0xb0
7101bd1cdc  bl 0x7103776390
7101bd1ce0  ldp x8,x9,[sp, #0xc8]
7101bd1ce4  subs x10,x9,x8
7101bd1ce8  b.eq 0x7101bd1dcc
7101bd1cec  add x11,sp,#0xc0
7101bd1cf0  mov x26,xzr
7101bd1cf4  add x22,x20,#0xe8
7101bd1cf8  add x23,x11,#0x8
7101bd1cfc  asr x10,x10,#0x3
7101bd1d00  sub x19,x29,#0x70
7101bd1d04  sub x10,x10,#0x1
7101bd1d08  sub x9,x9,x8
7101bd1d0c  asr x9,x9,#0x3
7101bd1d10  cmp x26,x10
7101bd1d14  b.ne 0x7101bd1d6c
7101bd1d18  cmp x9,x26
7101bd1d1c  b.ls 0x7101bd1e78
7101bd1d20  ldr x1,[x8, x26, LSL #0x3]
7101bd1d24  sub x8,x29,#0x70
7101bd1d28  sub x0,x29,#0xb0
7101bd1d2c  bl 0x7103776910
7101bd1d30  ldr w8,[sp, #0xc0]
7101bd1d34  cbnz w8,0x7101bd1e80
7101bd1d38  cmp x22,x19
7101bd1d3c  b.eq 0x7101bd1d58
7101bd1d40  ldur x8,[x29, #-0x68]
7101bd1d44  stur xzr,[x29, #-0x68]
7101bd1d48  ldr x0,[x20, #0xf0]
7101bd1d4c  str x8,[x20, #0xf0]
7101bd1d50  cbz x0,0x7101bd1d58
7101bd1d54  bl 0x710392eb40
7101bd1d58  ldur x0,[x29, #-0x68]
7101bd1d5c  stp x27,xzr,[x29, #-0x70]
7101bd1d60  cbz x0,0x7101bd1db4
7101bd1d64  bl 0x710392eb40
7101bd1d68  b 0x7101bd1db4
7101bd1d6c  cmp x9,x26
7101bd1d70  b.ls 0x7101bd1e78
7101bd1d74  ldr x1,[x8, x26, LSL #0x3]
7101bd1d78  sub x8,x29,#0x70
7101bd1d7c  sub x0,x29,#0xb0
7101bd1d80  bl 0x7103776640
7101bd1d84  ldur x8,[x29, #-0x68]
7101bd1d88  ldur x24,[x29, #-0xa8]
7101bd1d8c  stur xzr,[x29, #-0x68]
7101bd1d90  stur x8,[x29, #-0xa8]
7101bd1d94  cbz x24,0x7101bd1db0
7101bd1d98  ldr x0,[x24, #0x18]
7101bd1d9c  stp x27,xzr,[x24, #0x10]
7101bd1da0  cbz x0,0x7101bd1da8
7101bd1da4  bl 0x710392eb40
7101bd1da8  mov x0,x24
7101bd1dac  bl 0x710392eb40
7101bd1db0  stp x28,xzr,[x29, #-0x70]
7101bd1db4  ldp x8,x9,[sp, #0xc8]
7101bd1db8  sub x10,x9,x8
7101bd1dbc  add x26,x26,#0x1
7101bd1dc0  asr x10,x10,#0x3
7101bd1dc4  cmp x10,x26
7101bd1dc8  b.hi 0x7101bd1d04
7101bd1dcc  ldur x20,[x29, #-0xa8]
7101bd1dd0  ldr x19,[sp, #0x38]
7101bd1dd4  stp x28,xzr,[x29, #-0xb0]
7101bd1dd8  cbz x20,0x7101bd1df4
7101bd1ddc  ldr x0,[x20, #0x18]
7101bd1de0  stp x27,xzr,[x20, #0x10]
7101bd1de4  cbz x0,0x7101bd1dec
7101bd1de8  bl 0x710392eb40
7101bd1dec  mov x0,x20
7101bd1df0  bl 0x710392eb40
7101bd1df4  ldr x0,[sp, #0xc8]
7101bd1df8  cbz x0,0x7101bd1e04
7101bd1dfc  str x0,[sp, #0xd0]
7101bd1e00  bl 0x710392eb40
7101bd1e04  cbz x21,0x7101bd1e10
7101bd1e08  mov x0,x21
7101bd1e0c  bl 0x710392eb40
7101bd1e10  ldr x8,[x19]
7101bd1e14  ldr x8,[x8]
7101bd1e18  ldr x0,[sp, #0x20]
7101bd1e1c  adrp x9,0x7104421000
7101bd1e20  add x9,x9,#0x55
7101bd1e24  str x9,[sp, #0xc8]
7101bd1e28  mov w9,#0x1
7101bd1e2c  add x10,sp,#0xc0
7101bd1e30  add x1,x8,#0x8
7101bd1e34  mov w8,#0x2
7101bd1e38  sub x2,x29,#0xb0
7101bd1e3c  str wzr,[sp, #0xc0]
7101bd1e40  str w9,[sp, #0xd0]
7101bd1e44  str x25,[sp, #0xd8]
7101bd1e48  stp x10,x8,[x29, #-0xb0]
7101bd1e4c  bl 0x7101b85d60
7101bd1e50  add sp,sp,#0x250
7101bd1e54  ldp x29,x30,[sp, #0x50]
7101bd1e58  ldp x20,x19,[sp, #0x40]
7101bd1e5c  ldp x22,x21,[sp, #0x30]
7101bd1e60  ldp x24,x23,[sp, #0x20]
7101bd1e64  ldp x26,x25,[sp, #0x10]
7101bd1e68  ldp x28,x27,[sp], #0x60
7101bd1e6c  ret
7101bd1e70  mov x26,xzr
7101bd1e74  b 0x7101bd10b8
7101bd1e78  mov x0,x23
7101bd1e7c  bl 0x71039c1330
7101bd1e80  bl 0x71039c2650
7101bd1e84  add x0,sp,#0xc0
7101bd1e88  bl 0x71039c0c00
