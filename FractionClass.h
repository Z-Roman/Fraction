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

	void ShowFraction(); //Показать дробь

	float ValueFraction(); //десятичное значение дроби

	void Reduction(); //сокращение дроби

	void Comparison(int numerator_1, int denominator_1, int numerator_2, int denominator_2); //сравнение дробей

	void Addition(int numerator_1, int denominator_1, int numerator_2, int denominator_2); //сумма дробей

	void Subtraction(int numerator_1, int denominator_1, int numerator_2, int denominator_2); //разница между дробями

	void Mult(int numerator_1, int denominator_1, int numerator_2, int denominator_2); //умножение дробей

	void Division(int numerator_1, int denominator_1, int numerator_2, int denominator_2); //деление дробей
};

