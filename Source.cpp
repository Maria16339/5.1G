#include "Rectangle.h"

void _unexpected_to_bad()
{
	cerr << "bad_exception" << endl;
	throw;
}

void Call_Bad() throw(bad_exception)
{
	throw bad_exception();
}

int main()
{
	cout << "Number of elements of class Rectangle : " << Rectangle::Count() << endl;

	try
	{
		Rectangle K(5, 2);

		cout << "a=5; b=2" << endl;
		cout << "Size of public class: " << sizeof(K) << endl;
		cout << "Number of elements of class Rectangle : " << Rectangle::Count() << endl;

		double A = 0.0;
		double B = 0.0;

		cout << "Square: " << K.Square() << endl;
		cout << "Perimeter: " << K.Perimeter() << endl;

		try
		{
			K--;
		}
		catch (MyDerivedException a)
		{
			cerr << a.What() << endl << endl;
		}
		catch (MyDerivedException* a)
		{
			cerr << a->What() << endl << endl;
		}
	}
	catch (logic_error a)
	{
		cerr << "Exception: " << a.what() << endl;
	}

	cout << "Number of elements of class Rectangle : " << Rectangle::Count() << endl;

	Rectangle N(10, 9);
	cout << "a=10;  b=9" << endl;
	cout << "Number of elements of class Rectangle : " << Rectangle::Count() << endl;

	try
	{
		N++;
	}
	catch (MyException& a)
	{
		cerr << "Exception: " << a.What() << endl;
	}
	catch (out_of_range a)
	{
		cerr << "Exception: " << a.what() << endl;
	}

	try
	{
		Call_Bad();
	}
	catch (bad_exception)
	{
		cerr << "catch (bad_exception)" << endl;
	}
}