#include<bits/stdc++.h>

using namespace std;

int bsearch(int a[], int size, int value)
{
	int mid, left = 0, right = size-1, result = -1;
	while(left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] == value)
			result = mid, right = mid - 1;
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
	scanf("%d%d", &n, &q);
	int a[n];
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	while (q--)
	{
		int b;
		scanf("%d", &b);
		printf("%d\n", bsearch(a, n, b));
	}
	return 0;
}
