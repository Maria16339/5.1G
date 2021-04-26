#include "Rectangle.h"

Rectangle::Rectangle()
	: Pair()
{}

Rectangle::Rectangle(double A, double B) throw(logic_error)
{
	if (!(A > 0 && B > 0))
		throw logic_error("Condition is not met");

	SetA(A); SetB(B);
}

Rectangle::Rectangle(const Rectangle& v)
	: Pair(v)
{}

Rectangle& Rectangle::operator ++() throw(out_of_range)
{
	this->SetA(this->GetA() + 1);
	if (GetA() > 10 || GetB() > 10)
		throw out_of_range("Side is bigger than 10");
	return *this;
}

Rectangle& Rectangle::operator --() throw(MyDerivedException)
{
	this->SetB(this->GetB() - 1);
	if (GetB() == 0)
		throw new MyDerivedException();
	return *this;
}

Rectangle Rectangle::operator ++(int) throw (MyException)
{
	Rectangle a(*this);
	this->SetA(this->GetA() + 1);
	if (GetA() > 10 || GetB() > 10 )
		throw MyException("Side is bigger than 10");
	return a;
}

Rectangle Rectangle::operator --(int) throw(MyDerivedException)
{
	Rectangle a(*this);
	this->SetB(this->GetB() - 1);
	if (GetB() == 0)
		throw MyDerivedException();
	return a;
}

double Rectangle::Dobutok()
{
	return GetA() * GetB() ;
}

double Rectangle::Square() const
{
	double a = GetA();
	double b = GetB();
	double S = 0;
	S = a*b;
	return S;
}
double Rectangle::Perimeter() const
{
	double a = GetA();
	double b = GetB();
	double P = 0;
	P = a *2+ b*2;
	return P;
}
