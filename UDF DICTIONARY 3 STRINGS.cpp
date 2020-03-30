#include<iostream>
using namespace std;
#include<cstring>
int udf(char a[], char b[], char c[] )
{
	int d=strlen(a), e=strlen(b), f=strlen(c), min;
	if(d>e && d>f)
	{
		if(f>e)
			min=e;
		else
			min=f;
	}
	else if(e>f && e>d)
	{
		if(f>d)
			min=d;
		else 
			min=f;
		
	}
	else if(f>d && f>e)
	{
		if(d>e)
			min=e;
		else
			min=f;
	}
	for(int i=0; i<min; i++)
	{
		int x=a[i], y=b[i], z=c[i];
		if(x>y && x>z)
		{
			if(y>z)
				cout<<a<<" "<<b<<" "<<c;
			else
				cout<<a<<" "<<c<<" "<<b;
			break;
		}
		else if(y>x && y>z)
		{
			if(x>z)
				cout<<b<<" "<<a<<" "<<c;
			else
				cout<<b<<" "<<c<<" "<<a;
			break;
		}
		else if(z>x && z>y)
		{
			if(x>y)
				cout<<c<<" "<<a<<" "<<b;
			else
				cout<<c<<" "<<b<<" "<<a;
			break;
		}
		else if(y==x && x==z)
		{
			if(i<(min-1))
				continue;
			else
				cout<<"Same Words";
		}
	}
}
int main()
{
	char st1[30], st2[30], st3[30];
	cout<<"Enter the first word:"<<endl; gets(st1);
	cout<<"Enter the second word:"<<endl; gets(st2);
	cout<<"Enter the third word:"<<endl; gets(st3);
	cout<<"OUTPUT:"<<endl;
	udf(st1,st2,st3);
	
}
