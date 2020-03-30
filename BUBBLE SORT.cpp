#include<iostream>
using namespace std;
int main()
{
	int a[25], t,store;
	cout<<"Enter the number of terms:";cin>>t;
	for(int i=0; i<t; i++)
	{
		cout<<"Enter number "<<i+1<<":";
		cin>>a[i];
	}
	for(int i=0; i<t; i++)
	{
		for(int j=0; j<t-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				store=a[j];
				a[j]=a[j+1];
				a[j+1]=store;
			}
		}
	}
	cout<<"Numbers in ascending order:";
	for(int i=0; i<t; i++)
		cout<<a[i]<<" ";
	cout<<"\nNumbers in descending order:";
	for(int i=(t-1); i>=0; i--)
		cout<<a[i]<<" ";
}
