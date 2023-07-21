#include "Bouquet.h"

Bouquet::Bouquet()
{
	flower = NULL;
	
}
//=====================
int Bouquet::no_flower = 0;
bool Bouquet::perfume()
{
	if (no_flower==0)
		return 0;
	else
	{
		for (int i = 0; i < no_flower; i++)
		{
			if (flower[i].perfume() == 1)
				return 1;
		}
	}
	return 0;
}
//=====================
int Bouquet::price()
{
	int sum = 0;
	if (flower == NULL)
		return sum;
	else
	{
		for (int i = 0; i < no_flower; i++)
		{
			sum += flower[i].price();
		}
	}
	return sum;
}
//========================
Bouquet :: operator string()
{
	string ans;
	if (flower == NULL)
		ans = "Still no flower in the bouquet\n";
	else
	{
		for (int i = 0; i < no_flower; i++)
		{
			ans += flower[i].operator string();
		}
	}
	ans += "Total price: " + price() ;
	ans += "Rs";
	return ans;
}
//==========================
ostream& operator<<(ostream& out, Bouquet& a)
{
	if (a.flower == NULL)
		out << "Still no flower in the bouquet\n";
	else
	{
		for (int i = 0; i < a.no_flower; i++)
		{
			out << a.flower[i];
		}
	}
	out << "Total price: " << a.price() << endl;
	return out;
}
//============================
Bouquet& Bouquet :: operator+=(Flower& a)
{
	if (flower == NULL)
	{
		no_flower = 1;
		flower = new Flower[no_flower];
		flower[0] = a;
		return *this;
	}
	else
	{
		no_flower++;
		Flower* n_flo = new Flower[no_flower];
		for (int i = 0; i < no_flower - 1; i++)
		{			//2 flower meand index 0 and 1 and no_flower =2 
			n_flo[i] = flower[i];
		}
		delete [] flower;
		n_flo[no_flower - 1] = a;
		flower = new Flower[no_flower];
		//flower = n_flo;		
		for (int i = 0; i < no_flower; i++)
			flower[i] = n_flo[i];
		delete[] n_flo;
	}
	return *this;
}
//============================
Bouquet& Bouquet :: operator-=(Flower& a)
{
	if (flower == NULL)
	{
		cout << "this bouquet is empty\n";
		return *this;
	}
	else
	{
		int index = 0,count=0;
		Flower* n_flo;
		for (int i = 0; i < no_flower; i++)
		{
			if (flower[i] == a)
				count++;
		}
		if (count != 0)
		{
			n_flo = new Flower[no_flower - count];
			for (int i = 0; i < no_flower; i++)
			{
				if (flower[i] == a)
					continue;
				n_flo[index] = flower[i];
				index++;
			}
			delete[] flower;
			no_flower -= count;
			flower = new Flower[no_flower];
			for (int i = 0; i < no_flower; i++)
			{
				flower[i] = n_flo[i];
			}
			delete[] n_flo;
		}
	}
	return *this;
}
//============================
Bouquet& Bouquet :: operator+(Flower& a)
{
	if (flower == NULL)
	{
		no_flower = 1;
		flower = new Flower[no_flower];
		flower[0] = a;
		return *this;
	}
	else
	{
		no_flower++;
		Flower* n_flo = new Flower[no_flower];
		for (int i = 0; i < no_flower - 1; i++)
		{			//2 flower meand index 0 and 1 and no_flower =2 
			n_flo[i] = flower[i];
		}
		delete[] flower;
		n_flo[no_flower - 1] = a;
		flower = new Flower[no_flower];
		//flower = n_flo;		
		for (int i = 0; i < no_flower; i++)
			flower[i] = n_flo[i];
		delete[] n_flo;
	}
	return *this;
}
