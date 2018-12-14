// CONSTRUCTORS (STRUCT)
// Date: 07 December 2018
// Author: Ravi Teja Gannavarapu
// Implementation learnt from the Udemy Course on Data Structures & Algorithms in C++.
// Find the course at: https://www.udemy.com/introduction-to-algorithms-and-data-structures-in-c/

# include <bits/stdc++.h>

using namespace std;

struct Product
{
	double price;
	string name;
	Product ()
	{
		price=0;
	}
	Product (double newPrice)
	{
		price = newPrice;
	}
	Product (int newPrice)
	{
		price = newPrice + 10;
	}
	Product (string newName, double newPrice)
	{
		price = newPrice;
		name = newName;
	}
} Y(3.6);

int main ()
{
	Product X("Apple", 2.5);
	return 0;
}
