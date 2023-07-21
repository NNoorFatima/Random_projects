#include "Flower.h"

Flower::Flower(string n, string c, int p, bool pe = false, bool s = false)
{
	name = n;
	color = c;
	_price = p;
	isperfumed = pe;
	onsale = s;
}
//============================
int Flower::price()
{
	if (onsale == 1)
	{
		return (_price / 2);
	}
	return _price;
}
//==========================
bool Flower::perfume()
{
	return isperfumed;
}
//=========================
Flower::operator string()
{
	string r;
	string p;
	if (isperfumed == 1)
		p = "true";
	else
		p = "false";

	r = "<" + name + "> <" + color + "> <" +p + "> <Price:none "  + ">rs";
	return r;
}
//============================
ostream& operator<<(ostream& in, Flower& a)
{
	in << "<" << a.name << "> <" << a.color << "> <" << a.isperfumed << "> <" << a._price << ">Rs" << endl;
	return in;
}
//==========================
bool Flower :: operator==(Flower& a)
{
	if (name == a.name && color == a.color && a.isperfumed == isperfumed)
		return 1;
	return 0;
}

