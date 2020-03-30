#include<iostream>
using namespace std;

const int size=7;
int cqueue[size], front=-1, rear=-1;

int insert_in_cq(int cqueue[size], int item)
{
	if( (front==0 && rear==size-1) || (front==rear+1) )
		return -1;
	else if(rear==-1)
		front=rear=0;
	else if(rear==size-1)
		rear=0;
	else 
		rear++;
	cqueue[rear]=item;
	return 0;
}

void display(int cqueue[size], int front, int rear)
{
	int i=0;
	cout<<"\nNow the queue is (front is shown as >>>, rear is shown as <<< and free space as -):\n";
	if(front==-1)
		return;
	if(rear>=front)
	{
		for(i=0; i<front; i++)
			cout<<"-";
		cout<<">>>";
		for(i=front; i<rear; i++)
			cout<<cqueue[i]<<" ";
		cout<<cqueue[rear]<<"<<<\n";
	}
	else
	{
		for(i=0; i<rear; i++)
			cout<<cqueue[i]<<" ";
		cout<<cqueue[rear]<<"<<<";
		for( ; i<front; i++)
			cout<<"-";
		cout<<">>>";
		for(i=front; i<size; i++)
			cout<<cqueue[i]<<" ";
		cout<<"\t...wrap around";
	}
}

int del_in_cq(int cqueue[size])
{
	int ret;
	if(front==-1)
		return -1;
	else
	{
		ret=cqueue[front];
		if(front==rear)
			front=rear=-1;
		else if(front==size-1)
			front=0;
		else 
			front++;
	}
	return ret;
}

int main()
{
	int item, res, ch;
	do
	{
		cout<<"\n\t\t\tCircular Queue\n\n";
		cout<<" \t1. Insert\n \t2. Delete\n \t3. Display\n \t4. Exit\n Enter your choice(1--4):"; cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\nEnter ITEM for insertion:"; cin>>item;
				res=insert_in_cq(cqueue,item);
				if(res==-1)
					cout<<"OVERFLOW !!";
				else
					display(cqueue,front,rear);
			break;
			
			case 2:
				if ( del_in_cq(cqueue)== -1 )
					cout<<"UNDERFLOW";
				else
					display(cqueue,front,rear);
			break;
			
			case 3:
				display(cqueue,front,rear);
				break;
			
			case 4:
				break;
			
			default:
				cout<<"Valid choices are (1-4):";
				break;
		}
	} while(ch!=4);
	return 0;
}
