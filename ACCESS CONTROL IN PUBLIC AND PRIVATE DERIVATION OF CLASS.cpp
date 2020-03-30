#include<iostream>
using namespace std;

const int len=25;

class employee
{
	private:
	char name[len];
	unsigned long enumb;
	
	protected:
	float basic;
	void getbasic()
		{	cout<<"Enter Basic: "; cin>>basic;	}	
		
	public:
	void getdata()
	{
		cout<<"Enter Name: "; gets(name);
		cout<<"Enter Employee Number: "; cin>>enumb;
	}
	void putdata()
	{
		cout<<"Name: "<<name<<"\tEmployee Number: "<<enumb<<"\tBasic Salary: "<<basic;
	}
};

class manager : public employee
{
	private:
	char title[len];
	
	public:
	void getdata()
	{
		employee::getdata();
		getbasic();
		cout<<"Enter Title :"; gets(title);
		cout<<endl;
	}
	void putdata()
	{
		employee::putdata();
		cout<<"\tTitle: "<<title<<endl;
	}
};

int main ()
{
	manager m1, m2;
	cout<<"Manager 1\n"; m1.getdata();
	cout<<"Manager 2\n"; m2.getdata();
	cout<<"\t\tManager 1 details\n"; m1.putdata();
	cout<<"\t\tManager 2 details\n"; m2.putdata();
	return 0;	
}
