#include<iostream>
using namespace std;
int main()
{
	long n,first=0,second=1,next,sum=0,a;
	cout<<"Enter the number of terms:";cin>>n;
	cout<<"0 ";
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			next=i;	
		}
		else
		{
			next=first+second;
			
			sum+=next;
			first=second;
			second=next;	
		}
	cout<<next<<" ";
	}
	a=sum+1;
	cout<<"\nSUM IS:"<<a;
}
