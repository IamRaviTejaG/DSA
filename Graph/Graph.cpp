// This is the first time I am implementing a graph in my lifetime.
// Learning DSA right now! I'm in 6th sem already, which ends in a month. Is it too late?
// Free advice:
// RnJlZSBhZHZpY2UgZm9yIGZ1dHVyZSBkZXZzOiBPcGVuIHNvdXJjZSBpcyBhIHJlYWwgZ29vZCB0
// byBoYXZlIChvbiBDViksIGJ1dCBtYWtlIHN1cmUgeW91IGFyZSBmaW5pc2hlZCB3aXRoIGl0IGJ5
// IHRoZSBzb3Bob21vcmUgeWVhciAoaW5jbHVkaW5nIEdTb0MgJiBHU29EKS4gS2VlcCBqdW5pb3Ig
// eWVhciBmb3Igb24tc2l0ZSBleHBlcmllbmNlcyBhbmQgaWYgeW91IGFzcGlyZSB0byB3b3JrIGF0
// IGFueSBvZiB0aGUgdGVjaCBnaWFudHMsIGRvIG5vdCwgSSByZXBlYXQsIERPIE5PVCBuZWdsZWN0
// IERhdGEgU3RydWN0dXJlcyBhbmQgQWxnb3JpdGhtcyAoRFNBKS4gVGhleSBhcmUgaGFyZCB0byB1
// bmRlcnN0YW5kIGFuZCBtYXN0ZXIsIGJ1dCB0aGV5IHdpbGwgaGVscCB5b3UgcmVhbGl6ZSB5b3Vy
// IGRyZWFtISBMb3ZlLCBSYXZpLg==

// Author: Ravi Teja Gannavarapu
// Date: 14 April 2019
// Time: 8.05 PM
// Message: VG9kYXkgaXMgUmFtIE5hdmFtaSAmIFBhcGEncyA1NHRoIHRpdGhpIGJpcnRoZGF5LiA6KQ==

#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{
	int t;
	cout<<"Enter number of nodes: ";
	cin>>t;
	std::vector<std::list<int>> g(t);
	for (int i=0; i<t; i++)
	{
		cout<<"Enter the no. of nodes the node "<<i<<" is connected to: ";
		int n;
		cin>>n;
		cout<<"Enter the nodes: ";
		while(n--)
		{
			int input;
			cin>>input;
			g[i].push_back(input);
		}
		cout<<endl;
	}
	cout<<"The graph is: "<<endl<<endl;
	
	int i=0;
	std::vector<std::list<int>>::iterator git;
	
	for (git=g.begin(); git!=g.end(); git++)
	{
		std::list<int> l = *git;
		cout<<"Node "<<i<<": ";
		std::list<int>::iterator lit;
		for (lit=l.begin(); lit!=l.end(); lit++)
			cout<<*lit<<"->";
		cout<<endl;
		i++;
	}
	return 0;
}
