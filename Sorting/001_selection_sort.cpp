// SELECTION SORT
// Date: 11 December 2018
// Author: Ravi Teja Gannavarapu

// Time Complexity -> Best: O(n^2), Worst: O(n^2), Average: O(n^2)

#include<bits/stdc++.h>

using namespace std;

void selsort(int v[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        int smallInd = i; // Index of smallest element
        for (int j=i+1; j<n; j++)
            if (v[j] < v[smallInd])
                smallInd = j;
        swap(v[smallInd], v[i]);
    }
}

int main()
{
    int a, n;
    cin>>n;
    int v[n];
    for (int i=0; i<n; i++)
        cin>>v[i];
    selsort(v, n);
    return 0;
}
