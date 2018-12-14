// COUNTING SORT
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
	int t; // Number of elements in the array
	f>>t; // Input from file
	int arr[t], a, maxi = 0;
	for (int i=0; i<t; i++)
	{
		f>>a; // Array element at arr[i]
		++arr[a];
		maxi = max(maxi, a);
	}
	for (int i=0; i<=maxi; i++)
	{
		if (arr[i] > 0)
			for (int j=0; j<arr[i]; j++)
				g<<arr[i]<<" ";
	}
	return 0;
}
