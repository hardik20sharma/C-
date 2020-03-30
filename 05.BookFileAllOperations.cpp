#include<iostream>
using namespace std;
#include <fstream>
#include <stdio.h>
#include <string.h>

class Book
{
	private:
	int bookno;
	char name[50];
	float price;

	public:
	int rBookNo()
	{
		return bookno;
	}
   char* rBookName()
   {
   	return name;
   }
	void input()
	{
		cout<<"Enter Book No: ";
		cin>>bookno;
		cout<<"Enter Name   : ";
		gets(name);
		cout<<"Enter price  : Rs";
		cin>>price;
		cout<<endl;
	}
	void display()
	{
		cout<<bookno;
		cout<<"\t\t";
		cout<<name;
		cout<<"\t\t";
		cout<<price<<endl;
	}
};
Book obj;
ofstream fout;
ifstream fin;

int calcBytes()
{
	int byte;
	fin.open("book.dat",ios::binary|ios::in);
	fin.read((char*)&obj,sizeof(obj));
	while (fin)
		fin.read((char*)&obj,sizeof(obj));
	byte = fin.tellg()-1;
	fin.close();
	return byte;
}

int main()
{
	int choice, srch,bookno,flag,pos;
   char bookname[50],srchname[50];
   ofstream temp;
   fstream f;
	do
	{
		cout<<"\nMENU OPTIONS\n"
			<<"\n1. Input Details"
			<<"\n2. Display Details"
			<<"\n3. Search for a Record"
			<<"\n4. Modify a Record"
			<<"\n5. Delete a Record"
			<<"\n6. Exit Program"
			<<"\n\nEnter your choice: ";
		cin>>choice;

		if (choice>=2 && choice<=5 && calcBytes()==-1)
		{
			cout<<"\nNo Records Available!\n";
			continue;
		}
      if (choice>=1 && choice<=6)
		switch (choice)
		{
			case 1:
				fout.open("book.dat",ios::binary|ios::app);
				obj.input();
				fout.write((char *)&obj, sizeof(obj));
				fout.close();
				break;

			case 2:

				fin.open("book.dat",ios::binary|ios::in);
				cout<<"\nBOOK NO\t\tNAME\t\t\tPRICE\n";
				fin.read((char *)&obj, sizeof(obj));
				while (fin)
				{
					obj.display();
					fin.read((char *)&obj, sizeof(obj));
				}
				fin.close();
				break;

			case 3:
				fin.open("book.dat",ios::binary|ios::in);
				cout<<"\nEnter Book Name to search Record: ";
				gets(srchname);
				flag = 0;
				fin.read((char*)&obj, sizeof(obj));
				while (fin)
				{
					strcpy(bookname, obj.rBookName());
					if (!strcmpi(bookname,srchname))
					{
						cout<<"\nBOOK NO\t\tNAME\t\t\tPRICE\n";
						obj.display();
						flag = 1;
						break;
					}
					fin.read((char*)&obj,sizeof(obj));
				}
				if (flag==0)
					cout<<"\nERROR: Record Not Found!\n";
				fin.close();
				break;

			case 4:
				f.open("book.dat",ios::binary|ios::in|ios::out);
				pos=-1;
				cout<<"\nEnter Book No. to modify Record: ";
				cin>>srch;
				f.read((char*)&obj, sizeof(obj));
				while (f)
				{
					bookno = obj.rBookNo();
					if (srch==bookno)
					{
						cout<<"\nBOOK NO\t\tNAME\t\t\tPRICE\n";
						obj.display();
						pos = f.tellg()-sizeof(obj);
						break;
					}
					f.read((char*)&obj,sizeof(obj));
				}
				if (pos!=-1)
				{
					obj.input();
					f.seekp(pos);
					f.write((char*)&obj,sizeof(obj));
					cout<<"\nRecord Modified Successfully!\n";
				}
				else
					cout<<"\nERROR: Record Not Found!\n";
				f.close();

				break;
			case 5:
				fin.open("book.dat",ios::binary|ios::out);
				flag = 0;
				cout<<"\nEnter book No. to delete Record: ";
				cin>>srch;
				temp.open("temporary.dat",ios::out|ios::binary);
				fin.read((char*)&obj,sizeof(obj));
				while (fin)
				{
					bookno = obj.rBookNo();
					if (srch!=bookno)
						temp.write((char*)&obj,sizeof(obj));
					else
						flag=1;
					fin.read((char*)&obj,sizeof(obj));
				}
				temp.close();
				fin.close();
				if (flag==0)
					cout<<"\nERROR: Record Not Found!\n";
				else
				{
					cout<<"\nRecord Deleted Successfully!\n";
					remove("book.dat");
					rename("temporary.dat","book.dat");
				}
				break;

			case 6:
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tThank you"
					<<" for using this Program!";
				break;
			default:
				cout<<"\nERROR: Invalid Choice";
		}
	} while (choice!=6);
}
