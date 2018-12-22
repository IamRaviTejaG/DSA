// QUICK SORT
// Date: 22 December 2018
// Author: Ravi Teja Gannavarapu

// Time Complexity -> O(n*logn)

#include<bits/stdc++.h>

using namespace std;

// Partitioning the array on the basis of values at last as pivot value
int partitionIndex(int arr[], int first, int last)
{
	int i, index = first, pivot = last;
	
	// Getting index of pivot
	for (i=first; i<last; i++)
	{
		if (arr[i] < arr[pivot])
		{
			swap(arr[i], arr[index]);
			index++;
		}
	}

	// Swapping value at last and at the index obtained
	swap(arr[pivot], arr[index]);

	return index;
}

// Random selection of pivot
int randomPivotPartition(int arr[], int first, int last)
{
	int n = rand(), pivot, temp;

	// Randomizing the pivot value in the given subpart of array
	pivot = first + n % (last - first + 1);

	// Swapping pivot value with last, so pivot value will be taken as pivot while partitioning
	swap(arr[last], arr[pivot]);

	return partitionIndex(arr, first, last);
}

// Implementing QuickSort algorithm
int QuickSort(int arr[], int first, int last)
{
	int pindex;
	if (first < last)
	{
		// Partitioning array using randomized pivot
		pindex = randomPivotPartition(arr, first, last);
		
		// Recursively implementing QuickSort.
		QuickSort(arr, first, pindex-1);
		QuickSort(arr, pindex+1, last);
	}
	return 0;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
		cin>>a[i];
	QuickSort(a, 0, n-1);
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;	
}
