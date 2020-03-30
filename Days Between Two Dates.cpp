#include<iostream>
using namespace std;

int main()
{
	int d1, m1, y1, d2, m2, y2, days=0, year, month;
	cout<<"Date 1: Day\tMonth\tYear\n\t";
	cin>>d1>>m1>>y1;
	cout<<"Date 2: ";
	cin>>d2>>m2>>y2;

//Situations with no possibilities	
	if(y1>y2)
	{
		cout<<"Not Possible";	return(0);
	}
	else if(m1>m2 && y1==y2)
	{
		cout<<"Not Possible";	return(0);
	}
	else if(d1>d2 && m1==m2 && y1==y2)
	{
		cout<<"Not Possible";	return(0);
	}
	
	int month_day[12][2]={{1,31}, {2,28}, {3,31}, {4,30}, {5,31}, {6,30}, {7,31}, {8,31}, {9,30}, {10,31}, {11,30}, {12,31}};

//Year
	if(y2>y1)
	{
		year=y1;
		if(m1>m2)
		{
			while(year!=(y2-1))
			{
				if(year%4!=0)
					days+=365;
				else if(year%100!=0)
					days+=366;
				else if(year%400!=0)
					days+=365;
				else
					days+=366;
				year++;		
			}
		}
		else
		{
			while(y2!=year)
			{
				if(year%4!=0)
					days+=365;
				else if(year%100!=0)
					days+=366;
				else if(year%400!=0)
					days+=365;
				else
					days+=366;
				year++;		
			}
		}
	}

//Month
	month=m1;
	while(month!=m2)
	{	
		days+=month_day[month-1][1];
		month++;
		if(month==13)
			month=1;
	}

//Days
	days+=d2-d1;
	cout<<endl<<days;
}
