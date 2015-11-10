/**
*Program Name: fraction.h
*Discussion: Lab 5
*Written by: Cole Stewart
*Date:
*/

#ifndef FRACTION_H
#define FRACTON_H
#include <iostream>

using namespace std;

class FractionColeS {
private:
	int num;
	int denom;
public:
	FractionColeS(); // default constructor
	FractionColeS(int); // convert constructor
	FractionColeS(const FractionColeS&); // copy constructor
	FractionColeS(int, int);

	void setNum(int);
	int getNum(void) const;
	
	void setDenom(int);
	int getDenom(void) const;

	FractionColeS add(const FractionColeS&);
	FractionColeS subtract(const FractionColeS&);
	FractionColeS mutliply(const FractionColeS&);
	FractionColeS divide(const FractionColeS&);

	FractionColeS operator=(const FractionColeS&);
	FractionColeS operator+(const FractionColeS&);
	FractionColeS operator-(const FractionColeS&);
	FractionColeS operator*(const FractionColeS&);
	FractionColeS operator/(const FractionColeS&);

	friend ostream& operator<<(ostream&, const FractionColeS&);
	void print(void);
	void simplify(void);
	~FractionColeS();
};

#endif
