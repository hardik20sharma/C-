#include<iostream>
using namespace std;
#include<cmath>
double check(double a, double b, double c)          //USED TO CHECK THE TYPE OF TRIANGLE AND IF THE TRIANGLE EXISTS.
	{
		if((a+b)>=c && (a+c)>=b && (b+c)>=a)
			{
			cout<<"THE TRIANGLE IS POSSIBLE:";
			if(a==b && b==c)
			cout<<"IT IS AN EQUILATERAL TRIANGLE";
			else if(a==b || a==c || b==c)
			cout<<"IT IS AN ISOCELES TRIANLGE";
			else
			cout<<"IT I A SCALENE TRIANGLE";
			}
		else
		cout<<"IT IS NOT POSSIBLE";
	}
double area(double a, double b, double c)          //USED TO FIND THE AREA OF THE TRIANGLE.
	{
		double s=(a+b+c)/2;
		cout<<"AREA IS:"<<sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"\nPERIMETER IS:"<<a+b+c;
	}
int main()
	{	
		double a,b,c; int ch;
		cout<<"ENTER THE SIDES OF THE TRIANGLE:";cin>>a>>b>>c;
		cout<<"WHAT DO YOU WANT TO KNOW:-(1)POSSIBILITY FOR EXISTENCE OF TRIANLGE OR (2)AREA AND PERIMETER OR (3)BOTH:";cin>>ch;
		switch(ch)
			{
				case 1: check(a,b,c); break;
				case 2: area(a,b,c); break;
				case 3: check(a,b,c); cout<<endl; area(a,b,c); break;
			}
	}
