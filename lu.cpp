#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
  clrscr();
  char str[20],str1[20];
  int i;
  cout<<"Enter the String:"<<endl;
  cin>>str;
  for(i=0;i<=strlen(str);i++)
  {
	    if(str[i]>=97 && str[i]<=122)
	    {
		str[i]=str[i]-32;
	    }
  }
  cout<<"The String in Uppercase = "<<str<<endl;
  cout<<"Enter the string:"<<endl;
	cin>>str1;
	str1=str1+32;
	cout<<"character in lowercase = "<<str1<<endl;
getch();
}
