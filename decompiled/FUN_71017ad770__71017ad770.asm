// addr:      71017ad770
// offset:    0x17ad770
// name:      FUN_71017ad770
// mangled:   
// size:      6232

71017ad770  stp x28,x27,[sp, #-0x60]!
71017ad774  stp x26,x25,[sp, #0x10]
71017ad778  stp x24,x23,[sp, #0x20]
71017ad77c  stp x22,x21,[sp, #0x30]
71017ad780  stp x20,x19,[sp, #0x40]
71017ad784  stp x29,x30,[sp, #0x50]
71017ad788  add x29,sp,#0x50
71017ad78c  sub sp,sp,#0x3b0
71017ad790  adrp x19,0x7105314000
71017ad794  add x19,x19,#0x4d8
71017ad798  ldarb w8,[x19]
71017ad79c  tbz w8,#0x0,0x71017aef38
71017ad7a0  adrp x8,0x710530a000
71017ad7a4  ldrb w28,[x8, #0x96f]
71017ad7a8  adrp x8,0x710532f000
71017ad7ac  ldr x8,[x8, #0x730]
71017ad7b0  ldr x8,[x8, #0x8]
71017ad7b4  ldr x8,[x8, #0x178]
71017ad7b8  ldr x0,[x8, #0x8]
71017ad7bc  mov x1,#0x4f97
71017ad7c0  movk x1,#0x5678, LSL #16
71017ad7c4  movk x1,#0xd, LSL #32
71017ad7c8  bl 0x71032b23e0
71017ad7cc  adrp x8,0x7105314000
71017ad7d0  ldr x8,[x8, #0x510]
71017ad7d4  ldr x8,[x8]
71017ad7d8  ldr x8,[x8, #0x298]
71017ad7dc  str x8,[sp, #0x40]
71017ad7e0  ldarb w8,[x19]
71017ad7e4  mov x20,x0
71017ad7e8  tbz w8,#0x0,0x71017aef78
71017ad7ec  adrp x8,0x7105305000
71017ad7f0  ldr w8,[x8, #0xf0]
71017ad7f4  mov w9,#0x408ffff
71017ad7f8  cmp w8,w9
71017ad7fc  b.le 0x71017ad82c
71017ad800  mov w9,#0x4090000
71017ad804  cmp w8,w9
71017ad808  b.eq 0x71017ad8c8
71017ad80c  mov w9,#0x5040000
71017ad810  cmp w8,w9
71017ad814  b.eq 0x71017ad8c8
71017ad818  mov w9,#0x200
71017ad81c  movk w9,#0x701, LSL #16
71017ad820  cmp w8,w9
71017ad824  b.eq 0x71017ad8c8
71017ad828  b 0x71017ad848
71017ad82c  mov w9,#0x100
71017ad830  movk w9,#0x203, LSL #16
71017ad834  cmp w8,w9
71017ad838  b.eq 0x71017ad8c8
71017ad83c  mov w9,#0x4040000
71017ad840  cmp w8,w9
71017ad844  b.eq 0x71017ad8c8
71017ad848  sub w8,w28,#0x3
71017ad84c  cmp w8,#0x4
71017ad850  b.hi 0x71017ad8c8
71017ad854  adrp x8,0x710530a000
71017ad858  ldrb w21,[x8, #0x987]
71017ad85c  adrp x8,0x710532f000
71017ad860  ldr x8,[x8, #0x730]
71017ad864  ldr x19,[x8, #0x8]
71017ad868  ldr x0,[x19, #0x178]
71017ad86c  mov x1,x20
71017ad870  bl 0x71032b1e40
71017ad874  tbnz w0,#0x1f,0x71017ad8b4
71017ad878  ldr x0,[x19, #0x178]
71017ad87c  mov x1,x20
71017ad880  bl 0x71032b1e40
71017ad884  adrp x8,0x71052c5000
71017ad888  add x8,x8,#0x180
71017ad88c  lsr w9,w0,#0x5
71017ad890  add x8,x8,w9, UXTW  #0x2
71017ad894  mov w9,#0x5830
71017ad898  movk w9,#0x4, LSL #16
71017ad89c  ldr w8,[x8, x9, LSL #0x0]
71017ad8a0  mov w9,#0x1
71017ad8a4  lsl w9,w9,w0
71017ad8a8  tst w9,w8
71017ad8ac  cset w2,ne
71017ad8b0  b 0x71017ad8b8
71017ad8b4  mov w2,wzr
71017ad8b8  adrp x0,0x710530e000
71017ad8bc  add x0,x0,#0x2b0
71017ad8c0  mov w1,w21
71017ad8c4  bl 0x71017a9c20
71017ad8c8  adrp x8,0x710530a000
71017ad8cc  ldrb w8,[x8, #0x987]
71017ad8d0  sub w8,w8,#0x1
71017ad8d4  cmp w8,#0xa
71017ad8d8  b.cs 0x71017ad8e4
71017ad8dc  orr w8,wzr,#0x3
71017ad8e0  b 0x71017ad8f4
71017ad8e4  adrp x8,0x710530a000
71017ad8e8  ldr w8,[x8, #0x968]
71017ad8ec  tbnz w8,#0x1f,0x71017ae80c
71017ad8f0  add w8,w8,#0x1
71017ad8f4  tst x20,#0xffffffffff
71017ad8f8  lsr x9,x20,#0x38
71017ad8fc  adrp x23,0x71052c5000
71017ad900  add x23,x23,#0x180
71017ad904  cset w10,ne
71017ad908  str x20,[sp, #0x48]
71017ad90c  cmp x9,#0x69
71017ad910  cset w9,eq
71017ad914  str w28,[sp, #0x2c]
71017ad918  and w20,w9,w10
71017ad91c  add x9,sp,#0x60
71017ad920  str w20,[sp, #0x5c]
71017ad924  mov x11,#0xff0000000000
71017ad928  add x10,x9,#0x8
71017ad92c  str x10,[sp, #0x20]
71017ad930  mov w22,w8
71017ad934  mov w8,#0x9138
71017ad938  movk w8,#0x4, LSL #16
71017ad93c  movk x11,#0x69ff, LSL #48
71017ad940  str x22,[sp, #0x50]
71017ad944  add x10,x9,#0x148
71017ad948  add x9,x9,#0x158
71017ad94c  stp x9,x10,[sp, #0x10]
71017ad950  add x8,x23,x8
71017ad954  stp x8,x11,[sp, #0x30]
71017ad958  adrp x8,0x710530a000
71017ad95c  add x8,x8,#0x9b0
71017ad960  mov w9,#0x3900
71017ad964  mov x26,xzr
71017ad968  mov x27,#0x6900000000000000
71017ad96c  add x8,x8,x9
71017ad970  str x8,[sp]
71017ad974  cmp x26,#0x3
71017ad978  b.cs 0x71017aefb8
71017ad97c  add x8,x23,x26, LSL #0x5
71017ad980  mov w9,#0x5640
71017ad984  movk w9,#0x4, LSL #16
71017ad988  add x19,x8,x9
71017ad98c  ldr x2,[x19]
71017ad990  and x10,x2,#-0x100000000000000
71017ad994  and x9,x2,#0xffffffffff
71017ad998  cmp x10,x27
71017ad99c  ccmp x9,#0x0,#0x4,eq
71017ad9a0  b.eq 0x71017adc68
71017ad9a4  mov w9,#0x5638
71017ad9a8  movk w9,#0x4, LSL #16
71017ad9ac  ldr x9,[x8, x9, LSL #0x0]
71017ad9b0  and x10,x9,#0xffffffffff
71017ad9b4  and x9,x9,#-0x100000000000000
71017ad9b8  cmp x9,x27
71017ad9bc  ccmp x10,#0x0,#0x4,eq
71017ad9c0  b.eq 0x71017adc68
71017ad9c4  mov w9,#0x5648
71017ad9c8  movk w9,#0x4, LSL #16
71017ad9cc  add x22,x8,x9
71017ad9d0  ldr w20,[x22]
71017ad9d4  cmp w20,#0x2
71017ad9d8  b.eq 0x71017ad9f0
71017ad9dc  cmp w20,#0x1
71017ad9e0  b.ne 0x71017ad9fc
71017ad9e4  adrp x23,0x710530e000
71017ad9e8  add x23,x23,#0x2d0
71017ad9ec  b 0x71017ada00
71017ad9f0  adrp x23,0x710530e000
71017ad9f4  add x23,x23,#0x2e8
71017ad9f8  b 0x71017ada00
71017ad9fc  ldr x23,[sp, #0x30]
71017ada00  ldp x0,x1,[x23]
71017ada04  bl 0x71017a9500
71017ada08  ldr x8,[x23, #0x8]
71017ada0c  cmp x0,x8
71017ada10  b.eq 0x71017ada3c
71017ada14  sub x9,x8,x0
71017ada18  add x1,x0,x9
71017ada1c  subs x2,x8,x1
71017ada20  mov x21,x0
71017ada24  asr x24,x2,#0x3
71017ada28  b.eq 0x71017ada34
71017ada2c  mov x0,x21
71017ada30  bl 0x71039c00a0
71017ada34  add x8,x21,x24, LSL #0x3
71017ada38  str x8,[x23, #0x8]
71017ada3c  adrp x23,0x71052c5000
71017ada40  add x23,x23,#0x180
71017ada44  cbnz w20,0x71017adaec
71017ada48  adrp x8,0x710532f000
71017ada4c  ldr x8,[x8, #0x730]
71017ada50  ldr x8,[x8, #0x8]
71017ada54  ldr x8,[x8, #0x178]
71017ada58  ldr x0,[x8, #0x8]
71017ada5c  ldr x20,[x19]
71017ada60  mov x1,#0x4f97
71017ada64  movk x1,#0x5678, LSL #16
71017ada68  movk x1,#0xd, LSL #32
71017ada6c  bl 0x71032b23e0
71017ada70  and x10,x20,#-0x100000000000000
71017ada74  and x9,x20,#0xffffffffff
71017ada78  and x8,x0,#0xffffffffff
71017ada7c  cmp x10,x27
71017ada80  b.ne 0x71017adaa8
71017ada84  cbz x9,0x71017adaa8
71017ada88  and x11,x0,#-0x100000000000000
71017ada8c  cmp x11,x27
71017ada90  b.ne 0x71017adaac
71017ada94  cbz x8,0x71017adaac
71017ada98  eor x8,x0,x20
71017ada9c  tst x8,#0xffffffffff
71017adaa0  b.ne 0x71017adaec
71017adaa4  b 0x71017adae0
71017adaa8  and x11,x0,#-0x100000000000000
71017adaac  cmp x10,x27
71017adab0  cset w10,eq
71017adab4  cmp x9,#0x0
71017adab8  cset w9,ne
71017adabc  cmp x8,#0x0
71017adac0  cset w8,ne
71017adac4  cmp x11,x27
71017adac8  and w9,w10,w9
71017adacc  cset w10,eq
71017adad0  and w8,w8,w10
71017adad4  eor w8,w8,w9
71017adad8  cmp w8,#0x1
71017adadc  b.eq 0x71017adaec
71017adae0  mov w8,#0x1
71017adae4  adrp x9,0x710530e000
71017adae8  strb w8,[x9, #0x300]
71017adaec  cmp w28,#0x5
71017adaf0  b.ne 0x71017adb1c
71017adaf4  adrp x8,0x710530e000
71017adaf8  add x8,x8,#0x2d0
71017adafc  mov x9,x8
71017adb00  ldr x8,[x8]
71017adb04  ldr x9,[x9, #0x8]
71017adb08  cmp x8,x9
71017adb0c  b.eq 0x71017adb64
71017adb10  ldr w20,[sp, #0x5c]
71017adb14  ldr x22,[sp, #0x50]
71017adb18  b 0x71017adc68
71017adb1c  ldr w1,[x22]
71017adb20  adrp x8,0x710530e000
71017adb24  add x8,x8,#0x2b8
71017adb28  mov x9,x8
71017adb2c  add x8,x8,#0x18
71017adb30  cmp w1,#0x1
71017adb34  csel x8,x8,x9,eq
71017adb38  add x9,x9,#0x30
71017adb3c  cmp w1,#0x2
71017adb40  csel x8,x9,x8,eq
71017adb44  ldp x9,x8,[x8]
71017adb48  ldr w20,[sp, #0x5c]
71017adb4c  ldr x22,[sp, #0x50]
71017adb50  cmp x9,x8
71017adb54  b.eq 0x71017adbe4
71017adb58  cmp w28,#0x3
71017adb5c  b.eq 0x71017adc40
71017adb60  b 0x71017adc68
71017adb64  adrp x9,0x710530e000
71017adb68  add x9,x9,#0x2e8
71017adb6c  mov x10,x9
71017adb70  ldr x9,[x9]
71017adb74  ldr x10,[x10, #0x8]
71017adb78  ldr w20,[sp, #0x5c]
71017adb7c  ldr x22,[sp, #0x50]
71017adb80  cmp x9,x10
71017adb84  b.ne 0x71017adc68
71017adb88  mov x10,#0xff0000000000
71017adb8c  movk x10,#0x69ff, LSL #48
71017adb90  adrp x21,0x710530a000
71017adb94  add x21,x21,#0x9b0
71017adb98  ldr x24,[sp]
71017adb9c  mov x0,x24
71017adba0  str x10,[x21, #0x3900]
71017adba4  ldr x10,[x21, #0x3908]
71017adba8  mov w1,wzr
71017adbac  mov x2,x21
71017adbb0  str x8,[x21, #0x3928]
71017adbb4  str x9,[x21, #0x3940]
71017adbb8  str x10,[x21, #0x3910]
71017adbbc  bl 0x71017a91b0
71017adbc0  mov w1,#0x1
71017adbc4  mov x0,x24
71017adbc8  mov x2,x21
71017adbcc  bl 0x71017a91b0
71017adbd0  mov w1,#0x2
71017adbd4  mov x0,x24
71017adbd8  mov x2,x21
71017adbdc  bl 0x71017a91b0
71017adbe0  b 0x71017adc68
71017adbe4  mov x9,#0xff0000000000
71017adbe8  adrp x8,0x710530e000
71017adbec  add x8,x8,#0x2b0
71017adbf0  movk x9,#0x69ff, LSL #48
71017adbf4  cmp w1,#0x2
71017adbf8  str x9,[x8], #0x8
71017adbfc  b.eq 0x71017adc14
71017adc00  cmp w1,#0x1
71017adc04  b.ne 0x71017adc1c
71017adc08  adrp x8,0x710530e000
71017adc0c  add x8,x8,#0x2d0
71017adc10  b 0x71017adc1c
71017adc14  adrp x8,0x710530e000
71017adc18  add x8,x8,#0x2e8
71017adc1c  ldr x9,[x8]
71017adc20  str x9,[x8, #0x8]
71017adc24  adrp x2,0x710530a000
71017adc28  add x2,x2,#0x9b0
71017adc2c  mov w8,#0x3900
71017adc30  add x0,x2,x8
71017adc34  bl 0x71017a91b0
71017adc38  cmp w28,#0x3
71017adc3c  b.ne 0x71017adc68
71017adc40  adrp x8,0x710530a000
71017adc44  ldrb w8,[x8, #0x987]
71017adc48  sub w8,w8,#0x1
71017adc4c  and w8,w8,#0xff
71017adc50  cmp w8,#0x9
71017adc54  ldr x8,[x19]
71017adc58  ldr x9,[sp, #0x38]
71017adc5c  ccmp x26,#0x0,#0x4,ls
71017adc60  csel x9,x8,x9,eq
71017adc64  str x9,[sp, #0x38]
71017adc68  ldr x8,[x19]
71017adc6c  and x10,x8,#-0x100000000000000
71017adc70  and x9,x8,#0xffffffffff
71017adc74  cmp x10,x27
71017adc78  ccmp x9,#0x0,#0x4,eq
71017adc7c  b.ne 0x71017adc88
71017adc80  tbz w20,#0x0,0x71017adc9c
71017adc84  b 0x71017ae7e0
71017adc88  cbz w20,0x71017ae7e0
71017adc8c  ldr x9,[sp, #0x48]
71017adc90  eor x8,x9,x8
71017adc94  tst x8,#0xffffffffff
71017adc98  b.ne 0x71017ae7e0
71017adc9c  add x8,x23,x26, LSL #0x6
71017adca0  mov w9,#0x56a8
71017adca4  movk w9,#0x4, LSL #16
71017adca8  mov w10,#0x56b0
71017adcac  movk w10,#0x4, LSL #16
71017adcb0  ldr x9,[x8, x9, LSL #0x0]
71017adcb4  ldr x8,[x8, x10, LSL #0x0]
71017adcb8  cmp x9,x8
71017adcbc  b.eq 0x71017ae7e0
71017adcc0  orr w8,wzr,#0x30
71017adcc4  madd x8,x26,x8,x23
71017adcc8  mov w9,#0x577c
71017adccc  movk w9,#0x4, LSL #16
71017adcd0  add x21,x8,x9
71017adcd4  ldr w8,[x21]
71017adcd8  cbz w8,0x71017ae7e0
71017adcdc  adrp x8,0x710532f000
71017adce0  ldr x8,[x8, #0x7d0]
71017adce4  ldr x8,[x8, #0x8]
71017adce8  ldr x0,[x8, #0x18]
71017adcec  cbz x0,0x71017add00
71017adcf0  ldr x8,[x0]
71017adcf4  ldr x8,[x8, #0x50]
71017adcf8  blr x8
71017adcfc  tbnz w0,#0x0,0x71017ae7e0
71017add00  adrp x8,0x71052c4000
71017add04  ldr x8,[x8, #0xc58]
71017add08  ldr x8,[x8, #0x8]
71017add0c  ldr x19,[x8, #0x88]
71017add10  mov w8,#0x9ff8
71017add14  ldr x1,[x19, x8, LSL #0x0]
71017add18  cbz x1,0x71017add50
71017add1c  mov w8,#0xa010
71017add20  add x0,x19,x8
71017add24  bl 0x71016f6340
71017add28  mvn w8,w0
71017add2c  tst w8,#0xff
71017add30  b.eq 0x71017add50
71017add34  mov w8,#0x108
71017add38  madd x8,x26,x8,x19
71017add3c  mov w9,#0x47e1
71017add40  movk w9,#0x2, LSL #16
71017add44  ldrb w8,[x8, x9, LSL ]
71017add48  cmp w8,w0, UXTB 
71017add4c  b.ne 0x71017ae7e0
71017add50  adrp x8,0x710530e000
71017add54  add x8,x8,#0x320
71017add58  ldr w9,[x21]
71017add5c  ldp x28,x8,[x8]
71017add60  cmp x28,x8
71017add64  b.eq 0x71017adda4
71017add68  ldr w10,[x28]
71017add6c  cmp w10,w9
71017add70  mov x11,x28
71017add74  b.eq 0x71017adda8
71017add78  add x10,x28,#0x4
71017add7c  cmp x8,x10
71017add80  b.eq 0x71017ae114
71017add84  ldr w11,[x10], #0x4
71017add88  cmp w11,w9
71017add8c  b.ne 0x71017add7c
71017add90  sub x11,x10,#0x4
71017add94  mov x28,x11
71017add98  cmp x11,x8
71017add9c  b.ne 0x71017addb0
71017adda0  b 0x71017ade70
71017adda4  mov x11,x28
71017adda8  cmp x11,x8
71017addac  b.eq 0x71017ade70
71017addb0  add x10,x11,#0x4
71017addb4  cmp x10,x8
71017addb8  b.eq 0x71017ade70
71017addbc  sub x12,x8,#0x8
71017addc0  sub x13,x12,x11
71017addc4  tbnz w13,#0x2,0x71017adddc
71017addc8  ldr w10,[x10]
71017addcc  cmp w10,w9
71017addd0  b.eq 0x71017addd8
71017addd4  str w10,[x28], #0x4
71017addd8  add x10,x11,#0x8
71017adddc  cmp x13,#0x4
71017adde0  b.cc 0x71017ade64
71017adde4  sub x11,x12,x10
71017adde8  tbnz w11,#0x3,0x71017ade10
71017addec  ldr w12,[x10]
71017addf0  cmp w12,w9
71017addf4  b.eq 0x71017addfc
71017addf8  str w12,[x28], #0x4
71017addfc  ldr w12,[x10, #0x4]
71017ade00  cmp w12,w9
71017ade04  b.eq 0x71017ade0c
71017ade08  str w12,[x28], #0x4
71017ade0c  add x10,x10,#0x8
71017ade10  cmp x11,#0x8
71017ade14  b.cc 0x71017ade64
71017ade18  ldr w11,[x10]
71017ade1c  cmp w11,w9
71017ade20  b.eq 0x71017ade28
71017ade24  str w11,[x28], #0x4
71017ade28  ldr w11,[x10, #0x4]
71017ade2c  cmp w11,w9
71017ade30  b.eq 0x71017ade38
71017ade34  str w11,[x28], #0x4
71017ade38  ldr w11,[x10, #0x8]
71017ade3c  cmp w11,w9
71017ade40  b.eq 0x71017ade48
71017ade44  str w11,[x28], #0x4
71017ade48  ldr w11,[x10, #0xc]
71017ade4c  cmp w11,w9
71017ade50  b.eq 0x71017ade58
71017ade54  str w11,[x28], #0x4
71017ade58  add x10,x10,#0x10
71017ade5c  cmp x10,x8
71017ade60  b.ne 0x71017ade18
71017ade64  adrp x8,0x710530e000
71017ade68  add x8,x8,#0x320
71017ade6c  ldr x8,[x8, #0x8]
71017ade70  cmp x8,x28
71017ade74  b.eq 0x71017adea0
71017ade78  sub x9,x8,x28
71017ade7c  add x1,x28,x9
71017ade80  subs x2,x8,x1
71017ade84  asr x19,x2,#0x2
71017ade88  b.eq 0x71017ade94
71017ade8c  mov x0,x28
71017ade90  bl 0x71039c00a0
71017ade94  add x8,x28,x19, LSL #0x2
71017ade98  adrp x9,0x710530e000
71017ade9c  str x8,[x9, #0x328]
71017adea0  adrp x8,0x710530e000
71017adea4  add x8,x8,#0x338
71017adea8  ldr w9,[x21]
71017adeac  ldp x28,x8,[x8]
71017adeb0  cmp x28,x8
71017adeb4  b.eq 0x71017adef4
71017adeb8  ldr w10,[x28]
71017adebc  cmp w10,w9
71017adec0  mov x11,x28
71017adec4  b.eq 0x71017adef8
71017adec8  add x10,x28,#0x4
71017adecc  cmp x8,x10
71017aded0  b.eq 0x71017ae124
71017aded4  ldr w11,[x10], #0x4
71017aded8  cmp w11,w9
71017adedc  b.ne 0x71017adecc
71017adee0  sub x11,x10,#0x4
71017adee4  mov x28,x11
71017adee8  cmp x11,x8
71017adeec  b.ne 0x71017adf00
71017adef0  b 0x71017adfc0
71017adef4  mov x11,x28
71017adef8  cmp x11,x8
71017adefc  b.eq 0x71017adfc0
71017adf00  add x10,x11,#0x4
71017adf04  cmp x10,x8
71017adf08  b.eq 0x71017adfc0
71017adf0c  sub x12,x8,#0x8
71017adf10  sub x13,x12,x11
71017adf14  tbnz w13,#0x2,0x71017adf2c
71017adf18  ldr w10,[x10]
71017adf1c  cmp w10,w9
71017adf20  b.eq 0x71017adf28
71017adf24  str w10,[x28], #0x4
71017adf28  add x10,x11,#0x8
71017adf2c  cmp x13,#0x4
71017adf30  b.cc 0x71017adfb4
71017adf34  sub x11,x12,x10
71017adf38  tbnz w11,#0x3,0x71017adf60
71017adf3c  ldr w12,[x10]
71017adf40  cmp w12,w9
71017adf44  b.eq 0x71017adf4c
71017adf48  str w12,[x28], #0x4
71017adf4c  ldr w12,[x10, #0x4]
71017adf50  cmp w12,w9
71017adf54  b.eq 0x71017adf5c
71017adf58  str w12,[x28], #0x4
71017adf5c  add x10,x10,#0x8
71017adf60  cmp x11,#0x8
71017adf64  b.cc 0x71017adfb4
71017adf68  ldr w11,[x10]
71017adf6c  cmp w11,w9
71017adf70  b.eq 0x71017adf78
71017adf74  str w11,[x28], #0x4
71017adf78  ldr w11,[x10, #0x4]
71017adf7c  cmp w11,w9
71017adf80  b.eq 0x71017adf88
71017adf84  str w11,[x28], #0x4
71017adf88  ldr w11,[x10, #0x8]
71017adf8c  cmp w11,w9
71017adf90  b.eq 0x71017adf98
71017adf94  str w11,[x28], #0x4
71017adf98  ldr w11,[x10, #0xc]
71017adf9c  cmp w11,w9
71017adfa0  b.eq 0x71017adfa8
71017adfa4  str w11,[x28], #0x4
71017adfa8  add x10,x10,#0x10
71017adfac  cmp x10,x8
71017adfb0  b.ne 0x71017adf68
71017adfb4  adrp x8,0x710530e000
71017adfb8  add x8,x8,#0x338
71017adfbc  ldr x8,[x8, #0x8]
71017adfc0  cmp x8,x28
71017adfc4  b.eq 0x71017adff0
71017adfc8  sub x9,x8,x28
71017adfcc  add x1,x28,x9
71017adfd0  subs x2,x8,x1
71017adfd4  asr x19,x2,#0x2
71017adfd8  b.eq 0x71017adfe4
71017adfdc  mov x0,x28
71017adfe0  bl 0x71039c00a0
71017adfe4  add x8,x28,x19, LSL #0x2
71017adfe8  adrp x9,0x710530e000
71017adfec  str x8,[x9, #0x340]
71017adff0  adrp x28,0x710530e000
71017adff4  add x28,x28,#0x350
71017adff8  ldr w8,[x21]
71017adffc  ldp x25,x9,[x28]
71017ae000  cmp x25,x9
71017ae004  b.eq 0x71017ae06c
71017ae008  ldr w10,[x25]
71017ae00c  cmp w10,w8
71017ae010  adrp x24,0x710530e000
71017ae014  add x24,x24,#0x320
71017ae018  b.eq 0x71017ae038
71017ae01c  add x10,x25,#0x4
71017ae020  cmp x9,x10
71017ae024  b.eq 0x71017ae074
71017ae028  ldr w11,[x10], #0x4
71017ae02c  cmp w11,w8
71017ae030  b.ne 0x71017ae020
71017ae034  sub x25,x10,#0x4
71017ae038  cmp x25,x9
71017ae03c  b.eq 0x71017ae074
71017ae040  add x1,x25,#0x4
71017ae044  subs x2,x9,x1
71017ae048  asr x19,x2,#0x2
71017ae04c  b.eq 0x71017ae058
71017ae050  mov x0,x25
71017ae054  bl 0x71039c00a0
71017ae058  add x8,x25,x19, LSL #0x2
71017ae05c  adrp x9,0x710530e000
71017ae060  str x8,[x9, #0x358]
71017ae064  ldr w8,[x21]
71017ae068  b 0x71017ae074
71017ae06c  adrp x24,0x710530e000
71017ae070  add x24,x24,#0x320
71017ae074  adrp x9,0x710530e000
71017ae078  add x9,x9,#0x368
71017ae07c  ldp x25,x9,[x9]
71017ae080  cmp x25,x9
71017ae084  b.eq 0x71017ae0dc
71017ae088  ldr w10,[x25]
71017ae08c  cmp w10,w8
71017ae090  b.eq 0x71017ae0b0
71017ae094  add x10,x25,#0x4
71017ae098  cmp x9,x10
71017ae09c  b.eq 0x71017ae0dc
71017ae0a0  ldr w11,[x10], #0x4
71017ae0a4  cmp w11,w8
71017ae0a8  b.ne 0x71017ae098
71017ae0ac  sub x25,x10,#0x4
71017ae0b0  cmp x25,x9
71017ae0b4  b.eq 0x71017ae0dc
71017ae0b8  add x1,x25,#0x4
71017ae0bc  subs x2,x9,x1
71017ae0c0  asr x19,x2,#0x2
71017ae0c4  b.eq 0x71017ae0d0
71017ae0c8  mov x0,x25
71017ae0cc  bl 0x71039c00a0
71017ae0d0  add x8,x25,x19, LSL #0x2
71017ae0d4  adrp x9,0x710530e000
71017ae0d8  str x8,[x9, #0x370]
71017ae0dc  ldp x8,x9,[x24]
71017ae0e0  cmp x8,x9
71017ae0e4  b.ne 0x71017ae208
71017ae0e8  adrp x8,0x7105314000
71017ae0ec  ldr x8,[x8, #0x510]
71017ae0f0  ldr x8,[x8]
71017ae0f4  ldr x19,[x8, #0x298]
71017ae0f8  ldr x8,[x19]
71017ae0fc  ldp x9,x10,[x8, #0x18]
71017ae100  cmp x9,x10
71017ae104  b.eq 0x71017ae134
71017ae108  sub x11,x10,x9
71017ae10c  mov w12,#0x198
71017ae110  b 0x71017ae14c
71017ae114  mov x28,x8
71017ae118  cmp x8,x28
71017ae11c  b.ne 0x71017ade78
71017ae120  b 0x71017adea0
71017ae124  mov x28,x8
71017ae128  cmp x8,x28
71017ae12c  b.ne 0x71017adfc8
71017ae130  b 0x71017adff0
71017ae134  ldp x11,x12,[x8]
71017ae138  cmp x11,x12
71017ae13c  b.eq 0x71017ae208
71017ae140  sub x11,x12,x11
71017ae144  mov w12,#0x2198
71017ae148  movk w12,#0x3, LSL #16
71017ae14c  sdiv x11,x11,x12
71017ae150  cmp w11,#0x1
71017ae154  b.lt 0x71017ae208
71017ae158  and x11,x11,#0xffffffff
71017ae15c  mov x21,xzr
71017ae160  mov x22,xzr
71017ae164  sub x20,x11,#0x1
71017ae168  cmp x9,x10
71017ae16c  b.ne 0x71017ae18c
71017ae170  b 0x71017ae1c0
71017ae174  ldr x8,[x19]
71017ae178  ldp x9,x10,[x8, #0x18]
71017ae17c  add x22,x22,#0x1
71017ae180  add x21,x21,#0x198
71017ae184  cmp x9,x10
71017ae188  b.eq 0x71017ae1c0
71017ae18c  sub x10,x10,x9
71017ae190  mov x11,#0xfafb
71017ae194  movk x11,#0xfafa, LSL #16
71017ae198  asr x10,x10,#0x3
71017ae19c  movk x11,#0xfafa, LSL #32
71017ae1a0  movk x11,#0xfafa, LSL #48
71017ae1a4  mul x10,x10,x11
71017ae1a8  cmp x10,x22
71017ae1ac  b.ls 0x71017ae1c0
71017ae1b0  add x8,x9,x21
71017ae1b4  ldr w1,[x8]
71017ae1b8  cbnz w1,0x71017ae1f8
71017ae1bc  b 0x71017ae200
71017ae1c0  ldp x9,x8,[x8]
71017ae1c4  cmp x9,x8
71017ae1c8  b.eq 0x71017ae200
71017ae1cc  sub x8,x8,x9
71017ae1d0  mov w10,#0x2198
71017ae1d4  movk w10,#0x3, LSL #16
71017ae1d8  sdiv x8,x8,x10
71017ae1dc  cmp x8,x22
71017ae1e0  b.ls 0x71017ae200
71017ae1e4  mov w8,#0x2198
71017ae1e8  movk w8,#0x3, LSL #16
71017ae1ec  madd x8,x22,x8,x9
71017ae1f0  ldr w1,[x8]
71017ae1f4  cbz w1,0x71017ae200
71017ae1f8  mov x0,x24
71017ae1fc  bl 0x71017aa510
71017ae200  cmp x20,x22
71017ae204  b.ne 0x71017ae174
71017ae208  ldp x8,x9,[x28]
71017ae20c  cmp x8,x9
71017ae210  b.ne 0x71017ae258
71017ae214  mov x0,x28
71017ae218  bl 0x7101ebc290
71017ae21c  ldp x21,x8,[x28]
71017ae220  add x1,x21,#0x4
71017ae224  subs x2,x8,x1
71017ae228  asr x19,x2,#0x2
71017ae22c  mov x0,x21
71017ae230  b.eq 0x71017ae240
71017ae234  bl 0x71039c00a0
71017ae238  adrp x8,0x710530e000
71017ae23c  ldr x0,[x8, #0x350]
71017ae240  add x1,x21,x19, LSL #0x2
71017ae244  adrp x8,0x710530e000
71017ae248  cmp x0,x1
71017ae24c  str x1,[x8, #0x358]
71017ae250  b.eq 0x71017ae258
71017ae254  bl 0x7101ebc6e0
71017ae258  adrp x8,0x710530e000
71017ae25c  add x8,x8,#0x338
71017ae260  mov x9,x8
71017ae264  ldr x8,[x8]
71017ae268  ldr x9,[x9, #0x8]
71017ae26c  cmp x8,x9
71017ae270  b.ne 0x71017ae27c
71017ae274  mov x0,x24
71017ae278  bl 0x71017aa680
71017ae27c  adrp x8,0x710530e000
71017ae280  add x8,x8,#0x368
71017ae284  mov x9,x8
71017ae288  ldr x8,[x8]
71017ae28c  ldr x9,[x9, #0x8]
71017ae290  cmp x8,x9
71017ae294  b.ne 0x71017ae2a0
71017ae298  mov x0,x24
71017ae29c  bl 0x71017aa7f0
71017ae2a0  orr w8,wzr,#0x30
71017ae2a4  madd x8,x26,x8,x23
71017ae2a8  mov w9,#0x577c
71017ae2ac  movk w9,#0x4, LSL #16
71017ae2b0  add x20,x8,x9
71017ae2b4  ldr x8,[sp, #0x40]
71017ae2b8  ldr w22,[x20]
71017ae2bc  ldr x23,[x8]
71017ae2c0  adrp x8,0x7105314000
71017ae2c4  ldr x8,[x8, #0x510]
71017ae2c8  ldr x8,[x8]
71017ae2cc  ldr x8,[x8, #0x1f8]
71017ae2d0  ldr x8,[x8]
71017ae2d4  ldr x8,[x8]
71017ae2d8  ldr w9,[x8]
71017ae2dc  add w19,w9,#0x1
71017ae2e0  str w19,[x8]
71017ae2e4  ldp x9,x8,[x23, #0xc8]
71017ae2e8  cmp x9,x8
71017ae2ec  b.eq 0x71017ae304
71017ae2f0  str w22,[x9]
71017ae2f4  ldr x8,[x23, #0xc8]
71017ae2f8  add x8,x8,#0x4
71017ae2fc  str x8,[x23, #0xc8]
71017ae300  b 0x71017ae404
71017ae304  add x0,x23,#0xc0
71017ae308  ldr x28,[x0]
71017ae30c  sub x25,x9,x28
71017ae310  mov w27,w19
71017ae314  asr x19,x25,#0x2
71017ae318  add x9,x19,#0x1
71017ae31c  lsr x10,x9,#0x3e
71017ae320  cbnz x10,0x71017aefbc
71017ae324  sub x8,x8,x28
71017ae328  asr x10,x8,#0x2
71017ae32c  orr x11,xzr,#0x1ffffffffffffffe
71017ae330  cmp x10,x11
71017ae334  str x20,[sp, #0x8]
71017ae338  b.hi 0x71017ae358
71017ae33c  asr x8,x8,#0x1
71017ae340  cmp x8,x9
71017ae344  csel x20,x9,x8,cc
71017ae348  cbz x20,0x71017ae3bc
71017ae34c  lsr x8,x20,#0x3e
71017ae350  cbz x8,0x71017ae35c
71017ae354  b 0x71017aefb8
71017ae358  orr x20,xzr,#0x3fffffffffffffff
71017ae35c  lsl x8,x20,#0x2
71017ae360  cmp x8,#0x0
71017ae364  csinc x21,x8,xzr,ne
71017ae368  mov w0,#0x10
71017ae36c  mov x1,x21
71017ae370  bl 0x710392e290
71017ae374  mov x24,x0
71017ae378  cbnz x0,0x71017ae3c0
71017ae37c  adrp x8,0x7105332000
71017ae380  ldr x0,[x8, #0xf00]
71017ae384  cbz x0,0x71017ae3bc
71017ae388  stur wzr,[x29, #-0x90]
71017ae38c  str x21,[sp, #0x60]
71017ae390  ldr x8,[x0]
71017ae394  ldr x8,[x8, #0x30]
71017ae398  sub x1,x29,#0x90
71017ae39c  add x2,sp,#0x60
71017ae3a0  blr x8
71017ae3a4  tbz w0,#0x0,0x71017ae3bc
71017ae3a8  mov w0,#0x10
71017ae3ac  mov x1,x21
71017ae3b0  bl 0x710392e290
71017ae3b4  mov x24,x0
71017ae3b8  cbnz x0,0x71017ae3c0
71017ae3bc  mov x24,xzr
71017ae3c0  add x19,x24,x19, LSL #0x2
71017ae3c4  add x20,x24,x20, LSL #0x2
71017ae3c8  cmp x25,#0x1
71017ae3cc  str w22,[x19], #0x4
71017ae3d0  b.lt 0x71017ae3e4
71017ae3d4  mov x0,x24
71017ae3d8  mov x1,x28
71017ae3dc  mov x2,x25
71017ae3e0  bl 0x71039c00e0
71017ae3e4  stp x24,x19,[x23, #0xc0]
71017ae3e8  mov w19,w27
71017ae3ec  str x20,[x23, #0xd0]
71017ae3f0  ldr x20,[sp, #0x8]
71017ae3f4  mov x27,#0x6900000000000000
71017ae3f8  cbz x28,0x71017ae404
71017ae3fc  mov x0,x28
71017ae400  bl 0x710392eb40
71017ae404  mov x21,x23
71017ae408  ldr x24,[x21, #0xe0]!
71017ae40c  cbz x24,0x71017ae454
71017ae410  ldr w28,[sp, #0x2c]
71017ae414  add x21,x23,#0xe0
71017ae418  b 0x71017ae424
71017ae41c  mov x21,x24
71017ae420  mov x24,x8
71017ae424  ldr w8,[x24, #0x1c]
71017ae428  cmp w8,w22
71017ae42c  b.ls 0x71017ae43c
71017ae430  ldr x8,[x24]
71017ae434  cbnz x8,0x71017ae41c
71017ae438  b 0x71017ae4fc
71017ae43c  b.cs 0x71017ae45c
71017ae440  mov x21,x24
71017ae444  ldr x8,[x21, #0x8]!
71017ae448  cbz x8,0x71017ae45c
71017ae44c  mov x24,x8
71017ae450  b 0x71017ae424
71017ae454  ldr w28,[sp, #0x2c]
71017ae458  mov x24,x21
71017ae45c  ldr x8,[x21]
71017ae460  cbnz x8,0x71017ae508
71017ae464  mov w0,#0x10
71017ae468  mov w1,#0x28
71017ae46c  bl 0x710392e290
71017ae470  mov x1,x0
71017ae474  cbnz x0,0x71017ae4c0
71017ae478  adrp x8,0x7105332000
71017ae47c  ldr x0,[x8, #0xf00]
71017ae480  cbz x0,0x71017ae4bc
71017ae484  mov w8,#0x28
71017ae488  stur wzr,[x29, #-0x90]
71017ae48c  sub x1,x29,#0x90
71017ae490  str x8,[sp, #0x60]
71017ae494  ldr x8,[x0]
71017ae498  ldr x8,[x8, #0x30]
71017ae49c  add x2,sp,#0x60
71017ae4a0  blr x8
71017ae4a4  tbz w0,#0x0,0x71017ae4bc
71017ae4a8  mov w0,#0x10
71017ae4ac  mov w1,#0x28
71017ae4b0  bl 0x710392e290
71017ae4b4  mov x1,x0
71017ae4b8  cbnz x0,0x71017ae4c0
71017ae4bc  mov x1,xzr
71017ae4c0  stp w22,w19,[x1, #0x1c]
71017ae4c4  stp xzr,xzr,[x1]
71017ae4c8  str x24,[x1, #0x10]
71017ae4cc  str x1,[x21]
71017ae4d0  ldr x8,[x23, #0xd8]
71017ae4d4  ldr x8,[x8]
71017ae4d8  cbz x8,0x71017ae4e4
71017ae4dc  str x8,[x23, #0xd8]
71017ae4e0  ldr x1,[x21]
71017ae4e4  ldr x0,[x23, #0xe0]
71017ae4e8  bl 0x71003e59f0
71017ae4ec  ldr x8,[x23, #0xe8]
71017ae4f0  add x8,x8,#0x1
71017ae4f4  str x8,[x23, #0xe8]
71017ae4f8  b 0x71017ae508
71017ae4fc  mov x21,x24
71017ae500  ldr x8,[x21]
71017ae504  cbz x8,0x71017ae464
71017ae508  ldr x8,[sp, #0x40]
71017ae50c  ldr x0,[x8]
71017ae510  ldr x8,[x0, #0x58]
71017ae514  adrp x23,0x71052c5000
71017ae518  add x23,x23,#0x180
71017ae51c  cbz x8,0x71017ae5ac
71017ae520  mov x9,x0
71017ae524  ldr x10,[x9, #0x50]!
71017ae528  cbz x10,0x71017ae5ac
71017ae52c  mov x8,x9
71017ae530  ldr w11,[x10, #0x1c]
71017ae534  cmp w11,w22
71017ae538  cset w11,cc
71017ae53c  csel x8,x8,x10,cc
71017ae540  ldr x10,[x10, w11, UXTW #0x3]
71017ae544  cbnz x10,0x71017ae530
71017ae548  cmp x8,x9
71017ae54c  b.eq 0x71017ae5ac
71017ae550  ldr w9,[x8, #0x1c]
71017ae554  cmp w9,w22
71017ae558  b.hi 0x71017ae5ac
71017ae55c  ldrsw x9,[x8, #0x20]
71017ae560  cmn w9,#0x1
71017ae564  b.eq 0x71017ae5ac
71017ae568  mov x8,x0
71017ae56c  ldr x10,[x8, #0x18]!
71017ae570  ldr x11,[x8, #0x8]
71017ae574  cmp x10,x11
71017ae578  b.eq 0x71017ae704
71017ae57c  sub x11,x11,x10
71017ae580  mov x12,#0xfafb
71017ae584  movk x12,#0xfafa, LSL #16
71017ae588  asr x11,x11,#0x3
71017ae58c  movk x12,#0xfafa, LSL #32
71017ae590  movk x12,#0xfafa, LSL #48
71017ae594  mul x11,x11,x12
71017ae598  cmp x11,x9
71017ae59c  b.ls 0x71017aefc0
71017ae5a0  mov w8,#0x198
71017ae5a4  madd x8,x9,x8,x10
71017ae5a8  str w19,[x8, #0x14c]
71017ae5ac  adrp x8,0x7105314000
71017ae5b0  ldr x8,[x8, #0x510]
71017ae5b4  ldr x8,[x8]
71017ae5b8  ldr w24,[x20]
71017ae5bc  mov x1,x24
71017ae5c0  ldr x25,[x8, #0x298]
71017ae5c4  ldr x19,[x8, #0x238]
71017ae5c8  mov x0,x25
71017ae5cc  bl 0x71017cf490
71017ae5d0  ldr w20,[sp, #0x5c]
71017ae5d4  ldr x22,[sp, #0x50]
71017ae5d8  tbz w0,#0x0,0x71017ae7e0
71017ae5dc  ldr x0,[sp, #0x20]
71017ae5e0  mov w1,wzr
71017ae5e4  mov w2,#0x10a
71017ae5e8  str wzr,[sp, #0x60]
71017ae5ec  bl 0x71039c02a0
71017ae5f0  add x8,sp,#0x60
71017ae5f4  add x8,x8,#0x134
71017ae5f8  mov w9,#0x1
71017ae5fc  str x9,[x8]
71017ae600  mov x8,#0xff0000000000
71017ae604  movk x8,#0xd9ff, LSL #48
71017ae608  str x8,[sp, #0x1a0]
71017ae60c  ldr x8,[sp, #0x18]
71017ae610  stur xzr,[x8, #0x7]
71017ae614  str xzr,[x8]
71017ae618  ldr x8,[sp, #0x10]
71017ae61c  add x2,sp,#0x60
71017ae620  mov x0,x25
71017ae624  mov x1,x24
71017ae628  stp xzr,xzr,[x8, #0x30]
71017ae62c  stp xzr,xzr,[x8, #0x20]
71017ae630  stp xzr,xzr,[x8, #0x10]
71017ae634  stp xzr,xzr,[x8]
71017ae638  bl 0x71017ceba0
71017ae63c  ldr x8,[sp, #0x70]
71017ae640  cbz x8,0x71017ae7e0
71017ae644  tbz w0,#0x0,0x71017ae7e0
71017ae648  ldr x9,[x19]
71017ae64c  ldr x9,[x9]
71017ae650  mov x10,xzr
71017ae654  add x11,x9,#0xe10
71017ae658  add x12,x9,#0xb40
71017ae65c  add x13,x12,x10, LSL #0x3
71017ae660  ldr x14,[x13]
71017ae664  cmp x14,x8
71017ae668  b.eq 0x71017ae6f0
71017ae66c  ldr x14,[x13, #0x8]
71017ae670  cmp x14,x8
71017ae674  b.eq 0x71017ae778
71017ae678  ldr x14,[x13, #0x10]
71017ae67c  cmp x14,x8
71017ae680  mov w14,w10
71017ae684  b.eq 0x71017ae784
71017ae688  ldr x14,[x13, #0x18]
71017ae68c  cmp x14,x8
71017ae690  b.eq 0x71017ae75c
71017ae694  ldr x15,[x13, #0x20]
71017ae698  add w14,w10,#0x3
71017ae69c  cmp x15,x8
71017ae6a0  b.eq 0x71017ae764
71017ae6a4  ldr x15,[x13, #0x28]
71017ae6a8  cmp x15,x8
71017ae6ac  b.eq 0x71017ae784
71017ae6b0  ldr x14,[x13, #0x30]
71017ae6b4  cmp x14,x8
71017ae6b8  b.eq 0x71017ae76c
71017ae6bc  ldr x14,[x13, #0x38]
71017ae6c0  cmp x14,x8
71017ae6c4  b.eq 0x71017ae774
71017ae6c8  ldr x14,[x13, #0x40]
71017ae6cc  cmp x14,x8
71017ae6d0  b.eq 0x71017ae780
71017ae6d4  add x13,x13,#0x48
71017ae6d8  add x10,x10,#0x9
71017ae6dc  cmp x13,x11
71017ae6e0  b.ne 0x71017ae65c
71017ae6e4  mov w10,#0x59
71017ae6e8  mov w11,#0x1
71017ae6ec  b 0x71017ae794
71017ae6f0  add x11,x9,w10, UXTW  #0x2
71017ae6f4  ldr w11,[x11, #0xe10]
71017ae6f8  add w11,w11,#0x1
71017ae6fc  cbnz w10,0x71017ae794
71017ae700  b 0x71017ae7d8
71017ae704  ldp x8,x10,[x0]
71017ae708  cmp x8,x10
71017ae70c  b.eq 0x71017ae5ac
71017ae710  sub x10,x10,x8
71017ae714  mov x11,#0x36fb
71017ae718  movk x11,#0xd899, LSL #16
71017ae71c  asr x10,x10,#0x3
71017ae720  movk x11,#0xe6e3, LSL #32
71017ae724  movk x11,#0x5adb, LSL #48
71017ae728  mul x10,x10,x11
71017ae72c  cmp x10,x9
71017ae730  b.ls 0x71017aefc4
71017ae734  mov w10,#0x2198
71017ae738  movk w10,#0x3, LSL #16
71017ae73c  madd x10,x9,x10,x8
71017ae740  ldrh w10,[x10, #0x4]
71017ae744  cmp w10,#0x2
71017ae748  b.ne 0x71017ae5ac
71017ae74c  mov w10,#0x2198
71017ae750  movk w10,#0x3, LSL #16
71017ae754  madd x8,x9,x10,x8
71017ae758  b 0x71017ae5a8
71017ae75c  add w10,w10,#0x3
71017ae760  b 0x71017ae788
71017ae764  mov w10,w14
71017ae768  b 0x71017ae778
71017ae76c  add w10,w10,#0x6
71017ae770  b 0x71017ae788
71017ae774  add w10,w10,#0x6
71017ae778  add w10,w10,#0x1
71017ae77c  b 0x71017ae788
71017ae780  add w14,w10,#0x6
71017ae784  add w10,w14,#0x2
71017ae788  add x11,x9,w10, UXTW  #0x2
71017ae78c  ldr w11,[x11, #0xe10]
71017ae790  add w11,w11,#0x1
71017ae794  mov w12,w10
71017ae798  add x13,x9,w10, UXTW  #0x2
71017ae79c  add x10,x9,w10, UXTW  #0x3
71017ae7a0  add x14,x13,#0xe10
71017ae7a4  add x15,x10,#0xb40
71017ae7a8  add x12,x12,#0x1
71017ae7ac  mov x10,x15
71017ae7b0  mov x13,x14
71017ae7b4  ldr x16,[x10, #-0x8]!
71017ae7b8  str x16,[x15]
71017ae7bc  ldr w15,[x13, #-0x4]!
71017ae7c0  sub x12,x12,#0x1
71017ae7c4  cmp x12,#0x1
71017ae7c8  str w15,[x14]
71017ae7cc  mov x15,x10
71017ae7d0  mov x14,x13
71017ae7d4  b.gt 0x71017ae7b4
71017ae7d8  str x8,[x9, #0xb40]
71017ae7dc  str w11,[x9, #0xe10]
71017ae7e0  add x26,x26,#0x1
71017ae7e4  cmp x26,x22
71017ae7e8  b.ne 0x71017ad974
71017ae7ec  ldr x9,[sp, #0x38]
71017ae7f0  and x8,x9,#-0x100000000000000
71017ae7f4  cmp x8,x27
71017ae7f8  b.ne 0x71017ae80c
71017ae7fc  and x8,x9,#0xffffffffff
71017ae800  cbz x8,0x71017ae80c
71017ae804  adrp x8,0x710530e000
71017ae808  str x9,[x8, #0x2b0]
71017ae80c  ldr x8,[sp, #0x40]
71017ae810  ldr x23,[x8]
71017ae814  mov x20,x23
71017ae818  ldr x8,[x20, #0xa0]!
71017ae81c  cbz x8,0x71017ae828
71017ae820  mov x0,x20
71017ae824  bl 0x71017ce2a0
71017ae828  mov x19,x23
71017ae82c  ldr x8,[x19, #0xc0]!
71017ae830  ldr x9,[x19, #0x8]
71017ae834  cmp x8,x9
71017ae838  b.eq 0x71017aef18
71017ae83c  mov x10,xzr
71017ae840  adrp x8,0x7104280000
71017ae844  add x8,x8,#0x13c
71017ae848  mov w11,#0x2
71017ae84c  add x9,sp,#0x60
71017ae850  strb wzr,[sp, #0x178]
71017ae854  str xzr,[sp, #0x170]
71017ae858  str xzr,[sp, #0x2a0]
71017ae85c  str xzr,[sp, #0x2d0]
71017ae860  str xzr,[sp, #0x300]
71017ae864  str xzr,[sp, #0x330]
71017ae868  str xzr,[sp, #0x360]
71017ae86c  str xzr,[sp, #0x60]
71017ae870  stur xzr,[sp, #0x65]
71017ae874  str w11,[sp, #0x60]
71017ae878  b 0x71017ae884
71017ae87c  add x10,x10,#0x2
71017ae880  strb w12,[x11, #0xd]
71017ae884  add x12,x8,x10
71017ae888  ldrb w13,[x12]
71017ae88c  cbz w13,0x71017ae8a4
71017ae890  ldrb w12,[x12, #0x1]
71017ae894  add x11,x9,x10
71017ae898  strb w13,[x11, #0xc]
71017ae89c  cbnz w12,0x71017ae87c
71017ae8a0  add x10,x10,#0x1
71017ae8a4  add x9,sp,#0x60
71017ae8a8  orr x11,x9,#0xc
71017ae8ac  mov w8,#0x9dc5
71017ae8b0  movk w8,#0x811c, LSL #16
71017ae8b4  mov w12,w8
71017ae8b8  strb wzr,[x11, w10, UXTW ]
71017ae8bc  str w10,[sp, #0x68]
71017ae8c0  ldrb w10,[sp, #0x6c]
71017ae8c4  cbz w10,0x71017ae8ec
71017ae8c8  mov w11,#0xd
71017ae8cc  orr x11,x9,x11
71017ae8d0  mov w13,#0x89
71017ae8d4  mov w12,w8
71017ae8d8  mul w12,w12,w13
71017ae8dc  and w10,w10,#0xff
71017ae8e0  eor w12,w12,w10
71017ae8e4  ldrb w10,[x11], #0x1
71017ae8e8  cbnz w10,0x71017ae8d8
71017ae8ec  mov x10,xzr
71017ae8f0  adrp x11,0x710437a000
71017ae8f4  add x11,x11,#0xfdd
71017ae8f8  str w12,[sp, #0x64]
71017ae8fc  b 0x71017ae908
71017ae900  add x10,x10,#0x2
71017ae904  strb w13,[x12, #0x119]
71017ae908  add x13,x11,x10
71017ae90c  ldrb w14,[x13]
71017ae910  cbz w14,0x71017ae928
71017ae914  ldrb w13,[x13, #0x1]
71017ae918  add x12,x9,x10
71017ae91c  strb w14,[x12, #0x118]
71017ae920  cbnz w13,0x71017ae900
71017ae924  add x10,x10,#0x1
71017ae928  add x9,sp,#0x60
71017ae92c  add x11,x9,#0x118
71017ae930  strb wzr,[x11, w10, UXTW ]
71017ae934  ldrb w11,[sp, #0x178]
71017ae938  str w10,[sp, #0x174]
71017ae93c  cbz w11,0x71017ae95c
71017ae940  add x10,x9,#0x119
71017ae944  mov w12,#0x89
71017ae948  mul w8,w8,w12
71017ae94c  and w11,w11,#0xff
71017ae950  eor w8,w8,w11
71017ae954  ldrb w11,[x10], #0x1
71017ae958  cbnz w11,0x71017ae948
71017ae95c  str w8,[sp, #0x170]
71017ae960  add x1,x9,#0x220
71017ae964  adrp x8,0x710509f000
71017ae968  add x8,x8,#0x808
71017ae96c  sub x21,x29,#0x90
71017ae970  sub x0,x29,#0x90
71017ae974  stp x8,x20,[x29, #-0x90]
71017ae978  stur x21,[x29, #-0x70]
71017ae97c  bl 0x71003cb050
71017ae980  ldur x0,[x29, #-0x70]
71017ae984  cmp x21,x0
71017ae988  b.eq 0x71017ae99c
71017ae98c  cbz x0,0x71017ae9a8
71017ae990  ldr x8,[x0]
71017ae994  ldr x8,[x8, #0x28]
71017ae998  b 0x71017ae9a4
71017ae99c  ldr x8,[x0]
71017ae9a0  ldr x8,[x8, #0x20]
71017ae9a4  blr x8
71017ae9a8  add x9,sp,#0x60
71017ae9ac  adrp x8,0x710509f000
71017ae9b0  add x8,x8,#0x850
71017ae9b4  add x1,x9,#0x280
71017ae9b8  sub x21,x29,#0x90
71017ae9bc  stur x21,[x29, #-0x70]
71017ae9c0  sub x0,x29,#0x90
71017ae9c4  stp x8,x20,[x29, #-0x90]
71017ae9c8  bl 0x71003cb050
71017ae9cc  ldur x0,[x29, #-0x70]
71017ae9d0  cmp x21,x0
71017ae9d4  b.eq 0x71017ae9e8
71017ae9d8  cbz x0,0x71017ae9f4
71017ae9dc  ldr x8,[x0]
71017ae9e0  ldr x8,[x8, #0x28]
71017ae9e4  b 0x71017ae9f0
71017ae9e8  ldr x8,[x0]
71017ae9ec  ldr x8,[x8, #0x20]
71017ae9f0  blr x8
71017ae9f4  mov w1,#0x4d0
71017ae9f8  mov w0,#0x10
71017ae9fc  add x22,x23,#0xa8
71017aea00  bl 0x710392e290
71017aea04  mov x21,x0
71017aea08  cbnz x0,0x71017aea54
71017aea0c  adrp x8,0x7105332000
71017aea10  ldr x0,[x8, #0xf00]
71017aea14  cbz x0,0x71017aea50
71017aea18  mov w8,#0x4d0
71017aea1c  stur wzr,[x29, #-0x60]
71017aea20  sub x1,x29,#0x60
71017aea24  stur x8,[x29, #-0x90]
71017aea28  ldr x8,[x0]
71017aea2c  ldr x8,[x8, #0x30]
71017aea30  sub x2,x29,#0x90
71017aea34  blr x8
71017aea38  tbz w0,#0x0,0x71017aea50
71017aea3c  mov w1,#0x4d0
71017aea40  mov w0,#0x10
71017aea44  bl 0x710392e290
71017aea48  mov x21,x0
71017aea4c  cbnz x0,0x71017aea54
71017aea50  mov x21,xzr
71017aea54  add x0,x21,#0x10
71017aea58  add x1,sp,#0x60
71017aea5c  str x22,[x21]
71017aea60  bl 0x71017ca070
71017aea64  adrp x8,0x71017ca000
71017aea68  add x8,x8,#0x360
71017aea6c  str x8,[x21, #0x4a0]
71017aea70  adrp x8,0x710143c000
71017aea74  add x8,x8,#0x880
71017aea78  str x8,[x21, #0x4a8]
71017aea7c  adrp x8,0x71017ca000
71017aea80  add x8,x8,#0x350
71017aea84  str x8,[x21, #0x488]
71017aea88  adrp x8,0x71017ca000
71017aea8c  add x8,x8,#0x380
71017aea90  str x8,[x21, #0x348]
71017aea94  adrp x8,0x71017ca000
71017aea98  add x8,x8,#0x390
71017aea9c  str x8,[x21, #0x358]
71017aeaa0  adrp x8,0x71017ca000
71017aeaa4  add x8,x8,#0x660
71017aeaa8  str x8,[x21, #0x368]
71017aeaac  adrp x8,0x71017ca000
71017aeab0  add x8,x8,#0x720
71017aeab4  str x8,[x21, #0x378]
71017aeab8  adrp x8,0x71017ca000
71017aeabc  add x8,x8,#0x970
71017aeac0  str x8,[x21, #0x388]
71017aeac4  adrp x8,0x71017ca000
71017aeac8  add x8,x8,#0xd50
71017aeacc  str x8,[x21, #0x398]
71017aead0  adrp x8,0x71017cb000
71017aead4  add x8,x8,#0x170
71017aead8  str x8,[x21, #0x3a8]
71017aeadc  adrp x8,0x71017cb000
71017aeae0  add x8,x8,#0x9d0
71017aeae4  str x8,[x21, #0x3b8]
71017aeae8  adrp x8,0x71017cc000
71017aeaec  add x8,x8,#0x7e0
71017aeaf0  str x8,[x21, #0x3c8]
71017aeaf4  adrp x8,0x71017cc000
71017aeaf8  add x8,x8,#0xaa0
71017aeafc  str x8,[x21, #0x3d8]
71017aeb00  adrp x8,0x71017cc000
71017aeb04  add x8,x8,#0xfb0
71017aeb08  add x9,x21,#0x43c
71017aeb0c  str x21,[x21, #0x320]
71017aeb10  str xzr,[x21, #0x340]
71017aeb14  str xzr,[x21, #0x338]
71017aeb18  str xzr,[x21, #0x480]
71017aeb1c  add x0,x21,#0x320
71017aeb20  str xzr,[x21, #0x478]
71017aeb24  str xzr,[x21, #0x470]
71017aeb28  str xzr,[x21, #0x468]
71017aeb2c  str xzr,[x21, #0x460]
71017aeb30  str xzr,[x21, #0x458]
71017aeb34  str x21,[x21, #0x498]
71017aeb38  str xzr,[x21, #0x490]
71017aeb3c  strh wzr,[x21, #0x4c8]
71017aeb40  str xzr,[x21, #0x4c0]
71017aeb44  str xzr,[x21, #0x4b8]
71017aeb48  str xzr,[x21, #0x4b0]
71017aeb4c  str xzr,[x21, #0x350]
71017aeb50  str xzr,[x21, #0x360]
71017aeb54  str xzr,[x21, #0x370]
71017aeb58  str xzr,[x21, #0x380]
71017aeb5c  str xzr,[x21, #0x390]
71017aeb60  str xzr,[x21, #0x3a0]
71017aeb64  str xzr,[x21, #0x3b0]
71017aeb68  str xzr,[x21, #0x3c0]
71017aeb6c  str xzr,[x21, #0x3d0]
71017aeb70  str xzr,[x21, #0x3e0]
71017aeb74  str x8,[x21, #0x3e8]
71017aeb78  add x8,x21,#0x3fc
71017aeb7c  str xzr,[x21, #0x3f0]
71017aeb80  str xzr,[x21, #0x330]
71017aeb84  str xzr,[x21, #0x328]
71017aeb88  str xzr,[x9]
71017aeb8c  add x9,x21,#0x434
71017aeb90  str xzr,[x9]
71017aeb94  add x9,x21,#0x42c
71017aeb98  str xzr,[x9]
71017aeb9c  add x9,x21,#0x424
71017aeba0  str xzr,[x9]
71017aeba4  add x9,x21,#0x41c
71017aeba8  str xzr,[x9]
71017aebac  add x9,x21,#0x414
71017aebb0  str xzr,[x9]
71017aebb4  add x9,x21,#0x40c
71017aebb8  str xzr,[x9]
71017aebbc  add x9,x21,#0x404
71017aebc0  str xzr,[x8]
71017aebc4  mov w8,#0xffffffff
71017aebc8  str wzr,[x21, #0x444]
71017aebcc  str xzr,[x9]
71017aebd0  str w8,[x21, #0x448]
71017aebd4  str wzr,[x21, #0x44c]
71017aebd8  str w8,[x21, #0x450]
71017aebdc  strb wzr,[x21, #0x454]
71017aebe0  str wzr,[x21, #0x3f8]
71017aebe4  bl 0x71017ccff0
71017aebe8  adrp x8,0x710593b000
71017aebec  ldr x8,[x8, #0x580]
71017aebf0  stur xzr,[x29, #-0x90]
71017aebf4  stur xzr,[x29, #-0x60]
71017aebf8  ldr x2,[x8]
71017aebfc  mov w8,#0x7300
71017aec00  ldrsw x8,[x2, x8, LSL #0x0]
71017aec04  cmn w8,#0x1
71017aec08  b.eq 0x71017aec24
71017aec0c  ldr x9,[x2, #0x72c0]
71017aec10  cmp x9,x8
71017aec14  b.ls 0x71017aefb8
71017aec18  mov w9,#0xcc0
71017aec1c  madd x8,x8,x9,x2
71017aec20  add x2,x8,#0xcc0
71017aec24  sub x0,x29,#0x90
71017aec28  sub x1,x29,#0x60
71017aec2c  bl 0x71039c6140
71017aec30  cbz w0,0x71017aec44
71017aec34  and x0,x0,#0xffffffff
71017aec38  bl 0x71039c26b0
71017aec3c  mov x8,xzr
71017aec40  b 0x71017aec48
71017aec44  ldur x8,[x29, #-0x60]
71017aec48  sub x8,x8,#0x80, LSL #12
71017aec4c  str x8,[x21, #0x4b8]
71017aec50  ldr x22,[x20]
71017aec54  str x21,[x20]
71017aec58  cbz x22,0x71017aed64
71017aec5c  ldr x0,[x22, #0x470]
71017aec60  cbz x0,0x71017aec6c
71017aec64  str x0,[x22, #0x478]
71017aec68  bl 0x710392eb40
71017aec6c  ldr x0,[x22, #0x458]
71017aec70  cbz x0,0x71017aec7c
71017aec74  str x0,[x22, #0x460]
71017aec78  bl 0x710392eb40
71017aec7c  ldr x0,[x22, #0x310]
71017aec80  add x8,x22,#0x2f0
71017aec84  cmp x8,x0
71017aec88  b.eq 0x71017aec9c
71017aec8c  cbz x0,0x71017aeca8
71017aec90  ldr x8,[x0]
71017aec94  ldr x8,[x8, #0x28]
71017aec98  b 0x71017aeca4
71017aec9c  ldr x8,[x0]
71017aeca0  ldr x8,[x8, #0x20]
71017aeca4  blr x8
71017aeca8  ldr x0,[x22, #0x2e0]
71017aecac  add x8,x22,#0x2c0
71017aecb0  cmp x8,x0
71017aecb4  b.eq 0x71017aecc8
71017aecb8  cbz x0,0x71017aecd4
71017aecbc  ldr x8,[x0]
71017aecc0  ldr x8,[x8, #0x28]
71017aecc4  b 0x71017aecd0
71017aecc8  ldr x8,[x0]
71017aeccc  ldr x8,[x8, #0x20]
71017aecd0  blr x8
71017aecd4  ldr x0,[x22, #0x2b0]
71017aecd8  add x8,x22,#0x290
71017aecdc  cmp x8,x0
71017aece0  b.eq 0x71017aecf4
71017aece4  cbz x0,0x71017aed00
71017aece8  ldr x8,[x0]
71017aecec  ldr x8,[x8, #0x28]
71017aecf0  b 0x71017aecfc
71017aecf4  ldr x8,[x0]
71017aecf8  ldr x8,[x8, #0x20]
71017aecfc  blr x8
71017aed00  ldr x0,[x22, #0x280]
71017aed04  add x8,x22,#0x260
71017aed08  cmp x8,x0
71017aed0c  b.eq 0x71017aed20
71017aed10  cbz x0,0x71017aed2c
71017aed14  ldr x8,[x0]
71017aed18  ldr x8,[x8, #0x28]
71017aed1c  b 0x71017aed28
71017aed20  ldr x8,[x0]
71017aed24  ldr x8,[x8, #0x20]
71017aed28  blr x8
71017aed2c  ldr x0,[x22, #0x250]
71017aed30  add x8,x22,#0x230
71017aed34  cmp x8,x0
71017aed38  b.eq 0x71017aed4c
71017aed3c  cbz x0,0x71017aed58
71017aed40  ldr x8,[x0]
71017aed44  ldr x8,[x8, #0x28]
71017aed48  b 0x71017aed54
71017aed4c  ldr x8,[x0]
71017aed50  ldr x8,[x8, #0x20]
71017aed54  blr x8
71017aed58  mov x0,x22
71017aed5c  bl 0x710392eb40
71017aed60  ldr x21,[x20]
71017aed64  mov w8,#0x1
71017aed68  mov x0,x21
71017aed6c  mov x1,x19
71017aed70  strb w8,[x21, #0x4c9]
71017aed74  bl 0x71017cff70
71017aed78  ldr w8,[x21, #0x444]
71017aed7c  cmp w8,#0x11
71017aed80  b.gt 0x71017aee18
71017aed84  add w8,w8,#0x1
71017aed88  cmp w8,#0x13
71017aed8c  str w8,[x21, #0x444]
71017aed90  b.cs 0x71017aefb8
71017aed94  add x8,x21,w8, SXTW  #0x2
71017aed98  mov w9,#0xa
71017aed9c  str w9,[x8, #0x3f8]
71017aeda0  ldr w8,[x21, #0x444]
71017aeda4  cmp w8,#0x11
71017aeda8  b.gt 0x71017aee18
71017aedac  add w8,w8,#0x1
71017aedb0  cmp w8,#0x13
71017aedb4  str w8,[x21, #0x444]
71017aedb8  b.cs 0x71017aefb8
71017aedbc  add x8,x21,w8, SXTW  #0x2
71017aedc0  orr w9,wzr,#0x7
71017aedc4  str w9,[x8, #0x3f8]
71017aedc8  ldr w8,[x21, #0x444]
71017aedcc  cmp w8,#0x11
71017aedd0  b.gt 0x71017aee18
71017aedd4  add w8,w8,#0x1
71017aedd8  cmp w8,#0x13
71017aeddc  str w8,[x21, #0x444]
71017aede0  b.cs 0x71017aefb8
71017aede4  add x8,x21,w8, SXTW  #0x2
71017aede8  orr w9,wzr,#0x6
71017aedec  str w9,[x8, #0x3f8]
71017aedf0  ldr w8,[x21, #0x444]
71017aedf4  cmp w8,#0x11
71017aedf8  b.gt 0x71017aee18
71017aedfc  add w8,w8,#0x1
71017aee00  cmp w8,#0x13
71017aee04  str w8,[x21, #0x444]
71017aee08  b.cs 0x71017aefb8
71017aee0c  add x8,x21,w8, SXTW  #0x2
71017aee10  orr w9,wzr,#0x3
71017aee14  str w9,[x8, #0x3f8]
71017aee18  add x0,x21,#0x320
71017aee1c  bl 0x71017ccff0
71017aee20  mov w8,#0x101
71017aee24  strh w8,[x23, #0xf0]
71017aee28  ldr x0,[sp, #0x360]
71017aee2c  add x8,sp,#0x60
71017aee30  add x8,x8,#0x2e0
71017aee34  cmp x8,x0
71017aee38  b.eq 0x71017aee4c
71017aee3c  cbz x0,0x71017aee58
71017aee40  ldr x8,[x0]
71017aee44  ldr x8,[x8, #0x28]
71017aee48  b 0x71017aee54
71017aee4c  ldr x8,[x0]
71017aee50  ldr x8,[x8, #0x20]
71017aee54  blr x8
71017aee58  ldr x0,[sp, #0x330]
71017aee5c  add x8,sp,#0x60
71017aee60  add x8,x8,#0x2b0
71017aee64  cmp x8,x0
71017aee68  b.eq 0x71017aee7c
71017aee6c  cbz x0,0x71017aee88
71017aee70  ldr x8,[x0]
71017aee74  ldr x8,[x8, #0x28]
71017aee78  b 0x71017aee84
71017aee7c  ldr x8,[x0]
71017aee80  ldr x8,[x8, #0x20]
71017aee84  blr x8
71017aee88  ldr x0,[sp, #0x300]
71017aee8c  add x8,sp,#0x60
71017aee90  add x8,x8,#0x280
71017aee94  cmp x8,x0
71017aee98  b.eq 0x71017aeeac
71017aee9c  cbz x0,0x71017aeeb8
71017aeea0  ldr x8,[x0]
71017aeea4  ldr x8,[x8, #0x28]
71017aeea8  b 0x71017aeeb4
71017aeeac  ldr x8,[x0]
71017aeeb0  ldr x8,[x8, #0x20]
71017aeeb4  blr x8
71017aeeb8  ldr x0,[sp, #0x2d0]
71017aeebc  add x8,sp,#0x60
71017aeec0  add x8,x8,#0x250
71017aeec4  cmp x8,x0
71017aeec8  b.eq 0x71017aeedc
71017aeecc  cbz x0,0x71017aeee8
71017aeed0  ldr x8,[x0]
71017aeed4  ldr x8,[x8, #0x28]
71017aeed8  b 0x71017aeee4
71017aeedc  ldr x8,[x0]
71017aeee0  ldr x8,[x8, #0x20]
71017aeee4  blr x8
71017aeee8  ldr x0,[sp, #0x2a0]
71017aeeec  add x8,sp,#0x60
71017aeef0  add x8,x8,#0x220
71017aeef4  cmp x8,x0
71017aeef8  b.eq 0x71017aef0c
71017aeefc  cbz x0,0x71017aef18
71017aef00  ldr x8,[x0]
71017aef04  ldr x8,[x8, #0x28]
71017aef08  b 0x71017aef14
71017aef0c  ldr x8,[x0]
71017aef10  ldr x8,[x8, #0x20]
71017aef14  blr x8
71017aef18  add sp,sp,#0x3b0
71017aef1c  ldp x29,x30,[sp, #0x50]
71017aef20  ldp x20,x19,[sp, #0x40]
71017aef24  ldp x22,x21,[sp, #0x30]
71017aef28  ldp x24,x23,[sp, #0x20]
71017aef2c  ldp x26,x25,[sp, #0x10]
71017aef30  ldp x28,x27,[sp], #0x60
71017aef34  ret
71017aef38  adrp x0,0x7105314000
71017aef3c  add x0,x0,#0x4d8
71017aef40  bl 0x71039c06b0
71017aef44  cbz w0,0x71017ad7a0
71017aef48  bl 0x7101764000
71017aef4c  adrp x0,0x7101763000
71017aef50  add x0,x0,#0xc40
71017aef54  adrp x1,0x71052c5000
71017aef58  add x1,x1,#0x180
71017aef5c  adrp x2,0x7104f17000
71017aef60  add x2,x2,#0x0
71017aef64  bl 0x71000001c0
71017aef68  adrp x0,0x7105314000
71017aef6c  add x0,x0,#0x4d8
71017aef70  bl 0x71039c06c0
71017aef74  b 0x71017ad7a0
71017aef78  adrp x0,0x7105314000
71017aef7c  add x0,x0,#0x4d8
71017aef80  bl 0x71039c06b0
71017aef84  cbz w0,0x71017ad7ec
71017aef88  bl 0x7101764000
71017aef8c  adrp x0,0x7101763000
71017aef90  add x0,x0,#0xc40
71017aef94  adrp x1,0x71052c5000
71017aef98  add x1,x1,#0x180
71017aef9c  adrp x2,0x7104f17000
71017aefa0  add x2,x2,#0x0
71017aefa4  bl 0x71000001c0
71017aefa8  adrp x0,0x7105314000
71017aefac  add x0,x0,#0x4d8
71017aefb0  bl 0x71039c06c0
71017aefb4  b 0x71017ad7ec
71017aefb8  bl 0x71039c2650
71017aefbc  bl 0x71039c0c00
71017aefc0  mov x0,x8
71017aefc4  bl 0x71039c1330
