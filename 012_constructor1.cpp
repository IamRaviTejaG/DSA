// CONSTRUCTORS (STRUCT)
// Date: 07 December 2018
// Author: Ravi Teja Gannavarapu
// Implementation learnt from the Udemy Course on Data Structures & Algorithms in C++.
// Find the course at: https://www.udemy.com/introduction-to-algorithms-and-data-structures-in-c/

# include <bits/stdc++.h>

using namespace std;

struct Student
{
    int ID, Year;
    string name;

    Student ()
    {
        ID = 23, Year=2018;
        // memset (array_name, 0, sizeof(array_name));
        // Use ^ if char array is used in place of string.
    }
} s1;

int main ()
{
    cout<<s1.ID<<" "<<s1.Year<<" "<<s1.name<<"\n";
    Student s2;
    cout<<s2.ID;
	return 0;
}
