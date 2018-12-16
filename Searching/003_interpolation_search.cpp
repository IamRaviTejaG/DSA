// INTERPOLATION SEARCH
// Date: 14 December 2018
// Author: Ravi Teja Gannavarapu

// Time Complexity -> Best: O(log(logn)), Worst: O(n)

#include<bits/stdc++.h>

using namespace std;

int isearch(int a[], int size, int value)
{
	int first = 0, last = size-1;
	while (first <= last && value >= a[first] && value <= a[last])
	{
		// Probe position formula
		int pos = first + (((double)(last-first) / (a[last] - a[first])) * (value - a[first]));

		if (a[pos] == value)
			return pos;

		if (a[pos] < value)
			first = pos + 1;
		else
			last = pos - 1;
	}
	return -1;
}

int main()
{
	int n, q;
	cin>>n>>q;
	int arr[n];
	for (int i=0; i<n; i++)
		cin>>arr[i];
	sort(arr, arr+n);
	while (q--)
	{
		int b;
		cin>>b;
		cout<<"Element found at index: "<<isearch(arr, n, b)<<endl;
	}
	return 0;
}
