#include<iostream.h>
using namespace std;
void main()
{
clrscr();
char str1[100], temp;
int i=0,j;
cout<<"Enter the String:";
cin>>str1;
i=0;
j=strlen(str1)-1;
while(i<j)
{
temp=str1[i];
str1[i]=str1[j];
str1[j]=temp;
i++;
j--;
}
cout<<"reversed string is"<<str1<<endl;
getch();
}
