#include<stdio.h>
int main()
{
int n,i,v,b,a;
char s[10];
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%c",&s[i]);
}
for(i=1;i<=n;i++)
{
printf("%s",s);
v=s[i];
b=s[i+1];
a=s[i+2];
s[i]=b;
s[i+1]=a;
s[i+2]=v;
}
return 0;
}
