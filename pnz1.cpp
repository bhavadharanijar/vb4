#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int num;
 cout<<"Enter a number : ";
 cin>>num;
 if(num>0)
   cout<<"Number is Positive";
 else if(num<0) 
   cout<<"Number is Negative";
 else
   cout<<"Number is Zero";
 getch();
}
