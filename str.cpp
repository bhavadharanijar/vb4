#include <iostream>
#include<string.h>
using namespace std;

int main() 
{   char s1[100],s2[100];
    int l1,l2;
    cout<<"\nEnter two strings";
    cin>>s1>>s2;
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1>l2)
    {
    	cout<<"\nlarge string is"<<"\n"<<s1;
    }
    else
    {
    	cout<<"\nlarge string is"<<"\n"<<s2;
    }
	return 0;
}
