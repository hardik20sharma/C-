#include<iostream>
using namespace std;
int main()
{	
	double n, a[100],src;
	cout<<"LINEAR SEARCH\nEnter the number of terms:";cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"Enter number "<<i+1<<":";
		cin>>a[i];
	}
	cout<<"Enter the term you want to search for:";cin>>src;		
	for(int i=0; i<n; i++)
	{
		if(src==a[i])
		{
			cout<<"NUMBER FOUND\nPOSITION AT:"<<i+1;
			break;
		}
		else if((n-1)==i)
		{
			cout<<"NUMBER NOT FOUND";
		}
		else
			continue;		
	}
}

