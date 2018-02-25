#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int y;
	cout<<"Enter year :";
	cin>>y;
	if((y%4==0)&&(y%100!=0))
	{
		cout<<"This is a Leap Year";
	}
	else if(y%100==0)
	{
		cout<<"This is not a Leap Year";
	}
	else if(y%400==0)
	{
		cout<<"This is a Leap Year";
	}
	else
	{
		cout<<"This is not a Leap Year";
	}
	getch();
}
