#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of terms:"; cin>>n;
	for(int i=0; i<n; i++)
	{
		for(int j=1; j<=((2*i)+1);j++)
		{
			if(j%2==0)
			{
				cout<<"A";
			}
			if(j%2==1)
			{
				cout<<"*";
			}
		}
	cout<<"\n";
	}
}
