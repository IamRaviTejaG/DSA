// MARS TRICKERY
// Date: 05 December 2018
// Author: Ravi Teja Gannavarapu
// Implementation learnt from the Udemy Course on Data Structures & Algorithms in C++.
// Find the course at: https://www.udemy.com/introduction-to-algorithms-and-data-structures-in-c/

#include<bits/stdc++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int main()
{
	int a[10] = {0}, b[10] = {0}, temp, left, right, value, nq, naele;
	f>>naele;
	for (int i=0; i<naele; i++)
		f>>a[i];
	f>>nq;
	for (int j=0; j<nq; j++)
	{
		f>>left>>right>>value;
		b[left] += value;
		b[right+1]  -= value;
	}
	for (int i=0; i<naele; i++)
	{
		temp += b[i];
		a[i] += temp;
		g<<a[i]<<" ";
	}
	return 0;
}
