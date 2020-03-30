#include<iostream>
using namespace std;
long ap(long a, long d, long l)
	{
		long n=(l-a+d)/d;
		long sum=(n*(a+l))/2;
		return(sum);	
	}
int main()
 	{
		long a,d,l;
		cout<<"ENTER THE FIRST TERM:";cin>>a;
		cout<<"ENTER THE COMMON DIFFERENCE:";cin>>d;
		cout<<"ENTER THE NUMBER UPTO WHICH THE SUM SHOULD BE CALCULATED:";cin>>l;
		cout<<"OUTPUT:"<<ap(a,d,l);
	}
	
