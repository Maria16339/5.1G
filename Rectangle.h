
#pragma once
#include "Pair.h"

class Rectangle : public Pair
{
public:
	Rectangle();
	Rectangle(double a, double b) throw(logic_error);
	Rectangle(const Rectangle& v);

	Rectangle& operator ++ () throw(out_of_range);
	Rectangle& operator -- () throw(MyDerivedException);
	Rectangle operator ++ (int) throw(MyException);
	Rectangle operator -- (int) throw(MyDerivedException);

	double Dobutok();
	double Square() const;
	double Perimeter() const;
};
