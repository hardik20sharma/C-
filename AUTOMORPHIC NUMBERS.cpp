#include<iostream>
using namespace std;
int main()
	{
		int n,s;
		cout<<"Enter the number(single digit):";
		cin>>n;
		s=n*n;
		cout<<s;
		int copy=s;
		int digit=copy%10;
		if(digit==n)
			{
				cout<<"\nautomorphic";
			}
		else	
			{
				cout<<"\nNot automorphic";
			}
	}
