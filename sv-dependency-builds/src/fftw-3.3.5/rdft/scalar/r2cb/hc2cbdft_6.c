/*
 * Copyright (c) 2003, 2007-14 Matteo Frigo
 * Copyright (c) 2003, 2007-14 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Sat Jul 30 16:51:55 EDT 2016 */

#include "codelet-rdft.h"

#ifdef HAVE_FMA

/* Generated by: ../../../genfft/gen_hc2cdft.native -fma -reorder-insns -schedule-for-pipeline -compact -variables 4 -pipeline-latency 4 -sign 1 -n 6 -dif -name hc2cbdft_6 -include hc2cb.h */

/*
 * This function contains 58 FP additions, 32 FP multiplications,
 * (or, 36 additions, 10 multiplications, 22 fused multiply/add),
 * 52 stack variables, 2 constants, and 24 memory accesses
 */
#include "hc2cb.h"

static void hc2cbdft_6(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP866025403, +0.866025403784438646763723170752936183471402627);
     DK(KP500000000, +0.500000000000000000000000000000000000000000000);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 10); m < me; m = m + 1, Rp = Rp + ms, Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 10, MAKE_VOLATILE_STRIDE(24, rs)) {
	       E T18, T1b, T16, T1e, T1a, T1f, T19, T1g, T1c;
	       {
		    E Tw, T4, TV, Tj, TP, TH, Tr, TY, T5, T6, Ta, Ty;
		    {
			 E Tg, TF, Tf, TD, Tp, Th;
			 {
			      E Td, Te, Tn, To;
			      Td = Ip[WS(rs, 1)];
			      Te = Im[WS(rs, 1)];
			      Tn = Ip[0];
			      To = Im[WS(rs, 2)];
			      Tg = Ip[WS(rs, 2)];
			      TF = Te + Td;
			      Tf = Td - Te;
			      TD = Tn + To;
			      Tp = Tn - To;
			      Th = Im[0];
			 }
			 {
			      E T2, T3, T8, T9;
			      T2 = Rp[0];
			      T3 = Rm[WS(rs, 2)];
			      {
				   E Tq, TE, Ti, TG;
				   T8 = Rm[WS(rs, 1)];
				   TE = Tg + Th;
				   Ti = Tg - Th;
				   Tw = T2 - T3;
				   T4 = T2 + T3;
				   TG = TE - TF;
				   TV = TF + TE;
				   Tq = Tf + Ti;
				   Tj = Tf - Ti;
				   TP = FNMS(KP500000000, TG, TD);
				   TH = TD + TG;
				   T9 = Rp[WS(rs, 1)];
				   Tr = FNMS(KP500000000, Tq, Tp);
				   TY = Tp + Tq;
			      }
			      T5 = Rp[WS(rs, 2)];
			      T6 = Rm[0];
			      Ta = T8 + T9;
			      Ty = T8 - T9;
			 }
		    }
		    {
			 E TO, TT, Ts, TA, TR, Tc, TN, TW, TS, Tx, T7;
			 Tx = T5 - T6;
			 T7 = T5 + T6;
			 TO = W[0];
			 TT = W[1];
			 {
			      E Tz, TQ, Tb, TU;
			      Tz = Tx + Ty;
			      TQ = Tx - Ty;
			      Tb = T7 + Ta;
			      Ts = T7 - Ta;
			      TU = FNMS(KP500000000, Tz, Tw);
			      TA = Tw + Tz;
			      TR = FMA(KP866025403, TQ, TP);
			      T18 = FNMS(KP866025403, TQ, TP);
			      Tc = FNMS(KP500000000, Tb, T4);
			      TN = T4 + Tb;
			      T1b = FMA(KP866025403, TV, TU);
			      TW = FNMS(KP866025403, TV, TU);
			      TS = TO * TR;
			 }
			 {
			      E T15, Tt, T12, T1, Tm, TI, TM, Tl, TJ;
			      {
				   E Tv, TC, TB, TL, Tk, TZ, TX, T10;
				   T15 = FMA(KP866025403, Ts, Tr);
				   Tt = FNMS(KP866025403, Ts, Tr);
				   TZ = TO * TW;
				   TX = FMA(TT, TW, TS);
				   Tv = W[4];
				   TC = W[5];
				   T10 = FNMS(TT, TR, TZ);
				   Rm[0] = TN + TX;
				   Rp[0] = TN - TX;
				   TB = Tv * TA;
				   Im[0] = T10 - TY;
				   Ip[0] = TY + T10;
				   TL = TC * TA;
				   Tk = FNMS(KP866025403, Tj, Tc);
				   T12 = FMA(KP866025403, Tj, Tc);
				   T1 = W[3];
				   Tm = W[2];
				   TI = FNMS(TC, TH, TB);
				   TM = FMA(Tv, TH, TL);
				   Tl = T1 * Tk;
				   TJ = Tm * Tk;
			      }
			      {
				   E T11, T14, T13, T1d, T17, Tu, TK;
				   Tu = FMA(Tm, Tt, Tl);
				   TK = FNMS(T1, Tt, TJ);
				   T11 = W[6];
				   T14 = W[7];
				   Im[WS(rs, 1)] = TI - Tu;
				   Ip[WS(rs, 1)] = Tu + TI;
				   Rm[WS(rs, 1)] = TK + TM;
				   Rp[WS(rs, 1)] = TK - TM;
				   T13 = T11 * T12;
				   T1d = T14 * T12;
				   T17 = W[8];
				   T16 = FNMS(T14, T15, T13);
				   T1e = FMA(T11, T15, T1d);
				   T1a = W[9];
				   T1f = T17 * T1b;
				   T19 = T17 * T18;
			      }
			 }
		    }
	       }
	       T1g = FNMS(T1a, T18, T1f);
	       T1c = FMA(T1a, T1b, T19);
	       Im[WS(rs, 2)] = T1g - T1e;
	       Ip[WS(rs, 2)] = T1e + T1g;
	       Rm[WS(rs, 2)] = T16 + T1c;
	       Rp[WS(rs, 2)] = T16 - T1c;
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_FULL, 1, 6},
     {TW_NEXT, 1, 0}
};

static const hc2c_desc desc = { 6, "hc2cbdft_6", twinstr, &GENUS, {36, 10, 22, 0} };

void X(codelet_hc2cbdft_6) (planner *p) {
     X(khc2c_register) (p, hc2cbdft_6, &desc, HC2C_VIA_DFT);
}
#else				/* HAVE_FMA */

/* Generated by: ../../../genfft/gen_hc2cdft.native -compact -variables 4 -pipeline-latency 4 -sign 1 -n 6 -dif -name hc2cbdft_6 -include hc2cb.h */

/*
 * This function contains 58 FP additions, 28 FP multiplications,
 * (or, 44 additions, 14 multiplications, 14 fused multiply/add),
 * 29 stack variables, 2 constants, and 24 memory accesses
 */
#include "hc2cb.h"

static void hc2cbdft_6(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP500000000, +0.500000000000000000000000000000000000000000000);
     DK(KP866025403, +0.866025403784438646763723170752936183471402627);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 10); m < me; m = m + 1, Rp = Rp + ms, Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 10, MAKE_VOLATILE_STRIDE(24, rs)) {
	       E T4, Tv, Tr, TL, Tb, Tc, Ty, TP, To, TB, Tj, TQ, Tp, Tq, TE;
	       E TM;
	       {
		    E Ta, Tx, T7, Tw, T2, T3;
		    T2 = Rp[0];
		    T3 = Rm[WS(rs, 2)];
		    T4 = T2 + T3;
		    Tv = T2 - T3;
		    {
			 E T8, T9, T5, T6;
			 T8 = Rm[WS(rs, 1)];
			 T9 = Rp[WS(rs, 1)];
			 Ta = T8 + T9;
			 Tx = T8 - T9;
			 T5 = Rp[WS(rs, 2)];
			 T6 = Rm[0];
			 T7 = T5 + T6;
			 Tw = T5 - T6;
		    }
		    Tr = KP866025403 * (T7 - Ta);
		    TL = KP866025403 * (Tw - Tx);
		    Tb = T7 + Ta;
		    Tc = FNMS(KP500000000, Tb, T4);
		    Ty = Tw + Tx;
		    TP = FNMS(KP500000000, Ty, Tv);
	       }
	       {
		    E Tf, TC, Ti, TD, Td, Te;
		    Td = Ip[WS(rs, 1)];
		    Te = Im[WS(rs, 1)];
		    Tf = Td - Te;
		    TC = Te + Td;
		    {
			 E Tm, Tn, Tg, Th;
			 Tm = Ip[0];
			 Tn = Im[WS(rs, 2)];
			 To = Tm - Tn;
			 TB = Tm + Tn;
			 Tg = Ip[WS(rs, 2)];
			 Th = Im[0];
			 Ti = Tg - Th;
			 TD = Tg + Th;
		    }
		    Tj = KP866025403 * (Tf - Ti);
		    TQ = KP866025403 * (TC + TD);
		    Tp = Tf + Ti;
		    Tq = FNMS(KP500000000, Tp, To);
		    TE = TC - TD;
		    TM = FMA(KP500000000, TE, TB);
	       }
	       {
		    E TJ, TT, TS, TU;
		    TJ = T4 + Tb;
		    TT = To + Tp;
		    {
			 E TN, TR, TK, TO;
			 TN = TL + TM;
			 TR = TP - TQ;
			 TK = W[0];
			 TO = W[1];
			 TS = FMA(TK, TN, TO * TR);
			 TU = FNMS(TO, TN, TK * TR);
		    }
		    Rp[0] = TJ - TS;
		    Ip[0] = TT + TU;
		    Rm[0] = TJ + TS;
		    Im[0] = TU - TT;
	       }
	       {
		    E TZ, T15, T14, T16;
		    {
			 E TW, TY, TV, TX;
			 TW = Tc + Tj;
			 TY = Tr + Tq;
			 TV = W[6];
			 TX = W[7];
			 TZ = FNMS(TX, TY, TV * TW);
			 T15 = FMA(TX, TW, TV * TY);
		    }
		    {
			 E T11, T13, T10, T12;
			 T11 = TM - TL;
			 T13 = TP + TQ;
			 T10 = W[8];
			 T12 = W[9];
			 T14 = FMA(T10, T11, T12 * T13);
			 T16 = FNMS(T12, T11, T10 * T13);
		    }
		    Rp[WS(rs, 2)] = TZ - T14;
		    Ip[WS(rs, 2)] = T15 + T16;
		    Rm[WS(rs, 2)] = TZ + T14;
		    Im[WS(rs, 2)] = T16 - T15;
	       }
	       {
		    E Tt, TH, TG, TI;
		    {
			 E Tk, Ts, T1, Tl;
			 Tk = Tc - Tj;
			 Ts = Tq - Tr;
			 T1 = W[3];
			 Tl = W[2];
			 Tt = FMA(T1, Tk, Tl * Ts);
			 TH = FNMS(T1, Ts, Tl * Tk);
		    }
		    {
			 E Tz, TF, Tu, TA;
			 Tz = Tv + Ty;
			 TF = TB - TE;
			 Tu = W[4];
			 TA = W[5];
			 TG = FNMS(TA, TF, Tu * Tz);
			 TI = FMA(TA, Tz, Tu * TF);
		    }
		    Ip[WS(rs, 1)] = Tt + TG;
		    Rp[WS(rs, 1)] = TH - TI;
		    Im[WS(rs, 1)] = TG - Tt;
		    Rm[WS(rs, 1)] = TH + TI;
	       }
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_FULL, 1, 6},
     {TW_NEXT, 1, 0}
};

static const hc2c_desc desc = { 6, "hc2cbdft_6", twinstr, &GENUS, {44, 14, 14, 0} };

void X(codelet_hc2cbdft_6) (planner *p) {
     X(khc2c_register) (p, hc2cbdft_6, &desc, HC2C_VIA_DFT);
}
#endif				/* HAVE_FMA */
