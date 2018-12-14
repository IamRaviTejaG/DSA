// DATA STRUCTURE - STRUCT
// Date: 07 December 2018
// Author: Ravi Teja Gannavarapu
// Implementation learnt from the Udemy Course on Data Structures & Algorithms in C++.
// Find the course at: https://www.udemy.com/introduction-to-algorithms-and-data-structures-in-c/

#include<bits/stdc++.h>

using namespace std;

struct car
{
    string model;
    int year;
    int ID;
} mycar, cars[1000];

void printingCar (car variableCar) {
    cout<<variableCar.model<<"\n";
    cout<<variableCar.ID<<"\n";
    cout<<"\n";
}

int main ()
{
    mycar.model = "Audi A5";
    mycar.year = 2017;
    cout<<mycar.model[0]<<mycar.model[1]<<mycar.model[2];
    cout<<mycar.model[3];
    for (int i=0; i<100; i++)
	{
        cars[i].ID=i;
        cars[i].model = "Fast and furious";
        cars[i].year=2017;
    }
    // print cars[13] and cars[37]
    printingCar(cars[13]);
    printingCar(cars[37]);
    return 0;
}
