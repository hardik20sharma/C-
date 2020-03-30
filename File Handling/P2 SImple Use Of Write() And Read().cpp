#include<iostream>
using namespace std;
#include<fstream>
#include<string.h>

struct customer
	{ char name[15]; float balance; };

int main()
{
	customer c1;
	strcpy(c1.name,"Tina Marshall");
	c1.balance=21310.75;
	ofstream fout;
	fout.open("P2File", ios::out | ios::binary);
	fout.write( (char *) &c1, sizeof(customer) );
	fout.close();
	
	ifstream fin;
	fin.open("P2File", ios::in | ios::binary);
	fin.read( (char *) &c1, sizeof(customer) );
	cout<<c1.name<<" has the balance amount of "<<c1.balance<<endl;
	fin.close();
}
