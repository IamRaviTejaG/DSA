// MAJORITY ELEMENT
// Date: 06 December 2018
// Author: Ravi Teja Gannavarapu
// Implementation learnt from the Udemy Course on Data Structures & Algorithms in C++.
// Find the course at: https://www.udemy.com/introduction-to-algorithms-and-data-structures-in-c/

// Time Complexity: O(n*logn)

#include<bits/stdc++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a+0, a+n);
	int majEle = a[n/2 + 1]; // Majority element can occur at position (n/2 + 1)
	int majEleOccurrences = 0;
	for (int i=0; i<n; i++)
		if (a[i] == majEle)
			++majEleOccurrences;
	if (majEleOccurrences >= n/2 + 1)
		cout<<"Majority element is "<<majEle<<" & it occurs "<<majEleOccurrences<<" times."<<endl;
	else
		cout<<"No majority element found!"<<endl;
	return 0;
}
