#include<iostream>
using namespace std;
#include<string>
struct stock
{
	char product_name[30];
	int product_price[30];
	int product_quantity[30];	
};
struct customer
{
	char product_name[30];
	int product_quantity[30];
};
int main()
{	
	int t1,t2,flag=0,sum;
	cout<<"/t/tINPUT STOCK";
	cout<<"Enter the number of products:";
	cin>>t1;
	cout<<"S No./t Product Name/t Product Price/t Stock";
	for(int i=0; i<t1; i++)
	{
		cout<<i+1<<"/t"; cin>>stock.product_name[i];  
		cout<<"/t"; cin>>stock.product_price[i];
		cout<<"/t"; cin>>stock.product_quantity[i];
		cout<<endl;
	}
	cout<<"Thanks";
	cout<<"Welcome Customer!";
	cout<<"How many products would you like to take?";cin>>t2;
	cout<<"S No./t Unique Product Number/t Quantity";
	for(int i=0; i<t2; i++)
	{
		cout<<i+1<<"/t"; cin>>customer.product_name[i];
		for(int j=0; j<t1; j++)
		{
			if(customer.product_name[i]==stock.product_name[j])
			{
				flag=1;break;
			}
		}
		if(flag==0)
			cout<<"PRODUCT NOT THERE! SORRY!"; 
		cout<<"/t"; cin>>customer.product_quantity[i];
		if(customer.product_quantity > stock.product_quantity)
			cout<<"SORRY we are out of stock!";
		cout<<endl;
	}
	cout<<"/t/tFINAL BILL";
	cout<<"INVOICE NUMBER:1/t/t/t/tDate:06/02/2017";
	cout<<"S No./t Product Name/t Product Price";
	for(int i=0; i<t2; i++)
	{
		cout<<i+1; cout<<customer.product_name[i]<<"/t";
		for(int j=0; j<t1; j++)
		{
			if(customer.product_name[i]==stock.product_name[j])
			{
				cout<<stock.product_price[j];
				sum+=stock.product_price[j];
				break;
			}
		}
		cout<<endl;
	}
	cout<<"GRAND TOTAL:"<<sum;
}
