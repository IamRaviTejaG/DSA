// LINEAR SEARCH
// Date: 14 December 2018
// Author: Ravi Teja Gannavarapu

// Time Complexity: O(n)

#include<bits/stdc++.h>

using namespace std;

int lsearch(int a[], int size, int value)
{
	for (int i=0; i<size; i++)
		if (a[i] == value)
			return i;
	return -1; // When not found
}

int main()
{
	int n, q;
	cin>>n>>q;
	int a[n];
	for (int i=0; i<n; i++)
		cin>>a[i];
	while(q--)
	{
		int b;
		cin>>b;
		cout<<"Element found at index: "<<lsearch(a, n, b)<<endl;
	}
	return 0;
}
