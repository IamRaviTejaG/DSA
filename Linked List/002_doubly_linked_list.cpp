// DOUBLY LINKED LIST
// Date: 13 December 2018
// Author: Ravi Teja Gannavarapu

#include<bits/stdc++.h>

using namespace std;

struct node
{
	int info;
	node *prev, *next;
} *head;

void insert(int newData, int location)
{
	if (location == -1) // for creation of a new linked list, when one doesn't already exist
	{
		head = new node;
		head->info = newData;
		head->prev = NULL;
		head->next = NULL;
		cout<<"New DLL created with element: "<<newData<<endl;
	}
	else if (location == 0) // insert at beginning
	{
		node *temp = new node;
		temp->info = newData;
		temp->prev = NULL;
		temp->next = head;
		head->prev = temp;
		head = temp;
		cout<<"Inserting element "<<newData<<" at the beginning!"<<endl;
	}
	else // inserts at end
	{
		node *temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		node *newnode = new node;
		newnode->info = newData;
		newnode->prev = temp;
		newnode->next = NULL;
		temp->next = newnode;
		cout<<"Inserting element "<<newData<<" at the end!"<<endl;
	}
}

void display()
{
	node *temp = head;
	if (temp == NULL)
		cout<<"DLL Empty!";
	while(temp != NULL)
	{
		//cout<<"curr: "<<temp<<" | prev: "<<temp->prev<<" | info: "<<temp->info<<" | next: "<<temp->next<<endl;
		cout<<temp->info<<"->";
		temp = temp->next;
	}
	cout<<endl;
}

void del(int location)
{
	if (location == 0) // deletes the beginning element
	{
		node *temp = head;
		head = head->next;
		head->prev = NULL;
		cout<<"Deleting head element "<<temp->info<<"."<<endl;
		delete temp;
	}
	else // deletes the end element
	{
		node *temp = head;
		if (temp->next == NULL)
		{
			delete temp;
			head = NULL;
		}
		else
		{
			while(temp->next && temp->next->next != NULL)
				temp = temp->next;
			delete temp->next;
			temp->next = NULL;
		}
		cout<<"Deleting the end element."<<endl;
	}
}

int main()
{
	insert(1, -1); // create LL first!
	display();
	insert(2, 0);
	display();
	insert(3, 0);
	display();
	insert(4, 1);
	display();
	del(0);
	display();
	insert(5, 0);
	display();
	del(1);
	display();
	del(1);
	display();
	del(1);
	display();
	del(1);
	display();
	return 0;
}
