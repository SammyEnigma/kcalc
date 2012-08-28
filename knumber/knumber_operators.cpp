/*
Copyright 2012  Evan Teran evan.teran@gmail.com

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of 
the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <config-kcalc.h>
#include "knumber_operators.h"
#include "knumber.h"
#include "knumber_base.h"
#include <QDebug>

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber operator+(const KNumber &lhs, const KNumber &rhs) {
	KNumber x(lhs);
	x += rhs;
	return x;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber operator-(const KNumber &lhs, const KNumber &rhs) {
	KNumber x(lhs);
	x -= rhs;
	return x;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber operator*(const KNumber &lhs, const KNumber &rhs) {
	KNumber x(lhs);
	x *= rhs;
	return x;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber operator/(const KNumber &lhs, const KNumber &rhs) {
	KNumber x(lhs);
	x /= rhs;
	return x;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber operator%(const KNumber &lhs, const KNumber &rhs) {
	KNumber x(lhs);
	x %= rhs;
	return x;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber operator&(const KNumber &lhs, const KNumber &rhs) {
	KNumber x(lhs);
	x &= rhs;
	return x;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber operator|(const KNumber &lhs, const KNumber &rhs) {
	KNumber x(lhs);
	x |= rhs;
	return x;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber operator^(const KNumber &lhs, const KNumber &rhs) {
	KNumber x(lhs);
	x ^= rhs;
	return x;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber operator>>(const KNumber &lhs, const KNumber &rhs) {
	KNumber x(lhs);
	x >>= rhs;
	return x;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber operator<<(const KNumber &lhs, const KNumber &rhs) {
	KNumber x(lhs);
	x <<= rhs;
	return x;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber abs(const KNumber &x) {
	return x.abs();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber cbrt(const KNumber &x) {
	return x.cbrt();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber sqrt(const KNumber &x) {
	return x.sqrt();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber sin(const KNumber &x) {

	//KNumber pi =  4 * atan(KNumber(1.0));
	//KNumber radians = KNumber(2) * KNumber::Pi() / KNumber(360) * x;

	return x.sin();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber cos(const KNumber &x) {
	return x.cos();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber tan(const KNumber &x) {
	return x.tan();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber asin(const KNumber &x) {
	return x.asin();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber acos(const KNumber &x) {
	return x.acos();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber atan(const KNumber &x) {
	return x.atan();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber pow(const KNumber &x, const KNumber &y) {
	return x.pow(y);
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber factorial(const KNumber &x) {
	return x.factorial();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber log2(const KNumber &x) {
	return x.log2();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber log10(const KNumber &x) {
	return x.log10();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber ln(const KNumber &x) {
	return x.ln();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber exp2(const KNumber &x) {
	return x.exp2();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber exp10(const KNumber &x) {
	return x.exp10();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
KNumber exp(const KNumber &x) {
	return x.exp();
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
bool operator==(const KNumber &lhs, const KNumber &rhs) {
	return lhs.value_->compare(rhs.value_) == 0;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
bool operator!=(const KNumber &lhs, const KNumber &rhs) {
	return lhs.value_->compare(rhs.value_) != 0;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
bool operator>=(const KNumber &lhs, const KNumber &rhs) {
	return lhs.value_->compare(rhs.value_) >= 0;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
bool operator<=(const KNumber &lhs, const KNumber &rhs) {
	return lhs.value_->compare(rhs.value_) <= 0;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
bool operator>(const KNumber &lhs, const KNumber &rhs) {
	return lhs.value_->compare(rhs.value_) > 0;
}

//------------------------------------------------------------------------------
// Name: 
//------------------------------------------------------------------------------
bool operator<(const KNumber &lhs, const KNumber &rhs) {
	return lhs.value_->compare(rhs.value_) < 0;
}
