// STACK
// Date: 05 December 2018
// Author: Ravi Teja Gannavarapu
// Implementation learnt from the Udemy Course on Data Structures & Algorithms in C++.
// Find the course at: https://www.udemy.com/introduction-to-algorithms-and-data-structures-in-c/

#include<bits/stdc++.h>

using namespace std;

int Stack[100], ind;

void push(int x)
{
	ind++;
	Stack[ind] = x;
}

void pop()
{
	Stack[ind] = 0;
	--ind;
}

void view()
{
	for (int i=0; i<ind; i++)
		cout<<"->"<<Stack[i];
	cout<<endl;
}

int main()
{
	ind = 0;
	push(1);
	push(2);
	push(3);
	view();
	pop();
	pop();
	view();
	return 0;
}
