#include<iostream>
using namespace std;
int triangle(int n)
	{
		for(int i=1; i<=n; i++)
			{
			for(int j=1; j<=(n-i); j++)
				{										//Program to print
					cout<<" ";							//     		1
				}										//	   	2		2
			for(int k=1; k<=(2*i)-1; k++)				//	  3				3
				{										//	 44444444444444444
					if(i<n)							
						{
						if(k==1 || k==(2*i)-1)
						cout<<i;
						else
						cout<<" ";
						}
					else if(i==n)
					cout<<i;
				}
			cout<<endl;
			}
			
	}
int main()
	{
		int n;
		cout<<"Enter the number of rows:";cin>>n;
		triangle(n);
	}
