#include<iostream>
using namespace std;
int main()
{
int i,j,k,n;
cout<<"Enter number of rows:";cin>>n;
for(i=1; i<=n; i++)
	{
	for(j=1; j<=n-i; j++)
		{
			cout<<" ";
		}	
	for(k=1; k<=(2*i)-1; k++)
		{
			if(i<n)
			if(k==1 || k==(2*i)-1)
				cout<<i;
			else
				cout<<i;
			else if(i==n)
				cout<<i;
		}
	cout<<endl;
	}
}
