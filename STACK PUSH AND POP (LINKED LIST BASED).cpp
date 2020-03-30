#include<iostream>
using namespace std;

struct node
	{	int info; node *next; } *top, *newptr, *save, *ptr;

node *create_new_node(int inf)
{
	node *ptr;
	ptr= new node;
	ptr->info=inf;
	ptr->next=NULL;
	return ptr;
}

void push(node *np)
{
	if(top==NULL)
		top=np;
	else
	{
		save=top;
		top=np;
		np->next=save;	
	}
}

int pop(node *np)
{
	if(top==NULL)
		{	cout<<"UNDERFLOW!"; return -1;	}	
	else
	{
		ptr=top;
		top=top->next;
		delete ptr;
	}
	return 0;
}

void display(node *np)
{
	while(np!=NULL)
	{
		cout<<np->info;
		np=np->next;
		cout<<endl;
	}
}

int main()
{
	top=NULL;
	int inf;
	char ch='y';
	while(ch=='y' || ch=='Y')
	{
		cout<<"Enter the information:"; cin>>inf;
		cout<<"\nCreating new node:";
		newptr=create_new_node(inf);	
		if(!newptr)
			{	cout<<"\nCreating new node was not possible!"; return 0;	}
		else
			cout<<"\nNew node Created !";
		push(newptr);
		cout<<"\nThe stack is:\n";
		display(top);
		cout<<"\nWant to add more information:"; cin>>ch;
	}
	cout<<"\nWish to delete information?:";	cin>>ch;
	while(ch=='y' ||ch=='Y')
	{
		if(pop(top)==-1)
			return 0;
		display(top);
		cout<<"Still want to delete more information?:"; cin>>ch;
	}
	return 0;
}
