// addr:      71019ad760
// offset:    0x19ad760
// name:      FUN_71019ad760
// mangled:   
// size:      2644

71019ad760  sub sp,sp,#0x70
71019ad764  str x25,[sp, #0x20]
71019ad768  stp x24,x23,[sp, #0x30]
71019ad76c  stp x22,x21,[sp, #0x40]
71019ad770  stp x20,x19,[sp, #0x50]
71019ad774  stp x29,x30,[sp, #0x60]
71019ad778  add x29,sp,#0x60
71019ad77c  mov x19,x0
71019ad780  mov w8,#0x1
71019ad784  cmp w1,#0x16
71019ad788  strb w8,[x0, #0x56c]
71019ad78c  b.hi 0x71019adacc
71019ad790  mov w8,w1
71019ad794  adrp x9,0x71044f6000
71019ad798  add x9,x9,#0xb04
71019ad79c  ldrsw x8,[x9, x8, LSL #0x2]
71019ad7a0  add x8,x8,x9
71019ad7a4  br x8
71019ad7a8  adrp x23,0x7105314000
71019ad7ac  add x23,x23,#0x4d8
71019ad7b0  ldarb w8,[x23]
71019ad7b4  tbz w8,#0x0,0x71019ae0b4
71019ad7b8  adrp x24,0x710532f000
71019ad7bc  ldr x22,[x24, #0x7b0]
71019ad7c0  ldr x20,[x22, #0x8]
71019ad7c4  mov w8,#0xa4c
71019ad7c8  movk w8,#0x1, LSL #16
71019ad7cc  ldrb w8,[x20, x8, LSL ]
71019ad7d0  cbz w8,0x71019ade04
71019ad7d4  adrp x8,0x71043be000
71019ad7d8  add x8,x8,#0x92b
71019ad7dc  str x8,[x19, #0x308]
71019ad7e0  mov w8,#0x100
71019ad7e4  strh w8,[x19, #0x320]
71019ad7e8  ldrsw x8,[x19, #0x2cc]
71019ad7ec  adrp x9,0x710424e000
71019ad7f0  add x9,x9,#0xdf4
71019ad7f4  str x9,[x19, #0x310]
71019ad7f8  cmp w8,#0x13
71019ad7fc  b.cs 0x71019ae05c
71019ad800  add x8,x19,x8, LSL #0x2
71019ad804  orr w9,wzr,#0xc
71019ad808  str w9,[x8, #0x280]
71019ad80c  ldr w8,[x19, #0x2cc]
71019ad810  cmp w8,#0x11
71019ad814  b.gt 0x71019ad834
71019ad818  add w8,w8,#0x1
71019ad81c  cmp w8,#0x13
71019ad820  str w8,[x19, #0x2cc]
71019ad824  b.cs 0x71019ae05c
71019ad828  add x8,x19,w8, SXTW  #0x2
71019ad82c  mov w9,#0x1
71019ad830  str w9,[x8, #0x280]
71019ad834  ldr x8,[x22, #0x8]
71019ad838  ldrh w20,[x8, #0xa20]
71019ad83c  adrp x8,0x710532f000
71019ad840  ldr x8,[x8, #0x730]
71019ad844  mov w1,w20
71019ad848  ldr x8,[x8, #0x8]
71019ad84c  ldr x0,[x8, #0x2c8]
71019ad850  bl 0x710324c970
71019ad854  tbz w0,#0x0,0x71019adde8
71019ad858  adrp x8,0x7105314000
71019ad85c  ldr x8,[x8, #0x510]
71019ad860  ldr x8,[x8]
71019ad864  ldrb w9,[x8]
71019ad868  cbnz w9,0x71019adc34
71019ad86c  ldr x8,[x8, #0x168]
71019ad870  ldr x8,[x8]
71019ad874  ldr x9,[x8]
71019ad878  add x8,x9,#0x58
71019ad87c  add x9,x9,#0xff8
71019ad880  ldrh w10,[x8]
71019ad884  cmp w10,w20
71019ad888  b.eq 0x71019adde8
71019ad88c  ldrh w10,[x8, #0x2]
71019ad890  cmp w10,w20
71019ad894  b.eq 0x71019adde8
71019ad898  ldrh w10,[x8, #0x4]
71019ad89c  cmp w10,w20
71019ad8a0  b.eq 0x71019adde8
71019ad8a4  ldrh w10,[x8, #0x6]
71019ad8a8  cmp w10,w20
71019ad8ac  b.eq 0x71019adde8
71019ad8b0  add x8,x8,#0x8
71019ad8b4  cmp x8,x9
71019ad8b8  b.ne 0x71019ad880
71019ad8bc  b 0x71019adc34
71019ad8c0  mov w8,#0x2
71019ad8c4  str w8,[x19, #0x300]
71019ad8c8  adrp x8,0x7105314000
71019ad8cc  add x8,x8,#0x4d8
71019ad8d0  ldarb w8,[x8]
71019ad8d4  tbz w8,#0x0,0x71019ae0f4
71019ad8d8  adrp x8,0x7105307000
71019ad8dc  ldr w1,[x8, #0xd50]
71019ad8e0  adrp x8,0x710532f000
71019ad8e4  ldr x20,[x8, #0x7b0]
71019ad8e8  ldr x0,[x20, #0x8]
71019ad8ec  bl 0x71032dc2a0
71019ad8f0  ldrb w8,[x0]
71019ad8f4  cmp w8,#0x0
71019ad8f8  cset w8,eq
71019ad8fc  strb w8,[x19, #0x56a]
71019ad900  ldrsw x8,[x19, #0x2cc]
71019ad904  cmp w8,#0x13
71019ad908  b.cs 0x71019ae05c
71019ad90c  add x8,x19,x8, LSL #0x2
71019ad910  str wzr,[x8, #0x280]
71019ad914  ldr x8,[x20, #0x8]
71019ad918  ldrh w20,[x8, #0xa20]
71019ad91c  adrp x8,0x710532f000
71019ad920  ldr x8,[x8, #0x730]
71019ad924  mov w1,w20
71019ad928  ldr x8,[x8, #0x8]
71019ad92c  ldr x0,[x8, #0x2c8]
71019ad930  bl 0x710324c970
71019ad934  tbz w0,#0x0,0x71019adde8
71019ad938  adrp x8,0x7105314000
71019ad93c  ldr x8,[x8, #0x510]
71019ad940  ldr x8,[x8]
71019ad944  ldrb w9,[x8]
71019ad948  cbnz w9,0x71019adc34
71019ad94c  ldr x8,[x8, #0x168]
71019ad950  ldr x8,[x8]
71019ad954  ldr x9,[x8]
71019ad958  add x8,x9,#0x58
71019ad95c  add x9,x9,#0xff8
71019ad960  ldrh w10,[x8]
71019ad964  cmp w10,w20
71019ad968  b.eq 0x71019adde8
71019ad96c  ldrh w10,[x8, #0x2]
71019ad970  cmp w10,w20
71019ad974  b.eq 0x71019adde8
71019ad978  ldrh w10,[x8, #0x4]
71019ad97c  cmp w10,w20
71019ad980  b.eq 0x71019adde8
71019ad984  ldrh w10,[x8, #0x6]
71019ad988  cmp w10,w20
71019ad98c  b.eq 0x71019adde8
71019ad990  add x8,x8,#0x8
71019ad994  cmp x8,x9
71019ad998  b.ne 0x71019ad960
71019ad99c  b 0x71019adc34
71019ad9a0  ldr x8,[x19, #0x20]
71019ad9a4  ldr x8,[x8]
71019ad9a8  ldr x8,[x8]
71019ad9ac  ldr x8,[x8, #0x600]
71019ad9b0  strb wzr,[x8, #0x4aa]
71019ad9b4  adrp x8,0x71042a3000
71019ad9b8  add x8,x8,#0x672
71019ad9bc  str x8,[x19, #0x308]
71019ad9c0  adrp x8,0x71042c4000
71019ad9c4  add x8,x8,#0x73e
71019ad9c8  str x8,[x19, #0x310]
71019ad9cc  ldrsw x8,[x19, #0x2cc]
71019ad9d0  cmp w8,#0x13
71019ad9d4  strh wzr,[x19, #0x320]
71019ad9d8  b.cs 0x71019ae05c
71019ad9dc  add x8,x19,x8, LSL #0x2
71019ad9e0  orr w9,wzr,#0x3
71019ad9e4  str w9,[x8, #0x280]
71019ad9e8  ldr w8,[x19, #0x2cc]
71019ad9ec  cmp w8,#0x11
71019ad9f0  b.gt 0x71019ada38
71019ad9f4  add w8,w8,#0x1
71019ad9f8  cmp w8,#0x13
71019ad9fc  str w8,[x19, #0x2cc]
71019ada00  b.cs 0x71019ae05c
71019ada04  add x8,x19,w8, SXTW  #0x2
71019ada08  mov w9,#0x1
71019ada0c  str w9,[x8, #0x280]
71019ada10  ldr w8,[x19, #0x2cc]
71019ada14  cmp w8,#0x11
71019ada18  b.gt 0x71019ada38
71019ada1c  add w8,w8,#0x1
71019ada20  cmp w8,#0x13
71019ada24  str w8,[x19, #0x2cc]
71019ada28  b.cs 0x71019ae05c
71019ada2c  add x8,x19,w8, SXTW  #0x2
71019ada30  mov w9,#0x2
71019ada34  str w9,[x8, #0x280]
71019ada38  adrp x8,0x710532f000
71019ada3c  ldr x8,[x8, #0x7b0]
71019ada40  ldr x8,[x8, #0x8]
71019ada44  ldrh w20,[x8, #0xa20]
71019ada48  adrp x8,0x710532f000
71019ada4c  ldr x8,[x8, #0x730]
71019ada50  mov w1,w20
71019ada54  ldr x8,[x8, #0x8]
71019ada58  ldr x0,[x8, #0x2c8]
71019ada5c  bl 0x710324c970
71019ada60  tbz w0,#0x0,0x71019addc0
71019ada64  adrp x8,0x7105314000
71019ada68  ldr x8,[x8, #0x510]
71019ada6c  ldr x8,[x8]
71019ada70  ldrb w9,[x8]
71019ada74  cbnz w9,0x71019adc34
71019ada78  ldr x8,[x8, #0x168]
71019ada7c  ldr x8,[x8]
71019ada80  ldr x9,[x8]
71019ada84  add x8,x9,#0x58
71019ada88  add x9,x9,#0xff8
71019ada8c  ldrh w10,[x8]
71019ada90  cmp w10,w20
71019ada94  b.eq 0x71019addc0
71019ada98  ldrh w10,[x8, #0x2]
71019ada9c  cmp w10,w20
71019adaa0  b.eq 0x71019addc0
71019adaa4  ldrh w10,[x8, #0x4]
71019adaa8  cmp w10,w20
71019adaac  b.eq 0x71019addc0
71019adab0  ldrh w10,[x8, #0x6]
71019adab4  cmp w10,w20
71019adab8  b.eq 0x71019addc0
71019adabc  add x8,x8,#0x8
71019adac0  cmp x8,x9
71019adac4  b.ne 0x71019ada8c
71019adac8  b 0x71019adc34
71019adacc  adrp x8,0x71042a3000
71019adad0  add x8,x8,#0x672
71019adad4  str x8,[x19, #0x308]
71019adad8  adrp x8,0x71042c4000
71019adadc  add x8,x8,#0x73e
71019adae0  str x8,[x19, #0x310]
71019adae4  ldrsw x8,[x19, #0x2cc]
71019adae8  cmp w8,#0x13
71019adaec  strh wzr,[x19, #0x320]
71019adaf0  b.cs 0x71019ae05c
71019adaf4  add x8,x19,x8, LSL #0x2
71019adaf8  orr w9,wzr,#0x3
71019adafc  str w9,[x8, #0x280]
71019adb00  ldr w8,[x19, #0x2cc]
71019adb04  cmp w8,#0x11
71019adb08  b.gt 0x71019adde8
71019adb0c  add w8,w8,#0x1
71019adb10  cmp w8,#0x13
71019adb14  str w8,[x19, #0x2cc]
71019adb18  b.cs 0x71019ae05c
71019adb1c  add x8,x19,w8, SXTW  #0x2
71019adb20  mov w9,#0x1
71019adb24  str w9,[x8, #0x280]
71019adb28  ldr w8,[x19, #0x2cc]
71019adb2c  cmp w8,#0x11
71019adb30  b.gt 0x71019adde8
71019adb34  add w8,w8,#0x1
71019adb38  cmp w8,#0x13
71019adb3c  str w8,[x19, #0x2cc]
71019adb40  b.cs 0x71019ae05c
71019adb44  add x8,x19,w8, SXTW  #0x2
71019adb48  mov w9,#0x2
71019adb4c  str w9,[x8, #0x280]
71019adb50  ldr w8,[x19, #0x2cc]
71019adb54  cmp w8,#0x11
71019adb58  b.gt 0x71019adde8
71019adb5c  add w8,w8,#0x1
71019adb60  cmp w8,#0x13
71019adb64  str w8,[x19, #0x2cc]
71019adb68  b.cs 0x71019ae05c
71019adb6c  add x8,x19,w8, SXTW  #0x2
71019adb70  orr w9,wzr,#0x18
71019adb74  b 0x71019adde4
71019adb78  adrp x8,0x71042a3000
71019adb7c  add x8,x8,#0x672
71019adb80  str x8,[x19, #0x308]
71019adb84  adrp x8,0x71042c4000
71019adb88  add x8,x8,#0x73e
71019adb8c  str x8,[x19, #0x310]
71019adb90  mov w8,#0x2
71019adb94  strh wzr,[x19, #0x320]
71019adb98  str w8,[x19, #0x300]
71019adb9c  adrp x8,0x7105314000
71019adba0  add x8,x8,#0x4d8
71019adba4  ldarb w8,[x8]
71019adba8  tbz w8,#0x0,0x71019ae134
71019adbac  adrp x8,0x7105307000
71019adbb0  ldr w1,[x8, #0xd50]
71019adbb4  adrp x8,0x710532f000
71019adbb8  ldr x20,[x8, #0x7b0]
71019adbbc  ldr x0,[x20, #0x8]
71019adbc0  bl 0x71032dc2a0
71019adbc4  ldrb w8,[x0]
71019adbc8  cmp w8,#0x0
71019adbcc  cset w8,eq
71019adbd0  strb w8,[x19, #0x56a]
71019adbd4  ldr x8,[x19, #0x20]
71019adbd8  ldr x8,[x8]
71019adbdc  ldr x8,[x8]
71019adbe0  ldr x8,[x8, #0x600]
71019adbe4  strb wzr,[x8, #0x4aa]
71019adbe8  ldrsw x8,[x19, #0x2cc]
71019adbec  cmp w8,#0x13
71019adbf0  b.cs 0x71019ae05c
71019adbf4  add x8,x19,x8, LSL #0x2
71019adbf8  str wzr,[x8, #0x280]
71019adbfc  ldr x8,[x20, #0x8]
71019adc00  ldrh w20,[x8, #0xa20]
71019adc04  adrp x8,0x710532f000
71019adc08  ldr x8,[x8, #0x730]
71019adc0c  mov w1,w20
71019adc10  ldr x8,[x8, #0x8]
71019adc14  ldr x0,[x8, #0x2c8]
71019adc18  bl 0x710324c970
71019adc1c  tbz w0,#0x0,0x71019adde8
71019adc20  adrp x8,0x7105314000
71019adc24  ldr x8,[x8, #0x510]
71019adc28  ldr x8,[x8]
71019adc2c  ldrb w9,[x8]
71019adc30  cbz w9,0x71019adef4
71019adc34  ldr w8,[x19, #0x2cc]
71019adc38  cmp w8,#0x11
71019adc3c  b.gt 0x71019adc5c
71019adc40  add w8,w8,#0x1
71019adc44  str w8,[x19, #0x2cc]
71019adc48  cmp w8,#0x13
71019adc4c  b.cs 0x71019ae05c
71019adc50  add x8,x19,w8, SXTW  #0x2
71019adc54  mov w9,#0x1b
71019adc58  str w9,[x8, #0x280]
71019adc5c  strh w20,[x19, #0x304]
71019adc60  strb wzr,[x19, #0x56c]
71019adc64  b 0x71019adde8
71019adc68  adrp x8,0x71042a3000
71019adc6c  add x8,x8,#0x672
71019adc70  str x8,[x19, #0x308]
71019adc74  adrp x8,0x71042c4000
71019adc78  add x8,x8,#0x73e
71019adc7c  str x8,[x19, #0x310]
71019adc80  ldrsw x8,[x19, #0x2cc]
71019adc84  cmp w8,#0x13
71019adc88  strh wzr,[x19, #0x320]
71019adc8c  b.cs 0x71019ae05c
71019adc90  add x8,x19,x8, LSL #0x2
71019adc94  orr w9,wzr,#0x3
71019adc98  str w9,[x8, #0x280]
71019adc9c  ldr w8,[x19, #0x2cc]
71019adca0  cmp w8,#0x11
71019adca4  b.gt 0x71019adde8
71019adca8  add w8,w8,#0x1
71019adcac  cmp w8,#0x13
71019adcb0  str w8,[x19, #0x2cc]
71019adcb4  b.cs 0x71019ae05c
71019adcb8  add x8,x19,w8, SXTW  #0x2
71019adcbc  mov w9,#0x1
71019adcc0  str w9,[x8, #0x280]
71019adcc4  ldr w8,[x19, #0x2cc]
71019adcc8  cmp w8,#0x11
71019adccc  b.gt 0x71019adde8
71019adcd0  add w8,w8,#0x1
71019adcd4  cmp w8,#0x13
71019adcd8  str w8,[x19, #0x2cc]
71019adcdc  b.cs 0x71019ae05c
71019adce0  add x8,x19,w8, SXTW  #0x2
71019adce4  mov w9,#0x2
71019adce8  str w9,[x8, #0x280]
71019adcec  ldr w8,[x19, #0x2cc]
71019adcf0  cmp w8,#0x11
71019adcf4  b.gt 0x71019adde8
71019adcf8  add w8,w8,#0x1
71019adcfc  cmp w8,#0x13
71019add00  str w8,[x19, #0x2cc]
71019add04  b.cs 0x71019ae05c
71019add08  add x8,x19,w8, SXTW  #0x2
71019add0c  mov w9,#0x14
71019add10  b 0x71019adde4
71019add14  adrp x8,0x71042a3000
71019add18  add x8,x8,#0x672
71019add1c  str x8,[x19, #0x308]
71019add20  adrp x8,0x71042c4000
71019add24  add x8,x8,#0x73e
71019add28  str x8,[x19, #0x310]
71019add2c  ldrsw x8,[x19, #0x2cc]
71019add30  cmp w8,#0x13
71019add34  strh wzr,[x19, #0x320]
71019add38  b.cs 0x71019ae05c
71019add3c  add x8,x19,x8, LSL #0x2
71019add40  orr w9,wzr,#0x3
71019add44  str w9,[x8, #0x280]
71019add48  ldr w8,[x19, #0x2cc]
71019add4c  cmp w8,#0x11
71019add50  b.gt 0x71019adde8
71019add54  add w8,w8,#0x1
71019add58  cmp w8,#0x13
71019add5c  str w8,[x19, #0x2cc]
71019add60  b.cs 0x71019ae05c
71019add64  add x8,x19,w8, SXTW  #0x2
71019add68  mov w9,#0x1
71019add6c  str w9,[x8, #0x280]
71019add70  ldr w8,[x19, #0x2cc]
71019add74  cmp w8,#0x11
71019add78  b.gt 0x71019adde8
71019add7c  add w8,w8,#0x1
71019add80  cmp w8,#0x13
71019add84  str w8,[x19, #0x2cc]
71019add88  b.cs 0x71019ae05c
71019add8c  add x8,x19,w8, SXTW  #0x2
71019add90  mov w9,#0x2
71019add94  str w9,[x8, #0x280]
71019add98  ldr w8,[x19, #0x2cc]
71019add9c  cmp w8,#0x11
71019adda0  b.gt 0x71019adde8
71019adda4  add w8,w8,#0x1
71019adda8  cmp w8,#0x13
71019addac  str w8,[x19, #0x2cc]
71019addb0  b.cs 0x71019ae05c
71019addb4  add x8,x19,w8, SXTW  #0x2
71019addb8  orr w9,wzr,#0x7
71019addbc  b 0x71019adde4
71019addc0  ldr w8,[x19, #0x2cc]
71019addc4  cmp w8,#0x11
71019addc8  b.gt 0x71019adde8
71019addcc  add w8,w8,#0x1
71019addd0  cmp w8,#0x13
71019addd4  str w8,[x19, #0x2cc]
71019addd8  b.cs 0x71019ae05c
71019adddc  add x8,x19,w8, SXTW  #0x2
71019adde0  orr w9,wzr,#0x1e
71019adde4  str w9,[x8, #0x280]
71019adde8  ldp x29,x30,[sp, #0x60]
71019addec  ldr x25,[sp, #0x20]
71019addf0  ldp x20,x19,[sp, #0x50]
71019addf4  ldp x22,x21,[sp, #0x40]
71019addf8  ldp x24,x23,[sp, #0x30]
71019addfc  add sp,sp,#0x70
71019ade00  ret
71019ade04  adrp x25,0x7105307000
71019ade08  ldr w21,[x25, #0xd50]
71019ade0c  mov x0,x20
71019ade10  mov w1,w21
71019ade14  bl 0x71032df050
71019ade18  ldrh w8,[x0, #0x10]
71019ade1c  tbnz w8,#0x1,0x71019adf48
71019ade20  lsr w8,w8,#0x6
71019ade24  and w8,w8,#0x2
71019ade28  str w8,[x19, #0x300]
71019ade2c  ldarb w8,[x23]
71019ade30  tbz w8,#0x0,0x71019ae174
71019ade34  ldr x20,[x24, #0x7b0]
71019ade38  ldr w1,[x25, #0xd50]
71019ade3c  ldr x0,[x20, #0x8]
71019ade40  bl 0x71032dc2a0
71019ade44  ldrb w8,[x0]
71019ade48  cmp w8,#0x0
71019ade4c  cset w8,eq
71019ade50  strb w8,[x19, #0x56a]
71019ade54  ldrsw x8,[x19, #0x2cc]
71019ade58  cmp w8,#0x13
71019ade5c  b.cs 0x71019ae05c
71019ade60  add x8,x19,x8, LSL #0x2
71019ade64  str wzr,[x8, #0x280]
71019ade68  ldr x8,[x20, #0x8]
71019ade6c  ldrh w20,[x8, #0xa20]
71019ade70  adrp x8,0x710532f000
71019ade74  ldr x8,[x8, #0x730]
71019ade78  mov w1,w20
71019ade7c  ldr x8,[x8, #0x8]
71019ade80  ldr x0,[x8, #0x2c8]
71019ade84  bl 0x710324c970
71019ade88  tbz w0,#0x0,0x71019adde8
71019ade8c  adrp x8,0x7105314000
71019ade90  ldr x8,[x8, #0x510]
71019ade94  ldr x8,[x8]
71019ade98  ldrb w9,[x8]
71019ade9c  cbnz w9,0x71019adc34
71019adea0  ldr x8,[x8, #0x168]
71019adea4  ldr x8,[x8]
71019adea8  ldr x9,[x8]
71019adeac  add x8,x9,#0x58
71019adeb0  add x9,x9,#0xff8
71019adeb4  ldrh w10,[x8]
71019adeb8  cmp w10,w20
71019adebc  b.eq 0x71019adde8
71019adec0  ldrh w10,[x8, #0x2]
71019adec4  cmp w10,w20
71019adec8  b.eq 0x71019adde8
71019adecc  ldrh w10,[x8, #0x4]
71019aded0  cmp w10,w20
71019aded4  b.eq 0x71019adde8
71019aded8  ldrh w10,[x8, #0x6]
71019adedc  cmp w10,w20
71019adee0  b.eq 0x71019adde8
71019adee4  add x8,x8,#0x8
71019adee8  cmp x8,x9
71019adeec  b.ne 0x71019adeb4
71019adef0  b 0x71019adc34
71019adef4  ldr x8,[x8, #0x168]
71019adef8  ldr x8,[x8]
71019adefc  ldr x9,[x8]
71019adf00  add x8,x9,#0x58
71019adf04  add x9,x9,#0xff8
71019adf08  ldrh w10,[x8]
71019adf0c  cmp w10,w20
71019adf10  b.eq 0x71019adde8
71019adf14  ldrh w10,[x8, #0x2]
71019adf18  cmp w10,w20
71019adf1c  b.eq 0x71019adde8
71019adf20  ldrh w10,[x8, #0x4]
71019adf24  cmp w10,w20
71019adf28  b.eq 0x71019adde8
71019adf2c  ldrh w10,[x8, #0x6]
71019adf30  cmp w10,w20
71019adf34  b.eq 0x71019adde8
71019adf38  add x8,x8,#0x8
71019adf3c  cmp x8,x9
71019adf40  b.ne 0x71019adf08
71019adf44  b 0x71019adc34
71019adf48  adrp x8,0x7105314000
71019adf4c  ldr x23,[x8, #0x510]
71019adf50  ldr x8,[x23]
71019adf54  ldr x9,[x8, #0x168]
71019adf58  ldrb w10,[x8]
71019adf5c  ldr x8,[x9]
71019adf60  cbz w10,0x71019adf74
71019adf64  add x24,x8,#0x8
71019adf68  ldrb w8,[x24, #0x52]
71019adf6c  cbnz w8,0x71019adf80
71019adf70  b 0x71019adff4
71019adf74  ldr x24,[x8]
71019adf78  ldrb w8,[x24, #0x52]
71019adf7c  cbz w8,0x71019adff4
71019adf80  mov x0,sp
71019adf84  mov x1,x20
71019adf88  mov w2,w21
71019adf8c  bl 0x71032e2e70
71019adf90  ldrb w8,[x24, #0x3b]
71019adf94  ldrb w9,[sp, #0xa]
71019adf98  cmp w8,w9
71019adf9c  b.ne 0x71019adfe4
71019adfa0  cbz w8,0x71019adfcc
71019adfa4  mov x9,xzr
71019adfa8  add x10,x24,#0x31
71019adfac  mov x11,sp
71019adfb0  ldrb w12,[x10, x9, LSL ]
71019adfb4  ldrb w13,[x11, x9, LSL ]
71019adfb8  cmp w12,w13
71019adfbc  b.ne 0x71019adfe4
71019adfc0  add x9,x9,#0x1
71019adfc4  cmp x9,x8
71019adfc8  b.cc 0x71019adfb0
71019adfcc  ldr w8,[x19, #0x2cc]
71019adfd0  cmp w8,#0x13
71019adfd4  b.cs 0x71019ae05c
71019adfd8  add x21,x19,#0x2cc
71019adfdc  mov w9,#0xa
71019adfe0  b 0x71019ae008
71019adfe4  ldr w8,[x19, #0x2cc]
71019adfe8  cmp w8,#0x13
71019adfec  b.cc 0x71019ae000
71019adff0  b 0x71019ae05c
71019adff4  ldr w8,[x19, #0x2cc]
71019adff8  cmp w8,#0x12
71019adffc  b.hi 0x71019ae05c
71019ae000  add x21,x19,#0x2cc
71019ae004  mov w9,#0x9
71019ae008  add x8,x19,w8, SXTW  #0x2
71019ae00c  str w9,[x8, #0x280]
71019ae010  ldr x8,[x22, #0x8]
71019ae014  ldrh w20,[x8, #0xa20]
71019ae018  adrp x8,0x710532f000
71019ae01c  ldr x8,[x8, #0x730]
71019ae020  mov w1,w20
71019ae024  ldr x8,[x8, #0x8]
71019ae028  ldr x0,[x8, #0x2c8]
71019ae02c  bl 0x710324c970
71019ae030  tbz w0,#0x0,0x71019adde8
71019ae034  ldr x8,[x23]
71019ae038  ldrb w9,[x8]
71019ae03c  cbz w9,0x71019ae060
71019ae040  ldr w8,[x21]
71019ae044  cmp w8,#0x11
71019ae048  b.gt 0x71019adc5c
71019ae04c  add w8,w8,#0x1
71019ae050  str w8,[x21]
71019ae054  cmp w8,#0x13
71019ae058  b.cc 0x71019adc50
71019ae05c  bl 0x71039c2650
71019ae060  ldr x8,[x8, #0x168]
71019ae064  ldr x8,[x8]
71019ae068  ldr x9,[x8]
71019ae06c  add x8,x9,#0x58
71019ae070  add x9,x9,#0xff8
71019ae074  ldrh w10,[x8]
71019ae078  cmp w10,w20
71019ae07c  b.eq 0x71019adde8
71019ae080  ldrh w10,[x8, #0x2]
71019ae084  cmp w10,w20
71019ae088  b.eq 0x71019adde8
71019ae08c  ldrh w10,[x8, #0x4]
71019ae090  cmp w10,w20
71019ae094  b.eq 0x71019adde8
71019ae098  ldrh w10,[x8, #0x6]
71019ae09c  cmp w10,w20
71019ae0a0  b.eq 0x71019adde8
71019ae0a4  add x8,x8,#0x8
71019ae0a8  cmp x8,x9
71019ae0ac  b.ne 0x71019ae074
71019ae0b0  b 0x71019ae040
71019ae0b4  adrp x0,0x7105314000
71019ae0b8  add x0,x0,#0x4d8
71019ae0bc  bl 0x71039c06b0
71019ae0c0  cbz w0,0x71019ad7b8
71019ae0c4  bl 0x7101764000
71019ae0c8  adrp x0,0x7101763000
71019ae0cc  add x0,x0,#0xc40
71019ae0d0  adrp x1,0x71052c5000
71019ae0d4  add x1,x1,#0x180
71019ae0d8  adrp x2,0x7104f17000
71019ae0dc  add x2,x2,#0x0
71019ae0e0  bl 0x71000001c0
71019ae0e4  adrp x0,0x7105314000
71019ae0e8  add x0,x0,#0x4d8
71019ae0ec  bl 0x71039c06c0
71019ae0f0  b 0x71019ad7b8
71019ae0f4  adrp x0,0x7105314000
71019ae0f8  add x0,x0,#0x4d8
71019ae0fc  bl 0x71039c06b0
71019ae100  cbz w0,0x71019ad8d8
71019ae104  bl 0x7101764000
71019ae108  adrp x0,0x7101763000
71019ae10c  add x0,x0,#0xc40
71019ae110  adrp x1,0x71052c5000
71019ae114  add x1,x1,#0x180
71019ae118  adrp x2,0x7104f17000
71019ae11c  add x2,x2,#0x0
71019ae120  bl 0x71000001c0
71019ae124  adrp x0,0x7105314000
71019ae128  add x0,x0,#0x4d8
71019ae12c  bl 0x71039c06c0
71019ae130  b 0x71019ad8d8
71019ae134  adrp x0,0x7105314000
71019ae138  add x0,x0,#0x4d8
71019ae13c  bl 0x71039c06b0
71019ae140  cbz w0,0x71019adbac
71019ae144  bl 0x7101764000
71019ae148  adrp x0,0x7101763000
71019ae14c  add x0,x0,#0xc40
71019ae150  adrp x1,0x71052c5000
71019ae154  add x1,x1,#0x180
71019ae158  adrp x2,0x7104f17000
71019ae15c  add x2,x2,#0x0
71019ae160  bl 0x71000001c0
71019ae164  adrp x0,0x7105314000
71019ae168  add x0,x0,#0x4d8
71019ae16c  bl 0x71039c06c0
71019ae170  b 0x71019adbac
71019ae174  adrp x0,0x7105314000
71019ae178  add x0,x0,#0x4d8
71019ae17c  bl 0x71039c06b0
71019ae180  cbz w0,0x71019ade34
71019ae184  bl 0x7101764000
71019ae188  adrp x0,0x7101763000
71019ae18c  add x0,x0,#0xc40
71019ae190  adrp x1,0x71052c5000
71019ae194  add x1,x1,#0x180
71019ae198  adrp x2,0x7104f17000
71019ae19c  add x2,x2,#0x0
71019ae1a0  bl 0x71000001c0
71019ae1a4  adrp x0,0x7105314000
71019ae1a8  add x0,x0,#0x4d8
71019ae1ac  bl 0x71039c06c0
71019ae1b0  b 0x71019ade34
