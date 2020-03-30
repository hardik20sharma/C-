#include<iostream>
using namespace std;
#include<cmath>
int main()
	{
		int n,n2,copy,digit,sum=0;
		cout<<"Enter the number:";cin>>n;
		n2=pow(n,2);
		copy=n2;
		cout<<n2;
		while(copy!=0)
			{
				digit=copy%10;
				sum+=digit;
				copy/=10;	
			}
		if(sum==n)
		cout<<"\nNeon number";
		else
		cout<<"\nNot a neon number";		
	}
