// addr:      71021cd710
// offset:    0x21cd710
// name:      FUN_71021cd710
// mangled:   
// size:      1952

71021cd710  sub sp,sp,#0x50
71021cd714  str x23,[sp, #0x10]
71021cd718  stp x22,x21,[sp, #0x20]
71021cd71c  stp x20,x19,[sp, #0x30]
71021cd720  stp x29,x30,[sp, #0x40]
71021cd724  add x29,sp,#0x40
71021cd728  mov w21,w2
71021cd72c  mov x19,x1
71021cd730  mov x20,x0
71021cd734  mov w22,#0xb9d8
71021cd738  movk w22,#0xfff0, LSL #16
71021cd73c  bl 0x7101ff9450
71021cd740  ldr x8,[x19, #0x20]
71021cd744  cmp w21,#0x1
71021cd748  b.lt 0x71021cd76c
71021cd74c  ldr x8,[x8]
71021cd750  ldr x10,[x19, #0x10]
71021cd754  adrp x9,0x7104862000
71021cd758  add x9,x9,#0x960
71021cd75c  add x8,x8,w21, SXTW  #0x4
71021cd760  cmp x8,x10
71021cd764  csel x1,x8,x9,cc
71021cd768  b 0x71021cd794
71021cd76c  add w9,w22,#0x1
71021cd770  cmp w21,w9
71021cd774  b.ge 0x71021cd78c
71021cd778  cmp w21,w22
71021cd77c  b.ne 0x71021cd808
71021cd780  ldr x8,[x19, #0x18]
71021cd784  add x1,x8,#0x40
71021cd788  b 0x71021cd794
71021cd78c  ldr x8,[x19, #0x10]
71021cd790  add x1,x8,w21, SXTW  #0x4
71021cd794  adrp x2,0x71042ad000
71021cd798  add x2,x2,#0x8ff
71021cd79c  mov x0,x19
71021cd7a0  bl 0x71038f4d40
71021cd7a4  ldr x23,[x19, #0x10]
71021cd7a8  ldur w8,[x23, #-0x8]
71021cd7ac  cmp w8,#0x3
71021cd7b0  b.ne 0x71021cd7bc
71021cd7b4  ldur w8,[x23, #-0x10]
71021cd7b8  b 0x71021cd870
71021cd7bc  cmp w8,#0x13
71021cd7c0  b.ne 0x71021cd7d4
71021cd7c4  ldur x8,[x23, #-0x10]
71021cd7c8  scvtf s0,x8
71021cd7cc  fmov w8,s0
71021cd7d0  b 0x71021cd870
71021cd7d4  and w8,w8,#0xf
71021cd7d8  cmp w8,#0x4
71021cd7dc  b.ne 0x71021cd86c
71021cd7e0  ldur x8,[x23, #-0x10]
71021cd7e4  add x0,x8,#0x18
71021cd7e8  mov x1,sp
71021cd7ec  bl 0x7103907f00
71021cd7f0  ldur x8,[x23, #-0x10]
71021cd7f4  ldrb w9,[x8, #0x8]
71021cd7f8  cmp w9,#0x4
71021cd7fc  b.ne 0x71021cd840
71021cd800  ldrb w8,[x8, #0xb]
71021cd804  b 0x71021cd844
71021cd808  ldr x8,[x8]
71021cd80c  ldr w9,[x8, #0x8]
71021cd810  adrp x1,0x7104862000
71021cd814  add x1,x1,#0x960
71021cd818  cmp w9,#0x16
71021cd81c  b.eq 0x71021cd794
71021cd820  ldr x8,[x8]
71021cd824  sub w9,w22,w21
71021cd828  add x10,x8,w9, SXTW  #0x4
71021cd82c  ldrb w8,[x8, #0xa]
71021cd830  add x10,x10,#0x10
71021cd834  cmp w9,w8
71021cd838  csel x1,x1,x10,gt
71021cd83c  b 0x71021cd794
71021cd840  ldr x8,[x8, #0x10]
71021cd844  add x8,x8,#0x1
71021cd848  cmp x0,x8
71021cd84c  b.ne 0x71021cd86c
71021cd850  ldr x9,[sp]
71021cd854  scvtf s0,x9
71021cd858  ldr w8,[sp, #0x8]
71021cd85c  cmp w8,#0x13
71021cd860  fmov w10,s0
71021cd864  csel w8,w10,w9,eq
71021cd868  b 0x71021cd870
71021cd86c  mov w8,wzr
71021cd870  str w8,[x20, #0x2c]
71021cd874  ldr x8,[x19, #0x10]
71021cd878  ldr x9,[x19, #0x20]
71021cd87c  sub x8,x8,#0x10
71021cd880  cmp w21,#0x1
71021cd884  str x8,[x19, #0x10]
71021cd888  b.lt 0x71021cd8a8
71021cd88c  ldr x9,[x9]
71021cd890  add x9,x9,w21, SXTW  #0x4
71021cd894  adrp x10,0x7104862000
71021cd898  add x10,x10,#0x960
71021cd89c  cmp x9,x8
71021cd8a0  csel x1,x9,x10,cc
71021cd8a4  b 0x71021cd8cc
71021cd8a8  add w10,w22,#0x1
71021cd8ac  cmp w21,w10
71021cd8b0  b.ge 0x71021cd8c8
71021cd8b4  cmp w21,w22
71021cd8b8  b.ne 0x71021cd940
71021cd8bc  ldr x8,[x19, #0x18]
71021cd8c0  add x1,x8,#0x40
71021cd8c4  b 0x71021cd8cc
71021cd8c8  add x1,x8,w21, SXTW  #0x4
71021cd8cc  adrp x2,0x710444d000
71021cd8d0  add x2,x2,#0xec2
71021cd8d4  mov x0,x19
71021cd8d8  bl 0x71038f4d40
71021cd8dc  ldr x23,[x19, #0x10]
71021cd8e0  ldur w8,[x23, #-0x8]
71021cd8e4  cmp w8,#0x3
71021cd8e8  b.ne 0x71021cd8f4
71021cd8ec  ldur w8,[x23, #-0x10]
71021cd8f0  b 0x71021cd9a8
71021cd8f4  cmp w8,#0x13
71021cd8f8  b.ne 0x71021cd90c
71021cd8fc  ldur x8,[x23, #-0x10]
71021cd900  scvtf s0,x8
71021cd904  fmov w8,s0
71021cd908  b 0x71021cd9a8
71021cd90c  and w8,w8,#0xf
71021cd910  cmp w8,#0x4
71021cd914  b.ne 0x71021cd9a4
71021cd918  ldur x8,[x23, #-0x10]
71021cd91c  add x0,x8,#0x18
71021cd920  mov x1,sp
71021cd924  bl 0x7103907f00
71021cd928  ldur x8,[x23, #-0x10]
71021cd92c  ldrb w9,[x8, #0x8]
71021cd930  cmp w9,#0x4
71021cd934  b.ne 0x71021cd978
71021cd938  ldrb w8,[x8, #0xb]
71021cd93c  b 0x71021cd97c
71021cd940  ldr x8,[x9]
71021cd944  ldr w9,[x8, #0x8]
71021cd948  adrp x1,0x7104862000
71021cd94c  add x1,x1,#0x960
71021cd950  cmp w9,#0x16
71021cd954  b.eq 0x71021cd8cc
71021cd958  ldr x8,[x8]
71021cd95c  sub w9,w22,w21
71021cd960  add x10,x8,w9, SXTW  #0x4
71021cd964  ldrb w8,[x8, #0xa]
71021cd968  add x10,x10,#0x10
71021cd96c  cmp w9,w8
71021cd970  csel x1,x1,x10,gt
71021cd974  b 0x71021cd8cc
71021cd978  ldr x8,[x8, #0x10]
71021cd97c  add x8,x8,#0x1
71021cd980  cmp x0,x8
71021cd984  b.ne 0x71021cd9a4
71021cd988  ldr x9,[sp]
71021cd98c  scvtf s0,x9
71021cd990  ldr w8,[sp, #0x8]
71021cd994  cmp w8,#0x13
71021cd998  fmov w10,s0
71021cd99c  csel w8,w10,w9,eq
71021cd9a0  b 0x71021cd9a8
71021cd9a4  mov w8,wzr
71021cd9a8  str w8,[x20, #0x30]
71021cd9ac  ldr x8,[x19, #0x10]
71021cd9b0  ldr x9,[x19, #0x20]
71021cd9b4  sub x8,x8,#0x10
71021cd9b8  cmp w21,#0x1
71021cd9bc  str x8,[x19, #0x10]
71021cd9c0  b.lt 0x71021cd9e0
71021cd9c4  ldr x9,[x9]
71021cd9c8  add x9,x9,w21, SXTW  #0x4
71021cd9cc  adrp x10,0x7104862000
71021cd9d0  add x10,x10,#0x960
71021cd9d4  cmp x9,x8
71021cd9d8  csel x1,x9,x10,cc
71021cd9dc  b 0x71021cda04
71021cd9e0  add w10,w22,#0x1
71021cd9e4  cmp w21,w10
71021cd9e8  b.ge 0x71021cda00
71021cd9ec  cmp w21,w22
71021cd9f0  b.ne 0x71021cda78
71021cd9f4  ldr x8,[x19, #0x18]
71021cd9f8  add x1,x8,#0x40
71021cd9fc  b 0x71021cda04
71021cda00  add x1,x8,w21, SXTW  #0x4
71021cda04  adrp x2,0x71043b8000
71021cda08  add x2,x2,#0x5e
71021cda0c  mov x0,x19
71021cda10  bl 0x71038f4d40
71021cda14  ldr x23,[x19, #0x10]
71021cda18  ldur w8,[x23, #-0x8]
71021cda1c  cmp w8,#0x3
71021cda20  b.ne 0x71021cda2c
71021cda24  ldur w8,[x23, #-0x10]
71021cda28  b 0x71021cdae0
71021cda2c  cmp w8,#0x13
71021cda30  b.ne 0x71021cda44
71021cda34  ldur x8,[x23, #-0x10]
71021cda38  scvtf s0,x8
71021cda3c  fmov w8,s0
71021cda40  b 0x71021cdae0
71021cda44  and w8,w8,#0xf
71021cda48  cmp w8,#0x4
71021cda4c  b.ne 0x71021cdadc
71021cda50  ldur x8,[x23, #-0x10]
71021cda54  add x0,x8,#0x18
71021cda58  mov x1,sp
71021cda5c  bl 0x7103907f00
71021cda60  ldur x8,[x23, #-0x10]
71021cda64  ldrb w9,[x8, #0x8]
71021cda68  cmp w9,#0x4
71021cda6c  b.ne 0x71021cdab0
71021cda70  ldrb w8,[x8, #0xb]
71021cda74  b 0x71021cdab4
71021cda78  ldr x8,[x9]
71021cda7c  ldr w9,[x8, #0x8]
71021cda80  adrp x1,0x7104862000
71021cda84  add x1,x1,#0x960
71021cda88  cmp w9,#0x16
71021cda8c  b.eq 0x71021cda04
71021cda90  ldr x8,[x8]
71021cda94  sub w9,w22,w21
71021cda98  add x10,x8,w9, SXTW  #0x4
71021cda9c  ldrb w8,[x8, #0xa]
71021cdaa0  add x10,x10,#0x10
71021cdaa4  cmp w9,w8
71021cdaa8  csel x1,x1,x10,gt
71021cdaac  b 0x71021cda04
71021cdab0  ldr x8,[x8, #0x10]
71021cdab4  add x8,x8,#0x1
71021cdab8  cmp x0,x8
71021cdabc  b.ne 0x71021cdadc
71021cdac0  ldr x9,[sp]
71021cdac4  scvtf s0,x9
71021cdac8  ldr w8,[sp, #0x8]
71021cdacc  cmp w8,#0x13
71021cdad0  fmov w10,s0
71021cdad4  csel w8,w10,w9,eq
71021cdad8  b 0x71021cdae0
71021cdadc  mov w8,wzr
71021cdae0  str w8,[x20, #0x34]
71021cdae4  ldr x8,[x19, #0x10]
71021cdae8  ldr x9,[x19, #0x20]
71021cdaec  sub x8,x8,#0x10
71021cdaf0  cmp w21,#0x1
71021cdaf4  str x8,[x19, #0x10]
71021cdaf8  b.lt 0x71021cdb18
71021cdafc  ldr x9,[x9]
71021cdb00  add x9,x9,w21, SXTW  #0x4
71021cdb04  adrp x10,0x7104862000
71021cdb08  add x10,x10,#0x960
71021cdb0c  cmp x9,x8
71021cdb10  csel x1,x9,x10,cc
71021cdb14  b 0x71021cdb3c
71021cdb18  add w10,w22,#0x1
71021cdb1c  cmp w21,w10
71021cdb20  b.ge 0x71021cdb38
71021cdb24  cmp w21,w22
71021cdb28  b.ne 0x71021cdbb0
71021cdb2c  ldr x8,[x19, #0x18]
71021cdb30  add x1,x8,#0x40
71021cdb34  b 0x71021cdb3c
71021cdb38  add x1,x8,w21, SXTW  #0x4
71021cdb3c  adrp x2,0x710445f000
71021cdb40  add x2,x2,#0x10b
71021cdb44  mov x0,x19
71021cdb48  bl 0x71038f4d40
71021cdb4c  ldr x23,[x19, #0x10]
71021cdb50  ldur w8,[x23, #-0x8]
71021cdb54  cmp w8,#0x3
71021cdb58  b.ne 0x71021cdb64
71021cdb5c  ldur w8,[x23, #-0x10]
71021cdb60  b 0x71021cdc18
71021cdb64  cmp w8,#0x13
71021cdb68  b.ne 0x71021cdb7c
71021cdb6c  ldur x8,[x23, #-0x10]
71021cdb70  scvtf s0,x8
71021cdb74  fmov w8,s0
71021cdb78  b 0x71021cdc18
71021cdb7c  and w8,w8,#0xf
71021cdb80  cmp w8,#0x4
71021cdb84  b.ne 0x71021cdc14
71021cdb88  ldur x8,[x23, #-0x10]
71021cdb8c  add x0,x8,#0x18
71021cdb90  mov x1,sp
71021cdb94  bl 0x7103907f00
71021cdb98  ldur x8,[x23, #-0x10]
71021cdb9c  ldrb w9,[x8, #0x8]
71021cdba0  cmp w9,#0x4
71021cdba4  b.ne 0x71021cdbe8
71021cdba8  ldrb w8,[x8, #0xb]
71021cdbac  b 0x71021cdbec
71021cdbb0  ldr x8,[x9]
71021cdbb4  ldr w9,[x8, #0x8]
71021cdbb8  adrp x1,0x7104862000
71021cdbbc  add x1,x1,#0x960
71021cdbc0  cmp w9,#0x16
71021cdbc4  b.eq 0x71021cdb3c
71021cdbc8  ldr x8,[x8]
71021cdbcc  sub w9,w22,w21
71021cdbd0  add x10,x8,w9, SXTW  #0x4
71021cdbd4  ldrb w8,[x8, #0xa]
71021cdbd8  add x10,x10,#0x10
71021cdbdc  cmp w9,w8
71021cdbe0  csel x1,x1,x10,gt
71021cdbe4  b 0x71021cdb3c
71021cdbe8  ldr x8,[x8, #0x10]
71021cdbec  add x8,x8,#0x1
71021cdbf0  cmp x0,x8
71021cdbf4  b.ne 0x71021cdc14
71021cdbf8  ldr x9,[sp]
71021cdbfc  scvtf s0,x9
71021cdc00  ldr w8,[sp, #0x8]
71021cdc04  cmp w8,#0x13
71021cdc08  fmov w10,s0
71021cdc0c  csel w8,w10,w9,eq
71021cdc10  b 0x71021cdc18
71021cdc14  mov w8,wzr
71021cdc18  str w8,[x20, #0x38]
71021cdc1c  ldr x8,[x19, #0x10]
71021cdc20  ldr x9,[x19, #0x20]
71021cdc24  sub x8,x8,#0x10
71021cdc28  cmp w21,#0x1
71021cdc2c  str x8,[x19, #0x10]
71021cdc30  b.lt 0x71021cdc50
71021cdc34  ldr x9,[x9]
71021cdc38  add x9,x9,w21, SXTW  #0x4
71021cdc3c  adrp x10,0x7104862000
71021cdc40  add x10,x10,#0x960
71021cdc44  cmp x9,x8
71021cdc48  csel x1,x9,x10,cc
71021cdc4c  b 0x71021cdc74
71021cdc50  add w10,w22,#0x1
71021cdc54  cmp w21,w10
71021cdc58  b.ge 0x71021cdc70
71021cdc5c  cmp w21,w22
71021cdc60  b.ne 0x71021cdce8
71021cdc64  ldr x8,[x19, #0x18]
71021cdc68  add x1,x8,#0x40
71021cdc6c  b 0x71021cdc74
71021cdc70  add x1,x8,w21, SXTW  #0x4
71021cdc74  adrp x2,0x7104269000
71021cdc78  add x2,x2,#0x8f3
71021cdc7c  mov x0,x19
71021cdc80  bl 0x71038f4d40
71021cdc84  ldr x23,[x19, #0x10]
71021cdc88  ldur w8,[x23, #-0x8]
71021cdc8c  cmp w8,#0x3
71021cdc90  b.ne 0x71021cdc9c
71021cdc94  ldur w8,[x23, #-0x10]
71021cdc98  b 0x71021cdd50
71021cdc9c  cmp w8,#0x13
71021cdca0  b.ne 0x71021cdcb4
71021cdca4  ldur x8,[x23, #-0x10]
71021cdca8  scvtf s0,x8
71021cdcac  fmov w8,s0
71021cdcb0  b 0x71021cdd50
71021cdcb4  and w8,w8,#0xf
71021cdcb8  cmp w8,#0x4
71021cdcbc  b.ne 0x71021cdd4c
71021cdcc0  ldur x8,[x23, #-0x10]
71021cdcc4  add x0,x8,#0x18
71021cdcc8  mov x1,sp
71021cdccc  bl 0x7103907f00
71021cdcd0  ldur x8,[x23, #-0x10]
71021cdcd4  ldrb w9,[x8, #0x8]
71021cdcd8  cmp w9,#0x4
71021cdcdc  b.ne 0x71021cdd20
71021cdce0  ldrb w8,[x8, #0xb]
71021cdce4  b 0x71021cdd24
71021cdce8  ldr x8,[x9]
71021cdcec  ldr w9,[x8, #0x8]
71021cdcf0  adrp x1,0x7104862000
71021cdcf4  add x1,x1,#0x960
71021cdcf8  cmp w9,#0x16
71021cdcfc  b.eq 0x71021cdc74
71021cdd00  ldr x8,[x8]
71021cdd04  sub w9,w22,w21
71021cdd08  add x10,x8,w9, SXTW  #0x4
71021cdd0c  ldrb w8,[x8, #0xa]
71021cdd10  add x10,x10,#0x10
71021cdd14  cmp w9,w8
71021cdd18  csel x1,x1,x10,gt
71021cdd1c  b 0x71021cdc74
71021cdd20  ldr x8,[x8, #0x10]
71021cdd24  add x8,x8,#0x1
71021cdd28  cmp x0,x8
71021cdd2c  b.ne 0x71021cdd4c
71021cdd30  ldr x9,[sp]
71021cdd34  scvtf s0,x9
71021cdd38  ldr w8,[sp, #0x8]
71021cdd3c  cmp w8,#0x13
71021cdd40  fmov w10,s0
71021cdd44  csel w8,w10,w9,eq
71021cdd48  b 0x71021cdd50
71021cdd4c  mov w8,wzr
71021cdd50  str w8,[x20, #0x3c]
71021cdd54  ldr x8,[x19, #0x10]
71021cdd58  ldr x9,[x19, #0x20]
71021cdd5c  sub x8,x8,#0x10
71021cdd60  cmp w21,#0x1
71021cdd64  str x8,[x19, #0x10]
71021cdd68  b.lt 0x71021cdd88
71021cdd6c  ldr x9,[x9]
71021cdd70  add x9,x9,w21, SXTW  #0x4
71021cdd74  adrp x10,0x7104862000
71021cdd78  add x10,x10,#0x960
71021cdd7c  cmp x9,x8
71021cdd80  csel x1,x9,x10,cc
71021cdd84  b 0x71021cddac
71021cdd88  add w10,w22,#0x1
71021cdd8c  cmp w21,w10
71021cdd90  b.ge 0x71021cdda8
71021cdd94  cmp w21,w22
71021cdd98  b.ne 0x71021cde20
71021cdd9c  ldr x8,[x19, #0x18]
71021cdda0  add x1,x8,#0x40
71021cdda4  b 0x71021cddac
71021cdda8  add x1,x8,w21, SXTW  #0x4
71021cddac  adrp x2,0x7104269000
71021cddb0  add x2,x2,#0x912
71021cddb4  mov x0,x19
71021cddb8  bl 0x71038f4d40
71021cddbc  ldr x21,[x19, #0x10]
71021cddc0  ldur w8,[x21, #-0x8]
71021cddc4  cmp w8,#0x3
71021cddc8  b.ne 0x71021cddd4
71021cddcc  ldur w8,[x21, #-0x10]
71021cddd0  b 0x71021cde88
71021cddd4  cmp w8,#0x13
71021cddd8  b.ne 0x71021cddec
71021cdddc  ldur x8,[x21, #-0x10]
71021cdde0  scvtf s0,x8
71021cdde4  fmov w8,s0
71021cdde8  b 0x71021cde88
71021cddec  and w8,w8,#0xf
71021cddf0  cmp w8,#0x4
71021cddf4  b.ne 0x71021cde84
71021cddf8  ldur x8,[x21, #-0x10]
71021cddfc  add x0,x8,#0x18
71021cde00  mov x1,sp
71021cde04  bl 0x7103907f00
71021cde08  ldur x8,[x21, #-0x10]
71021cde0c  ldrb w9,[x8, #0x8]
71021cde10  cmp w9,#0x4
71021cde14  b.ne 0x71021cde58
71021cde18  ldrb w8,[x8, #0xb]
71021cde1c  b 0x71021cde5c
71021cde20  ldr x8,[x9]
71021cde24  ldr w9,[x8, #0x8]
71021cde28  adrp x1,0x7104862000
71021cde2c  add x1,x1,#0x960
71021cde30  cmp w9,#0x16
71021cde34  b.eq 0x71021cddac
71021cde38  ldr x8,[x8]
71021cde3c  sub w9,w22,w21
71021cde40  add x10,x8,w9, SXTW  #0x4
71021cde44  ldrb w8,[x8, #0xa]
71021cde48  add x10,x10,#0x10
71021cde4c  cmp w9,w8
71021cde50  csel x1,x1,x10,gt
71021cde54  b 0x71021cddac
71021cde58  ldr x8,[x8, #0x10]
71021cde5c  add x8,x8,#0x1
71021cde60  cmp x0,x8
71021cde64  b.ne 0x71021cde84
71021cde68  ldr x9,[sp]
71021cde6c  scvtf s0,x9
71021cde70  ldr w8,[sp, #0x8]
71021cde74  cmp w8,#0x13
71021cde78  fmov w10,s0
71021cde7c  csel w8,w10,w9,eq
71021cde80  b 0x71021cde88
71021cde84  mov w8,wzr
71021cde88  str w8,[x20, #0x40]
71021cde8c  ldr x8,[x19, #0x10]
71021cde90  sub x8,x8,#0x10
71021cde94  str x8,[x19, #0x10]
71021cde98  ldp x29,x30,[sp, #0x40]
71021cde9c  ldp x20,x19,[sp, #0x30]
71021cdea0  ldr x23,[sp, #0x10]
71021cdea4  ldp x22,x21,[sp, #0x20]
71021cdea8  add sp,sp,#0x50
71021cdeac  ret
