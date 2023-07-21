// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Flower.h"
#include "Bouquet.h"
int main()
{   
	Flower r1("Rose","Yellow",1,0,0);
	cout << r1 << endl;
	Flower r2("Rose", "Yellow", 4, 1, 0);
	Flower r3("Rose", "Red", 2, 1, 1);
	Bouquet b1;
	b1 += r1;
	b1 += r1;
	b1 += r2;
	b1 += r3;
	cout << "OUTPUT B1\n";
	cout << b1;
	b1 -= r1;
	cout << "OUTPUT B1\n";
	cout << b1;
	cout << b1.get_flower()<<endl;
	Bouquet b2;
	b2 = b1 + r2;
	cout << "OUTPUT B2\n";
	cout << b2;
	

}


