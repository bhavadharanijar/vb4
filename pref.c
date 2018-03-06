#include<stdio.h>
#include<string.h>
void main()
{
string a[200] = {"Vishak","Vinitha"};
int n = sizeof(a) / sizeof(a[0]);
string ans = commonPrefix(a, n);
if (ans.length())
printf ("The longest common prefix is - %s",ans.a[].str());
else
printf("There is no common prefix");
}
