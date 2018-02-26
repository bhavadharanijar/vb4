#include <iostream>
using namespace std;
void main()
{
int num,m =20,n=40;
clrscr();
cout<<"enter frst num"<<endl;
cin>>m;
cout<<"enter second num"<<endl;
cin>>n;
cout<<"Odd Numbers in a given range m to n:<<endl;
for(num=m;num<=n;num++)
{
if(num%2==1)
cout<<num;
}
getch();
}
