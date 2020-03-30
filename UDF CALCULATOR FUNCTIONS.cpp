#include<iostream>
using namespace std;
double sum(double a, double b, char ch)
	{
		switch(ch)
		{
		
			case '+':cout<<"The sum of number is:"<<a+b; break;    
			case '-':cout<<"The result is:"<<a-b; break;
			case '*':cout<<"The product is:"<<a*b; break;
			case '/':cout<<"The quotient is:"<<a/b; break;
		}
	}
int main()
	{
		double d,e; char c;
		cout<<"Enter the first number:";cin>>d;
		cout<<"Enter the second number:";cin>>e;
		cout<<"Enter the operation you want to perform(+,-,*,/):";cin>>c;
		cout<< sum(d,e,c);
	}
