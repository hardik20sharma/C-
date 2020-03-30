#include<iostream>
using namespace std;
#include<math.h>
int main()
{
int m,n,power=1,knowledge=1,y,x,t;
cin>>t;
while(t--)
{
	int flag=0;
	cin>>n>>m>>x>>y;
	if( n>pow(10,2)||m>pow(10,2)||x>pow(10,2)||y>pow(10,2)) 
	{
		for(int i=0;i<=100;i++)
		{
			for(int j=0;j<=100;j++)
			{
	 			if(((i*x)+1==n)&&((j*y)+1==m))
	 			{
	  				flag++;
					break;
	 			}
	 			else if(((i*x)+2==n)&&((j*y)+2==m))
				{
					flag++;
	  				break;
	 			}
	  			else
	  				continue;
			}
		}
		if(flag)
			cout<<"Chefirnemo"<<endl;
		else
			cout<<"Pofik"<<endl;
	}
	
	else if(n>pow(10,9)||m>pow(10,9)||x>pow(10,9)||y>pow(10,9))
	{
		for(int i=0;i<=1000000000;i++)
		{
			for(int j=0;j<=1000000000;j++)
			{
	 			if(((i*x)+1==n)&&((j*y)+1==m))
	 			{
	  				flag++;
					break;
	 			}
	 			else if(((i*x)+2==n)&&((j*y)+2==m))
				{
					flag++;
	  				break;
	 			}
	  			else
	  				continue;
			}
		}
		if(flag)
			cout<<"Chefirnemo"<<endl;
		else
			cout<<"Pofik"<<endl;
	}
	else
		cout<<"Constrain Violation";
}
}
