#include<iostream>
using namespace std;
#include<fstream>
#include<string.h>
#include<stdio.h>

class student
{
	char name[40];
	char grade;
	float marks;
	
	public:
	void getdata();
	void display();
};

void student::getdata()
{
	cout<<"Enter Name:"; gets(name);
	cout<<"Enter Grade:"; cin>>grade;
	cout<<"Enter Marks:"; cin>>marks;	
	cout<<endl;
}

void student::display()
{
	cout<<"Name:"<<name<<"\tGrade:"<<grade<<"\tMarks:"<<marks<<endl;
}

int main()
{
	student arts[3];
	fstream filin;
	filin.open("P3File.dat", ios::in | ios::out);
	cout<<"Enter details of 3 students:\n";
	for(int i=0; i<3; i++)
	{
		arts[i].getdata();
		filin.write( (char *)&arts[i], sizeof(arts[i]) );
	}
	filin.seekg(0);
	
	cout<<"Showing the contents:\n";
	for(int i=0; i<3; i++)
	{
		filin.read( (char *)&arts[i], sizeof(arts[i]));
		arts[i].display();	
	}
	filin.close();
}
