#include<iostream>
using namespace std;
int two_numbers(float a,float b)
{
	if(a>b)
		cout<<a<<" is the highest between the 2 numbers.\n";
	else if(b>a)
		cout<<b<<" is the highest between the 2 numbers.\n";
	else if(b==a)
		cout<<"BOTH THE NUMBERS ARE SAME!";
}
int three_numbers(float a, float b, float c)
{
	if(a>b && a>c)
		cout<<a<<" is the highest between the 3 numbers.\n";
	else if(b>a && b>c)
		cout<<b<<" is the highest between the 3 numbers.\n";
	else if(c>a && c>b)
		cout<<c<<" is the highest between the 3 numbers.\n";
	else if(a==b && b==c)
		cout<<"ALL THE NUMBERS ARE SAME!";
}
int main()
{
	char ch;
	for(int z=0; ch!=4; z++)
	{
	cout<<"\nHIGHEST MENU FUNCTION\n";
	cout<<"1. Find the highest of 2 numbers.\n";
	cout<<"2. Find the highest of 3 numbers.\n";
	cout<<"3. Find the highest of n numbers.\n";
	cout<<"4. Exit\n";
	cout<<"Enter your choice:";cin>>ch;
		switch(ch)
		{
			case'1':
			{
				float a,b;
				cout<<"Enter the 1st number:";cin>>a;
				cout<<"Enter the 2nd number:";cin>>b;
				two_numbers(a,b);
				break;
			}
			case '2':
			{
				float a,b,c;
				cout<<"Enter the 1st number:";cin>>a;
				cout<<"Enter the 2nd number:";cin>>b;
				cout<<"Enter the 3rd number:";cin>>c;
				three_numbers(a,b,c);
				break;
			}
			case '3':
			{
				float num, max=0;
				cout<<"Enter the numbers (to end input type -1):\n";
				for(int i=0; num!=-1; i++)
				{
					cin>>num;
					if(num>max)
						max=num;
				}
				cout<<"The maximum number is "<<max;
				break;			
			}
			case '4':return(0);break;
		}
	}
}
