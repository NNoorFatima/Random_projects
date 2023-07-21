#pragma once
#include "Flower.h"
#include <iostream>
using namespace std;
class Bouquet
{
	Flower* flower;
	static int no_flower;
public:
	Bouquet();
	bool perfume();	//returns 1 is the bouquet is perfumed 0 otherwise, for a bouquet to be perfumed at least one flower must be perfumed
	int price();	//returns sum of the price of flowers; it is multiplied by 2 if bouquet is perfumed
	operator string();
	friend ostream& operator<<(ostream& out, Bouquet& a);
	Bouquet& operator+=(Flower& a);		//adds a flower to the bouquet 
	Bouquet& operator-=(Flower& a);		//removes all flowers which are same as parameter
	Bouquet& operator+(Flower& a);	//adds a flower to the bouquet 
	int get_flower()
	{
		return no_flower;
	}
};

