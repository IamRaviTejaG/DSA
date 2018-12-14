// BINARY SEARCH - FIRST & LAST OCCURRENCE
// Date: 05 December 2018
// Author: Ravi Teja Gannavarapu
// Implementation learnt from the Udemy Course on Data Structures & Algorithms in C++.
// Find the course at: https://www.udemy.com/introduction-to-algorithms-and-data-structures-in-c/

#include<bits/stdc++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

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

int occurrence(int a[], int size, int value, int method) // method: 0 -> First occurrence, 1 -> Last occurrence
{
	int mid, left = 0, right = size-1, result = -1;
	while(left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] == value)
		{
			result = mid;
			if (method == 0)
				right = mid - 1;
			if (method == 1)
				left = mid + 1;
		}
		else if (value < a[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return result;
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
		cout<<"Binary Search: "<<bsearch(a, n, b)<<endl;
		cout<<"First Occurrence: "<<occurrence(a, n, b, 0)<<endl;
		cout<<"Last Occurrence: "<<occurrence(a, n, b, 1)<<endl;
	}
	return 0;
}
