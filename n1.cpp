#include<iostream.h>
using namespace std;
void main()
{
int n,re=0,r,a;
clrscr();
cout<<"Enter the num: ";
cin>>n;
a=n;
while(n>0)
{
 r=n%10;
 re=re*10+r;
 n=n/10;
}
cout<<"\nReverse of "<<a<<"is:"<<re;
getch();
}
