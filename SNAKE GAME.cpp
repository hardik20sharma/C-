#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

bool gameOver;
const int width=20, height=20;
int x, y, fruitX, fruitY, score, tailX[100], tailY[100], nTail;

enum eDirection 
	{ STOP=0, LEFT, RIGHT, UP, DOWN } dir;

void Setup()
{
	gameOver=false;
	dir=STOP;
	x=width;
	y=height;
	fruitX=rand() % width;
	fruitY=rand() % height;
	score=0;
}

void Draw()
{
	system("cls");
	for(int i=0; i<width+1; i++)
		cout<<"#";
	cout<<endl;
	
	for(int i=0; i<height; i++)
	{
		for(int j=0; j<width; j++)
		{
			if(j==0 || j==(width-1) )
				cout<<"#";
			if(i==y && j==x)
				cout<<"O";
			else if(i==fruitY && j==fruitX)
				cout<<"F";
			else
			{
				bool print=false;
				for(int k=0; k<nTail; k++)
					if(tailX[k]==j && tailY[k]==i)
					{
						cout<<"o";
						print=true;			
					}
					
				if(!print)
					cout<<" ";
			}
		}
		cout<<endl;
	}
	
	for(int i=0; i<width+1; i++)
		cout<<"#";	
	cout<<endl<<"Score:"<<score<<endl;
	
}

void Input()
{
	if( _kbhit() )
		switch(getch())
		{
			case 'a': dir=LEFT; break;
			case 's': dir=DOWN; break;
			case 'd': dir=RIGHT; break;
			case 'w': dir=UP; break;
			case 'x': gameOver=true; break;
		}
}

void Logic()
{
	int prevX=tailX[0], prevY=tailY[0], prev_storeX, prev_storeY;
	
	tailX[0]=x;
	tailY[0]=y;
	
	for(int i=1; i<nTail; i++)
	{
		prev_storeX=tailX[i];
		prev_storeY=tailY[i];
		tailX[i]=prevX;
		tailY[i]=prevY;
		prevX=prev_storeX;
		prevY=prev_storeY;
	}
	
	switch(dir)
	{
		case LEFT:  x--; break;
		case RIGHT: x++; break;
		case UP:    y--; break;
		case DOWN:  y++; break;		
	}
	//if(x>width || x<0 || y>height || y<0)
	// 	gameOver = true;
	
	if(x>=width)
		x=0;
	else if(x<0)
		x=width-1;
	
	if(y>=height)
		y=0;
	else if(y<0)
		y=height-1;
		
	for(int i=0; i<nTail; i++)
		if(tailX[i]==x && tailY[i]==y)
			gameOver=true;		
	
	if(x==fruitX && y==fruitY)
	{
		score+=10;
		fruitX=rand() % width;
		fruitY=rand() % height;
		nTail++;
	}	
}

int main()
{
	Setup();
	while(!gameOver)
	{
		Draw();	
		Input();
		Logic();
		Sleep(100);
	}
		
}

