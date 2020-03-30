#include<iostream>
using namespace std;
int main()
	{
		int n;
		cout<<"Enter the number of terms:";
		cin>>n;
		for(int l=1; l<=n; l++)
			{
				for(int k=1;k<=l;k++)
					{
						cout<<k<<" ";
					}
				cout<<"\n";
			}
		for(int i=(n-1); i>=0;i--)
			{
				for(int j=1; j<=i; j++)
				{
					cout<<j<<" ";
				}
			cout<<"\n";	
			}
	}
