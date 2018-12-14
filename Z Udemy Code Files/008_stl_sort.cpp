// SORTING USING STL
// Date: 06 December 2018
// Author: Ravi Teja Gannavarapu
// Implementation learnt from the Udemy Course on Data Structures & Algorithms in C++.
// Find the course at: https://www.udemy.com/introduction-to-algorithms-and-data-structures-in-c/

// Time Complexity: O(n*logn)

#include<bits/stdc++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

bool compare(int x, int y)
{
	return x > y; // For descending
	// return x < y; // For ascending
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a+0, a+n, compare);
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}
