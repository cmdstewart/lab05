/**
*Program Name: fraction.cpp
*Discussion: Lab 5
*Written by: Cole Stewart
*Date:
*/

#include "fraction.h"
#include <iostream>

using namespace std;

FractionColeS::FractionColeS() {
	num = 0;
	denom = 1;
	(*this).simplify();
}

FractionColeS::FractionColeS(int n) {
	num = n;
	denom = 1;
	cout << "\nEmpty Body!" << endl;
	(*this).simplify();
}

FractionColeS::FractionColeS(const FractionColeS& frac2) {
	num = frac2.num;
	denom = frac2.denom;
	(*this).simplify();
}

FractionColeS::FractionColeS(int n, int d) : num(n), denom(d) {
	(*this).simplify();
}

void FractionColeS::setNum(int n) {
	num = n;
}

int FractionColeS::getNum() const {
	return num;
}

void FractionColeS::setDenom(int n) {
	num = n;
}

int FractionColeS::getDenom() const {
	return num;
}

FractionColeS FractionColeS::add(const FractionColeS& frac2) {
	return FractionColeS(num * frac2.denom + denom*frac2.num, denom*frac2.denom);
}

FractionColeS FractionColeS::subtract(const FractionColeS& frac2) {
	return FractionColeS(num * frac2.denom - denom*frac2.num, denom*frac2.denom);
}

FractionColeS FractionColeS::mutliply(const FractionColeS& frac2) {
	return FractionColeS(num * frac2.num, denom*frac2.denom);
}

FractionColeS FractionColeS::divide(const FractionColeS& frac2) {
	return FractionColeS(num * frac2.denom, denom*frac2.num);
}

FractionColeS FractionColeS::operator=(const FractionColeS& frac2) {
	num = frac2.num;
	denom = frac2.denom;
	return FractionColeS(frac2.num, frac2.denom);
}

FractionColeS FractionColeS::operator+(const FractionColeS& frac2) {
	return FractionColeS(num * frac2.denom + denom*frac2.num, denom*frac2.denom);
}

FractionColeS FractionColeS::operator-(const FractionColeS& frac2) {
	return FractionColeS(num * frac2.denom - denom*frac2.num, denom*frac2.denom);
}

FractionColeS FractionColeS::operator*(const FractionColeS& frac2) {
	return FractionColeS(num * frac2.num, denom*frac2.denom);
}

FractionColeS FractionColeS::operator/(const FractionColeS& frac2) {
	return FractionColeS(num * frac2.denom, denom*frac2.num);
}

ostream& operator<<(ostream& one, const FractionColeS& two) {
	one << two.num << "/" << two.denom;
	return one;
}

void FractionColeS::print() {
	cout << "\n num : " << num
		<< "\n denom : " << denom << endl;
}

void FractionColeS::simplify() {
	int i;
	if (denom < 0) {
		num = -num;
		denom = -denom;
	}

	if (denom == 0) {
		cout << "\nDenominator cannot equal 0, setting to 1.\n";
		denom = 1;
	}

	for (i = 2; i <= denom; i++) {
		if (num % i == 0 && denom % i == 0) {
			num /= i;
			denom /= i;
			i--;
		}
	}
}

FractionColeS::~FractionColeS() {

}
