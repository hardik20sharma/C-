#include<iostream>
using namespace std;
#include<string>
int udf(char st[])
{	
	int a=0, b=0, c=0;
	for(int i=0; i!='\0'; i++)
	{
		char k=st[i];
		if(k>='a'&& k<='z')
		a+=1;
		else if(k>='A'&& k<='Z')
		b+=1;
		else if(k>='0'&& k<='9')
		c+=1;
	}
	cout<<"Alphabets:"<<a+b<<endl;
	cout<<"Lower Alphabets:"<<a<<endl;
	cout<<"Upper Alphabets:"<<b<<endl;
	cout<<"Digits:"<<c;
}
int main()
{
	char str[30];
	cout<<"Enter the string:";gets(str);
	udf(str);
}
