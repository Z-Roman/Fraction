#include "FractionClass.h"

FractionClass::FractionClass()
{
	numer = 1;
	denom = 1;
	//decimal = 1;
}

FractionClass::FractionClass(int numer, int denom)
{
	this->numer = numer;

	if (denom == 0)
	{
		cout << "\tdenom cannot be zero" << "\n\n";
		return;
	}
	else
	{
		this->denom = denom;

		//this->decimal = float(numer) / denom;
	}
}

void FractionClass::Print()
{
	cout << "\tnumer = " << numer << "\n\tdenom = " << denom
		/*<< "\n\tdecimal = " << decimal */<< "\n\n";
}

void FractionClass::ShowFraction()
{
	cout << "\n\t" << numer << "/" << denom << "\n\n";
}

float FractionClass::ValueFraction()
{
	return float(numer) / denom;
}

void FractionClass::Reduction()
{
	int a = GetNumer();
	int b = GetDenom();
	int i;
	do 
	{
		i = 0;
		if (a % 2 == 0 && b % 2 == 0)
		{
			a /= 2;
			b /= 2;
			i++;
		}
		else if (a % 3 == 0 && b % 3 == 0)
		{
			a /= 3;
			b /= 3;
			i++;
		}
		else if (a % 5 == 0 && b % 5 == 0)
		{
			a /= 5;
			b /= 5;
			i++;
		}
		else if (a % 7 == 0 && b % 7 == 0)
		{
			a /= 7;
			b /= 7;
			i++;
		}
	} while (i != 0);

	SetNumer(a);
	SetDenom(b);
}

void FractionClass::Comparison(int numerator_1, int denominator_1, int numerator_2, int denominator_2)
{
	if (numerator_1 * denominator_2 > numerator_2 * denominator_1)
	{
		cout << "\t" << numerator_1 << "/" << denominator_1 << " > " <<
			numerator_2 << "/" << denominator_2 << "\n\n";
	}
	else if (numerator_1 * denominator_2 < numerator_2 * denominator_1)
	{
		cout << "\t" << numerator_1 << "/" << denominator_1 << " < " <<
			numerator_2 << "/" << denominator_2 << "\n\n";
	}
	else 
	{
		cout << "\t" << numerator_1 << "/" << denominator_1 << " = " <<
			numerator_2 << "/" << denominator_2 << "\n\n";
	}
}

void FractionClass::Addition(int numerator_1, int denominator_1, int numerator_2, int denominator_2)
{
	numerator_1 *= denominator_2;
	numerator_2 *= denominator_1;
	SetNumer(numerator_1 + numerator_2);
	SetDenom(denominator_1 * denominator_2);
	Reduction();
	ShowFraction();
}

void FractionClass::Subtraction(int numerator_1, int denominator_1, int numerator_2, int denominator_2)
{
	numerator_1 *= denominator_2;
	numerator_2 *= denominator_1;
	SetNumer(numerator_1 - numerator_2);
	SetDenom(denominator_1 * denominator_2);
	Reduction();
	ShowFraction();
}

void FractionClass::Mult(int numerator_1, int denominator_1, int numerator_2, int denominator_2)
{
	SetNumer(numerator_1 * numerator_2);
	SetDenom(denominator_1 * denominator_2);
	Reduction();
	ShowFraction();
}

void FractionClass::Division(int numerator_1, int denominator_1, int numerator_2, int denominator_2)
{
	SetNumer(numerator_1 * denominator_2);
	SetDenom(denominator_1 * numerator_2);
	Reduction();
	ShowFraction();
}