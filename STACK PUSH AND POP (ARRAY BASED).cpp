#include<iostream>
using namespace std;

const int size =50;

int push(int stack[size], int &top, int info)
{
	if(top==size-1)
		{	cout<<"Overflow Aborting !"; return -1;	}
	else
		{	top++; stack[top]=info;	}
	return 0;
}

int pop(int stack[size], int &top)
{
	if(top==-1)
		return -1;
	else
		top--;
	return 0;
}

void display(int stack[size], int top)
{
	cout<<stack[top]<<"<--\n";
	for(int i=top-1; i>=0; i--)
		cout<<stack[i]<<endl;
}

int main()
{
	int stack[size], top=-1, info, res;
	char ch='y';
	while(ch=='y' || ch=='Y')
	{
		cout<<"Enter information for insertions:"; cin>>info;
		res=push(stack,top,info);
		if(res==-1)
			return 0;
		cout<<"\nThe stack is:\n";
		display(stack,top);
		cout<<"Want to add more information?"; cin>>ch;
	}
	cout<<"Want to delete information?:"; cin>>ch;
	while(ch=='y' || ch=='Y')
	{
		if(pop(stack,top)==-1)
			{	cout<<"UNDERFLOW!"; return 0;	}
		display(stack, top);
		cout<<"Want to delete more information?:"; cin>>ch;
	}
}
