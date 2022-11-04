// 5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iomanip>
#include <iostream>
#include <cmath>
using namespace std;
double f(const double x );
int main()
{
	double tp, x, tk, z;
	int v=0,n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;
	double dt = (tk - tp) / n;
	double t = tp;
	

	while (t < tk)
	{
		z = f(2 * t) + pow(t * t + 1, 2);
		t += dt;
		v++;

		cout << fixed;
		cout << "-------------------------------------------------" << endl;
		cout << "|" << setw(5) << v  << "t=" << t<<"  "  << " |"
			<< setw(10) << "z" << "  " << z << " |"	<< endl;
		
	}
	
	
cout << "-------------------------------------------------" << endl;
	return 0;
} 
	
double f(const double x)
{
	if (abs(x) >= 1)
		return (sin(2 * x) + 1) / sin(x + cos(x) * cos(x)); 
	if (abs(x) < 1)
	{
		double S = 0;
		int n = 0;
		double a = x * x;
		S = a;
		do
		{
			n++;
			double R = pow(x, 4) / ((2 * n + 1) * 2 * n);
			a *= R;
			S += a;
		} while (n < 7);
		return S;
	}
	
		
}	

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
