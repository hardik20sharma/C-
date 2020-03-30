#include<iostream>
using namespace std;
int main()
{
	cout<<"\tBINDARY SEARCH";
	int t,lb=0,ub,a[100],src,flag;
	char ch;
	cout<<"Enter the number of terms:";cin>>t;
	for(int i=0; i<t; i++)
	{
		cout<<"Enter number "<<i+1<<":";
		cin>>a[i];
	}
	cout<<"Are the numbers in ascending order(Y/N):";cin>>ch;
	if(ch=='N'|| ch=='n')
	{
		int temp;
 		for(int i=0;i<t;i++)
		 	{
 				for(int j=0;j<t-i;j++)
 				{
 					if(a[j]>a[j+1])
 					{
 						temp=a[j];
						a[j]=a[j+1];
 						a[j+1]=temp;
 					}
 				}
 			}
		cout<<"The new array in ascedning order is:\n";
		for(int i=0; i<t; i++)
		 	cout<<a[i]<<" ";
	}
	cout<<"\nEnter the term you want to search for:";cin>>src;
	ub=t-1;
	int mid=(lb+ub)/2;
	while(lb<=ub)
	{
		if(a[mid]<src)
			lb=mid+1;
		else if(a[mid==src])
		{
			cout<<src<<" found at location "<<mid+1; break;
		}
		else if(a[mid]>src)
			ub=mid-1;
		mid=(lb+ub)/2;	
	}
	if(lb>ub)
		cout<<"NOT FOUND!"<<"src not found in list";
	
}

