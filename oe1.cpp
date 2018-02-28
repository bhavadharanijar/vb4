#include <iostream>
using namespace std;
void main()
{
     char str[20],temp;
     int i,j;
     clrscr();
     cout<<"Enter a string :"<<endl;
     cin>>str;
     cout<<"your string is:"<<str<<endl;
     for(i=0;i<strlen(str);i=i+2)
{
     temp = str[i];
     str[i] = str[i+1];
     str[i+1] = temp;
}
     cout<<"Swap String is:"<<str<<endl;
     getch();
}
