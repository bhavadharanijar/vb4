#include<stdio.h>
int main()
{
int n,n1,k,i,j=0,s[10],sum=0,tmp=1;
printf("enter n1");
scanf("%d",&n1);
printf("enter n");
scanf("%d",&n);
while(n1!=0)
{
k=n1%10;
n=n1/10;
s[j]=k;
j++;
sum++;
}
for(i=sum-1;i>=0;i--,tmp++)
{
	if(tmp!=n)
	{
	printf("%d",s[i]);
}
}
return 0;
}
