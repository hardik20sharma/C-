#include<iostream>
using namespace std;

struct node
	{	int info; node *next;	} *start, *rear, *newptr, *ptr, *save;
	
node *create_new_node(int inf)
{
	ptr=new node;
	ptr->info=inf;
	ptr->next=NULL;
	return ptr;		
}

void insert_beg(node *n)
{
	if(start==NULL)
		start=n;
	else
	{
		save=start;
		start=n;
		n->next=save;
	}
}

void insert_end(node *n)
{
	if(start==NULL)
		start=rear=n;
	else
	{
		rear->next=n;
		rear=n;	
	}	
}

void display(node *n)
{
	while(n!=NULL)
	{
		cout<<n->info<<"->";
		n=n->next;
	}
	cout<<"END";
}

void delete_beg()
{
	if(start==NULL)
		cout<<"UNDERFLOW ! NO LIST !";
	else
	{
		ptr=start->next;
		delete start;
		start=ptr;
	}
}

int main()
{
	start=NULL;
	rear=NULL;
	int inf, ch1=0;
	char ch='y';
	while(ch=='y' || ch=='Y')
	{
		cout<<"Enter the information:"; cin>>inf;
		cout<<"\nCreating a new node!";
		newptr=create_new_node(inf);
		if(!newptr)
			{	cout<<"\nNew node can't be created !"; return 0;	}
		else
			cout<<"\nNew node created !";
		
		y:
		cout<<"\nWish to insert new node in beginning(1) or rear(2):"; cin>>ch1;
		if(ch1==1)
			insert_beg(newptr);
		else if(ch1==2)
			insert_end(newptr);
		else
			{	cout<<"\nWrong input ! Try Again !!";	goto y;	}
		
		cout<<"\n\nThe list looks like:\n";display(start);
		cout<<"\n\nStill want to continue ?:"; cin>>ch;
	}
	cout<<"Do you want to delete nodes?"; cin>>ch;
	while(ch=='y' || ch=='Y')
	{
		delete_beg();
		cout<<"\nThe list looks like:";
		display(start);
		cout<<"\nStill want to delete nodes?"; cin>>ch;		
	}
}
