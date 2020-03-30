#include<iostream>
using namespace std;
int main()
{
	int a[4][3],sum1=0,sum2=0;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<"Enter number ("<<i<<","<<j<<"): ";
			cin>>a[i][j];
		}
	}
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<a[i][j]<<" ";
			sum1+=a[i][j];				
		}
	cout<<"\tROW "<<i+1<<" SUM---> "<<sum1<<endl;
	sum1=0;
	}
	for(int j=0; j<3; j++)
	{
		for(int i=0; i<4; i++)
			sum2+=a[i][j];	
	cout<<"\tCOLOUMN "<<j+1<<" SUM---> "<<sum2<<endl;
	sum2=0;
	}	
}
