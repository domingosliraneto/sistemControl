                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.6 #9917 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module controleNivel
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _Tit2
                                     12 	.globl _Tit1
                                     13 	.globl _setLCD4
                                     14 	.globl _main
                                     15 	.globl _ajustPID
                                     16 	.globl _ajustPIDSerial
                                     17 	.globl _ext_1
                                     18 	.globl _int2Ser
                                     19 	.globl _char2Ser
                                     20 	.globl _int2ascii
                                     21 	.globl _algs2ser
                                     22 	.globl _serial
                                     23 	.globl _inic
                                     24 	.globl _iniLCD4
                                     25 	.globl _char2LCD
                                     26 	.globl _wrLCD4
                                     27 	.globl _wrLCD8
                                     28 	.globl _timer_0
                                     29 	.globl _ext_0
                                     30 	.globl _TrigPin
                                     31 	.globl _RW
                                     32 	.globl _DC
                                     33 	.globl _adcDt
                                     34 	.globl _adcCk
                                     35 	.globl _adcCS
                                     36 	.globl _lcdCS
                                     37 	.globl _S2D2
                                     38 	.globl _S1D1
                                     39 	.globl _SwInt
                                     40 	.globl _TxBip
                                     41 	.globl _RxLed
                                     42 	.globl _CY
                                     43 	.globl _AC
                                     44 	.globl _F0
                                     45 	.globl _RS1
                                     46 	.globl _RS0
                                     47 	.globl _OV
                                     48 	.globl _F1
                                     49 	.globl _P
                                     50 	.globl _PS
                                     51 	.globl _PT1
                                     52 	.globl _PX1
                                     53 	.globl _PT0
                                     54 	.globl _PX0
                                     55 	.globl _RD
                                     56 	.globl _WR
                                     57 	.globl _T1
                                     58 	.globl _T0
                                     59 	.globl _INT1
                                     60 	.globl _INT0
                                     61 	.globl _TXD
                                     62 	.globl _RXD
                                     63 	.globl _P3_7
                                     64 	.globl _P3_6
                                     65 	.globl _P3_5
                                     66 	.globl _P3_4
                                     67 	.globl _P3_3
                                     68 	.globl _P3_2
                                     69 	.globl _P3_1
                                     70 	.globl _P3_0
                                     71 	.globl _EA
                                     72 	.globl _ES
                                     73 	.globl _ET1
                                     74 	.globl _EX1
                                     75 	.globl _ET0
                                     76 	.globl _EX0
                                     77 	.globl _P2_7
                                     78 	.globl _P2_6
                                     79 	.globl _P2_5
                                     80 	.globl _P2_4
                                     81 	.globl _P2_3
                                     82 	.globl _P2_2
                                     83 	.globl _P2_1
                                     84 	.globl _P2_0
                                     85 	.globl _SM0
                                     86 	.globl _SM1
                                     87 	.globl _SM2
                                     88 	.globl _REN
                                     89 	.globl _TB8
                                     90 	.globl _RB8
                                     91 	.globl _TI
                                     92 	.globl _RI
                                     93 	.globl _P1_7
                                     94 	.globl _P1_6
                                     95 	.globl _P1_5
                                     96 	.globl _P1_4
                                     97 	.globl _P1_3
                                     98 	.globl _P1_2
                                     99 	.globl _P1_1
                                    100 	.globl _P1_0
                                    101 	.globl _TF1
                                    102 	.globl _TR1
                                    103 	.globl _TF0
                                    104 	.globl _TR0
                                    105 	.globl _IE1
                                    106 	.globl _IT1
                                    107 	.globl _IE0
                                    108 	.globl _IT0
                                    109 	.globl _P0_7
                                    110 	.globl _P0_6
                                    111 	.globl _P0_5
                                    112 	.globl _P0_4
                                    113 	.globl _P0_3
                                    114 	.globl _P0_2
                                    115 	.globl _P0_1
                                    116 	.globl _P0_0
                                    117 	.globl _LCD
                                    118 	.globl _CLKREG
                                    119 	.globl _B
                                    120 	.globl _ACC
                                    121 	.globl _PSW
                                    122 	.globl _IP
                                    123 	.globl _P3
                                    124 	.globl _IE
                                    125 	.globl _P2
                                    126 	.globl _SBUF
                                    127 	.globl _SCON
                                    128 	.globl _P1
                                    129 	.globl _TH1
                                    130 	.globl _TH0
                                    131 	.globl _TL1
                                    132 	.globl _TL0
                                    133 	.globl _TMOD
                                    134 	.globl _TCON
                                    135 	.globl _PCON
                                    136 	.globl _DPH
                                    137 	.globl _DPL
                                    138 	.globl _SP
                                    139 	.globl _P0
                                    140 	.globl _sensor
                                    141 	.globl _wrLCD4_PARM_1
                                    142 	.globl _wrLCD8_PARM_1
                                    143 	.globl _useBuf
                                    144 	.globl _Ch01
                                    145 	.globl _ad2On
                                    146 	.globl _ad1On
                                    147 	.globl _Txing
                                    148 	.globl _TxFlag
                                    149 	.globl _RxFlag
                                    150 	.globl _tip
                                    151 	.globl _bip
                                    152 	.globl _som
                                    153 	.globl _umSeg
                                    154 	.globl _malha
                                    155 	.globl _pwm
                                    156 	.globl _pid
                                    157 	.globl _TrigCont
                                    158 	.globl _Echo
                                    159 	.globl _int2Ser_PARM_3
                                    160 	.globl _int2Ser_PARM_2
                                    161 	.globl _char2Ser_PARM_3
                                    162 	.globl _char2Ser_PARM_2
                                    163 	.globl _algs2ser_PARM_3
                                    164 	.globl _algs2ser_PARM_2
                                    165 	.globl _char2LCD_PARM_3
                                    166 	.globl _char2LCD_PARM_2
                                    167 	.globl _algs
                                    168 	.globl _TxB
                                    169 	.globl _RxB
                                    170 	.globl _wTxB
                                    171 	.globl _rTxB
                                    172 	.globl _wRxB
                                    173 	.globl _rRxB
                                    174 	.globl _TxByte
                                    175 	.globl _RxByte
                                    176 	.globl _freq
                                    177 	.globl _x50us
                                    178 	.globl _cnt200
                                    179 	.globl _cnt100
                                    180 	.globl _disp2
                                    181 	.globl _disp1
                                    182 	.globl _cont
                                    183 	.globl _S2
                                    184 	.globl _S1
                                    185 	.globl _delay50
                                    186 	.globl _RTproc_1
                                    187 	.globl _RTproc_2
                                    188 ;--------------------------------------------------------
                                    189 ; special function registers
                                    190 ;--------------------------------------------------------
                                    191 	.area RSEG    (ABS,DATA)
      000000                        192 	.org 0x0000
                           000080   193 G$P0$0$0 == 0x0080
                           000080   194 _P0	=	0x0080
                           000081   195 G$SP$0$0 == 0x0081
                           000081   196 _SP	=	0x0081
                           000082   197 G$DPL$0$0 == 0x0082
                           000082   198 _DPL	=	0x0082
                           000083   199 G$DPH$0$0 == 0x0083
                           000083   200 _DPH	=	0x0083
                           000087   201 G$PCON$0$0 == 0x0087
                           000087   202 _PCON	=	0x0087
                           000088   203 G$TCON$0$0 == 0x0088
                           000088   204 _TCON	=	0x0088
                           000089   205 G$TMOD$0$0 == 0x0089
                           000089   206 _TMOD	=	0x0089
                           00008A   207 G$TL0$0$0 == 0x008a
                           00008A   208 _TL0	=	0x008a
                           00008B   209 G$TL1$0$0 == 0x008b
                           00008B   210 _TL1	=	0x008b
                           00008C   211 G$TH0$0$0 == 0x008c
                           00008C   212 _TH0	=	0x008c
                           00008D   213 G$TH1$0$0 == 0x008d
                           00008D   214 _TH1	=	0x008d
                           000090   215 G$P1$0$0 == 0x0090
                           000090   216 _P1	=	0x0090
                           000098   217 G$SCON$0$0 == 0x0098
                           000098   218 _SCON	=	0x0098
                           000099   219 G$SBUF$0$0 == 0x0099
                           000099   220 _SBUF	=	0x0099
                           0000A0   221 G$P2$0$0 == 0x00a0
                           0000A0   222 _P2	=	0x00a0
                           0000A8   223 G$IE$0$0 == 0x00a8
                           0000A8   224 _IE	=	0x00a8
                           0000B0   225 G$P3$0$0 == 0x00b0
                           0000B0   226 _P3	=	0x00b0
                           0000B8   227 G$IP$0$0 == 0x00b8
                           0000B8   228 _IP	=	0x00b8
                           0000D0   229 G$PSW$0$0 == 0x00d0
                           0000D0   230 _PSW	=	0x00d0
                           0000E0   231 G$ACC$0$0 == 0x00e0
                           0000E0   232 _ACC	=	0x00e0
                           0000F0   233 G$B$0$0 == 0x00f0
                           0000F0   234 _B	=	0x00f0
                           00008F   235 G$CLKREG$0$0 == 0x008f
                           00008F   236 _CLKREG	=	0x008f
                           000090   237 G$LCD$0$0 == 0x0090
                           000090   238 _LCD	=	0x0090
                                    239 ;--------------------------------------------------------
                                    240 ; special function bits
                                    241 ;--------------------------------------------------------
                                    242 	.area RSEG    (ABS,DATA)
      000000                        243 	.org 0x0000
                           000080   244 G$P0_0$0$0 == 0x0080
                           000080   245 _P0_0	=	0x0080
                           000081   246 G$P0_1$0$0 == 0x0081
                           000081   247 _P0_1	=	0x0081
                           000082   248 G$P0_2$0$0 == 0x0082
                           000082   249 _P0_2	=	0x0082
                           000083   250 G$P0_3$0$0 == 0x0083
                           000083   251 _P0_3	=	0x0083
                           000084   252 G$P0_4$0$0 == 0x0084
                           000084   253 _P0_4	=	0x0084
                           000085   254 G$P0_5$0$0 == 0x0085
                           000085   255 _P0_5	=	0x0085
                           000086   256 G$P0_6$0$0 == 0x0086
                           000086   257 _P0_6	=	0x0086
                           000087   258 G$P0_7$0$0 == 0x0087
                           000087   259 _P0_7	=	0x0087
                           000088   260 G$IT0$0$0 == 0x0088
                           000088   261 _IT0	=	0x0088
                           000089   262 G$IE0$0$0 == 0x0089
                           000089   263 _IE0	=	0x0089
                           00008A   264 G$IT1$0$0 == 0x008a
                           00008A   265 _IT1	=	0x008a
                           00008B   266 G$IE1$0$0 == 0x008b
                           00008B   267 _IE1	=	0x008b
                           00008C   268 G$TR0$0$0 == 0x008c
                           00008C   269 _TR0	=	0x008c
                           00008D   270 G$TF0$0$0 == 0x008d
                           00008D   271 _TF0	=	0x008d
                           00008E   272 G$TR1$0$0 == 0x008e
                           00008E   273 _TR1	=	0x008e
                           00008F   274 G$TF1$0$0 == 0x008f
                           00008F   275 _TF1	=	0x008f
                           000090   276 G$P1_0$0$0 == 0x0090
                           000090   277 _P1_0	=	0x0090
                           000091   278 G$P1_1$0$0 == 0x0091
                           000091   279 _P1_1	=	0x0091
                           000092   280 G$P1_2$0$0 == 0x0092
                           000092   281 _P1_2	=	0x0092
                           000093   282 G$P1_3$0$0 == 0x0093
                           000093   283 _P1_3	=	0x0093
                           000094   284 G$P1_4$0$0 == 0x0094
                           000094   285 _P1_4	=	0x0094
                           000095   286 G$P1_5$0$0 == 0x0095
                           000095   287 _P1_5	=	0x0095
                           000096   288 G$P1_6$0$0 == 0x0096
                           000096   289 _P1_6	=	0x0096
                           000097   290 G$P1_7$0$0 == 0x0097
                           000097   291 _P1_7	=	0x0097
                           000098   292 G$RI$0$0 == 0x0098
                           000098   293 _RI	=	0x0098
                           000099   294 G$TI$0$0 == 0x0099
                           000099   295 _TI	=	0x0099
                           00009A   296 G$RB8$0$0 == 0x009a
                           00009A   297 _RB8	=	0x009a
                           00009B   298 G$TB8$0$0 == 0x009b
                           00009B   299 _TB8	=	0x009b
                           00009C   300 G$REN$0$0 == 0x009c
                           00009C   301 _REN	=	0x009c
                           00009D   302 G$SM2$0$0 == 0x009d
                           00009D   303 _SM2	=	0x009d
                           00009E   304 G$SM1$0$0 == 0x009e
                           00009E   305 _SM1	=	0x009e
                           00009F   306 G$SM0$0$0 == 0x009f
                           00009F   307 _SM0	=	0x009f
                           0000A0   308 G$P2_0$0$0 == 0x00a0
                           0000A0   309 _P2_0	=	0x00a0
                           0000A1   310 G$P2_1$0$0 == 0x00a1
                           0000A1   311 _P2_1	=	0x00a1
                           0000A2   312 G$P2_2$0$0 == 0x00a2
                           0000A2   313 _P2_2	=	0x00a2
                           0000A3   314 G$P2_3$0$0 == 0x00a3
                           0000A3   315 _P2_3	=	0x00a3
                           0000A4   316 G$P2_4$0$0 == 0x00a4
                           0000A4   317 _P2_4	=	0x00a4
                           0000A5   318 G$P2_5$0$0 == 0x00a5
                           0000A5   319 _P2_5	=	0x00a5
                           0000A6   320 G$P2_6$0$0 == 0x00a6
                           0000A6   321 _P2_6	=	0x00a6
                           0000A7   322 G$P2_7$0$0 == 0x00a7
                           0000A7   323 _P2_7	=	0x00a7
                           0000A8   324 G$EX0$0$0 == 0x00a8
                           0000A8   325 _EX0	=	0x00a8
                           0000A9   326 G$ET0$0$0 == 0x00a9
                           0000A9   327 _ET0	=	0x00a9
                           0000AA   328 G$EX1$0$0 == 0x00aa
                           0000AA   329 _EX1	=	0x00aa
                           0000AB   330 G$ET1$0$0 == 0x00ab
                           0000AB   331 _ET1	=	0x00ab
                           0000AC   332 G$ES$0$0 == 0x00ac
                           0000AC   333 _ES	=	0x00ac
                           0000AF   334 G$EA$0$0 == 0x00af
                           0000AF   335 _EA	=	0x00af
                           0000B0   336 G$P3_0$0$0 == 0x00b0
                           0000B0   337 _P3_0	=	0x00b0
                           0000B1   338 G$P3_1$0$0 == 0x00b1
                           0000B1   339 _P3_1	=	0x00b1
                           0000B2   340 G$P3_2$0$0 == 0x00b2
                           0000B2   341 _P3_2	=	0x00b2
                           0000B3   342 G$P3_3$0$0 == 0x00b3
                           0000B3   343 _P3_3	=	0x00b3
                           0000B4   344 G$P3_4$0$0 == 0x00b4
                           0000B4   345 _P3_4	=	0x00b4
                           0000B5   346 G$P3_5$0$0 == 0x00b5
                           0000B5   347 _P3_5	=	0x00b5
                           0000B6   348 G$P3_6$0$0 == 0x00b6
                           0000B6   349 _P3_6	=	0x00b6
                           0000B7   350 G$P3_7$0$0 == 0x00b7
                           0000B7   351 _P3_7	=	0x00b7
                           0000B0   352 G$RXD$0$0 == 0x00b0
                           0000B0   353 _RXD	=	0x00b0
                           0000B1   354 G$TXD$0$0 == 0x00b1
                           0000B1   355 _TXD	=	0x00b1
                           0000B2   356 G$INT0$0$0 == 0x00b2
                           0000B2   357 _INT0	=	0x00b2
                           0000B3   358 G$INT1$0$0 == 0x00b3
                           0000B3   359 _INT1	=	0x00b3
                           0000B4   360 G$T0$0$0 == 0x00b4
                           0000B4   361 _T0	=	0x00b4
                           0000B5   362 G$T1$0$0 == 0x00b5
                           0000B5   363 _T1	=	0x00b5
                           0000B6   364 G$WR$0$0 == 0x00b6
                           0000B6   365 _WR	=	0x00b6
                           0000B7   366 G$RD$0$0 == 0x00b7
                           0000B7   367 _RD	=	0x00b7
                           0000B8   368 G$PX0$0$0 == 0x00b8
                           0000B8   369 _PX0	=	0x00b8
                           0000B9   370 G$PT0$0$0 == 0x00b9
                           0000B9   371 _PT0	=	0x00b9
                           0000BA   372 G$PX1$0$0 == 0x00ba
                           0000BA   373 _PX1	=	0x00ba
                           0000BB   374 G$PT1$0$0 == 0x00bb
                           0000BB   375 _PT1	=	0x00bb
                           0000BC   376 G$PS$0$0 == 0x00bc
                           0000BC   377 _PS	=	0x00bc
                           0000D0   378 G$P$0$0 == 0x00d0
                           0000D0   379 _P	=	0x00d0
                           0000D1   380 G$F1$0$0 == 0x00d1
                           0000D1   381 _F1	=	0x00d1
                           0000D2   382 G$OV$0$0 == 0x00d2
                           0000D2   383 _OV	=	0x00d2
                           0000D3   384 G$RS0$0$0 == 0x00d3
                           0000D3   385 _RS0	=	0x00d3
                           0000D4   386 G$RS1$0$0 == 0x00d4
                           0000D4   387 _RS1	=	0x00d4
                           0000D5   388 G$F0$0$0 == 0x00d5
                           0000D5   389 _F0	=	0x00d5
                           0000D6   390 G$AC$0$0 == 0x00d6
                           0000D6   391 _AC	=	0x00d6
                           0000D7   392 G$CY$0$0 == 0x00d7
                           0000D7   393 _CY	=	0x00d7
                           0000B0   394 G$RxLed$0$0 == 0x00b0
                           0000B0   395 _RxLed	=	0x00b0
                           0000B1   396 G$TxBip$0$0 == 0x00b1
                           0000B1   397 _TxBip	=	0x00b1
                           0000B2   398 G$SwInt$0$0 == 0x00b2
                           0000B2   399 _SwInt	=	0x00b2
                           000090   400 G$S1D1$0$0 == 0x0090
                           000090   401 _S1D1	=	0x0090
                           000091   402 G$S2D2$0$0 == 0x0091
                           000091   403 _S2D2	=	0x0091
      0000B7                        404 	.org 0x00B7
                           0000B7   405 G$lcdCS$0$0==.
      0000B7                        406 _lcdCS::
      0000B7                        407 	.ds 1
                           000093   408 G$adcCS$0$0 == 0x0093
                           000093   409 _adcCS	=	0x0093
                           0000B4   410 G$adcCk$0$0 == 0x00b4
                           0000B4   411 _adcCk	=	0x00b4
                           0000B5   412 G$adcDt$0$0 == 0x00b5
                           0000B5   413 _adcDt	=	0x00b5
                           0000B4   414 G$DC$0$0 == 0x00b4
                           0000B4   415 _DC	=	0x00b4
                           0000B5   416 G$RW$0$0 == 0x00b5
                           0000B5   417 _RW	=	0x00b5
                           000092   418 G$TrigPin$0$0 == 0x0092
                           000092   419 _TrigPin	=	0x0092
                                    420 ;--------------------------------------------------------
                                    421 ; overlayable register banks
                                    422 ;--------------------------------------------------------
                                    423 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        424 	.ds 8
                                    425 ;--------------------------------------------------------
                                    426 ; internal ram data
                                    427 ;--------------------------------------------------------
                                    428 	.area DSEG    (DATA)
                           000000   429 G$S1$0$0==.
      000022                        430 _S1::
      000022                        431 	.ds 1
                           000001   432 G$S2$0$0==.
      000023                        433 _S2::
      000023                        434 	.ds 1
                           000002   435 G$cont$0$0==.
      000024                        436 _cont::
      000024                        437 	.ds 1
                           000003   438 G$disp1$0$0==.
      000025                        439 _disp1::
      000025                        440 	.ds 1
                           000004   441 G$disp2$0$0==.
      000026                        442 _disp2::
      000026                        443 	.ds 1
                           000005   444 G$cnt100$0$0==.
      000027                        445 _cnt100::
      000027                        446 	.ds 1
                           000006   447 G$cnt200$0$0==.
      000028                        448 _cnt200::
      000028                        449 	.ds 1
                           000007   450 G$x50us$0$0==.
      000029                        451 _x50us::
      000029                        452 	.ds 1
                           000008   453 G$freq$0$0==.
      00002A                        454 _freq::
      00002A                        455 	.ds 1
                           000009   456 G$RxByte$0$0==.
      00002B                        457 _RxByte::
      00002B                        458 	.ds 1
                           00000A   459 G$TxByte$0$0==.
      00002C                        460 _TxByte::
      00002C                        461 	.ds 1
                           00000B   462 G$rRxB$0$0==.
      00002D                        463 _rRxB::
      00002D                        464 	.ds 1
                           00000C   465 G$wRxB$0$0==.
      00002E                        466 _wRxB::
      00002E                        467 	.ds 1
                           00000D   468 G$rTxB$0$0==.
      00002F                        469 _rTxB::
      00002F                        470 	.ds 1
                           00000E   471 G$wTxB$0$0==.
      000030                        472 _wTxB::
      000030                        473 	.ds 1
                           00000F   474 G$RxB$0$0==.
      000031                        475 _RxB::
      000031                        476 	.ds 16
                           00001F   477 G$TxB$0$0==.
      000041                        478 _TxB::
      000041                        479 	.ds 16
                           00002F   480 G$algs$0$0==.
      000051                        481 _algs::
      000051                        482 	.ds 5
                           000034   483 LcontroleNivel.char2LCD$val$1$12==.
      000056                        484 _char2LCD_PARM_2:
      000056                        485 	.ds 1
                           000035   486 LcontroleNivel.char2LCD$dot$1$12==.
      000057                        487 _char2LCD_PARM_3:
      000057                        488 	.ds 1
                           000036   489 LcontroleNivel.algs2ser$asc0$1$25==.
      000058                        490 _algs2ser_PARM_2:
      000058                        491 	.ds 2
                           000038   492 LcontroleNivel.algs2ser$dot$1$25==.
      00005A                        493 _algs2ser_PARM_3:
      00005A                        494 	.ds 1
                           000039   495 LcontroleNivel.char2Ser$val$1$34==.
      00005B                        496 _char2Ser_PARM_2:
      00005B                        497 	.ds 1
                           00003A   498 LcontroleNivel.char2Ser$dot$1$34==.
      00005C                        499 _char2Ser_PARM_3:
      00005C                        500 	.ds 1
                           00003B   501 LcontroleNivel.int2Ser$val$1$36==.
      00005D                        502 _int2Ser_PARM_2:
      00005D                        503 	.ds 2
                           00003D   504 LcontroleNivel.int2Ser$dot$1$36==.
      00005F                        505 _int2Ser_PARM_3:
      00005F                        506 	.ds 1
                           00003E   507 G$Echo$0$0==.
      000060                        508 _Echo::
      000060                        509 	.ds 2
                           000040   510 G$TrigCont$0$0==.
      000062                        511 _TrigCont::
      000062                        512 	.ds 1
                           000041   513 G$pid$0$0==.
      000063                        514 _pid::
      000063                        515 	.ds 3
                           000044   516 G$pwm$0$0==.
      000066                        517 _pwm::
      000066                        518 	.ds 1
                           000045   519 G$malha$0$0==.
      000067                        520 _malha::
      000067                        521 	.ds 1
                           000046   522 LcontroleNivel.main$setup$1$50==.
      000068                        523 _main_setup_1_50:
      000068                        524 	.ds 1
                           000047   525 LcontroleNivel.main$tempC$1$50==.
      000069                        526 _main_tempC_1_50:
      000069                        527 	.ds 1
                           000048   528 LcontroleNivel.main$errAt$1$50==.
      00006A                        529 _main_errAt_1_50:
      00006A                        530 	.ds 1
                           000049   531 LcontroleNivel.main$ctrlAt$1$50==.
      00006B                        532 _main_ctrlAt_1_50:
      00006B                        533 	.ds 2
                           00004B   534 LcontroleNivel.main$P$1$50==.
      00006D                        535 _main_P_1_50:
      00006D                        536 	.ds 2
                           00004D   537 LcontroleNivel.main$I$1$50==.
      00006F                        538 _main_I_1_50:
      00006F                        539 	.ds 2
                           00004F   540 LcontroleNivel.main$tempo$1$50==.
      000071                        541 _main_tempo_1_50:
      000071                        542 	.ds 2
                           000051   543 LcontroleNivel.main$contSetup$1$50==.
      000073                        544 _main_contSetup_1_50:
      000073                        545 	.ds 1
                           000052   546 LcontroleNivel.main$setupR$1$50==.
      000074                        547 _main_setupR_1_50:
      000074                        548 	.ds 3
                           000055   549 LcontroleNivel.main$number$1$50==.
      000077                        550 _main_number_1_50:
      000077                        551 	.ds 1
                                    552 ;--------------------------------------------------------
                                    553 ; overlayable items in internal ram 
                                    554 ;--------------------------------------------------------
                                    555 ;--------------------------------------------------------
                                    556 ; Stack segment in internal ram 
                                    557 ;--------------------------------------------------------
                                    558 	.area	SSEG
      0000B8                        559 __start__stack:
      0000B8                        560 	.ds	1
                                    561 
                                    562 ;--------------------------------------------------------
                                    563 ; indirectly addressable internal ram data
                                    564 ;--------------------------------------------------------
                                    565 	.area ISEG    (DATA)
                                    566 ;--------------------------------------------------------
                                    567 ; absolute internal ram data
                                    568 ;--------------------------------------------------------
                                    569 	.area IABS    (ABS,DATA)
                                    570 	.area IABS    (ABS,DATA)
                                    571 ;--------------------------------------------------------
                                    572 ; bit data
                                    573 ;--------------------------------------------------------
                                    574 	.area BSEG    (BIT)
                           000000   575 G$umSeg$0$0==.
      000000                        576 _umSeg::
      000000                        577 	.ds 1
                           000001   578 G$som$0$0==.
      000001                        579 _som::
      000001                        580 	.ds 1
                           000002   581 G$bip$0$0==.
      000002                        582 _bip::
      000002                        583 	.ds 1
                           000003   584 G$tip$0$0==.
      000003                        585 _tip::
      000003                        586 	.ds 1
                           000004   587 G$RxFlag$0$0==.
      000004                        588 _RxFlag::
      000004                        589 	.ds 1
                           000005   590 G$TxFlag$0$0==.
      000005                        591 _TxFlag::
      000005                        592 	.ds 1
                           000006   593 G$Txing$0$0==.
      000006                        594 _Txing::
      000006                        595 	.ds 1
                           000007   596 G$ad1On$0$0==.
      000007                        597 _ad1On::
      000007                        598 	.ds 1
                           000008   599 G$ad2On$0$0==.
      000008                        600 _ad2On::
      000008                        601 	.ds 1
                           000009   602 G$Ch01$0$0==.
      000009                        603 _Ch01::
      000009                        604 	.ds 1
                           00000A   605 G$useBuf$0$0==.
      00000A                        606 _useBuf::
      00000A                        607 	.ds 1
                           00000B   608 LcontroleNivel.wrLCD8$rs$1$8==.
      00000B                        609 _wrLCD8_PARM_1:
      00000B                        610 	.ds 1
                           00000C   611 LcontroleNivel.wrLCD8$sloc0$1$0==.
      00000C                        612 _wrLCD8_sloc0_1_0:
      00000C                        613 	.ds 1
                           00000D   614 LcontroleNivel.wrLCD4$rs$1$10==.
      00000D                        615 _wrLCD4_PARM_1:
      00000D                        616 	.ds 1
                           00000E   617 G$sensor$0$0==.
      00000E                        618 _sensor::
      00000E                        619 	.ds 1
                           00000F   620 LcontroleNivel.ajustPID$ajust$1$44==.
      00000F                        621 _ajustPID_ajust_1_44:
      00000F                        622 	.ds 1
                                    623 ;--------------------------------------------------------
                                    624 ; paged external ram data
                                    625 ;--------------------------------------------------------
                                    626 	.area PSEG    (PAG,XDATA)
                                    627 ;--------------------------------------------------------
                                    628 ; external ram data
                                    629 ;--------------------------------------------------------
                                    630 	.area XSEG    (XDATA)
                                    631 ;--------------------------------------------------------
                                    632 ; absolute external ram data
                                    633 ;--------------------------------------------------------
                                    634 	.area XABS    (ABS,XDATA)
                                    635 ;--------------------------------------------------------
                                    636 ; external initialized ram data
                                    637 ;--------------------------------------------------------
                                    638 	.area XISEG   (XDATA)
                                    639 	.area HOME    (CODE)
                                    640 	.area GSINIT0 (CODE)
                                    641 	.area GSINIT1 (CODE)
                                    642 	.area GSINIT2 (CODE)
                                    643 	.area GSINIT3 (CODE)
                                    644 	.area GSINIT4 (CODE)
                                    645 	.area GSINIT5 (CODE)
                                    646 	.area GSINIT  (CODE)
                                    647 	.area GSFINAL (CODE)
                                    648 	.area CSEG    (CODE)
                                    649 ;--------------------------------------------------------
                                    650 ; interrupt vector 
                                    651 ;--------------------------------------------------------
                                    652 	.area HOME    (CODE)
      000000                        653 __interrupt_vect:
      000000 02 00 29         [24]  654 	ljmp	__sdcc_gsinit_startup
      000003 02 00 D4         [24]  655 	ljmp	_ext_0
      000006                        656 	.ds	5
      00000B 02 00 F4         [24]  657 	ljmp	_timer_0
      00000E                        658 	.ds	5
      000013 02 04 27         [24]  659 	ljmp	_ext_1
      000016                        660 	.ds	5
      00001B 32               [24]  661 	reti
      00001C                        662 	.ds	7
      000023 02 02 AA         [24]  663 	ljmp	_serial
                                    664 ;--------------------------------------------------------
                                    665 ; global & static initialisations
                                    666 ;--------------------------------------------------------
                                    667 	.area HOME    (CODE)
                                    668 	.area GSINIT  (CODE)
                                    669 	.area GSFINAL (CODE)
                                    670 	.area GSINIT  (CODE)
                                    671 	.globl __sdcc_gsinit_startup
                                    672 	.globl __sdcc_program_startup
                                    673 	.globl __start__stack
                                    674 	.globl __mcs51_genXINIT
                                    675 	.globl __mcs51_genXRAMCLEAR
                                    676 	.globl __mcs51_genRAMCLEAR
                           000000   677 	C$uRTOS_2.21.h$38$1$50 ==.
                                    678 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:38: unsigned char S1=0;             //R1 estado de S1
      000082 75 22 00         [24]  679 	mov	_S1,#0x00
                           000003   680 	C$uRTOS_2.21.h$39$1$50 ==.
                                    681 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:39: unsigned char S2=0;             //R2 estado de S2
      000085 75 23 00         [24]  682 	mov	_S2,#0x00
                           000006   683 	C$uRTOS_2.21.h$40$1$50 ==.
                                    684 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:40: unsigned char cont=0;           //R3 N x 50µs
      000088 75 24 00         [24]  685 	mov	_cont,#0x00
                           000009   686 	C$uRTOS_2.21.h$41$1$50 ==.
                                    687 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:41: unsigned char disp1=0xFF;       //R4 7seg MSD
      00008B 75 25 FF         [24]  688 	mov	_disp1,#0xff
                           00000C   689 	C$uRTOS_2.21.h$42$1$50 ==.
                                    690 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:42: unsigned char disp2=0xFF;       //R5 7seg LSD
      00008E 75 26 FF         [24]  691 	mov	_disp2,#0xff
                           00000F   692 	C$uRTOS_2.21.h$43$1$50 ==.
                                    693 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:43: unsigned char cnt100=100;       //R6 100x10ms=1s
      000091 75 27 64         [24]  694 	mov	_cnt100,#0x64
                           000012   695 	C$uRTOS_2.21.h$44$1$50 ==.
                                    696 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:44: unsigned char cnt200=200;       //R7 200 int's
      000094 75 28 C8         [24]  697 	mov	_cnt200,#0xc8
                           000015   698 	C$uRTOS_2.21.h$46$1$50 ==.
                                    699 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:46: unsigned char freq=8;           //R9 fBip=1/(2*50*freq)
      000097 75 2A 08         [24]  700 	mov	_freq,#0x08
                           000018   701 	C$uRTOS_2.21.h$49$1$50 ==.
                                    702 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:49: unsigned char rRxB=0;           //tag leitura RxB
      00009A 75 2D 00         [24]  703 	mov	_rRxB,#0x00
                           00001B   704 	C$uRTOS_2.21.h$50$1$50 ==.
                                    705 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:50: unsigned char wRxB=0;           //tag escrita RxB
      00009D 75 2E 00         [24]  706 	mov	_wRxB,#0x00
                           00001E   707 	C$uRTOS_2.21.h$51$1$50 ==.
                                    708 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:51: unsigned char rTxB=0;           //tag leitura TxB
      0000A0 75 2F 00         [24]  709 	mov	_rTxB,#0x00
                           000021   710 	C$uRTOS_2.21.h$52$1$50 ==.
                                    711 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:52: unsigned char wTxB=0;           //tag escrita TxB
      0000A3 75 30 00         [24]  712 	mov	_wTxB,#0x00
                           000024   713 	C$controleNivel.c$11$1$50 ==.
                                    714 ;	controleNivel.c:11: unsigned int Echo=0x00;
      0000A6 E4               [12]  715 	clr	a
      0000A7 F5 60            [12]  716 	mov	_Echo,a
      0000A9 F5 61            [12]  717 	mov	(_Echo + 1),a
                           000029   718 	C$controleNivel.c$12$1$50 ==.
                                    719 ;	controleNivel.c:12: unsigned char TrigCont=100;
      0000AB 75 62 64         [24]  720 	mov	_TrigCont,#0x64
                           00002C   721 	C$controleNivel.c$13$1$50 ==.
                                    722 ;	controleNivel.c:13: unsigned char pid[3]={0,0,0};
                                    723 ;	1-genFromRTrack replaced	mov	_pid,#0x00
      0000AE F5 63            [12]  724 	mov	_pid,a
                                    725 ;	1-genFromRTrack replaced	mov	(_pid + 0x0001),#0x00
      0000B0 F5 64            [12]  726 	mov	(_pid + 0x0001),a
                                    727 ;	1-genFromRTrack replaced	mov	(_pid + 0x0002),#0x00
      0000B2 F5 65            [12]  728 	mov	(_pid + 0x0002),a
                           000032   729 	C$controleNivel.c$14$1$50 ==.
                                    730 ;	controleNivel.c:14: unsigned char pwm=0;
                                    731 ;	1-genFromRTrack replaced	mov	_pwm,#0x00
      0000B4 F5 66            [12]  732 	mov	_pwm,a
                           000034   733 	C$controleNivel.c$15$1$50 ==.
                                    734 ;	controleNivel.c:15: unsigned char malha = 1;
      0000B6 75 67 01         [24]  735 	mov	_malha,#0x01
                           000037   736 	C$uRTOS_2.21.h$27$1$50 ==.
                                    737 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:27: volatile __bit umSeg=0;         //1seg completo
                                    738 ;	assignBit
      0000B9 C2 00            [12]  739 	clr	_umSeg
                           000039   740 	C$uRTOS_2.21.h$28$1$50 ==.
                                    741 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:28: __bit som=0;                    //som ligado
                                    742 ;	assignBit
      0000BB C2 01            [12]  743 	clr	_som
                           00003B   744 	C$uRTOS_2.21.h$29$1$50 ==.
                                    745 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:29: __bit bip=0;                    //bip ligado
                                    746 ;	assignBit
      0000BD C2 02            [12]  747 	clr	_bip
                           00003D   748 	C$uRTOS_2.21.h$30$1$50 ==.
                                    749 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:30: __bit tip=0;                    //trava do bip1
                                    750 ;	assignBit
      0000BF C2 03            [12]  751 	clr	_tip
                           00003F   752 	C$uRTOS_2.21.h$31$1$50 ==.
                                    753 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:31: __bit RxFlag=0;                 //rxBuff vazio
                                    754 ;	assignBit
      0000C1 C2 04            [12]  755 	clr	_RxFlag
                           000041   756 	C$uRTOS_2.21.h$32$1$50 ==.
                                    757 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:32: __bit TxFlag=1;                 //txBuff vazio
                                    758 ;	assignBit
      0000C3 D2 05            [12]  759 	setb	_TxFlag
                           000043   760 	C$uRTOS_2.21.h$33$1$50 ==.
                                    761 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:33: __bit Txing=0;                  //enviando do buffer
                                    762 ;	assignBit
      0000C5 C2 06            [12]  763 	clr	_Txing
                           000045   764 	C$uRTOS_2.21.h$34$1$50 ==.
                                    765 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:34: __bit ad1On=0;                  //ADC1 habilitado
                                    766 ;	assignBit
      0000C7 C2 07            [12]  767 	clr	_ad1On
                           000047   768 	C$uRTOS_2.21.h$35$1$50 ==.
                                    769 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:35: __bit ad2On=0;                  //ADC2 habilitado
                                    770 ;	assignBit
      0000C9 C2 08            [12]  771 	clr	_ad2On
                           000049   772 	C$uRTOS_2.21.h$37$1$50 ==.
                                    773 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:37: __bit useBuf=0;                 //=1 usa RxB
                                    774 ;	assignBit
      0000CB C2 0A            [12]  775 	clr	_useBuf
                           00004B   776 	C$controleNivel.c$16$1$50 ==.
                                    777 ;	controleNivel.c:16: __bit sensor=1;           
                                    778 ;	assignBit
      0000CD D2 0E            [12]  779 	setb	_sensor
                           00004D   780 	C$uRTOS_2.21.h$20$1$50 ==.
                                    781 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:20: volatile __sbit __at (0xB7) lcdCS=0;//P3.7 CS   LCD
                                    782 ;	assignBit
      0000CF C2 B7            [12]  783 	clr	_lcdCS
                                    784 	.area GSFINAL (CODE)
      0000D1 02 00 26         [24]  785 	ljmp	__sdcc_program_startup
                                    786 ;--------------------------------------------------------
                                    787 ; Home
                                    788 ;--------------------------------------------------------
                                    789 	.area HOME    (CODE)
                                    790 	.area HOME    (CODE)
      000026                        791 __sdcc_program_startup:
      000026 02 05 06         [24]  792 	ljmp	_main
                                    793 ;	return from main will return to caller
                                    794 ;--------------------------------------------------------
                                    795 ; code
                                    796 ;--------------------------------------------------------
                                    797 	.area CSEG    (CODE)
                                    798 ;------------------------------------------------------------
                                    799 ;Allocation info for local variables in function 'ext_0'
                                    800 ;------------------------------------------------------------
                           000000   801 	G$ext_0$0$0 ==.
                           000000   802 	C$uRTOS_2.21.h$76$0$0 ==.
                                    803 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:76: void ext_0 (void) __interrupt(0){
                                    804 ;	-----------------------------------------
                                    805 ;	 function ext_0
                                    806 ;	-----------------------------------------
      0000D4                        807 _ext_0:
                           000007   808 	ar7 = 0x07
                           000006   809 	ar6 = 0x06
                           000005   810 	ar5 = 0x05
                           000004   811 	ar4 = 0x04
                           000003   812 	ar3 = 0x03
                           000002   813 	ar2 = 0x02
                           000001   814 	ar1 = 0x01
                           000000   815 	ar0 = 0x00
      0000D4 C0 E0            [24]  816 	push	acc
      0000D6 C0 D0            [24]  817 	push	psw
                           000004   818 	C$uRTOS_2.21.h$77$1$2 ==.
                                    819 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:77: EX0=0;
                                    820 ;	assignBit
      0000D8 C2 A8            [12]  821 	clr	_EX0
                           000006   822 	C$uRTOS_2.21.h$78$1$2 ==.
                                    823 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:78: if(!S1D1){
      0000DA 20 90 0A         [24]  824 	jb	_S1D1,00106$
                           000009   825 	C$uRTOS_2.21.h$79$2$3 ==.
                                    826 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:79: if (S1<2) S1++;
      0000DD 74 FE            [12]  827 	mov	a,#0x100 - 0x02
      0000DF 25 22            [12]  828 	add	a,_S1
      0000E1 40 0C            [24]  829 	jc	00108$
      0000E3 05 22            [12]  830 	inc	_S1
      0000E5 80 08            [24]  831 	sjmp	00108$
      0000E7                        832 00106$:
                           000013   833 	C$uRTOS_2.21.h$82$2$4 ==.
                                    834 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:82: if (S2<2) S2++;
      0000E7 74 FE            [12]  835 	mov	a,#0x100 - 0x02
      0000E9 25 23            [12]  836 	add	a,_S2
      0000EB 40 02            [24]  837 	jc	00108$
      0000ED 05 23            [12]  838 	inc	_S2
      0000EF                        839 00108$:
      0000EF D0 D0            [24]  840 	pop	psw
      0000F1 D0 E0            [24]  841 	pop	acc
                           00001F   842 	C$uRTOS_2.21.h$84$1$2 ==.
                           00001F   843 	XG$ext_0$0$0 ==.
      0000F3 32               [24]  844 	reti
                                    845 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    846 ;	eliminated unneeded push/pop dpl
                                    847 ;	eliminated unneeded push/pop dph
                                    848 ;	eliminated unneeded push/pop b
                                    849 ;------------------------------------------------------------
                                    850 ;Allocation info for local variables in function 'timer_0'
                                    851 ;------------------------------------------------------------
                           000020   852 	G$timer_0$0$0 ==.
                           000020   853 	C$uRTOS_2.21.h$89$1$2 ==.
                                    854 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:89: void timer_0(void) __interrupt(1) __naked{
                                    855 ;	-----------------------------------------
                                    856 ;	 function timer_0
                                    857 ;	-----------------------------------------
      0000F4                        858 _timer_0:
                                    859 ;	naked function: no prologue.
                           000020   860 	C$uRTOS_2.21.h$129$1$6 ==.
                                    861 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:129: __endasm;
      0000F4 C0 E0            [24]  862 	push	acc ;salva contexto
      0000F6 C0 D0            [24]  863 	push	PSW ;
      0000F8 D5 24 0B         [24]  864 	djnz	_cont, Cala ;gerar audio?
      0000FB 20 01 03         [24]  865 	jb	_som, Bipa ;tem som?
      0000FE 30 02 05         [24]  866 	jnb	_bip, Cala ;tem bip?
      000101                        867 	Bipa:
      000101 85 2A 24         [24]  868 	mov _cont, _freq ;tempo ½ ciclo
      000104 B2 B1            [12]  869 	cpl	_TxBip ;½ ciclo som
      000106                        870 	Cala:
      000106 D5 28 3F         [24]  871 	djnz _cnt200, RT1 ;10mS completo?
      000109 75 28 C8         [24]  872 	mov	_cnt200, #200 ;200*50us
      00010C D5 27 05         [24]  873 	djnz	_cnt100, Bip1 ;1 seg?
      00010F 75 27 64         [24]  874 	mov	_cnt100, #100 ;recarga 100
      000112 D2 00            [12]  875 	setb	_umSeg ;sim, cmpl 1s
      000114                        876 	Bip1:
      000114 30 02 07         [24]  877 	jnb _bip, Mux ;se bip ligado
      000117 B2 03            [12]  878 	cpl	_tip ;|gera de 10ms|
      000119 20 03 02         [24]  879 	jb	_tip, Mux ;|a 19.95ms de|
      00011C C2 02            [12]  880 	clr	_bip ;|2*freq*50us.|
      00011E                        881 	Mux:
      00011E 20 90 11         [24]  882 	jb _S1D1, D2 ;disp1 ligado?
      000121                        883 	D1:
      000121 74 02            [12]  884 	mov a, #0x02 ;2=filtrada
      000123 B5 22 06         [24]  885 	cjne	a, _S1, D1a ;filtrada?
      000126 30 B2 03         [24]  886 	jnb	_SwInt, D1a ;liberada?
      000129 75 22 03         [24]  887 	mov	_S1, #0x03 ;sim,sobe flag
      00012C                        888 	D1a:
      00012C D2 90            [12]  889 	setb _S1D1 ;S1 deshab
      00012E C2 91            [12]  890 	clr	_S2D2 ;S2 hab
      000130 80 0F            [24]  891 	sjmp	RT2 ;recarga/sai
      000132                        892 	D2:
      000132 74 02            [12]  893 	mov a, #0x02
      000134 B5 23 06         [24]  894 	cjne	a, _S2, D2a ;filtrada?
      000137 30 B2 03         [24]  895 	jnb	_SwInt, D2a ;liberada?
      00013A 75 23 03         [24]  896 	mov	_S2, #0x03 ;sim,sobe flag
      00013D                        897 	D2a:
      00013D D2 91            [12]  898 	setb _S2D2 ;S2 deshab
      00013F C2 90            [12]  899 	clr	_S1D1 ;S1 hab
                                    900 ;
      000141                        901 	RT2:
      000141 D2 A8            [12]  902 	setb _EX0 ;hab. chaves
      000143 12 03 FD         [24]  903 	lcall	_RTproc_2 ;a cada 10ms
      000146 80 03            [24]  904 	sjmp	SAI
      000148                        905 	RT1:
      000148 12 03 F5         [24]  906 	lcall _RTproc_1 ;a cada 50µs
      00014B                        907 	SAI:
      00014B D0 D0            [24]  908 	pop PSW ;recup. contexto
      00014D D0 E0            [24]  909 	pop	acc ;
      00014F 32               [24]  910 	reti
                                    911 ;	naked function: no epilogue.
                           00007C   912 	C$uRTOS_2.21.h$130$1$6 ==.
                           00007C   913 	XG$timer_0$0$0 ==.
                                    914 ;------------------------------------------------------------
                                    915 ;Allocation info for local variables in function 'delay50'
                                    916 ;------------------------------------------------------------
                           00007C   917 	G$delay50$0$0 ==.
                           00007C   918 	C$uRTOS_2.21.h$134$1$6 ==.
                                    919 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:134: void delay50() __naked{
                                    920 ;	-----------------------------------------
                                    921 ;	 function delay50
                                    922 ;	-----------------------------------------
      000150                        923 _delay50:
                                    924 ;	naked function: no prologue.
                           00007C   925 	C$uRTOS_2.21.h$148$1$7 ==.
                                    926 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:148: __endasm;
      000150 C0 E0            [24]  927 	push	acc ;salva contexto
      000152 C0 D0            [24]  928 	push	PSW ;
      000154 E5 28            [12]  929 	mov	a, _cnt200 ;tempo atual
      000156 C3               [12]  930 	clr	c
      000157 95 29            [12]  931 	subb	a, _x50us ;prox tempo
      000159 50 02            [24]  932 	jnc	Po ;negativo?
      00015B 24 C8            [12]  933 	add	a, #200 ;soma 200
      00015D                        934 	Po:
      00015D 04               [12]  935 	inc a ;nunca zero
      00015E                        936 	Ps:
      00015E B5 28 FD         [24]  937 	cjne a, _cnt200, Ps ;espera chegar
      000161 D0 D0            [24]  938 	pop	PSW ;recup. contexto
      000163 D0 E0            [24]  939 	pop	acc ;
      000165 22               [24]  940 	ret
                                    941 ;	naked function: no epilogue.
                           000092   942 	C$uRTOS_2.21.h$149$1$7 ==.
                           000092   943 	XG$delay50$0$0 ==.
                                    944 ;------------------------------------------------------------
                                    945 ;Allocation info for local variables in function 'wrLCD8'
                                    946 ;------------------------------------------------------------
                                    947 ;val                       Allocated to registers r7 
                                    948 ;------------------------------------------------------------
                           000092   949 	G$wrLCD8$0$0 ==.
                           000092   950 	C$uRTOS_2.21.h$153$1$7 ==.
                                    951 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:153: void wrLCD8(__bit rs, char val){//comando p/ LCD
                                    952 ;	-----------------------------------------
                                    953 ;	 function wrLCD8
                                    954 ;	-----------------------------------------
      000166                        955 _wrLCD8:
      000166 AF 82            [24]  956 	mov	r7,dpl
                           000094   957 	C$uRTOS_2.21.h$154$1$9 ==.
                                    958 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:154: DC=rs; RW=0;                //1dado 0cmd, escrever
                                    959 ;	assignBit
      000168 A2 0B            [12]  960 	mov	c,_wrLCD8_PARM_1
      00016A 92 B4            [24]  961 	mov	_DC,c
                                    962 ;	assignBit
      00016C C2 B5            [12]  963 	clr	_RW
                           00009A   964 	C$uRTOS_2.21.h$155$1$9 ==.
                                    965 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:155: P1_4=(val&0x10); P1_5=(val&0x20);
      00016E EF               [12]  966 	mov	a,r7
      00016F A2 E4            [12]  967 	mov	c,acc[4]
                                    968 ;	assignBit
      000171 92 0C            [24]  969 	mov  _wrLCD8_sloc0_1_0,c
      000173 92 94            [24]  970 	mov	_P1_4,c
      000175 EF               [12]  971 	mov	a,r7
      000176 A2 E5            [12]  972 	mov	c,acc[5]
                                    973 ;	assignBit
      000178 92 0C            [24]  974 	mov  _wrLCD8_sloc0_1_0,c
      00017A 92 95            [24]  975 	mov	_P1_5,c
                           0000A8   976 	C$uRTOS_2.21.h$156$1$9 ==.
                                    977 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:156: P1_6=(val&0x40); P1_7=(val&0x80);
      00017C EF               [12]  978 	mov	a,r7
      00017D A2 E6            [12]  979 	mov	c,acc[6]
                                    980 ;	assignBit
      00017F 92 0C            [24]  981 	mov  _wrLCD8_sloc0_1_0,c
      000181 92 96            [24]  982 	mov	_P1_6,c
      000183 EF               [12]  983 	mov	a,r7
      000184 33               [12]  984 	rlc	a
                                    985 ;	assignBit
      000185 92 0C            [24]  986 	mov  _wrLCD8_sloc0_1_0,c
      000187 92 97            [24]  987 	mov	_P1_7,c
                           0000B5   988 	C$uRTOS_2.21.h$157$1$9 ==.
                                    989 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:157: x50us=2; delay50();         //Tas=100us
      000189 75 29 02         [24]  990 	mov	_x50us,#0x02
      00018C 12 01 50         [24]  991 	lcall	_delay50
                           0000BB   992 	C$uRTOS_2.21.h$158$1$9 ==.
                                    993 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:158: lcdCS=1;                    //para gravar
                                    994 ;	assignBit
      00018F D2 B7            [12]  995 	setb	_lcdCS
                           0000BD   996 	C$uRTOS_2.21.h$159$1$9 ==.
                                    997 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:159: x50us=8; delay50();         //PWeh=400us
      000191 75 29 08         [24]  998 	mov	_x50us,#0x08
      000194 12 01 50         [24]  999 	lcall	_delay50
                           0000C3  1000 	C$uRTOS_2.21.h$160$1$9 ==.
                                   1001 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:160: lcdCS=0;                    //grava
                                   1002 ;	assignBit
      000197 C2 B7            [12] 1003 	clr	_lcdCS
                           0000C5  1004 	C$uRTOS_2.21.h$161$1$9 ==.
                                   1005 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:161: x50us=4; delay50();         //Tah=200us
      000199 75 29 04         [24] 1006 	mov	_x50us,#0x04
      00019C 12 01 50         [24] 1007 	lcall	_delay50
                           0000CB  1008 	C$uRTOS_2.21.h$162$1$9 ==.
                                   1009 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:162: RW=1; DC=1;                 //linhas ADC em 1
                                   1010 ;	assignBit
      00019F D2 B5            [12] 1011 	setb	_RW
                                   1012 ;	assignBit
      0001A1 D2 B4            [12] 1013 	setb	_DC
                           0000CF  1014 	C$uRTOS_2.21.h$163$1$9 ==.
                           0000CF  1015 	XG$wrLCD8$0$0 ==.
      0001A3 22               [24] 1016 	ret
                                   1017 ;------------------------------------------------------------
                                   1018 ;Allocation info for local variables in function 'wrLCD4'
                                   1019 ;------------------------------------------------------------
                                   1020 ;val                       Allocated to registers r7 
                                   1021 ;temp                      Allocated to registers r6 
                                   1022 ;------------------------------------------------------------
                           0000D0  1023 	G$wrLCD4$0$0 ==.
                           0000D0  1024 	C$uRTOS_2.21.h$167$1$9 ==.
                                   1025 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:167: void wrLCD4(__bit rs, char val){//comando p/ LCD
                                   1026 ;	-----------------------------------------
                                   1027 ;	 function wrLCD4
                                   1028 ;	-----------------------------------------
      0001A4                       1029 _wrLCD4:
      0001A4 AF 82            [24] 1030 	mov	r7,dpl
                           0000D2  1031 	C$uRTOS_2.21.h$169$1$11 ==.
                                   1032 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:169: temp=(val&0xF0);
      0001A6 74 F0            [12] 1033 	mov	a,#0xf0
      0001A8 5F               [12] 1034 	anl	a,r7
      0001A9 FE               [12] 1035 	mov	r6,a
                           0000D6  1036 	C$uRTOS_2.21.h$170$1$11 ==.
                                   1037 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:170: wrLCD8(rs, temp);           //repassa p wrLCD8
                                   1038 ;	assignBit
      0001AA A2 0D            [12] 1039 	mov	c,_wrLCD4_PARM_1
      0001AC 92 0B            [24] 1040 	mov	_wrLCD8_PARM_1,c
      0001AE 8E 82            [24] 1041 	mov	dpl,r6
      0001B0 C0 07            [24] 1042 	push	ar7
      0001B2 12 01 66         [24] 1043 	lcall	_wrLCD8
      0001B5 D0 07            [24] 1044 	pop	ar7
                           0000E3  1045 	C$uRTOS_2.21.h$171$1$11 ==.
                                   1046 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:171: temp=((val<<4)&0xF0);       //pega low nible
      0001B7 EF               [12] 1047 	mov	a,r7
      0001B8 C4               [12] 1048 	swap	a
      0001B9 54 F0            [12] 1049 	anl	a,#0xf0
      0001BB FF               [12] 1050 	mov	r7,a
      0001BC 74 F0            [12] 1051 	mov	a,#0xf0
      0001BE 5F               [12] 1052 	anl	a,r7
      0001BF FE               [12] 1053 	mov	r6,a
                           0000EC  1054 	C$uRTOS_2.21.h$172$1$11 ==.
                                   1055 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:172: wrLCD8(rs, temp);           //repassa p wrLCD8
                                   1056 ;	assignBit
      0001C0 A2 0D            [12] 1057 	mov	c,_wrLCD4_PARM_1
      0001C2 92 0B            [24] 1058 	mov	_wrLCD8_PARM_1,c
      0001C4 8E 82            [24] 1059 	mov	dpl,r6
      0001C6 12 01 66         [24] 1060 	lcall	_wrLCD8
                           0000F5  1061 	C$uRTOS_2.21.h$173$1$11 ==.
                           0000F5  1062 	XG$wrLCD4$0$0 ==.
      0001C9 22               [24] 1063 	ret
                                   1064 ;------------------------------------------------------------
                                   1065 ;Allocation info for local variables in function 'char2LCD'
                                   1066 ;------------------------------------------------------------
                                   1067 ;val                       Allocated with name '_char2LCD_PARM_2'
                                   1068 ;dot                       Allocated with name '_char2LCD_PARM_3'
                                   1069 ;ddRam                     Allocated to registers r7 
                                   1070 ;i                         Allocated to registers r7 
                                   1071 ;------------------------------------------------------------
                           0000F6  1072 	G$char2LCD$0$0 ==.
                           0000F6  1073 	C$uRTOS_2.21.h$178$1$11 ==.
                                   1074 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:178: void char2LCD(char ddRam, unsigned char val, char dot){
                                   1075 ;	-----------------------------------------
                                   1076 ;	 function char2LCD
                                   1077 ;	-----------------------------------------
      0001CA                       1078 _char2LCD:
      0001CA AF 82            [24] 1079 	mov	r7,dpl
                           0000F8  1080 	C$uRTOS_2.21.h$180$1$13 ==.
                                   1081 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:180: wrLCD4(comand,ddRam);           //posição número
                                   1082 ;	assignBit
      0001CC C2 0D            [12] 1083 	clr	_wrLCD4_PARM_1
      0001CE 8F 82            [24] 1084 	mov	dpl,r7
      0001D0 12 01 A4         [24] 1085 	lcall	_wrLCD4
                           0000FF  1086 	C$uRTOS_2.21.h$181$1$13 ==.
                                   1087 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:181: algs[0]=0x30+(val/100);
      0001D3 75 F0 64         [24] 1088 	mov	b,#0x64
      0001D6 E5 56            [12] 1089 	mov	a,_char2LCD_PARM_2
      0001D8 84               [48] 1090 	div	ab
      0001D9 24 30            [12] 1091 	add	a,#0x30
      0001DB F5 51            [12] 1092 	mov	_algs,a
                           000109  1093 	C$uRTOS_2.21.h$182$1$13 ==.
                                   1094 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:182: val=val%100;
      0001DD 75 F0 64         [24] 1095 	mov	b,#0x64
      0001E0 E5 56            [12] 1096 	mov	a,_char2LCD_PARM_2
      0001E2 84               [48] 1097 	div	ab
      0001E3 85 F0 56         [24] 1098 	mov	_char2LCD_PARM_2,b
                           000112  1099 	C$uRTOS_2.21.h$183$1$13 ==.
                                   1100 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:183: algs[1]=0x30+(val/10);
      0001E6 75 F0 0A         [24] 1101 	mov	b,#0x0a
      0001E9 E5 56            [12] 1102 	mov	a,_char2LCD_PARM_2
      0001EB 84               [48] 1103 	div	ab
      0001EC 24 30            [12] 1104 	add	a,#0x30
      0001EE F5 52            [12] 1105 	mov	(_algs + 0x0001),a
                           00011C  1106 	C$uRTOS_2.21.h$184$1$13 ==.
                                   1107 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:184: algs[2]=0x30+(val%10);
      0001F0 75 F0 0A         [24] 1108 	mov	b,#0x0a
      0001F3 E5 56            [12] 1109 	mov	a,_char2LCD_PARM_2
      0001F5 84               [48] 1110 	div	ab
      0001F6 E5 F0            [12] 1111 	mov	a,b
      0001F8 24 30            [12] 1112 	add	a,#0x30
      0001FA F5 53            [12] 1113 	mov	(_algs + 0x0002),a
                           000128  1114 	C$uRTOS_2.21.h$185$2$14 ==.
                                   1115 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:185: for(i=0;i<3;i++){
      0001FC 7F 00            [12] 1116 	mov	r7,#0x00
      0001FE                       1117 00104$:
                           00012A  1118 	C$uRTOS_2.21.h$186$3$15 ==.
                                   1119 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:186: if(i==dot)wrLCD4(letra, 46);
      0001FE EF               [12] 1120 	mov	a,r7
      0001FF B5 57 0C         [24] 1121 	cjne	a,_char2LCD_PARM_3,00102$
                                   1122 ;	assignBit
      000202 D2 0D            [12] 1123 	setb	_wrLCD4_PARM_1
      000204 75 82 2E         [24] 1124 	mov	dpl,#0x2e
      000207 C0 07            [24] 1125 	push	ar7
      000209 12 01 A4         [24] 1126 	lcall	_wrLCD4
      00020C D0 07            [24] 1127 	pop	ar7
      00020E                       1128 00102$:
                           00013A  1129 	C$uRTOS_2.21.h$187$3$15 ==.
                                   1130 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:187: wrLCD4(letra, algs[i]);     //coloca número
      00020E EF               [12] 1131 	mov	a,r7
      00020F 24 51            [12] 1132 	add	a,#_algs
      000211 F9               [12] 1133 	mov	r1,a
      000212 87 82            [24] 1134 	mov	dpl,@r1
                                   1135 ;	assignBit
      000214 D2 0D            [12] 1136 	setb	_wrLCD4_PARM_1
      000216 C0 07            [24] 1137 	push	ar7
      000218 12 01 A4         [24] 1138 	lcall	_wrLCD4
      00021B D0 07            [24] 1139 	pop	ar7
                           000149  1140 	C$uRTOS_2.21.h$185$2$14 ==.
                                   1141 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:185: for(i=0;i<3;i++){
      00021D 0F               [12] 1142 	inc	r7
      00021E BF 03 00         [24] 1143 	cjne	r7,#0x03,00116$
      000221                       1144 00116$:
      000221 40 DB            [24] 1145 	jc	00104$
                           00014F  1146 	C$uRTOS_2.21.h$189$2$14 ==.
                           00014F  1147 	XG$char2LCD$0$0 ==.
      000223 22               [24] 1148 	ret
                                   1149 ;------------------------------------------------------------
                                   1150 ;Allocation info for local variables in function 'iniLCD4'
                                   1151 ;------------------------------------------------------------
                                   1152 ;i                         Allocated to registers r7 
                                   1153 ;cmD                       Allocated to registers r6 
                                   1154 ;BF                        Allocated to registers 
                                   1155 ;------------------------------------------------------------
                           000150  1156 	G$iniLCD4$0$0 ==.
                           000150  1157 	C$uRTOS_2.21.h$193$2$14 ==.
                                   1158 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:193: void iniLCD4(){                 //inicializa LCD
                                   1159 ;	-----------------------------------------
                                   1160 ;	 function iniLCD4
                                   1161 ;	-----------------------------------------
      000224                       1162 _iniLCD4:
                           000150  1163 	C$uRTOS_2.21.h$197$1$16 ==.
                                   1164 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:197: lcdCS=0;                    //seleciona LCD
                                   1165 ;	assignBit
      000224 C2 B7            [12] 1166 	clr	_lcdCS
                           000152  1167 	C$uRTOS_2.21.h$198$1$16 ==.
                                   1168 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:198: umSeg=0; cnt100=100;        //reinicia umSeg
                                   1169 ;	assignBit
      000226 C2 00            [12] 1170 	clr	_umSeg
      000228 75 27 64         [24] 1171 	mov	_cnt100,#0x64
                           000157  1172 	C$uRTOS_2.21.h$199$1$16 ==.
                                   1173 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:199: while(!umSeg);              //para acomodar LCD
      00022B                       1174 00101$:
                           000157  1175 	C$uRTOS_2.21.h$200$1$16 ==.
                                   1176 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:200: umSeg=0;
                                   1177 ;	assignBit
      00022B 10 00 02         [24] 1178 	jbc	_umSeg,00163$
      00022E 80 FB            [24] 1179 	sjmp	00101$
      000230                       1180 00163$:
                           00015C  1181 	C$uRTOS_2.21.h$201$1$16 ==.
                                   1182 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:201: wrLCD8(comand, 0x30);       //inicia em 8 bits
                                   1183 ;	assignBit
      000230 C2 0B            [12] 1184 	clr	_wrLCD8_PARM_1
      000232 75 82 30         [24] 1185 	mov	dpl,#0x30
      000235 12 01 66         [24] 1186 	lcall	_wrLCD8
                           000164  1187 	C$uRTOS_2.21.h$202$1$16 ==.
                                   1188 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:202: while(S1D1); while(S2D2);	//garante 10ms
      000238                       1189 00104$:
      000238 20 90 FD         [24] 1190 	jb	_S1D1,00104$
      00023B                       1191 00107$:
      00023B 20 91 FD         [24] 1192 	jb	_S2D2,00107$
                           00016A  1193 	C$uRTOS_2.21.h$203$1$16 ==.
                                   1194 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:203: wrLCD8(comand, 0x30);       //inicia em 8 bits
                                   1195 ;	assignBit
      00023E C2 0B            [12] 1196 	clr	_wrLCD8_PARM_1
      000240 75 82 30         [24] 1197 	mov	dpl,#0x30
      000243 12 01 66         [24] 1198 	lcall	_wrLCD8
                           000172  1199 	C$uRTOS_2.21.h$204$1$16 ==.
                                   1200 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:204: while(S1D1); while(S2D2);	//garante 10ms
      000246                       1201 00110$:
      000246 20 90 FD         [24] 1202 	jb	_S1D1,00110$
      000249                       1203 00113$:
      000249 20 91 FD         [24] 1204 	jb	_S2D2,00113$
                           000178  1205 	C$uRTOS_2.21.h$205$1$16 ==.
                                   1206 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:205: wrLCD8(comand, 0x30);       //inicia em 8 bits
                                   1207 ;	assignBit
      00024C C2 0B            [12] 1208 	clr	_wrLCD8_PARM_1
      00024E 75 82 30         [24] 1209 	mov	dpl,#0x30
      000251 12 01 66         [24] 1210 	lcall	_wrLCD8
                           000180  1211 	C$uRTOS_2.21.h$206$1$16 ==.
                                   1212 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:206: x50us=4; delay50();         //delay 200us
      000254 75 29 04         [24] 1213 	mov	_x50us,#0x04
      000257 12 01 50         [24] 1214 	lcall	_delay50
                           000186  1215 	C$uRTOS_2.21.h$207$1$16 ==.
                                   1216 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:207: wrLCD8(comand, 0x20);       //inicia em 8 bits
                                   1217 ;	assignBit
      00025A C2 0B            [12] 1218 	clr	_wrLCD8_PARM_1
      00025C 75 82 20         [24] 1219 	mov	dpl,#0x20
      00025F 12 01 66         [24] 1220 	lcall	_wrLCD8
                           00018E  1221 	C$uRTOS_2.21.h$208$1$16 ==.
                                   1222 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:208: x50us=4; delay50();         //delay 200us
      000262 75 29 04         [24] 1223 	mov	_x50us,#0x04
      000265 12 01 50         [24] 1224 	lcall	_delay50
                           000194  1225 	C$uRTOS_2.21.h$209$2$17 ==.
                                   1226 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:209: for(i=0;i<4;i++){           //cmd's 0 a 8'
      000268 7F 00            [12] 1227 	mov	r7,#0x00
      00026A                       1228 00123$:
                           000196  1229 	C$uRTOS_2.21.h$210$3$18 ==.
                                   1230 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:210: cmD=setLCD4[i];         // seleciona comando
      00026A EF               [12] 1231 	mov	a,r7
      00026B 90 09 4B         [24] 1232 	mov	dptr,#_setLCD4
      00026E 93               [24] 1233 	movc	a,@a+dptr
      00026F FE               [12] 1234 	mov	r6,a
                           00019C  1235 	C$uRTOS_2.21.h$211$3$18 ==.
                                   1236 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:211: wrLCD4(comand, cmD);
                                   1237 ;	assignBit
      000270 C2 0D            [12] 1238 	clr	_wrLCD4_PARM_1
      000272 8E 82            [24] 1239 	mov	dpl,r6
      000274 C0 07            [24] 1240 	push	ar7
      000276 12 01 A4         [24] 1241 	lcall	_wrLCD4
      000279 D0 07            [24] 1242 	pop	ar7
                           0001A7  1243 	C$uRTOS_2.21.h$212$3$18 ==.
                                   1244 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:212: while(S1D1);
      00027B                       1245 00116$:
      00027B 20 90 FD         [24] 1246 	jb	_S1D1,00116$
                           0001AA  1247 	C$uRTOS_2.21.h$213$3$18 ==.
                                   1248 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:213: while(S2D2);            //garante 10ms
      00027E                       1249 00119$:
      00027E 20 91 FD         [24] 1250 	jb	_S2D2,00119$
                           0001AD  1251 	C$uRTOS_2.21.h$209$2$17 ==.
                                   1252 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:209: for(i=0;i<4;i++){           //cmd's 0 a 8'
      000281 0F               [12] 1253 	inc	r7
      000282 BF 04 00         [24] 1254 	cjne	r7,#0x04,00170$
      000285                       1255 00170$:
      000285 40 E3            [24] 1256 	jc	00123$
                           0001B3  1257 	C$uRTOS_2.21.h$215$2$17 ==.
                           0001B3  1258 	XG$iniLCD4$0$0 ==.
      000287 22               [24] 1259 	ret
                                   1260 ;------------------------------------------------------------
                                   1261 ;Allocation info for local variables in function 'inic'
                                   1262 ;------------------------------------------------------------
                           0001B4  1263 	G$inic$0$0 ==.
                           0001B4  1264 	C$uRTOS_2.21.h$219$2$17 ==.
                                   1265 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:219: void inic(void){
                                   1266 ;	-----------------------------------------
                                   1267 ;	 function inic
                                   1268 ;	-----------------------------------------
      000288                       1269 _inic:
                           0001B4  1270 	C$uRTOS_2.21.h$220$1$20 ==.
                                   1271 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:220: PT0=1;                  //prioridade TC0
                                   1272 ;	assignBit
      000288 D2 B9            [12] 1273 	setb	_PT0
                           0001B6  1274 	C$uRTOS_2.21.h$221$1$20 ==.
                                   1275 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:221: IE=0x93;                //EA+ES+ET0+EX0
      00028A 75 A8 93         [24] 1276 	mov	_IE,#0x93
                           0001B9  1277 	C$uRTOS_2.21.h$222$1$20 ==.
                                   1278 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:222: TMOD=0x22;              //TC0=TC1=modo2
      00028D 75 89 22         [24] 1279 	mov	_TMOD,#0x22
                           0001BC  1280 	C$uRTOS_2.21.h$223$1$20 ==.
                                   1281 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:223: TL0=206;                //conta 50
      000290 75 8A CE         [24] 1282 	mov	_TL0,#0xce
                           0001BF  1283 	C$uRTOS_2.21.h$224$1$20 ==.
                                   1284 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:224: TH0=206;                //recarrega
      000293 75 8C CE         [24] 1285 	mov	_TH0,#0xce
                           0001C2  1286 	C$uRTOS_2.21.h$225$1$20 ==.
                                   1287 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:225: TL1=243;                //conta 13
      000296 75 8B F3         [24] 1288 	mov	_TL1,#0xf3
                           0001C5  1289 	C$uRTOS_2.21.h$226$1$20 ==.
                                   1290 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:226: TH1=243;                //recarrega
      000299 75 8D F3         [24] 1291 	mov	_TH1,#0xf3
                           0001C8  1292 	C$uRTOS_2.21.h$227$1$20 ==.
                                   1293 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:227: PCON=0x80;              //serial x2 (/16)
      00029C 75 87 80         [24] 1294 	mov	_PCON,#0x80
                           0001CB  1295 	C$uRTOS_2.21.h$228$1$20 ==.
                                   1296 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:228: SCON=0xC8;              //serial modo 3
      00029F 75 98 C8         [24] 1297 	mov	_SCON,#0xc8
                           0001CE  1298 	C$uRTOS_2.21.h$229$1$20 ==.
                                   1299 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:229: TR0=1;                  //liga tc0
                                   1300 ;	assignBit
      0002A2 D2 8C            [12] 1301 	setb	_TR0
                           0001D0  1302 	C$uRTOS_2.21.h$230$1$20 ==.
                                   1303 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:230: TR1=1;                  //liga tc1
                                   1304 ;	assignBit
      0002A4 D2 8E            [12] 1305 	setb	_TR1
                           0001D2  1306 	C$uRTOS_2.21.h$231$1$20 ==.
                                   1307 ;	C:/Program Files/SDCC/bin/../include/uRTOS_2.21.h:231: iniLCD4();              //inicializa LCD
      0002A6 12 02 24         [24] 1308 	lcall	_iniLCD4
                           0001D5  1309 	C$uRTOS_2.21.h$232$1$20 ==.
                           0001D5  1310 	XG$inic$0$0 ==.
      0002A9 22               [24] 1311 	ret
                                   1312 ;------------------------------------------------------------
                                   1313 ;Allocation info for local variables in function 'serial'
                                   1314 ;------------------------------------------------------------
                           0001D6  1315 	G$serial$0$0 ==.
                           0001D6  1316 	C$serialInt_1.2.h$8$1$20 ==.
                                   1317 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:8: void serial (void) __interrupt(4){
                                   1318 ;	-----------------------------------------
                                   1319 ;	 function serial
                                   1320 ;	-----------------------------------------
      0002AA                       1321 _serial:
                           0001D6  1322 	C$serialInt_1.2.h$9$1$22 ==.
                                   1323 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:9: if(RI){
                           0001D6  1324 	C$serialInt_1.2.h$10$2$23 ==.
                                   1325 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:10: RI=0;			//zera flag rx
                                   1326 ;	assignBit
      0002AA 10 98 02         [24] 1327 	jbc	_RI,00109$
      0002AD 80 07            [24] 1328 	sjmp	00102$
      0002AF                       1329 00109$:
                           0001DB  1330 	C$serialInt_1.2.h$11$2$23 ==.
                                   1331 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:11: RxByte=SBUF;            //recebe do buffer
      0002AF 85 99 2B         [24] 1332 	mov	_RxByte,_SBUF
                           0001DE  1333 	C$serialInt_1.2.h$12$2$23 ==.
                                   1334 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:12: RxFlag=1;               //sinaliza recebido
                                   1335 ;	assignBit
      0002B2 D2 04            [12] 1336 	setb	_RxFlag
      0002B4 80 04            [24] 1337 	sjmp	00104$
      0002B6                       1338 00102$:
                           0001E2  1339 	C$serialInt_1.2.h$15$2$24 ==.
                                   1340 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:15: TI=0;
                                   1341 ;	assignBit
      0002B6 C2 99            [12] 1342 	clr	_TI
                           0001E4  1343 	C$serialInt_1.2.h$16$2$24 ==.
                                   1344 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:16: TxFlag=1;
                                   1345 ;	assignBit
      0002B8 D2 05            [12] 1346 	setb	_TxFlag
      0002BA                       1347 00104$:
                           0001E6  1348 	C$serialInt_1.2.h$18$1$22 ==.
                           0001E6  1349 	XG$serial$0$0 ==.
      0002BA 32               [24] 1350 	reti
                                   1351 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1352 ;	eliminated unneeded push/pop psw
                                   1353 ;	eliminated unneeded push/pop dpl
                                   1354 ;	eliminated unneeded push/pop dph
                                   1355 ;	eliminated unneeded push/pop b
                                   1356 ;	eliminated unneeded push/pop acc
                                   1357 ;------------------------------------------------------------
                                   1358 ;Allocation info for local variables in function 'algs2ser'
                                   1359 ;------------------------------------------------------------
                                   1360 ;asc0                      Allocated with name '_algs2ser_PARM_2'
                                   1361 ;dot                       Allocated with name '_algs2ser_PARM_3'
                                   1362 ;spc                       Allocated to registers r7 
                                   1363 ;i                         Allocated to registers r6 
                                   1364 ;------------------------------------------------------------
                           0001E7  1365 	G$algs2ser$0$0 ==.
                           0001E7  1366 	C$serialInt_1.2.h$22$1$22 ==.
                                   1367 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:22: void algs2ser(char spc, int asc0, char dot){
                                   1368 ;	-----------------------------------------
                                   1369 ;	 function algs2ser
                                   1370 ;	-----------------------------------------
      0002BB                       1371 _algs2ser:
      0002BB AF 82            [24] 1372 	mov	r7,dpl
                           0001E9  1373 	C$serialInt_1.2.h$23$1$22 ==.
                                   1374 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:23: char i=0;
      0002BD 7E 00            [12] 1375 	mov	r6,#0x00
                           0001EB  1376 	C$serialInt_1.2.h$24$1$26 ==.
                                   1377 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:24: while(i<spc){
      0002BF                       1378 00104$:
      0002BF C3               [12] 1379 	clr	c
      0002C0 EE               [12] 1380 	mov	a,r6
      0002C1 9F               [12] 1381 	subb	a,r7
      0002C2 50 0B            [24] 1382 	jnc	00106$
                           0001F0  1383 	C$serialInt_1.2.h$25$2$27 ==.
                                   1384 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:25: while(!TxFlag); TxFlag=0;   //aguarda serial
      0002C4                       1385 00101$:
                                   1386 ;	assignBit
      0002C4 10 05 02         [24] 1387 	jbc	_TxFlag,00149$
      0002C7 80 FB            [24] 1388 	sjmp	00101$
      0002C9                       1389 00149$:
                           0001F5  1390 	C$serialInt_1.2.h$26$2$27 ==.
                                   1391 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:26: SBUF=32; i++;               //envia espa�os
      0002C9 75 99 20         [24] 1392 	mov	_SBUF,#0x20
      0002CC 0E               [12] 1393 	inc	r6
      0002CD 80 F0            [24] 1394 	sjmp	00104$
      0002CF                       1395 00106$:
                           0001FB  1396 	C$serialInt_1.2.h$28$2$28 ==.
                                   1397 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:28: for(i=asc0;i<5;i++){
      0002CF AE 58            [24] 1398 	mov	r6,_algs2ser_PARM_2
      0002D1                       1399 00117$:
      0002D1 BE 05 00         [24] 1400 	cjne	r6,#0x05,00150$
      0002D4                       1401 00150$:
      0002D4 50 1A            [24] 1402 	jnc	00119$
                           000202  1403 	C$serialInt_1.2.h$29$3$29 ==.
                                   1404 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:29: if(i==dot){
      0002D6 EE               [12] 1405 	mov	a,r6
      0002D7 B5 5A 08         [24] 1406 	cjne	a,_algs2ser_PARM_3,00112$
                           000206  1407 	C$serialInt_1.2.h$30$4$30 ==.
                                   1408 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:30: while(!TxFlag);TxFlag=0;//aguarda serial
      0002DA                       1409 00107$:
                                   1410 ;	assignBit
      0002DA 10 05 02         [24] 1411 	jbc	_TxFlag,00154$
      0002DD 80 FB            [24] 1412 	sjmp	00107$
      0002DF                       1413 00154$:
                           00020B  1414 	C$serialInt_1.2.h$31$4$30 ==.
                                   1415 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:31: SBUF=46;                //envia '.'
      0002DF 75 99 2E         [24] 1416 	mov	_SBUF,#0x2e
                           00020E  1417 	C$serialInt_1.2.h$33$3$29 ==.
                                   1418 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:33: while(!TxFlag); TxFlag=0;   //aguarda serial
      0002E2                       1419 00112$:
                                   1420 ;	assignBit
      0002E2 10 05 02         [24] 1421 	jbc	_TxFlag,00155$
      0002E5 80 FB            [24] 1422 	sjmp	00112$
      0002E7                       1423 00155$:
                           000213  1424 	C$serialInt_1.2.h$34$3$29 ==.
                                   1425 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:34: SBUF=(algs[i]);             //envia n�mero
      0002E7 EE               [12] 1426 	mov	a,r6
      0002E8 24 51            [12] 1427 	add	a,#_algs
      0002EA F9               [12] 1428 	mov	r1,a
      0002EB 87 99            [24] 1429 	mov	_SBUF,@r1
                           000219  1430 	C$serialInt_1.2.h$28$2$28 ==.
                                   1431 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:28: for(i=asc0;i<5;i++){
      0002ED 0E               [12] 1432 	inc	r6
      0002EE 80 E1            [24] 1433 	sjmp	00117$
      0002F0                       1434 00119$:
                           00021C  1435 	C$serialInt_1.2.h$36$2$28 ==.
                           00021C  1436 	XG$algs2ser$0$0 ==.
      0002F0 22               [24] 1437 	ret
                                   1438 ;------------------------------------------------------------
                                   1439 ;Allocation info for local variables in function 'int2ascii'
                                   1440 ;------------------------------------------------------------
                                   1441 ;val                       Allocated to registers r6 r7 
                                   1442 ;------------------------------------------------------------
                           00021D  1443 	G$int2ascii$0$0 ==.
                           00021D  1444 	C$serialInt_1.2.h$40$2$28 ==.
                                   1445 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:40: void int2ascii(unsigned int val){
                                   1446 ;	-----------------------------------------
                                   1447 ;	 function int2ascii
                                   1448 ;	-----------------------------------------
      0002F1                       1449 _int2ascii:
      0002F1 AE 82            [24] 1450 	mov	r6,dpl
      0002F3 AF 83            [24] 1451 	mov	r7,dph
                           000221  1452 	C$serialInt_1.2.h$41$1$32 ==.
                                   1453 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:41: algs[0]=32; algs[1]=32;
      0002F5 75 51 20         [24] 1454 	mov	_algs,#0x20
      0002F8 75 52 20         [24] 1455 	mov	(_algs + 0x0001),#0x20
                           000227  1456 	C$serialInt_1.2.h$42$1$32 ==.
                                   1457 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:42: if(val>999){
      0002FB C3               [12] 1458 	clr	c
      0002FC 74 E7            [12] 1459 	mov	a,#0xe7
      0002FE 9E               [12] 1460 	subb	a,r6
      0002FF 74 03            [12] 1461 	mov	a,#0x03
      000301 9F               [12] 1462 	subb	a,r7
      000302 50 56            [24] 1463 	jnc	00102$
                           000230  1464 	C$serialInt_1.2.h$43$1$32 ==.
                                   1465 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:43: algs[0]=0x30+(val/10000);
      000304 75 08 10         [24] 1466 	mov	__divuint_PARM_2,#0x10
      000307 75 09 27         [24] 1467 	mov	(__divuint_PARM_2 + 1),#0x27
      00030A 8E 82            [24] 1468 	mov	dpl,r6
      00030C 8F 83            [24] 1469 	mov	dph,r7
      00030E C0 07            [24] 1470 	push	ar7
      000310 C0 06            [24] 1471 	push	ar6
      000312 12 08 7C         [24] 1472 	lcall	__divuint
      000315 AC 82            [24] 1473 	mov	r4,dpl
      000317 D0 06            [24] 1474 	pop	ar6
      000319 D0 07            [24] 1475 	pop	ar7
      00031B 74 30            [12] 1476 	mov	a,#0x30
      00031D 2C               [12] 1477 	add	a,r4
      00031E F5 51            [12] 1478 	mov	_algs,a
                           00024C  1479 	C$serialInt_1.2.h$44$1$32 ==.
                                   1480 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:44: val=val%10000;
      000320 75 08 10         [24] 1481 	mov	__moduint_PARM_2,#0x10
      000323 75 09 27         [24] 1482 	mov	(__moduint_PARM_2 + 1),#0x27
      000326 8E 82            [24] 1483 	mov	dpl,r6
      000328 8F 83            [24] 1484 	mov	dph,r7
      00032A 12 08 C2         [24] 1485 	lcall	__moduint
                           000259  1486 	C$serialInt_1.2.h$45$1$32 ==.
                                   1487 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:45: algs[1]=0x30+(val/1000);
      00032D AE 82            [24] 1488 	mov	r6,dpl
      00032F AF 83            [24] 1489 	mov	r7,dph
      000331 75 08 E8         [24] 1490 	mov	__divuint_PARM_2,#0xe8
      000334 75 09 03         [24] 1491 	mov	(__divuint_PARM_2 + 1),#0x03
      000337 C0 07            [24] 1492 	push	ar7
      000339 C0 06            [24] 1493 	push	ar6
      00033B 12 08 7C         [24] 1494 	lcall	__divuint
      00033E AC 82            [24] 1495 	mov	r4,dpl
      000340 D0 06            [24] 1496 	pop	ar6
      000342 D0 07            [24] 1497 	pop	ar7
      000344 74 30            [12] 1498 	mov	a,#0x30
      000346 2C               [12] 1499 	add	a,r4
      000347 F5 52            [12] 1500 	mov	(_algs + 0x0001),a
                           000275  1501 	C$serialInt_1.2.h$46$1$32 ==.
                                   1502 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:46: val=val%1000;
      000349 75 08 E8         [24] 1503 	mov	__moduint_PARM_2,#0xe8
      00034C 75 09 03         [24] 1504 	mov	(__moduint_PARM_2 + 1),#0x03
      00034F 8E 82            [24] 1505 	mov	dpl,r6
      000351 8F 83            [24] 1506 	mov	dph,r7
      000353 12 08 C2         [24] 1507 	lcall	__moduint
      000356 AE 82            [24] 1508 	mov	r6,dpl
      000358 AF 83            [24] 1509 	mov	r7,dph
      00035A                       1510 00102$:
                           000286  1511 	C$serialInt_1.2.h$48$1$32 ==.
                                   1512 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:48: algs[2]=0x30+(val/100);
      00035A 75 08 64         [24] 1513 	mov	__divuint_PARM_2,#0x64
      00035D 75 09 00         [24] 1514 	mov	(__divuint_PARM_2 + 1),#0x00
      000360 8E 82            [24] 1515 	mov	dpl,r6
      000362 8F 83            [24] 1516 	mov	dph,r7
      000364 C0 07            [24] 1517 	push	ar7
      000366 C0 06            [24] 1518 	push	ar6
      000368 12 08 7C         [24] 1519 	lcall	__divuint
      00036B AC 82            [24] 1520 	mov	r4,dpl
      00036D D0 06            [24] 1521 	pop	ar6
      00036F D0 07            [24] 1522 	pop	ar7
      000371 74 30            [12] 1523 	mov	a,#0x30
      000373 2C               [12] 1524 	add	a,r4
      000374 F5 53            [12] 1525 	mov	(_algs + 0x0002),a
                           0002A2  1526 	C$serialInt_1.2.h$49$1$32 ==.
                                   1527 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:49: val=val%100;
      000376 75 08 64         [24] 1528 	mov	__moduint_PARM_2,#0x64
      000379 75 09 00         [24] 1529 	mov	(__moduint_PARM_2 + 1),#0x00
      00037C 8E 82            [24] 1530 	mov	dpl,r6
      00037E 8F 83            [24] 1531 	mov	dph,r7
      000380 12 08 C2         [24] 1532 	lcall	__moduint
                           0002AF  1533 	C$serialInt_1.2.h$50$1$32 ==.
                                   1534 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:50: algs[3]=0x30+(val/10);
      000383 AE 82            [24] 1535 	mov	r6,dpl
      000385 AF 83            [24] 1536 	mov	r7,dph
      000387 75 08 0A         [24] 1537 	mov	__divuint_PARM_2,#0x0a
      00038A 75 09 00         [24] 1538 	mov	(__divuint_PARM_2 + 1),#0x00
      00038D C0 07            [24] 1539 	push	ar7
      00038F C0 06            [24] 1540 	push	ar6
      000391 12 08 7C         [24] 1541 	lcall	__divuint
      000394 AC 82            [24] 1542 	mov	r4,dpl
      000396 D0 06            [24] 1543 	pop	ar6
      000398 D0 07            [24] 1544 	pop	ar7
      00039A 74 30            [12] 1545 	mov	a,#0x30
      00039C 2C               [12] 1546 	add	a,r4
      00039D F5 54            [12] 1547 	mov	(_algs + 0x0003),a
                           0002CB  1548 	C$serialInt_1.2.h$51$1$32 ==.
                                   1549 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:51: algs[4]=0x30+(val%10);
      00039F 75 08 0A         [24] 1550 	mov	__moduint_PARM_2,#0x0a
      0003A2 75 09 00         [24] 1551 	mov	(__moduint_PARM_2 + 1),#0x00
      0003A5 8E 82            [24] 1552 	mov	dpl,r6
      0003A7 8F 83            [24] 1553 	mov	dph,r7
      0003A9 12 08 C2         [24] 1554 	lcall	__moduint
      0003AC AE 82            [24] 1555 	mov	r6,dpl
      0003AE 74 30            [12] 1556 	mov	a,#0x30
      0003B0 2E               [12] 1557 	add	a,r6
      0003B1 F5 55            [12] 1558 	mov	(_algs + 0x0004),a
                           0002DF  1559 	C$serialInt_1.2.h$52$1$32 ==.
                           0002DF  1560 	XG$int2ascii$0$0 ==.
      0003B3 22               [24] 1561 	ret
                                   1562 ;------------------------------------------------------------
                                   1563 ;Allocation info for local variables in function 'char2Ser'
                                   1564 ;------------------------------------------------------------
                                   1565 ;val                       Allocated with name '_char2Ser_PARM_2'
                                   1566 ;dot                       Allocated with name '_char2Ser_PARM_3'
                                   1567 ;spc                       Allocated to registers r7 
                                   1568 ;------------------------------------------------------------
                           0002E0  1569 	G$char2Ser$0$0 ==.
                           0002E0  1570 	C$serialInt_1.2.h$57$1$32 ==.
                                   1571 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:57: void char2Ser(char spc, unsigned char val, char dot){
                                   1572 ;	-----------------------------------------
                                   1573 ;	 function char2Ser
                                   1574 ;	-----------------------------------------
      0003B4                       1575 _char2Ser:
      0003B4 AF 82            [24] 1576 	mov	r7,dpl
                           0002E2  1577 	C$serialInt_1.2.h$58$1$35 ==.
                                   1578 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:58: int2ascii(val);
      0003B6 AD 5B            [24] 1579 	mov	r5,_char2Ser_PARM_2
      0003B8 7E 00            [12] 1580 	mov	r6,#0x00
      0003BA 8D 82            [24] 1581 	mov	dpl,r5
      0003BC 8E 83            [24] 1582 	mov	dph,r6
      0003BE C0 07            [24] 1583 	push	ar7
      0003C0 12 02 F1         [24] 1584 	lcall	_int2ascii
      0003C3 D0 07            [24] 1585 	pop	ar7
                           0002F1  1586 	C$serialInt_1.2.h$59$1$35 ==.
                                   1587 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:59: dot=dot+2;
      0003C5 05 5C            [12] 1588 	inc	_char2Ser_PARM_3
      0003C7 05 5C            [12] 1589 	inc	_char2Ser_PARM_3
                           0002F5  1590 	C$serialInt_1.2.h$60$1$35 ==.
                                   1591 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:60: algs2ser(spc, 2, dot);
      0003C9 75 58 02         [24] 1592 	mov	_algs2ser_PARM_2,#0x02
      0003CC 75 59 00         [24] 1593 	mov	(_algs2ser_PARM_2 + 1),#0x00
      0003CF 85 5C 5A         [24] 1594 	mov	_algs2ser_PARM_3,_char2Ser_PARM_3
      0003D2 8F 82            [24] 1595 	mov	dpl,r7
      0003D4 12 02 BB         [24] 1596 	lcall	_algs2ser
                           000303  1597 	C$serialInt_1.2.h$61$1$35 ==.
                           000303  1598 	XG$char2Ser$0$0 ==.
      0003D7 22               [24] 1599 	ret
                                   1600 ;------------------------------------------------------------
                                   1601 ;Allocation info for local variables in function 'int2Ser'
                                   1602 ;------------------------------------------------------------
                                   1603 ;val                       Allocated with name '_int2Ser_PARM_2'
                                   1604 ;dot                       Allocated with name '_int2Ser_PARM_3'
                                   1605 ;spc                       Allocated to registers r7 
                                   1606 ;------------------------------------------------------------
                           000304  1607 	G$int2Ser$0$0 ==.
                           000304  1608 	C$serialInt_1.2.h$65$1$35 ==.
                                   1609 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:65: void int2Ser(char spc, unsigned int val, char dot){
                                   1610 ;	-----------------------------------------
                                   1611 ;	 function int2Ser
                                   1612 ;	-----------------------------------------
      0003D8                       1613 _int2Ser:
      0003D8 AF 82            [24] 1614 	mov	r7,dpl
                           000306  1615 	C$serialInt_1.2.h$66$1$37 ==.
                                   1616 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:66: int2ascii(val);
      0003DA 85 5D 82         [24] 1617 	mov	dpl,_int2Ser_PARM_2
      0003DD 85 5E 83         [24] 1618 	mov	dph,(_int2Ser_PARM_2 + 1)
      0003E0 C0 07            [24] 1619 	push	ar7
      0003E2 12 02 F1         [24] 1620 	lcall	_int2ascii
      0003E5 D0 07            [24] 1621 	pop	ar7
                           000313  1622 	C$serialInt_1.2.h$67$1$37 ==.
                                   1623 ;	C:/Program Files/SDCC/bin/../include/serialInt_1.2.h:67: algs2ser(spc, 0, dot);
      0003E7 E4               [12] 1624 	clr	a
      0003E8 F5 58            [12] 1625 	mov	_algs2ser_PARM_2,a
      0003EA F5 59            [12] 1626 	mov	(_algs2ser_PARM_2 + 1),a
      0003EC 85 5F 5A         [24] 1627 	mov	_algs2ser_PARM_3,_int2Ser_PARM_3
      0003EF 8F 82            [24] 1628 	mov	dpl,r7
      0003F1 12 02 BB         [24] 1629 	lcall	_algs2ser
                           000320  1630 	C$serialInt_1.2.h$68$1$37 ==.
                           000320  1631 	XG$int2Ser$0$0 ==.
      0003F4 22               [24] 1632 	ret
                                   1633 ;------------------------------------------------------------
                                   1634 ;Allocation info for local variables in function 'RTproc_1'
                                   1635 ;------------------------------------------------------------
                           000321  1636 	G$RTproc_1$0$0 ==.
                           000321  1637 	C$controleNivel.c$18$1$37 ==.
                                   1638 ;	controleNivel.c:18: void RTproc_1(){                
                                   1639 ;	-----------------------------------------
                                   1640 ;	 function RTproc_1
                                   1641 ;	-----------------------------------------
      0003F5                       1642 _RTproc_1:
                           000321  1643 	C$controleNivel.c$19$1$38 ==.
                                   1644 ;	controleNivel.c:19: if(cnt200==pwm) P1_3=1;     
      0003F5 E5 66            [12] 1645 	mov	a,_pwm
      0003F7 B5 28 02         [24] 1646 	cjne	a,_cnt200,00103$
                                   1647 ;	assignBit
      0003FA D2 93            [12] 1648 	setb	_P1_3
      0003FC                       1649 00103$:
                           000328  1650 	C$controleNivel.c$20$1$38 ==.
                           000328  1651 	XG$RTproc_1$0$0 ==.
      0003FC 22               [24] 1652 	ret
                                   1653 ;------------------------------------------------------------
                                   1654 ;Allocation info for local variables in function 'RTproc_2'
                                   1655 ;------------------------------------------------------------
                           000329  1656 	G$RTproc_2$0$0 ==.
                           000329  1657 	C$controleNivel.c$21$1$38 ==.
                                   1658 ;	controleNivel.c:21: void RTproc_2(){
                                   1659 ;	-----------------------------------------
                                   1660 ;	 function RTproc_2
                                   1661 ;	-----------------------------------------
      0003FD                       1662 _RTproc_2:
                           000329  1663 	C$controleNivel.c$22$1$39 ==.
                                   1664 ;	controleNivel.c:22: P1_3=0;	                
                                   1665 ;	assignBit
      0003FD C2 93            [12] 1666 	clr	_P1_3
                           00032B  1667 	C$controleNivel.c$23$1$39 ==.
                                   1668 ;	controleNivel.c:23: if(cnt100==99){
      0003FF 74 63            [12] 1669 	mov	a,#0x63
      000401 B5 27 22         [24] 1670 	cjne	a,_cnt100,00106$
                           000330  1671 	C$controleNivel.c$24$2$40 ==.
                                   1672 ;	controleNivel.c:24: sensor=1;
                                   1673 ;	assignBit
      000404 D2 0E            [12] 1674 	setb	_sensor
                           000332  1675 	C$controleNivel.c$25$2$40 ==.
                                   1676 ;	controleNivel.c:25: REN=0;
                                   1677 ;	assignBit
      000406 C2 9C            [12] 1678 	clr	_REN
                           000334  1679 	C$controleNivel.c$26$2$40 ==.
                                   1680 ;	controleNivel.c:26: TMOD=0x92;
      000408 75 89 92         [24] 1681 	mov	_TMOD,#0x92
                           000337  1682 	C$controleNivel.c$27$2$40 ==.
                                   1683 ;	controleNivel.c:27: IT1=1;         
                                   1684 ;	assignBit
      00040B D2 8A            [12] 1685 	setb	_IT1
                           000339  1686 	C$controleNivel.c$28$2$40 ==.
                                   1687 ;	controleNivel.c:28: EX1=1;
                                   1688 ;	assignBit
      00040D D2 AA            [12] 1689 	setb	_EX1
                           00033B  1690 	C$controleNivel.c$29$2$40 ==.
                                   1691 ;	controleNivel.c:29: TL1=0x00;
      00040F 75 8B 00         [24] 1692 	mov	_TL1,#0x00
                           00033E  1693 	C$controleNivel.c$30$2$40 ==.
                                   1694 ;	controleNivel.c:30: TH1=0x00;
      000412 75 8D 00         [24] 1695 	mov	_TH1,#0x00
                           000341  1696 	C$controleNivel.c$32$2$40 ==.
                                   1697 ;	controleNivel.c:32: TrigPin=1;
                                   1698 ;	assignBit
      000415 D2 92            [12] 1699 	setb	_TrigPin
                           000343  1700 	C$controleNivel.c$33$2$40 ==.
                                   1701 ;	controleNivel.c:33: TrigCont=4;
      000417 75 62 04         [24] 1702 	mov	_TrigCont,#0x04
                           000346  1703 	C$controleNivel.c$34$2$40 ==.
                                   1704 ;	controleNivel.c:34: while(TrigCont)TrigCont--;
      00041A                       1705 00101$:
      00041A E5 62            [12] 1706 	mov	a,_TrigCont
      00041C 60 04            [24] 1707 	jz	00103$
      00041E 15 62            [12] 1708 	dec	_TrigCont
      000420 80 F8            [24] 1709 	sjmp	00101$
      000422                       1710 00103$:
                           00034E  1711 	C$controleNivel.c$35$2$40 ==.
                                   1712 ;	controleNivel.c:35: TrigPin=0;
                                   1713 ;	assignBit
      000422 C2 92            [12] 1714 	clr	_TrigPin
                           000350  1715 	C$controleNivel.c$36$2$40 ==.
                                   1716 ;	controleNivel.c:36: sensor=0;
                                   1717 ;	assignBit
      000424 C2 0E            [12] 1718 	clr	_sensor
      000426                       1719 00106$:
                           000352  1720 	C$controleNivel.c$40$1$39 ==.
                           000352  1721 	XG$RTproc_2$0$0 ==.
      000426 22               [24] 1722 	ret
                                   1723 ;------------------------------------------------------------
                                   1724 ;Allocation info for local variables in function 'ext_1'
                                   1725 ;------------------------------------------------------------
                           000353  1726 	G$ext_1$0$0 ==.
                           000353  1727 	C$controleNivel.c$42$1$39 ==.
                                   1728 ;	controleNivel.c:42: void ext_1 (void) __interrupt(2){
                                   1729 ;	-----------------------------------------
                                   1730 ;	 function ext_1
                                   1731 ;	-----------------------------------------
      000427                       1732 _ext_1:
      000427 C0 E0            [24] 1733 	push	acc
      000429 C0 07            [24] 1734 	push	ar7
      00042B C0 06            [24] 1735 	push	ar6
      00042D C0 D0            [24] 1736 	push	psw
      00042F 75 D0 00         [24] 1737 	mov	psw,#0x00
                           00035E  1738 	C$controleNivel.c$44$1$42 ==.
                                   1739 ;	controleNivel.c:44: Echo=TH1<<8;
      000432 AE 8D            [24] 1740 	mov	r6,_TH1
      000434 7F 00            [12] 1741 	mov	r7,#0x00
      000436 8E 61            [24] 1742 	mov	(_Echo + 1),r6
                                   1743 ;	1-genFromRTrack replaced	mov	_Echo,#0x00
      000438 8F 60            [24] 1744 	mov	_Echo,r7
                           000366  1745 	C$controleNivel.c$45$1$42 ==.
                                   1746 ;	controleNivel.c:45: Echo=Echo+TL1;
      00043A AE 8B            [24] 1747 	mov	r6,_TL1
      00043C 7F 00            [12] 1748 	mov	r7,#0x00
      00043E EE               [12] 1749 	mov	a,r6
      00043F 25 60            [12] 1750 	add	a,_Echo
      000441 F5 60            [12] 1751 	mov	_Echo,a
      000443 EF               [12] 1752 	mov	a,r7
      000444 35 61            [12] 1753 	addc	a,(_Echo + 1)
      000446 F5 61            [12] 1754 	mov	(_Echo + 1),a
                           000374  1755 	C$controleNivel.c$47$1$42 ==.
                                   1756 ;	controleNivel.c:47: sensor=0;
                                   1757 ;	assignBit
      000448 C2 0E            [12] 1758 	clr	_sensor
                           000376  1759 	C$controleNivel.c$48$1$42 ==.
                                   1760 ;	controleNivel.c:48: IE=0x93;
      00044A 75 A8 93         [24] 1761 	mov	_IE,#0x93
                           000379  1762 	C$controleNivel.c$49$1$42 ==.
                                   1763 ;	controleNivel.c:49: TMOD=0x22;
      00044D 75 89 22         [24] 1764 	mov	_TMOD,#0x22
                           00037C  1765 	C$controleNivel.c$50$1$42 ==.
                                   1766 ;	controleNivel.c:50: TL1=243;                /*conta 13*/
      000450 75 8B F3         [24] 1767 	mov	_TL1,#0xf3
                           00037F  1768 	C$controleNivel.c$51$1$42 ==.
                                   1769 ;	controleNivel.c:51: TH1=243;                /*recarrega*/
      000453 75 8D F3         [24] 1770 	mov	_TH1,#0xf3
                           000382  1771 	C$controleNivel.c$52$1$42 ==.
                                   1772 ;	controleNivel.c:52: SCON=0xC8;              /*serial modo 3*/
      000456 75 98 C8         [24] 1773 	mov	_SCON,#0xc8
                           000385  1774 	C$controleNivel.c$53$1$42 ==.
                                   1775 ;	controleNivel.c:53: TR1=1;                  /*liga tc1*/
                                   1776 ;	assignBit
      000459 D2 8E            [12] 1777 	setb	_TR1
                           000387  1778 	C$controleNivel.c$54$1$42 ==.
                                   1779 ;	controleNivel.c:54: EX1=0;
                                   1780 ;	assignBit
      00045B C2 AA            [12] 1781 	clr	_EX1
                           000389  1782 	C$controleNivel.c$55$1$42 ==.
                                   1783 ;	controleNivel.c:55: REN=1;
                                   1784 ;	assignBit
      00045D D2 9C            [12] 1785 	setb	_REN
      00045F D0 D0            [24] 1786 	pop	psw
      000461 D0 06            [24] 1787 	pop	ar6
      000463 D0 07            [24] 1788 	pop	ar7
      000465 D0 E0            [24] 1789 	pop	acc
                           000393  1790 	C$controleNivel.c$57$1$42 ==.
                           000393  1791 	XG$ext_1$0$0 ==.
      000467 32               [24] 1792 	reti
                                   1793 ;	eliminated unneeded push/pop dpl
                                   1794 ;	eliminated unneeded push/pop dph
                                   1795 ;	eliminated unneeded push/pop b
                                   1796 ;------------------------------------------------------------
                                   1797 ;Allocation info for local variables in function 'ajustPIDSerial'
                                   1798 ;------------------------------------------------------------
                           000394  1799 	G$ajustPIDSerial$0$0 ==.
                           000394  1800 	C$controleNivel.c$58$1$42 ==.
                                   1801 ;	controleNivel.c:58: void ajustPIDSerial(){
                                   1802 ;	-----------------------------------------
                                   1803 ;	 function ajustPIDSerial
                                   1804 ;	-----------------------------------------
      000468                       1805 _ajustPIDSerial:
                           000394  1806 	C$controleNivel.c$60$1$42 ==.
                                   1807 ;	controleNivel.c:60: }
                           000394  1808 	C$controleNivel.c$60$1$42 ==.
                           000394  1809 	XG$ajustPIDSerial$0$0 ==.
      000468 22               [24] 1810 	ret
                                   1811 ;------------------------------------------------------------
                                   1812 ;Allocation info for local variables in function 'ajustPID'
                                   1813 ;------------------------------------------------------------
                                   1814 ;Kx                        Allocated to registers r7 
                                   1815 ;------------------------------------------------------------
                           000395  1816 	G$ajustPID$0$0 ==.
                           000395  1817 	C$controleNivel.c$62$1$42 ==.
                                   1818 ;	controleNivel.c:62: void ajustPID(){                
                                   1819 ;	-----------------------------------------
                                   1820 ;	 function ajustPID
                                   1821 ;	-----------------------------------------
      000469                       1822 _ajustPID:
                           000395  1823 	C$controleNivel.c$63$1$42 ==.
                                   1824 ;	controleNivel.c:63: unsigned char Kx=0;
      000469 7F 00            [12] 1825 	mov	r7,#0x00
                           000397  1826 	C$controleNivel.c$64$1$42 ==.
                                   1827 ;	controleNivel.c:64: __bit ajust=1;              
                                   1828 ;	assignBit
      00046B D2 0F            [12] 1829 	setb	_ajustPID_ajust_1_44
                           000399  1830 	C$controleNivel.c$65$1$44 ==.
                                   1831 ;	controleNivel.c:65: pwm=0;                      
      00046D 75 66 00         [24] 1832 	mov	_pwm,#0x00
                           00039C  1833 	C$controleNivel.c$66$3$46 ==.
                                   1834 ;	controleNivel.c:66: while(ajust){
      000470                       1835 00123$:
      000470 20 0F 03         [24] 1836 	jb	_ajustPID_ajust_1_44,00170$
      000473 02 05 05         [24] 1837 	ljmp	00126$
      000476                       1838 00170$:
                           0003A2  1839 	C$controleNivel.c$67$2$45 ==.
                                   1840 ;	controleNivel.c:67: if(S1==3){              
      000476 74 03            [12] 1841 	mov	a,#0x03
      000478 B5 22 0B         [24] 1842 	cjne	a,_S1,00102$
                           0003A7  1843 	C$controleNivel.c$68$3$46 ==.
                                   1844 ;	controleNivel.c:68: S1=0;
      00047B 75 22 00         [24] 1845 	mov	_S1,#0x00
                           0003AA  1846 	C$controleNivel.c$69$3$46 ==.
                                   1847 ;	controleNivel.c:69: pid[Kx]++;          
      00047E EF               [12] 1848 	mov	a,r7
      00047F 24 63            [12] 1849 	add	a,#_pid
      000481 F9               [12] 1850 	mov	r1,a
      000482 E7               [12] 1851 	mov	a,@r1
      000483 FE               [12] 1852 	mov	r6,a
      000484 04               [12] 1853 	inc	a
      000485 F7               [12] 1854 	mov	@r1,a
      000486                       1855 00102$:
                           0003B2  1856 	C$controleNivel.c$71$2$45 ==.
                                   1857 ;	controleNivel.c:71: if(S2==3){                  
      000486 74 03            [12] 1858 	mov	a,#0x03
      000488 B5 23 0B         [24] 1859 	cjne	a,_S2,00104$
                           0003B7  1860 	C$controleNivel.c$72$3$47 ==.
                                   1861 ;	controleNivel.c:72: S2=0;
      00048B 75 23 00         [24] 1862 	mov	_S2,#0x00
                           0003BA  1863 	C$controleNivel.c$73$3$47 ==.
                                   1864 ;	controleNivel.c:73: pid[Kx]--;              
      00048E EF               [12] 1865 	mov	a,r7
      00048F 24 63            [12] 1866 	add	a,#_pid
      000491 F9               [12] 1867 	mov	r1,a
      000492 E7               [12] 1868 	mov	a,@r1
      000493 FE               [12] 1869 	mov	r6,a
      000494 14               [12] 1870 	dec	a
      000495 F7               [12] 1871 	mov	@r1,a
      000496                       1872 00104$:
                           0003C2  1873 	C$controleNivel.c$75$2$45 ==.
                                   1874 ;	controleNivel.c:75: if(Kx==0) char2LCD(0x81, pid[0], 2);  
      000496 EF               [12] 1875 	mov	a,r7
      000497 70 10            [24] 1876 	jnz	00106$
      000499 85 63 56         [24] 1877 	mov	_char2LCD_PARM_2,_pid
      00049C 75 57 02         [24] 1878 	mov	_char2LCD_PARM_3,#0x02
      00049F 75 82 81         [24] 1879 	mov	dpl,#0x81
      0004A2 C0 07            [24] 1880 	push	ar7
      0004A4 12 01 CA         [24] 1881 	lcall	_char2LCD
      0004A7 D0 07            [24] 1882 	pop	ar7
      0004A9                       1883 00106$:
                           0003D5  1884 	C$controleNivel.c$76$2$45 ==.
                                   1885 ;	controleNivel.c:76: if(Kx==1) char2LCD(0x86, pid[1], 2);  
      0004A9 BF 01 10         [24] 1886 	cjne	r7,#0x01,00108$
      0004AC 85 64 56         [24] 1887 	mov	_char2LCD_PARM_2,(_pid + 0x0001)
      0004AF 75 57 02         [24] 1888 	mov	_char2LCD_PARM_3,#0x02
      0004B2 75 82 86         [24] 1889 	mov	dpl,#0x86
      0004B5 C0 07            [24] 1890 	push	ar7
      0004B7 12 01 CA         [24] 1891 	lcall	_char2LCD
      0004BA D0 07            [24] 1892 	pop	ar7
      0004BC                       1893 00108$:
                           0003E8  1894 	C$controleNivel.c$77$2$45 ==.
                                   1895 ;	controleNivel.c:77: if(Kx==2) char2LCD(0x8B, pid[2], 2); 
      0004BC BF 02 10         [24] 1896 	cjne	r7,#0x02,00110$
      0004BF 85 65 56         [24] 1897 	mov	_char2LCD_PARM_2,(_pid + 0x0002)
      0004C2 75 57 02         [24] 1898 	mov	_char2LCD_PARM_3,#0x02
      0004C5 75 82 8B         [24] 1899 	mov	dpl,#0x8b
      0004C8 C0 07            [24] 1900 	push	ar7
      0004CA 12 01 CA         [24] 1901 	lcall	_char2LCD
      0004CD D0 07            [24] 1902 	pop	ar7
      0004CF                       1903 00110$:
                           0003FB  1904 	C$controleNivel.c$78$2$45 ==.
                                   1905 ;	controleNivel.c:78: umSeg=0; cnt100=255;    
                                   1906 ;	assignBit
      0004CF C2 00            [12] 1907 	clr	_umSeg
      0004D1 75 27 FF         [24] 1908 	mov	_cnt100,#0xff
                           000400  1909 	C$controleNivel.c$79$2$45 ==.
                                   1910 ;	controleNivel.c:79: while(S1==2);
      0004D4                       1911 00111$:
      0004D4 74 02            [12] 1912 	mov	a,#0x02
      0004D6 B5 22 02         [24] 1913 	cjne	a,_S1,00180$
      0004D9 80 F9            [24] 1914 	sjmp	00111$
      0004DB                       1915 00180$:
                           000407  1916 	C$controleNivel.c$80$2$45 ==.
                                   1917 ;	controleNivel.c:80: if(umSeg){S1=0;         
      0004DB 30 00 0B         [24] 1918 	jnb	_umSeg,00117$
      0004DE 75 22 00         [24] 1919 	mov	_S1,#0x00
                           00040D  1920 	C$controleNivel.c$81$3$48 ==.
                                   1921 ;	controleNivel.c:81: umSeg=0; Kx++;      
                                   1922 ;	assignBit
      0004E1 C2 00            [12] 1923 	clr	_umSeg
      0004E3 0F               [12] 1924 	inc	r7
                           000410  1925 	C$controleNivel.c$82$3$48 ==.
                                   1926 ;	controleNivel.c:82: if(Kx==3) Kx=0;     
      0004E4 BF 03 02         [24] 1927 	cjne	r7,#0x03,00117$
      0004E7 7F 00            [12] 1928 	mov	r7,#0x00
      0004E9                       1929 00117$:
                           000415  1930 	C$controleNivel.c$84$2$45 ==.
                                   1931 ;	controleNivel.c:84: umSeg=0; cnt100=255;    
                                   1932 ;	assignBit
      0004E9 C2 00            [12] 1933 	clr	_umSeg
      0004EB 75 27 FF         [24] 1934 	mov	_cnt100,#0xff
                           00041A  1935 	C$controleNivel.c$85$2$45 ==.
                                   1936 ;	controleNivel.c:85: while(S2==2);
      0004EE                       1937 00118$:
      0004EE 74 02            [12] 1938 	mov	a,#0x02
      0004F0 B5 23 02         [24] 1939 	cjne	a,_S2,00184$
      0004F3 80 F9            [24] 1940 	sjmp	00118$
      0004F5                       1941 00184$:
                           000421  1942 	C$controleNivel.c$86$2$45 ==.
                                   1943 ;	controleNivel.c:86: if(umSeg){S2=0;         
      0004F5 20 00 03         [24] 1944 	jb	_umSeg,00185$
      0004F8 02 04 70         [24] 1945 	ljmp	00123$
      0004FB                       1946 00185$:
      0004FB 75 23 00         [24] 1947 	mov	_S2,#0x00
                           00042A  1948 	C$controleNivel.c$87$3$49 ==.
                                   1949 ;	controleNivel.c:87: umSeg=0; ajust=0;   
                                   1950 ;	assignBit
      0004FE C2 00            [12] 1951 	clr	_umSeg
                                   1952 ;	assignBit
      000500 C2 0F            [12] 1953 	clr	_ajustPID_ajust_1_44
      000502 02 04 70         [24] 1954 	ljmp	00123$
      000505                       1955 00126$:
                           000431  1956 	C$controleNivel.c$89$1$44 ==.
                           000431  1957 	XG$ajustPID$0$0 ==.
      000505 22               [24] 1958 	ret
                                   1959 ;------------------------------------------------------------
                                   1960 ;Allocation info for local variables in function 'main'
                                   1961 ;------------------------------------------------------------
                                   1962 ;setup                     Allocated with name '_main_setup_1_50'
                                   1963 ;tempC                     Allocated with name '_main_tempC_1_50'
                                   1964 ;errAt                     Allocated with name '_main_errAt_1_50'
                                   1965 ;erAnt                     Allocated to registers r7 
                                   1966 ;ctrlAt                    Allocated with name '_main_ctrlAt_1_50'
                                   1967 ;ctlAnt                    Allocated to registers 
                                   1968 ;P                         Allocated with name '_main_P_1_50'
                                   1969 ;I                         Allocated with name '_main_I_1_50'
                                   1970 ;D                         Allocated to registers r5 r6 
                                   1971 ;tempo                     Allocated with name '_main_tempo_1_50'
                                   1972 ;i                         Allocated to registers r7 
                                   1973 ;contSetup                 Allocated with name '_main_contSetup_1_50'
                                   1974 ;setupR                    Allocated with name '_main_setupR_1_50'
                                   1975 ;number                    Allocated with name '_main_number_1_50'
                                   1976 ;------------------------------------------------------------
                           000432  1977 	G$main$0$0 ==.
                           000432  1978 	C$controleNivel.c$91$1$44 ==.
                                   1979 ;	controleNivel.c:91: void main (){
                                   1980 ;	-----------------------------------------
                                   1981 ;	 function main
                                   1982 ;	-----------------------------------------
      000506                       1983 _main:
                           000432  1984 	C$controleNivel.c$92$1$44 ==.
                                   1985 ;	controleNivel.c:92: unsigned char setup=25;
      000506 75 68 19         [24] 1986 	mov	_main_setup_1_50,#0x19
                           000435  1987 	C$controleNivel.c$93$1$44 ==.
                                   1988 ;	controleNivel.c:93: unsigned char tempC=0;
                           000435  1989 	C$controleNivel.c$94$1$44 ==.
                                   1990 ;	controleNivel.c:94: signed char errAt=0;           
                           000435  1991 	C$controleNivel.c$96$1$44 ==.
                                   1992 ;	controleNivel.c:96: signed int ctrlAt=0;           
      000509 E4               [12] 1993 	clr	a
      00050A F5 69            [12] 1994 	mov	_main_tempC_1_50,a
      00050C F5 6A            [12] 1995 	mov	_main_errAt_1_50,a
      00050E F5 6B            [12] 1996 	mov	_main_ctrlAt_1_50,a
      000510 F5 6C            [12] 1997 	mov	(_main_ctrlAt_1_50 + 1),a
                           00043E  1998 	C$controleNivel.c$99$1$44 ==.
                                   1999 ;	controleNivel.c:99: unsigned int tempo=0;
      000512 F5 71            [12] 2000 	mov	_main_tempo_1_50,a
      000514 F5 72            [12] 2001 	mov	(_main_tempo_1_50 + 1),a
                           000442  2002 	C$controleNivel.c$101$1$44 ==.
                                   2003 ;	controleNivel.c:101: unsigned char contSetup=0;
                                   2004 ;	1-genFromRTrack replaced	mov	_main_contSetup_1_50,#0x00
      000516 F5 73            [12] 2005 	mov	_main_contSetup_1_50,a
                           000444  2006 	C$controleNivel.c$102$1$44 ==.
                                   2007 ;	controleNivel.c:102: unsigned char setupR[3]={0,0,0};
                                   2008 ;	1-genFromRTrack replaced	mov	_main_setupR_1_50,#0x00
      000518 F5 74            [12] 2009 	mov	_main_setupR_1_50,a
                                   2010 ;	1-genFromRTrack replaced	mov	(_main_setupR_1_50 + 0x0001),#0x00
      00051A F5 75            [12] 2011 	mov	(_main_setupR_1_50 + 0x0001),a
                                   2012 ;	1-genFromRTrack replaced	mov	(_main_setupR_1_50 + 0x0002),#0x00
      00051C F5 76            [12] 2013 	mov	(_main_setupR_1_50 + 0x0002),a
                           00044A  2014 	C$controleNivel.c$103$1$44 ==.
                                   2015 ;	controleNivel.c:103: unsigned char number=0;
                                   2016 ;	1-genFromRTrack replaced	mov	_main_number_1_50,#0x00
      00051E F5 77            [12] 2017 	mov	_main_number_1_50,a
                           00044C  2018 	C$controleNivel.c$105$1$50 ==.
                                   2019 ;	controleNivel.c:105: TrigPin=0;
                                   2020 ;	assignBit
      000520 C2 92            [12] 2021 	clr	_TrigPin
                           00044E  2022 	C$controleNivel.c$107$1$50 ==.
                                   2023 ;	controleNivel.c:107: inic();
      000522 12 02 88         [24] 2024 	lcall	_inic
                           000451  2025 	C$controleNivel.c$108$1$50 ==.
                                   2026 ;	controleNivel.c:108: TMOD=0x92;
      000525 75 89 92         [24] 2027 	mov	_TMOD,#0x92
                           000454  2028 	C$controleNivel.c$109$1$50 ==.
                                   2029 ;	controleNivel.c:109: IT1=1;         
                                   2030 ;	assignBit
      000528 D2 8A            [12] 2031 	setb	_IT1
                           000456  2032 	C$controleNivel.c$110$1$50 ==.
                                   2033 ;	controleNivel.c:110: EX1=1;
                                   2034 ;	assignBit
      00052A D2 AA            [12] 2035 	setb	_EX1
                           000458  2036 	C$controleNivel.c$111$1$50 ==.
                                   2037 ;	controleNivel.c:111: P1_3=0; 
                                   2038 ;	assignBit
      00052C C2 93            [12] 2039 	clr	_P1_3
                           00045A  2040 	C$controleNivel.c$114$1$50 ==.
                                   2041 ;	controleNivel.c:114: wrLCD4(comand,0x80);
                                   2042 ;	assignBit
      00052E C2 0D            [12] 2043 	clr	_wrLCD4_PARM_1
      000530 75 82 80         [24] 2044 	mov	dpl,#0x80
      000533 12 01 A4         [24] 2045 	lcall	_wrLCD4
                           000462  2046 	C$controleNivel.c$115$2$51 ==.
                                   2047 ;	controleNivel.c:115: for(i=0;i<12;i++){
      000536 7F 00            [12] 2048 	mov	r7,#0x00
      000538                       2049 00157$:
                           000464  2050 	C$controleNivel.c$116$3$52 ==.
                                   2051 ;	controleNivel.c:116: wrLCD4(letra, Tit1[i]);   
      000538 EF               [12] 2052 	mov	a,r7
      000539 90 09 4F         [24] 2053 	mov	dptr,#_Tit1
      00053C 93               [24] 2054 	movc	a,@a+dptr
      00053D FA               [12] 2055 	mov	r2,a
                                   2056 ;	assignBit
      00053E D2 0D            [12] 2057 	setb	_wrLCD4_PARM_1
      000540 8A 82            [24] 2058 	mov	dpl,r2
      000542 C0 07            [24] 2059 	push	ar7
      000544 12 01 A4         [24] 2060 	lcall	_wrLCD4
      000547 D0 07            [24] 2061 	pop	ar7
                           000475  2062 	C$controleNivel.c$115$2$51 ==.
                                   2063 ;	controleNivel.c:115: for(i=0;i<12;i++){
      000549 0F               [12] 2064 	inc	r7
      00054A BF 0C 00         [24] 2065 	cjne	r7,#0x0c,00256$
      00054D                       2066 00256$:
      00054D 40 E9            [24] 2067 	jc	00157$
                           00047B  2068 	C$controleNivel.c$118$1$50 ==.
                                   2069 ;	controleNivel.c:118: wrLCD4(comand,0xC0);
                                   2070 ;	assignBit
      00054F C2 0D            [12] 2071 	clr	_wrLCD4_PARM_1
      000551 75 82 C0         [24] 2072 	mov	dpl,#0xc0
      000554 12 01 A4         [24] 2073 	lcall	_wrLCD4
                           000483  2074 	C$controleNivel.c$119$2$53 ==.
                                   2075 ;	controleNivel.c:119: for(i=0;i<12;i++){
      000557 7F 00            [12] 2076 	mov	r7,#0x00
      000559                       2077 00159$:
                           000485  2078 	C$controleNivel.c$120$3$54 ==.
                                   2079 ;	controleNivel.c:120: wrLCD4(letra, Tit2[i]);   
      000559 EF               [12] 2080 	mov	a,r7
      00055A 90 09 5C         [24] 2081 	mov	dptr,#_Tit2
      00055D 93               [24] 2082 	movc	a,@a+dptr
      00055E FA               [12] 2083 	mov	r2,a
                                   2084 ;	assignBit
      00055F D2 0D            [12] 2085 	setb	_wrLCD4_PARM_1
      000561 8A 82            [24] 2086 	mov	dpl,r2
      000563 C0 07            [24] 2087 	push	ar7
      000565 12 01 A4         [24] 2088 	lcall	_wrLCD4
      000568 D0 07            [24] 2089 	pop	ar7
                           000496  2090 	C$controleNivel.c$119$2$53 ==.
                                   2091 ;	controleNivel.c:119: for(i=0;i<12;i++){
      00056A 0F               [12] 2092 	inc	r7
      00056B BF 0C 00         [24] 2093 	cjne	r7,#0x0c,00258$
      00056E                       2094 00258$:
      00056E 40 E9            [24] 2095 	jc	00159$
                           00049C  2096 	C$controleNivel.c$122$1$50 ==.
                                   2097 ;	controleNivel.c:122: wrLCD4(comand,0xC4);
                                   2098 ;	assignBit
      000570 C2 0D            [12] 2099 	clr	_wrLCD4_PARM_1
      000572 75 82 C4         [24] 2100 	mov	dpl,#0xc4
      000575 12 01 A4         [24] 2101 	lcall	_wrLCD4
                           0004A4  2102 	C$controleNivel.c$123$1$50 ==.
                                   2103 ;	controleNivel.c:123: wrLCD4(letra, setup);
                                   2104 ;	assignBit
      000578 D2 0D            [12] 2105 	setb	_wrLCD4_PARM_1
      00057A 75 82 19         [24] 2106 	mov	dpl,#0x19
      00057D 12 01 A4         [24] 2107 	lcall	_wrLCD4
                           0004AC  2108 	C$controleNivel.c$125$1$50 ==.
                                   2109 ;	controleNivel.c:125: while(1){
      000580                       2110 00155$:
                           0004AC  2111 	C$controleNivel.c$127$2$55 ==.
                                   2112 ;	controleNivel.c:127: char2LCD(0xCC, tempC, 3); 
      000580 85 69 56         [24] 2113 	mov	_char2LCD_PARM_2,_main_tempC_1_50
      000583 75 57 03         [24] 2114 	mov	_char2LCD_PARM_3,#0x03
      000586 75 82 CC         [24] 2115 	mov	dpl,#0xcc
      000589 12 01 CA         [24] 2116 	lcall	_char2LCD
                           0004B8  2117 	C$controleNivel.c$129$2$55 ==.
                                   2118 ;	controleNivel.c:129: if(!sensor){
      00058C 30 0E 03         [24] 2119 	jnb	_sensor,00260$
      00058F 02 06 D1         [24] 2120 	ljmp	00137$
      000592                       2121 00260$:
                           0004BE  2122 	C$controleNivel.c$130$3$56 ==.
                                   2123 ;	controleNivel.c:130: if(RxFlag){ RxFlag=0;
                                   2124 ;	assignBit
      000592 10 04 02         [24] 2125 	jbc	_RxFlag,00261$
      000595 80 02            [24] 2126 	sjmp	00104$
      000597                       2127 00261$:
                           0004C3  2128 	C$controleNivel.c$131$4$57 ==.
                                   2129 ;	controleNivel.c:131: contSetup++;
      000597 05 73            [12] 2130 	inc	_main_contSetup_1_50
      000599                       2131 00104$:
                           0004C5  2132 	C$controleNivel.c$133$3$56 ==.
                                   2133 ;	controleNivel.c:133: if(TxFlag){
      000599 20 05 03         [24] 2134 	jb	_TxFlag,00262$
      00059C 02 06 D1         [24] 2135 	ljmp	00137$
      00059F                       2136 00262$:
                           0004CB  2137 	C$controleNivel.c$135$4$58 ==.
                                   2138 ;	controleNivel.c:135: if(RxByte == 102){
      00059F 74 66            [12] 2139 	mov	a,#0x66
      0005A1 B5 2B 19         [24] 2140 	cjne	a,_RxByte,00106$
                           0004D0  2141 	C$controleNivel.c$136$5$59 ==.
                                   2142 ;	controleNivel.c:136: wrLCD4(comand,0xCF);
                                   2143 ;	assignBit
      0005A4 C2 0D            [12] 2144 	clr	_wrLCD4_PARM_1
      0005A6 75 82 CF         [24] 2145 	mov	dpl,#0xcf
      0005A9 12 01 A4         [24] 2146 	lcall	_wrLCD4
                           0004D8  2147 	C$controleNivel.c$137$5$59 ==.
                                   2148 ;	controleNivel.c:137: wrLCD4(letra, 'F');
                                   2149 ;	assignBit
      0005AC D2 0D            [12] 2150 	setb	_wrLCD4_PARM_1
      0005AE 75 82 46         [24] 2151 	mov	dpl,#0x46
      0005B1 12 01 A4         [24] 2152 	lcall	_wrLCD4
                           0004E0  2153 	C$controleNivel.c$138$5$59 ==.
                                   2154 ;	controleNivel.c:138: malha=1;
      0005B4 75 67 01         [24] 2155 	mov	_malha,#0x01
                           0004E3  2156 	C$controleNivel.c$139$5$59 ==.
                                   2157 ;	controleNivel.c:139: contSetup=0;
      0005B7 75 73 00         [24] 2158 	mov	_main_contSetup_1_50,#0x00
                           0004E6  2159 	C$controleNivel.c$140$5$59 ==.
                                   2160 ;	controleNivel.c:140: setup=10;
      0005BA 75 68 0A         [24] 2161 	mov	_main_setup_1_50,#0x0a
      0005BD                       2162 00106$:
                           0004E9  2163 	C$controleNivel.c$142$4$58 ==.
                                   2164 ;	controleNivel.c:142: if(RxByte == 97){
      0005BD 74 61            [12] 2165 	mov	a,#0x61
      0005BF B5 2B 19         [24] 2166 	cjne	a,_RxByte,00108$
                           0004EE  2167 	C$controleNivel.c$143$5$60 ==.
                                   2168 ;	controleNivel.c:143: wrLCD4(comand,0xCF);
                                   2169 ;	assignBit
      0005C2 C2 0D            [12] 2170 	clr	_wrLCD4_PARM_1
      0005C4 75 82 CF         [24] 2171 	mov	dpl,#0xcf
      0005C7 12 01 A4         [24] 2172 	lcall	_wrLCD4
                           0004F6  2173 	C$controleNivel.c$144$5$60 ==.
                                   2174 ;	controleNivel.c:144: wrLCD4(letra, 'A');
                                   2175 ;	assignBit
      0005CA D2 0D            [12] 2176 	setb	_wrLCD4_PARM_1
      0005CC 75 82 41         [24] 2177 	mov	dpl,#0x41
      0005CF 12 01 A4         [24] 2178 	lcall	_wrLCD4
                           0004FE  2179 	C$controleNivel.c$145$5$60 ==.
                                   2180 ;	controleNivel.c:145: malha=0;
      0005D2 75 67 00         [24] 2181 	mov	_malha,#0x00
                           000501  2182 	C$controleNivel.c$146$5$60 ==.
                                   2183 ;	controleNivel.c:146: contSetup=0;
      0005D5 75 73 00         [24] 2184 	mov	_main_contSetup_1_50,#0x00
                           000504  2185 	C$controleNivel.c$147$5$60 ==.
                                   2186 ;	controleNivel.c:147: setup=25;
      0005D8 75 68 19         [24] 2187 	mov	_main_setup_1_50,#0x19
      0005DB                       2188 00108$:
                           000507  2189 	C$controleNivel.c$150$4$58 ==.
                                   2190 ;	controleNivel.c:150: if(RxByte == 32 || RxByte == 112 || RxByte == 105 || RxByte == 100 || RxByte == 109){
      0005DB 74 20            [12] 2191 	mov	a,#0x20
      0005DD B5 2B 02         [24] 2192 	cjne	a,_RxByte,00267$
      0005E0 80 1F            [24] 2193 	sjmp	00127$
      0005E2                       2194 00267$:
      0005E2 74 70            [12] 2195 	mov	a,#0x70
      0005E4 B5 2B 02         [24] 2196 	cjne	a,_RxByte,00268$
      0005E7 80 18            [24] 2197 	sjmp	00127$
      0005E9                       2198 00268$:
      0005E9 74 69            [12] 2199 	mov	a,#0x69
      0005EB B5 2B 02         [24] 2200 	cjne	a,_RxByte,00269$
      0005EE 80 11            [24] 2201 	sjmp	00127$
      0005F0                       2202 00269$:
      0005F0 74 64            [12] 2203 	mov	a,#0x64
      0005F2 B5 2B 02         [24] 2204 	cjne	a,_RxByte,00270$
      0005F5 80 0A            [24] 2205 	sjmp	00127$
      0005F7                       2206 00270$:
      0005F7 74 6D            [12] 2207 	mov	a,#0x6d
      0005F9 B5 2B 02         [24] 2208 	cjne	a,_RxByte,00271$
      0005FC 80 03            [24] 2209 	sjmp	00272$
      0005FE                       2210 00271$:
      0005FE 02 06 C9         [24] 2211 	ljmp	00128$
      000601                       2212 00272$:
      000601                       2213 00127$:
                           00052D  2214 	C$controleNivel.c$152$5$61 ==.
                                   2215 ;	controleNivel.c:152: if(contSetup-1 == 1){
      000601 AA 73            [24] 2216 	mov	r2,_main_contSetup_1_50
      000603 7F 00            [12] 2217 	mov	r7,#0x00
      000605 EA               [12] 2218 	mov	a,r2
      000606 24 FF            [12] 2219 	add	a,#0xff
      000608 FC               [12] 2220 	mov	r4,a
      000609 EF               [12] 2221 	mov	a,r7
      00060A 34 FF            [12] 2222 	addc	a,#0xff
      00060C FE               [12] 2223 	mov	r6,a
      00060D BC 01 0B         [24] 2224 	cjne	r4,#0x01,00115$
      000610 BE 00 08         [24] 2225 	cjne	r6,#0x00,00115$
                           00053F  2226 	C$controleNivel.c$153$6$62 ==.
                                   2227 ;	controleNivel.c:153: number = setupR[0]-48;
      000613 E5 74            [12] 2228 	mov	a,_main_setupR_1_50
      000615 24 D0            [12] 2229 	add	a,#0xd0
      000617 F5 77            [12] 2230 	mov	_main_number_1_50,a
      000619 80 45            [24] 2231 	sjmp	00116$
      00061B                       2232 00115$:
                           000547  2233 	C$controleNivel.c$154$5$61 ==.
                                   2234 ;	controleNivel.c:154: }else if(contSetup-1 == 2){
      00061B EA               [12] 2235 	mov	a,r2
      00061C 24 FF            [12] 2236 	add	a,#0xff
      00061E FC               [12] 2237 	mov	r4,a
      00061F EF               [12] 2238 	mov	a,r7
      000620 34 FF            [12] 2239 	addc	a,#0xff
      000622 FE               [12] 2240 	mov	r6,a
      000623 BC 02 15         [24] 2241 	cjne	r4,#0x02,00112$
      000626 BE 00 12         [24] 2242 	cjne	r6,#0x00,00112$
                           000555  2243 	C$controleNivel.c$155$6$63 ==.
                                   2244 ;	controleNivel.c:155: number = ((setupR[0]-48)*10)+(setupR[1]-48);
      000629 E5 74            [12] 2245 	mov	a,_main_setupR_1_50
      00062B 24 D0            [12] 2246 	add	a,#0xd0
      00062D 75 F0 0A         [24] 2247 	mov	b,#0x0a
      000630 A4               [48] 2248 	mul	ab
      000631 FE               [12] 2249 	mov	r6,a
      000632 E5 75            [12] 2250 	mov	a,(_main_setupR_1_50 + 0x0001)
      000634 24 D0            [12] 2251 	add	a,#0xd0
      000636 2E               [12] 2252 	add	a,r6
      000637 F5 77            [12] 2253 	mov	_main_number_1_50,a
      000639 80 25            [24] 2254 	sjmp	00116$
      00063B                       2255 00112$:
                           000567  2256 	C$controleNivel.c$157$5$61 ==.
                                   2257 ;	controleNivel.c:157: }else if(contSetup-1 == 3){
      00063B 1A               [12] 2258 	dec	r2
      00063C BA FF 01         [24] 2259 	cjne	r2,#0xff,00277$
      00063F 1F               [12] 2260 	dec	r7
      000640                       2261 00277$:
      000640 BA 03 1D         [24] 2262 	cjne	r2,#0x03,00116$
      000643 BF 00 1A         [24] 2263 	cjne	r7,#0x00,00116$
                           000572  2264 	C$controleNivel.c$158$6$64 ==.
                                   2265 ;	controleNivel.c:158: number = ((setupR[0]-48)*100)+((setupR[1]-48)*10)+((setupR[2]-48));
      000646 E5 74            [12] 2266 	mov	a,_main_setupR_1_50
      000648 24 D0            [12] 2267 	add	a,#0xd0
      00064A 75 F0 64         [24] 2268 	mov	b,#0x64
      00064D A4               [48] 2269 	mul	ab
      00064E FF               [12] 2270 	mov	r7,a
      00064F E5 75            [12] 2271 	mov	a,(_main_setupR_1_50 + 0x0001)
      000651 24 D0            [12] 2272 	add	a,#0xd0
      000653 75 F0 0A         [24] 2273 	mov	b,#0x0a
      000656 A4               [48] 2274 	mul	ab
      000657 2F               [12] 2275 	add	a,r7
      000658 FF               [12] 2276 	mov	r7,a
      000659 E5 76            [12] 2277 	mov	a,(_main_setupR_1_50 + 0x0002)
      00065B 24 D0            [12] 2278 	add	a,#0xd0
      00065D 2F               [12] 2279 	add	a,r7
      00065E F5 77            [12] 2280 	mov	_main_number_1_50,a
      000660                       2281 00116$:
                           00058C  2282 	C$controleNivel.c$160$5$61 ==.
                                   2283 ;	controleNivel.c:160: if(RxByte == 109){
      000660 74 6D            [12] 2284 	mov	a,#0x6d
      000662 B5 2B 06         [24] 2285 	cjne	a,_RxByte,00118$
                           000591  2286 	C$controleNivel.c$161$6$65 ==.
                                   2287 ;	controleNivel.c:161: pwm = number;
      000665 85 77 66         [24] 2288 	mov	_pwm,_main_number_1_50
                           000594  2289 	C$controleNivel.c$162$6$65 ==.
                                   2290 ;	controleNivel.c:162: contSetup = 0;
      000668 75 73 00         [24] 2291 	mov	_main_contSetup_1_50,#0x00
      00066B                       2292 00118$:
                           000597  2293 	C$controleNivel.c$164$5$61 ==.
                                   2294 ;	controleNivel.c:164: if(RxByte == 32){
      00066B 74 20            [12] 2295 	mov	a,#0x20
      00066D B5 2B 12         [24] 2296 	cjne	a,_RxByte,00120$
                           00059C  2297 	C$controleNivel.c$165$6$66 ==.
                                   2298 ;	controleNivel.c:165: setup = number;
      000670 85 77 68         [24] 2299 	mov	_main_setup_1_50,_main_number_1_50
                           00059F  2300 	C$controleNivel.c$166$6$66 ==.
                                   2301 ;	controleNivel.c:166: contSetup = 0;
      000673 75 73 00         [24] 2302 	mov	_main_contSetup_1_50,#0x00
                           0005A2  2303 	C$controleNivel.c$167$6$66 ==.
                                   2304 ;	controleNivel.c:167: char2LCD(0xC4, setup, 3);
      000676 85 77 56         [24] 2305 	mov	_char2LCD_PARM_2,_main_number_1_50
      000679 75 57 03         [24] 2306 	mov	_char2LCD_PARM_3,#0x03
      00067C 75 82 C4         [24] 2307 	mov	dpl,#0xc4
      00067F 12 01 CA         [24] 2308 	lcall	_char2LCD
      000682                       2309 00120$:
                           0005AE  2310 	C$controleNivel.c$169$5$61 ==.
                                   2311 ;	controleNivel.c:169: if(RxByte == 112 ){
      000682 74 70            [12] 2312 	mov	a,#0x70
      000684 B5 2B 12         [24] 2313 	cjne	a,_RxByte,00122$
                           0005B3  2314 	C$controleNivel.c$170$6$67 ==.
                                   2315 ;	controleNivel.c:170: pid[0] = number;
      000687 85 77 63         [24] 2316 	mov	_pid,_main_number_1_50
                           0005B6  2317 	C$controleNivel.c$171$6$67 ==.
                                   2318 ;	controleNivel.c:171: contSetup = 0;
      00068A 75 73 00         [24] 2319 	mov	_main_contSetup_1_50,#0x00
                           0005B9  2320 	C$controleNivel.c$172$6$67 ==.
                                   2321 ;	controleNivel.c:172: char2LCD(0x81, pid[0], 2);
      00068D 85 77 56         [24] 2322 	mov	_char2LCD_PARM_2,_main_number_1_50
      000690 75 57 02         [24] 2323 	mov	_char2LCD_PARM_3,#0x02
      000693 75 82 81         [24] 2324 	mov	dpl,#0x81
      000696 12 01 CA         [24] 2325 	lcall	_char2LCD
      000699                       2326 00122$:
                           0005C5  2327 	C$controleNivel.c$174$5$61 ==.
                                   2328 ;	controleNivel.c:174: if(RxByte == 105){
      000699 74 69            [12] 2329 	mov	a,#0x69
      00069B B5 2B 12         [24] 2330 	cjne	a,_RxByte,00124$
                           0005CA  2331 	C$controleNivel.c$175$6$68 ==.
                                   2332 ;	controleNivel.c:175: pid[1] = number;
      00069E 85 77 64         [24] 2333 	mov	(_pid + 0x0001),_main_number_1_50
                           0005CD  2334 	C$controleNivel.c$176$6$68 ==.
                                   2335 ;	controleNivel.c:176: contSetup = 0;
      0006A1 75 73 00         [24] 2336 	mov	_main_contSetup_1_50,#0x00
                           0005D0  2337 	C$controleNivel.c$177$6$68 ==.
                                   2338 ;	controleNivel.c:177: char2LCD(0x86, pid[1], 2);
      0006A4 85 77 56         [24] 2339 	mov	_char2LCD_PARM_2,_main_number_1_50
      0006A7 75 57 02         [24] 2340 	mov	_char2LCD_PARM_3,#0x02
      0006AA 75 82 86         [24] 2341 	mov	dpl,#0x86
      0006AD 12 01 CA         [24] 2342 	lcall	_char2LCD
      0006B0                       2343 00124$:
                           0005DC  2344 	C$controleNivel.c$179$5$61 ==.
                                   2345 ;	controleNivel.c:179: if(RxByte == 100){
      0006B0 74 64            [12] 2346 	mov	a,#0x64
      0006B2 B5 2B 1C         [24] 2347 	cjne	a,_RxByte,00137$
                           0005E1  2348 	C$controleNivel.c$180$6$69 ==.
                                   2349 ;	controleNivel.c:180: pid[2] = number;
      0006B5 85 77 65         [24] 2350 	mov	(_pid + 0x0002),_main_number_1_50
                           0005E4  2351 	C$controleNivel.c$181$6$69 ==.
                                   2352 ;	controleNivel.c:181: contSetup = 0;
      0006B8 75 73 00         [24] 2353 	mov	_main_contSetup_1_50,#0x00
                           0005E7  2354 	C$controleNivel.c$182$6$69 ==.
                                   2355 ;	controleNivel.c:182: char2LCD(0x8B, pid[2], 2);
      0006BB 85 77 56         [24] 2356 	mov	_char2LCD_PARM_2,_main_number_1_50
      0006BE 75 57 02         [24] 2357 	mov	_char2LCD_PARM_3,#0x02
      0006C1 75 82 8B         [24] 2358 	mov	dpl,#0x8b
      0006C4 12 01 CA         [24] 2359 	lcall	_char2LCD
      0006C7 80 08            [24] 2360 	sjmp	00137$
      0006C9                       2361 00128$:
                           0005F5  2362 	C$controleNivel.c$185$5$70 ==.
                                   2363 ;	controleNivel.c:185: setupR[contSetup-1] = RxByte;
      0006C9 E5 73            [12] 2364 	mov	a,_main_contSetup_1_50
      0006CB 14               [12] 2365 	dec	a
      0006CC 24 74            [12] 2366 	add	a,#_main_setupR_1_50
      0006CE F8               [12] 2367 	mov	r0,a
      0006CF A6 2B            [24] 2368 	mov	@r0,_RxByte
      0006D1                       2369 00137$:
                           0005FD  2370 	C$controleNivel.c$190$2$55 ==.
                                   2371 ;	controleNivel.c:190: if(malha == 0){
      0006D1 E5 67            [12] 2372 	mov	a,_malha
                           0005FF  2373 	C$controleNivel.c$191$3$71 ==.
                                   2374 ;	controleNivel.c:191: char2Ser(0,pwm,3);
      0006D3 70 26            [24] 2375 	jnz	00139$
      0006D5 85 66 5B         [24] 2376 	mov	_char2Ser_PARM_2,_pwm
      0006D8 75 5C 03         [24] 2377 	mov	_char2Ser_PARM_3,#0x03
      0006DB F5 82            [12] 2378 	mov	dpl,a
      0006DD 12 03 B4         [24] 2379 	lcall	_char2Ser
                           00060C  2380 	C$controleNivel.c$192$3$71 ==.
                                   2381 ;	controleNivel.c:192: char2Ser(2,tempC,3);
      0006E0 85 69 5B         [24] 2382 	mov	_char2Ser_PARM_2,_main_tempC_1_50
      0006E3 75 5C 03         [24] 2383 	mov	_char2Ser_PARM_3,#0x03
      0006E6 75 82 02         [24] 2384 	mov	dpl,#0x02
      0006E9 12 03 B4         [24] 2385 	lcall	_char2Ser
                           000618  2386 	C$controleNivel.c$193$3$71 ==.
                                   2387 ;	controleNivel.c:193: int2Ser(2, tempo,5);
      0006EC 85 71 5D         [24] 2388 	mov	_int2Ser_PARM_2,_main_tempo_1_50
      0006EF 85 72 5E         [24] 2389 	mov	(_int2Ser_PARM_2 + 1),(_main_tempo_1_50 + 1)
      0006F2 75 5F 05         [24] 2390 	mov	_int2Ser_PARM_3,#0x05
      0006F5 75 82 02         [24] 2391 	mov	dpl,#0x02
      0006F8 12 03 D8         [24] 2392 	lcall	_int2Ser
      0006FB                       2393 00139$:
                           000627  2394 	C$controleNivel.c$195$2$55 ==.
                                   2395 ;	controleNivel.c:195: if(malha == 1){
      0006FB 74 01            [12] 2396 	mov	a,#0x01
      0006FD B5 67 42         [24] 2397 	cjne	a,_malha,00142$
                           00062C  2398 	C$controleNivel.c$196$3$72 ==.
                                   2399 ;	controleNivel.c:196: char2Ser(0,errAt,3);
      000700 85 6A 5B         [24] 2400 	mov	_char2Ser_PARM_2,_main_errAt_1_50
      000703 75 5C 03         [24] 2401 	mov	_char2Ser_PARM_3,#0x03
      000706 75 82 00         [24] 2402 	mov	dpl,#0x00
      000709 12 03 B4         [24] 2403 	lcall	_char2Ser
                           000638  2404 	C$controleNivel.c$197$3$72 ==.
                                   2405 ;	controleNivel.c:197: int2Ser(2,ctrlAt,5);
      00070C 85 6B 5D         [24] 2406 	mov	_int2Ser_PARM_2,_main_ctrlAt_1_50
      00070F 85 6C 5E         [24] 2407 	mov	(_int2Ser_PARM_2 + 1),(_main_ctrlAt_1_50 + 1)
      000712 75 5F 05         [24] 2408 	mov	_int2Ser_PARM_3,#0x05
      000715 75 82 02         [24] 2409 	mov	dpl,#0x02
      000718 12 03 D8         [24] 2410 	lcall	_int2Ser
                           000647  2411 	C$controleNivel.c$198$3$72 ==.
                                   2412 ;	controleNivel.c:198: char2Ser(2,pwm,3);
      00071B 85 66 5B         [24] 2413 	mov	_char2Ser_PARM_2,_pwm
      00071E 75 5C 03         [24] 2414 	mov	_char2Ser_PARM_3,#0x03
      000721 75 82 02         [24] 2415 	mov	dpl,#0x02
      000724 12 03 B4         [24] 2416 	lcall	_char2Ser
                           000653  2417 	C$controleNivel.c$199$3$72 ==.
                                   2418 ;	controleNivel.c:199: char2Ser(2,tempC,3);
      000727 85 69 5B         [24] 2419 	mov	_char2Ser_PARM_2,_main_tempC_1_50
      00072A 75 5C 03         [24] 2420 	mov	_char2Ser_PARM_3,#0x03
      00072D 75 82 02         [24] 2421 	mov	dpl,#0x02
      000730 12 03 B4         [24] 2422 	lcall	_char2Ser
                           00065F  2423 	C$controleNivel.c$200$3$72 ==.
                                   2424 ;	controleNivel.c:200: int2Ser(2, tempo,5);
      000733 85 71 5D         [24] 2425 	mov	_int2Ser_PARM_2,_main_tempo_1_50
      000736 85 72 5E         [24] 2426 	mov	(_int2Ser_PARM_2 + 1),(_main_tempo_1_50 + 1)
      000739 75 5F 05         [24] 2427 	mov	_int2Ser_PARM_3,#0x05
      00073C 75 82 02         [24] 2428 	mov	dpl,#0x02
      00073F 12 03 D8         [24] 2429 	lcall	_int2Ser
                           00066E  2430 	C$controleNivel.c$203$2$55 ==.
                                   2431 ;	controleNivel.c:203: while(!TxFlag); TxFlag=0; 
      000742                       2432 00142$:
                                   2433 ;	assignBit
      000742 10 05 02         [24] 2434 	jbc	_TxFlag,00293$
      000745 80 FB            [24] 2435 	sjmp	00142$
      000747                       2436 00293$:
                           000673  2437 	C$controleNivel.c$204$2$55 ==.
                                   2438 ;	controleNivel.c:204: SBUF=13;
      000747 75 99 0D         [24] 2439 	mov	_SBUF,#0x0d
                           000676  2440 	C$controleNivel.c$205$2$55 ==.
                                   2441 ;	controleNivel.c:205: sensor=0;
                                   2442 ;	assignBit
      00074A C2 0E            [12] 2443 	clr	_sensor
                           000678  2444 	C$controleNivel.c$206$1$50 ==.
                                   2445 ;	controleNivel.c:206: tempC=30-(Echo/58);
      00074C 75 08 3A         [24] 2446 	mov	__divuint_PARM_2,#0x3a
      00074F 75 09 00         [24] 2447 	mov	(__divuint_PARM_2 + 1),#0x00
      000752 85 60 82         [24] 2448 	mov	dpl,_Echo
      000755 85 61 83         [24] 2449 	mov	dph,(_Echo + 1)
      000758 12 08 7C         [24] 2450 	lcall	__divuint
      00075B AE 82            [24] 2451 	mov	r6,dpl
      00075D AF 83            [24] 2452 	mov	r7,dph
      00075F 74 1E            [12] 2453 	mov	a,#0x1e
      000761 C3               [12] 2454 	clr	c
      000762 9E               [12] 2455 	subb	a,r6
      000763 F5 69            [12] 2456 	mov	_main_tempC_1_50,a
                           000691  2457 	C$controleNivel.c$207$2$55 ==.
                                   2458 ;	controleNivel.c:207: if(malha == 1){ 	
      000765 74 01            [12] 2459 	mov	a,#0x01
      000767 B5 67 02         [24] 2460 	cjne	a,_malha,00294$
      00076A 80 03            [24] 2461 	sjmp	00295$
      00076C                       2462 00294$:
      00076C 02 08 6B         [24] 2463 	ljmp	00151$
      00076F                       2464 00295$:
                           00069B  2465 	C$controleNivel.c$209$3$73 ==.
                                   2466 ;	controleNivel.c:209: erAnt=errAt;            
      00076F AF 6A            [24] 2467 	mov	r7,_main_errAt_1_50
                           00069D  2468 	C$controleNivel.c$210$3$73 ==.
                                   2469 ;	controleNivel.c:210: errAt=setup-tempC;      
      000771 E5 68            [12] 2470 	mov	a,_main_setup_1_50
      000773 C3               [12] 2471 	clr	c
      000774 95 69            [12] 2472 	subb	a,_main_tempC_1_50
                           0006A2  2473 	C$controleNivel.c$212$3$73 ==.
                                   2474 ;	controleNivel.c:212: P=errAt; I=erAnt; D=errAt-erAnt;
      000776 F5 6A            [12] 2475 	mov	_main_errAt_1_50,a
      000778 85 6A 6D         [24] 2476 	mov	_main_P_1_50,_main_errAt_1_50
      00077B 33               [12] 2477 	rlc	a
      00077C 95 E0            [12] 2478 	subb	a,acc
      00077E F5 6E            [12] 2479 	mov	(_main_P_1_50 + 1),a
      000780 AA 6D            [24] 2480 	mov	r2,_main_P_1_50
      000782 AB 6E            [24] 2481 	mov	r3,(_main_P_1_50 + 1)
      000784 EF               [12] 2482 	mov	a,r7
      000785 F5 6F            [12] 2483 	mov	_main_I_1_50,a
      000787 33               [12] 2484 	rlc	a
      000788 95 E0            [12] 2485 	subb	a,acc
      00078A F5 70            [12] 2486 	mov	(_main_I_1_50 + 1),a
      00078C AF 6F            [24] 2487 	mov	r7,_main_I_1_50
      00078E AC 70            [24] 2488 	mov	r4,(_main_I_1_50 + 1)
      000790 E5 6D            [12] 2489 	mov	a,_main_P_1_50
      000792 C3               [12] 2490 	clr	c
      000793 95 6F            [12] 2491 	subb	a,_main_I_1_50
      000795 FD               [12] 2492 	mov	r5,a
      000796 E5 6E            [12] 2493 	mov	a,(_main_P_1_50 + 1)
      000798 95 70            [12] 2494 	subb	a,(_main_I_1_50 + 1)
      00079A FE               [12] 2495 	mov	r6,a
                           0006C7  2496 	C$controleNivel.c$213$3$73 ==.
                                   2497 ;	controleNivel.c:213: P=(P*pid[0])/10; I=(I*pid[1])/10; D=(D*pid[2])/10;
      00079B 85 63 08         [24] 2498 	mov	__mulint_PARM_2,_pid
      00079E 75 09 00         [24] 2499 	mov	(__mulint_PARM_2 + 1),#0x00
      0007A1 8A 82            [24] 2500 	mov	dpl,r2
      0007A3 8B 83            [24] 2501 	mov	dph,r3
      0007A5 C0 07            [24] 2502 	push	ar7
      0007A7 C0 06            [24] 2503 	push	ar6
      0007A9 C0 05            [24] 2504 	push	ar5
      0007AB C0 04            [24] 2505 	push	ar4
      0007AD 12 08 A5         [24] 2506 	lcall	__mulint
      0007B0 75 08 0A         [24] 2507 	mov	__divsint_PARM_2,#0x0a
      0007B3 75 09 00         [24] 2508 	mov	(__divsint_PARM_2 + 1),#0x00
      0007B6 12 09 0F         [24] 2509 	lcall	__divsint
      0007B9 AA 82            [24] 2510 	mov	r2,dpl
      0007BB AB 83            [24] 2511 	mov	r3,dph
      0007BD D0 04            [24] 2512 	pop	ar4
      0007BF D0 05            [24] 2513 	pop	ar5
      0007C1 D0 06            [24] 2514 	pop	ar6
      0007C3 D0 07            [24] 2515 	pop	ar7
      0007C5 85 64 08         [24] 2516 	mov	__mulint_PARM_2,(_pid + 0x0001)
      0007C8 75 09 00         [24] 2517 	mov	(__mulint_PARM_2 + 1),#0x00
      0007CB 8F 82            [24] 2518 	mov	dpl,r7
      0007CD 8C 83            [24] 2519 	mov	dph,r4
      0007CF C0 06            [24] 2520 	push	ar6
      0007D1 C0 05            [24] 2521 	push	ar5
      0007D3 C0 03            [24] 2522 	push	ar3
      0007D5 C0 02            [24] 2523 	push	ar2
      0007D7 12 08 A5         [24] 2524 	lcall	__mulint
      0007DA 75 08 0A         [24] 2525 	mov	__divsint_PARM_2,#0x0a
      0007DD 75 09 00         [24] 2526 	mov	(__divsint_PARM_2 + 1),#0x00
      0007E0 12 09 0F         [24] 2527 	lcall	__divsint
      0007E3 AF 82            [24] 2528 	mov	r7,dpl
      0007E5 AC 83            [24] 2529 	mov	r4,dph
      0007E7 D0 02            [24] 2530 	pop	ar2
      0007E9 D0 03            [24] 2531 	pop	ar3
      0007EB D0 05            [24] 2532 	pop	ar5
      0007ED D0 06            [24] 2533 	pop	ar6
      0007EF 85 65 08         [24] 2534 	mov	__mulint_PARM_2,(_pid + 0x0002)
      0007F2 75 09 00         [24] 2535 	mov	(__mulint_PARM_2 + 1),#0x00
      0007F5 8D 82            [24] 2536 	mov	dpl,r5
      0007F7 8E 83            [24] 2537 	mov	dph,r6
      0007F9 C0 07            [24] 2538 	push	ar7
      0007FB C0 04            [24] 2539 	push	ar4
      0007FD C0 03            [24] 2540 	push	ar3
      0007FF C0 02            [24] 2541 	push	ar2
      000801 12 08 A5         [24] 2542 	lcall	__mulint
      000804 75 08 0A         [24] 2543 	mov	__divsint_PARM_2,#0x0a
      000807 75 09 00         [24] 2544 	mov	(__divsint_PARM_2 + 1),#0x00
      00080A 12 09 0F         [24] 2545 	lcall	__divsint
      00080D AD 82            [24] 2546 	mov	r5,dpl
      00080F AE 83            [24] 2547 	mov	r6,dph
      000811 D0 02            [24] 2548 	pop	ar2
      000813 D0 03            [24] 2549 	pop	ar3
      000815 D0 04            [24] 2550 	pop	ar4
      000817 D0 07            [24] 2551 	pop	ar7
                           000745  2552 	C$controleNivel.c$215$3$73 ==.
                                   2553 ;	controleNivel.c:215: ctrlAt=ctlAnt+P+I+D;      
      000819 EA               [12] 2554 	mov	a,r2
      00081A 25 6B            [12] 2555 	add	a,_main_ctrlAt_1_50
      00081C FA               [12] 2556 	mov	r2,a
      00081D EB               [12] 2557 	mov	a,r3
      00081E 35 6C            [12] 2558 	addc	a,(_main_ctrlAt_1_50 + 1)
      000820 FB               [12] 2559 	mov	r3,a
      000821 EF               [12] 2560 	mov	a,r7
      000822 2A               [12] 2561 	add	a,r2
      000823 FF               [12] 2562 	mov	r7,a
      000824 EC               [12] 2563 	mov	a,r4
      000825 3B               [12] 2564 	addc	a,r3
      000826 FC               [12] 2565 	mov	r4,a
      000827 ED               [12] 2566 	mov	a,r5
      000828 2F               [12] 2567 	add	a,r7
      000829 F5 6B            [12] 2568 	mov	_main_ctrlAt_1_50,a
      00082B EE               [12] 2569 	mov	a,r6
      00082C 3C               [12] 2570 	addc	a,r4
      00082D F5 6C            [12] 2571 	mov	(_main_ctrlAt_1_50 + 1),a
                           00075B  2572 	C$controleNivel.c$216$3$73 ==.
                                   2573 ;	controleNivel.c:216: if(ctrlAt>255) ctrlAt=255;
      00082F C3               [12] 2574 	clr	c
      000830 74 FF            [12] 2575 	mov	a,#0xff
      000832 95 6B            [12] 2576 	subb	a,_main_ctrlAt_1_50
      000834 74 80            [12] 2577 	mov	a,#(0x00 ^ 0x80)
      000836 85 6C F0         [24] 2578 	mov	b,(_main_ctrlAt_1_50 + 1)
      000839 63 F0 80         [24] 2579 	xrl	b,#0x80
      00083C 95 F0            [12] 2580 	subb	a,b
      00083E 50 06            [24] 2581 	jnc	00146$
      000840 75 6B FF         [24] 2582 	mov	_main_ctrlAt_1_50,#0xff
      000843 75 6C 00         [24] 2583 	mov	(_main_ctrlAt_1_50 + 1),#0x00
      000846                       2584 00146$:
                           000772  2585 	C$controleNivel.c$217$3$73 ==.
                                   2586 ;	controleNivel.c:217: if(ctrlAt<0) ctrlAt=0;    
      000846 E5 6C            [12] 2587 	mov	a,(_main_ctrlAt_1_50 + 1)
      000848 30 E7 05         [24] 2588 	jnb	acc.7,00148$
      00084B E4               [12] 2589 	clr	a
      00084C F5 6B            [12] 2590 	mov	_main_ctrlAt_1_50,a
      00084E F5 6C            [12] 2591 	mov	(_main_ctrlAt_1_50 + 1),a
      000850                       2592 00148$:
                           00077C  2593 	C$controleNivel.c$218$1$50 ==.
                                   2594 ;	controleNivel.c:218: pwm=ctrlAt*199/255;
      000850 85 6B 08         [24] 2595 	mov	__mulint_PARM_2,_main_ctrlAt_1_50
      000853 85 6C 09         [24] 2596 	mov	(__mulint_PARM_2 + 1),(_main_ctrlAt_1_50 + 1)
      000856 90 00 C7         [24] 2597 	mov	dptr,#0x00c7
      000859 12 08 A5         [24] 2598 	lcall	__mulint
      00085C 75 08 FF         [24] 2599 	mov	__divsint_PARM_2,#0xff
      00085F 75 09 00         [24] 2600 	mov	(__divsint_PARM_2 + 1),#0x00
      000862 12 09 0F         [24] 2601 	lcall	__divsint
      000865 AE 82            [24] 2602 	mov	r6,dpl
      000867 AF 83            [24] 2603 	mov	r7,dph
      000869 8E 66            [24] 2604 	mov	_pwm,r6
                           000797  2605 	C$controleNivel.c$221$2$55 ==.
                                   2606 ;	controleNivel.c:221: while(!umSeg); umSeg=0; tempo++;
      00086B                       2607 00151$:
                                   2608 ;	assignBit
      00086B 10 00 02         [24] 2609 	jbc	_umSeg,00298$
      00086E 80 FB            [24] 2610 	sjmp	00151$
      000870                       2611 00298$:
      000870 05 71            [12] 2612 	inc	_main_tempo_1_50
      000872 E4               [12] 2613 	clr	a
      000873 B5 71 02         [24] 2614 	cjne	a,_main_tempo_1_50,00299$
      000876 05 72            [12] 2615 	inc	(_main_tempo_1_50 + 1)
      000878                       2616 00299$:
      000878 02 05 80         [24] 2617 	ljmp	00155$
                           0007A7  2618 	C$controleNivel.c$225$1$50 ==.
                           0007A7  2619 	XG$main$0$0 ==.
      00087B 22               [24] 2620 	ret
                                   2621 	.area CSEG    (CODE)
                                   2622 	.area CONST   (CODE)
                           000000  2623 G$setLCD4$0$0 == .
      00094B                       2624 _setLCD4:
      00094B 28                    2625 	.db #0x28	; 40
      00094C 06                    2626 	.db #0x06	; 6
      00094D 0E                    2627 	.db #0x0e	; 14
      00094E 01                    2628 	.db #0x01	; 1
                           000004  2629 G$Tit1$0$0 == .
      00094F                       2630 _Tit1:
      00094F 70 20 20 20 20 69 20  2631 	.ascii "p    i    d "
             20 20 20 64 20
      00095B 00                    2632 	.db 0x00
                           000011  2633 G$Tit2$0$0 == .
      00095C                       2634 _Tit2:
      00095C 53 65 74 70 20 20 20  2635 	.ascii "Setp    Dist"
             20 44 69 73 74
      000968 00                    2636 	.db 0x00
                                   2637 	.area XINIT   (CODE)
                                   2638 	.area CABS    (ABS,CODE)
