#pragma once
#include <iostream>
using namespace std;

class FractionClass
{
	int numer; //numerator
	int denom; //denominator
	
public:

	int GetNumer()
	{
		return numer;
	}

	int GetDenom()
	{
		return denom;
	}

	void SetNumer(int numer)
	{
		this->numer = numer;
	}

	void SetDenom(int denom)
	{
		if (denom == 0)
		{
			cout << "\tdenom cannot be zero" << "\n\n";
			return;
		}
		else this->denom = denom;
	}

	FractionClass();

	FractionClass(int numer, int denom);

	void Print();

	void ShowFraction();

	float ValueFraction();

	void Reduction();

	void Comparison(int numerator_1, int denominator_1, int numerator_2, int denominator_2);

	void Addition(int numerator_1, int denominator_1, int numerator_2, int denominator_2);

	void Subtraction(int numerator_1, int denominator_1, int numerator_2, int denominator_2);
};

