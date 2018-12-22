// MERGE SORT
// Date: 22 December 2018
// Author: Ravi Teja Gannavarapu

// Time Complexity -> O(n*logn)

#include<bits/stdc++.h>

using namespace std;

void Merge(int arr[], int first, int mid, int last)
{
	int i = first, j = mid + 1, k = 0, temp[last - first + 1];

	// Merge both the left and right parts into temp[].
	while (i <= mid && j <= last)
	{
		if (arr[i] < arr[j])
		{
			temp[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}

	// Insert all the remaining values between i & mid into temp[]
	while (i <= mid)
	{
		temp[k] = arr[i];
		k++;
		i++;
	}

	// Insert all the remaining values between j & last into temp[]
	while (j <= last)
	{
		temp[k] = arr[j];
		k++;
		j++;
	}

	// Assign sorted array (temp[]) values into original array arr[]
	for (i=first; i<=last; i++)
		arr[i] = temp[i-first];
}

void MergeSort(int arr[], int first, int last)
{
	int mid;

	if (first < last)
	{
		mid = (first + last) / 2;
		MergeSort(arr, first, mid);
		MergeSort(arr, mid + 1, last);
		Merge(arr, first, mid, last);
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
		cin>>a[i];
	MergeSort(a, 0, n-1);
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;	
}
