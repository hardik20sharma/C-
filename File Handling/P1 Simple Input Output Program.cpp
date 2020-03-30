#include<iostream>
using namespace std;
#include<fstream>

int main()
{
	int rollno; float marks;
	ofstream fout;
	fout.open("P1File.dat", ios::out);
	char ans='y';
	while(ans=='y')
	{
		cout<<"\nEnter Roll Number:"; cin>>rollno;
		cout<<"\nEnter Marks:"; cin>>marks;
		fout<<rollno<<endl<<marks<<endl;
		cout<<"\nWant to continue ?:"; cin>>ans;
	}
	fout.close();

	cout<<"\n\nReading data from file now\n";
	ifstream fin;
	fin.open("P1File.dat", ios::in);
	fin.seekg(0);
	cout<<endl;
	while(fin!=EOF)
	{
		fin>>rollno>>marks;
		cout<<"Roll No:"<<rollno<<"\tMarks:"<<marks<<endl;
	}
	fin.close();	
}
