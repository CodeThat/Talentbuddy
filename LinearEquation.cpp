// Linear equation - Let's consider a simple equation of the following form: a*x + b = 0
// Given the values for 'a' and 'b'. Your task is to write a function that prints to the
// standard output (stdout) the computed value for 'x' if any value of x satisfies the 
// equation please print "INF". Note that your function will receive the following arguments:
// 'a' which is the float number a described above 'b' which is the float number 'b' described 
// above. Notes: The equation always has at least one solution.

#include <iostream>

using namespace std;

void solve_equation(double a, double b) {
	double x, xS, zero = 0.0;
	if (b < 0.0)
	{
		xS = zero + (-b);
		x = xS / a;
        cout << x;
	}
	else if (b > 0.0)
	{
		xS = zero - b;
		x = xS / a;
        cout << x;
	}
	else if (a == 0.0 || b == 0.0)
        cout << "INF";
	else 
        cout << "INF";
}
