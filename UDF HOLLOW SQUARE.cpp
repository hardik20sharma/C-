#include<iostream>
using namespace std;
int square(int n)
{
	for(int i=1; i<=n; i++)
	{
		cout<<"\t";
		if(i==1 || i==n)
		{
			for(int k=1; k<=n; k++)
			cout<<"* ";	
		}
		else
		{
			cout<<"*";
			for(int l=1; l<=(n-2); l++)
			cout<<"  ";
			cout<<" *";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter the length of the side(square):";cin>>n;
	square (n);
}
