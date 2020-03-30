#include<iostream>
using namespace std;
int main()
	{
		double tn,a,d,n1,n2,sum;
		char ch;
		cout<<"ENTER THE FIRST TERM:";cin>>a;
		cout<<"ENTER THE COMMON NUMBER:";cin>>d;
		cout<<"WHAT DO YOU WANNA KNOW ABOUT TERM(1) OR SUM(2) OR BOTH(3)?";cin>>ch;
		switch(ch)
			{
			case '1':	
			cout<<"WHICH TERM DO YOU WANNA KNOW?";cin>>n1;
			tn= a+ (n1-1)*d;
			cout<<"THE TERM IS:"<<tn;
			break;
			
			case '2':
			cout<<"SUM UPTO WHICH TERMS:?";cin>>n2;
			sum=(n2/2)*(2*a +(n2-1)*d);
			cout<<"THE SUM OF THE NUMBERS IS:"<<sum;
			break;
			
			case '3':
			cout<<"WHICH TERM DO YOU WANNA KNOW?";cin>>n1;
			tn= a+ (n1-1)*d;
			cout<<"THE TERM IS:"<<tn;
			sum=(n1/2)*(2*a +(n1-1)*d);
			cout<<"\nTHE SUM OF THE NUMBERS IS:"<<sum;
			break;
			
			}
	}
