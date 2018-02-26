#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,r,o,rev=0;
	cout<<"Enter a number : ";
	cin>>n;
	o=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10 + r;
		n=n/10;
	}
	if(rev==o)  
	{
		cout<<"Its Palindrome"<<endl;
	}
	else
	{
		cout<<"Its Not Palindrome"<<endl;
	}
	getch();
}
