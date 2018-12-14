// TERNARY SEARCH
// Date: 14 December 2018
// Author: Ravi Teja Gannavarapu

// Time Complexity: O(log3n)

#include<bits/stdc++.h>

using namespace std;

int tsearch(int a[], int left, int right, int value)
{
	while(left <= right)
	{
		int mid1 = left + (right-left)/3;
		int mid2 = mid1 + (right-left)/3;
		
		if (a[mid1] == value)
			return mid1;
		else if (a[mid2] == value)
			return mid2;
		else if (a[mid1] > value)
			right = mid1 - 1;
		else if (a[mid2] < value)
			left = mid2 + 1;
		else
		{
			left = mid1 + 1;
			right = mid2 - 1;
		}
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
	// STL sort below takes O(n*logn) time. Ternary search works only on sorted arrays.
	sort(a, a+n); // MANDATORY
	while(q--)
	{
		int b;
		cin>>b;
		cout<<"Element found at index: "<<tsearch(a, 0, n, b)<<endl;
	}
	return 0;
}
