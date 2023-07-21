#pragma once
#include <string>
#include <iostream>
using namespace std;
class Flower
{
	string name;
	string color;
	int _price;
	bool isperfumed;
	bool onsale;
public:
	Flower()	//default construcctor
	{
		name = "";
		color = "";
		_price = 0;
		isperfumed = 0;
		onsale = 0;
	}		
	Flower(string,string,int,bool,bool);	//parameterised constructor
	int price();	//base price if not onsale else will be half of base pricce
	bool perfume();		//returns 1 if it is perfumed else 0
	operator string();	//<name><color><perfumed><pricce>: <price>rs
	friend ostream& operator<<(ostream& in, Flower& a); //<name><color><perfumed><pricce>: <price>rs
	bool operator==(Flower& a);//return 1 is two flowers are identiccal else 0
};

