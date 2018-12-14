// BINARY SEARCH
// Date: 14 December 2018
// Author: Ravi Teja Gannavarapu

// Time Complexity: O(logn)

#include<bits/stdc++.h>

using namespace std;

int bsearch(int a[], int size, int value)
{
	int mid, left = 0, right = size-1;
	while(left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] == value)
			return mid;
		else if (value < a[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return -1;
}

int main()
{
	int n, q;
	cin>>n>>q;
	int a[n];
	for (int i=0; i<n; i++)
		cin>>a[i];
	// STL sort below takes O(n*logn) time. Binary search works only on sorted arrays.
	sort(a, a+n); // MANDATORY
	while(q--)
	{
		int b;
		cin>>b;
		cout<<"Element found at index: "<<bsearch(a, n, b)<<endl;
	}
	return 0;
}
