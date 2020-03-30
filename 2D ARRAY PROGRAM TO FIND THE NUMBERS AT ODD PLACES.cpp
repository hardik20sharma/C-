#include<iostream>
using namespace std;
int main()
{
	int m, n, a[100][100], b[100][100], c[200], d[200], x=0, y=0, p, q;
	cout<<"Enter the number of rows for array 1:";cin>>m;
	cout<<"Enter the number of coloumns for array 1:";cin>>n;
	cout<<"INPUT FOR ARRAY 1\n";
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"Enter number ("<<i<<","<<j<<"):";
			cin>>a[i][j];
			c[x]=a[i][j];
			x+=1;
		}
	}
	cout<<"Enter the number of rows for array 2:";cin>>p;
	cout<<"Enter the number of coloumns for array 2:";cin>>q;
	cout<<"INPUT FOR ARRAY 2\n";
	for(int i=0; i<p; i++)
	{
		for(int j=0; j<q; j++)
		{
			cout<<"Enter number ("<<i<<","<<j<<"):";
			cin>>b[i][j];
			d[y]=b[i][j];
			y+=1;
		}
	}
	cout<<"\nARRAY 1 IN TABULAR FORM:\n";
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;	
	}
	cout<<"\nARRAY 2 IN TABULAR FORM:\n";
	for(int i=0; i<p; i++)
	{
		for(int j=0; j<q; j++)
			cout<<b[i][j]<<" ";
		cout<<endl;	
	}	
	cout<<"\nARRAY 1 OUTPUT:";
	for(int x=0; x<(m*n); x++)
		{
			if(x%2==0)
				cout<<c[x]<<" ";
		}
	cout<<"\nARRAY 2 OUTPUT:";
	for(int y=0; y<(p*q); y++)
		{
			if(y%2==0)
				cout<<d[y]<<" ";
		}																																																																																													
}

