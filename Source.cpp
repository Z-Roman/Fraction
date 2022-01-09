#include <iostream>
#include "FractionClass.h"
using namespace std;


int main()
{
	
	FractionClass a;
	a.Print();
	a.ShowFraction();
	a.SetNumer(180);
	a.SetDenom(324);
	a.Print();
	a.ShowFraction();
	a.Reduction();
	a.ShowFraction();
	a.Comparison(3, 7, 7, 9);
	a.Addition(5, 16, 5, 28);
	cout << "\n\t" << a.ValueFraction() << "\n\n";
	
}