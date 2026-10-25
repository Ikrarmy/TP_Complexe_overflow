// Complexe_overload.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Complexe.h"

int main()
{
	Complexe* c1 = new Complexe(2.8, 3.5);
	Complexe* c2 = new Complexe(1.25, 4.75);
	c1->affiher();
	c2->affiher();

	Complexe c3 = *c1 + *c2;
	c3.affiher();
	c3 = *c1 + 5.3;
	c3.affiher();

	c3 = *c1 - *c2;
	c3.affiher();
	c3 = *c1 - 2.89;
	c3.affiher();

	c3 = *c1 * *c2;
	c3.affiher();
	c3 = *c1 * 3.72;
	c3.affiher();

	c3 = *c1 / *c2;
	c3.affiher();
	c3 = *c1 / 2.23;
	c3.affiher();


	Complexe c4 = *c1;
	c4.affiher();
	c4 = 4.85;
	c4.affiher();


	Complexe c7 = *c1 += *c2;
	c7.affiher();	
	c7 = *c1 += 5.3;
	c7.affiher();

	c7 = *c1 -= *c2;
	c7.affiher();
	c7 = *c1 -= 2.89;
	c7.affiher();

	c7 = *c1 *= *c2;
	c7.affiher();
	c7 = *c1 *= 3.72;
	c7.affiher();

	c7 = *c1 /= *c2;
	c7.affiher();
	c7 = *c1 /= 2.23;
	c7.affiher();

	Complexe c8 = *c1++;
	c8.affiher();
	c8 = *c1--;
	c8.affiher();

	bool b1 = *c1 == *c2;
	b1 = *c1 == 6.76;
	b1 = *c1 != *c2;
	b1 = *c1 != 10.98;

	b1 = *c1 > *c2;
	b1 = *c1 > 8.21;
	b1 = *c1 < *c2;
	b1 = *c1 < 5.79;

	b1 = *c1 >= *c2;
	b1 = *c1 >= 20.85;
	b1 = *c1 <= *c2;
	b1 = *c1 <= 15.98;
	

	delete c1;
	c1 = nullptr;
	delete c2;
	c2 = nullptr;	
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
