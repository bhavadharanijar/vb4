#include<iostream.h>
#include<conio.h>
void main()
{
int n,v=0;
clrscr();
cout<<"Enter your num : ";
cin>>n;
while(n>0)
{
n=n/10;
v++;
}
cout<<"\n num of digits in given number is: "<<v;
getch();
} 
