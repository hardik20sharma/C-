#include<iostream>
using namespace std;
#include<cmath>
int sq_rec_area(float l, float b)
{
	float area=l*b;
	return(area);
}
int sq_rec_per(float l, float b)
{
	float per=2*(l+b);
	return(per);
}
int main()
{
		char ch;
	for(int i=1; ch!=4; i++)
	{
		cout<<"\nSHAPE MENU DRIVEN\n ";
		cout<<"1. Square\n 2.Rectangle\n 3.Triangle\n 4.Exit\n CHOOSE YOU OPTION(1~4):\n";
		cin>>ch;
		switch(ch)
		{
			case '1':float a;
			cout<<"\nEnter the length of the side:";cin>>a;
			cout<<"\nArea of the square:"<<sq_rec_area(a,a);
			cout<<"\nPerimeter of the square:"<<sq_rec_per(a,a);
			break;
			
			case '2':float l,b;
			cout<<"\nEnter the length of the rectangle:";cin>>l;
			cout<<"\nEnter the breath of the rectangle:";cin>>b;
			cout<<"\nArea of the rectangle:"<<sq_rec_area(l,b);
			cout<<"\nPerimeter of the rectangle:"<<sq_rec_per(l,b);
			break;
			
			case '3':float x,y,z;
			cout<<"\nEnter the 1st side:";cin>>x;	
			cout<<"\nEnter the 2nd side:";cin>>y;
			cout<<"\nEnter the 3rd side:";cin>>z;
			float s=(x+y+z)/2;
			cout<<"\nArea of the triangle:"<<sqrt(s*(s-x)*(s-y)*(s-z));
			cout<<"\nPerimeter of the triangle:"<<(x+y+z);
			break;
			
			case '4':return(0);
			break;
		}
	}
}
