// BASIC SORTING
// Date: 06 December 2018
// Author: Ravi Teja Gannavarapu
// Implementation learnt from the Udemy Course on Data Structures & Algorithms in C++.
// Find the course at: https://www.udemy.com/introduction-to-algorithms-and-data-structures-in-c/

// Time Complexity: O(n^2)

#include<bits/stdc++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
// To print all the steps involved, uncomment and include curly braces appropriately
//				for (int k=0; k<n; k++)
//					cout<<a[k]<<" ";
//				cout<<'\n';
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}
