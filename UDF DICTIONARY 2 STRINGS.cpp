#include<iostream>
using namespace std;
#include<cstring>
int udf(char a[], char b[])
{
	int d=strlen(a), e=strlen(b), min;
	if(d>e)
		min=e;
	else
		min=d;
	for(int i=0; i<min; i++)
	{
		int x=a[i], y=b[i];
		if(x>y)
		{
			cout<<b<<" "<<a;
			break;
		}
		else if(y>x)
		{
			cout<<a<<" "<<b;
			break;
		}
		else if(y==x)
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
	char st1[30], st2[30];
	cout<<"Enter the first word:"<<endl; gets(st1);
	cout<<"Enter the second word:"<<endl; gets(st2);
	cout<<"OUTPUT:"<<endl;
	udf(st1,st2);
	
}
