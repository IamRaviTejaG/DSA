// BUBBLE SORT
// Date: 11 December 2018
// Author: Ravi Teja Gannavarapu

// Time Complexity -> Best: O(n), Worst: O(n^2), Average: O(n^2)

#include<bits/stdc++.h>

using namespace std;

void bubblesort(int v[], int n)
{
	for (int i=0; i<n-1; i++)
		for (int j=0; j<n-i-1; j++)
			if (v[j] > v[j+1])
				swap(v[j], v[j+1]);
	for (int i=0; i<n; i++)
		cout<<v[i]<<" ";
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
		cin>>a[i];
	bubblesort(a, n);
	return 0;
}
