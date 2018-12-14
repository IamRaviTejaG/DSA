// DATA STRUCTURE - STRUCT
// Date: 07 December 2018
// Author: Ravi Teja Gannavarapu
// Implementation learnt from the Udemy Course on Data Structures & Algorithms in C++.
// Find the course at: https://www.udemy.com/introduction-to-algorithms-and-data-structures-in-c/

#include<bits/stdc++.h>

using namespace std;

struct Books
{
    string Title, Author;
    int ID;
    float price;
} book1;

void printingBooks(Books variableBook)
{
    cout<<variableBook.Author<<"\n";
    cout<<"Title is: "<<variableBook.Title<<"\n";
    cout<<variableBook.ID<<"\n";
    cout<<variableBook.price<<"\n";
}

int main ()
{
	book1.ID=10;
	book1.price=13.67;
	book1.Title = "Data structures";
	book1.Author = "Mark";
	printingBooks(book1);
	Books book2; // int, floar, char
	book2.ID = 100;
	cout<<book2.ID<<"\n";
	return 0;
}
