/*
 * This file is part of NectarJS
 * Copyright (c) 2017 - 2020 Adrien THIERRY
 * http://nectarjs.com - https://seraum.com/
 *
 * sources : https://github.com/nectarjs/nectarjs
 * 
 * NectarJS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * NectarJS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with NectarJS.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
 
#if defined(_USE_MATH_DEFINES) && !defined(M_E)
#define _MATH_DEFINES_DEFINED

/* Define _USE_MATH_DEFINES before including math.h to expose these macro
 * definitions for common math constants.  These are placed under an #ifdef
 * since these commonly-defined names are not part of the C/C++ standards.
 */

/* Definitions of useful mathematical constants
 * M_E        - e
 * M_LOG2E    - log2(e)
 * M_LOG10E   - log10(e)
 * M_LN2      - ln(2)
 * M_LN10     - ln(10)
 * M_PI       - pi
 * M_PI_2     - pi/2
 * M_PI_4     - pi/4
 * M_1_PI     - 1/pi
 * M_2_PI     - 2/pi
 * M_2_SQRTPI - 2/sqrt(pi)
 * M_SQRT2    - sqrt(2)
 * M_SQRT1_2  - 1/sqrt(2)
 */

#define M_E        2.71828182845904523536
#define M_LOG2E    1.44269504088896340736
#define M_LOG10E   0.434294481903251827651
#define M_LN2      0.693147180559945309417
#define M_LN10     2.30258509299404568402
#define M_PI       3.14159265358979323846
#define M_PI_2     1.57079632679489661923
#define M_PI_4     0.785398163397448309616
#define M_1_PI     0.318309886183790671538
#define M_2_PI     0.636619772367581343076
#define M_2_SQRTPI 1.12837916709551257390
#define M_SQRT2    1.41421356237309504880
#define M_SQRT1_2  0.707106781186547524401

#endif  /* _USE_MATH_DEFINES */

using namespace std;

var __NJS_MATH_E = __NJS_VAR(M_E);
var __NJS_MATH_LN2 = __NJS_VAR(M_LN2);
var __NJS_MATH_LOG2E = __NJS_VAR(M_LOG2E);
var __NJS_MATH_LOG10E = __NJS_VAR(M_LOG10E);
var __NJS_MATH_PI = __NJS_VAR(M_PI);
var __NJS_MATH_SQRT1_2 = __NJS_VAR(M_SQRT1_2);
var __NJS_MATH_SQRT2 = __NJS_VAR(M_SQRT2);

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___xtg0o = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(abs((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_ABS=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___xtg0o);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___lo8b7 = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(acos((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_ACOS=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___lo8b7);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___jsnak = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(acosh((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_ACOSH=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___jsnak);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___fuq1ki = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(asin((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_ASIN=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___fuq1ki);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___b3j5cm = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0];
	return __NJS_VAR(asinh((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_ASINH=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___b3j5cm);;
__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___34r7fh = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(atan((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_ATAN=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___34r7fh);;
__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___6ane3 = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0];var  y; if(__NJS_VARARGS.size() > 1)  y = __NJS_VARARGS[1]; 
	return __NJS_VAR(atan2((double)(x), (double)(y))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_ATAN2=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___6ane3);;
__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___fjn488 = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(atanh((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_ATANH=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___fjn488);;
__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___r2kn5q = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(cbrt((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_CBRT=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___r2kn5q);;
__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___asqsk = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(ceil((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_CEIL=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___asqsk);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___dnikjf = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0];
	int n = (int)(x);
    return __NJS_VAR(n > 0 ? (int)(31 - log2(n >> 0)) : 32);
;return __NJS_Create_Undefined();});var __NJS_MATH_CLZ32=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___dnikjf);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___sb17r = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(cos((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_COS=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___sb17r);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___jy71j = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(cosh((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_COSH=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___jy71j);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___2trzxk = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(exp((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_EXP=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___2trzxk);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___68zbu = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(expm1((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_EXPM1=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___68zbu);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___3tiasj = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR((int)(floor((double)(x))));
;return __NJS_Create_Undefined();});var __NJS_MATH_FLOOR=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___3tiasj);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___7ztmq7 = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR((double)((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_FROUND=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___7ztmq7);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___3mtyexh = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{
	double max = 0;
	double s = 0;
	for (var arg : __NJS_VARARGS) {
		double x = abs((double)(arg));
		if (x > max) {
			s *= (max / x) * (max / x);
			max = x;
		}
		s += (x == 0 && max == 0) ? 0 : (x / max) * (x / max);
	}
	return __NJS_VAR(max == INFINITY ? INFINITY : max * sqrt(s));
;return __NJS_Create_Undefined();});var __NJS_MATH_HYPOT=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___3mtyexh);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___tbb5nb = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0];var  y; if(__NJS_VARARGS.size() > 1)  y = __NJS_VARARGS[1];
	return __NJS_VAR((int)(x) * (int)(y));
;return __NJS_Create_Undefined();});var __NJS_MATH_IMUL=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___tbb5nb);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___rh4r5 = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(log((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_LOG=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___rh4r5);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___w9dljf = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(log1p((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_LOG1P=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___w9dljf);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___3o95b = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(log2((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_LOG2=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___3o95b);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___xh2iob = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(log10((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_LOG10=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___xh2iob);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___0zr6ns = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{
	double max = -INFINITY;
	for (var x : __NJS_VARARGS) {
		double n = (double)(x);
		if (n > max) {
			max = n;
		}
	}
	return __NJS_VAR(max);
;return __NJS_Create_Undefined();});var __NJS_MATH_MAX=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___0zr6ns);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___oo9pv2 = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{
	double min = INFINITY;
	for (var x : __NJS_VARARGS) {
		double n = (double)(x);
		if (n < min) {
			min = n;
		}
	}
	return __NJS_VAR(min);
;return __NJS_Create_Undefined();});var __NJS_MATH_MIN=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___oo9pv2);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___w9ptxa = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0];var  x2; if(__NJS_VARARGS.size() > 1)  x2 = __NJS_VARARGS[1]; 
	return __NJS_VAR(pow((double)(x), (double)(x2))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_POW=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___w9ptxa);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___daewfb = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{ 
	return __NJS_VAR((double)(rand()) / (double)(RAND_MAX));
;return __NJS_Create_Undefined();});var __NJS_MATH_RANDOM=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___daewfb);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___05lcy9 = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR((int)(round((double)(x))));
;return __NJS_Create_Undefined();});var __NJS_MATH_ROUND=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___05lcy9);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___c3wzg = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0];
	double n = (double)(x);
	if (n == 0) { return __NJS_VAR(0); }
	else { return __NJS_VAR(n > 0 ? 1 : -1); };
;return __NJS_Create_Undefined();});var __NJS_MATH_SIGN=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___c3wzg);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___3egnv = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(sin((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_SIN=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___3egnv);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___iqll89 = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(sinh((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_SINH=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___iqll89);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___s38z2 = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(sqrt((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_SQRT=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___s38z2);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___2edsg9 = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(tan((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_TAN=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___2edsg9);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___ca5bkm = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR(tanh((double)(x))); 
;return __NJS_Create_Undefined();});var __NJS_MATH_TANH=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___ca5bkm);;

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___ykj5wo = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var x; if(__NJS_VARARGS.size() > 0) x = __NJS_VARARGS[0]; 
	return __NJS_VAR((int)(x)); 
;return __NJS_Create_Undefined();});var __NJS_MATH_TRUNC=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___ykj5wo);;
