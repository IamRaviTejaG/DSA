// QUEUE
// Date: 05 December 2018
// Author: Ravi Teja Gannavarapu
// Implementation learnt from the Udemy Course on Data Structures & Algorithms in C++.
// Find the course at: https://www.udemy.com/introduction-to-algorithms-and-data-structures-in-c/

#include<bits/stdc++.h>

using namespace std;

int Queue[100], back = -1, front;

void push(int x)
{
	++back;
	Queue[back] = x;
}

void pop()
{
	Queue[front] = 0;
	++front;
}

void view()
{
	for (int i=front; i<=back; i++)
		cout<<"->"<<Queue[i];
	cout<<endl;
}

int main()
{
	push(1);
	push(3);
	push(5);
	push(7);
	view();
	pop();
	pop();
	view();
	return 0;
}
