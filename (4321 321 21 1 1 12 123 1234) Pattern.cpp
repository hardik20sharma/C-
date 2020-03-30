#include<iostream>
using namespace std;
int main()
	{	
		int n,z;
		cout<<"Enter the number of lines:";
		cin>>n;
		cout<<"Enter the number of times you want to run the pattern:";
		cin>>z;
		for(int m=1; m<=z; m++)
		{
			for (int i=n; i>=1; i--)
			{
				for (int j=i; j>0; j--)
					{
						cout<<j<<" ";
					}
				cout<<"\n";
			}
			for (int k=1; k<=n; k++)
			{
				for (int l=1; l<=k; l++)
						{
						cout<<l<<" ";
					}
				cout<<"\n";
			}
		cout<<"\n";
		}
	}
