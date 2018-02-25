#include<conio.h>
#include<iostream.h>
void main() 
{
clrscr();
int x,y,z;
cout <<"Enter any three numbers: ";
cin>>x;
cin>>y;
cin>>z;
if(x>=y&&x>=z) 
{
cout<<"highest number:"<<x;
}
if(y>=x&&y>=z) 
{
cout<<"highest number:"<<y;
}
if(z>=x&&z>=y) 
{
cout<<"highest number:"<<z;
}
getch();
}
