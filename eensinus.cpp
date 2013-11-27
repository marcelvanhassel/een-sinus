#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	// Variabele t, tijd voor de sinus
	double t;
	
	// Telt in 100 stapjes van 0 tot 2
	for(t = 0.0 ; t <= 2.0; t += 0.02)
	{
		// Sinus berekend
		double result = sin(t*M_PI);

		cout << result << endl;

	}	

	return 0;
}
