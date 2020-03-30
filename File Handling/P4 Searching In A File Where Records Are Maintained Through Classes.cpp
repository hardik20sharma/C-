#include<iostream>
using namespace std;
#include<fstream>

class stu
{
	int rollno;
	char name[25], Class[4], grade;
	float marks;
	
	public:
	void getdata()
	{
		cout<<"\nEnter data-"<<endl;
		cout<<"Roll No:"; cin>>rollno;
		cout<<"Name:"; cin>>name;
		cout<<"Class:"; cin>>Class;
		cout<<"Marks:"; cin>>marks;
		if(marks>=75)
			grade='A';
		else if(marks>=60)
			grade='B';
		else if(marks>=50)
			grade='C';
		else if(marks>=40)
			grade='D';
		else
			grade='F';
	}
	void putdata()
	{
		cout<<name<<" ,Roll No-"<<rollno<<" has "<<marks<<"% marks and "<<grade<<"grade."<<endl;
	}
	int getrno()
	{
		return rollno;
	}
};
stu s1, s2;
int main()
{
	char ch='y';
	ofstream fout;
	fout.open("P4File.txt", ios::out | ios::app);
	while(ch=='y')
	{
		s1.getdata();
		fout.write( (char *)&s1, sizeof(s1));
		cout<<"Want to add more records:"; cin>>ch;
	}
	fout.close();
	
	int rn; char found='n';
	ifstream fin;
	fin.open("P4File.txt", ios::in);
	cout<<"Enter Roll No to search for:"; cin>>rn;
	while(!fin.eof())
	{
		fin.read( (char *)&s1, sizeof(s1) );
		if(s1.getrno()==rn)
		{
			s1.putdata();
			found='y';
			break;	
		}	
	}
	if(found=='n')
		cout<<"Roll No not found !\n";
	fin.close();
	
	ifstream fin;
	ofstream fout;
	fin.open("P4File.txt", ios::in);
	fout.open("P4File.txt", ios::out | ios::app);
	char last='y';
	cout<<"Enter details of student whose records needs to be inserted:"; 
	s2.getdata();
	while(!fin.eof())
	{
		fin.read( (char *)&s2, sizeof(s2) );
		if(s2.getrno()<=s1.getrno())
		{
			fout.write( (char *)&s1, sizeof(s1) );
			last='n';
			break;
		}
		else
			fout.write( (char *)&s2, sizeof(s2) );
	}
	if(last=='y')
		fo.write( (char *)&s1, sizeof(s1) );
	
}
